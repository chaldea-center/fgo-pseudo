void __fastcall ServantTreasureDeviceReleaseEntity___ctor(
        ServantTreasureDeviceReleaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B36 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16B36 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantTreasureDeviceReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B16B34 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&num, *(_QWORD *)&priority);
    byte_4B16B34 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall ServantTreasureDeviceReleaseEntity__CreatePrimaryKey(
        ServantTreasureDeviceReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantTreasureDeviceReleaseEntity__CreatePK(
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           this->fields.idx,
           v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantTreasureDeviceReleaseEntity__getCreatePrimarykey(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1
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
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int32_t v56; // [xsp+0h] [xbp-30h] BYREF
  int32_t v57; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v58; // [xsp+8h] [xbp-28h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-24h] BYREF

  v58 = num;
  v59 = svtId;
  v56 = idx;
  v57 = priority;
  if ( (byte_4B16B33 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, *(_QWORD *)&num, *(_QWORD *)&priority);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v5, v6);
    byte_4B16B33 = 1;
  }
  v7 = sub_1BCA888(string___TypeInfo, 7LL);
  v8 = System_Int32__ToString((int32_t)&v59, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v7 + 32) = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)v8, v10, v11, v12, v13, v14, v15);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_12;
  v22 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), v22, v16, v17, v18, v19, v20, v21);
  v8 = System_Int32__ToString((int32_t)&v58, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v7 + 48) = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)v8, v23, v24, v25, v26, v27, v28);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_12;
  v35 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v7 + 56) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 56), v35, v29, v30, v31, v32, v33, v34);
  v8 = System_Int32__ToString((int32_t)&v57, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 4u
    || (*(_QWORD *)(v7 + 64) = v8,
        sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 64), (int64_t)v8, v36, v37, v38, v39, v40, v41),
        *(_DWORD *)(v7 + 24) <= 5u)
    || (v48 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v7 + 72) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 72), v48, v42, v43, v44, v45, v46, v47),
        v8 = System_Int32__ToString((int32_t)&v56, 0LL),
        *(_DWORD *)(v7 + 24) <= 6u) )
  {
LABEL_12:
    sub_1BCAA44(v8, v9);
  }
  *(_QWORD *)(v7 + 80) = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 80), (int64_t)v8, v49, v50, v51, v52, v53, v54);
  return System_String__Concat_62414748((System_String_array *)v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDeviceReleaseEntity__isUse(
        ServantTreasureDeviceReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t condType; // w22
  int32_t v10; // w9
  int64_t UserId; // x0
  __int64 v13; // x1
  int32_t condNum; // w20
  int32_t condTargetId; // w21
  int64_t v16; // x22
  int32_t v17; // w21
  int64_t v18; // x19

  if ( (byte_4B16B35 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&dispLimitCount, *(_QWORD *)&beforeClearQuestId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B16B35 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&dispLimitCount);
    UserId = NetworkManager__get_UserId(0LL);
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    v16 = UserId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
    return CondType__IsQuestPhaseClear(v16, condTargetId, condNum, beforeClearQuestId, 0, 0LL);
  }
  else if ( condType == 70 )
  {
    if ( dispLimitCount >= 11 )
      v10 = dispLimitCount;
    else
      v10 = dispLimitCount + 1;
    return this->fields.condNum == v10;
  }
  else
  {
    v17 = this->fields.condTargetId;
    v18 = this->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&dispLimitCount);
    return CondType__IsOpen(condType, v17, v18, 0, 0LL, 0LL);
  }
}