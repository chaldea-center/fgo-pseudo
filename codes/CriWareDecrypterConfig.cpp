void CriWareDecrypterConfig___ctor(CriWareDecrypterConfig_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_4CE7C15 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE7C15 = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(&this->fields, v3);
  v4 = StringLiteral_1/*""*/;
  this->fields.authenticationFile = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(&this->fields.authenticationFile, v4);
  *(_WORD *)&this->fields.enableAtomDecryption = 257;
  System_Object___ctor((Il2CppObject *)this, 0);
}