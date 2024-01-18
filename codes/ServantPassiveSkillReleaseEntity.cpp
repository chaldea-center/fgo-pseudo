void __fastcall ServantPassiveSkillReleaseEntity___ctor(
        ServantPassiveSkillReleaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189BAC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189BAC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4189BAA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&num);
    byte_4189BAA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_1733078 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillReleaseEntity__getCreatePrimarykey(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array *v6; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x20
  __int64 v59; // x0
  __int64 v60; // x0
  int32_t v61; // [xsp+8h] [xbp-28h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v63; // [xsp+18h] [xbp-18h] BYREF
  int32_t v64; // [xsp+1Ch] [xbp-14h] BYREF

  v64 = svtId;
  v63 = num;
  v61 = idx;
  v62 = priority;
  if ( (byte_4189BA9 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, *(_QWORD *)&num);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v5);
    byte_4189BA9 = 1;
  }
  v6 = (System_String_array *)sub_B2C374(string___TypeInfo, 7LL);
  v7 = System_Int32__ToString((int32_t)&v64, 0LL);
  if ( !v6 )
    sub_B2C434(v7, v8);
  v15 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_B2C41C(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
  }
  if ( !v6->max_length )
    goto LABEL_32;
  v6->m_Items[0] = (System_String_o *)v15;
  sub_B2C2F8((BattleServantConfConponent_o *)v6->m_Items, v15, v9, v10, v11, v12, v13, v14);
  v7 = (System_String_o *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    v7 = (System_String_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
    v22 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_32;
  v6->m_Items[1] = (System_String_o *)v22;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  v7 = System_Int32__ToString((int32_t)&v63, 0LL);
  v29 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_B2C41C(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_32;
  v6->m_Items[2] = (System_String_o *)v29;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  v7 = (System_String_o *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    v7 = (System_String_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
    v36 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_32;
  v6->m_Items[3] = (System_String_o *)v36;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  v7 = System_Int32__ToString((int32_t)&v62, 0LL);
  v43 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_B2C41C(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
  }
  if ( v6->max_length <= 4 )
    goto LABEL_32;
  v6->m_Items[4] = (System_String_o *)v43;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  v7 = (System_String_o *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    v7 = (System_String_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v6->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_33;
    v50 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( v6->max_length <= 5 )
    goto LABEL_32;
  v6->m_Items[5] = (System_String_o *)v50;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[5], v50, v44, v45, v46, v47, v48, v49);
  v7 = System_Int32__ToString((int32_t)&v61, 0LL);
  v57 = (System_Int32_array **)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_B2C41C(v7, v6->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_33:
      v60 = sub_B2C454(v7);
      sub_B2C400(v60, 0LL);
    }
  }
  if ( v6->max_length <= 6 )
  {
LABEL_32:
    v59 = sub_B2C460(v7);
    sub_B2C400(v59, 0LL);
  }
  v6->m_Items[6] = (System_String_o *)v57;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[6], v57, v51, v52, v53, v54, v55, v56);
  return System_String__Concat_44385656(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantPassiveSkillReleaseEntity__isUse(
        ServantPassiveSkillReleaseEntity_o *this,
        int32_t dispLimitCount,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t condType; // w21
  int64_t UserId; // x0
  int32_t condNum; // w20
  int32_t condTargetId; // w21
  int64_t v13; // x22
  int32_t v14; // w22
  int64_t v15; // x19

  if ( (byte_4189BAB & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&dispLimitCount);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    byte_4189BAB = 1;
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
    v13 = UserId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v13, condTargetId, condNum, beforeClearQuestId, 0, 0LL);
  }
  else if ( condType == 70 )
  {
    return this->fields.condNum == dispLimitCount;
  }
  else
  {
    v14 = this->fields.condTargetId;
    v15 = this->fields.condNum;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpen(condType, v14, v15, 0, 0LL);
  }
}