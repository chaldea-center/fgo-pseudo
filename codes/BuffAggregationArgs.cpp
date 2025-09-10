void BuffAggregationArgs___cctor(const MethodInfo *method)
{
  __int64 v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x19
  struct BuffAggregationArgs_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x19
  struct BuffAggregationArgs_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C29B2E & 1) == 0 )
  {
    sub_1C2D490(&BuffAggregationArgs_TypeInfo);
    byte_4C29B2E = 1;
  }
  v1 = sub_1C2D6DC(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v1 + 16) = 1;
  *(_WORD *)(v1 + 18) = 257;
  System_Object___ctor((Il2CppObject *)v1, 0);
  *(_WORD *)(v1 + 16) = 256;
  BuffAggregationArgs_TypeInfo->static_fields->DisplaySet = (struct BuffAggregationArgs_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BuffAggregationArgs_TypeInfo->static_fields, v1, v2, v3);
  v4 = sub_1C2D6DC(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v4 + 16) = 1;
  *(_WORD *)(v4 + 18) = 257;
  System_Object___ctor((Il2CppObject *)v4, 0);
  static_fields = BuffAggregationArgs_TypeInfo->static_fields;
  static_fields->LogicSet = (struct BuffAggregationArgs_o *)v4;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->LogicSet, v4, v6, v7);
  v8 = sub_1C2D6DC(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v8 + 16) = 1;
  *(_WORD *)(v8 + 18) = 257;
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_WORD *)(v8 + 16) = 256;
  *(_BYTE *)(v8 + 19) = 0;
  v9 = BuffAggregationArgs_TypeInfo->static_fields;
  v9->EndMotionDisplaySet = (struct BuffAggregationArgs_o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->EndMotionDisplaySet, v8, v10, v11);
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