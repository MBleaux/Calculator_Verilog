#!/bin/bash

BASE_PATH="./../SRC/RTL"
OUT_DIR="work_out"
OUT_FILE="wrapper_gen.v" 

rm -Rf build $OUT_DIR
mkdir -p "$OUT_DIR/src"
mkdir -p "$OUT_DIR/generated"

cp $BASE_PATH/*.v $OUT_DIR/src

for file in $OUT_DIR/src/*.v; do
    module=`basename -s .v $file`

    sv2v \
        --define=SYNTHESIS --define=YOSYS \
        $file \
        > $OUT_DIR/generated/${module}.v
done

cat $OUT_DIR/generated/*.v > $OUT_DIR/$OUT_FILE
