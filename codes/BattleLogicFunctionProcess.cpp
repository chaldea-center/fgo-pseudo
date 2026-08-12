void BattleLogicFunctionProcess___ctor(BattleLogicFunctionProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_AddStateProcess___ctor(
        BattleLogicFunctionProcess_AddStateProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_AddStateShortProcess___ctor(
        BattleLogicFunctionProcess_AddStateShortProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_BaseFunctionTypeProcess__CheckTargetIndividuality(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        DataVals_o *baseVals,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        FunctionEntity_o *funcEnt,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v10; // x19
  int32_t Param; // w21
  char v13; // w22
  __int64 v14; // x27
  __int64 v15; // x20
  const MethodInfo *v16; // x4
  _BOOL4 TargetUniqueIdArray; // w23
  _BOOL4 v18; // w25
  System_Collections_Generic_List_int__o *v19; // x24
  System_Int32_array *v20; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x27
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v24; // x23
  System_Collections_Generic_List_int__o *v25; // x29
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v27; // x23
  const MethodInfo *v28; // x4
  System_Collections_Generic_List_int__o *v29; // x20
  struct BattleLogicFunction_o *v30; // x8
  struct BattleData_o *data; // x8
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v32; // x19
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v33; // x0
  const MethodInfo *v34; // x4
  System_Int32_array *v35; // x19
  __int64 v36; // x8
  unsigned __int64 v37; // x9
  int32_t v38; // w21
  int32_t v39; // w19
  int32_t v40; // w20
  int v41; // w9
  int v42; // w12
  unsigned int v43; // w11
  __int64 v44; // x10
  int v45; // w12
  __int64 v46; // x1
  bool IsNullOrEmpty; // w8
  int v48; // w9
  System_Int32_array *v49; // x20
  System_Int32_array_array *v50; // x20
  _BOOL4 v52; // [xsp+4h] [xbp-9Ch]
  __int64 v53; // [xsp+8h] [xbp-98h]
  int32_t count; // [xsp+14h] [xbp-8Ch]
  bool v55; // [xsp+18h] [xbp-88h]
  int32_t countEqual; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t countLower[2]; // [xsp+20h] [xbp-80h] BYREF
  System_Int32_array *targetIdArray; // [xsp+28h] [xbp-78h] BYREF
  System_Int32_array_array *overwriteTvals; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *originalTvals; // [xsp+38h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_5973C5F & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5973C5F = 1;
  }
  overwriteTvals = 0;
  originalTvals = 0;
  *(_QWORD *)countLower = 0;
  targetIdArray = 0;
  countEqual = 0;
  if ( !funcEnt )
    goto LABEL_69;
  FunctionEntity__GetTargetVals(funcEnt, &originalTvals, &overwriteTvals, 0);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)originalTvals,
                                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BasicHelper__IsNullOrEmpty(
                                                                     (System_Collections_ICollection_o *)overwriteTvals,
                                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
  }
  if ( !baseVals )
    goto LABEL_69;
  Param = DataVals__GetParam(baseVals, 65, 0, 0);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__isParam(baseVals, 143, 0);
  if ( !wrapTarget )
    goto LABEL_69;
  v13 = (char)this;
  v14 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass->vtable._15_unknown.methodPtr)(
          wrapTarget,
          wrapTarget->klass->vtable._15_unknown.method);
  v15 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, bool, _QWORD, _QWORD, const MethodInfo *))wrapTarget->klass->vtable._16_unknown.methodPtr)(
          wrapTarget,
          Param < 1,
          0,
          v13 & 1,
          wrapTarget->klass->vtable._16_unknown.method);
  TargetUniqueIdArray = BattleLogicFunctionProcess_BaseFunctionTypeProcess__TryGetTargetUniqueIdArray(
                          v10,
                          baseVals,
                          actionData,
                          &targetIdArray,
                          v16);
  v18 = DataVals__IsFuncCheckFieldIndividuality(baseVals, 0);
  v55 = DataVals__TryGetFuncCheckTargetIndividualityCount(baseVals, &countLower[1], countLower, &countEqual, 0);
  v19 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !TargetUniqueIdArray && !v18 )
  {
LABEL_11:
    if ( TargetUniqueIdArray || v18 )
    {
      if ( !v19 )
        goto LABEL_69;
      goto LABEL_39;
    }
    if ( v14 && v15 )
    {
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_2213B20(
                                                                       int___TypeInfo,
                                                                       (unsigned int)(*(_DWORD *)(v15 + 24)
                                                                                    + *(_DWORD *)(v14 + 24)));
      v36 = *(_QWORD *)(v14 + 24);
      v35 = (System_Int32_array *)this;
      if ( (int)v36 >= 1 )
      {
        v37 = 0;
        while ( this )
        {
          if ( v37 >= *((unsigned int *)this + 6) )
            goto LABEL_70;
          *((_DWORD *)this + v37 + 8) = *(_DWORD *)(v14 + 32 + 4 * v37);
          if ( (unsigned int)v36 == ++v37 )
            goto LABEL_53;
        }
        goto LABEL_69;
      }
      if ( !this )
        goto LABEL_69;
LABEL_53:
      v41 = *((_DWORD *)this + 6);
      if ( (int)v36 <= v41 )
        v42 = *((_DWORD *)this + 6);
      else
        v42 = v36;
      if ( v42 == (_DWORD)v36 )
        goto LABEL_61;
      v43 = *(_DWORD *)(v15 + 24);
      v44 = 0;
      v45 = v36 - v42;
      while ( (unsigned int)v44 < v43 && (int)v36 + (int)v44 < (unsigned int)v41 )
      {
        *((_DWORD *)this + (int)v36 + v44 + 8) = *(_DWORD *)(v15 + 4LL * (int)v44 + 32);
        if ( !(v45 + (_DWORD)++v44) )
          goto LABEL_61;
      }
LABEL_70:
      sub_2213CE4(this);
    }
LABEL_69:
    sub_2213CDC(this, baseVals);
  }
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)targetIdArray,
                                                                   0);
  v53 = v14;
  v52 = TargetUniqueIdArray;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v20 = targetIdArray;
    if ( !targetIdArray )
      goto LABEL_69;
    max_length = targetIdArray->max_length;
    if ( (int)max_length >= 1 )
    {
      count = 0;
      v22 = 0;
      while ( v22 < (unsigned int)max_length )
      {
        logic_k__BackingField = v10->fields._logic_k__BackingField;
        if ( !logic_k__BackingField )
          goto LABEL_69;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)logic_k__BackingField->fields.data;
        if ( !this )
          goto LABEL_69;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleData__getServantData(
                                                                         (BattleData_o *)this,
                                                                         v20->m_Items[v22],
                                                                         0);
        if ( this )
        {
          v24 = this;
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__isLogicDeadAndNoRevive(
                                                                           (BattleServantData_o *)this,
                                                                           0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v25 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v25,
              (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__getIndividualities(
                                                                             (BattleServantData_o *)v24,
                                                                             0,
                                                                             1,
                                                                             0,
                                                                             1,
                                                                             0);
            if ( !v25 )
              goto LABEL_69;
            System_Collections_Generic_List_int___AddRange(
              v25,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v24[35].monitor;
            if ( !this )
              goto LABEL_69;
            BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffIndividualities(
                                                                                   (BattleBuffData_o *)this,
                                                                                   Param < 1,
                                                                                   0,
                                                                                   v13 & 1,
                                                                                   0,
                                                                                   0,
                                                                                   0);
            System_Collections_Generic_List_int___AddRange(
              v25,
              BuffIndividualities,
              (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                             v25,
                                                                             (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v19 )
              goto LABEL_69;
            v27 = this;
            System_Collections_Generic_List_int___AddRange(
              v19,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v55 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__MatchedCount(
                                                                               this,
                                                                               (System_Int32_array *)v27,
                                                                               overwriteTvals,
                                                                               originalTvals,
                                                                               v28);
              count += (int)this;
            }
          }
        }
        LODWORD(max_length) = v20->max_length;
        if ( (__int64)++v22 >= (int)max_length )
          goto LABEL_31;
      }
      goto LABEL_70;
    }
  }
  count = 0;
LABEL_31:
  if ( v18 )
  {
    v29 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v29,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v30 = v10->fields._logic_k__BackingField;
    if ( !v30 )
      goto LABEL_69;
    data = v30->fields.data;
    if ( !data )
      goto LABEL_69;
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)data->fields._FieldEnvData_k__BackingField;
    if ( !this )
      goto LABEL_69;
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleFieldEnvironmentData__GetFieldAndBuffIndividuality(
                                                                     (BattleFieldEnvironmentData_o *)this,
                                                                     Param < 1,
                                                                     v13 & 1,
                                                                     0);
    if ( !v29 )
      goto LABEL_69;
    System_Collections_Generic_List_int___AddRange(
      v29,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                     v29,
                                                                     (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v19 )
      goto LABEL_69;
    v32 = this;
    System_Collections_Generic_List_int___AddRange(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    if ( !v55 )
    {
LABEL_39:
      v35 = System_Collections_Generic_List_int___ToArray(
              v19,
              (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_61:
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0);
      v48 = *(&Individuality_TypeInfo->_2.cctor_finished + 1);
      if ( IsNullOrEmpty )
      {
        v49 = originalTvals;
        if ( !v48 )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v46);
        return Individuality__CheckSignedIndividualities(v35, v49, 0);
      }
      else
      {
        v50 = overwriteTvals;
        if ( !v48 )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v46);
        return Individuality__CheckSignedMultiIndividuality(v35, v50, 0);
      }
    }
    count += BattleLogicFunctionProcess_BaseFunctionTypeProcess__MatchedCount(
               v33,
               (System_Int32_array *)v32,
               overwriteTvals,
               originalTvals,
               v34);
  }
  else
  {
    v14 = v53;
    TargetUniqueIdArray = v52;
    if ( !v55 )
      goto LABEL_11;
  }
  v38 = countEqual;
  v40 = countLower[0];
  v39 = countLower[1];
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, baseVals);
  return Individuality__IsMatchAboveBelowEqual(count, v39, v40, v38, 0);
}


void BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


bool BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsNeedInit(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *logic,
        const MethodInfo *method)
{
  return this->fields._logic_k__BackingField != logic;
}


bool BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsPreCheckTargetsAvailable(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        FunctionEntity_o *funcEnt,
        int32_t actorUniqueId,
        const MethodInfo *method)
{
  return 1;
}


BattleLogicFunctionProcess_FunctionTargetCheck_o *BattleLogicFunctionProcess_BaseFunctionTypeProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_5973C5E & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
    byte_5973C5E = 1;
  }
  v4 = (Il2CppObject *)sub_2213CCC(BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
  System_Object___ctor(v4, 0);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v4;
}


int32_t BattleLogicFunctionProcess_BaseFunctionTypeProcess__MatchedCount(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        System_Int32_array *countCheckArray,
        System_Int32_array_array *overwriteTvals,
        System_Int32_array *originalTvals,
        const MethodInfo *method)
{
  __int64 v8; // x1
  bool IsNullOrEmpty; // w8
  int v10; // w9

  if ( (byte_5973C60 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5973C60 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0);
  v10 = *(&Individuality_TypeInfo->_2.cctor_finished + 1);
  if ( IsNullOrEmpty )
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v8);
    return Individuality__GetMatchedTotalCount(countCheckArray, originalTvals, 0);
  }
  else
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v8);
    return Individuality__GetMatchedTotalCountMultiIndividuality(countCheckArray, overwriteTvals, 0);
  }
}


bool BattleLogicFunctionProcess_BaseFunctionTypeProcess__TryGetTargetUniqueIdArray(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        System_Int32_array **targetIdArray,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w20
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  int32_t actorId; // w23
  int32_t targetId; // w24
  BattleData_o *data; // x22
  int32_t PTTargetId; // w0
  System_Int32_array *TargetIds; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  *targetIdArray = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)targetIdArray,
    0,
    (System_String_o *)actionData,
    (System_String_o *)targetIdArray,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !baseVals )
    goto LABEL_7;
  v12 = DataVals__GetFuncCheckTargetIndividualityTargetType(baseVals, 0);
  v14 = v12;
  if ( (v12 & 0x80000000) == 0 )
  {
    logic_k__BackingField = this->fields._logic_k__BackingField;
    if ( logic_k__BackingField && actionData )
    {
      actorId = actionData->fields.actorId;
      targetId = actionData->fields.targetId;
      data = logic_k__BackingField->fields.data;
      PTTargetId = BattleActionData__getPTTargetId(actionData, 0);
      TargetIds = Target__getTargetIds(data, actorId, targetId, PTTargetId, v14, 0, 0);
      *targetIdArray = TargetIds;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)targetIdArray, (int32_t)TargetIds, v21, v22, v23, v24, v25, v26);
      return v14 >= 0;
    }
LABEL_7:
    sub_2213CDC(v12, v13);
  }
  return v14 >= 0;
}


bool BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCommonCondition(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x27
  DataVals_o *dataVals_k__BackingField; // x20
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  int32_t targetId_k__BackingField; // w23
  FunctionEntity_o *funcEnt; // x25
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x21
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v13; // x22
  int32_t funcIndex; // w26
  char v15; // w0
  const MethodInfo *v16; // x5
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8
  struct BattleLogicFunction_o *v20; // x8
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  struct BattleLogicFunction_o *v24; // x8
  BattleServantData_o *v25; // x0
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3

  if ( !funcTarget )
    goto LABEL_51;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  funcTarget->fields.invalidType = 0;
  if ( !funcUnit_k__BackingField )
    goto LABEL_51;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_51;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_51;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_51;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  v13 = this;
  if ( externalArg->fields._SkillTiming_k__BackingField == 1 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__IsEqualsTo1(
                                                                     funcUnit_k__BackingField->fields._dataVals_k__BackingField,
                                                                     161,
                                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
  }
  if ( !WrapTarget_k__BackingField )
    goto LABEL_51;
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._7_unknown.methodPtr)(
          WrapTarget_k__BackingField,
          WrapTarget_k__BackingField->klass->vtable._7_unknown.method)
      & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._8_unknown.methodPtr)(
                                                                     WrapTarget_k__BackingField,
                                                                     WrapTarget_k__BackingField->klass->vtable._8_unknown.method);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_51;
      if ( FunctionEntity__isTargetEnemy(funcEnt, 0) )
        goto LABEL_17;
    }
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._9_unknown.methodPtr)(
                                                                     WrapTarget_k__BackingField,
                                                                     WrapTarget_k__BackingField->klass->vtable._9_unknown.method);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_51;
      if ( FunctionEntity__isTargetPlayer(funcEnt, 0) )
        goto LABEL_17;
    }
    if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._10_unknown.methodPtr)(
            WrapTarget_k__BackingField,
            WrapTarget_k__BackingField->klass->vtable._10_unknown.method)
        & 1) != 0 )
    {
LABEL_17:
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__isCheckDead(dataVals_k__BackingField, 0);
      if ( ((unsigned __int8)this & 1) == 0 && !dataVals_k__BackingField->fields.flgBoost )
      {
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._11_unknown.methodPtr)(
                                                                         WrapTarget_k__BackingField,
                                                                         WrapTarget_k__BackingField->klass->vtable._11_unknown.method);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._12_unknown.methodPtr)(
                                                                           WrapTarget_k__BackingField,
                                                                           WrapTarget_k__BackingField->klass->vtable._12_unknown.method);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._13_unknown.methodPtr)(
                                                                             WrapTarget_k__BackingField,
                                                                             WrapTarget_k__BackingField->klass->vtable._13_unknown.method);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._14_unknown.methodPtr)(
                                                                               WrapTarget_k__BackingField,
                                                                               WrapTarget_k__BackingField->klass->vtable._14_unknown.method);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !funcEnt )
                  goto LABEL_51;
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)FuncList__Check(
                                                                                 43,
                                                                                 funcEnt->fields.funcType,
                                                                                 0);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)FuncList__Check(
                                                                                   45,
                                                                                   funcEnt->fields.funcType,
                                                                                   0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    return 0;
                }
              }
            }
          }
        }
      }
      if ( action )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        action->fields.isSuccessTargetSelection = 1;
        v15 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._8_unknown.methodPtr)(
                WrapTarget_k__BackingField,
                WrapTarget_k__BackingField->klass->vtable._8_unknown.method);
        BattleActionData__setFuncTargetPlayerType(action, funcIndex, v15 & 1, 0);
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__CheckTargetIndividuality(
                                                                         v13,
                                                                         dataVals_k__BackingField,
                                                                         WrapTarget_k__BackingField,
                                                                         funcEnt,
                                                                         action,
                                                                         v16);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          funcTarget->fields.invalidType = 1;
          return 0;
        }
        if ( funcUnit_k__BackingField->fields.questFuncFlg )
        {
          if ( funcUnit_k__BackingField->fields._IsAvoidFuncExec_k__BackingField )
          {
            BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
              funcTarget,
              (const MethodInfo *)action);
            return 0;
          }
          if ( !funcUnit_k__BackingField->fields.isLowestStarFunction )
            goto LABEL_38;
          logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
          if ( !logic_k__BackingField )
            goto LABEL_51;
          data = logic_k__BackingField->fields.data;
          if ( !data )
            goto LABEL_51;
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__CheckFunctionTriggerStar(
                                                                           dataVals_k__BackingField,
                                                                           data->fields.totalCriticalStars,
                                                                           0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_38:
            v20 = v13->fields._logic_k__BackingField;
            if ( v20 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v20->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, targetId_k__BackingField, 0);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
                                                                                 (BattleLogicFunctionProcess_FunctionUnitCheck_o *)ServantData,
                                                                                 dataVals_k__BackingField,
                                                                                 ServantData,
                                                                                 v22);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
LABEL_48:
                  BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
                    funcTarget,
                    dataVals_k__BackingField,
                    v23);
                  return 0;
                }
                v24 = v13->fields._logic_k__BackingField;
                if ( v24 )
                {
                  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v24->fields.data;
                  if ( this )
                  {
                    v25 = BattleData__getServantData((BattleData_o *)this, targetId_k__BackingField, 0);
                    if ( !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetBattlePointRateCondition(
                            (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v25,
                            dataVals_k__BackingField,
                            v25,
                            v26) )
                    {
                      BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid_54141280(
                        funcTarget,
                        dataVals_k__BackingField,
                        1,
                        v27);
                      return 0;
                    }
                    if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._24_unknown.methodPtr)(
                            WrapTarget_k__BackingField,
                            WrapTarget_k__BackingField->klass->vtable._24_unknown.method)
                        & 1) != 0
                      && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._25_unknown.methodPtr)(
                            WrapTarget_k__BackingField,
                            WrapTarget_k__BackingField->klass->vtable._25_unknown.method)
                        & 1) != 0 )
                    {
                      return 1;
                    }
                    goto LABEL_48;
                  }
                }
              }
            }
            goto LABEL_51;
          }
        }
        else if ( !DataVals__isShowQuestNoEffect(dataVals_k__BackingField, 0) )
        {
          return 0;
        }
        funcTarget->fields.invalidType = 1;
        return 0;
      }
LABEL_51:
      sub_2213CDC(this, action);
    }
  }
  return 0;
}


bool BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCondition(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  if ( !funcTarget )
    sub_2213CDC(this, action);
  funcTarget->fields.isFixResult = 0;
  return 1;
}


bool BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkExecutable(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  if ( !funcTarget )
    sub_2213CDC(this, action);
  funcTarget->fields.isFixResult = 1;
  return (((__int64 (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *))this->klass->vtable._6_checkCommonCondition.methodPtr)(this)
        & 1) != 0
      && ((bool (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))this->klass->vtable._7_checkCondition.methodPtr)(
           this,
           action,
           funcTarget,
           this->klass->vtable._7_checkCondition.method);
}


BattleData_o *BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_2213CDC(this, method);
  return logic_k__BackingField->fields.data;
}


BattleLogicFunction_o *BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_logic(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  return this->fields._logic_k__BackingField;
}


void BattleLogicFunctionProcess_BaseFunctionTypeProcess__init(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *logic,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._logic_k__BackingField = logic;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)logic,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_BaseFunctionTypeProcess__set_logic(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._logic_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_ChangeBgmCheck___ctor(
        BattleLogicFunctionProcess_ChangeBgmCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_ChangeBgmCheck__AddBuff(
        BattleLogicFunctionProcess_ChangeBgmCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_ChangeBgmCheck_o *v9; // x20
  struct BattleServantData_o *targetSvt; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  int32_t uniqueId; // w20
  DataVals_o *dataVals_k__BackingField; // x21
  BattleBuffData_ChangeBgmData_o *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  v9 = this;
  if ( (byte_5973C44 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_2213A60(&BattleBuffData_ChangeBgmData_TypeInfo);
    byte_5973C44 = 1;
  }
  if ( !buffData
    || (this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)v9->fields.targetSvt,
        buffData->fields.delAfterProcType = 3,
        !this)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0),
        (targetSvt = v9->fields.targetSvt) == 0)
    || (funcUnit_k__BackingField = v9->fields._funcUnit_k__BackingField) == 0 )
  {
    sub_2213CDC(this, actBuffData);
  }
  uniqueId = targetSvt->fields.uniqueId;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v14 = (BattleBuffData_ChangeBgmData_o *)sub_2213CCC(BattleBuffData_ChangeBgmData_TypeInfo);
  BattleBuffData_ChangeBgmData___ctor_52845176(v14, uniqueId, buffData, dataVals_k__BackingField, 0);
  buffData->fields.changeBgmData = v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&buffData->fields.changeBgmData,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void BattleLogicFunctionProcess_ChangeBgmCheck__AfterAddBuffProc(
        BattleLogicFunctionProcess_ChangeBgmCheck_o *this,
        BattleActionData_o *mainAction,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  Generator_BGM_o *v9; // x0
  BattleData_o *data; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  BattleBuffData_ChangeBgmData_o *changeBgmData; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x20
  BattleActionEffect_ChangeBgmBuff_o *v17; // x20

  if ( (byte_5973C45 & 1) == 0 )
  {
    sub_2213A60(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    byte_5973C45 = 1;
  }
  BattleLogicFunctionProcess_ServantAddStateTargetCheck__AfterAddBuffProc(
    (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)this,
    mainAction,
    actBuffData,
    buffData,
    method);
  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_17;
  logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_17;
  if ( !buffData )
    goto LABEL_17;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_17;
  data = logic_k__BackingField->fields.data;
  changeBgmData = buffData->fields.changeBgmData;
  if ( !procArg_k__BackingField->fields._IsTreasureDvc_k__BackingField )
    goto LABEL_20;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_17;
  if ( externalArg->fields.isPassive )
  {
LABEL_20:
    if ( data )
    {
      if ( changeBgmData )
      {
        FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
        v9 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(buffData->fields.changeBgmData, data, 0);
        if ( FieldEnvData_k__BackingField )
        {
          ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.methodPtr)(
            FieldEnvData_k__BackingField,
            v9,
            2,
            0,
            FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method);
          v17 = (BattleActionEffect_ChangeBgmBuff_o *)sub_2213CCC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
          BattleActionEffect_ChangeBgmBuff___ctor(v17, 0);
          if ( actBuffData )
          {
            BattleActionData_BuffData__SetActionEffectProc(actBuffData, (BattleActionEffect_Base_o *)v17, 0);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_2213CDC(v9, data);
  }
  if ( !mainAction )
    goto LABEL_17;
  BattleActionData__SetTreasureDvcAfterChangeBgm(mainAction, changeBgmData, 0);
}


void BattleLogicFunctionProcess_CommonAddStateProcess___ctor(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_CommonAddStateProcess__CheckCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x29
  __int64 data; // x0
  const MethodInfo *v9; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x21
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x22
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x25
  int32_t targetId_k__BackingField; // w24
  struct BattleLogicFunction_o *v15; // x8
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x28
  BattleServantData_o *v17; // x27
  FunctionEntity_o *funcEnt; // x23
  struct System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x8
  System_Int32_array *v20; // x21
  System_Int32_array *ParamArray; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Int32_array **v28; // x23
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v29; // x19
  BattleBuffData_o *BuffData; // x28
  BattleBuffData_CheckIndividualitiesData_o *v31; // x0
  BattleServantData_o *v32; // x1
  BattleBuffData_CheckIndividualitiesData_o *v33; // x27
  BattleServantData_o *v34; // x26
  BattleBuffData_CheckIndividualitiesData_o *v35; // x27
  System_Func_object__bool__o *v36; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleBuffData_BuffData_o *v38; // x28
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v39; // x21
  bool isDisabledBuff; // w29
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x2
  struct BattleLogicFunction_o *v43; // x8
  BattleData_o *v44; // x3
  const MethodInfo *v45; // x4
  int32_t funcVals; // w0
  const MethodInfo *v47; // x3
  System_Int32_array *v48; // x5
  bool result; // w0
  bool v50; // w7
  int32_t v51; // w29
  int32_t Param; // w23
  const MethodInfo *v53; // x3
  __int64 v54; // x23
  _BOOL8 v55; // x0
  const MethodInfo *v56; // x4
  int32_t v57; // w8
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct DataVals_o *v64; // x8
  const MethodInfo *v65; // x3
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v66; // x0
  BattleBuffData_BuffData_o *v67; // x1
  bool v68; // w2
  _BOOL4 v69; // w8
  struct DataVals_o *v70; // x8
  System_String_o *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  BattleBuffData_BuffData_o *substituteBuff; // [xsp+20h] [xbp-C0h]
  const MethodInfo *v79; // [xsp+28h] [xbp-B8h]
  int32_t value; // [xsp+3Ch] [xbp-A4h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v81; // [xsp+40h] [xbp-A0h]
  BuffEntity_o *buffEnt; // [xsp+48h] [xbp-98h]
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *v83; // [xsp+58h] [xbp-88h]
  BattleLogicFunctionProcess_WrapTargetData_o *v84; // [xsp+60h] [xbp-80h]
  BattleServantData_o *opponent; // [xsp+68h] [xbp-78h]
  bool v86; // [xsp+70h] [xbp-70h] BYREF
  bool isResisted; // [xsp+74h] [xbp-6Ch] BYREF
  int32_t grantRate[2]; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_5973C62 & 1) == 0 )
  {
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0__CheckCondition_b__0__);
    sub_2213A60(&BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&StringLiteral_2887/*"BATTLE_GUARD_FUNCTION"*/);
    byte_5973C62 = 1;
  }
  *(_QWORD *)grantRate = 0;
  isResisted = 0;
  v86 = 0;
  v7 = sub_2213CCC(BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !funcTarget )
    goto LABEL_79;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_79;
  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_79;
  if ( !action )
    goto LABEL_79;
  data = (__int64)logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_79;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, action->fields.actorId, 0);
  v15 = this->fields._logic_k__BackingField;
  opponent = (BattleServantData_o *)data;
  if ( !v15 )
    goto LABEL_79;
  data = (__int64)v15->fields.data;
  if ( !data )
    goto LABEL_79;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId_k__BackingField, 0);
  if ( !dataVals_k__BackingField )
    goto LABEL_79;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  v17 = (BattleServantData_o *)data;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  ((void (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, struct BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))funcTarget->klass->vtable._17_InitPrevCheckCondition.methodPtr)(
    funcTarget,
    action,
    WrapTarget_k__BackingField,
    funcTarget->klass->vtable._17_InitPrevCheckCondition.method);
  data = DataVals__GetCardIndex(dataVals_k__BackingField, 0);
  if ( (data & 0x80000000) == 0
    || (data = DataVals__GetCardIndividuality(dataVals_k__BackingField, 0), (data & 0x80000000) == 0) )
  {
    CardIdsIndexList_k__BackingField = funcTarget->fields._CardIdsIndexList_k__BackingField;
    if ( !CardIdsIndexList_k__BackingField )
      goto LABEL_79;
    if ( CardIdsIndexList_k__BackingField->fields._size <= 0
      && !BattleLogicFunctionProcess_FunctionTargetCheck__get_IsTargetField(
            (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
            v9) )
    {
      goto LABEL_55;
    }
  }
  data = (__int64)this->fields._logic_k__BackingField;
  if ( !data )
    goto LABEL_79;
  v81 = funcUnit_k__BackingField;
  data = (__int64)BattleLogicFunction__GetBuffEntity((BattleLogicFunction_o *)data, funcEnt, 0);
  if ( !data )
    goto LABEL_79;
  buffEnt = (BuffEntity_o *)data;
  v20 = *(System_Int32_array **)(data + 48);
  v83 = funcTarget;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 115, 0);
  data = (__int64)CommonFunction__JoinIndiv(v20, ParamArray, 0);
  if ( !v7 )
    goto LABEL_79;
  v84 = WrapTarget_k__BackingField;
  *(_QWORD *)(v7 + 16) = data;
  v28 = (System_Int32_array **)(v7 + 16);
  v29 = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), data, v22, v23, v24, v25, v26, v27);
  if ( !v17 )
    goto LABEL_79;
  BuffData = BattleServantData__get_BuffData(v17, 0);
  v31 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v32 = v17;
  v33 = v31;
  v34 = v32;
  BattleBuffData_CheckIndividualitiesData___ctor_52826232(v31, v32, opponent, 0, 0, 0, 0, 1, 0);
  if ( !v33 )
    goto LABEL_79;
  v35 = BattleBuffData_CheckIndividualitiesData__AddOpponentIndividuality(v33, *(System_Int32_array **)(v7 + 16), 0);
  v36 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v7,
    Method_BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0__CheckCondition_b__0__,
    0);
  if ( !BuffData
    || (data = (__int64)BattleBuffData__GetFirstMatchCondPriorityBuff(
                          BuffData,
                          165,
                          v35,
                          0,
                          (System_Func_BattleBuffData_BuffData__bool__o *)v36,
                          0,
                          0,
                          0),
        !procArg_k__BackingField)
    || (externalArg = procArg_k__BackingField->fields.externalArg) == 0
    || (v38 = (BattleBuffData_BuffData_o *)data, data = (__int64)v29->fields._logic_k__BackingField, v39 = v29, !data) )
  {
LABEL_79:
    sub_2213CDC(data, v9);
  }
  funcTarget = v83;
  isDisabledBuff = BattleLogicFunction__isDisabledBuff(
                     (BattleLogicFunction_o *)data,
                     externalArg->fields.isPassive,
                     dataVals_k__BackingField,
                     0);
  if ( !isDisabledBuff )
  {
    data = (__int64)v39->fields._logic_k__BackingField;
    if ( !data )
      goto LABEL_79;
    data = BattleLogicFunction__isFailDependentLastResult(
             (BattleLogicFunction_o *)data,
             procArg_k__BackingField,
             targetId_k__BackingField,
             dataVals_k__BackingField,
             0);
    if ( (data & 1) != 0 )
      goto LABEL_45;
    if ( !v84 )
      goto LABEL_79;
    data = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, System_Int32_array *, BattleServantData_o *, const MethodInfo *))v84->klass->vtable._17_unknown.methodPtr)(
             v84,
             *v28,
             opponent,
             v84->klass->vtable._17_unknown.method);
    if ( (data & 1) == 0 || v38 )
      goto LABEL_36;
LABEL_35:
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v83,
      v9);
    return 0;
  }
  data = DataVals__IsForciblyAddState(dataVals_k__BackingField, 0);
  if ( (data & 1) != 0 )
  {
    if ( !v84 )
      goto LABEL_79;
    data = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, System_Int32_array *, BattleServantData_o *, const MethodInfo *))v84->klass->vtable._23_unknown.methodPtr)(
             v84,
             *v28,
             opponent,
             v84->klass->vtable._23_unknown.method);
    if ( (data & 1) != 0 )
      goto LABEL_35;
  }
LABEL_36:
  v43 = v39->fields._logic_k__BackingField;
  if ( !v43 )
    goto LABEL_79;
  data = BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
           procArg_k__BackingField,
           targetId_k__BackingField,
           dataVals_k__BackingField,
           v43->fields.data,
           v41);
  if ( (data & 1) == 0 )
    goto LABEL_45;
  if ( !v39->fields._logic_k__BackingField )
    goto LABEL_79;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
          procArg_k__BackingField,
          (int32_t)v9,
          dataVals_k__BackingField,
          v44,
          v45) )
    goto LABEL_45;
  funcVals = DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0);
  if ( (funcVals & 0x80000000) == 0 )
    goto LABEL_43;
  value = funcVals;
  if ( !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          v47) )
  {
LABEL_45:
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v83,
      dataVals_k__BackingField,
      v42);
    return 0;
  }
  funcVals = BattleUtility__Abs_53558088(value, 0);
LABEL_43:
  v48 = *v28;
  isResisted = 0;
  v86 = 0;
  if ( v38 )
    substituteBuff = v38;
  else
    substituteBuff = 0;
  v50 = isDisabledBuff;
  v51 = funcVals;
  BattleLogicFunctionProcess_CommonAddStateProcess__CheckRate(
    v39,
    &grantRate[1],
    grantRate,
    buffEnt,
    opponent,
    v48,
    funcVals > 99999,
    v50,
    v83,
    funcVals,
    &isResisted,
    &v86,
    substituteBuff,
    v79);
  if ( DataVals__isSameBuffLimit(dataVals_k__BackingField, 0) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0);
    data = (__int64)DataVals__GetSameBuffLimitTargetIndividuality(dataVals_k__BackingField, 0);
    if ( !v84 )
      goto LABEL_79;
    if ( ((int (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, __int64, __int64, const MethodInfo *))v84->klass->vtable._19_unknown.methodPtr)(
           v84,
           data,
           1,
           v84->klass->vtable._19_unknown.method) >= Param )
    {
      v83->fields.invalidType = 1;
      return 0;
    }
  }
  v54 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, _QWORD, const MethodInfo *))v83->klass->vtable._13_GetConvertBuffEntity.methodPtr)(
          v83,
          (unsigned int)action->fields.actorId,
          v83->klass->vtable._13_GetConvertBuffEntity.method);
  if ( !v54 )
  {
    v55 = BuffEntity__isCheckGroup(buffEnt, 0);
    if ( v55
      && BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
           (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v55,
           v83,
           buffEnt,
           v84,
           v56) )
    {
LABEL_55:
      result = 0;
      v57 = 1;
LABEL_56:
      funcTarget->fields.invalidType = v57;
      return result;
    }
  }
  if ( v51 < 0
    && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          v53) )
  {
    grantRate[0] = -1000;
  }
  data = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BuffEntity_o *, const MethodInfo *))v83->klass->vtable._19_CheckBuffCondtion.methodPtr)(
           v83,
           action,
           buffEnt,
           v83->klass->vtable._19_CheckBuffCondtion.method);
  if ( (data & 1) == 0 )
    return 0;
  if ( grantRate[1] >= grantRate[0] )
  {
    v83->fields.invalidText = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v83->fields.invalidText, 0, v58, v59, v60, v61, v62, v63);
    v69 = isResisted;
    v83->fields.invalidType = 2;
    if ( v69 )
    {
      if ( !v38 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2887/*"BATTLE_GUARD_FUNCTION"*/, 0);
        v83->fields.invalidText = v71;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v83->fields.invalidText,
          (int32_t)v71,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
        return 0;
      }
      v70 = v81->fields._dataVals_k__BackingField;
      v34->fields._IsSubstituteBuffActive_k__BackingField = 1;
      if ( v70 )
      {
        BattleBuffData_BuffData__SetSubstituteFuncIndex(v38, v70->fields.funcIndex, 0);
        v66 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v83;
        v67 = v38;
        v68 = 1;
        goto LABEL_71;
      }
      goto LABEL_79;
    }
    return 0;
  }
  if ( v38 && v86 )
  {
    v64 = v81->fields._dataVals_k__BackingField;
    v34->fields._IsSubstituteBuffActive_k__BackingField = 1;
    if ( v64 )
    {
      BattleBuffData_BuffData__SetSubstituteFuncIndex(v38, v64->fields.funcIndex, 0);
      v66 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v83;
      v67 = v38;
      v68 = 0;
LABEL_71:
      BattleLogicFunctionProcess_FunctionTargetCheck__SetInvalidInfoBySubstituteBuff(v66, v67, v68, v65);
      return 0;
    }
    goto LABEL_79;
  }
  if ( v54
    && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, __int64, const MethodInfo *))v83->klass->vtable._14_CheckConvertBuffData.methodPtr)(
          v83,
          v54,
          v83->klass->vtable._14_CheckConvertBuffData.method)
      & 1) == 0 )
  {
    result = 0;
    v57 = 3;
    goto LABEL_56;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunctionProcess_CommonAddStateProcess__CheckRate(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        int32_t *resistRate,
        int32_t *grantRate,
        BuffEntity_o *buffEnt,
        BattleServantData_o *actionSvtData,
        System_Int32_array *addIndividuality,
        bool isIgnoreRateChangeBuff,
        bool noCheckFlg,
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *funcTarget,
        int32_t funcVals,
        bool *isResisted,
        bool *isSubstituted,
        BattleBuffData_BuffData_o *substituteBuff,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v21; // x0
  __int64 Value; // x0
  __int64 v23; // x1
  bool v24; // w9
  int v25; // w23
  System_Int32_array *vals; // x22
  System_Int32_array *v27; // x24
  int32_t v28; // w10
  int32_t v29; // w11
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]

  if ( (byte_5973C65 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_2213A60(&StringLiteral_12879/*"STATUS_UP_BUFF"*/);
    byte_5973C65 = 1;
  }
  v21 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunctionProcess_CommonAddStateProcess__GetResistRate(
                                                                this,
                                                                actionSvtData,
                                                                addIndividuality,
                                                                isIgnoreRateChangeBuff,
                                                                noCheckFlg,
                                                                funcTarget,
                                                                substituteBuff,
                                                                (const MethodInfo *)noCheckFlg);
  *resistRate = (int)v21;
  *grantRate = BattleLogicFunctionProcess_CommonAddStateProcess__GetGrantRate(
                 v21,
                 actionSvtData,
                 addIndividuality,
                 isIgnoreRateChangeBuff,
                 noCheckFlg,
                 funcTarget,
                 funcVals,
                 substituteBuff,
                 v31);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_12879/*"STATUS_UP_BUFF"*/, 0);
  if ( *resistRate >= 1000 )
  {
    if ( !buffEnt || (v25 = Value, vals = buffEnt->fields.vals, (Value = sub_2213B20(int___TypeInfo, 1)) == 0) )
      sub_2213CDC(Value, v23);
    v27 = (System_Int32_array *)Value;
    if ( !*(_DWORD *)(Value + 24) )
      sub_2213CE4(Value);
    *(_DWORD *)(Value + 32) = v25;
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v23);
    v24 = !Individuality__CheckIndividualities(vals, v27, 0);
  }
  else
  {
    v24 = 0;
  }
  v28 = *resistRate;
  v29 = *grantRate;
  if ( substituteBuff )
  {
    if ( v28 >= v29 )
    {
      if ( !v24 )
        return;
      substituteBuff->fields._IsSubstituteResisted_k__BackingField = 1;
    }
    else
    {
      isResisted = isSubstituted;
      substituteBuff->fields._IsSubstituteSuccess_k__BackingField = 1;
      substituteBuff->fields.isUse = 1;
    }
  }
  else if ( v28 < v29 || !v24 )
  {
    return;
  }
  *isResisted = 1;
}


int32_t BattleLogicFunctionProcess_CommonAddStateProcess__GetGrantRate(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleServantData_o *actionSvtData,
        System_Int32_array *addIndividuality,
        bool isIgnoreRateChangeBuff,
        bool noCheckFlg,
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *funcTarget,
        int32_t funcVals,
        BattleBuffData_BuffData_o *substituteBuff,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x23
  _BOOL4 v15; // w22
  int v17; // w25
  struct BattleBuffData_SubstituteData_o *substituteData; // x8
  float v19; // s0
  __int64 v21; // [xsp+8h] [xbp-48h] BYREF

  v21 = 0;
  if ( !funcTarget )
    goto LABEL_14;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_14;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_14;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  v15 = noCheckFlg;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__isParam((DataVals_o *)this, 116, 0);
  v17 = (int)this;
  if ( substituteBuff )
  {
    substituteData = substituteBuff->fields.substituteData;
    if ( !substituteData )
      goto LABEL_14;
    if ( substituteData->fields.useSvtResistRate )
    {
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleUtility__FloorToInt(
                                                                     substituteData->fields.rate * (float)funcVals,
                                                                     0);
      funcVals = (int)this;
    }
  }
  if ( actionSvtData && !isIgnoreRateChangeBuff && (v15 & (v17 ^ 1) & 1) == 0 )
  {
    if ( WrapTarget_k__BackingField )
    {
      v19 = ((float (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, System_Int32_array *, BattleServantData_o *, __int64 *, _QWORD, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._22_unknown.methodPtr)(
              WrapTarget_k__BackingField,
              addIndividuality,
              actionSvtData,
              &v21,
              v17 & 1,
              WrapTarget_k__BackingField->klass->vtable._22_unknown.method);
      funcVals += BattleUtility__FloorToInt(v19 * 1000.0, 0);
      return funcVals;
    }
LABEL_14:
    sub_2213CDC(this, actionSvtData);
  }
  return funcVals;
}


int32_t BattleLogicFunctionProcess_CommonAddStateProcess__GetResistRate(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleServantData_o *actionSvtData,
        System_Int32_array *addIndividuality,
        bool isIgnoreRateChangeBuff,
        bool noCheckFlg,
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *funcTarget,
        BattleBuffData_BuffData_o *substituteBuff,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x23
  bool v14; // w26
  int32_t v15; // w19
  struct BattleBuffData_SubstituteData_o *substituteData; // x8
  float v17; // s0
  __int64 v19; // [xsp+8h] [xbp-48h] BYREF

  v19 = 0;
  if ( !funcTarget )
    goto LABEL_14;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_14;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  v14 = BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
          (const MethodInfo *)actionSvtData);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleRandom__getNext(1000, 0);
  v15 = (int)this;
  if ( !isIgnoreRateChangeBuff && !noCheckFlg && !v14 )
  {
    if ( substituteBuff )
    {
      substituteData = substituteBuff->fields.substituteData;
      if ( !substituteData )
        goto LABEL_14;
      if ( !substituteData->fields.useBuffResistRate )
      {
LABEL_12:
        v15 += BattleUtility__FloorToInt(substituteData->fields.resist * 1000.0, 0);
        return v15;
      }
    }
    if ( !WrapTarget_k__BackingField )
LABEL_14:
      sub_2213CDC(this, actionSvtData);
    v17 = ((float (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, System_Int32_array *, BattleServantData_o *, __int64 *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._18_unknown.methodPtr)(
            WrapTarget_k__BackingField,
            addIndividuality,
            actionSvtData,
            &v19,
            WrapTarget_k__BackingField->klass->vtable._18_unknown.method);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleUtility__FloorToInt(v17 * 1000.0, 0);
    v15 += (int)this;
    if ( substituteBuff )
    {
      substituteData = substituteBuff->fields.substituteData;
      if ( substituteData )
        goto LABEL_12;
      goto LABEL_14;
    }
  }
  return v15;
}


bool BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *funcTarget,
        BuffEntity_o *buffEnt,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        const MethodInfo *method)
{
  __int64 v8; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v9; // x22
  unsigned __int64 v10; // x24
  int32_t v11; // w23
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x8

  if ( (byte_5973C63 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_5973C63 = 1;
  }
  if ( !funcTarget )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcTarget->fields._AttachTargetList_k__BackingField;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_20;
  v8 = *((_QWORD *)this + 3);
  v9 = this;
  if ( (int)v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        sub_2213CE4(this);
      if ( !wrapTarget )
        break;
      v11 = *((_DWORD *)&v9[1].monitor + v10);
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass->vtable._6_unknown.methodPtr)(
                                                                     wrapTarget,
                                                                     wrapTarget->klass->vtable._6_unknown.method);
      if ( !buffEnt || !this )
        break;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleBuffData__checkBuffGroup(
                                                                     (BattleBuffData_o *)this,
                                                                     buffEnt->fields.buffGroup,
                                                                     v11,
                                                                     0);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(funcTarget, v11, v12);
      LODWORD(v8) = v9[1].klass;
      if ( (__int64)++v10 >= (int)v8 )
        goto LABEL_15;
    }
LABEL_20:
    sub_2213CDC(this, funcTarget);
  }
LABEL_15:
  if ( (byte_5973C38 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_5973C38 = 1;
  }
  AttachTargetList_k__BackingField = funcTarget->fields._AttachTargetList_k__BackingField;
  return !AttachTargetList_k__BackingField || AttachTargetList_k__BackingField->fields._size < 1;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_FunctionTargetCheck_o *BattleLogicFunctionProcess_CommonAddStateProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v5; // x19
  struct DataVals_o *dataVals_k__BackingField; // x8
  int logic_k__BackingField_high; // w8
  _QWORD *v8; // x8
  __int64 v9; // x19

  v5 = this;
  if ( (byte_5973C64 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_2213A60(&BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo);
    byte_5973C64 = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v5->fields._logic_k__BackingField) == 0
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                       (BattleLogicFunction_o *)this,
                                                                       dataVals_k__BackingField->fields.funcEnt,
                                                                       0)) == 0 )
  {
    sub_2213CDC(this, *(_QWORD *)&targetId);
  }
  logic_k__BackingField_high = HIDWORD(this->fields._logic_k__BackingField);
  if ( logic_k__BackingField_high > 161 )
  {
    if ( logic_k__BackingField_high <= 10000 )
    {
      if ( logic_k__BackingField_high == 176 )
      {
        v8 = &BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo;
        goto LABEL_26;
      }
      if ( logic_k__BackingField_high == 199 )
      {
        v8 = &BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo;
        goto LABEL_26;
      }
    }
    else
    {
      switch ( logic_k__BackingField_high )
      {
        case 10001:
          v8 = &BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo;
          goto LABEL_26;
        case 10002:
          v8 = &BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo;
          goto LABEL_26;
        case 10003:
          v8 = &BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo;
LABEL_26:
          v9 = sub_2213CCC(*v8);
          goto LABEL_27;
      }
    }
    goto LABEL_20;
  }
  if ( logic_k__BackingField_high != 107 )
  {
    if ( logic_k__BackingField_high == 154 )
    {
      v8 = &BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo;
      goto LABEL_26;
    }
    if ( logic_k__BackingField_high == 161 )
    {
      v8 = &BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo;
      goto LABEL_26;
    }
LABEL_20:
    v8 = &BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo;
    goto LABEL_26;
  }
  v9 = sub_2213CCC(BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo);
  *(_DWORD *)(v9 + 132) = -1;
LABEL_27:
  System_Object___ctor((Il2CppObject *)v9, 0);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v9;
}


bool BattleLogicFunctionProcess_CommonAddStateProcess__checkCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v8; // x2

  if ( (byte_5973C61 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo);
    byte_5973C61 = 1;
  }
  if ( funcTarget
    && (naturalAligment = BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo->_2.naturalAligment,
        funcTarget->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (BattleLogicFunctionProcess_CommonAddStateTargetCheck_c *)funcTarget->klass->_2.typeHierarchy[naturalAligment - 1] == BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo )
      v8 = funcTarget;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  return BattleLogicFunctionProcess_CommonAddStateProcess__CheckCondition(
           this,
           action,
           (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)v8,
           method);
}


void BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0___ctor(
        BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0___CheckCondition_b__0(
        BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0_o *v4; // x19
  System_Int32_array *v6; // x20
  System_Func_int__bool__o *_9__1; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_5973C66 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0_o *)sub_2213A60(&Method_BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0__CheckCondition_b__1__);
    byte_5973C66 = 1;
  }
  if ( !x )
    goto LABEL_11;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0_o *)BattleBuffData_BuffData__get_Entity(
                                                                                      x,
                                                                                      0);
  if ( !this )
    goto LABEL_11;
  if ( BasicHelper__IsNullOrEmpty(*((System_Collections_ICollection_o **)this + 11), 0) )
    return 1;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0_o *)BattleBuffData_BuffData__get_Entity(
                                                                                      x,
                                                                                      0);
  if ( !this )
LABEL_11:
    sub_2213CDC(this, x);
  v6 = (System_Int32_array *)*((_QWORD *)this + 11);
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0__CheckCondition_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_int__58784608(
           v6,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


bool BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0___CheckCondition_b__1(
        BattleLogicFunctionProcess_CommonAddStateProcess___c__DisplayClass1_0_o *this,
        int32_t indv,
        const MethodInfo *method)
{
  if ( (byte_5973C67 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5973C67 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.addIndividuality,
           indv,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck___ctor(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck__AfterAddedBuffServantProcess(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleServantData_o *targetSvtData,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *v6; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x22
  int32_t type; // w23
  BattleBuffData_o *buffData; // x23
  BattleBuffData_CheckIndividualitiesData_o *v11; // x24
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v12; // x8
  struct DataVals_o *v13; // x9
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v14; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v17; // x8

  v6 = this;
  if ( (byte_5973C3E & 1) == 0 )
  {
    sub_2213A60(&BuffList_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_5973C3E = 1;
  }
  if ( !buffEnt )
    return;
  funcUnit_k__BackingField = v6->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_42;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  type = buffEnt->fields.type;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, targetSvtData);
  this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)BuffList__CheckType(154, type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !targetSvtData )
      goto LABEL_42;
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)BattleServantData__get_BuffData(targetSvtData, 0);
    if ( !this )
      goto LABEL_42;
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this->fields._CardIdsIndexList_k__BackingField;
    if ( !this )
      goto LABEL_42;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0);
  }
  this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)BuffEntity__checkBuffType(buffEnt, 140, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !targetSvtData )
      goto LABEL_42;
    buffData = targetSvtData->fields.buffData;
    v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_52826232(v11, targetSvtData, 0, 0, 0, 0, 0, 1, 0);
    if ( !buffData )
      goto LABEL_42;
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)BattleBuffData__getBuffList_52648620(
                                                                       buffData,
                                                                       83,
                                                                       v11,
                                                                       1,
                                                                       0,
                                                                       0,
                                                                       0,
                                                                       0);
    if ( !this )
      goto LABEL_42;
    if ( this->fields._WrapTarget_k__BackingField )
    {
      v12 = v6->fields._funcUnit_k__BackingField;
      if ( !v12 )
        goto LABEL_42;
      if ( !dataVals_k__BackingField )
        goto LABEL_42;
      v13 = v12->fields._dataVals_k__BackingField;
      if ( !v13 )
        goto LABEL_42;
      this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)v12->fields._logic_k__BackingField;
      if ( !this )
        goto LABEL_42;
      BattleLogicFunction__functionResetCommandCard(
        (BattleLogicFunction_o *)this,
        targetSvtData->fields.uniqueId,
        dataVals_k__BackingField->fields.funcEnt,
        dataVals_k__BackingField,
        v13->fields.funcIndex,
        0);
    }
  }
  this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)BuffEntity__checkBuffType(buffEnt, 156, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v6->fields._funcUnit_k__BackingField;
    if ( v14 )
    {
      logic_k__BackingField = v14->fields._logic_k__BackingField;
      if ( logic_k__BackingField )
      {
        data = logic_k__BackingField->fields.data;
        if ( data )
        {
          this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)data->fields._FieldEnvData_k__BackingField;
          if ( this )
          {
            BattleFieldEnvironmentData__UpdateAttachCardBuffTargetCardIndex(
              (BattleFieldEnvironmentData_o *)this,
              targetSvtData,
              0);
            goto LABEL_28;
          }
        }
      }
    }
LABEL_42:
    sub_2213CDC(this, targetSvtData);
  }
LABEL_28:
  v17 = v6->fields._funcUnit_k__BackingField;
  if ( !v17 )
    goto LABEL_42;
  this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)v17->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_42;
  BattleLogicFunction__AfterAddedBuffProcess((BattleLogicFunction_o *)this, targetSvtData, buffEnt, 0);
  this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)BuffEntity__getDamageRelease(buffEnt, 0);
  if ( (int)this < 1 )
    goto LABEL_34;
  if ( !targetSvtData )
    goto LABEL_42;
  if ( BattleServantData__isLogicResultAlive(targetSvtData, 0) || !BattleServantData__isGuts(targetSvtData, 0) )
  {
LABEL_34:
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)BuffEntity__getDamageRelease(buffEnt, 0);
    if ( (_DWORD)this != -1 )
    {
      if ( !targetSvtData )
        goto LABEL_42;
      goto LABEL_40;
    }
    if ( !targetSvtData )
      goto LABEL_42;
  }
  targetSvtData->fields.isGutsSleepRelease = 0;
LABEL_40:
  this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)BattleServantData__get_BuffData(targetSvtData, 0);
  if ( !this )
    goto LABEL_42;
  BattleBuffData__DisableApplyBuffByAvoidBuff((BattleBuffData_o *)this, 0);
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck__ApplyPrevSaveBuffData(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Int32_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5973C3C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_5973C3C = 1;
  }
  CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField
    || (CardIdsIndexList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       CardIdsIndexList_k__BackingField,
                                                                                       (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !buff)
    || (buff->fields.servantCardIdsIndexArray = (struct System_Int32_array *)CardIdsIndexList_k__BackingField,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&buff->fields.servantCardIdsIndexArray,
          (int32_t)CardIdsIndexList_k__BackingField,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (CardIdsIndexList_k__BackingField = this->fields._AttachTargetList_k__BackingField) == 0) )
  {
    sub_2213CDC(CardIdsIndexList_k__BackingField, buff);
  }
  v12 = System_Collections_Generic_List_int___ToArray(
          CardIdsIndexList_k__BackingField,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  buff->fields.attachTargets = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&buff->fields.attachTargets,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


bool BattleLogicFunctionProcess_CommonAddStateTargetCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  return 1;
}


int32_t BattleLogicFunctionProcess_CommonAddStateTargetCheck__ConvertAttachTargetFromCardIndex(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  return cardIndex + 101;
}


System_Int32_array *BattleLogicFunctionProcess_CommonAddStateTargetCheck__GetAttachTargetArray(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        int64_t userCommandCodeId,
        System_Int32_array *cardIdsIndexArray,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_Int32_array *result; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_int__o *v18; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_int__o *v25; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int32_t v29; // w1
  System_Action_int__o *v30; // x21

  if ( (byte_5973C3A & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_int___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__);
    sub_2213A60(&BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
    byte_5973C3A = 1;
  }
  v9 = sub_2213CCC(BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v9 + 16) = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)v18, v19, v20, v21, v22, v23, v24);
  if ( userCommandCodeId >= 1 )
  {
    if ( !wrapTarget )
      goto LABEL_17;
    v25 = *(System_Collections_Generic_List_int__o **)(v9 + 16);
    result = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, const MethodInfo *))wrapTarget->klass->vtable._21_unknown.methodPtr)(
                                     wrapTarget,
                                     userCommandCodeId,
                                     wrapTarget->klass->vtable._21_unknown.method);
    if ( !v25 )
      goto LABEL_17;
    items = v25->fields._items;
    v27 = Method_System_Collections_Generic_List_int__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_17;
    size = v25->fields._size;
    v29 = (_DWORD)result + 101;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v25,
        v29,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v25->fields._size = size + 1;
      items->m_Items[size] = v29;
    }
  }
  v30 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v30,
    (Il2CppObject *)v9,
    Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
    0);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)cardIdsIndexArray,
    (System_Action_T__o *)v30,
    (const MethodInfo_3811CEC *)Method_BasicHelper_ForEach_int___);
  result = *(System_Int32_array **)(v9 + 16);
  if ( !result )
    goto LABEL_17;
  if ( SLODWORD(result->max_length) > 0 )
    return System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)result,
             (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  result = (System_Int32_array *)sub_2213B20(int___TypeInfo, 1);
  if ( !result )
LABEL_17:
    sub_2213CDC(result, v11);
  if ( !LODWORD(result->max_length) )
    sub_2213CE4(result);
  result->m_Items[0] = 1;
  return result;
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck__InitPrevCheckCondition(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *v6; // x19
  System_Collections_Generic_IEnumerable_T__o *v7; // x22
  System_Collections_Generic_List_int__o *v8; // x23
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **p_CardIdsIndexList_k__BackingField; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int64_t userCommandCodeId; // x21
  System_Int32_array *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Collections_Generic_List_int__o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  v6 = this;
  if ( (byte_5973C39 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5973C39 = 1;
  }
  if ( !wrapTarget
    || (v7 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass->vtable._20_unknown.methodPtr)(
                                                              wrapTarget,
                                                              wrapTarget->klass->vtable._20_unknown.method,
                                                              wrapTarget,
                                                              method),
        v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_71723804(
          v8,
          v7,
          (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480),
        v6->fields._CardIdsIndexList_k__BackingField = v8,
        p_CardIdsIndexList_k__BackingField = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **)&v6->fields._CardIdsIndexList_k__BackingField,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v6->fields._CardIdsIndexList_k__BackingField,
          (int32_t)v8,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !action)
    || (this = *p_CardIdsIndexList_k__BackingField) == 0 )
  {
    sub_2213CDC(this, action);
  }
  userCommandCodeId = action->fields.userCommandCodeId;
  v17 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)this,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, System_Int32_array *, const MethodInfo *))v6->klass->vtable._18_GetAttachTargetArray.methodPtr)(
                                                         v6,
                                                         wrapTarget,
                                                         userCommandCodeId,
                                                         v17,
                                                         v6->klass->vtable._18_GetAttachTargetArray.method);
  v19 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v19,
    v18,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  v6->fields._AttachTargetList_k__BackingField = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields._AttachTargetList_k__BackingField,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t attachTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0

  if ( (byte_5973C3B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    byte_5973C3B = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField
    || (System_Collections_Generic_List_int___Remove(
          AttachTargetList_k__BackingField,
          attachTarget,
          (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__),
        (AttachTargetList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField) == 0) )
  {
    sub_2213CDC(AttachTargetList_k__BackingField, *(_QWORD *)&attachTarget);
  }
  System_Collections_Generic_List_int___Remove(
    AttachTargetList_k__BackingField,
    attachTarget - 101,
    (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
}


bool BattleLogicFunctionProcess_CommonAddStateTargetCheck__TryGetOverwriteClassId(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t *classId,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *v4; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x21
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v8; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleServantData_o *ServantData; // x0
  __int64 v11; // x1
  int32_t Value; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_5973C3D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_5973C3D = 1;
  }
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  entity = 0;
  if ( !funcUnit_k__BackingField )
    goto LABEL_18;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_18;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)DataVals__GetParam(
                                                                     funcUnit_k__BackingField->fields._dataVals_k__BackingField,
                                                                     191,
                                                                     0,
                                                                     0);
  if ( (_DWORD)this == 1 )
  {
    v8 = v4->fields._funcUnit_k__BackingField;
    if ( !v8 )
      goto LABEL_18;
    logic_k__BackingField = v8->fields._logic_k__BackingField;
    if ( !logic_k__BackingField )
      goto LABEL_18;
    if ( !procArg_k__BackingField )
      goto LABEL_18;
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)logic_k__BackingField->fields.data;
    if ( !this )
      goto LABEL_18;
    ServantData = BattleData__getServantData(
                    (BattleData_o *)this,
                    procArg_k__BackingField->fields._EnemyTargetId_k__BackingField,
                    0);
    Value = ServantData ? BattleServantData__GetLogicClassId(ServantData, 0) : -1;
  }
  else
  {
    Value = DataVals__GetValue(dataVals_k__BackingField, 0);
  }
  *classId = Value;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
LABEL_18:
    sub_2213CDC(this, classId);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           *classId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
}


System_Collections_Generic_List_int__o *BattleLogicFunctionProcess_CommonAddStateTargetCheck__get_AttachTargetList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._AttachTargetList_k__BackingField;
}


System_Collections_Generic_List_int__o *BattleLogicFunctionProcess_CommonAddStateTargetCheck__get_CardIdsIndexList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._CardIdsIndexList_k__BackingField;
}


bool BattleLogicFunctionProcess_CommonAddStateTargetCheck__get_ExistAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x8

  if ( (byte_5973C38 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_5973C38 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  return AttachTargetList_k__BackingField && AttachTargetList_k__BackingField->fields._size > 0;
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck__set_AttachTargetList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AttachTargetList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AttachTargetList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck__set_CardIdsIndexList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CardIdsIndexList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CardIdsIndexList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0___ctor(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0___GetAttachTargetArray_b__0(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *v4; // x20
  struct System_Collections_Generic_List_int__o *targetList; // x8
  _QWORD *v6; // x9
  __int64 _4__this_low; // x10
  int32_t v8; // w1

  v4 = this;
  if ( (byte_5973C3F & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    byte_5973C3F = 1;
  }
  if ( !v4->fields.__4__this
    || (this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)v4->fields.targetList) == 0
    || (targetList = this->fields.targetList,
        v6 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(this->fields.__4__this),
        !targetList) )
  {
    sub_2213CDC(this, *(_QWORD *)&index);
  }
  _4__this_low = SLODWORD(this->fields.__4__this);
  v8 = index + 101;
  if ( (unsigned int)_4__this_low >= targetList->fields._size )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      v8,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.__4__this) = _4__this_low + 1;
    *((_DWORD *)&targetList->fields._syncRoot + _4__this_low) = v8;
  }
}


void BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(
        BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_CommonFieldFunctionProcess__IsPreCheckTargetsAvailable(
        BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *this,
        FunctionEntity_o *funcEnt,
        int32_t actorUniqueId,
        const MethodInfo *method)
{
  return !BattleLogicFunctionProcess_CommonFieldFunctionProcess__IsTargetNotServant(
            this,
            funcEnt,
            actorUniqueId,
            method);
}


bool BattleLogicFunctionProcess_CommonFieldFunctionProcess__IsTargetNotServant(
        BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *this,
        FunctionEntity_o *funcEnt,
        int32_t actorUniqueId,
        const MethodInfo *method)
{
  _BOOL4 v6; // w0

  if ( !funcEnt )
    sub_2213CDC(this, 0);
  if ( Target__Check(0, funcEnt->fields.targetType, 0) || Target__Check(33, funcEnt->fields.targetType, 0) )
    return (unsigned int)actorUniqueId >> 31;
  else
    LOBYTE(v6) = 0;
  return v6;
}


bool BattleLogicFunctionProcess_CommonFieldFunctionProcess__checkCommonCondition(
        BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x22
  const MethodInfo *v9; // x3

  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0
    || !action )
  {
    sub_2213CDC(this, action);
  }
  if ( BattleLogicFunctionProcess_CommonFieldFunctionProcess__IsTargetNotServant(
         this,
         dataVals_k__BackingField->fields.funcEnt,
         action->fields.actorId,
         method) )
  {
    dataVals_k__BackingField->fields.defCheckDead = 1;
  }
  return BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCommonCondition(
           (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
           action,
           funcTarget,
           v9);
}


void BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(
        BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_CommonFunctionTypeProcess__CheckConditionPartial(
        BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        DataVals_o *baseVals,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  return 1;
}


bool BattleLogicFunctionProcess_CommonFunctionTypeProcess__checkCondition(
        BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **v6; // x28
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // x22
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v8; // x8
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x29
  int32_t targetId_k__BackingField; // w20
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v12; // x8
  BattleServantData_o *v13; // x23
  FunctionEntity_o *funcEnt; // x26
  bool v15; // w25
  __int64 v16; // x24
  const MethodInfo *v17; // x2
  int32_t funcType; // w1
  __int64 v20; // x1
  struct System_String_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  MissionNaviTransitionBoardItem_o *p_invalidText; // x0
  const MethodInfo *v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Int32_array *vals; // x20
  struct DataVals_o *v38; // x8
  struct System_String_o *v39; // x20
  struct System_Int32_array *v40; // x21
  int32_t v41; // w22
  struct BattleBuffData_BuffData_o *v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w8
  BattleServantData_o *opSvt; // [xsp+18h] [xbp-68h]

  v6 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **)this;
  if ( (byte_5973C69 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunction_FuncActionResult_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_2213A60(&StringLiteral_2887/*"BATTLE_GUARD_FUNCTION"*/);
    byte_5973C69 = 1;
  }
  if ( !funcTarget )
    goto LABEL_64;
  funcUnit = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit )
    goto LABEL_64;
  v8 = v6[2];
  if ( !v8 )
    goto LABEL_64;
  if ( !action )
    goto LABEL_64;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v8->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_64;
  procArg_k__BackingField = funcUnit->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     action->fields.actorId,
                                                                     0);
  v12 = v6[2];
  opSvt = (BattleServantData_o *)this;
  if ( !v12 )
    goto LABEL_64;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v12->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_64;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     targetId_k__BackingField,
                                                                     0);
  if ( !dataVals_k__BackingField )
    goto LABEL_64;
  v13 = (BattleServantData_o *)this;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v15 = BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(funcUnit, (const MethodInfo *)action);
  v16 = sub_2213CCC(BattleLogicFunction_FuncActionResult_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  this = v6[2];
  if ( !this )
    goto LABEL_64;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunction__checkFuncAction(
                                                                     (BattleLogicFunction_o *)this,
                                                                     procArg_k__BackingField,
                                                                     action->fields.actorId,
                                                                     targetId_k__BackingField,
                                                                     0,
                                                                     funcEnt,
                                                                     dataVals_k__BackingField,
                                                                     action->fields.treasureDvcId > 0,
                                                                     funcUnit,
                                                                     (BattleLogicFunction_FuncActionResult_o *)v16,
                                                                     0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !v16 )
      goto LABEL_64;
    if ( *(_BYTE *)(v16 + 16) )
    {
      BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v17);
      return 0;
    }
    if ( !funcEnt )
LABEL_64:
      sub_2213CDC(this, action);
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(7, funcEnt->fields.funcType, 0);
    if ( ((unsigned __int8)this & 1) != 0
      || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(
                                                                             8,
                                                                             funcEnt->fields.funcType,
                                                                             0),
          ((unsigned __int8)this & 1) != 0) )
    {
      if ( v13 )
      {
        if ( BattleServantData__checkPlayer(v13, 0) )
          funcTarget->fields.invalidType = 2;
        return 0;
      }
      goto LABEL_64;
    }
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(19, funcEnt->fields.funcType, 0);
    if ( ((unsigned __int8)this & 1) != 0
      || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(
                                                                             20,
                                                                             funcEnt->fields.funcType,
                                                                             0),
          ((unsigned __int8)this & 1) != 0) )
    {
      if ( !v13 )
        goto LABEL_64;
      if ( !v13->fields.isEnemy )
        return 0;
      funcType = funcEnt->fields.funcType;
      funcTarget->fields.invalidType = 2;
      if ( !FuncList__Check(20, funcType, 0) || BattleServantData__getBuffResistDelayNPTurn(v13, opSvt, 0) <= 0.0 || v15 )
        return 0;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2887/*"BATTLE_GUARD_FUNCTION"*/, 0);
      v28 = (int)v21;
      funcTarget->fields.invalidText = v21;
      p_invalidText = (MissionNaviTransitionBoardItem_o *)&funcTarget->fields.invalidText;
LABEL_62:
      sub_2213A04(p_invalidText, v28, v22, v23, v24, v25, v26, v27);
      return 0;
    }
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(13, funcEnt->fields.funcType, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_64;
      if ( BattleServantData__checkAvoidInstantDeath(v13, opSvt, 0) && !*(_BYTE *)(v16 + 19) )
      {
        BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, v30);
        return 0;
      }
    }
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(2, funcEnt->fields.funcType, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      vals = funcEnt->fields.vals;
      if ( opSvt
        || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)DataVals__isParam(
                                                                               dataVals_k__BackingField,
                                                                               77,
                                                                               0),
            ((unsigned __int8)this & 1) == 0) )
      {
        if ( !v15 )
        {
          if ( !v13 )
            goto LABEL_64;
          if ( BattleServantData__getBuffTOLERANCESUBSTATEMagnification(v13, vals, opSvt, 0) > 0.0 )
            goto LABEL_51;
        }
      }
LABEL_59:
      v39 = 0;
LABEL_60:
      v40 = 0;
      v41 = 0;
      v49 = 2;
      goto LABEL_61;
    }
    if ( *(_BYTE *)(v16 + 17) )
    {
      if ( !*(_BYTE *)(v16 + 19) )
      {
LABEL_51:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, action);
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2887/*"BATTLE_GUARD_FUNCTION"*/, 0);
        goto LABEL_60;
      }
      v38 = funcUnit->fields._dataVals_k__BackingField;
      if ( !v38 )
        goto LABEL_64;
      this = *(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **)(v16 + 72);
      if ( !this )
        goto LABEL_64;
      v39 = *(struct System_String_o **)(v16 + 48);
      v40 = *(struct System_Int32_array **)(v16 + 64);
      v41 = *(_DWORD *)(v16 + 56);
    }
    else
    {
      if ( !*(_BYTE *)(v16 + 18) )
        goto LABEL_59;
      v38 = funcUnit->fields._dataVals_k__BackingField;
      funcTarget->fields.IsSubstituted = 1;
      if ( !v38 )
        goto LABEL_64;
      this = *(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **)(v16 + 72);
      if ( !this )
        goto LABEL_64;
      v39 = *(struct System_String_o **)(v16 + 24);
      v41 = *(_DWORD *)(v16 + 32);
      v40 = *(struct System_Int32_array **)(v16 + 40);
    }
    BattleBuffData_BuffData__SetSubstituteFuncIndex((BattleBuffData_BuffData_o *)this, v38->fields.funcIndex, 0);
    v42 = *(struct BattleBuffData_BuffData_o **)(v16 + 72);
    funcTarget->fields.SubstituteBuff = v42;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&funcTarget->fields.SubstituteBuff,
      (int32_t)v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v49 = 4;
LABEL_61:
    funcTarget->fields.invalidType = v49;
    funcTarget->fields.invalidText = v39;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&funcTarget->fields.invalidText,
      (int32_t)v39,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    funcTarget->fields.invalidEffectList = v40;
    p_invalidText = (MissionNaviTransitionBoardItem_o *)&funcTarget->fields.invalidEffectList;
    v28 = (int)v40;
    funcTarget->fields.invalidIconId = v41;
    goto LABEL_62;
  }
  this = v6[2];
  if ( !this )
    goto LABEL_64;
  if ( !BattleLogicFunction__checkNoActionCondition((BattleLogicFunction_o *)this, targetId_k__BackingField, funcEnt, 0) )
    return ((bool (__fastcall *)(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, DataVals_o *, BattleLogicFunction_ProcListInArgs_o *, void *))(*v6)[19].klass)(
             v6,
             action,
             funcTarget,
             dataVals_k__BackingField,
             procArg_k__BackingField,
             (*v6)[19].monitor);
  return 0;
}


void BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(
        BattleLogicFunctionProcess_DependFunctionUnitCheck_o *this,
        BattleLogicFunction_o *logic,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  BattleLogicFunctionProcess_FunctionUnitCheck___ctor(
    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
    logic,
    procArg,
    (const MethodInfo *)dataVal);
  this->fields._dataVals_k__BackingField = dataVal;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._dataVals_k__BackingField,
    (int32_t)dataVal,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void BattleLogicFunctionProcess_FieldAddStateProcess___ctor(
        BattleLogicFunctionProcess_FieldAddStateProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_FieldAddStateShortProcess___ctor(
        BattleLogicFunctionProcess_FieldAddStateShortProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_FieldAddStateTargetCheck___ctor(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v10; // x23
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x24
  System_Func_object__object__o *v12; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v20; // x8
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v23; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isPassive; // w25
  bool IsApplyOther; // w24
  const MethodInfo *v28; // x1

  v10 = this;
  if ( (byte_5973C4A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_2213A60(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_5973C4A = 1;
  }
  if ( !v10->fields.grantType )
  {
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(
                                                                      v10,
                                                                      (const MethodInfo *)actBuffData);
    if ( !buffData )
      goto LABEL_23;
    if ( !this )
      goto LABEL_23;
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleFieldEnvironmentData__SubBuffFromType(
                                                                      (BattleFieldEnvironmentData_o *)this,
                                                                      buffData->fields.buffId,
                                                                      0,
                                                                      0);
    if ( !this )
      goto LABEL_23;
    funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
    if ( !funcUnit_k__BackingField )
      goto LABEL_23;
    if ( SLODWORD(funcUnit_k__BackingField->fields._procArg_k__BackingField) >= 1 )
    {
      v12 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
      System_Func_object__object____ctor(
        v12,
        (Il2CppObject *)v10,
        Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__,
        0);
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)funcUnit_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)v12,
                                                                   (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
      this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                        v13,
                                                                        (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
      if ( !actBuffData )
        goto LABEL_23;
      actBuffData->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&actBuffData->fields.removeBuffList,
        (int32_t)this,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
  }
  v20 = v10->fields._funcUnit_k__BackingField;
  if ( !v20 )
    goto LABEL_23;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)v20->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_23;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 112, 0);
  if ( !buffData )
    goto LABEL_23;
  buffData->fields.isRemoveFieldBuffActorDeath = (unsigned __int8)this & 1;
  BattleLogicFunctionProcess_FieldAddStateTargetCheck__SetProgressBuffTurnSide(v10, buffData, v21);
  BattleLogicFunctionProcess_FieldAddStateTargetCheck__SetFieldBuffApplyTarget(v10, actBuffData, buffData, v22);
  v23 = v10->fields._funcUnit_k__BackingField;
  if ( !v23 )
    goto LABEL_23;
  procArg_k__BackingField = v23->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_23;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_23;
  isPassive = externalArg->fields.isPassive;
  IsApplyOther = BattleBuffData_BuffData__get_IsApplyOther(buffData, 0);
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(
                                                                    v10,
                                                                    v28);
  if ( IsApplyOther && isChangeMaxHpFlag )
  {
    if ( this )
    {
      BattleFieldEnvironmentData__AddFieldChangeMaxHpBuff(
        (BattleFieldEnvironmentData_o *)this,
        actBuffData,
        buffData,
        !isPassive,
        fieldFlag,
        0);
      return;
    }
LABEL_23:
    sub_2213CDC(this, actBuffData);
  }
  if ( !this )
    goto LABEL_23;
  BattleFieldEnvironmentData__AddFieldBuff((BattleFieldEnvironmentData_o *)this, buffData, !isPassive, fieldFlag, 0);
}


void BattleLogicFunctionProcess_FieldAddStateTargetCheck__AfterAddBuffProc(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleActionData_o *mainAction,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *v5; // x20
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x8
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v8; // x21
  unsigned __int64 v9; // x23
  BattleServantData_o *v10; // x22
  BuffEntity_o *Entity; // x0
  const MethodInfo *v12; // x3

  if ( !buffData )
    goto LABEL_10;
  v5 = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this;
  if ( !BattleBuffData_BuffData__get_IsApplyOther(buffData, 0) )
    return;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleBuffData_BuffData__GetFieldApplyTargetServantArray(
                                                                    buffData,
                                                                    0);
  if ( !this )
LABEL_10:
    sub_2213CDC(this, mainAction);
  WrapTarget_k__BackingField = this->fields._WrapTarget_k__BackingField;
  v8 = this;
  if ( (int)WrapTarget_k__BackingField >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)WrapTarget_k__BackingField )
        sub_2213CE4(this);
      v10 = (BattleServantData_o *)*((_QWORD *)&v8->fields._targetId_k__BackingField + v9);
      Entity = BattleBuffData_BuffData__get_Entity(buffData, 0);
      BattleLogicFunctionProcess_CommonAddStateTargetCheck__AfterAddedBuffServantProcess(v5, v10, Entity, v12);
      LODWORD(WrapTarget_k__BackingField) = v8->fields._WrapTarget_k__BackingField;
      ++v9;
    }
    while ( (__int64)v9 < (int)WrapTarget_k__BackingField );
  }
}


bool BattleLogicFunctionProcess_FieldAddStateTargetCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  __int64 v6; // x20
  BattleFieldEnvironmentData_o *BuffData; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1
  bool v16; // w21
  System_Int32_array *GrantBuffTypeArray; // x22
  System_Func_int__bool__o *v18; // x23

  if ( (byte_5973C49 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__);
    sub_2213A60(&BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
    byte_5973C49 = 1;
  }
  v6 = sub_2213CCC(BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = buffEnt;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)buffEnt, v9, v10, v11, v12, v13, v14);
  if ( this->fields.grantType != 1 )
    return 1;
  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v15);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0)) == 0 )
  {
LABEL_11:
    sub_2213CDC(BuffData, v8);
  }
  v16 = 1;
  GrantBuffTypeArray = BattleBuffData__GetGrantBuffTypeArray((BattleBuffData_o *)BuffData, 1, 1, 0);
  v18 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
    0);
  if ( BasicHelper__Any_int__58784608(
         GrantBuffTypeArray,
         (System_Func_T__bool__o *)v18,
         (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248) )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return v16;
}


System_Int32_array *BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetAttachTargetArray(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        int64_t userCommandCodeId,
        System_Int32_array *cardIdsIndexArray,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v6; // x1

  if ( (byte_5973C48 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973C48 = 1;
  }
  result = (System_Int32_array *)sub_2213B20(int___TypeInfo, 1);
  if ( !result )
    sub_2213CDC(0, v6);
  if ( !LODWORD(result->max_length) )
    sub_2213CE4(result);
  result->m_Items[0] = 10001;
  return result;
}


int32_t BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetGrantType(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  if ( !baseVals )
    sub_2213CDC(this, 0);
  return DataVals__GetParam(baseVals, 113, 0, 0);
}


void BattleLogicFunctionProcess_FieldAddStateTargetCheck__Init(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0
  __int64 v7; // x1

  BattleLogicFunctionProcess_FunctionTargetCheck__Init(
    (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
    targetId,
    funcUnit,
    method);
  if ( !funcUnit || (dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField) == 0 )
    sub_2213CDC(dataVals_k__BackingField, v7);
  this->fields.grantType = DataVals__GetParam(dataVals_k__BackingField, 113, 0, 0);
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData_o *v2; // x19

  if ( (byte_5973C4C & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_FieldBuffData_TypeInfo);
    byte_5973C4C = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_2213CCC(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_5973C4D & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_5973C4D = 1;
  }
  v2 = (Il2CppObject *)sub_2213CCC(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
  System_Object___ctor(v2, 0);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
}


void BattleLogicFunctionProcess_FieldAddStateTargetCheck__SetFieldBuffApplyTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v6; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v8; // x8
  BuffEntity_o *Entity; // x0
  const MethodInfo *v10; // x1
  int32_t AppearanceId; // w0
  BattleFieldEnvironmentData_o *v12; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v13; // x8
  DataVals_o *dataVals_k__BackingField; // x22
  BattleBuffData_ApplyBuffSetAtInitData_o *v15; // x23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  BattleFieldEnvironmentData_o *v23; // x21
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x0
  __int64 v34; // [xsp+8h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_5973C4B & 1) == 0 )
  {
    sub_2213A60(&BattleBuffData_ApplyBuffSetAtInitData_TypeInfo);
    sub_2213A60(&BattleBuffData_BuffData___TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_5973C4B = 1;
  }
  funcUnit_k__BackingField = v6->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 262, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v8 = v6->fields._funcUnit_k__BackingField;
  if ( !v8 )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)v8->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)DataVals__GetParam((DataVals_o *)this, 262, 0, 0);
  if ( !buffData )
    goto LABEL_20;
  buffData->fields.FieldBuffApplyTarget = (int)this;
  Entity = BattleBuffData_BuffData__get_Entity(buffData, 0);
  if ( Entity )
  {
    AppearanceId = BuffEntity__getAppearanceId(Entity, 0);
    v34 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v34,
      AppearanceId,
      (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    if ( (_BYTE)v34 )
    {
      if ( SHIDWORD(v34) >= 1 )
        BattleBuffData_BuffData__onState(buffData, 256, 0);
    }
  }
  v12 = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(v6, v10);
  BattleBuffData_BuffData__SetOriginalApplyManager(buffData, v12, 0);
  v13 = v6->fields._funcUnit_k__BackingField;
  if ( !v13 )
    goto LABEL_20;
  dataVals_k__BackingField = v13->fields._dataVals_k__BackingField;
  v15 = (BattleBuffData_ApplyBuffSetAtInitData_o *)sub_2213CCC(BattleBuffData_ApplyBuffSetAtInitData_TypeInfo);
  BattleBuffData_ApplyBuffSetAtInitData___ctor_52846540(v15, dataVals_k__BackingField, buffData, 0);
  buffData->fields.applyBuffSetAtInitData = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&buffData->fields.applyBuffSetAtInitData,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(v6, v22);
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_2213B20(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !this )
    goto LABEL_20;
  v24 = this;
  v25 = sub_2213BB4(buffData, this->klass->_1.element_class);
  if ( !v25 )
  {
    v33 = sub_2213D00(0, v26);
    sub_2213BA0(v33, 0);
  }
  if ( !LODWORD(v24->fields._WrapTarget_k__BackingField) )
    sub_2213CE4(v25);
  *(_QWORD *)&v24->fields._targetId_k__BackingField = buffData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v24->fields._targetId_k__BackingField,
    (int32_t)buffData,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !actBuffData )
LABEL_20:
    sub_2213CDC(this, actBuffData);
  ((void (__fastcall *)(BattleActionData_BuffData_o *, BattleFieldEnvironmentData_o *, BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *, __int64, const MethodInfo *))actBuffData->klass->vtable._6_SetApplyTargetUpdateAfterShowBuff.methodPtr)(
    actBuffData,
    v23,
    v24,
    1,
    actBuffData->klass->vtable._6_SetApplyTargetUpdateAfterShowBuff.method);
}


void BattleLogicFunctionProcess_FieldAddStateTargetCheck__SetProgressBuffTurnSide(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x20

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_8;
  logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_8;
  data = logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_8;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleData__IsWarBoard(
                                                                    logic_k__BackingField->fields.data,
                                                                    0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  if ( !buffData )
LABEL_8:
    sub_2213CDC(this, buffData);
  buffData->fields.isProgressEndEnemyTurn = (data->fields.currentTurn == 1) ^ ((buffData->fields.turn & 1) == 0);
}


BattleBuffData_BuffData_o *BattleLogicFunctionProcess_FieldAddStateTargetCheck___AddBuff_b__8_0(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *BuffData; // x0
  __int64 v5; // x1

  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, (const MethodInfo *)buff);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0)) == 0 )
  {
    sub_2213CDC(BuffData, v5);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)BuffData, buff, 0);
}


BattleFieldEnvironmentData_o *BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField) == 0
    || (data = logic_k__BackingField->fields.data) == 0 )
  {
    sub_2213CDC(this, method);
  }
  return data->fields._FieldEnvData_k__BackingField;
}


void BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___ctor(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___CheckBuffCondtion_b__0(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_2213CDC(this, *(_QWORD *)&type);
  return buffEnt->fields.type == type;
}


void BattleLogicFunctionProcess_FieldCommonAddStateProcess___ctor(
        BattleLogicFunctionProcess_FieldCommonAddStateProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_FunctionTargetCheck_o *BattleLogicFunctionProcess_FieldCommonAddStateProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_FieldCommonAddStateProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FieldCommonAddStateProcess_o *v5; // x20
  struct DataVals_o *dataVals_k__BackingField; // x8
  const MethodInfo *v7; // x3
  int logic_k__BackingField_high; // w8
  _QWORD *v9; // x8
  __int64 v10; // x0
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v11; // x19

  v5 = this;
  if ( (byte_5973C68 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_FieldAddStateTargetCheck_TypeInfo);
    sub_2213A60(&BattleLogicFunctionProcess_ToFieldOverwriteBattleClassCheck_TypeInfo);
    this = (BattleLogicFunctionProcess_FieldCommonAddStateProcess_o *)sub_2213A60(&BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo);
    byte_5973C68 = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0
    || (this = (BattleLogicFunctionProcess_FieldCommonAddStateProcess_o *)v5->fields._logic_k__BackingField) == 0
    || (this = (BattleLogicFunctionProcess_FieldCommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                            (BattleLogicFunction_o *)this,
                                                                            dataVals_k__BackingField->fields.funcEnt,
                                                                            0)) == 0 )
  {
    sub_2213CDC(this, *(_QWORD *)&targetId);
  }
  logic_k__BackingField_high = HIDWORD(this->fields._logic_k__BackingField);
  if ( logic_k__BackingField_high == 107 )
  {
    v10 = sub_2213CCC(BattleLogicFunctionProcess_ToFieldOverwriteBattleClassCheck_TypeInfo);
    v11 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v10;
    *(_DWORD *)(v10 + 108) = -1;
  }
  else
  {
    if ( logic_k__BackingField_high == 176 )
    {
      v9 = &BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo;
    }
    else
    {
      if ( (unsigned int)(logic_k__BackingField_high - 10001) <= 2 )
        return BattleLogicFunctionProcess_CommonAddStateProcess__MakeFunctionTargetCheck(
                 (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v5,
                 targetId,
                 funcUnitCheck,
                 v7);
      v9 = &BattleLogicFunctionProcess_FieldAddStateTargetCheck_TypeInfo;
    }
    v10 = sub_2213CCC(*v9);
    v11 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v10;
  }
  System_Object___ctor((Il2CppObject *)v10, 0);
  return v11;
}


void BattleLogicFunctionProcess_FunctionTargetCheck___ctor(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__AddBuff(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  ;
}


void BattleLogicFunctionProcess_FunctionTargetCheck__AfterAddBuffProc(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleActionData_o *mainAction,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  ;
}


void BattleLogicFunctionProcess_FunctionTargetCheck__ApplyPrevSaveBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  ;
}


bool BattleLogicFunctionProcess_FunctionTargetCheck__CheckConvertBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BuffConvertEntity_o *buffConvertEntity,
        const MethodInfo *method)
{
  return 0;
}


int32_t BattleLogicFunctionProcess_FunctionTargetCheck__GetCommonBaseValue(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v3; // x19
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (v3 = this,
        (this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0)
    || (this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)DataVals__GetValue((DataVals_o *)this, 0),
        (WrapTarget_k__BackingField = v3->fields._WrapTarget_k__BackingField) == 0) )
  {
    sub_2213CDC(this, method);
  }
  return (unsigned int)((_QWORD *(__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *__return_ptr, struct BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._26_GetAddBaseValue.methodPtr)(
                         WrapTarget_k__BackingField,
                         WrapTarget_k__BackingField,
                         WrapTarget_k__BackingField->klass->vtable._26_GetAddBaseValue.method)
       + (_DWORD)this;
}


BuffConvertEntity_o *BattleLogicFunctionProcess_FunctionTargetCheck__GetConvertBuffEntity(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        int32_t actorId,
        const MethodInfo *method)
{
  return 0;
}


BuffEntity_o *BattleLogicFunctionProcess_FunctionTargetCheck__GetFixBuffEntity(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x9

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0
    || (this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcUnit_k__BackingField->fields._logic_k__BackingField) == 0 )
  {
    sub_2213CDC(this, method);
  }
  return BattleLogicFunction__GetBuffEntity((BattleLogicFunction_o *)this, dataVals_k__BackingField->fields.funcEnt, 0);
}


System_String_o *BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields._funcUnit_k__BackingField )
    sub_2213CDC(this, method);
  return BattleLogicFunctionProcess_FunctionUnitCheck__GetFuncNoEffectText(
           this->fields._funcUnit_k__BackingField,
           this->fields.invalidText,
           v2);
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FunctionTargetCheck__GetFunctionDisplayData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x9
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x10
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x10
  BattleLogicFunction_o *logic_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0
    || (procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField) == 0
    || (externalArg = procArg_k__BackingField->fields.externalArg) == 0
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField) == 0 )
  {
    sub_2213CDC(this, method);
  }
  return BattleLogicFunction__getFunctionObject(
           logic_k__BackingField,
           dataVals_k__BackingField->fields.funcEnt,
           this->fields._targetId_k__BackingField,
           dataVals_k__BackingField->fields.funcIndex,
           externalArg->fields.isCommandSideEffect,
           0,
           0);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__Init(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleLogicFunctionProcess_FunctionTargetCheck_c *klass; // x8
  struct BattleLogicFunctionProcess_WrapTargetData_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x0

  this->fields._targetId_k__BackingField = targetId;
  this->fields._funcUnit_k__BackingField = funcUnit;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)funcUnit,
    (System_String_o *)funcUnit,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  klass = this->klass;
  this->fields._result_k__BackingField = 0;
  v10 = (struct BattleLogicFunctionProcess_WrapTargetData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))klass->vtable._11_MakeWrapTarget.methodPtr)(
                                                                this,
                                                                klass->vtable._11_MakeWrapTarget.method);
  this->fields._WrapTarget_k__BackingField = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WrapTarget_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  WrapTarget_k__BackingField = this->fields._WrapTarget_k__BackingField;
  if ( !WrapTarget_k__BackingField )
    sub_2213CDC(0, v17);
  ((void (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._4_Init.methodPtr)(
    WrapTarget_k__BackingField,
    this,
    WrapTarget_k__BackingField->klass->vtable._4_Init.method);
}


bool BattleLogicFunctionProcess_FunctionTargetCheck__IsExecutable(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v6; // x20
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg_k__BackingField; // x0
  _BOOL4 result_k__BackingField; // w21

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_10;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_10;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_10;
  v6 = this;
  FuncSideEffectArg_k__BackingField = externalArg->fields._FuncSideEffectArg_k__BackingField;
  if ( FuncSideEffectArg_k__BackingField )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(FuncSideEffectArg_k__BackingField, v6, method);
  result_k__BackingField = v6->fields._result_k__BackingField;
  if ( !v6->fields._result_k__BackingField )
  {
    this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(
                                                                 v6,
                                                                 mainAction,
                                                                 method);
    if ( mainAction )
    {
      BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0);
      return result_k__BackingField;
    }
LABEL_10:
    sub_2213CDC(this, mainAction);
  }
  return result_k__BackingField;
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v2; // x19

  if ( (byte_5973C36 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_BuffData_TypeInfo);
    byte_5973C36 = 1;
  }
  v2 = (BattleActionData_BuffData_o *)sub_2213CCC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor(v2, 0);
  return v2;
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FunctionTargetCheck__MakeAddActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        FunctionEntity_o *funcEnt,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcUnit_k__BackingField->fields._logic_k__BackingField) == 0 )
  {
    sub_2213CDC(this, actBuffData);
  }
  return BattleLogicFunction__MakeAddActionBuffData(
           (BattleLogicFunction_o *)this,
           actBuffData,
           buffData,
           funcEnt,
           isCommandSideEffect,
           0,
           0);
}


BattleLogicFunctionProcess_WrapTargetData_o *BattleLogicFunctionProcess_FunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_5973C37 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
    byte_5973C37 = 1;
  }
  v2 = (Il2CppObject *)sub_2213CCC(BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
  System_Object___ctor(v2, 0);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
}


void BattleLogicFunctionProcess_FunctionTargetCheck__SetInvalidInfoBySubstituteBuff(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isResist,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v5; // x20
  System_String_o *ResistPopupText; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  BattleBuffData_SubstituteData_o *v13; // x8
  System_Int32_array *EffectList; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *PopupText; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  BattleBuffData_SubstituteData_o *substituteData; // x8
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  v5 = this;
  if ( !isResist )
  {
    this->fields.IsSubstituted = 1;
    this->fields.invalidType = 4;
    if ( buff )
    {
      this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)buff->fields.substituteData;
      if ( this )
      {
        PopupText = BattleBuffData_SubstituteData__get_PopupText((BattleBuffData_SubstituteData_o *)this, 0);
        v5->fields.invalidText = PopupText;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v5->fields.invalidText,
          (int32_t)PopupText,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)buff->fields.substituteData;
        if ( this )
        {
          this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)BattleBuffData_SubstituteData__get_PopupIconId(
                                                                       (BattleBuffData_SubstituteData_o *)this,
                                                                       0);
          substituteData = buff->fields.substituteData;
          v5->fields.invalidIconId = (int)this;
          if ( substituteData )
          {
            EffectList = BattleBuffData_SubstituteData__get_EffectList(substituteData, 0);
            goto LABEL_12;
          }
        }
      }
    }
LABEL_13:
    sub_2213CDC(this, buff);
  }
  this->fields.invalidType = 4;
  if ( !buff )
    goto LABEL_13;
  this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)buff->fields.substituteData;
  if ( !this )
    goto LABEL_13;
  ResistPopupText = BattleBuffData_SubstituteData__get_ResistPopupText((BattleBuffData_SubstituteData_o *)this, 0);
  v5->fields.invalidText = ResistPopupText;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.invalidText,
    (int32_t)ResistPopupText,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)buff->fields.substituteData;
  if ( !this )
    goto LABEL_13;
  this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)BattleBuffData_SubstituteData__get_ResistPopupIconId(
                                                               (BattleBuffData_SubstituteData_o *)this,
                                                               0);
  v13 = buff->fields.substituteData;
  v5->fields.invalidIconId = (int)this;
  if ( !v13 )
    goto LABEL_13;
  EffectList = BattleBuffData_SubstituteData__get_ResistEffectList(v13, 0);
LABEL_12:
  v5->fields.invalidEffectList = EffectList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.invalidEffectList,
    (int32_t)EffectList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v5->fields.SubstituteBuff = buff;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.SubstituteBuff,
    (int32_t)buff,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  this->fields.invalidType = 1;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0 )
  {
    sub_2213CDC(this, method);
  }
  DataVals__SetInvalidCauseByAnyBuff(dataVals_k__BackingField, this->fields._targetId_k__BackingField, 0);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  Il2CppType *v5; // x21
  System_Type_o *TypeFromHandle; // x0
  __int64 v7; // x1
  System_Type_o *v8; // x21
  __int64 v9; // x1
  int32_t DisplayLastFuncInvalidType; // w20
  __int64 v11; // x2
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v12; // x0
  DataVals_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_5973C35 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_FuncInvalidType_var);
    sub_2213A60(&BattleLogicFunctionProcess_FuncInvalidType_TypeInfo);
    byte_5973C35 = 1;
  }
  v5 = BattleLogicFunctionProcess_FuncInvalidType_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, baseVals);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v5, 0);
  if ( !baseVals )
    goto LABEL_11;
  v8 = TypeFromHandle;
  DisplayLastFuncInvalidType = DataVals__GetDisplayLastFuncInvalidType(baseVals, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v9);
  TypeFromHandle = (System_Type_o *)System_Enum__ToObject_77364592(v8, DisplayLastFuncInvalidType, 0);
  if ( !TypeFromHandle )
LABEL_11:
    sub_2213CDC(TypeFromHandle, v7);
  if ( TypeFromHandle->klass->_1.element_class == BattleLogicFunctionProcess_FuncInvalidType_TypeInfo->_1.element_class )
  {
    this->fields.invalidType = *(_DWORD *)j_il2cpp_object_unbox_0(
                                            TypeFromHandle,
                                            BattleLogicFunctionProcess_FuncInvalidType_TypeInfo,
                                            v11);
  }
  else
  {
    sub_221405C(TypeFromHandle, BattleLogicFunctionProcess_FuncInvalidType_TypeInfo, v11);
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid_54141280(v12, v13, v14, v15);
  }
}


void BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid_54141280(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        DataVals_o *baseVals,
        int32_t defaultType,
        const MethodInfo *method)
{
  if ( !baseVals )
    sub_2213CDC(this, 0);
  this->fields.invalidType = DataVals__GetParam(baseVals, 56, defaultType, 0);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *funcProc,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v4; // x19
  const MethodInfo *v5; // x4
  _BOOL4 isFixResult; // w8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  bool v8; // w2
  struct DataVals_o *dataVals_k__BackingField; // x9

  if ( !funcProc )
    goto LABEL_11;
  v4 = this;
  this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkExecutable(
                                                               funcProc,
                                                               action,
                                                               this,
                                                               method);
  isFixResult = v4->fields.isFixResult;
  v4->fields._result_k__BackingField = (unsigned __int8)this & 1;
  if ( isFixResult )
  {
    funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
    if ( funcUnit_k__BackingField )
    {
      v8 = ((unsigned __int8)this & 1) != 0 || v4->fields.IsSubstituted;
      dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
      if ( dataVals_k__BackingField )
      {
        this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcUnit_k__BackingField->fields._procArg_k__BackingField;
        if ( this )
        {
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            (BattleLogicFunction_ProcListInArgs_o *)this,
            v4->fields._targetId_k__BackingField,
            v8,
            dataVals_k__BackingField->fields.funcIndex,
            v5);
          return;
        }
      }
    }
LABEL_11:
    sub_2213CDC(this, funcProc);
  }
}


BattleActionData_o *BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    sub_2213CDC(0, mainAction);
  return BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(funcUnit_k__BackingField, this, mainAction, v3);
}


DataVals_o *BattleLogicFunctionProcess_FunctionTargetCheck__get_DataVals(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    sub_2213CDC(this, method);
  return funcUnit_k__BackingField->fields._dataVals_k__BackingField;
}


bool BattleLogicFunctionProcess_FunctionTargetCheck__get_IsTargetField(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x9
  BattleLogicFunctionProcess_WrapTargetData_c *klass; // x9
  __int64 naturalAligment; // x10
  bool result; // w0

  if ( (byte_5973C34 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_5973C34 = 1;
  }
  WrapTarget_k__BackingField = this->fields._WrapTarget_k__BackingField;
  result = WrapTarget_k__BackingField
        && (klass = WrapTarget_k__BackingField->klass,
            naturalAligment = BattleLogicFunctionProcess_WrapTargetField_TypeInfo->_2.naturalAligment,
            klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && klass->_2.typeHierarchy[naturalAligment - 1] == (Il2CppClass *)BattleLogicFunctionProcess_WrapTargetField_TypeInfo;
  return result;
}


BattleLogicFunction_o *BattleLogicFunctionProcess_FunctionTargetCheck__get_LogicFunc(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    sub_2213CDC(this, method);
  return funcUnit_k__BackingField->fields._logic_k__BackingField;
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FunctionTargetCheck__get_ParentActBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    sub_2213CDC(0, method);
  return BattleLogicFunctionProcess_FunctionUnitCheck__get_ParentActBuffData(funcUnit_k__BackingField, method);
}


BattleLogicFunctionProcess_WrapTargetData_o *BattleLogicFunctionProcess_FunctionTargetCheck__get_WrapTarget(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._WrapTarget_k__BackingField;
}


BattleLogicFunctionProcess_FunctionUnitCheck_o *BattleLogicFunctionProcess_FunctionTargetCheck__get_funcUnit(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._funcUnit_k__BackingField;
}


bool BattleLogicFunctionProcess_FunctionTargetCheck__get_result(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._result_k__BackingField;
}


int32_t BattleLogicFunctionProcess_FunctionTargetCheck__get_targetId(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._targetId_k__BackingField;
}


void BattleLogicFunctionProcess_FunctionTargetCheck__reflectLinkedToSelfResult(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *linkedToSelf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !linkedToSelf )
    sub_2213CDC(this, 0);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkFuncTargetResult(
         linkedToSelf,
         this->fields._targetId_k__BackingField,
         0,
         v3) )
  {
    this->fields._result_k__BackingField = 0;
  }
}


void BattleLogicFunctionProcess_FunctionTargetCheck__set_WrapTarget(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_WrapTargetData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._WrapTarget_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WrapTarget_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__set_funcUnit(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._funcUnit_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__set_result(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._result_k__BackingField = value;
}


void BattleLogicFunctionProcess_FunctionTargetCheck__set_targetId(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._targetId_k__BackingField = value;
}


void BattleLogicFunctionProcess_FunctionUnitCheck___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_o *logic,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppClass *v33; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_5973C54 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
    byte_5973C54 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToOtherList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkedToOtherList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToSelfList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkedToSelfList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._logic_k__BackingField = logic;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)logic, v21, v22, v23, v24, v25, v26);
  this->fields._procArg_k__BackingField = procArg;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._procArg_k__BackingField,
    (int32_t)procArg,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo;
  this->fields._result_k__BackingField = 0;
  v34 = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)sub_2213B20(v33, 0);
  this->fields._funcTargetArray_k__BackingField = v34;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._funcTargetArray_k__BackingField,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


System_String_o *BattleLogicFunctionProcess_FunctionUnitCheck__GetFuncNoEffectText(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        System_String_o *defText,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField
    || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)dataVals_k__BackingField->fields.funcEnt) == 0 )
  {
    sub_2213CDC(this, defText);
  }
  return FunctionEntity__GetNoEffectText((FunctionEntity_o *)this, defText, 0);
}


int32_t BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField || (data = logic_k__BackingField->fields.data) == 0 )
    sub_2213CDC(this, method);
  if ( data->fields.battleGenderType == 2 )
    return 2;
  else
    return 1;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.linkedToOtherList, 0)
      || !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.linkedToSelfList, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsAvoidExecuteSelfFunc(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleServantData_o *actionSvtData,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *v5; // x0
  const MethodInfo *v6; // x1
  System_Int32_array *v8; // x1

  if ( !actionSvtData )
    return 0;
  v5 = (System_Collections_ICollection_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(
                                             this,
                                             (const MethodInfo *)actionSvtData);
  if ( BasicHelper__IsNullOrEmpty(v5, 0) )
    return 0;
  v8 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(this, v6);
  return BattleServantData__CheckAvoidFuncExecSelf(actionSvtData, v8, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsFriendShipCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // kr00_16
  int32_t v11; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_5973C5D & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5973C5D = 1;
  }
  if ( !baseVals )
    sub_2213CDC(this, baseVals);
  if ( !DataVals__isParam(baseVals, 183, 0) )
    return 1;
  if ( targetSvtData )
  {
    v8 = *(_QWORD *)&targetSvtData->fields.friendship.fields.currentCryptoKey;
    v7 = *(_QWORD *)&targetSvtData->fields.friendship.fields.fakeValue;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    v6 = *(_QWORD *)&v10.fields.fakeValue;
    v8 = *(_QWORD *)&v10.fields.currentCryptoKey;
    v7 = *(_QWORD *)&v10.fields.fakeValue;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v12, 0);
  return DataVals__IsMatchFriendShipCondition(baseVals, v11, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v6; // x19
  DataVals_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_ICollection_o *TargetTypeIndexArray; // x20
  System_Func_int__bool__o *v23; // x21

  if ( (byte_5973C5B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_All_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass71_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__);
    sub_2213A60(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass71_0_TypeInfo);
    byte_5973C5B = 1;
  }
  v6 = sub_2213CCC(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = baseVals,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)baseVals, v9, v10, v11, v12, v13, v14),
        *(_QWORD *)(v6 + 24) = targetSvtData,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)targetSvtData, v15, v16, v17, v18, v19, v20),
        (v7 = *(DataVals_o **)(v6 + 16)) == 0) )
  {
    sub_2213CDC(v7, v8);
  }
  TargetTypeIndexArray = (System_Collections_ICollection_o *)DataVals__GetTargetTypeIndexArray(v7, 181, 0);
  if ( BasicHelper__IsNullOrEmpty(TargetTypeIndexArray, 0) )
    return 1;
  if ( !*(_QWORD *)(v6 + 24) )
    return 0;
  v23 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v23,
    (Il2CppObject *)v6,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass71_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__,
    0);
  return System_Linq_Enumerable__All_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)TargetTypeIndexArray,
           (System_Func_TSource__bool__o *)v23,
           (const MethodInfo_38646E0 *)Method_System_Linq_Enumerable_All_int___);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVal,
        int32_t actorId,
        const MethodInfo *method)
{
  DataVals_o *v5; // x19
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v6; // x20
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  bool isEnemyID; // w0
  struct BattleLogicFunction_o *v9; // x8
  bool existParamNum; // [xsp+Ch] [xbp-24h] BYREF

  existParamNum = 0;
  if ( !baseVal )
    goto LABEL_12;
  v5 = baseVal;
  v6 = this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__CheckAssertStrParam(
                                                             baseVal,
                                                             137,
                                                             &existParamNum,
                                                             0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    LOBYTE(this) = !existParamNum;
    return (unsigned __int8)this & 1;
  }
  logic_k__BackingField = v6->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_12;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_12;
  isEnemyID = BattleData__isEnemyID((BattleData_o *)this, actorId, 0);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetTriggeredFieldCountTargetFlag(v5, isEnemyID, 0);
  if ( (_DWORD)this )
  {
    v9 = v6->fields._logic_k__BackingField;
    if ( v9 )
    {
      baseVal = (DataVals_o *)(unsigned int)this;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v9->fields.data;
      if ( this )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleData__GetFieldAliveLogicServantArray(
                                                                   (BattleData_o *)this,
                                                                   (int32_t)baseVal,
                                                                   0,
                                                                   0);
        if ( this )
        {
          LOBYTE(this) = DataVals__IsSatisfyAboveBelowCondition(
                           v5,
                           137,
                           (int32_t)this->fields._procArg_k__BackingField,
                           0);
          return (unsigned __int8)this & 1;
        }
      }
    }
LABEL_12:
    sub_2213CDC(this, baseVal);
  }
  return (unsigned __int8)this & 1;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyOverChargeStageRangeCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  int32_t NpChargeStage; // w0
  bool existParamNum; // [xsp+Ch] [xbp-14h] BYREF

  existParamNum = 0;
  if ( !baseVals )
    sub_2213CDC(this, 0);
  if ( DataVals__CheckAssertStrParam(baseVals, 180, &existParamNum, 0) )
  {
    if ( targetSvtData )
    {
      NpChargeStage = BattleServantData__getNpChargeStage(targetSvtData, 0);
      return DataVals__IsSatisfyAboveBelowCond(baseVals, 180, NpChargeStage - 1, 0x7FFFFFFF, 0);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 1;
  }
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfySupportSvtExec(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *actorSvtData,
        const MethodInfo *method)
{
  int32_t v5; // w20
  char v6; // w8
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  param = 0;
  if ( !actorSvtData )
    goto LABEL_5;
  if ( !baseVals )
    sub_2213CDC(this, 0);
  if ( DataVals__TryGetParam(baseVals, 240, &param, 0) )
  {
    v5 = param;
    v6 = (v5 < 1) ^ BattleServantData__get_IsSupport(actorSvtData, 0);
  }
  else
  {
LABEL_5:
    v6 = 1;
  }
  return v6 & 1;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetBattlePointRateCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *TargetTypeIndexArray; // x21
  BattlePointData_o *BattlePointData; // x0
  void *monitor; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w22
  BattlePointData_o *v11; // x23
  int32_t currentMaxValue[2]; // [xsp+8h] [xbp-48h] BYREF

  *(_QWORD *)currentMaxValue = 0;
  if ( !baseVals )
    goto LABEL_18;
  TargetTypeIndexArray = (System_Collections_ICollection_o *)DataVals__GetTargetTypeIndexArray(baseVals, 279, 0);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BasicHelper__IsNullOrEmpty(TargetTypeIndexArray, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_3:
    LOBYTE(BattlePointData) = 1;
    return (char)BattlePointData;
  }
  if ( !targetSvtData )
  {
LABEL_15:
    LOBYTE(BattlePointData) = 0;
    return (char)BattlePointData;
  }
  if ( !TargetTypeIndexArray )
LABEL_18:
    sub_2213CDC(this, baseVals);
  monitor = TargetTypeIndexArray[1].monitor;
  if ( (int)monitor < 1 )
    goto LABEL_3;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)monitor )
      sub_2213CE4(this);
    v10 = *((_DWORD *)&TargetTypeIndexArray[2].klass + v9);
    BattlePointData = BattleServantData__GetBattlePointData(targetSvtData, v10, 0);
    if ( !BattlePointData )
      return (char)BattlePointData;
    v11 = BattlePointData;
    if ( !BattlePointData__IsAsPercentage(BattlePointData, 0) )
      goto LABEL_15;
    BattlePointData__GetCurrentAndMaxValue(v11, &currentMaxValue[1], currentMaxValue, 0);
    if ( currentMaxValue[0] < 1 )
      goto LABEL_15;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsSatisfyAboveBelowCond(
                                                               baseVals,
                                                               279,
                                                               1000 * currentMaxValue[1] / currentMaxValue[0],
                                                               v10,
                                                               0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_15;
    LODWORD(monitor) = TargetTypeIndexArray[1].monitor;
    if ( (__int64)++v9 >= (int)monitor )
      goto LABEL_3;
  }
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  int32_t v6; // w0
  bool IsSatisfyAboveBelowCondition; // w22
  int32_t MaxHp; // w0
  int32_t v9; // w21
  int v10; // w0
  bool v11; // w8
  bool existParamNum[4]; // [xsp+Ch] [xbp-24h] BYREF

  existParamNum[0] = 0;
  if ( !baseVals )
    goto LABEL_13;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__CheckAssertStrParam(
                                                             baseVals,
                                                             141,
                                                             existParamNum,
                                                             0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !targetSvtData )
      goto LABEL_13;
    v6 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
           targetSvtData,
           targetSvtData->klass->vtable._13_get_resultHp.method);
    IsSatisfyAboveBelowCondition = DataVals__IsSatisfyAboveBelowCondition(baseVals, 141, v6, 0);
  }
  else
  {
    IsSatisfyAboveBelowCondition = 1;
  }
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__CheckAssertStrParam(
                                                             baseVals,
                                                             142,
                                                             existParamNum,
                                                             0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = 1;
    goto LABEL_11;
  }
  if ( !targetSvtData )
LABEL_13:
    sub_2213CDC(this, baseVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
  if ( MaxHp )
  {
    v9 = MaxHp;
    v10 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
            targetSvtData,
            targetSvtData->klass->vtable._13_get_resultHp.method);
    v11 = DataVals__IsSatisfyAboveBelowCondition(baseVals, 142, 1000 * v10 / v9, 0);
LABEL_11:
    LOBYTE(MaxHp) = v11 && IsSatisfyAboveBelowCondition;
  }
  return MaxHp;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsStartingPositionCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v6; // x21
  System_Collections_ICollection_o *ParamArray; // x20
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  int32_t StartingPosition; // w1

  v6 = this;
  if ( (byte_5973C5C & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5973C5C = 1;
  }
  if ( !baseVals )
    goto LABEL_11;
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(baseVals, 182, 0);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BasicHelper__IsNullOrEmpty(ParamArray, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  if ( targetSvtData )
  {
    logic_k__BackingField = v6->fields._logic_k__BackingField;
    if ( logic_k__BackingField )
    {
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)logic_k__BackingField->fields.data;
      if ( this )
      {
        StartingPosition = BattleData__GetStartingPosition((BattleData_o *)this, targetSvtData->fields.uniqueId, 0);
        return System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)ParamArray,
                 StartingPosition,
                 (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
LABEL_11:
    sub_2213CDC(this, baseVals);
  }
  return 0;
}


AddBgmArgument_o *BattleLogicFunctionProcess_FunctionUnitCheck__MakeAddBgmArgument(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x19
  AddBgmArgument_o *v4; // x20

  if ( (byte_5973C53 & 1) == 0 )
  {
    sub_2213A60(&AddBgmArgument_TypeInfo);
    byte_5973C53 = 1;
  }
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  v4 = (AddBgmArgument_o *)sub_2213CCC(AddBgmArgument_TypeInfo);
  AddBgmArgument___ctor(v4, dataVals_k__BackingField, 0);
  return v4;
}


void BattleLogicFunctionProcess_FunctionUnitCheck__SetAfterUpdateField(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  procArg_k__BackingField = this->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    sub_2213CDC(this, method);
  procArg_k__BackingField->fields.updateField = 1;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  bool v5; // w0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( !this->fields.isChecked )
  {
    this->fields.isChecked = 1;
    v5 = BattleLogicFunctionProcess_FunctionUnitCheck__checkSelfCondtion(this, action, method);
    this->fields._result_k__BackingField = v5;
    if ( v5 )
    {
      this->fields._result_k__BackingField = BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
                                               this,
                                               action,
                                               v6);
      BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToOtherResult(this, v7);
    }
  }
  return this->fields._result_k__BackingField;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__checkFuncTargetResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        int32_t targetId,
        bool result,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Object_array *funcTargetArray_k__BackingField; // x19
  System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__c *v11; // x0
  System_Func_object__bool__o *v12; // x20

  if ( (byte_5973C57 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_2213A60(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass62_0__checkFuncTargetResult_b__0__);
    sub_2213A60(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass62_0_TypeInfo);
    byte_5973C57 = 1;
  }
  v7 = sub_2213CCC(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_DWORD *)(v7 + 16) = targetId;
  funcTargetArray_k__BackingField = (System_Object_array *)this->fields._funcTargetArray_k__BackingField;
  v11 = System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo;
  *(_BYTE *)(v7 + 20) = result;
  v12 = (System_Func_object__bool__o *)sub_2213CCC(v11);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass62_0__checkFuncTargetResult_b__0__,
    0);
  return BasicHelper__Any_object__58785420(
           funcTargetArray_k__BackingField,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *linkedToSelfList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  bool v8; // w21
  Il2CppObject *current; // x22
  DataVals_o *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5973C5A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_5973C5A = 1;
  }
  linkedToSelfList = (System_Collections_Generic_List_object__o *)this->fields.linkedToSelfList;
  memset(&v14, 0, sizeof(v14));
  if ( !linkedToSelfList )
    sub_2213CDC(0, action);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    linkedToSelfList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    v8 = v6;
    if ( !v6 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_2213CDC(v6, v7);
    v10 = *(DataVals_o **)((char *)&v14.fields._current->klass + (unsigned __int64)&qword_20);
    if ( !v10 )
      sub_2213CDC(0, v7);
    if ( !DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed(v10, 0) )
    {
      if ( !BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
              (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
              action,
              v11) )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        this,
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
        v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
  return !v8;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__checkSelfCondtion(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x19
  DataVals_o *dataVals_k__BackingField; // x22
  FunctionEntity_o *funcEnt; // x21
  bool v7; // w24
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleServantData_o *ServantData; // x23
  struct BattleLogicFunction_o *v10; // x8
  struct BattleData_o *data; // x24
  bool endbattleFlg; // w25
  char v13; // w8
  struct BattleLogicFunction_o *v14; // x9
  struct BattleData_o *v15; // x24
  bool loseBattleFlg; // w25
  struct BattleLogicFunction_o *v17; // x8
  struct BattleData_o *v18; // x24
  bool winBattleNotRelatedSurvivalStatus; // w25
  bool IsWinBattleNotRelatedSurvivalStatus; // w0
  const MethodInfo *v21; // x2
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v22; // x24
  struct BattleLogicFunction_o *v23; // x8
  __int64 v24; // x1
  System_Int32_array *QuestIndividualities; // x25
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleLogicFunction_o *v28; // x8
  struct BattleData_o *v29; // x8
  System_Collections_Generic_HashSet_int__o *FuncEventExceptedHash_k__BackingField; // x0
  const MethodInfo *v31; // x3
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x3
  _BOOL8 v34; // x0
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x3
  _BOOL8 v39; // x0
  const MethodInfo *v40; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v41; // x8
  int32_t Param; // w24
  const MethodInfo *v43; // x1
  bool v44; // zf
  struct BattleLogicFunction_o *v45; // x8
  __int64 v46; // x1
  struct BattleSkillInfoData_o *skillInfo; // x0
  int32_t v48; // w0
  struct BattleSkillInfoData_o *v49; // x8
  int32_t v50; // w23
  int32_t skilllv; // w24
  Target_BattleTargetArgs_o *args; // x23
  struct BattleLogicFunction_o *v53; // x8
  int32_t v54; // w26
  int32_t PTTargetId; // w0
  int32_t targetType; // w27
  int32_t taskActorType; // w28
  int32_t v58; // w24
  bool checkRevengeId; // w29
  System_Int32_array *ValsList; // x25
  bool IsIncludeIgnoreIndividuality; // w0
  struct BattleLogicFunction_ProcListInArgs_o *v62; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v63; // x2
  struct BattleLogicFunction_ProcListInArgs_o *v64; // x8
  struct BattleLogicFunction_FunctionArgument_o *v65; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v66; // x21
  struct BattleLogicFunction_o *v68; // x8
  struct BattleData_o *v69; // x8
  const MethodInfo *v70; // x2
  int v71; // w8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v72; // x21
  __int64 v73; // x23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v74; // x22
  const MethodInfo *v75; // x3
  int32_t v76; // w25
  int32_t v77; // w22
  struct BattleLogicFunction_o *v78; // x8
  int32_t targetId; // w26
  int32_t v80; // w27
  BattleData_o *v81; // x28
  __int64 v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  int32_t actorId; // [xsp+1Ch] [xbp-74h]
  BattleData_o *bdata; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_5973C59 & 1) == 0 )
  {
    sub_2213A60(&Target_BattleTargetArgs_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_2213A60(&Individuality_TypeInfo);
    byte_5973C59 = 1;
  }
  dataVals_k__BackingField = v4->fields._dataVals_k__BackingField;
  entity = 0;
  if ( !dataVals_k__BackingField )
    goto LABEL_93;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_93;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FuncList__Check(0, funcEnt->fields.funcType, 0);
  v7 = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
    return v7;
  logic_k__BackingField = v4->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_93;
  if ( !action )
    goto LABEL_93;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_93;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FuncList__Check(26, funcEnt->fields.funcType, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    action->fields.isSuccessTargetSelection = 1;
  v10 = v4->fields._logic_k__BackingField;
  if ( !v10 )
    goto LABEL_93;
  data = v10->fields.data;
  if ( !data )
    goto LABEL_93;
  endbattleFlg = data->fields.endbattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsEndBattle(dataVals_k__BackingField, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0),
        ((unsigned __int8)this & 1) != 0) )
  {
    v13 = 1;
  }
  else
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                               dataVals_k__BackingField,
                                                               0);
    v13 = (unsigned __int8)this & 1;
  }
  v14 = v4->fields._logic_k__BackingField;
  data->fields.endbattleFlg = v13 | endbattleFlg;
  if ( !v14 )
    goto LABEL_93;
  v15 = v14->fields.data;
  if ( !v15 )
    goto LABEL_93;
  loseBattleFlg = v15->fields.loseBattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0);
  v17 = v4->fields._logic_k__BackingField;
  v15->fields.loseBattleFlg = loseBattleFlg | (unsigned __int8)this & 1;
  if ( !v17 )
    goto LABEL_93;
  v18 = v17->fields.data;
  if ( !v18 )
    goto LABEL_93;
  winBattleNotRelatedSurvivalStatus = v18->fields.winBattleNotRelatedSurvivalStatus;
  IsWinBattleNotRelatedSurvivalStatus = DataVals__IsWinBattleNotRelatedSurvivalStatus(dataVals_k__BackingField, 0);
  v4->fields.questFuncFlg = 1;
  v18->fields.winBattleNotRelatedSurvivalStatus = winBattleNotRelatedSurvivalStatus
                                               || IsWinBattleNotRelatedSurvivalStatus;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FunctionEntity__getQuestTargetValues(funcEnt, 0);
  if ( !this )
    goto LABEL_93;
  v22 = this;
  if ( this->fields._procArg_k__BackingField )
  {
    v23 = v4->fields._logic_k__BackingField;
    if ( !v23 )
      goto LABEL_93;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v23->fields.data;
    if ( !this )
      goto LABEL_93;
    QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0);
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v24);
    if ( !Individuality__CheckIndividualities(QuestIndividualities, (System_Int32_array *)v22, 0) )
      v4->fields.questFuncFlg = 0;
  }
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__IsAvoidExecuteSelfFunc(
                                                             v4,
                                                             ServantData,
                                                             v21);
  procArg_k__BackingField = v4->fields._procArg_k__BackingField;
  v4->fields._IsAvoidFuncExec_k__BackingField = (unsigned __int8)this & 1;
  if ( !procArg_k__BackingField )
    goto LABEL_93;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_93;
  if ( externalArg->fields.isPassive )
  {
    v28 = v4->fields._logic_k__BackingField;
    if ( !v28 )
      goto LABEL_93;
    v29 = v28->fields.data;
    if ( !v29 )
      goto LABEL_93;
    FuncEventExceptedHash_k__BackingField = v29->fields._FuncEventExceptedHash_k__BackingField;
    if ( FuncEventExceptedHash_k__BackingField
      && FuncEventExceptedHash_k__BackingField->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           FuncEventExceptedHash_k__BackingField,
           funcEnt->fields.id,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      return 0;
    }
  }
  if ( !BattleActionData__IsSelectedAddTargetIndex(action, dataVals_k__BackingField, 0) )
    return 0;
  v32 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
          v4,
          dataVals_k__BackingField,
          action->fields.actorId,
          v31);
  if ( !v32 )
    return 0;
  v34 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyOverChargeStageRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v32,
          dataVals_k__BackingField,
          ServantData,
          v33);
  if ( !v34 )
    return 0;
  if ( !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v34,
          dataVals_k__BackingField,
          ServantData,
          v35) )
    return 0;
  v37 = BattleLogicFunctionProcess_FunctionUnitCheck__IsStartingPositionCondition(
          v4,
          dataVals_k__BackingField,
          ServantData,
          v36);
  if ( !v37 )
    return 0;
  v39 = BattleLogicFunctionProcess_FunctionUnitCheck__IsFriendShipCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v37,
          dataVals_k__BackingField,
          ServantData,
          v38);
  if ( !v39
    || !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfySupportSvtExec(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v39,
          dataVals_k__BackingField,
          ServantData,
          v40) )
  {
    return 0;
  }
  if ( DataVals__checkActSet(dataVals_k__BackingField, 0) )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__getActSet(dataVals_k__BackingField, 0);
    v41 = v4->fields._procArg_k__BackingField;
    if ( !v41 )
      goto LABEL_93;
    if ( (_DWORD)this != v41->fields.actSetId )
      return 0;
  }
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__isParam(dataVals_k__BackingField, 133, 0);
  if ( ((unsigned __int8)this & 1) == 0
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 133, 0, 0),
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(
                                                                   v4,
                                                                   v43),
        v44 = Param == (_DWORD)this,
        v7 = 0,
        v44) )
  {
    v45 = v4->fields._logic_k__BackingField;
    if ( !v45 )
      goto LABEL_93;
    if ( DataVals__IsSatisfyCommonReleaseId(dataVals_k__BackingField, v45->fields.data, ServantData, action, 0) )
    {
      if ( funcEnt->fields.targetType != 35 )
        goto LABEL_59;
      skillInfo = action->fields.skillInfo;
      if ( skillInfo )
      {
        v48 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                skillInfo,
                skillInfo->klass->vtable._5_get_skillId.method);
        v49 = action->fields.skillInfo;
        v50 = v48;
        if ( v49 )
        {
          skilllv = v49->fields.skilllv;
          goto LABEL_58;
        }
      }
      else
      {
        v50 = 0;
      }
      skilllv = 0;
LABEL_58:
      if ( !action->fields.isPlayerAttackPreselectTargetExecution )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v46);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( this )
        {
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                     &entity,
                                                                     v50,
                                                                     (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          v76 = skilllv;
          v77 = v50;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)entity;
            if ( !entity )
              goto LABEL_93;
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)SkillEntity__GetPlayerAttackPreselectExecuteSkillId(
                                                                       (SkillEntity_o *)entity,
                                                                       v50,
                                                                       0);
            if ( !entity )
              goto LABEL_93;
            v77 = (int)this;
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)SkillEntity__GetPlayerAttackPreselectExecuteSkillLv(
                                                                       (SkillEntity_o *)entity,
                                                                       skilllv,
                                                                       0);
            v76 = (int)this;
          }
          v78 = v4->fields._logic_k__BackingField;
          if ( v78 )
          {
            v80 = action->fields.actorId;
            targetId = action->fields.targetId;
            v81 = v78->fields.data;
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleActionData__getPTTargetId(action, 0);
            if ( v81 )
            {
              BattleData__AddPlayerAttackPreselectTargetData(
                v81,
                v80,
                v50,
                skilllv,
                v77,
                v76,
                targetId,
                (int32_t)this,
                funcEnt->fields.targetType,
                0);
              v7 = 1;
              action->fields.isSuccessTargetSelection = 1;
              v82 = sub_2213B20(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, 0);
              v4->fields._funcTargetArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)v82;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v4->fields._funcTargetArray_k__BackingField,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87,
                v88);
              return v7;
            }
          }
        }
LABEL_93:
        sub_2213CDC(this, action);
      }
LABEL_59:
      args = (Target_BattleTargetArgs_o *)sub_2213CCC(Target_BattleTargetArgs_TypeInfo);
      Target_BattleTargetArgs___ctor(args, dataVals_k__BackingField, 0);
      if ( action->fields.isPlayerAttackPreselectTargetExecution )
      {
        if ( !args )
          goto LABEL_93;
        Target_BattleTargetArgs__SetPlayerAttackPreselectTargetUniqueId(
          args,
          action->fields.playerAttackPreselectTargetUniqueId,
          0);
      }
      v53 = v4->fields._logic_k__BackingField;
      if ( v53 )
      {
        bdata = v53->fields.data;
        v54 = action->fields.targetId;
        actorId = action->fields.actorId;
        PTTargetId = BattleActionData__getPTTargetId(action, 0);
        targetType = funcEnt->fields.targetType;
        taskActorType = action->fields.taskActorType;
        v58 = PTTargetId;
        checkRevengeId = action->fields.checkRevengeId;
        ValsList = DataVals__GetValsList(dataVals_k__BackingField, 86, 0);
        IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(dataVals_k__BackingField, 0);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Target__getTargetIds_47416160(
                                                                   bdata,
                                                                   actorId,
                                                                   v54,
                                                                   v58,
                                                                   targetType,
                                                                   taskActorType,
                                                                   checkRevengeId,
                                                                   ValsList,
                                                                   IsIncludeIgnoreIndividuality,
                                                                   args,
                                                                   0);
        v62 = v4->fields._procArg_k__BackingField;
        if ( v62 )
        {
          v63 = this;
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v62->fields.externalArg;
          if ( this )
          {
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const char *))this->klass[1]._1.name)(
                                                                       this,
                                                                       (unsigned int)funcEnt->fields.targetType,
                                                                       v63,
                                                                       this->klass[1]._1.namespaze);
            v64 = v4->fields._procArg_k__BackingField;
            if ( v64 )
            {
              v65 = v64->fields.externalArg;
              if ( v65 )
              {
                v66 = this;
                this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v65->fields.checkDuplicate;
                if ( this )
                {
                  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, DataVals_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                                                                             this,
                                                                             dataVals_k__BackingField,
                                                                             v66,
                                                                             *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    return 0;
                  v68 = v4->fields._logic_k__BackingField;
                  if ( v68 )
                  {
                    v69 = v68->fields.data;
                    if ( v69 )
                    {
                      if ( !DataVals__CheckFunctionTriggerStar(
                              dataVals_k__BackingField,
                              v69->fields.totalCriticalStars,
                              0)
                        && !v4->fields.isLowestStarFunction )
                      {
                        return 0;
                      }
                      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
                                                                                 v4,
                                                                                 (System_Int32_array *)v66,
                                                                                 v70);
                      if ( this )
                      {
                        v71 = (int)this->fields._procArg_k__BackingField;
                        v72 = this;
                        if ( v71 < 1 )
                          return 1;
                        v73 = 0;
                        v7 = 1;
                        while ( 1 )
                        {
                          if ( (unsigned int)v73 >= v71 )
                            sub_2213CE4(this);
                          v74 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)*((_QWORD *)&v72->fields._dataVals_k__BackingField
                                                                                    + v73);
                          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                                     v4,
                                                                                     (const MethodInfo *)action);
                          if ( !v74 )
                            break;
                          BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
                            v74,
                            (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
                            action,
                            v75);
                          v71 = (int)v72->fields._procArg_k__BackingField;
                          if ( (int)++v73 >= v71 )
                            return v7;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_93;
    }
    return 0;
  }
  return v7;
}


BattleActionData_o *BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v5; // x21
  BattleActionData_BuffData_o *v7; // x20
  DataVals_o *v8; // x3
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  DataVals_o *v12; // x22
  struct BattleLogicFunction_ProcListInArgs_o *v13; // x8
  struct BattleLogicFunction_FunctionArgument_o *v14; // x8
  _BOOL4 isCommandSideEffect; // w25
  BattleLogicFunction_o *logic_k__BackingField; // x21
  int32_t targetId_k__BackingField; // w23
  int32_t funcIndex; // w24
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *v21; // x9

  if ( !funcTarget )
    goto LABEL_26;
  v5 = this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *, BattleActionData_o *, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr)(
                                                             funcTarget,
                                                             funcTarget->klass->vtable._8_MakeActionBuffData.method,
                                                             mainAction,
                                                             method);
  if ( !v5->fields._dataVals_k__BackingField )
    goto LABEL_26;
  v7 = (BattleActionData_BuffData_o *)this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetOverwriteFuncInvalidType(
                                                             v5->fields._dataVals_k__BackingField,
                                                             funcTarget->fields.invalidType,
                                                             0);
  if ( (int)this > 2 )
  {
    if ( (_DWORD)this == 3 )
    {
      dataVals_k__BackingField = v5->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        goto LABEL_26;
      funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
      if ( !funcUnit_k__BackingField )
        goto LABEL_26;
      v21 = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
      if ( !v21 )
        goto LABEL_26;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v5->fields._logic_k__BackingField;
      if ( !this )
        goto LABEL_26;
      return BattleLogicFunction__getGrayPopupActionData(
               (BattleLogicFunction_o *)this,
               funcTarget->fields._targetId_k__BackingField,
               dataVals_k__BackingField->fields.funcIndex,
               v21->fields.funcEnt,
               funcTarget,
               0);
    }
    else
    {
      if ( (_DWORD)this != 4 )
        return 0;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v5->fields._logic_k__BackingField;
      if ( !this )
        goto LABEL_26;
      return BattleLogicFunction__GetSubstitutePopupActionData((BattleLogicFunction_o *)this, funcTarget, mainAction, 0);
    }
  }
  else
  {
    if ( (_DWORD)this != 1 )
    {
      if ( (_DWORD)this == 2 )
      {
        v8 = v5->fields._dataVals_k__BackingField;
        if ( v8 )
        {
          procArg_k__BackingField = v5->fields._procArg_k__BackingField;
          if ( procArg_k__BackingField )
          {
            externalArg = procArg_k__BackingField->fields.externalArg;
            if ( externalArg )
            {
              this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v5->fields._logic_k__BackingField;
              if ( this )
                return BattleLogicFunction__getMissObject(
                         (BattleLogicFunction_o *)this,
                         funcTarget->fields._targetId_k__BackingField,
                         v8->fields.funcIndex,
                         v8,
                         externalArg->fields.isCommandSideEffect,
                         funcTarget->fields.invalidText,
                         v7,
                         funcTarget,
                         1,
                         0);
            }
          }
        }
LABEL_26:
        sub_2213CDC(this, funcTarget);
      }
      return 0;
    }
    v12 = v5->fields._dataVals_k__BackingField;
    if ( !v12 )
      goto LABEL_26;
    v13 = v5->fields._procArg_k__BackingField;
    if ( !v13 )
      goto LABEL_26;
    v14 = v13->fields.externalArg;
    if ( !v14 )
      goto LABEL_26;
    isCommandSideEffect = v14->fields.isCommandSideEffect;
    logic_k__BackingField = v5->fields._logic_k__BackingField;
    targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
    funcIndex = v12->fields.funcIndex;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))funcTarget->klass->vtable._5_GetFixNoEffectText.methodPtr)(
                                                               funcTarget,
                                                               funcTarget->klass->vtable._5_GetFixNoEffectText.method);
    if ( !logic_k__BackingField )
      goto LABEL_26;
    return BattleLogicFunction__getNoEffectObject(
             logic_k__BackingField,
             targetId_k__BackingField,
             funcIndex,
             v12,
             isCommandSideEffect,
             (System_String_o *)this,
             v7,
             funcTarget,
             1,
             0);
  }
}


System_Int32_array *BattleLogicFunctionProcess_FunctionUnitCheck__get_AddIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_2213CDC(0, method);
  return DataVals__GetAddIndividualty(dataVals_k__BackingField, 0);
}


BattleData_o *BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_2213CDC(this, method);
  return logic_k__BackingField->fields.data;
}


int32_t BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_2213CDC(this, method);
  return dataVals_k__BackingField->fields.funcIndex;
}


System_Int32_array *BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_funcIndividuality; // x19
  System_Int32_array *funcIndividuality; // x20
  struct DataVals_o *dataVals_k__BackingField; // x8
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_funcIndividuality = (MissionNaviTransitionBoardItem_o *)&this->fields.funcIndividuality;
  funcIndividuality = this->fields.funcIndividuality;
  if ( !funcIndividuality )
  {
    dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
    if ( !dataVals_k__BackingField
      || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)dataVals_k__BackingField->fields.funcEnt) == 0 )
    {
      sub_2213CDC(this, method);
    }
    funcIndividuality = FunctionEntity__GetFuncIndividuality((FunctionEntity_o *)this, 0);
    p_funcIndividuality->klass = (MissionNaviTransitionBoardItem_c *)funcIndividuality;
    sub_2213A04(p_funcIndividuality, (int32_t)funcIndividuality, v5, v6, v7, v8, v9, v10);
  }
  return funcIndividuality;
}


int32_t BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_2213CDC(this, method);
  return dataVals_k__BackingField->fields.funcType;
}


BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField
    || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this->fields._logic_k__BackingField) == 0 )
  {
    sub_2213CDC(this, method);
  }
  return BattleLogicFunction__getFunctionTypeProcess(
           (BattleLogicFunction_o *)this,
           dataVals_k__BackingField->fields.funcType,
           0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_2213CDC(0, method);
  return DataVals__IsAddIndividualty(dataVals_k__BackingField, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddLinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_2213CDC(0, method);
  return DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAvoidFuncExec(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAvoidFuncExec_k__BackingField;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_o *logic_k__BackingField; // x19
  System_Int32_array *v3; // x0
  __int64 v4; // x1

  logic_k__BackingField = this->fields._logic_k__BackingField;
  v3 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(this, method);
  if ( !logic_k__BackingField )
    sub_2213CDC(v3, v4);
  return BattleLogicFunction__IsIgnoreResistFunc(logic_k__BackingField, v3, 0);
}


System_Int32_array *BattleLogicFunctionProcess_FunctionUnitCheck__get_LinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_2213CDC(0, method);
  return DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0);
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FunctionUnitCheck__get_ParentActBuffData(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  procArg_k__BackingField = this->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField || (externalArg = procArg_k__BackingField->fields.externalArg) == 0 )
    sub_2213CDC(this, method);
  return externalArg->fields._ParentActBuffData_k__BackingField;
}


DataVals_o *BattleLogicFunctionProcess_FunctionUnitCheck__get_dataVals(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._dataVals_k__BackingField;
}


BattleLogicFunctionProcess_FunctionTargetCheck_array *BattleLogicFunctionProcess_FunctionUnitCheck__get_funcTargetArray(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._funcTargetArray_k__BackingField;
}


BattleLogicFunction_o *BattleLogicFunctionProcess_FunctionUnitCheck__get_logic(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._logic_k__BackingField;
}


BattleLogicFunction_ProcListInArgs_o *BattleLogicFunctionProcess_FunctionUnitCheck__get_procArg(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._procArg_k__BackingField;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__get_result(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._result_k__BackingField;
}


BattleLogicFunctionProcess_FunctionTargetCheck_array *BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        System_Int32_array *targetlist,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x20
  int max_length; // w22
  __int64 v6; // x0
  BattleLogicFunctionProcess_FunctionTargetCheck_array **p_funcTargetArray_k__BackingField; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  int v15; // w23
  __int64 v16; // x24
  __int64 v17; // x25
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x27
  unsigned int v19; // w26
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v26; // x22
  __int64 v27; // x1
  BattleLogicFunctionProcess_FunctionTargetCheck_array *v28; // x8
  __int64 v30; // x0

  v4 = this;
  if ( (byte_5973C56 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_2213A60(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    byte_5973C56 = 1;
  }
  if ( !targetlist )
LABEL_18:
    sub_2213CDC(this, targetlist);
  max_length = targetlist->max_length;
  v6 = sub_2213B20(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, (unsigned int)max_length);
  v4->fields._funcTargetArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)v6;
  p_funcTargetArray_k__BackingField = &v4->fields._funcTargetArray_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields._funcTargetArray_k__BackingField,
    v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( max_length >= 1 )
  {
    v15 = -max_length;
    v16 = 8;
    v17 = 32;
    do
    {
      funcTargetArray_k__BackingField = v4->fields._funcTargetArray_k__BackingField;
      v19 = v16 - 8;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                 v4,
                                                                 v14);
      if ( (unsigned int)(v16 - 8) >= LODWORD(targetlist->max_length) )
        goto LABEL_19;
      if ( !this )
        goto LABEL_18;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppClass *))this->klass[1]._1.element_class)(
                                                                 this,
                                                                 *((unsigned int *)&targetlist->obj.klass + v16),
                                                                 v4,
                                                                 this->klass[1]._1.castClass);
      if ( !funcTargetArray_k__BackingField )
        goto LABEL_18;
      v26 = this;
      if ( this )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_2213BB4(
                                                                   this,
                                                                   funcTargetArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v30 = sub_2213D00(0, v27);
          sub_2213BA0(v30, 0);
        }
      }
      if ( v19 >= LODWORD(funcTargetArray_k__BackingField->max_length) )
        goto LABEL_19;
      *(Il2CppClass **)((char *)&funcTargetArray_k__BackingField->obj.klass + v17) = (Il2CppClass *)v26;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)((char *)funcTargetArray_k__BackingField + v17),
        (int32_t)v26,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v28 = *p_funcTargetArray_k__BackingField;
      if ( !*p_funcTargetArray_k__BackingField )
        goto LABEL_18;
      if ( v19 >= LODWORD(v28->max_length) || v19 >= LODWORD(targetlist->max_length) )
LABEL_19:
        sub_2213CE4(this);
      this = *(BattleLogicFunctionProcess_FunctionUnitCheck_o **)((char *)&v28->obj.klass + v17);
      if ( !this )
        goto LABEL_18;
      ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))this->klass[1]._1.image)(
        this,
        *((unsigned int *)&targetlist->obj.klass + v16++),
        v4,
        this->klass[1]._1.gc_desc);
      v17 += 8;
    }
    while ( v15 + (_DWORD)v16 != 8 );
  }
  return *p_funcTargetArray_k__BackingField;
}


void BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToOtherResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *linkedToOtherList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  DataVals_o *v7; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v10; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5973C58 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_5973C58 = 1;
  }
  linkedToOtherList = (System_Collections_Generic_List_object__o *)this->fields.linkedToOtherList;
  memset(&v11, 0, sizeof(v11));
  if ( !linkedToOtherList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    linkedToOtherList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  v9 = 0;
  v10 = &v11;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    if ( !v4 )
      break;
    current = v11.fields._current;
    if ( !v11.fields._current )
      sub_2213CDC(v4, v5);
    v7 = *(DataVals_o **)((char *)&v11.fields._current->klass + (unsigned __int64)&qword_20);
    if ( !v7 )
      sub_2213CDC(0, v5);
    if ( !DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed(v7, 0) )
      BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
        this,
        v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *linkedToSelf,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x20
  int max_length; // w8
  __int64 v6; // x21

  if ( !linkedToSelf )
    goto LABEL_11;
  if ( !linkedToSelf->fields._result_k__BackingField )
    this->fields._result_k__BackingField = 0;
  funcTargetArray_k__BackingField = this->fields._funcTargetArray_k__BackingField;
  if ( !funcTargetArray_k__BackingField )
    goto LABEL_11;
  max_length = funcTargetArray_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)funcTargetArray_k__BackingField->m_Items[v6];
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionTargetCheck__reflectLinkedToSelfResult(
        (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
        linkedToSelf,
        method);
      max_length = funcTargetArray_k__BackingField->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_11:
    sub_2213CDC(this, linkedToSelf);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        int32_t *funcIndex,
        int32_t functionId,
        DataVals_o *dataVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  struct DataVals_o **p_dataVals_k__BackingField; // x24
  __int64 v14; // x1
  BattleLogicFunction_o *FuncMaster; // x0
  DataVals_o *v16; // x24
  DataVals_o *dataVals_k__BackingField; // x23

  this->fields._dataVals_k__BackingField = dataVals;
  p_dataVals_k__BackingField = &this->fields._dataVals_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._dataVals_k__BackingField,
    (int32_t)dataVals,
    *(System_String_o **)&functionId,
    (System_String_o *)dataVals,
    (int32_t)actionData,
    (int32_t)method,
    v6,
    v7);
  FuncMaster = (BattleLogicFunction_o *)*(p_dataVals_k__BackingField - 2);
  if ( !FuncMaster )
    goto LABEL_12;
  v16 = *p_dataVals_k__BackingField;
  FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFuncMaster(FuncMaster, 0);
  if ( !v16 )
    goto LABEL_12;
  DataVals__SetDependDataVals(v16, (FunctionMaster_o *)FuncMaster, funcIndex, 0);
  FuncMaster = this->fields._logic_k__BackingField;
  if ( !FuncMaster )
    goto LABEL_12;
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionEntity(FuncMaster, functionId, 0);
  if ( !dataVals_k__BackingField )
    goto LABEL_12;
  DataVals__SetType_48682788(dataVals_k__BackingField, (FunctionEntity_o *)FuncMaster, *funcIndex, 0);
  if ( !dataVals )
    goto LABEL_12;
  FuncMaster = (BattleLogicFunction_o *)Target__IsFuncTargetTypeNoTarget(dataVals->fields.targetType, 0);
  if ( ((unsigned __int8)FuncMaster & 1) == 0 )
    return;
  if ( !actionData )
LABEL_12:
    sub_2213CDC(FuncMaster, v14);
  if ( actionData->fields.actorId == -1 && actionData->fields.taskActorType == 5 )
    dataVals->fields.defCheckDead = 1;
}


void BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o **v4; // x20
  int max_length; // w8
  unsigned int v6; // w26
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v7; // x21
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v9; // x22
  __int64 v10; // x1
  System_Int32_array *AddIndividualty; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  _QWORD *v19; // x9
  __int64 procArg_k__BackingField_low; // x10
  BattleLogicFunction_c **v21; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v22; // x22
  __int64 v23; // x1
  System_Int32_array *LinkageTargetIndividualty; // x23
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct BattleLogicFunction_o *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  BattleLogicFunction_c **v34; // x8

  v4 = (BattleLogicFunctionProcess_FunctionUnitCheck_o **)this;
  if ( (byte_5973C55 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
    byte_5973C55 = 1;
  }
  if ( !funcUnitArray )
    goto LABEL_32;
  max_length = funcUnitArray->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_2213CE4(this);
      this = v4[4];
      if ( !this )
        break;
      v7 = funcUnitArray->m_Items[v6];
      if ( !v7 )
        break;
      dataVals_k__BackingField = v7->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        break;
      if ( HIDWORD(this->fields._dataVals_k__BackingField) != dataVals_k__BackingField->fields.funcIndex )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetLinkageTargetIndividualty(
                                                                   (DataVals_o *)this,
                                                                   0);
        if ( !v7->fields._dataVals_k__BackingField )
          break;
        v9 = this;
        AddIndividualty = DataVals__GetAddIndividualty(v7->fields._dataVals_k__BackingField, 0);
        if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v10);
        if ( Individuality__IsPartialMatchArray((System_Int32_array *)v9, AddIndividualty, 0) )
        {
          this = v4[7];
          if ( !this )
            break;
          logic_k__BackingField = this->fields._logic_k__BackingField;
          v19 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !logic_k__BackingField )
            break;
          procArg_k__BackingField_low = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)procArg_k__BackingField_low >= LODWORD(logic_k__BackingField->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v7,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &logic_k__BackingField->klass + procArg_k__BackingField_low;
            LODWORD(this->fields._procArg_k__BackingField) = procArg_k__BackingField_low + 1;
            v21[4] = (BattleLogicFunction_c *)v7;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v7, v12, v13, v14, v15, v16, v17);
          }
        }
        this = v4[4];
        if ( !this )
          break;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetAddIndividualty((DataVals_o *)this, 0);
        if ( !v7->fields._dataVals_k__BackingField )
          break;
        v22 = this;
        LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(v7->fields._dataVals_k__BackingField, 0);
        if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v23);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__IsPartialMatchArray(
                                                                   (System_Int32_array *)v22,
                                                                   LinkageTargetIndividualty,
                                                                   0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v4[8];
          if ( !this )
            break;
          v31 = this->fields._logic_k__BackingField;
          v32 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !v31 )
            break;
          v33 = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)v33 >= LODWORD(v31->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v7,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &v31->klass + v33;
            LODWORD(this->fields._procArg_k__BackingField) = v33 + 1;
            v34[4] = (BattleLogicFunction_c *)v7;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v7, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      max_length = funcUnitArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_32:
    sub_2213CDC(this, funcUnitArray);
  }
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_IsAvoidFuncExec(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAvoidFuncExec_k__BackingField = value;
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_dataVals(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._dataVals_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._dataVals_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_funcTargetArray(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._funcTargetArray_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._funcTargetArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_logic(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._logic_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_procArg(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_ProcListInArgs_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._procArg_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._procArg_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_result(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._result_k__BackingField = value;
}


void BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass62_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass62_0___checkFuncTargetResult_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass62_0_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._targetId_k__BackingField == this->fields.targetId
      && this->fields.result == x->fields._result_k__BackingField;
}


void BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass71_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass71_0___IsSatisfyBattlePointPhaseRangeCondition_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass71_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0
  DataVals_o *baseVals; // x20

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData
    || (baseVals = this->fields.baseVals,
        targetSvtData = (BattleServantData_o *)BattleServantData__GetBattlePointPhase(targetSvtData, id, 0),
        !baseVals) )
  {
    sub_2213CDC(targetSvtData, *(_QWORD *)&id);
  }
  return DataVals__IsSatisfyAboveBelowCond(baseVals, 181, (int32_t)targetSvtData, id, 0);
}


void BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(
        BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(
        BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  BuffList_TYPE_array *v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_5973C6A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9153/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/);
    byte_5973C6A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_9153/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/,
                                0,
                                0);
  if ( !Instance )
    return (char)Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
  {
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                              (System_Collections_IEnumerable_o *)Instance,
                                                              (const MethodInfo_3868A20 *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                v6,
                                (const MethodInfo_389BA1C *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !targetSvtData
    || (v5 = (BuffList_TYPE_array *)Instance, (Instance = (DataManager_o *)targetSvtData->fields.buffData) == 0)
    || (Instance = (DataManager_o *)BattleBuffData__getBuffList_52619216((BattleBuffData_o *)Instance, v5, 0, 0, 0)) == 0 )
  {
LABEL_13:
    sub_2213CDC(Instance, v5);
  }
  LOBYTE(Instance) = LODWORD(Instance->fields.m_CancellationTokenSource) != 0;
  return (char)Instance;
}


bool BattleLogicFunctionProcess_MoveToLastSubMemberProcess__checkCondition(
        BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v5; // x22
  int32_t targetId_k__BackingField; // w21
  struct BattleLogicFunction_o *v9; // x8
  BattleServantData_o *v10; // x23
  int v11; // w24
  const MethodInfo *v12; // x2
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v13; // x0
  const MethodInfo *v14; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8
  bool HasRefuseBuff; // w0
  const MethodInfo *v19; // x3

  if ( !funcTarget )
    goto LABEL_18;
  logic_k__BackingField = this->fields._logic_k__BackingField;
  v5 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)this;
  if ( !logic_k__BackingField )
    goto LABEL_18;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_18;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleData__getServantData(
                                                                      (BattleData_o *)this,
                                                                      targetId_k__BackingField,
                                                                      0);
  v9 = v5->fields._logic_k__BackingField;
  if ( !v9 )
    goto LABEL_18;
  v10 = (BattleServantData_o *)this;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)v9->fields.data;
  if ( !this )
    goto LABEL_18;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleData__getAliveFieldSvtIdArray(
                                                                      (BattleData_o *)this,
                                                                      targetId_k__BackingField,
                                                                      1,
                                                                      0,
                                                                      0,
                                                                      0);
  if ( !this )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_18;
  v11 = *((_DWORD *)this + 6);
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getBuffList(v10, 84, 0, 0, 0);
  if ( !this )
    goto LABEL_18;
  if ( *((_QWORD *)this + 3) )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, (const MethodInfo *)action);
    BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(v13, v10, v14);
    goto LABEL_11;
  }
  HasRefuseBuff = BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(this, v10, v12);
  if ( v11 < 2 || HasRefuseBuff )
  {
LABEL_11:
    this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getDeckIndex(v10, 0);
    funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
    if ( funcUnit_k__BackingField )
    {
      dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
      if ( dataVals_k__BackingField )
      {
        if ( action )
        {
          BattleActionData__AddNewMoveToSubMember(
            action,
            (int32_t)this,
            targetId_k__BackingField,
            dataVals_k__BackingField->fields.funcIndex,
            0,
            0);
          funcTarget->fields.invalidType = 1;
          return 0;
        }
      }
    }
LABEL_18:
    sub_2213CDC(this, action);
  }
  return BattleLogicFunctionProcess_CommonFunctionTypeProcess__checkCondition(v5, action, funcTarget, v19);
}


void BattleLogicFunctionProcess_OverwriteBattleClassCheck___ctor(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        const MethodInfo *method)
{
  this->fields.OverwriteClassId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_OverwriteBattleClassCheck__AddBuff(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  int32_t OverwriteClassId; // w9

  if ( !actBuffData
    || (actBuffData->fields.procType = 6, !buffData)
    || (OverwriteClassId = this->fields.OverwriteClassId,
        this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)this->fields.targetSvt,
        buffData->fields.param = OverwriteClassId,
        !this) )
  {
    sub_2213CDC(this, actBuffData);
  }
  BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0);
}


bool BattleLogicFunctionProcess_OverwriteBattleClassCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ConstantStrMaster_o *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_5973C46 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_5626/*"ENABLE_OVERWRITE_CLASS_IDS"*/);
    byte_5973C46 = 1;
  }
  if ( !BattleLogicFunctionProcess_CommonAddStateTargetCheck__TryGetOverwriteClassId(
          (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this,
          &this->fields.OverwriteClassId,
          (const MethodInfo *)buffEnt) )
    goto LABEL_10;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( !ConstantStrMaster__ExistValueArray(
          Master_object,
          (System_String_o *)StringLiteral_5626/*"ENABLE_OVERWRITE_CLASS_IDS"*/,
          this->fields.OverwriteClassId,
          0) )
  {
LABEL_10:
    this->fields.invalidType = 1;
    return 0;
  }
  Master_object = (ConstantStrMaster_o *)this->fields.targetSvt;
  if ( !Master_object )
LABEL_12:
    sub_2213CDC(Master_object, v7);
  if ( BattleServantData__GetLogicClassId((BattleServantData_o *)Master_object, 0) == this->fields.OverwriteClassId )
    goto LABEL_10;
  return 1;
}


System_String_o *BattleLogicFunctionProcess_OverwriteBattleClassCheck__GetFixNoEffectText(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  BattleServantData_o *targetSvt; // x0
  int32_t LogicClassId; // w0
  int32_t classId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5973C47 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2930/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_5973C47 = 1;
  }
  classId = 0;
  if ( !BattleLogicFunctionProcess_CommonAddStateTargetCheck__TryGetOverwriteClassId(
          (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this,
          &classId,
          v2) )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v4);
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_2213CDC(0, v4);
  LogicClassId = BattleServantData__GetLogicClassId(targetSvt, 0);
  if ( LogicClassId != classId )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v4);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0);
}


void BattleLogicFunctionProcess_ServantAddStateTargetCheck___ctor(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_ServantAddStateTargetCheck__AddBuff(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvt; // x0

  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_2213CDC(0, actBuffData);
  BattleServantData__addBuff(targetSvt, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0);
}


void BattleLogicFunctionProcess_ServantAddStateTargetCheck__AfterAddBuffProc(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BattleActionData_o *mainAction,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvt; // x20
  BuffEntity_o *Entity; // x2
  const MethodInfo *v8; // x3

  if ( !buffData )
    sub_2213CDC(this, mainAction);
  targetSvt = this->fields.targetSvt;
  Entity = BattleBuffData_BuffData__get_Entity(buffData, 0);
  BattleLogicFunctionProcess_CommonAddStateTargetCheck__AfterAddedBuffServantProcess(
    (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this,
    targetSvt,
    Entity,
    v8);
}


bool BattleLogicFunctionProcess_ServantAddStateTargetCheck__CheckConvertBuffData(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BuffConvertEntity_o *buffConvertEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BuffConvertEntity_o **p_buffConvertEntity; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t ConvertBuffIdFromIndex; // w0
  BuffEntity_o *BuffEntity; // x0
  BuffEntity_o *v15; // x20
  const MethodInfo *v16; // x3

  this->fields.buffConvertEntity = buffConvertEntity;
  p_buffConvertEntity = &this->fields.buffConvertEntity;
  *((_BYTE *)p_buffConvertEntity + 8) = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_buffConvertEntity,
    (int32_t)buffConvertEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !buffConvertEntity )
    sub_2213CDC(v11, v12);
  ConvertBuffIdFromIndex = BuffConvertEntity__GetConvertBuffIdFromIndex(
                             buffConvertEntity,
                             this->fields.convertBuffIndex,
                             0);
  this->fields.convertBuffId = ConvertBuffIdFromIndex;
  BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, ConvertBuffIdFromIndex, 0);
  if ( BuffEntity )
  {
    v15 = BuffEntity;
    if ( BuffEntity__isCheckGroup(BuffEntity, 0)
      && BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
           this,
           v15,
           this->fields.targetSvt,
           v16) )
    {
      this->fields.isBuffConvertFailure = 1;
    }
  }
  return !this->fields.isBuffConvertFailure;
}


// local variable allocation has failed, the output may be wrong!
BuffConvertEntity_o *BattleLogicFunctionProcess_ServantAddStateTargetCheck__GetConvertBuffEntity(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        int32_t actorId,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *v4; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v6; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  __int64 v10; // x1
  BattleBuffData_BuffData_o *current; // x21
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v16; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct FunctionEntity_o *funcEnt; // x8
  _BOOL8 IsTargetLimit; // x0
  __int64 v20; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v21; // x8
  DataVals_o *v22; // x0
  struct FunctionEntity_o *v23; // x8
  struct System_Int32_array *vals; // x8
  Il2CppObject *v25; // x22
  int32_t v26; // w23
  System_Int32_array *ParamArray; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  BattleServantData_o *targetSvt; // x0
  BattleBuffData_o *BuffData; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x19
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_5973C40 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BuffConvertMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_5973C40 = 1;
  }
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  memset(&v36, 0, sizeof(v36));
  entity = 0;
  if ( !funcUnit_k__BackingField )
    goto LABEL_52;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 22, 0);
  v6 = v4->fields._funcUnit_k__BackingField;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_52;
    goto LABEL_15;
  }
  if ( !v6
    || (procArg_k__BackingField = v6->fields._procArg_k__BackingField) == 0
    || (externalArg = procArg_k__BackingField->fields.externalArg) == 0 )
  {
LABEL_52:
    sub_2213CDC(this, *(_QWORD *)&actorId);
  }
  if ( !externalArg->fields.isPassive )
  {
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v6->fields._dataVals_k__BackingField;
    if ( !this )
      goto LABEL_52;
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 25, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_17;
    v6 = v4->fields._funcUnit_k__BackingField;
    if ( !v6 )
      goto LABEL_52;
  }
LABEL_15:
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v6->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_52;
  if ( DataVals__GetParam((DataVals_o *)this, 261, 0, 0) < 1 )
    return 0;
LABEL_17:
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v4->fields.targetSvt;
  if ( !this )
    goto LABEL_52;
  BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffList(
                                                                    (BattleServantData_o *)this,
                                                                    114,
                                                                    1,
                                                                    0,
                                                                    0);
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                      BuffList,
                                                                      (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
  if ( !this )
    goto LABEL_52;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v36 = v35;
  v35.fields._list = 0;
  *(_QWORD *)&v35.fields._index = &v36;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = (BattleBuffData_BuffData_o *)v36.fields._current;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BuffConvertMaster___);
    if ( !current )
      sub_2213CDC(Master_object, v13);
    if ( !Master_object )
      sub_2213CDC(0, v13);
    v14 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            current->fields.buffId,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
    if ( v14 )
    {
      v16 = v4->fields._funcUnit_k__BackingField;
      if ( !v16 )
        sub_2213CDC(v14, v15);
      dataVals_k__BackingField = v16->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        sub_2213CDC(v14, v15);
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      if ( !funcEnt )
        sub_2213CDC(v14, v15);
      if ( !entity )
        sub_2213CDC(0, v15);
      IsTargetLimit = BuffConvertEntity__IsTargetLimit(
                        (BuffConvertEntity_o *)entity,
                        funcEnt->fields.targetType,
                        v4->fields._targetId_k__BackingField,
                        actorId,
                        0);
      if ( IsTargetLimit )
      {
        v21 = v4->fields._funcUnit_k__BackingField;
        if ( !v21 )
          sub_2213CDC(IsTargetLimit, v20);
        v22 = v21->fields._dataVals_k__BackingField;
        if ( !v22 )
          sub_2213CDC(0, v20);
        v23 = v22->fields.funcEnt;
        if ( !v23 )
          sub_2213CDC(v22, v20);
        vals = v23->fields.vals;
        if ( !vals )
          sub_2213CDC(v22, v20);
        if ( !LODWORD(vals->max_length) )
          sub_2213CE4(v22);
        v25 = entity;
        v26 = vals->m_Items[0];
        ParamArray = DataVals__GetParamArray(v22, 115, 0);
        if ( !v25 )
          sub_2213CDC(ParamArray, v28);
        if ( BuffConvertEntity__TryGetConvertBuffIndex(
               (BuffConvertEntity_o *)v25,
               &v4->fields.convertBuffIndex,
               v26,
               ParamArray,
               0) )
        {
          targetSvt = v4->fields.targetSvt;
          if ( !targetSvt )
            sub_2213CDC(0, v29);
          BuffData = BattleServantData__get_BuffData(targetSvt, 0);
          if ( !BuffData )
            sub_2213CDC(0, v32);
          if ( BattleBuffData__checkBuffSuccessful(BuffData, current, 1, 0) )
          {
            v33 = entity;
            goto LABEL_43;
          }
        }
      }
    }
  }
  v33 = 0;
LABEL_43:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return (BuffConvertEntity_o *)v33;
}


BuffEntity_o *BattleLogicFunctionProcess_ServantAddStateTargetCheck__GetFixBuffEntity(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  BuffConvertEntity_o *buffConvertEntity; // x0
  BuffEntity_o *result; // x0

  buffConvertEntity = this->fields.buffConvertEntity;
  if ( !buffConvertEntity )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixBuffEntity(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             method);
  result = BuffConvertEntity__GetBuffEntity(buffConvertEntity, this->fields.convertBuffId, 0);
  if ( !result )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixBuffEntity(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             method);
  return result;
}


void BattleLogicFunctionProcess_ServantAddStateTargetCheck__Init(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v8; // x1
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleServantData_o *ServantData; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  BattleLogicFunctionProcess_FunctionTargetCheck__Init(
    (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
    targetId,
    funcUnit,
    method);
  if ( !funcUnit
    || (logic_k__BackingField = funcUnit->fields._logic_k__BackingField) == 0
    || (data = logic_k__BackingField->fields.data) == 0 )
  {
    sub_2213CDC(data, v8);
  }
  ServantData = BattleData__getServantData(data, targetId, 0);
  this->fields.targetSvt = ServantData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetSvt,
    (int32_t)ServantData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


bool BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BuffEntity_o *buffEnt,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0
  __int64 v8; // x8
  System_Collections_Generic_List_int__o *v9; // x22
  unsigned __int64 v10; // x24
  int32_t v11; // w23
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_int__o *v13; // x8

  if ( (byte_5973C41 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_5973C41 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                 AttachTargetList_k__BackingField,
                                                                                 (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  v8 = *(_QWORD *)&AttachTargetList_k__BackingField->fields._size;
  v9 = AttachTargetList_k__BackingField;
  if ( (int)v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        sub_2213CE4(AttachTargetList_k__BackingField);
      if ( !targetSvt )
        break;
      v11 = *((_DWORD *)&v9->fields._syncRoot + v10);
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleServantData__get_BuffData(
                                                                                     targetSvt,
                                                                                     0);
      if ( !buffEnt || !AttachTargetList_k__BackingField )
        break;
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleBuffData__checkBuffGroup(
                                                                                     (BattleBuffData_o *)AttachTargetList_k__BackingField,
                                                                                     buffEnt->fields.buffGroup,
                                                                                     v11,
                                                                                     0);
      if ( ((unsigned __int8)AttachTargetList_k__BackingField & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
          (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this,
          v11,
          v12);
      LODWORD(v8) = v9->fields._size;
      if ( (__int64)++v10 >= (int)v8 )
        goto LABEL_14;
    }
LABEL_19:
    sub_2213CDC(AttachTargetList_k__BackingField, buffEnt);
  }
LABEL_14:
  if ( (byte_5973C38 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_5973C38 = 1;
  }
  v13 = this->fields._AttachTargetList_k__BackingField;
  return !v13 || v13->fields._size < 1;
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_ServantAddStateTargetCheck__MakeAddActionBuffData(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        FunctionEntity_o *funcEnt,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  BuffEntity_o *BuffEntity; // x0
  __int64 convertBuffId; // x1
  BuffEntity_o *v9; // x19
  BuffConvertEntity_o *buffConvertEntity; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *dataVals_k__BackingField; // x8
  BuffEntity_o *v13; // x21
  BattleActionData_BuffData_o *GrayActionBuffData; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  BuffConvertEntity_o *v21; // x8
  BuffConvertEntity_o *v22; // x8
  System_Int32_array *EffectList; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *OverwritePopupTextFromIndex; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  BuffEntity = (BuffEntity_o *)BattleLogicFunctionProcess_FunctionTargetCheck__MakeAddActionBuffData(
                                 (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
                                 actBuffData,
                                 buffData,
                                 funcEnt,
                                 isCommandSideEffect,
                                 method);
  convertBuffId = (unsigned int)this->fields.convertBuffId;
  v9 = BuffEntity;
  if ( (_DWORD)convertBuffId )
  {
    if ( !BuffEntity )
      goto LABEL_13;
    buffConvertEntity = this->fields.buffConvertEntity;
    BYTE2(v9[1].klass) = this->fields.isBuffConvertFailure;
    if ( buffConvertEntity )
    {
      BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, convertBuffId, 0);
      funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
      if ( funcUnit_k__BackingField )
      {
        dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
        if ( dataVals_k__BackingField )
        {
          v13 = BuffEntity;
          BuffEntity = (BuffEntity_o *)funcUnit_k__BackingField->fields._logic_k__BackingField;
          if ( BuffEntity )
          {
            GrayActionBuffData = BattleLogicFunction__MakeGrayActionBuffData(
                                   (BattleLogicFunction_o *)BuffEntity,
                                   this->fields._targetId_k__BackingField,
                                   dataVals_k__BackingField->fields.funcIndex,
                                   (int32_t)v9->fields.ckSelfIndv,
                                   *(System_String_o **)&v9->fields.buffGroup,
                                   HIDWORD(v9->fields.ckSelfIndv),
                                   0);
            v9[1].monitor = GrayActionBuffData;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v9[1].monitor,
              (int32_t)GrayActionBuffData,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
            LODWORD(v9->fields.effectList) = this->fields.convertBuffId;
            if ( v13 )
            {
              BuffEntity = (BuffEntity_o *)BuffEntity__GetIconId(v13, 0);
              v21 = this->fields.buffConvertEntity;
              LODWORD(v9->fields.ckSelfIndv) = (_DWORD)BuffEntity;
              if ( v21 )
              {
                BuffEntity = (BuffEntity_o *)BuffConvertEntity__GetOverwritePopupColorFromIndex(
                                               v21,
                                               this->fields.convertBuffIndex,
                                               HIDWORD(v9->fields.ckSelfIndv),
                                               0);
                v22 = this->fields.buffConvertEntity;
                HIDWORD(v9->fields.ckSelfIndv) = (_DWORD)BuffEntity;
                if ( v22 )
                {
                  EffectList = BuffConvertEntity__GetEffectList(v22, (System_Int32_array *)v9->fields.script, 0);
                  v9->fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)EffectList;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v9->fields.script,
                    (int32_t)EffectList,
                    v24,
                    v25,
                    v26,
                    v27,
                    v28,
                    v29);
                  BuffEntity = (BuffEntity_o *)this->fields.buffConvertEntity;
                  if ( BuffEntity )
                  {
                    OverwritePopupTextFromIndex = BuffConvertEntity__GetOverwritePopupTextFromIndex(
                                                    (BuffConvertEntity_o *)BuffEntity,
                                                    this->fields.convertBuffIndex,
                                                    v13->fields.name,
                                                    0);
                    *(_QWORD *)&v9->fields.buffGroup = OverwritePopupTextFromIndex;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&v9->fields.buffGroup,
                      (int32_t)OverwritePopupTextFromIndex,
                      v31,
                      v32,
                      v33,
                      v34,
                      v35,
                      v36);
                    return (BattleActionData_BuffData_o *)v9;
                  }
                }
              }
            }
          }
        }
      }
LABEL_13:
      sub_2213CDC(BuffEntity, convertBuffId);
    }
  }
  return (BattleActionData_BuffData_o *)v9;
}


void BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___ctor(
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_SkillRankUpStateTargetCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvt; // x0
  BattleSkillInfoData_array *ActiveSkillInfos; // x0
  __int64 v7; // x1
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_c *v8; // x8
  System_Object_array *v9; // x20
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__0_0; // x21
  Il2CppObject *v12; // x22
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  bool v20; // w0

  if ( (byte_5973C42 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleSkillInfoData____91711032);
    sub_2213A60(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__);
    sub_2213A60(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_5973C42 = 1;
  }
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_2213CDC(0, action);
  ActiveSkillInfos = BattleServantData__getActiveSkillInfos(targetSvt, 0);
  v8 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  v9 = (System_Object_array *)ActiveSkillInfos;
  if ( !*(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v7);
    v8 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__0_0 = (System_Func_object__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v7);
      static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v12,
      Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      0);
    v13 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    v13->__9__0_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__0_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__0_0, (int32_t)_9__0_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = BasicHelper__Any_object__58785420(
          v9,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_380FE8C *)Method_BasicHelper_Any_BattleSkillInfoData____91711032);
  if ( !v20 )
    this->fields.invalidType = 1;
  return v20;
}


void BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973C43 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_5973C43 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___ctor(
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___CheckBuffCondtion_b__0_0(
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *this,
        BattleSkillInfoData_o *skill,
        const MethodInfo *method)
{
  if ( !skill )
    sub_2213CDC(this, 0);
  return ((bool (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skill->klass->vtable._14_IsChangeable.methodPtr)(
           skill,
           skill->klass->vtable._14_IsChangeable.method);
}


void BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck___ctor(
        BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvt; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleServantData_o *v7; // x20
  int32_t v8; // w21
  __int64 v9; // x8
  BattleServantData_o *v10; // x21
  bool v11; // w23
  unsigned __int64 v12; // x22
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userSvtId; // x25

  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    goto LABEL_20;
  targetSvt = (BattleServantData_o *)BattleServantData__getSkillSealSelect(targetSvt, 0);
  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (v7 = targetSvt,
        (targetSvt = (BattleServantData_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0)
    || (targetSvt = (BattleServantData_o *)DataVals__GetParam((DataVals_o *)targetSvt, 3, 0, 0), !this->fields.targetSvt)
    || (v8 = (int)targetSvt,
        (targetSvt = (BattleServantData_o *)BattleServantData__get_BuffData(this->fields.targetSvt, 0)) == 0)
    || (targetSvt = (BattleServantData_o *)BattleBuffData__getSkillSealSelectListFromValue(
                                             (BattleBuffData_o *)targetSvt,
                                             v8,
                                             0)) == 0 )
  {
LABEL_20:
    sub_2213CDC(targetSvt, action);
  }
  v9 = *(_QWORD *)&targetSvt->fields.uniqueId;
  v10 = targetSvt;
  v11 = (int)v9 < 1;
  if ( (int)v9 >= 1 )
  {
    v12 = 0;
    p_userSvtId = &targetSvt->fields.userSvtId;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v9 )
LABEL_21:
        sub_2213CE4(targetSvt);
      if ( *((_BYTE *)&p_userSvtId->fields.currentCryptoKey + v12) )
      {
        if ( !v7 )
          goto LABEL_20;
        if ( v12 >= (unsigned int)v7->fields.uniqueId )
          goto LABEL_21;
        if ( *((_BYTE *)&v7->fields.userSvtId.fields.currentCryptoKey + v12) )
          break;
        targetSvt = this->fields.targetSvt;
        if ( !targetSvt )
          goto LABEL_20;
        targetSvt = (BattleServantData_o *)BattleServantData__isUseSelfSkill(targetSvt, v12, 0);
        if ( ((unsigned __int8)targetSvt & 1) == 0 )
          break;
      }
      LODWORD(v9) = v10->fields.uniqueId;
      v11 = (__int64)++v12 >= (int)v9;
      if ( (__int64)v12 >= (int)v9 )
        return v11;
    }
    this->fields.invalidType = 1;
  }
  return v11;
}


void BattleLogicFunctionProcess_SubFieldIndividualityCheck___ctor(
        BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_SubFieldIndividualityCheck__AddBuff(
        BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *v7; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v17; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_8;
  v7 = this;
  this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this
    || (this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)DataVals__GetTargetList((DataVals_o *)this, 0),
        !buffData)
    || (buffData->fields.generalParams = (struct System_Int32_array *)this,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&buffData->fields.generalParams,
          (int32_t)this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)v7->fields.targetSvt) == 0)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0),
        (v17 = v7->fields._funcUnit_k__BackingField) == 0)
    || (procArg_k__BackingField = v17->fields._procArg_k__BackingField) == 0 )
  {
LABEL_8:
    sub_2213CDC(this, actBuffData);
  }
  procArg_k__BackingField->fields.updateField = 1;
}


void BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck___ctor(
        BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck___ctor(
        BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck__AddBuff(
        BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v10; // x23
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x25
  BattleBuffData_FieldChangeData_o *v13; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x5
  struct BattleBuffData_FieldChangeData_o *fieldChangeData; // x8

  v10 = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this;
  if ( (byte_5973C4E & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)sub_2213A60(&BattleBuffData_FieldChangeData_TypeInfo);
    byte_5973C4E = 1;
  }
  funcUnit_k__BackingField = v10->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v13 = (BattleBuffData_FieldChangeData_o *)sub_2213CCC(BattleBuffData_FieldChangeData_TypeInfo);
  BattleBuffData_FieldChangeData___ctor_52844536(v13, dataVals_k__BackingField, 0);
  if ( !buffData
    || (buffData->fields.fieldChangeData = v13,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&buffData->fields.fieldChangeData,
          (int32_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        buffData->fields.delAfterProcType = 1,
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(
          v10,
          actBuffData,
          buffData,
          fieldFlag,
          isChangeMaxHpFlag,
          v20),
        (fieldChangeData = buffData->fields.fieldChangeData) == 0) )
  {
LABEL_7:
    sub_2213CDC(this, actBuffData);
  }
  fieldChangeData->fields.buffUniqueId = buffData->fields.addOrder;
}


void BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleLogicFunctionProcess_FunctionTargetCheck_o *BattleLogicFunctionProcess_ToFieldCommonFunctionProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_5973C6B & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
    byte_5973C6B = 1;
  }
  v4 = (Il2CppObject *)sub_2213CCC(BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
  System_Object___ctor(v4, 0);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v4;
}


void BattleLogicFunctionProcess_ToFieldFunctionTargetCheck___ctor(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData_o *v2; // x19

  if ( (byte_5973C50 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_FieldBuffData_TypeInfo);
    byte_5973C50 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_2213CCC(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_5973C51 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_5973C51 = 1;
  }
  v2 = (Il2CppObject *)sub_2213CCC(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
  System_Object___ctor(v2, 0);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
}


void BattleLogicFunctionProcess_ToFieldOverwriteBattleClassCheck___ctor(
        BattleLogicFunctionProcess_ToFieldOverwriteBattleClassCheck_o *this,
        const MethodInfo *method)
{
  this->fields.OverwriteClassId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_ToFieldOverwriteBattleClassCheck__AddBuff(
        BattleLogicFunctionProcess_ToFieldOverwriteBattleClassCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  if ( !buffData )
    sub_2213CDC(this, actBuffData);
  buffData->fields.param = this->fields.OverwriteClassId;
  BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(
    (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this,
    actBuffData,
    buffData,
    fieldFlag,
    isChangeMaxHpFlag,
    method);
}


bool BattleLogicFunctionProcess_ToFieldOverwriteBattleClassCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_ToFieldOverwriteBattleClassCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_5973C4F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_5626/*"ENABLE_OVERWRITE_CLASS_IDS"*/);
    byte_5973C4F = 1;
  }
  if ( BattleLogicFunctionProcess_CommonAddStateTargetCheck__TryGetOverwriteClassId(
         (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this,
         &this->fields.OverwriteClassId,
         (const MethodInfo *)buffEnt) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v7);
    if ( ConstantStrMaster__ExistValueArray(
           (ConstantStrMaster_o *)Master_object,
           (System_String_o *)StringLiteral_5626/*"ENABLE_OVERWRITE_CLASS_IDS"*/,
           this->fields.OverwriteClassId,
           0) )
    {
      return 1;
    }
  }
  this->fields.invalidType = 1;
  return 0;
}


void BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck___ctor(
        BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck__AddBuff(
        BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v7; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x5
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v19; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  v7 = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this;
  this = (BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this
    || (this = (BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *)DataVals__GetTargetList(
                                                                                   (DataVals_o *)this,
                                                                                   0),
        !buffData)
    || (buffData->fields.generalParams = (struct System_Int32_array *)this,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&buffData->fields.generalParams,
          (int32_t)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(
          v7,
          actBuffData,
          buffData,
          fieldFlag,
          isChangeMaxHpFlag,
          v18),
        (v19 = v7->fields._funcUnit_k__BackingField) == 0)
    || (procArg_k__BackingField = v19->fields._procArg_k__BackingField) == 0 )
  {
LABEL_7:
    sub_2213CDC(this, actBuffData);
  }
  procArg_k__BackingField->fields.updateField = 1;
}


void BattleLogicFunctionProcess_TransformServantProcess___ctor(
        BattleLogicFunctionProcess_TransformServantProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_TransformServantProcess__CheckConditionPartial(
        BattleLogicFunctionProcess_TransformServantProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        DataVals_o *baseVals,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleLogicFunctionProcess_TransformServantProcess_o *v9; // x21

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_13;
  if ( !funcTarget )
    goto LABEL_13;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_13;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)BattleData__getServantData(
                                                                   (BattleData_o *)this,
                                                                   funcTarget->fields._targetId_k__BackingField,
                                                                   0);
  if ( !this )
    goto LABEL_13;
  v9 = this;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)*((_QWORD *)this + 35);
  if ( !this )
    goto LABEL_13;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)ServantEntity__isInvalidSkillShift(
                                                                   (ServantEntity_o *)this,
                                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_12;
  if ( !baseVals )
LABEL_13:
    sub_2213CDC(this, action);
  if ( DataVals__isParam(baseVals, 6, 0) && DataVals__GetParam(baseVals, 6, 0, 0) != HIDWORD(v9[8].monitor)
    || DataVals__IsCancelTransform(baseVals, 0) )
  {
    return 1;
  }
LABEL_12:
  funcTarget->fields.invalidType = 1;
  return 0;
}


void BattleLogicFunctionProcess_WrapTargetData___ctor(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicFunctionProcess_WrapTargetData__GetAddBaseValue(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  return 0;
}


void BattleLogicFunctionProcess_WrapTargetData__Init(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.funcTarget = funcTarget;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)funcTarget,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ((void (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))this->klass->vtable._5_InitPartial.methodPtr)(
    this,
    this->klass->vtable._5_InitPartial.method);
}


void BattleLogicFunctionProcess_WrapTargetData__InitPartial(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  ;
}


DataVals_o *BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0 )
    sub_2213CDC(this, method);
  return funcUnit_k__BackingField->fields._dataVals_k__BackingField;
}


BattleData_o *BattleLogicFunctionProcess_WrapTargetData__get_Data(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField) == 0 )
  {
    sub_2213CDC(this, method);
  }
  return logic_k__BackingField->fields.data;
}


BattleLogicFunctionProcess_FunctionUnitCheck_o *BattleLogicFunctionProcess_WrapTargetData__get_FuncUnit(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget )
    sub_2213CDC(this, method);
  return funcTarget->fields._funcUnit_k__BackingField;
}


BattleLogicFunction_o *BattleLogicFunctionProcess_WrapTargetData__get_LogicFunc(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0 )
    sub_2213CDC(this, method);
  return funcUnit_k__BackingField->fields._logic_k__BackingField;
}


void BattleLogicFunctionProcess_WrapTargetField___ctor(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_WrapTargetField__CheckBuffAvoid(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, buffIndiv);
  return BattleFieldEnvironmentData__CheckBuffAvoid(target, buffIndiv, opSvt, 0);
}


bool BattleLogicFunctionProcess_WrapTargetField__CheckDisableForciblyAddStateBuffAvoid(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  return 0;
}


float BattleLogicFunctionProcess_WrapTargetField__DefaultMagnification(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_String_o **text,
        float resVal,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  *text = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)text, 0, (System_String_o *)method, v4, v5, v6, v7, v8);
  return resVal;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BattleLogicFunctionProcess_WrapTargetField__GetBuffIndividualities(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target || (target = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(target, 0)) == 0 )
    sub_2213CDC(target, isActiveOnly);
  return BattleBuffData__getBuffIndividualities(
           (BattleBuffData_o *)target,
           isActiveOnly,
           isIncludeIgnoreIndiv,
           isIgnoreIndivUnreleaseable,
           0,
           0,
           0);
}


float BattleLogicFunctionProcess_WrapTargetField__GetBuffTOLERANCEMagnification(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  *missText = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)missText,
    0,
    (System_String_o *)opSvt,
    (System_String_o *)missText,
    (int32_t)method,
    v5,
    v6,
    v7);
  return 0.0;
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetField__GetBuffTargetCardIndexArray(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  if ( (byte_5973C52 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973C52 = 1;
  }
  return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
}


int32_t BattleLogicFunctionProcess_WrapTargetField__GetCommandCardIndex(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  return -1;
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetField__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  return ((System_Int32_array *(__fastcall *)(struct BattleFieldEnvironmentData_o *, _QWORD, __int64, const MethodInfo *))target->klass->vtable._4_GetFieldIndividuality.methodPtr)(
           target,
           0,
           1,
           target->klass->vtable._4_GetFieldIndividuality.method);
}


float BattleLogicFunctionProcess_WrapTargetField__GetOptBuffGRANTSTATEMagnification(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        bool upOnly,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BattleFieldEnvironmentData_o *target; // x0

  if ( BattleLogicFunctionProcess_WrapTargetField__IsNormalAddStateToFieldFunc(this, (const MethodInfo *)buffIndiv) )
  {
    target = this->fields.target;
    if ( !target
      || (target = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__GetFieldAndBuffIndividuality(
                                                     target,
                                                     1,
                                                     0,
                                                     0),
          !opSvt) )
    {
      sub_2213CDC(target, v11);
    }
    return BattleServantData__getBuffGRANTSTATEMagnification_53475444(
             opSvt,
             buffIndiv,
             0,
             (System_Int32_array *)target,
             missText,
             upOnly,
             0);
  }
  else
  {
    *missText = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)missText, 0, v12, v13, v14, v15, v16, v17);
    return 0.0;
  }
}


int32_t BattleLogicFunctionProcess_WrapTargetField__GetSameIndividualityBuffSum(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *indiv,
        bool isActiveOnly,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target || (target = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(target, 0)) == 0 )
    sub_2213CDC(target, indiv);
  return BattleBuffData__getSameIndivualityBuffSum((BattleBuffData_o *)target, indiv, isActiveOnly, 0, 0, 0);
}


void BattleLogicFunctionProcess_WrapTargetField__InitPartial(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x1

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data )
    sub_2213CDC(0, v4);
  FieldEnvData_k__BackingField = Data->fields._FieldEnvData_k__BackingField;
  this->fields.target = FieldEnvData_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.target,
    (int32_t)FieldEnvData_k__BackingField,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool BattleLogicFunctionProcess_WrapTargetField__IsNormalAddStateToFieldFunc(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0 )
  {
    sub_2213CDC(this, method);
  }
  return (dataVals_k__BackingField->fields.funcType & 0xFFFFFFFE) == 160;
}


bool BattleLogicFunctionProcess_WrapTargetField__IsSatisfyTargetDefeatPointCondtion(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool BattleLogicFunctionProcess_WrapTargetField__IsSatisfyTargetRessurectableCondtion(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 1;
}


BattleBuffData_o *BattleLogicFunctionProcess_WrapTargetField__get_BuffData(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  return BattleFieldEnvironmentData__get_BuffData(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetField__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool BattleLogicFunctionProcess_WrapTargetField__get_CheckField(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool BattleLogicFunctionProcess_WrapTargetField__get_CheckPlayer(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool BattleLogicFunctionProcess_WrapTargetField__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool BattleLogicFunctionProcess_WrapTargetField__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool BattleLogicFunctionProcess_WrapTargetField__get_IsNoTarget(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool BattleLogicFunctionProcess_WrapTargetField__get_IsShiftableServant(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool BattleLogicFunctionProcess_WrapTargetField__get_IsUseDefeatPointReady(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


void BattleLogicFunctionProcess_WrapTargetServant___ctor(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__CheckBuffAvoid(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, buffIndiv);
  return BattleServantData__checkBuffAvoid(target, buffIndiv, opSvt, 0, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__CheckDisableForciblyAddStateBuffAvoid(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, buffIndiv);
  return BattleServantData__CheckDisableForciblyAddStateBuffAvoid(target, buffIndiv, opSvt, 0);
}


int32_t BattleLogicFunctionProcess_WrapTargetServant__GetAddBaseValue(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_o *LogicFunc; // x20
  const MethodInfo *v4; // x1
  DataVals_o *BaseVals; // x0
  __int64 v6; // x1

  LogicFunc = BattleLogicFunctionProcess_WrapTargetData__get_LogicFunc(
                (BattleLogicFunctionProcess_WrapTargetData_o *)this,
                method);
  BaseVals = BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
               (BattleLogicFunctionProcess_WrapTargetData_o *)this,
               v4);
  if ( !LogicFunc )
    sub_2213CDC(BaseVals, v6);
  return BattleLogicFunction__GetAddCondParamValue(LogicFunc, BaseVals, this->fields.target, 0);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BattleLogicFunctionProcess_WrapTargetServant__GetBuffIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target || (this = (BattleLogicFunctionProcess_WrapTargetServant_o *)target->fields.buffData) == 0 )
    sub_2213CDC(this, isActiveOnly);
  return BattleBuffData__getBuffIndividualities(
           (BattleBuffData_o *)this,
           isActiveOnly,
           isIncludeIgnoreIndiv,
           isIgnoreIndivUnreleaseable,
           0,
           0,
           0);
}


float BattleLogicFunctionProcess_WrapTargetServant__GetBuffTOLERANCEMagnification(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, buffIndiv);
  return BattleServantData__getBuffTOLERANCEMagnification(target, buffIndiv, opSvt, missText, 0);
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetServant__GetBuffTargetCardIndexArray(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x19
  DataVals_o *BaseVals; // x0
  __int64 v4; // x1

  target = this->fields.target;
  BaseVals = BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
               (BattleLogicFunctionProcess_WrapTargetData_o *)this,
               method);
  if ( !target )
    sub_2213CDC(BaseVals, v4);
  return BattleServantData__GetBuffTargetCardIndexArray(target, BaseVals, 0);
}


int32_t BattleLogicFunctionProcess_WrapTargetServant__GetCommandCardIndex(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, userCommandCodeId);
  return BattleServantData__GetCommandCardIndex(target, userCommandCodeId, 0);
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetServant__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  return BattleServantData__getIndividualities(target, 0, 1, 0, 1, 0);
}


float BattleLogicFunctionProcess_WrapTargetServant__GetOptBuffGRANTSTATEMagnification(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        bool upOnly,
        const MethodInfo *method)
{
  if ( !opSvt )
    sub_2213CDC(this, buffIndiv);
  return BattleServantData__getBuffGRANTSTATEMagnification(opSvt, buffIndiv, this->fields.target, missText, upOnly, 0);
}


int32_t BattleLogicFunctionProcess_WrapTargetServant__GetSameIndividualityBuffSum(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *indiv,
        bool isActiveOnly,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, indiv);
  return BattleServantData__getSameIndiualityBuffSum(target, indiv, isActiveOnly, 0, 0, 0);
}


void BattleLogicFunctionProcess_WrapTargetServant__InitPartial(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  __int64 v4; // x1
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleServantData_o *ServantData; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || !Data )
    sub_2213CDC(Data, v4);
  ServantData = BattleData__getServantData(Data, funcTarget->fields._targetId_k__BackingField, 0);
  this->fields.target = ServantData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.target, (int32_t)ServantData, v7, v8, v9, v10, v11, v12);
}


bool BattleLogicFunctionProcess_WrapTargetServant__IsSatisfyTargetDefeatPointCondtion(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *BaseVals; // x0
  __int64 v4; // x1
  int32_t DefeatPoint; // w0
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  param = 0;
  BaseVals = (BattleServantData_o *)BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
                                      (BattleLogicFunctionProcess_WrapTargetData_o *)this,
                                      method);
  if ( !BaseVals )
    goto LABEL_7;
  if ( DataVals__TryGetParam((DataVals_o *)BaseVals, 148, &param, 0) )
  {
    BaseVals = this->fields.target;
    if ( BaseVals )
    {
      DefeatPoint = BattleServantData__getDefeatPoint(BaseVals, 0);
      return (DefeatPoint > 0) ^ (param < 1);
    }
LABEL_7:
    sub_2213CDC(BaseVals, v4);
  }
  return 1;
}


bool BattleLogicFunctionProcess_WrapTargetServant__IsSatisfyTargetRessurectableCondtion(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  DataVals_o *BaseVals; // x0
  __int64 v4; // x1
  bool exists; // w0
  char v6; // w8
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  param = 0;
  BaseVals = BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
               (BattleLogicFunctionProcess_WrapTargetData_o *)this,
               method);
  if ( !BaseVals )
    goto LABEL_7;
  if ( !DataVals__TryGetParam(BaseVals, 145, &param, 0) )
  {
    v6 = 1;
    return v6 & 1;
  }
  BaseVals = (DataVals_o *)this->fields.target;
  if ( !BaseVals )
LABEL_7:
    sub_2213CDC(BaseVals, v4);
  exists = BattleServantData__ExistsResurrection((BattleServantData_o *)BaseVals, 0);
  v6 = exists ^ (param < 1);
  return v6 & 1;
}


BattleBuffData_o *BattleLogicFunctionProcess_WrapTargetServant__get_BuffData(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  return BattleServantData__get_BuffData(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(this, method);
  return target->fields.isEnemy;
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_CheckField(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_CheckPlayer(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  return BattleServantData__checkPlayer(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  return BattleServantData__isGuts(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  return BattleServantData__isLogicResultAlive(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsNoTarget(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  return this->fields.target == 0;
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsShiftableServant(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_2213CDC(0, method);
  return BattleServantData__isShiftableServant(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsUseDefeatPointReady(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  __int64 v4; // x1

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data || (Data = (BattleData_o *)Data->fields.battleEvent) == 0 )
    sub_2213CDC(Data, v4);
  return ((bool (__fastcall *)(BattleData_o *, struct BattleServantData_o *, _QWORD))Data->klass[1]._2.unity_user_data)(
           Data,
           this->fields.target,
           *(_QWORD *)&Data->klass[1]._2.initializationExceptionGCHandle);
}