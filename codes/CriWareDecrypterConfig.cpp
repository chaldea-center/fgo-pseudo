void __fastcall CriWareDecrypterConfig___ctor(CriWareDecrypterConfig_o *this, const MethodInfo *method)
{
  if ( (byte_4B610C5 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B610C5 = 1;
  }
  this->fields.key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70(&this->fields);
  this->fields.authenticationFile = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70(&this->fields.authenticationFile);
  *(_WORD *)&this->fields.enableAtomDecryption = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}