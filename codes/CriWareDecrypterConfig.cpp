void __fastcall CriWareDecrypterConfig___ctor(CriWareDecrypterConfig_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x1
  void *v5; // x1

  if ( (byte_4B107A5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B107A5 = 1;
  }
  v4 = StringLiteral_1/*""*/;
  this->fields.key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields, v4);
  v5 = StringLiteral_1/*""*/;
  this->fields.authenticationFile = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.authenticationFile, v5);
  *(_WORD *)&this->fields.enableAtomDecryption = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}