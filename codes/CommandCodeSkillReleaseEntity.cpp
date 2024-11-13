void __fastcall CommandCodeSkillReleaseEntity___ctor(CommandCodeSkillReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15FFA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B15FFA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCodeSkillReleaseEntity__CreatePK(
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B15FF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&num, *(_QWORD *)&priority);
    byte_4B15FF8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           commandCodeId,
           num,
           priority,
           idx,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall CommandCodeSkillReleaseEntity__CreatePrimaryKey(
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCodeSkillReleaseEntity__getCreatePrimarykey(
        int32_t commandCodeId,
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
  v59 = commandCodeId;
  v56 = idx;
  v57 = priority;
  if ( (byte_4B15FF7 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, *(_QWORD *)&num, *(_QWORD *)&priority);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v5, v6);
    byte_4B15FF7 = 1;
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
bool __fastcall CommandCodeSkillReleaseEntity__isUse(
        CommandCodeSkillReleaseEntity_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t condType; // w21
  int64_t UserId; // x0
  __int64 v9; // x1
  int32_t condNum; // w20
  int32_t condTargetId; // w21
  int64_t v12; // x22
  int32_t v14; // w22
  int64_t v15; // x19

  if ( (byte_4B15FF9 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B15FF9 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    UserId = NetworkManager__get_UserId(0LL);
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    v12 = UserId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
    return CondType__IsQuestPhaseClear(v12, condTargetId, condNum, beforeClearQuestId, 0, 0LL);
  }
  else
  {
    v14 = this->fields.condTargetId;
    v15 = this->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    return CondType__IsOpen(condType, v14, v15, 0, 0LL, 0LL);
  }
}