void __fastcall BuffAggregationArgs___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  int64_t v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  int64_t v14; // x19
  struct BuffAggregationArgs_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B186FE & 1) == 0 )
  {
    sub_1BCA7E0(&BuffAggregationArgs_TypeInfo, v1, v2);
    byte_4B186FE = 1;
  }
  v4 = sub_1BCAA2C(BuffAggregationArgs_TypeInfo, v1, v2, v3);
  *(_BYTE *)(v4 + 16) = 1;
  *(_BYTE *)(v4 + 18) = 1;
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_WORD *)(v4 + 16) = 256;
  BuffAggregationArgs_TypeInfo->static_fields->DisplaySet = (struct BuffAggregationArgs_o *)v4;
  sub_1BCA784((PartyOrganizationUtility_o *)BuffAggregationArgs_TypeInfo->static_fields, v4, v5, v6, v7, v8, v9, v10);
  v14 = sub_1BCAA2C(BuffAggregationArgs_TypeInfo, v11, v12, v13);
  *(_BYTE *)(v14 + 16) = 1;
  *(_BYTE *)(v14 + 18) = 1;
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  static_fields = BuffAggregationArgs_TypeInfo->static_fields;
  static_fields->LogicSet = (struct BuffAggregationArgs_o *)v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->LogicSet, v14, v16, v17, v18, v19, v20, v21);
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