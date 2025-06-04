void __fastcall ServantSkillReleaseEntity___ctor(ServantSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02A2E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B02A2E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B02A2C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&num);
    byte_4B02A2C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_300093C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  int32_t v21; // [xsp+0h] [xbp-30h] BYREF
  int32_t v22; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v23 = num;
  v24 = svtId;
  v21 = idx;
  v22 = priority;
  if ( (byte_4B02A2B & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, *(_QWORD *)&num);
    sub_1BC3008(&StringLiteral_1447/*":"*/, v5);
    byte_4B02A2B = 1;
  }
  v6 = sub_1BC30B0(string___TypeInfo, 7LL);
  v7 = System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !v6 )
    sub_1BC3264(v7, v8);
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v6 + 32) = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v7, v9, v10);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_12;
  v12 = StringLiteral_1447/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1447/*":"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 40), v12, v9, v11);
  v7 = System_Int32__ToString((int32_t)&v23, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v6 + 48) = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 48), (int32_t)v7, v9, v13);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_12;
  v15 = StringLiteral_1447/*":"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_1447/*":"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 56), v15, v9, v14);
  v7 = System_Int32__ToString((int32_t)&v22, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 4u
    || (*(_QWORD *)(v6 + 64) = v7,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 64), (int32_t)v7, v9, v16),
        *(_DWORD *)(v6 + 24) <= 5u)
    || (v18 = StringLiteral_1447/*":"*/,
        *(_QWORD *)(v6 + 72) = StringLiteral_1447/*":"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 72), v18, v9, v17),
        v7 = System_Int32__ToString((int32_t)&v21, 0LL),
        *(_DWORD *)(v6 + 24) <= 6u) )
  {
LABEL_12:
    sub_1BC326C(v7, v8, v9);
  }
  *(_QWORD *)(v6 + 80) = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 80), (int32_t)v7, v9, v19);
  return System_String__Concat_62389164((System_String_array *)v6, 0LL);
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

  if ( (byte_4B02A2D & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&dispLimitCount);
    sub_1BC3008(&NetworkManager_TypeInfo, v11);
    byte_4B02A2D = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, *(_QWORD *)&dispLimitCount);
      byte_4AFC1F1 = 1;
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