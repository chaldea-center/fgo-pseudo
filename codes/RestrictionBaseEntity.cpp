void __fastcall RestrictionBaseEntity___ctor(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4D17 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB4D17 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RestrictionBaseEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4BB4D16 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase);
    byte_4BB4D16 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2F8D690 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v10; // x1
  System_Int32_array *IntArray; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Int32_array *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Int32_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4BB4D15 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22764/*"overwriteBaseActionPoint"*/, overwriteLimitCountSvtIds);
    sub_1C13D24(&StringLiteral_22765/*"overwriteBreakShiftVoice"*/, v9);
    sub_1C13D24(&StringLiteral_22763/*"overwriteAttri"*/, v10);
    byte_4BB4D15 = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22764/*"overwriteBaseActionPoint"*/, 0LL, 0LL);
  *overwriteLimitCountSvtIds = IntArray;
  sub_1C13CC8((PartyOrganizationUtility_o *)overwriteLimitCountSvtIds, (int64_t)IntArray, v12, v13, v14, v15, v16, v17);
  if ( *overwriteLimitCountSvtIds )
  {
    v24 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22765/*"overwriteBreakShiftVoice"*/, 0LL, 0LL);
    *overwriteLimitCounts = v24;
    sub_1C13CC8((PartyOrganizationUtility_o *)overwriteLimitCounts, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    v31 = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22763/*"overwriteAttri"*/, 0LL, 0LL);
    *overwriteLimitCountIconIds = v31;
    sub_1C13CC8((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, (int64_t)v31, v32, v33, v34, v35, v36, v37);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)overwriteLimitCounts, 0LL, v18, v19, v20, v21, v22, v23);
    *overwriteLimitCountIconIds = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, 0LL, v39, v40, v41, v42, v43, v44);
    return 0;
  }
}


int32_t __fastcall RestrictionBaseEntity__GetUserEventDeckNo(RestrictionBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4D14 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24751/*"url"*/, method);
    byte_4BB4D14 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24751/*"url"*/, 1, 0LL);
}


bool __fastcall RestrictionBaseEntity__HasFlag(RestrictionBaseEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}