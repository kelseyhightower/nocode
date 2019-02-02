FROM scratch

# To continue to do nothing otherwise this
# container would not keep doing nothing:
ENTRYPOINT [ "tail", "-f", "/dev/null" ]
