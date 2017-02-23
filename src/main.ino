const char *byte_to_binary(int x);

void setup()
{
  uint8_t const *p;

  Serial.begin(115200);
  while (!Serial);

  p = 0;
  do
  {

    Serial.print(byte_to_binary(*p));
    ++p;
  }
  while (p < 20000);
}

void loop() {}

const char *byte_to_binary(int x)
{
    static char b[9];
    b[0] = '\0';

    for (int z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}
