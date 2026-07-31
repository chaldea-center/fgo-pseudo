void CriWareDecrypterConfig___ctor(CriWareDecrypterConfig_o *this, const MethodInfo *method)
{
  void *v3; // x1
  void *v4; // x1

  if ( (byte_59316FD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59316FD = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(&this->fields, v3);
  v4 = StringLiteral_1/*""*/;
  this->fields.authenticationFile = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(&this->fields.authenticationFile, v4);
  *(_WORD *)&this->fields.enableAtomDecryption = 257;
  System_Object___ctor((Il2CppObject *)this, 0);
}