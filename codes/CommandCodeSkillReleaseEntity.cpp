void __fastcall CommandCodeSkillReleaseEntity___ctor(CommandCodeSkillReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4214860 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4214860 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCodeSkillReleaseEntity__CreatePK(
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_421485E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&num);
    byte_421485E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           commandCodeId,
           num,
           priority,
           idx,
           (const MethodInfo_1713C34 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  System_String_array *v6; // x19
  System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x20
  __int64 v58; // x0
  __int64 v59; // x0
  int32_t v60; // [xsp+8h] [xbp-28h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v62; // [xsp+18h] [xbp-18h] BYREF
  int32_t v63; // [xsp+1Ch] [xbp-14h] BYREF

  v63 = commandCodeId;
  v62 = num;
  v60 = idx;
  v61 = priority;
  if ( (byte_421485D & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, *(_QWORD *)&num);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v5);
    byte_421485D = 1;
  }
  v6 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 7LL);
  v7 = System_Int32__ToString((int32_t)&v63, 0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  v14 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_B0D964(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
  }
  if ( !v6->max_length )
    goto LABEL_32;
  v6->m_Items[0] = (System_String_o *)v14;
  sub_B0D840((BattleServantConfConponent_o *)v6->m_Items, v14, v8, v9, v10, v11, v12, v13);
  v7 = (System_String_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    v7 = (System_String_o *)sub_B0D964(StringLiteral_1232/*":"*/, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
    v21 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_32;
  v6->m_Items[1] = (System_String_o *)v21;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  v7 = System_Int32__ToString((int32_t)&v62, 0LL);
  v28 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_B0D964(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_32;
  v6->m_Items[2] = (System_String_o *)v28;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  v7 = (System_String_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    v7 = (System_String_o *)sub_B0D964(StringLiteral_1232/*":"*/, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
    v35 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_32;
  v6->m_Items[3] = (System_String_o *)v35;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
  v7 = System_Int32__ToString((int32_t)&v61, 0LL);
  v42 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_B0D964(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
  }
  if ( v6->max_length <= 4 )
    goto LABEL_32;
  v6->m_Items[4] = (System_String_o *)v42;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
  v7 = (System_String_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    v7 = (System_String_o *)sub_B0D964(StringLiteral_1232/*":"*/, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
    v49 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v6->max_length <= 5 )
    goto LABEL_32;
  v6->m_Items[5] = (System_String_o *)v49;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[5], v49, v43, v44, v45, v46, v47, v48);
  v7 = System_Int32__ToString((int32_t)&v60, 0LL);
  v56 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_B0D964(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_33:
      v59 = sub_B0D99C(v7);
      sub_B0D948(v59, 0LL);
    }
  }
  if ( v6->max_length <= 6 )
  {
LABEL_32:
    v58 = sub_B0D9A8(v7);
    sub_B0D948(v58, 0LL);
  }
  v6->m_Items[6] = (System_String_o *)v56;
  sub_B0D840((BattleServantConfConponent_o *)&v6->m_Items[6], v56, v50, v51, v52, v53, v54, v55);
  return System_String__Concat_43930028(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandCodeSkillReleaseEntity__isUse(
        CommandCodeSkillReleaseEntity_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t condType; // w21
  int64_t UserId; // x0
  int32_t condNum; // w20
  int32_t condTargetId; // w21
  int64_t v10; // x22
  int32_t v12; // w22
  int64_t v13; // x19

  if ( (byte_421485F & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    byte_421485F = 1;
  }
  condType = this->fields.condType;
  if ( condType == 1 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    condTargetId = this->fields.condTargetId;
    condNum = this->fields.condNum;
    v10 = UserId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v10, condTargetId, condNum, beforeClearQuestId, 0, 0LL);
  }
  else
  {
    v12 = this->fields.condTargetId;
    v13 = this->fields.condNum;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen(condType, v12, v13, 0, 0LL);
  }
}