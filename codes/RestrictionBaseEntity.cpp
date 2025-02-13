void __fastcall RestrictionBaseEntity___ctor(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCB8C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDCB8C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall RestrictionBaseEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4BDCB8B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4BDCB8B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2FAE028 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall RestrictionBaseEntity__CreatePrimaryKey(
        RestrictionBaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RestrictionBaseEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


bool __fastcall RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
        RestrictionBaseEntity_o *this,
        System_Int32_array **overwriteLimitCountSvtIds,
        System_Int32_array **overwriteLimitCounts,
        System_Int32_array **overwriteLimitCountIconIds,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Int32_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Int32_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4BDCB8A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22801/*"overwriteLimitCountSvtIds"*/);
    sub_1C21E38(&StringLiteral_22802/*"overwriteLimitCounts"*/);
    sub_1C21E38(&StringLiteral_22800/*"overwriteLimitCountIconIds"*/);
    byte_4BDCB8A = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22801/*"overwriteLimitCountSvtIds"*/, 0LL, 0LL);
  *overwriteLimitCountSvtIds = IntArray;
  sub_1C21DDC((PartyOrganizationUtility_o *)overwriteLimitCountSvtIds, (int64_t)IntArray, v10, v11, v12, v13, v14, v15);
  if ( *overwriteLimitCountSvtIds )
  {
    v22 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22802/*"overwriteLimitCounts"*/, 0LL, 0LL);
    *overwriteLimitCounts = v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)overwriteLimitCounts, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22800/*"overwriteLimitCountIconIds"*/, 0LL, 0LL);
    *overwriteLimitCountIconIds = v29;
    sub_1C21DDC((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, (int64_t)v29, v30, v31, v32, v33, v34, v35);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)overwriteLimitCounts, 0LL, v16, v17, v18, v19, v20, v21);
    *overwriteLimitCountIconIds = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, 0LL, v37, v38, v39, v40, v41, v42);
    return 0;
  }
}


int32_t __fastcall RestrictionBaseEntity__GetUserEventDeckNo(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCB89 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24791/*"useEventDeckNo"*/);
    byte_4BDCB89 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24791/*"useEventDeckNo"*/, 1, 0LL);
}


bool __fastcall RestrictionBaseEntity__HasFlag(RestrictionBaseEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}