void CriWareDecrypterConfig___ctor(CriWareDecrypterConfig_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_4DFDE65 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4DFDE65 = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1CE66A4(&this->fields, v3);
  v4 = StringLiteral_1/*""*/;
  this->fields.authenticationFile = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1CE66A4(&this->fields.authenticationFile, v4);
  *(_WORD *)&this->fields.enableAtomDecryption = 257;
  System_Object___ctor((Il2CppObject *)this, 0);
}