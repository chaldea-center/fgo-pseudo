void __fastcall ServantSkillReleaseEntity___ctor(ServantSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB502A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB502A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4BB5028 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&num);
    byte_4BB5028 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_2F8DFE0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall ServantSkillReleaseEntity__CreatePrimaryKey(
        ServantSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantSkillReleaseEntity__CreatePK(
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           this->fields.idx,
           v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSkillReleaseEntity__getCreatePrimarykey(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int32_t v55; // [xsp+0h] [xbp-30h] BYREF
  int32_t v56; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v57; // [xsp+8h] [xbp-28h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-24h] BYREF

  v57 = num;
  v58 = svtId;
  v55 = idx;
  v56 = priority;
  if ( (byte_4BB5027 & 1) == 0 )
  {
    sub_1C13D24(&string___TypeInfo, *(_QWORD *)&num);
    sub_1C13D24(&StringLiteral_1545/*"99:99:99"*/, v5);
    byte_4BB5027 = 1;
  }
  v6 = sub_1C13DCC(string___TypeInfo, 7LL);
  v7 = System_Int32__ToString((int32_t)&v58, 0LL);
  if ( !v6 )
    sub_1C13F80(v7, v8);
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v6 + 32) = v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)v7, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_12;
  v21 = StringLiteral_1545/*"99:99:99"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1545/*"99:99:99"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 40), v21, v15, v16, v17, v18, v19, v20);
  v7 = System_Int32__ToString((int32_t)&v57, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v6 + 48) = v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)v7, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_12;
  v34 = StringLiteral_1545/*"99:99:99"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_1545/*"99:99:99"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 56), v34, v28, v29, v30, v31, v32, v33);
  v7 = System_Int32__ToString((int32_t)&v56, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 4u
    || (*(_QWORD *)(v6 + 64) = v7,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 64), (int64_t)v7, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v6 + 24) <= 5u)
    || (v47 = StringLiteral_1545/*"99:99:99"*/,
        *(_QWORD *)(v6 + 72) = StringLiteral_1545/*"99:99:99"*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 72), v47, v41, v42, v43, v44, v45, v46),
        v7 = System_Int32__ToString((int32_t)&v55, 0LL),
        *(_DWORD *)(v6 + 24) <= 6u) )
  {
LABEL_12:
    sub_1C13F88(v7, v8);
  }
  *(_QWORD *)(v6 + 80) = v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 80), (int64_t)v7, v48, v49, v50, v51, v52, v53);
  return System_String__Concat_62981472((System_String_array *)v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSkillReleaseEntity__isUse(
        ServantSkillReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t specificLimitCount,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  int32_t condType; // w23
  int32_t v13; // w9
  NetworkManager_c *v15; // x0
  int32_t condNum; // w19
  int32_t condTargetId; // w20
  int64_t userIdNumber; // x22
  int32_t v19; // w21
  bool IsLimitCountCondType; // w0
  int32_t v21; // w19
  int32_t v22; // w20
  int64_t v23; // x19

  if ( (byte_4BB5029 & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, *(_QWORD *)&dispLimitCount);
    sub_1C13D24(&NetworkManager_TypeInfo, v11);
    byte_4BB5029 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BAF1E5 )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, *(_QWORD *)&dispLimitCount);
      byte_4BAF1E5 = 1;
    }
    v15 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v15 = NetworkManager_TypeInfo;
    }
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    userIdNumber = v15->static_fields->userIdNumber;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(userIdNumber, condTargetId, condNum, beforeClearQuestId, 0, 0LL);
  }
  else
  {
    if ( condType == 70 )
    {
      if ( dispLimitCount >= 11 )
        v13 = dispLimitCount;
      else
        v13 = dispLimitCount + 1;
      return this->fields.condNum == v13;
    }
    if ( specificLimitCount >= 1 && condType == 7 )
      return this->fields.condNum <= specificLimitCount;
    if ( condType == 7 )
    {
      v19 = 7;
      if ( userSvtId < 1 )
      {
LABEL_31:
        v22 = this->fields.condTargetId;
        v23 = this->fields.condNum;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsOpen(v19, v22, v23, 0, 0LL, 0LL);
      }
    }
    else
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsLimitCountCondType = CondType__IsLimitCountCondType(condType, 0LL);
      v19 = this->fields.condType;
      if ( userSvtId < 1 || !IsLimitCountCondType )
        goto LABEL_31;
    }
    v21 = this->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpenForUsrSvt(v19, v21, userSvtId, 0LL);
  }
}