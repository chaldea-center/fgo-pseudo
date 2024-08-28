void __fastcall ServantTreasureDeviceReleaseEntity___ctor(
        ServantTreasureDeviceReleaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A20309 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_string___ctor__, method);
    byte_4A20309 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30F85D8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantTreasureDeviceReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4A20307 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&num);
    byte_4A20307 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_2E59F5C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  if ( (byte_4A20306 & 1) == 0 )
  {
    sub_1B715CC(&string___TypeInfo, *(_QWORD *)&num);
    sub_1B715CC(&StringLiteral_1545/*":"*/, v5);
    byte_4A20306 = 1;
  }
  v6 = sub_1B71674(string___TypeInfo, 7LL);
  v7 = System_Int32__ToString((int32_t)&v30, 0LL);
  if ( !v6 )
    sub_1B71828(v7, v8);
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v6 + 32) = v7;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)v7, v9, v10);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_12;
  v13 = StringLiteral_1545/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1545/*":"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 40), v13, v11, v12);
  v7 = System_Int32__ToString((int32_t)&v29, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v6 + 48) = v7;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 48), (int32_t)v7, v14, v15);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_12;
  v18 = StringLiteral_1545/*":"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_1545/*":"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 56), v18, v16, v17);
  v7 = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 4u
    || (*(_QWORD *)(v6 + 64) = v7,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 64), (int32_t)v7, v19, v20),
        *(_DWORD *)(v6 + 24) <= 5u)
    || (v23 = StringLiteral_1545/*":"*/,
        *(_QWORD *)(v6 + 72) = StringLiteral_1545/*":"*/,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 72), v23, v21, v22),
        v7 = System_Int32__ToString((int32_t)&v27, 0LL),
        *(_DWORD *)(v6 + 24) <= 6u) )
  {
LABEL_12:
    sub_1B71830(v7, v8);
  }
  *(_QWORD *)(v6 + 80) = v7;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 80), (int32_t)v7, v24, v25);
  return System_String__Concat_61519032((System_String_array *)v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDeviceReleaseEntity__isUse(
        ServantTreasureDeviceReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t condType; // w22
  int32_t v9; // w9
  int64_t UserId; // x0
  int32_t condNum; // w20
  int32_t condTargetId; // w21
  int64_t v14; // x22
  int32_t v15; // w21
  int64_t v16; // x19

  if ( (byte_4A20308 & 1) == 0 )
  {
    sub_1B715CC(&CondType_TypeInfo, *(_QWORD *)&dispLimitCount);
    sub_1B715CC(&NetworkManager_TypeInfo, v7);
    byte_4A20308 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    v14 = UserId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v14, condTargetId, condNum, beforeClearQuestId, 0, 0LL);
  }
  else if ( condType == 70 )
  {
    if ( dispLimitCount >= 11 )
      v9 = dispLimitCount;
    else
      v9 = dispLimitCount + 1;
    return this->fields.condNum == v9;
  }
  else
  {
    v15 = this->fields.condTargetId;
    v16 = this->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen(condType, v15, v16, 0, 0LL, 0LL);
  }
}