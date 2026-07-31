void FileName___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct FileName_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593751F & 1) == 0 )
  {
    sub_21FFC50(&FileName_TypeInfo);
    sub_21FFC50(&StringLiteral_21182/*"icon_support_02"*/);
    sub_21FFC50(&StringLiteral_21130/*"icon_eventjoin_02"*/);
    byte_593751F = 1;
  }
  v7 = StringLiteral_21182/*"icon_support_02"*/;
  FileName_TypeInfo->static_fields->friendIconName = (struct System_String_o *)StringLiteral_21182/*"icon_support_02"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)FileName_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_21130/*"icon_eventjoin_02"*/;
  static_fields = FileName_TypeInfo->static_fields;
  static_fields->eventJoinIconName = (struct System_String_o *)StringLiteral_21130/*"icon_eventjoin_02"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->eventJoinIconName, v8, v10, v11, v12, v13, v14, v15);
}


void FileName___ctor(FileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}