void CriWareDecrypterConfig___ctor(CriWareDecrypterConfig_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_4D29EF5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D29EF5 = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(&this->fields, v3);
  v4 = StringLiteral_1/*""*/;
  this->fields.authenticationFile = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(&this->fields.authenticationFile, v4);
  *(_WORD *)&this->fields.enableAtomDecryption = 257;
  System_Object___ctor((Il2CppObject *)this, 0);
}