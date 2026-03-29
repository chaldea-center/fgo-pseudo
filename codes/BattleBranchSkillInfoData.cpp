void BattleBranchSkillInfoData___ctor(
        BattleBranchSkillInfoData_o *this,
        SkillEntity_CondBranchSkillInfoData_o *condBranchSkillInfoData,
        BattleSkillInfoData_o *original,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Int32_array *condValue; // x1
  struct System_String_o *condType; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int v24; // w8
  struct System_String_o *detailText; // x1
  bool *p_isAnd; // x20

  if ( (byte_4D337F6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9587/*"None"*/);
    sub_1C93AD4(&StringLiteral_7669/*"Individuality"*/);
    sub_1C93AD4(&StringLiteral_8115/*"IsSelfTarget"*/);
    byte_4D337F6 = 1;
  }
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)this, 0);
  BattleBranchSkillInfoData__InheritOriginalSkillInfo(this, original, v7);
  if ( !condBranchSkillInfoData )
    sub_1C93D2C(v8, v9);
  this->fields._skillId = condBranchSkillInfoData->fields.skillId;
  condValue = condBranchSkillInfoData->fields.condValue;
  *(_QWORD *)&this->fields.condBranchType = condValue;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.condBranchType,
    (int32_t)condValue,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  condType = condBranchSkillInfoData->fields.condType;
  if ( System_String__op_Equality(condType, (System_String_o *)StringLiteral_8115/*"IsSelfTarget"*/, 0) )
  {
    v24 = 1;
LABEL_8:
    *((_DWORD *)&this->fields.hasAddBattlePointFunc + 1) = v24;
    goto LABEL_9;
  }
  if ( System_String__op_Equality(condType, (System_String_o *)StringLiteral_7669/*"Individuality"*/, 0) )
  {
    v24 = 2;
    goto LABEL_8;
  }
  if ( System_String__op_Equality(condType, (System_String_o *)StringLiteral_9587/*"None"*/, 0)
    || condType && !condType->fields._stringLength )
  {
    *((_DWORD *)&this->fields.hasAddBattlePointFunc + 1) = 0;
  }
LABEL_9:
  LOBYTE(this->fields.condValue) = condBranchSkillInfoData->fields.isAnd;
  detailText = condBranchSkillInfoData->fields.detailText;
  *(_QWORD *)&this->fields.isAnd = detailText;
  p_isAnd = &this->fields.isAnd;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_isAnd, (int32_t)detailText, v18, v19, v20, v21, v22, v23);
  *((_DWORD *)p_isAnd + 2) = condBranchSkillInfoData->fields.iconBuffId;
}


void BattleBranchSkillInfoData__InheritOriginalSkillInfo(
        BattleBranchSkillInfoData_o *this,
        BattleSkillInfoData_o *original,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x0
  __int64 v11; // x1

  *(_QWORD *)&this->fields._IconBuffId_k__BackingField = original;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconBuffId_k__BackingField,
    (int32_t)original,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !original )
    sub_1C93D2C(v10, v11);
  *(_QWORD *)&this->fields.type = *(_QWORD *)&original->fields.type;
  this->fields.svtUniqueId = original->fields.svtUniqueId;
  this->fields.isPassive = original->fields.isPassive;
  this->fields.isCharge = original->fields.isCharge;
  this->fields.skilllv = original->fields.skilllv;
  *(_QWORD *)&this->fields.priority = *(_QWORD *)&original->fields.priority;
  this->fields.isUseSkill = original->fields.isUseSkill;
}


// local variable allocation has failed, the output may be wrong!
bool BattleBranchSkillInfoData__IsSatisfyCond(
        BattleBranchSkillInfoData_o *this,
        bool isSelfTarget,
        System_Int32_array *targetIndv,
        const MethodInfo *method)
{
  BattleBranchSkillInfoData_o *v6; // x21
  int v7; // w8
  __int64 v9; // x8
  int condValue_low; // w23
  System_Int32_array *v11; // x20
  System_Func_T1__T2__TResult__o *v12; // x0
  System_Func_int____int____bool__o *v13; // x21
  System_Func_T1__T2__TResult__o *v14; // x22
  System_Func_T1__T2__TResult__o *v15; // x22

  v6 = this;
  if ( (byte_4D337F7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_int____int____bool__TypeInfo);
    sub_1C93AD4(&Method_Individuality_IsMatchArray__);
    sub_1C93AD4(&Method_Individuality_IsPartialMatchArray__);
    this = (BattleBranchSkillInfoData_o *)sub_1C93AD4(&Individuality_TypeInfo);
    byte_4D337F7 = 1;
  }
  v7 = *((_DWORD *)&v6->fields.hasAddBattlePointFunc + 1);
  if ( v7 == 2 )
  {
    condValue_low = LOBYTE(v6->fields.condValue);
    v11 = *(System_Int32_array **)&v6->fields.condBranchType;
    v12 = (System_Func_T1__T2__TResult__o *)sub_1C93D20(System_Func_int____int____bool__TypeInfo);
    v13 = (System_Func_int____int____bool__o *)v12;
    if ( condValue_low )
    {
      System_Func_object__object__bool____ctor(v12, 0, Method_Individuality_IsMatchArray__, 0);
      v14 = (System_Func_T1__T2__TResult__o *)sub_1C93D20(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(v14, 0, Method_Individuality_IsPartialMatchArray__, 0);
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
      return Individuality__CheckSignedIndividualities_41149824(
               targetIndv,
               v11,
               v13,
               (System_Func_int____int____bool__o *)v14,
               0);
    }
    else
    {
      System_Func_object__object__bool____ctor(v12, 0, Method_Individuality_IsPartialMatchArray__, 0);
      v15 = (System_Func_T1__T2__TResult__o *)sub_1C93D20(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(v15, 0, Method_Individuality_IsMatchArray__, 0);
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
      return Individuality__CheckSignedIndividualitiesPartialMatch(
               targetIndv,
               v11,
               v13,
               (System_Func_int____int____bool__o *)v15,
               1,
               0);
    }
  }
  else if ( v7 == 1 )
  {
    v9 = *(_QWORD *)&v6->fields.condBranchType;
    if ( !v9 )
      sub_1C93D2C(this, isSelfTarget);
    if ( !*(_DWORD *)(v9 + 24) )
      sub_1C93D34(this);
    return ((*(_DWORD *)(v9 + 32) != 1) ^ isSelfTarget) & 1;
  }
  else
  {
    return v7 == 0;
  }
}


BaseMotionSkip_o *BattleBranchSkillInfoData__MakeSkillSkip(BattleBranchSkillInfoData_o *this, const MethodInfo *method)
{
  return ((BaseMotionSkip_o *(__fastcall *)(BattleBranchSkillInfoData_o *, const MethodInfo *))this->klass->vtable._17_CommonMakeSkillSkip.methodPtr)(
           this,
           this->klass->vtable._17_CommonMakeSkillSkip.method);
}


System_String_o *BattleBranchSkillInfoData__get_DetailText(BattleBranchSkillInfoData_o *this, const MethodInfo *method)
{
  return *(System_String_o **)&this->fields.isAnd;
}


int32_t BattleBranchSkillInfoData__get_IconBuffId(BattleBranchSkillInfoData_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields._DetailText_k__BackingField;
}


int32_t BattleBranchSkillInfoData__get_chargeTurn(BattleBranchSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)&this->fields._IconBuffId_k__BackingField;
  if ( !v2 )
    sub_1C93D2C(0, method);
  return (*(int32_t (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 408LL))(v2, *(_QWORD *)(*(_QWORD *)v2 + 416LL));
}


void BattleBranchSkillInfoData__set_DetailText(
        BattleBranchSkillInfoData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  *(_QWORD *)&this->fields.isAnd = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.isAnd, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void BattleBranchSkillInfoData__set_IconBuffId(
        BattleBranchSkillInfoData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  LODWORD(this->fields._DetailText_k__BackingField) = value;
}


void BattleBranchSkillInfoData__set_chargeTurn(
        BattleBranchSkillInfoData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v3; // x0

  v3 = *(_QWORD *)&this->fields._IconBuffId_k__BackingField;
  if ( !v3 )
    sub_1C93D2C(0, value);
  (*(void (__fastcall **)(__int64, int32_t, _QWORD))(*(_QWORD *)v3 + 424LL))(
    v3,
    value,
    *(_QWORD *)(*(_QWORD *)v3 + 432LL));
}