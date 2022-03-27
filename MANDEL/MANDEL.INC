VAL INT X.WIDE IS 640 :
VAL INT Y.WIDE IS 480 :

VAL INT ORDER.SIZE IS 6 :
VAL INT RESULT.SIZE IS 1 + (X.WIDE / 4) :

PROTOCOL PIPE
  CASE
    pipe.request
    pipe.order; [ORDER.SIZE]INT
    pipe.result; [RESULT.SIZE]INT
:

