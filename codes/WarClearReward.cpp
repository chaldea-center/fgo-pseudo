void __fastcall WarClearReward___ctor(WarClearReward_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4A4B80B & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4B80B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.giftId = 0LL;
  v3 = (int)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.title, v3, v4, v5);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.message = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.message, v6, v7, v8);
}