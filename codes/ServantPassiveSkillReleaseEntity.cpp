void ServantPassiveSkillReleaseEntity___ctor(ServantPassiveSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C439A8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C439A8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantPassiveSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4C439A6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4C439A6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_30E6730 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *ServantPassiveSkillReleaseEntity__CreatePrimaryKey(
        ServantPassiveSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantPassiveSkillReleaseEntity__CreatePK(
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           this->fields.idx,
           v2);
}


System_String_o *ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v25; // [xsp+0h] [xbp-30h] BYREF
  int32_t v26; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v27; // [xsp+8h] [xbp-28h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  v27 = num;
  v28 = svtId;
  v25 = idx;
  v26 = priority;
  if ( (byte_4C439A5 & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C439A5 = 1;
  }
  v5 = sub_1C37100(string___TypeInfo, 7);
  v6 = System_Int32__ToString((int32_t)&v28, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v7, v8);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_12;
  v11 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1457/*":"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), v11, v9, v10);
  v6 = System_Int32__ToString((int32_t)&v27, 0);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 48), (int32_t)v6, v12, v13);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_12;
  v16 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1457/*":"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 56), v16, v14, v15);
  v6 = System_Int32__ToString((int32_t)&v26, 0);
  if ( *(_DWORD *)(v5 + 24) <= 4u
    || (*(_QWORD *)(v5 + 64) = v6,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 64), (int32_t)v6, v17, v18),
        *(_DWORD *)(v5 + 24) <= 5u)
    || (v21 = StringLiteral_1457/*":"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_1457/*":"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 72), v21, v19, v20),
        v6 = System_Int32__ToString((int32_t)&v25, 0),
        *(_DWORD *)(v5 + 24) <= 6u) )
  {
LABEL_12:
    sub_1C372BC(v6);
  }
  *(_QWORD *)(v5 + 80) = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 80), (int32_t)v6, v22, v23);
  return System_String__Concat_63602172((System_String_array *)v5, 0);
}


bool ServantPassiveSkillReleaseEntity__isUse(
        ServantPassiveSkillReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t condType; // w22
  NetworkManager_c *v9; // x0
  int32_t condNum; // w20
  int32_t condTargetId; // w21
  int64_t userIdNumber; // x22
  int32_t v13; // w21
  int64_t v14; // x19

  if ( (byte_4C439A7 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C439A7 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    userIdNumber = v9->static_fields->userIdNumber;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(userIdNumber, condTargetId, condNum, beforeClearQuestId, 0, 0);
  }
  else if ( condType == 70 )
  {
    return this->fields.condNum == dispLimitCount;
  }
  else
  {
    v13 = this->fields.condTargetId;
    v14 = this->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen(condType, v13, v14, 0, 0, 0);
  }
}