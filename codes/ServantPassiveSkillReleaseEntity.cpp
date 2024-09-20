void __fastcall ServantPassiveSkillReleaseEntity___ctor(
        ServantPassiveSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B921 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B921 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantPassiveSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4A5B91F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4A5B91F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_2E7E47C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall ServantPassiveSkillReleaseEntity__CreatePrimaryKey(
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


System_String_o *__fastcall ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v26; // [xsp+0h] [xbp-30h] BYREF
  int32_t v27; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v28; // [xsp+8h] [xbp-28h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-24h] BYREF

  v28 = num;
  v29 = svtId;
  v26 = idx;
  v27 = priority;
  if ( (byte_4A5B91E & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B91E = 1;
  }
  v5 = sub_1B88658(string___TypeInfo, 7LL);
  v6 = System_Int32__ToString((int32_t)&v29, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v6, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_12;
  v12 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), v12, v10, v11);
  v6 = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)v6, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_12;
  v17 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), v17, v15, v16);
  v6 = System_Int32__ToString((int32_t)&v27, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 4u
    || (*(_QWORD *)(v5 + 64) = v6,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)v6, v18, v19),
        *(_DWORD *)(v5 + 24) <= 5u)
    || (v22 = StringLiteral_1544/*":"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_1544/*":"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 72), v22, v20, v21),
        v6 = System_Int32__ToString((int32_t)&v26, 0LL),
        *(_DWORD *)(v5 + 24) <= 6u) )
  {
LABEL_12:
    sub_1B88814(v6, v7);
  }
  *(_QWORD *)(v5 + 80) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 80), (int32_t)v6, v23, v24);
  return System_String__Concat_61720560((System_String_array *)v5, 0LL);
}


bool __fastcall ServantPassiveSkillReleaseEntity__isUse(
        ServantPassiveSkillReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t condType; // w22
  int64_t UserId; // x0
  int32_t condNum; // w20
  int32_t condTargetId; // w21
  int64_t v12; // x22
  int32_t v13; // w21
  int64_t v14; // x19

  if ( (byte_4A5B920 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B920 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    v12 = UserId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v12, condTargetId, condNum, beforeClearQuestId, 0, 0LL);
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
    return CondType__IsOpen(condType, v13, v14, 0, 0LL, 0LL);
  }
}