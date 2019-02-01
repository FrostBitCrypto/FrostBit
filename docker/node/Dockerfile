FROM ubuntu:16.04

ARG NETWORK=live

ENV BOOST_ROOT=/tmp/boost_install

ADD ci /tmp/ci

RUN apt-get update -qq && apt-get install -yqq \
    build-essential \
    cmake \
    g++ \
    wget && \
    /tmp/ci/bootstrap_boost.sh -m

ADD ./ /tmp/src

RUN mkdir /tmp/build && \
    cd /tmp/build && \
    cmake /tmp/src -DBOOST_ROOT=${BOOST_ROOT} -DACTIVE_NETWORK=fstbt_${NETWORK}_network && \
    make fstbt_node && \
    cd .. && \
    echo ${NETWORK} > /etc/fstbt-network

FROM ubuntu:16.04
COPY --from=0 /tmp/build/fstbt_node /usr/bin
COPY --from=0 /etc/fstbt-network /etc
COPY docker/node/entry.sh /entry.sh
COPY docker/node/config /usr/share/frostbit/config
RUN chmod +x /entry.sh
CMD ["/bin/bash",  "/entry.sh"]
