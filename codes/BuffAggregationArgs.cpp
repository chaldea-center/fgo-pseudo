void __fastcall BuffAggregationArgs___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int64_t v9; // x19
  struct BuffAggregationArgs_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B6913E & 1) == 0 )
  {
    sub_1BE4ACC(&BuffAggregationArgs_TypeInfo, v1);
    byte_4B6913E = 1;
  }
  v2 = sub_1BE4D18(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v2 + 16) = 1;
  *(_BYTE *)(v2 + 18) = 1;
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_WORD *)(v2 + 16) = 256;
  BuffAggregationArgs_TypeInfo->static_fields->DisplaySet = (struct BuffAggregationArgs_o *)v2;
  sub_1BE4A70((PartyOrganizationUtility_o *)BuffAggregationArgs_TypeInfo->static_fields, v2, v3, v4, v5, v6, v7, v8);
  v9 = sub_1BE4D18(BuffAggregationArgs_TypeInfo);
  *(_BYTE *)(v9 + 16) = 1;
  *(_BYTE *)(v9 + 18) = 1;
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  static_fields = BuffAggregationArgs_TypeInfo->static_fields;
  static_fields->LogicSet = (struct BuffAggregationArgs_o *)v9;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->LogicSet, v9, v11, v12, v13, v14, v15, v16);
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