void BuffAggregationArgs___cctor(const MethodInfo *method)
{
  __int64 v1; // x19
  BuffAggregationArgs_c *v2; // x8
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x19
  struct BuffAggregationArgs_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x19
  BuffAggregationArgs_c *v18; // x8
  struct BuffAggregationArgs_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_597335D & 1) == 0 )
  {
    sub_2213A60(&BuffAggregationArgs_TypeInfo);
    byte_597335D = 1;
  }
  v1 = sub_2213CCC(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v1 + 16) = 1;
  *(_WORD *)(v1 + 18) = 257;
  System_Object___ctor((Il2CppObject *)v1, 0);
  v2 = BuffAggregationArgs_TypeInfo;
  *(_WORD *)(v1 + 16) = 256;
  v2->static_fields->DisplaySet = (struct BuffAggregationArgs_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BuffAggregationArgs_TypeInfo->static_fields,
    v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = sub_2213CCC(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v9 + 16) = 1;
  *(_WORD *)(v9 + 18) = 257;
  System_Object___ctor((Il2CppObject *)v9, 0);
  static_fields = BuffAggregationArgs_TypeInfo->static_fields;
  static_fields->LogicSet = (struct BuffAggregationArgs_o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->LogicSet, v9, v11, v12, v13, v14, v15, v16);
  v17 = sub_2213CCC(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v17 + 16) = 1;
  *(_WORD *)(v17 + 18) = 257;
  System_Object___ctor((Il2CppObject *)v17, 0);
  v18 = BuffAggregationArgs_TypeInfo;
  *(_WORD *)(v17 + 16) = 256;
  *(_BYTE *)(v17 + 19) = 0;
  v19 = v18->static_fields;
  v19->EndMotionDisplaySet = (struct BuffAggregationArgs_o *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->EndMotionDisplaySet, v17, v20, v21, v22, v23, v24, v25);
}


void BuffAggregationArgs___ctor(BuffAggregationArgs_o *this, const MethodInfo *method)
{
  this->fields._IsIncludeUnfixBuff_k__BackingField = 1;
  *(_WORD *)&this->fields._IsIgnoreIntervalBuff_k__BackingField = 257;
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BuffAggregationArgs__get_IsIgnoreIntervalBuff(BuffAggregationArgs_o *this, const MethodInfo *method)
{
  return this->fields._IsIgnoreIntervalBuff_k__BackingField;
}


bool BuffAggregationArgs__get_IsIncludeCommandCodeBuff(BuffAggregationArgs_o *this, const MethodInfo *method)
{
  return this->fields._IsIncludeCommandCodeBuff_k__BackingField;
}


bool BuffAggregationArgs__get_IsIncludeRemoveBuff(BuffAggregationArgs_o *this, const MethodInfo *method)
{
  return this->fields._IsIncludeRemoveBuff_k__BackingField;
}


bool BuffAggregationArgs__get_IsIncludeUnfixBuff(BuffAggregationArgs_o *this, const MethodInfo *method)
{
  return this->fields._IsIncludeUnfixBuff_k__BackingField;
}


void BuffAggregationArgs__set_IsIgnoreIntervalBuff(BuffAggregationArgs_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsIgnoreIntervalBuff_k__BackingField = value;
}


void BuffAggregationArgs__set_IsIncludeCommandCodeBuff(
        BuffAggregationArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIncludeCommandCodeBuff_k__BackingField = value;
}


void BuffAggregationArgs__set_IsIncludeRemoveBuff(BuffAggregationArgs_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsIncludeRemoveBuff_k__BackingField = value;
}


void BuffAggregationArgs__set_IsIncludeUnfixBuff(BuffAggregationArgs_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsIncludeUnfixBuff_k__BackingField = value;
}