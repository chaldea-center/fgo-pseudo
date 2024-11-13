void __fastcall RestrictionBaseEntity___ctor(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16808 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16808 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RestrictionBaseEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4B16807 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase, method);
    byte_4B16807 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Int32_array *IntArray; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Int32_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Int32_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B16806 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22634/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds, overwriteLimitCounts);
    sub_1BCA7E0(&StringLiteral_22635/*"overwriteLimitCounts"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22633/*"overwriteLimitCountIconIds"*/, v11, v12);
    byte_4B16806 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22634/*"overwriteLimitCountSvtIds"*/, 0LL, 0LL);
  *overwriteLimitCountSvtIds = IntArray;
  sub_1BCA784((PartyOrganizationUtility_o *)overwriteLimitCountSvtIds, (int64_t)IntArray, v14, v15, v16, v17, v18, v19);
  if ( *overwriteLimitCountSvtIds )
  {
    v26 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22635/*"overwriteLimitCounts"*/, 0LL, 0LL);
    *overwriteLimitCounts = v26;
    sub_1BCA784((PartyOrganizationUtility_o *)overwriteLimitCounts, (int64_t)v26, v27, v28, v29, v30, v31, v32);
    v33 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22633/*"overwriteLimitCountIconIds"*/, 0LL, 0LL);
    *overwriteLimitCountIconIds = v33;
    sub_1BCA784((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, (int64_t)v33, v34, v35, v36, v37, v38, v39);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)overwriteLimitCounts, 0LL, v20, v21, v22, v23, v24, v25);
    *overwriteLimitCountIconIds = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, 0LL, v41, v42, v43, v44, v45, v46);
    return 0;
  }
}


int32_t __fastcall RestrictionBaseEntity__GetUserEventDeckNo(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16805 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24608/*"useEventDeckNo"*/, method, v2);
    byte_4B16805 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24608/*"useEventDeckNo"*/, 1, 0LL);
}


bool __fastcall RestrictionBaseEntity__HasFlag(RestrictionBaseEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}