void __fastcall BuffAggregationArgs___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  __int64 v5; // x19
  struct BuffAggregationArgs_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B471F2 & 1) == 0 )
  {
    sub_1BDB878(&BuffAggregationArgs_TypeInfo, v1);
    byte_4B471F2 = 1;
  }
  v2 = sub_1BDBAC4(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v2 + 16) = 1;
  *(_BYTE *)(v2 + 18) = 1;
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_WORD *)(v2 + 16) = 256;
  BuffAggregationArgs_TypeInfo->static_fields->DisplaySet = (struct BuffAggregationArgs_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)BuffAggregationArgs_TypeInfo->static_fields, v2, v3, v4);
  v5 = sub_1BDBAC4(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v5 + 16) = 1;
  *(_BYTE *)(v5 + 18) = 1;
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  static_fields = BuffAggregationArgs_TypeInfo->static_fields;
  static_fields->LogicSet = (struct BuffAggregationArgs_o *)v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->LogicSet, v5, v7, v8);
}


void __fastcall BuffAggregationArgs___ctor(BuffAggregationArgs_o *this, const MethodInfo *method)
{
  this->fields._IsIncludeUnfixBuff_k__BackingField = 1;
  this->fields._IsIgnoreIntervalBuff_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BuffAggregationArgs__get_IsIgnoreIntervalBuff(BuffAggregationArgs_o *this, const MethodInfo *method)
{
  return this->fields._IsIgnoreIntervalBuff_k__BackingField;
}


bool __fastcall BuffAggregationArgs__get_IsIncludeRemoveBuff(BuffAggregationArgs_o *this, const MethodInfo *method)
{
  return this->fields._IsIncludeRemoveBuff_k__BackingField;
}


bool __fastcall BuffAggregationArgs__get_IsIncludeUnfixBuff(BuffAggregationArgs_o *this, const MethodInfo *method)
{
  return this->fields._IsIncludeUnfixBuff_k__BackingField;
}


void __fastcall BuffAggregationArgs__set_IsIgnoreIntervalBuff(
        BuffAggregationArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIgnoreIntervalBuff_k__BackingField = value;
}


void __fastcall BuffAggregationArgs__set_IsIncludeRemoveBuff(
        BuffAggregationArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIncludeRemoveBuff_k__BackingField = value;
}


void __fastcall BuffAggregationArgs__set_IsIncludeUnfixBuff(
        BuffAggregationArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIncludeUnfixBuff_k__BackingField = value;
}