void __fastcall ServantSkillReleaseEntity___ctor(ServantSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6661 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6661 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4AB665F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&num);
    byte_4AB665F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_2EC413C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v27; // [xsp+0h] [xbp-30h] BYREF
  int32_t v28; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v29; // [xsp+8h] [xbp-28h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  v29 = num;
  v30 = svtId;
  v27 = idx;
  v28 = priority;
  if ( (byte_4AB665E & 1) == 0 )
  {
    sub_1BAB41C(&string___TypeInfo, *(_QWORD *)&num);
    sub_1BAB41C(&StringLiteral_1541/*":"*/, v5);
    byte_4AB665E = 1;
  }
  v6 = sub_1BAB4C4(string___TypeInfo, 7LL);
  v7 = System_Int32__ToString((int32_t)&v30, 0LL);
  if ( !v6 )
    sub_1BAB678(v7, v8);
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v6 + 32) = v7;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)v7, v9, v10);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_12;
  v13 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1541/*":"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v6 + 40), v13, v11, v12);
  v7 = System_Int32__ToString((int32_t)&v29, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v6 + 48) = v7;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v6 + 48), (int32_t)v7, v14, v15);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_12;
  v18 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_1541/*":"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v6 + 56), v18, v16, v17);
  v7 = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 4u
    || (*(_QWORD *)(v6 + 64) = v7,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v6 + 64), (int32_t)v7, v19, v20),
        *(_DWORD *)(v6 + 24) <= 5u)
    || (v23 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v6 + 72) = StringLiteral_1541/*":"*/,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v6 + 72), v23, v21, v22),
        v7 = System_Int32__ToString((int32_t)&v27, 0LL),
        *(_DWORD *)(v6 + 24) <= 6u) )
  {
LABEL_12:
    sub_1BAB680(v7, v8);
  }
  *(_QWORD *)(v6 + 80) = v7;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v6 + 80), (int32_t)v7, v24, v25);
  return System_String__Concat_62061656((System_String_array *)v6, 0LL);
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
  int64_t UserId; // x0
  int32_t condNum; // w19
  int32_t condTargetId; // w20
  int64_t v18; // x22
  int32_t v19; // w21
  bool IsLimitCountCondType; // w0
  int32_t v21; // w19
  int32_t v22; // w20
  int64_t v23; // x19

  if ( (byte_4AB6660 & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, *(_QWORD *)&dispLimitCount);
    sub_1BAB41C(&NetworkManager_TypeInfo, v11);
    byte_4AB6660 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    v18 = UserId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v18, condTargetId, condNum, beforeClearQuestId, 0, 0LL);
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
LABEL_27:
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
        goto LABEL_27;
    }
    v21 = this->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpenForUsrSvt(v19, v21, userSvtId, 0LL);
  }
}