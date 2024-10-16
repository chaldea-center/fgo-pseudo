void __fastcall CriWareDecrypterConfig___ctor(CriWareDecrypterConfig_o *this, const MethodInfo *method)
{
  if ( (byte_4AB0475 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, method);
    byte_4AB0475 = 1;
  }
  this->fields.key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0(&this->fields);
  this->fields.authenticationFile = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0(&this->fields.authenticationFile);
  *(_WORD *)&this->fields.enableAtomDecryption = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}