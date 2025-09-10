void CriWareDecrypterConfig___ctor(CriWareDecrypterConfig_o *this, const MethodInfo *method)
{
  if ( (byte_4C20B85 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C20B85 = 1;
  }
  this->fields.key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434(&this->fields);
  this->fields.authenticationFile = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434(&this->fields.authenticationFile);
  *(_WORD *)&this->fields.enableAtomDecryption = 257;
  System_Object___ctor((Il2CppObject *)this, 0);
}