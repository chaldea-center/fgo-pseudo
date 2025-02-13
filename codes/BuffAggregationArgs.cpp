void __fastcall BuffAggregationArgs___cctor(const MethodInfo *method)
{
  int64_t v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v8; // x19
  struct BuffAggregationArgs_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDEB14 & 1) == 0 )
  {
    sub_1C21E38(&BuffAggregationArgs_TypeInfo);
    byte_4BDEB14 = 1;
  }
  v1 = sub_1C22084(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v1 + 16) = 1;
  *(_BYTE *)(v1 + 18) = 1;
  System_Object___ctor((Il2CppObject *)v1, 0LL);
  *(_WORD *)(v1 + 16) = 256;
  BuffAggregationArgs_TypeInfo->static_fields->DisplaySet = (struct BuffAggregationArgs_o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)BuffAggregationArgs_TypeInfo->static_fields, v1, v2, v3, v4, v5, v6, v7);
  v8 = sub_1C22084(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v8 + 16) = 1;
  *(_BYTE *)(v8 + 18) = 1;
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  static_fields = BuffAggregationArgs_TypeInfo->static_fields;
  static_fields->LogicSet = (struct BuffAggregationArgs_o *)v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->LogicSet, v8, v10, v11, v12, v13, v14, v15);
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