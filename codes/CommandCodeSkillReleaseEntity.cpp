void CommandCodeSkillReleaseEntity___ctor(CommandCodeSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC71D3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC71D3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CommandCodeSkillReleaseEntity__CreatePK(
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4CC71D1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4CC71D1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           commandCodeId,
           num,
           priority,
           idx,
           (const MethodInfo_3149BE4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *CommandCodeSkillReleaseEntity__CreatePrimaryKey(
        CommandCodeSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return CommandCodeSkillReleaseEntity__CreatePK(
           this->fields.commandCodeId,
           this->fields.num,
           this->fields.priority,
           this->fields.idx,
           v2);
}


System_String_o *CommandCodeSkillReleaseEntity__getCreatePrimarykey(
        int32_t commandCodeId,
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v54; // [xsp+0h] [xbp-30h] BYREF
  int32_t v55; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v56; // [xsp+8h] [xbp-28h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-24h] BYREF

  v56 = num;
  v57 = commandCodeId;
  v54 = idx;
  v55 = priority;
  if ( (byte_4CC71D0 & 1) == 0 )
  {
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC71D0 = 1;
  }
  v5 = sub_1C71458(string___TypeInfo, 7);
  v6 = System_Int32__ToString((int32_t)&v57, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v6, v8, v9, v10, v11, v12, v13);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_12;
  v20 = StringLiteral_1450/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1450/*":"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), v20, v14, v15, v16, v17, v18, v19);
  v6 = System_Int32__ToString((int32_t)&v56, 0);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_12;
  *(_QWORD *)(v5 + 48) = v6;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)v6, v21, v22, v23, v24, v25, v26);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_12;
  v33 = StringLiteral_1450/*":"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_1450/*":"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 56), v33, v27, v28, v29, v30, v31, v32);
  v6 = System_Int32__ToString((int32_t)&v55, 0);
  if ( *(_DWORD *)(v5 + 24) <= 4u
    || (*(_QWORD *)(v5 + 64) = v6,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 64), (int32_t)v6, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v5 + 24) <= 5u)
    || (v46 = StringLiteral_1450/*":"*/,
        *(_QWORD *)(v5 + 72) = StringLiteral_1450/*":"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 72), v46, v40, v41, v42, v43, v44, v45),
        v6 = System_Int32__ToString((int32_t)&v54, 0),
        *(_DWORD *)(v5 + 24) <= 6u) )
  {
LABEL_12:
    sub_1C71610(v6);
  }
  *(_QWORD *)(v5 + 80) = v6;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 80), (int32_t)v6, v47, v48, v49, v50, v51, v52);
  return System_String__Concat_64072256((System_String_array *)v5, 0);
}


bool CommandCodeSkillReleaseEntity__isUse(
        CommandCodeSkillReleaseEntity_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t condType; // w21
  NetworkManager_c *v6; // x0
  int32_t condNum; // w20
  int32_t condTargetId; // w21
  int64_t userIdNumber; // x22
  int32_t v11; // w22
  int64_t v12; // x19

  if ( (byte_4CC71D2 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC71D2 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    userIdNumber = v6->static_fields->userIdNumber;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(userIdNumber, condTargetId, condNum, beforeClearQuestId, 0, 0);
  }
  else
  {
    v11 = this->fields.condTargetId;
    v12 = this->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen(condType, v11, v12, 0, 0, 0);
  }
}