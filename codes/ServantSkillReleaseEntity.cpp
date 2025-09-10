void ServantSkillReleaseEntity___ctor(ServantSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27D21 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27D21 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4C27D1F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4C27D1F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_30CD428 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *ServantSkillReleaseEntity__CreatePrimaryKey(
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


System_String_o *ServantSkillReleaseEntity__getCreatePrimarykey(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  int32_t v20; // [xsp+0h] [xbp-30h] BYREF
  int32_t v21; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v22; // [xsp+8h] [xbp-28h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  v22 = num;
  v23 = svtId;
  v20 = idx;
  v21 = priority;
  if ( (byte_4C27D1E & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27D1E = 1;
  }
  v5 = sub_1C2D538(string___TypeInfo, 7);
  v6 = System_Int32__ToString((int32_t)&v23, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_12;
  v11 = StringLiteral_1456/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1456/*":"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), v11, v8, v10);
  v6 = System_Int32__ToString((int32_t)&v22, 0);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), (int32_t)v6, v8, v12);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_12;
  v14 = StringLiteral_1456/*":"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1456/*":"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 56), v14, v8, v13);
  v6 = System_Int32__ToString((int32_t)&v21, 0);
  if ( *(_DWORD *)(v5 + 24) <= 4u
    || (*(_QWORD *)(v5 + 64) = v6,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 64), (int32_t)v6, v8, v15),
        *(_DWORD *)(v5 + 24) <= 5u)
    || (v17 = StringLiteral_1456/*":"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_1456/*":"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 72), v17, v8, v16),
        v6 = System_Int32__ToString((int32_t)&v20, 0),
        *(_DWORD *)(v5 + 24) <= 6u) )
  {
LABEL_12:
    sub_1C2D6F4(v6, v7, v8);
  }
  *(_QWORD *)(v5 + 80) = v6;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 80), (int32_t)v6, v8, v18);
  return System_String__Concat_63498380((System_String_array *)v5, 0);
}


bool ServantSkillReleaseEntity__isUse(
        ServantSkillReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        int32_t specificLimitCount,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int32_t condType; // w23
  int32_t v12; // w9
  NetworkManager_c *v14; // x0
  int32_t condNum; // w19
  int32_t condTargetId; // w20
  int64_t userIdNumber; // x22
  int32_t v18; // w21
  bool IsLimitCountCondType; // w0
  int32_t v20; // w19
  int32_t v21; // w20
  int64_t v22; // x19

  if ( (byte_4C27D20 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C27D20 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    v14 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v14 = NetworkManager_TypeInfo;
    }
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    userIdNumber = v14->static_fields->userIdNumber;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(userIdNumber, condTargetId, condNum, beforeClearQuestId, 0, 0);
  }
  else
  {
    if ( condType == 70 )
    {
      if ( dispLimitCount >= 11 )
        v12 = dispLimitCount;
      else
        v12 = dispLimitCount + 1;
      return this->fields.condNum == v12;
    }
    if ( specificLimitCount >= 1 && condType == 7 )
      return this->fields.condNum <= specificLimitCount;
    if ( condType == 7 )
    {
      v18 = 7;
      if ( userSvtId < 1 )
      {
LABEL_31:
        v21 = this->fields.condTargetId;
        v22 = this->fields.condNum;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsOpen(v18, v21, v22, 0, 0, 0);
      }
    }
    else
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsLimitCountCondType = CondType__IsLimitCountCondType(condType, 0);
      v18 = this->fields.condType;
      if ( userSvtId < 1 || !IsLimitCountCondType )
        goto LABEL_31;
    }
    v20 = this->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpenForUsrSvt(v18, v20, userSvtId, 0);
  }
}