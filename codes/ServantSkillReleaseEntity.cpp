void __fastcall ServantSkillReleaseEntity___ctor(ServantSkillReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6DA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6DA2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSkillReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42E6DA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, num, priority, *(_QWORD *)&idx);
    byte_42E6DA0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           num,
           priority,
           idx,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x20
  __int64 v61; // x0
  __int64 v62; // x0
  int32_t v63; // [xsp+8h] [xbp-28h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v65; // [xsp+18h] [xbp-18h] BYREF
  int32_t v66; // [xsp+1Ch] [xbp-14h] BYREF

  v66 = svtId;
  v65 = num;
  v63 = idx;
  v64 = priority;
  if ( (byte_42E6D9F & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, num, priority, *(_QWORD *)&idx);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v5, v6, v7);
    byte_42E6D9F = 1;
  }
  v8 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 7LL);
  v9 = System_Int32__ToString((int32_t)&v66, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  v17 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B5D684(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_33;
  }
  if ( !v8->max_length )
    goto LABEL_32;
  v8->m_Items[0] = (System_String_o *)v17;
  sub_B5D560((BattleServantConfConponent_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
  v9 = (System_String_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    v9 = (System_String_o *)sub_B5D684(StringLiteral_1245/*":"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_33;
    v24 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_32;
  v8->m_Items[1] = (System_String_o *)v24;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  v9 = System_Int32__ToString((int32_t)&v65, 0LL);
  v31 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B5D684(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_33;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_32;
  v8->m_Items[2] = (System_String_o *)v31;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v9 = (System_String_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    v9 = (System_String_o *)sub_B5D684(StringLiteral_1245/*":"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_33;
    v38 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_32;
  v8->m_Items[3] = (System_String_o *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  v9 = System_Int32__ToString((int32_t)&v64, 0LL);
  v45 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B5D684(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_33;
  }
  if ( v8->max_length <= 4 )
    goto LABEL_32;
  v8->m_Items[4] = (System_String_o *)v45;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v9 = (System_String_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    v9 = (System_String_o *)sub_B5D684(StringLiteral_1245/*":"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_33;
    v52 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v8->max_length <= 5 )
    goto LABEL_32;
  v8->m_Items[5] = (System_String_o *)v52;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[5], v52, v46, v47, v48, v49, v50, v51);
  v9 = System_Int32__ToString((int32_t)&v63, 0LL);
  v59 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = (System_String_o *)sub_B5D684(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_33:
      v62 = sub_B5D6BC();
      sub_B5D668(v62, 0LL);
    }
  }
  if ( v8->max_length <= 6 )
  {
LABEL_32:
    v61 = sub_B5D6C8(v9);
    sub_B5D668(v61, 0LL);
  }
  v8->m_Items[6] = (System_String_o *)v59;
  sub_B5D560((BattleServantConfConponent_o *)&v8->m_Items[6], v59, v53, v54, v55, v56, v57, v58);
  return System_String__Concat_44657912(v8, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t condType; // w23
  int32_t v15; // w9
  int64_t UserId; // x0
  int32_t condNum; // w19
  int32_t condTargetId; // w20
  int64_t v20; // x22
  int32_t v21; // w21
  bool IsLimitCountCondType; // w0
  int32_t v23; // w19
  int32_t v24; // w20
  int64_t v25; // x19

  if ( (byte_42E6DA1 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, dispLimitCount, beforeClearQuestId, *(_QWORD *)&specificLimitCount);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    byte_42E6DA1 = 1;
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
    v20 = UserId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v20, condTargetId, condNum, beforeClearQuestId, 0, 0LL);
  }
  else
  {
    if ( condType == 70 )
    {
      if ( dispLimitCount >= 11 )
        v15 = dispLimitCount;
      else
        v15 = dispLimitCount + 1;
      return this->fields.condNum == v15;
    }
    if ( specificLimitCount >= 1 && condType == 7 )
      return this->fields.condNum <= specificLimitCount;
    if ( condType == 7 )
    {
      v21 = 7;
      if ( userSvtId < 1 )
      {
LABEL_31:
        v24 = this->fields.condTargetId;
        v25 = this->fields.condNum;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsOpen(v21, v24, v25, 0, 0LL);
      }
    }
    else
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsLimitCountCondType = CondType__IsLimitCountCondType(condType, 0LL);
      v21 = this->fields.condType;
      if ( userSvtId < 1 || !IsLimitCountCondType )
        goto LABEL_31;
    }
    v23 = this->fields.condNum;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpenForUsrSvt(v21, v23, userSvtId, 0LL);
  }
}