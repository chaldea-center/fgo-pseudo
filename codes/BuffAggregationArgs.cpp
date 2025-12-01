void BuffAggregationArgs___cctor(const MethodInfo *method)
{
  __int64 v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v8; // x19
  struct BuffAggregationArgs_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x19
  struct BuffAggregationArgs_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC9DE2 & 1) == 0 )
  {
    sub_1C713B0(&BuffAggregationArgs_TypeInfo);
    byte_4CC9DE2 = 1;
  }
  v1 = sub_1C715FC(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v1 + 16) = 1;
  *(_WORD *)(v1 + 18) = 257;
  System_Object___ctor((Il2CppObject *)v1, 0);
  *(_WORD *)(v1 + 16) = 256;
  BuffAggregationArgs_TypeInfo->static_fields->DisplaySet = (struct BuffAggregationArgs_o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)BuffAggregationArgs_TypeInfo->static_fields, v1, v2, v3, v4, v5, v6, v7);
  v8 = sub_1C715FC(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v8 + 16) = 1;
  *(_WORD *)(v8 + 18) = 257;
  System_Object___ctor((Il2CppObject *)v8, 0);
  static_fields = BuffAggregationArgs_TypeInfo->static_fields;
  static_fields->LogicSet = (struct BuffAggregationArgs_o *)v8;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->LogicSet, v8, v10, v11, v12, v13, v14, v15);
  v16 = sub_1C715FC(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v16 + 16) = 1;
  *(_WORD *)(v16 + 18) = 257;
  System_Object___ctor((Il2CppObject *)v16, 0);
  *(_WORD *)(v16 + 16) = 256;
  *(_BYTE *)(v16 + 19) = 0;
  v17 = BuffAggregationArgs_TypeInfo->static_fields;
  v17->EndMotionDisplaySet = (struct BuffAggregationArgs_o *)v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v17->EndMotionDisplaySet, v16, v18, v19, v20, v21, v22, v23);
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