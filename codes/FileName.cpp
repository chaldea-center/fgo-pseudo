void FileName___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct FileName_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CED562 & 1) == 0 )
  {
    sub_1C7BAE8(&FileName_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20411/*"icon_support_02"*/);
    sub_1C7BAE8(&StringLiteral_20364/*"icon_eventjoin_02"*/);
    byte_4CED562 = 1;
  }
  FileName_TypeInfo->static_fields->friendIconName = (struct System_String_o *)StringLiteral_20411/*"icon_support_02"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)FileName_TypeInfo->static_fields,
    StringLiteral_20411/*"icon_support_02"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20364/*"icon_eventjoin_02"*/;
  static_fields = FileName_TypeInfo->static_fields;
  static_fields->eventJoinIconName = (struct System_String_o *)StringLiteral_20364/*"icon_eventjoin_02"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->eventJoinIconName, v7, v9, v10, v11, v12, v13, v14);
}


void FileName___ctor(FileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}