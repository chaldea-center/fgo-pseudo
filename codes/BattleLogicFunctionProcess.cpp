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
  int32_t Param; // w22
  char v13; // w23
  __int64 v14; // x21
  __int64 v15; // x20
  const MethodInfo *v16; // x4
  bool TargetUniqueIdArray; // w24
  bool v18; // w26
  System_Collections_Generic_List_int__o *v19; // x25
  System_Int32_array *v20; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x21
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v24; // x29
  System_Collections_Generic_List_int__o *v25; // x28
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v27; // x28
  System_Int32_array *v28; // x29
  System_Int32_array_array *v29; // x29
  int32_t v30; // w19
  int32_t v31; // w21
  int32_t v32; // w20
  System_Int32_array *v33; // x19
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_c *klass; // x10
  __int64 v37; // x12
  unsigned int v38; // w11
  __int64 v39; // x9
  __int64 v40; // x12
  System_Int32_array *v41; // x20
  System_Int32_array_array *v42; // x20
  __int64 v44; // [xsp+8h] [xbp-98h]
  bool v45; // [xsp+10h] [xbp-90h]
  int32_t count; // [xsp+18h] [xbp-88h]
  int32_t countEqual; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t countLower[2]; // [xsp+20h] [xbp-80h] BYREF
  System_Int32_array *targetIdArray; // [xsp+28h] [xbp-78h] BYREF
  System_Int32_array_array *overwriteTvals; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *originalTvals; // [xsp+38h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_4C3AA93 & 1) == 0 )
  {
    sub_1C32C20(&Individuality_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3AA93 = 1;
  }
  overwriteTvals = 0;
  originalTvals = 0;
  *(_QWORD *)countLower = 0;
  targetIdArray = 0;
  countEqual = 0;
  if ( !funcEnt )
    goto LABEL_66;
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
    goto LABEL_66;
  Param = DataVals__GetParam(baseVals, 63, 0, 0);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__isParam(baseVals, 140, 0);
  if ( !wrapTarget )
    goto LABEL_66;
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
  v18 = DataVals__TryGetFuncCheckTargetIndividualityCount(baseVals, &countLower[1], countLower, &countEqual, 0);
  v19 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( TargetUniqueIdArray )
  {
    v45 = TargetUniqueIdArray;
    v20 = targetIdArray;
    if ( !targetIdArray )
      goto LABEL_66;
    max_length = targetIdArray->max_length;
    v44 = v14;
    if ( (int)max_length >= 1 )
    {
      count = 0;
      v22 = 0;
      while ( v22 < (unsigned int)max_length )
      {
        logic_k__BackingField = v10->fields._logic_k__BackingField;
        if ( !logic_k__BackingField )
          goto LABEL_66;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)logic_k__BackingField->fields.data;
        if ( !this )
          goto LABEL_66;
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
            v25 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v25,
              (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__getIndividualities(
                                                                             (BattleServantData_o *)v24,
                                                                             0,
                                                                             1,
                                                                             0,
                                                                             1,
                                                                             0);
            if ( !v25 )
              goto LABEL_66;
            System_Collections_Generic_List_int___AddRange(
              v25,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v24[34].klass;
            if ( !this )
              goto LABEL_66;
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
              (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                             v25,
                                                                             (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v19 )
              goto LABEL_66;
            v27 = this;
            System_Collections_Generic_List_int___AddRange(
              v19,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v18 )
            {
              if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0) )
              {
                v28 = originalTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCount(
                                                                                 (System_Int32_array *)v27,
                                                                                 v28,
                                                                                 0);
              }
              else
              {
                v29 = overwriteTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCountMultiIndividuality(
                                                                                 (System_Int32_array *)v27,
                                                                                 v29,
                                                                                 0);
              }
              count += (int)this;
            }
          }
        }
        LODWORD(max_length) = v20->max_length;
        if ( (__int64)++v22 >= (int)max_length )
          goto LABEL_33;
      }
LABEL_67:
      sub_1C32E84(this);
    }
    count = 0;
LABEL_33:
    v14 = v44;
    TargetUniqueIdArray = v45;
    if ( v18 )
    {
      v30 = countLower[0];
      v31 = countLower[1];
      v32 = countEqual;
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
      return Individuality__IsMatchAboveBelowEqual(count, v31, v30, v32, 0);
    }
  }
  if ( !v14 || !v15 )
LABEL_66:
    sub_1C32E7C(this);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1C32CC8(
                                                                   int___TypeInfo,
                                                                   (unsigned int)(*(_DWORD *)(v15 + 24)
                                                                                + *(_DWORD *)(v14 + 24)));
  if ( !TargetUniqueIdArray )
  {
    v34 = *(_QWORD *)(v14 + 24);
    v33 = (System_Int32_array *)this;
    if ( (int)v34 >= 1 )
    {
      v35 = 0;
      while ( v35 < (unsigned int)v34 )
      {
        if ( !this )
          goto LABEL_66;
        if ( v35 >= LODWORD(this[1].klass) )
          break;
        *((_DWORD *)&this[1].monitor + v35) = *(_DWORD *)(v14 + 32 + 4 * v35);
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_50;
      }
      goto LABEL_67;
    }
    if ( this )
    {
LABEL_50:
      klass = this[1].klass;
      if ( (int)v34 <= (__int64)(int)klass )
        v37 = (int)klass;
      else
        v37 = (int)v34;
      if ( (int)v34 < (__int64)(int)klass )
      {
        v38 = *(_DWORD *)(v15 + 24);
        v39 = 0;
        v40 = v37 - (int)v34;
        while ( (unsigned int)v39 < v38 && (int)v34 + (int)v39 < (unsigned int)klass )
        {
          *((_DWORD *)&this[1].monitor + (int)v34 + v39) = *(_DWORD *)(v15 + 4LL * (int)v39 + 32);
          if ( v40 == ++v39 )
            goto LABEL_58;
        }
        goto LABEL_67;
      }
      goto LABEL_58;
    }
    goto LABEL_66;
  }
  if ( !v19 )
    goto LABEL_66;
  v33 = System_Collections_Generic_List_int___ToArray(
          v19,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_58:
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0) )
  {
    v41 = originalTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedIndividualities(v33, v41, 0);
  }
  else
  {
    v42 = overwriteTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedMultiIndividuality(v33, v42, 0);
  }
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

  if ( (byte_4C3AA92 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
    byte_4C3AA92 = 1;
  }
  v4 = (Il2CppObject *)sub_1C32E6C(BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
  System_Object___ctor(v4, 0);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v4;
}


bool BattleLogicFunctionProcess_BaseFunctionTypeProcess__TryGetTargetUniqueIdArray(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        System_Int32_array **targetIdArray,
        const MethodInfo *method)
{
  __int64 v9; // x0
  int32_t v10; // w20
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleData_o *data; // x22
  int32_t actorId; // w23
  int32_t targetId; // w24
  int32_t PTTargetId; // w0
  System_Int32_array *TargetIds; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  *targetIdArray = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)targetIdArray, 0, (int32_t)actionData, (const MethodInfo *)targetIdArray);
  if ( !baseVals )
    goto LABEL_7;
  v9 = DataVals__GetFuncCheckTargetIndividualityTargetType(baseVals, 0);
  v10 = v9;
  if ( (v9 & 0x80000000) == 0 )
  {
    logic_k__BackingField = this->fields._logic_k__BackingField;
    if ( logic_k__BackingField && actionData )
    {
      data = logic_k__BackingField->fields.data;
      actorId = actionData->fields.actorId;
      targetId = actionData->fields.targetId;
      PTTargetId = BattleActionData__getPTTargetId(actionData, 0);
      TargetIds = Target__getTargetIds(data, actorId, targetId, PTTargetId, v10, 0, 0);
      *targetIdArray = TargetIds;
      sub_1C32BC4((CGThumbnailListItem_o *)targetIdArray, (int32_t)TargetIds, v17, v18);
      return v10 >= 0;
    }
LABEL_7:
    sub_1C32E7C(v9);
  }
  return v10 >= 0;
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
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v8; // x22
  int32_t targetId_k__BackingField; // w23
  FunctionEntity_o *funcEnt; // x25
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x21
  int32_t funcIndex; // w26
  char v14; // w0
  const MethodInfo *v15; // x5
  const MethodInfo *v16; // x1
  bool result; // w0
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8
  struct BattleLogicFunction_o *v20; // x8
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2

  if ( !funcTarget )
    goto LABEL_47;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  funcTarget->fields.invalidType = 0;
  if ( !funcUnit_k__BackingField )
    goto LABEL_47;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_47;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_47;
  v8 = this;
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)procArg_k__BackingField->fields.externalArg;
  if ( !this )
    goto LABEL_47;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleLogicFunction_FunctionArgument__get_IsTimingPassiveOnTransform(
                                                                   (BattleLogicFunction_FunctionArgument_o *)this,
                                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__IsEqualsTo1(
                                                                     dataVals_k__BackingField,
                                                                     158,
                                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
  }
  if ( !WrapTarget_k__BackingField )
    goto LABEL_47;
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
        goto LABEL_47;
      if ( FunctionEntity__isTargetEnemy(funcEnt, 0) )
        goto LABEL_17;
    }
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._9_unknown.methodPtr)(
                                                                     WrapTarget_k__BackingField,
                                                                     WrapTarget_k__BackingField->klass->vtable._9_unknown.method);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_47;
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
                  goto LABEL_47;
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
        action->fields.isSuccessTargetSelection = 1;
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        v14 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._8_unknown.methodPtr)(
                WrapTarget_k__BackingField,
                WrapTarget_k__BackingField->klass->vtable._8_unknown.method);
        BattleActionData__setFuncTargetPlayerType(action, funcIndex, v14 & 1, 0);
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__CheckTargetIndividuality(
                                                                         v8,
                                                                         dataVals_k__BackingField,
                                                                         WrapTarget_k__BackingField,
                                                                         funcEnt,
                                                                         action,
                                                                         v15);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          result = 0;
          funcTarget->fields.invalidType = 1;
          return result;
        }
        if ( funcUnit_k__BackingField->fields.questFuncFlg )
        {
          if ( funcUnit_k__BackingField->fields._IsAvoidFuncExec_k__BackingField )
          {
            BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, v16);
            return 0;
          }
          if ( !funcUnit_k__BackingField->fields.isLowestStarFunction )
            goto LABEL_38;
          logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
          if ( !logic_k__BackingField )
            goto LABEL_47;
          data = logic_k__BackingField->fields.data;
          if ( !data )
            goto LABEL_47;
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__CheckFunctionTriggerStar(
                                                                           dataVals_k__BackingField,
                                                                           data->fields.totalCriticalStars,
                                                                           0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_38:
            v20 = v8->fields._logic_k__BackingField;
            if ( v20 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v20->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, targetId_k__BackingField, 0);
                if ( BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
                       (BattleLogicFunctionProcess_FunctionUnitCheck_o *)ServantData,
                       dataVals_k__BackingField,
                       ServantData,
                       v22)
                  && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._24_unknown.methodPtr)(
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
                BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v23);
                return 0;
              }
            }
            goto LABEL_47;
          }
        }
        else if ( !DataVals__isShowQuestNoEffect(dataVals_k__BackingField, 0) )
        {
          return 0;
        }
        result = 0;
        funcTarget->fields.invalidType = 1;
        return result;
      }
LABEL_47:
      sub_1C32E7C(this);
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
  bool result; // w0

  if ( !funcTarget )
    sub_1C32E7C(this);
  result = 1;
  funcTarget->fields.isFixResult = 0;
  return result;
}


bool BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkExecutable(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  if ( !funcTarget )
    sub_1C32E7C(this);
  funcTarget->fields.isFixResult = 1;
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *))this->klass->vtable._6_checkCommonCondition.methodPtr)(this)
      & 1) != 0 )
    return ((__int64 (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))this->klass->vtable._7_checkCondition.methodPtr)(
             this,
             action,
             funcTarget,
             this->klass->vtable._7_checkCondition.method);
  else
    return 0;
}


BattleData_o *BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_1C32E7C(this);
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
  const MethodInfo *v3; // x3

  this->fields._logic_k__BackingField = logic;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)logic, (int32_t)method, v3);
}


void BattleLogicFunctionProcess_BaseFunctionTypeProcess__set_logic(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logic_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v9 = this;
  if ( (byte_4C3AA79 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_1C32C20(&BattleBuffData_ChangeBgmData_TypeInfo);
    byte_4C3AA79 = 1;
  }
  if ( !buffData
    || (buffData->fields.delAfterProcType = 3,
        (this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)v9->fields.targetSvt) == 0)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0),
        (targetSvt = v9->fields.targetSvt) == 0)
    || (funcUnit_k__BackingField = v9->fields._funcUnit_k__BackingField) == 0 )
  {
    sub_1C32E7C(this);
  }
  uniqueId = targetSvt->fields.uniqueId;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v14 = (BattleBuffData_ChangeBgmData_o *)sub_1C32E6C(BattleBuffData_ChangeBgmData_TypeInfo);
  BattleBuffData_ChangeBgmData___ctor_45708020(v14, uniqueId, buffData, dataVals_k__BackingField, 0);
  buffData->fields.changeBgmData = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&buffData->fields.changeBgmData, (int32_t)v14, v15, v16);
}


void BattleLogicFunctionProcess_ChangeBgmCheck__AfterAddBuffProc(
        BattleLogicFunctionProcess_ChangeBgmCheck_o *this,
        BattleActionData_o *mainAction,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_ChangeBgmCheck_o *v8; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  BattleData_o *data; // x1
  BattleBuffData_ChangeBgmData_o *changeBgmData; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x20
  BattleActionEffect_ChangeBgmBuff_o *v16; // x20

  v8 = this;
  if ( (byte_4C3AA7A & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_1C32C20(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    byte_4C3AA7A = 1;
  }
  funcUnit_k__BackingField = v8->fields._funcUnit_k__BackingField;
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
        this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)BattleBuffData_ChangeBgmData__MakeBgmGenerator(
                                                                buffData->fields.changeBgmData,
                                                                data,
                                                                0);
        if ( FieldEnvData_k__BackingField )
        {
          ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, BattleLogicFunctionProcess_ChangeBgmCheck_o *, __int64, _QWORD, const MethodInfo *))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.methodPtr)(
            FieldEnvData_k__BackingField,
            this,
            2,
            0,
            FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method);
          v16 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1C32E6C(BattleActionEffect_ChangeBgmBuff_TypeInfo);
          BattleActionEffect_ChangeBgmBuff___ctor(v16, 0);
          if ( actBuffData )
          {
            BattleActionData_BuffData__SetActionEffectProc(actBuffData, (BattleActionEffect_Base_o *)v16, 0);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1C32E7C(this);
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
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v6; // x29
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x27
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x23
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x25
  FunctionEntity_o *funcEnt; // x22
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v13; // x26
  struct System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_c *klass; // x22
  BuffEntity_o *v16; // x24
  System_Int32_array *ParamArray; // x0
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v19; // x28
  bool isDisabledBuff; // w22
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  struct BattleLogicFunction_o *v24; // x8
  int32_t v25; // w1
  BattleData_o *v26; // x3
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x3
  int Param; // w29
  const MethodInfo *v30; // x1
  int32_t v31; // w22
  bool result; // w0
  float v33; // s0
  float v34; // s0
  int32_t v35; // w26
  const MethodInfo *v36; // x3
  __int64 v37; // x26
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x4
  int32_t v40; // w8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t Value; // w0
  System_Int32_array *vals; // x21
  int32_t v45; // w23
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v46; // x22
  struct System_String_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t Next; // [xsp+0h] [xbp-70h]
  int32_t targetId; // [xsp+4h] [xbp-6Ch]
  __int64 v52; // [xsp+8h] [xbp-68h] BYREF

  v6 = this;
  if ( (byte_4C3AA95 & 1) == 0 )
  {
    sub_1C32C20(&Individuality_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_12357/*"STATUS_UP_BUFF"*/);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C32C20(&StringLiteral_2774/*"BATTLE_GUARD_FUNCTION"*/);
    byte_4C3AA95 = 1;
  }
  v52 = 0;
  if ( !funcTarget )
    goto LABEL_78;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_78;
  logic_k__BackingField = v6->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_78;
  if ( !action )
    goto LABEL_78;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_78;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  targetId = funcTarget->fields._targetId_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleData__getServantData(
                                                                 (BattleData_o *)this,
                                                                 action->fields.actorId,
                                                                 0);
  if ( !dataVals_k__BackingField )
    goto LABEL_78;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v13 = this;
  ((void (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))funcTarget->klass->vtable._17_InitPrevCheckCondition.methodPtr)(
    funcTarget,
    action,
    WrapTarget_k__BackingField,
    funcTarget->klass->vtable._17_InitPrevCheckCondition.method);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetCardIndex(dataVals_k__BackingField, 0);
  if ( ((unsigned int)this & 0x80000000) == 0
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetCardIndividuality(
                                                                       dataVals_k__BackingField,
                                                                       0),
        ((unsigned int)this & 0x80000000) == 0) )
  {
    CardIdsIndexList_k__BackingField = funcTarget->fields._CardIdsIndexList_k__BackingField;
    if ( !CardIdsIndexList_k__BackingField )
      goto LABEL_78;
    if ( CardIdsIndexList_k__BackingField->fields._size <= 0 )
    {
LABEL_56:
      result = 0;
      v40 = 1;
LABEL_57:
      funcTarget->fields.invalidType = v40;
      return result;
    }
  }
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_78;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                 (BattleLogicFunction_o *)this,
                                                                 funcEnt,
                                                                 0);
  if ( !this
    || (klass = this[2].klass,
        v16 = (BuffEntity_o *)this,
        ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 112, 0),
        this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)CommonFunction__JoinIndiv(
                                                                       (System_Int32_array *)klass,
                                                                       ParamArray,
                                                                       0),
        !procArg_k__BackingField)
    || (externalArg = procArg_k__BackingField->fields.externalArg) == 0
    || (v19 = this, (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField) == 0) )
  {
LABEL_78:
    sub_1C32E7C(this);
  }
  isDisabledBuff = BattleLogicFunction__isDisabledBuff(
                     (BattleLogicFunction_o *)this,
                     externalArg->fields.isPassive,
                     dataVals_k__BackingField,
                     0);
  if ( isDisabledBuff )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__IsForciblyAddState(
                                                                   dataVals_k__BackingField,
                                                                   0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_28;
    if ( !WrapTarget_k__BackingField )
      goto LABEL_78;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._23_unknown.methodPtr)(
                                                                   WrapTarget_k__BackingField,
                                                                   v19,
                                                                   v13,
                                                                   WrapTarget_k__BackingField->klass->vtable._23_unknown.method);
  }
  else
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
    if ( !this )
      goto LABEL_78;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__isFailDependentLastResult(
                                                                   (BattleLogicFunction_o *)this,
                                                                   procArg_k__BackingField,
                                                                   targetId,
                                                                   dataVals_k__BackingField,
                                                                   0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_37;
    if ( !WrapTarget_k__BackingField )
      goto LABEL_78;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._17_unknown.methodPtr)(
                                                                   WrapTarget_k__BackingField,
                                                                   v19,
                                                                   v13,
                                                                   WrapTarget_k__BackingField->klass->vtable._17_unknown.method);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      v22);
    return 0;
  }
LABEL_28:
  v24 = v6->fields._logic_k__BackingField;
  if ( !v24 )
    goto LABEL_78;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
                                                                 procArg_k__BackingField,
                                                                 targetId,
                                                                 dataVals_k__BackingField,
                                                                 v24->fields.data,
                                                                 v21);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_37;
  if ( !v6->fields._logic_k__BackingField )
    goto LABEL_78;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
          procArg_k__BackingField,
          v25,
          dataVals_k__BackingField,
          v26,
          v27) )
    goto LABEL_37;
  Param = DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0);
  if ( (Param & 0x80000000) == 0 )
    goto LABEL_35;
  if ( !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField->fields.funcIndex,
          v28) )
  {
LABEL_37:
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      dataVals_k__BackingField,
      v23);
    return 0;
  }
  Param = BattleUtility__Abs_46278504(Param, 0);
LABEL_35:
  v52 = 0;
  Next = BattleRandom__getNext(1000, 0);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(
                                                                 funcUnit_k__BackingField,
                                                                 v30);
  if ( Param > 99999 )
  {
    v31 = Param;
    goto LABEL_50;
  }
  if ( isDisabledBuff )
  {
    v31 = Param;
    if ( !DataVals__isParam(dataVals_k__BackingField, 113, 0) )
      goto LABEL_50;
  }
  else if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !WrapTarget_k__BackingField )
      goto LABEL_78;
    v33 = ((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64 *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._18_unknown.methodPtr)(
            WrapTarget_k__BackingField,
            v19,
            v13,
            &v52,
            WrapTarget_k__BackingField->klass->vtable._18_unknown.method);
    Next = BattleUtility__FloorToInt((float)(v33 * 1000.0) + (float)Next, 0);
  }
  if ( v13 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__isParam(dataVals_k__BackingField, 113, 0);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_78;
    v34 = (float)(((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64 *, _QWORD, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._22_unknown.methodPtr)(
                    WrapTarget_k__BackingField,
                    v19,
                    v13,
                    &v52,
                    (unsigned __int8)this & 1,
                    WrapTarget_k__BackingField->klass->vtable._22_unknown.method)
                * 1000.0)
        + (float)Param;
  }
  else
  {
    v34 = (float)Param;
  }
  v31 = BattleUtility__FloorToInt(v34, 0);
LABEL_50:
  if ( DataVals__isSameBuffLimit(dataVals_k__BackingField, 0) )
  {
    v35 = DataVals__GetParam(dataVals_k__BackingField, 40, 0, 0);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetSameBuffLimitTargetIndividuality(
                                                                   dataVals_k__BackingField,
                                                                   0);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_78;
    if ( ((int (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._19_unknown.methodPtr)(
           WrapTarget_k__BackingField,
           this,
           1,
           WrapTarget_k__BackingField->klass->vtable._19_unknown.method) >= v35 )
    {
      result = 0;
      funcTarget->fields.invalidType = 1;
      return result;
    }
  }
  v37 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, _QWORD, const MethodInfo *))funcTarget->klass->vtable._13_GetConvertBuffEntity.methodPtr)(
          funcTarget,
          (unsigned int)action->fields.actorId,
          funcTarget->klass->vtable._13_GetConvertBuffEntity.method);
  if ( !v37 )
  {
    v38 = BuffEntity__isCheckGroup(v16, 0);
    if ( v38
      && BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
           (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v38,
           funcTarget,
           v16,
           WrapTarget_k__BackingField,
           v39) )
    {
      goto LABEL_56;
    }
  }
  if ( Param < 0
    && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField->fields.funcIndex,
          v36) )
  {
    v31 = -1000;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BuffEntity_o *, const MethodInfo *))funcTarget->klass->vtable._19_CheckBuffCondtion.methodPtr)(
          funcTarget,
          action,
          v16,
          funcTarget->klass->vtable._19_CheckBuffCondtion.method)
      & 1) == 0 )
    return 0;
  if ( Next >= v31 )
  {
    funcTarget->fields.invalidText = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&funcTarget->fields.invalidText, 0, v41, v42);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_12357/*"STATUS_UP_BUFF"*/, 0);
    if ( Next < 1000 )
    {
LABEL_76:
      result = 0;
      v40 = 2;
      goto LABEL_57;
    }
    vals = v16->fields.vals;
    v45 = Value;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C32CC8(int___TypeInfo, 1);
    if ( this )
    {
      v46 = this;
      if ( !LODWORD(this[1].klass) )
        sub_1C32E84(this);
      LODWORD(this[1].monitor) = v45;
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
      if ( !Individuality__CheckIndividualities(vals, (System_Int32_array *)v46, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2774/*"BATTLE_GUARD_FUNCTION"*/, 0);
        funcTarget->fields.invalidText = v47;
        sub_1C32BC4((CGThumbnailListItem_o *)&funcTarget->fields.invalidText, (int32_t)v47, v48, v49);
      }
      goto LABEL_76;
    }
    goto LABEL_78;
  }
  if ( v37
    && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._14_CheckConvertBuffData.methodPtr)(
          funcTarget,
          v37,
          funcTarget->klass->vtable._14_CheckConvertBuffData.method)
      & 1) == 0 )
  {
    result = 0;
    v40 = 3;
    goto LABEL_57;
  }
  return 1;
}


bool BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *funcTarget,
        BuffEntity_o *buffEnt,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateProcess_c *klass; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v9; // x22
  unsigned __int64 v10; // x24
  int32_t v11; // w23
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x8

  if ( (byte_4C3AA96 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C3AA96 = 1;
  }
  if ( !funcTarget )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcTarget->fields._AttachTargetList_k__BackingField;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_20;
  klass = this[1].klass;
  v9 = this;
  if ( (int)klass >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)klass )
        sub_1C32E84(this);
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
      LODWORD(klass) = v9[1].klass;
      if ( (__int64)++v10 >= (int)klass )
        goto LABEL_15;
    }
LABEL_20:
    sub_1C32E7C(this);
  }
LABEL_15:
  if ( (byte_4C3AA6F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C3AA6F = 1;
  }
  AttachTargetList_k__BackingField = funcTarget->fields._AttachTargetList_k__BackingField;
  return !AttachTargetList_k__BackingField || AttachTargetList_k__BackingField->fields._size < 1;
}


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
  if ( (byte_4C3AA97 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C32C20(&BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo);
    byte_4C3AA97 = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v5->fields._logic_k__BackingField) == 0
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                       (BattleLogicFunction_o *)this,
                                                                       dataVals_k__BackingField->fields.funcEnt,
                                                                       0)) == 0 )
  {
    sub_1C32E7C(this);
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
          v9 = sub_1C32E6C(*v8);
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
  v9 = sub_1C32E6C(BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo);
  *(_DWORD *)(v9 + 108) = -1;
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

  if ( (byte_4C3AA94 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo);
    byte_4C3AA94 = 1;
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


void BattleLogicFunctionProcess_CommonAddStateTargetCheck___ctor(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck__ApplyPrevSaveBuffData(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3AA73 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C3AA73 = 1;
  }
  CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField
    || (CardIdsIndexList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       CardIdsIndexList_k__BackingField,
                                                                                       (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__),
        !buff)
    || (buff->fields.servantCardIdsIndexArray = (struct System_Int32_array *)CardIdsIndexList_k__BackingField,
        sub_1C32BC4(
          (CGThumbnailListItem_o *)&buff->fields.servantCardIdsIndexArray,
          (int32_t)CardIdsIndexList_k__BackingField,
          v6,
          v7),
        (CardIdsIndexList_k__BackingField = this->fields._AttachTargetList_k__BackingField) == 0) )
  {
    sub_1C32E7C(CardIdsIndexList_k__BackingField);
  }
  v8 = System_Collections_Generic_List_int___ToArray(
         CardIdsIndexList_k__BackingField,
         (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  buff->fields.attachTargets = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&buff->fields.attachTargets, (int32_t)v8, v9, v10);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_int__o *v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_int__o *v16; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int32_t v20; // w1
  System_Action_int__o *v21; // x21

  if ( (byte_4C3AA71 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_int___);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__);
    sub_1C32C20(&BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
    byte_4C3AA71 = 1;
  }
  v9 = sub_1C32E6C(BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v9 + 16) = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v13, v14, v15);
  if ( userCommandCodeId >= 1 )
  {
    if ( !wrapTarget )
      goto LABEL_17;
    v16 = *(System_Collections_Generic_List_int__o **)(v9 + 16);
    result = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, const MethodInfo *))wrapTarget->klass->vtable._21_unknown.methodPtr)(
                                     wrapTarget,
                                     userCommandCodeId,
                                     wrapTarget->klass->vtable._21_unknown.method);
    if ( !v16 )
      goto LABEL_17;
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_int__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_17;
    size = v16->fields._size;
    v20 = (_DWORD)result + 101;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v16,
        v20,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = size + 1;
      items->m_Items[size] = v20;
    }
  }
  v21 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
    0);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)cardIdsIndexArray,
    (System_Action_T__o *)v21,
    (const MethodInfo_30C8780 *)Method_BasicHelper_ForEach_int___);
  result = *(System_Int32_array **)(v9 + 16);
  if ( !result )
    goto LABEL_17;
  if ( SLODWORD(result->max_length) > 0 )
    return System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)result,
             (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  result = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 1);
  if ( !result )
LABEL_17:
    sub_1C32E7C(result);
  if ( !LODWORD(result->max_length) )
    sub_1C32E84(result);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int64_t userCommandCodeId; // x21
  System_Int32_array *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  System_Collections_Generic_List_int__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  v6 = this;
  if ( (byte_4C3AA70 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3AA70 = 1;
  }
  if ( !wrapTarget
    || (v7 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass->vtable._20_unknown.methodPtr)(
                                                              wrapTarget,
                                                              wrapTarget->klass->vtable._20_unknown.method,
                                                              wrapTarget,
                                                              method),
        v8 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_58175596(
          v8,
          v7,
          (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240),
        v6->fields._CardIdsIndexList_k__BackingField = v8,
        p_CardIdsIndexList_k__BackingField = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **)&v6->fields._CardIdsIndexList_k__BackingField,
        sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields._CardIdsIndexList_k__BackingField, (int32_t)v8, v10, v11),
        !action)
    || (this = *p_CardIdsIndexList_k__BackingField) == 0 )
  {
    sub_1C32E7C(this);
  }
  userCommandCodeId = action->fields.userCommandCodeId;
  v13 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)this,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, System_Int32_array *, const MethodInfo *))v6->klass->vtable._18_GetAttachTargetArray.methodPtr)(
                                                         v6,
                                                         wrapTarget,
                                                         userCommandCodeId,
                                                         v13,
                                                         v6->klass->vtable._18_GetAttachTargetArray.method);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58175596(
    v15,
    v14,
    (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
  v6->fields._AttachTargetList_k__BackingField = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields._AttachTargetList_k__BackingField, (int32_t)v15, v16, v17);
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t attachTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0

  if ( (byte_4C3AA72 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Remove__);
    byte_4C3AA72 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField
    || (System_Collections_Generic_List_int___Remove(
          AttachTargetList_k__BackingField,
          attachTarget,
          (const MethodInfo_377CC94 *)Method_System_Collections_Generic_List_int__Remove__),
        (AttachTargetList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField) == 0) )
  {
    sub_1C32E7C(AttachTargetList_k__BackingField);
  }
  System_Collections_Generic_List_int___Remove(
    AttachTargetList_k__BackingField,
    attachTarget - 101,
    (const MethodInfo_377CC94 *)Method_System_Collections_Generic_List_int__Remove__);
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

  if ( (byte_4C3AA6F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C3AA6F = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  return AttachTargetList_k__BackingField && AttachTargetList_k__BackingField->fields._size > 0;
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck__set_AttachTargetList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AttachTargetList_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._AttachTargetList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck__set_CardIdsIndexList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CardIdsIndexList_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._CardIdsIndexList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0___ctor(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


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
  if ( (byte_4C3AA74 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C3AA74 = 1;
  }
  if ( !v4->fields.__4__this
    || (this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)v4->fields.targetList) == 0
    || (targetList = this->fields.targetList,
        v6 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(this->fields.__4__this),
        !targetList) )
  {
    sub_1C32E7C(this);
  }
  _4__this_low = SLODWORD(this->fields.__4__this);
  v8 = index + 101;
  if ( (unsigned int)_4__this_low >= targetList->fields._size )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      v8,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v6; // x26
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // x29
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w28
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x27
  struct BattleLogicFunction_o *v12; // x8
  BattleServantData_o *v13; // x20
  const MethodInfo *v14; // x1
  FunctionEntity_o *funcEnt; // x24
  BattleServantData_o *v16; // x22
  int v17; // w23
  const MethodInfo *v18; // x2
  char v19; // w0
  float BuffResistDelayNPTurn; // s0
  struct System_String_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_String_o *v25; // x1
  struct System_String_o **p_invalidText; // x19
  const MethodInfo *v27; // x1
  System_Int32_array *vals; // x24
  float BuffTOLERANCESUBSTATEMagnification; // s0
  bool isDisplayLastFuncInvalid; // [xsp+1Ch] [xbp-64h] BYREF

  v6 = this;
  if ( (byte_4C3AA98 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1C32C20(&StringLiteral_2774/*"BATTLE_GUARD_FUNCTION"*/);
    byte_4C3AA98 = 1;
  }
  if ( !funcTarget )
    goto LABEL_52;
  funcUnit = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit )
    goto LABEL_52;
  logic_k__BackingField = v6->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_52;
  if ( !action )
    goto LABEL_52;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_52;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     action->fields.actorId,
                                                                     0);
  v12 = v6->fields._logic_k__BackingField;
  if ( !v12 )
    goto LABEL_52;
  v13 = (BattleServantData_o *)this;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v12->fields.data;
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     targetId_k__BackingField,
                                                                     0);
  if ( !dataVals_k__BackingField )
    goto LABEL_52;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v16 = (BattleServantData_o *)this;
  isDisplayLastFuncInvalid = 0;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(
                                                                     funcUnit,
                                                                     v14);
  if ( !v6->fields._logic_k__BackingField )
    goto LABEL_52;
  v17 = (int)this;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunction__checkFuncAction(
                                                                     v6->fields._logic_k__BackingField,
                                                                     procArg_k__BackingField,
                                                                     action->fields.actorId,
                                                                     targetId_k__BackingField,
                                                                     0,
                                                                     funcEnt,
                                                                     dataVals_k__BackingField,
                                                                     action->fields.treasureDvcId > 0,
                                                                     &isDisplayLastFuncInvalid,
                                                                     funcUnit,
                                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v6->fields._logic_k__BackingField;
    if ( this )
    {
      if ( !BattleLogicFunction__checkNoActionCondition(
              (BattleLogicFunction_o *)this,
              targetId_k__BackingField,
              funcEnt,
              0) )
      {
        v19 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, DataVals_o *, BattleLogicFunction_ProcListInArgs_o *, const MethodInfo *))v6->klass->vtable._9_CheckConditionPartial.methodPtr)(
                v6,
                action,
                funcTarget,
                dataVals_k__BackingField,
                procArg_k__BackingField,
                v6->klass->vtable._9_CheckConditionPartial.method);
        return v19 & 1;
      }
LABEL_18:
      v19 = 0;
      return v19 & 1;
    }
    goto LABEL_52;
  }
  if ( isDisplayLastFuncInvalid )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v18);
    goto LABEL_18;
  }
  if ( !funcEnt )
LABEL_52:
    sub_1C32E7C(this);
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(7, funcEnt->fields.funcType, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(8, funcEnt->fields.funcType, 0),
        ((unsigned __int8)this & 1) != 0) )
  {
    if ( v16 )
    {
      if ( BattleServantData__checkPlayer(v16, 0) )
      {
        v19 = 0;
        funcTarget->fields.invalidType = 2;
        return v19 & 1;
      }
      goto LABEL_18;
    }
    goto LABEL_52;
  }
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(19, funcEnt->fields.funcType, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(20, funcEnt->fields.funcType, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(13, funcEnt->fields.funcType, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_52;
        if ( BattleServantData__checkAvoidInstantDeath(v16, v13, 0) )
        {
          BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, v27);
          goto LABEL_18;
        }
      }
      this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(2, funcEnt->fields.funcType, 0);
      v25 = 0;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_50;
      vals = funcEnt->fields.vals;
      if ( v13 )
      {
        if ( (v17 & 1) != 0 )
        {
          v25 = 0;
LABEL_50:
          funcTarget->fields.invalidText = v25;
          p_invalidText = &funcTarget->fields.invalidText;
          *((_DWORD *)p_invalidText - 2) = 2;
LABEL_51:
          sub_1C32BC4((CGThumbnailListItem_o *)p_invalidText, (int32_t)v25, v23, v24);
          goto LABEL_18;
        }
      }
      else
      {
        this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)DataVals__isParam(
                                                                           dataVals_k__BackingField,
                                                                           75,
                                                                           0);
        v25 = 0;
        if ( ((v17 | (unsigned int)this) & 1) != 0 )
          goto LABEL_50;
      }
      if ( !v16 )
        goto LABEL_52;
      BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(v16, vals, v13, 0);
      v25 = 0;
      if ( BuffTOLERANCESUBSTATEMagnification > 0.0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2774/*"BATTLE_GUARD_FUNCTION"*/, 0);
      }
      goto LABEL_50;
    }
  }
  if ( !v16 )
    goto LABEL_52;
  if ( !v16->fields.isEnemy )
    goto LABEL_18;
  funcTarget->fields.invalidType = 2;
  if ( !FuncList__Check(20, funcEnt->fields.funcType, 0) )
    goto LABEL_18;
  BuffResistDelayNPTurn = BattleServantData__getBuffResistDelayNPTurn(v16, v13, 0);
  v19 = 0;
  if ( BuffResistDelayNPTurn > 0.0 && ((v17 ^ 1) & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2774/*"BATTLE_GUARD_FUNCTION"*/, 0);
    LODWORD(v25) = (_DWORD)v22;
    funcTarget->fields.invalidText = v22;
    p_invalidText = &funcTarget->fields.invalidText;
    goto LABEL_51;
  }
  return v19 & 1;
}


void BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(
        BattleLogicFunctionProcess_DependFunctionUnitCheck_o *this,
        BattleLogicFunction_o *logic,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  BattleLogicFunctionProcess_FunctionUnitCheck___ctor(
    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
    logic,
    procArg,
    (const MethodInfo *)dataVal);
  this->fields._dataVals_k__BackingField = dataVal;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._dataVals_k__BackingField, (int32_t)dataVal, v7, v8);
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
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v8; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x22
  System_Func_object__object__o *v10; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v14; // x8
  const MethodInfo *v15; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v16; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isPassive; // w21

  v8 = this;
  if ( (byte_4C3AA80 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_4C3AA80 = 1;
  }
  if ( !v8->fields.grantType )
  {
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(
                                                                      v8,
                                                                      (const MethodInfo *)actBuffData);
    if ( !buffData
      || !this
      || (this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleFieldEnvironmentData__SubBuffFromType(
                                                                            (BattleFieldEnvironmentData_o *)this,
                                                                            buffData->fields.buffId,
                                                                            0,
                                                                            0)) == 0
      || (funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField) == 0 )
    {
LABEL_19:
      sub_1C32E7C(this);
    }
    if ( SLODWORD(funcUnit_k__BackingField->fields._procArg_k__BackingField) >= 1 )
    {
      v10 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
      System_Func_object__object____ctor(
        v10,
        (Il2CppObject *)v8,
        Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__,
        0);
      v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)funcUnit_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)v10,
                                                                   (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
      this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                        v11,
                                                                        (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
      if ( !actBuffData )
        goto LABEL_19;
      actBuffData->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1C32BC4((CGThumbnailListItem_o *)&actBuffData->fields.removeBuffList, (int32_t)this, v12, v13);
    }
  }
  v14 = v8->fields._funcUnit_k__BackingField;
  if ( !v14 )
    goto LABEL_19;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)v14->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_19;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 109, 0);
  if ( !buffData )
    goto LABEL_19;
  buffData->fields.isRemoveFieldBuffActorDeath = (unsigned __int8)this & 1;
  v16 = v8->fields._funcUnit_k__BackingField;
  if ( !v16 )
    goto LABEL_19;
  procArg_k__BackingField = v16->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_19;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_19;
  isPassive = externalArg->fields.isPassive;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(
                                                                    v8,
                                                                    v15);
  if ( !this )
    goto LABEL_19;
  BattleFieldEnvironmentData__AddFieldBuff((BattleFieldEnvironmentData_o *)this, buffData, !isPassive, 0);
}


bool BattleLogicFunctionProcess_FieldAddStateTargetCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  __int64 v6; // x20
  BattleFieldEnvironmentData_o *BuffData; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  bool v11; // w21
  System_Int32_array *GrantBuffTypeArray; // x22
  System_Func_int__bool__o *v13; // x23

  if ( (byte_4C3AA7F & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__);
    sub_1C32C20(&BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
    byte_4C3AA7F = 1;
  }
  v6 = sub_1C32E6C(BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = buffEnt;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), (int32_t)buffEnt, v8, v9);
  if ( this->fields.grantType != 1 )
    return 1;
  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v10);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0)) == 0 )
  {
LABEL_11:
    sub_1C32E7C(BuffData);
  }
  v11 = 1;
  GrantBuffTypeArray = BattleBuffData__GetGrantBuffTypeArray((BattleBuffData_o *)BuffData, 1, 1, 0);
  v13 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v13,
    (Il2CppObject *)v6,
    Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
    0);
  if ( BasicHelper__Any_int__51143952(
         GrantBuffTypeArray,
         (System_Func_T__bool__o *)v13,
         (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168) )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return v11;
}


System_Int32_array *BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetAttachTargetArray(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        int64_t userCommandCodeId,
        System_Int32_array *cardIdsIndexArray,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4C3AA7E & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3AA7E = 1;
  }
  result = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 1);
  if ( !result )
    sub_1C32E7C(0);
  if ( !LODWORD(result->max_length) )
    sub_1C32E84(result);
  result->m_Items[0] = 10001;
  return result;
}


int32_t BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetGrantType(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  if ( !baseVals )
    sub_1C32E7C(this);
  return DataVals__GetParam(baseVals, 110, 0, 0);
}


void BattleLogicFunctionProcess_FieldAddStateTargetCheck__Init(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  BattleLogicFunctionProcess_FunctionTargetCheck__Init(
    (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
    targetId,
    funcUnit,
    method);
  if ( !funcUnit || (dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField) == 0 )
    sub_1C32E7C(dataVals_k__BackingField);
  this->fields.grantType = DataVals__GetParam(dataVals_k__BackingField, 110, 0, 0);
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData_o *v2; // x19

  if ( (byte_4C3AA81 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_FieldBuffData_TypeInfo);
    byte_4C3AA81 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_1C32E6C(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4C3AA82 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_4C3AA82 = 1;
  }
  v2 = (Il2CppObject *)sub_1C32E6C(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
  System_Object___ctor(v2, 0);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
}


BattleBuffData_BuffData_o *BattleLogicFunctionProcess_FieldAddStateTargetCheck___AddBuff_b__8_0(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *BuffData; // x0

  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, (const MethodInfo *)buff);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0)) == 0 )
  {
    sub_1C32E7C(BuffData);
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
    sub_1C32E7C(this);
  }
  return data->fields._FieldEnvData_k__BackingField;
}


void BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___ctor(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___CheckBuffCondtion_b__0(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_1C32E7C(this);
  return buffEnt->fields.type == type;
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  }
  return BattleLogicFunction__GetBuffEntity((BattleLogicFunction_o *)this, dataVals_k__BackingField->fields.funcEnt, 0);
}


System_String_o *BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields._funcUnit_k__BackingField )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  BattleLogicFunctionProcess_FunctionTargetCheck_c *klass; // x8
  struct BattleLogicFunctionProcess_WrapTargetData_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x0

  this->fields._targetId_k__BackingField = targetId;
  this->fields._funcUnit_k__BackingField = funcUnit;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)funcUnit, (int32_t)funcUnit, method);
  klass = this->klass;
  this->fields._result_k__BackingField = 0;
  v6 = (struct BattleLogicFunctionProcess_WrapTargetData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))klass->vtable._11_MakeWrapTarget.methodPtr)(
                                                               this,
                                                               klass->vtable._11_MakeWrapTarget.method);
  this->fields._WrapTarget_k__BackingField = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._WrapTarget_k__BackingField, (int32_t)v6, v7, v8);
  WrapTarget_k__BackingField = this->fields._WrapTarget_k__BackingField;
  if ( !WrapTarget_k__BackingField )
    sub_1C32E7C(0);
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
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(FuncSideEffectArg_k__BackingField, v6, 0);
  result_k__BackingField = v6->fields._result_k__BackingField;
  if ( !v6->fields._result_k__BackingField )
  {
    this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(
                                                                 v6,
                                                                 (const MethodInfo *)mainAction);
    if ( mainAction )
    {
      BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0);
      return result_k__BackingField;
    }
LABEL_10:
    sub_1C32E7C(this);
  }
  return result_k__BackingField;
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v2; // x19

  if ( (byte_4C3AA6D & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_BuffData_TypeInfo);
    byte_4C3AA6D = 1;
  }
  v2 = (BattleActionData_BuffData_o *)sub_1C32E6C(BattleActionData_BuffData_TypeInfo);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C3AA6E & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
    byte_4C3AA6E = 1;
  }
  v2 = (Il2CppObject *)sub_1C32E6C(BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
  System_Object___ctor(v2, 0);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
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
    sub_1C32E7C(this);
  }
  DataVals__SetInvalidCauseByAnyBuff(dataVals_k__BackingField, this->fields._targetId_k__BackingField, 0);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  Il2CppType *v5; // x21
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *TypeFromHandle; // x0
  System_Type_o *v8; // x21
  int32_t DisplayLastFuncInvalidType; // w20
  __int64 v10; // x2
  __int64 v11; // x3
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v12; // x0
  BattleActionData_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4C3AA6C & 1) == 0 )
  {
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&BattleLogicFunctionProcess_FuncInvalidType_var);
    sub_1C32C20(&BattleLogicFunctionProcess_FuncInvalidType_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    byte_4C3AA6C = 1;
  }
  v5 = BattleLogicFunctionProcess_FuncInvalidType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = (intptr_t)v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  if ( !baseVals )
    goto LABEL_11;
  v8 = TypeFromHandle;
  DisplayLastFuncInvalidType = DataVals__GetDisplayLastFuncInvalidType(baseVals, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  TypeFromHandle = (System_Type_o *)System_Enum__ToObject_65254664(v8, DisplayLastFuncInvalidType, 0);
  if ( !TypeFromHandle )
LABEL_11:
    sub_1C32E7C(TypeFromHandle);
  if ( TypeFromHandle->klass->_1.element_class == BattleLogicFunctionProcess_FuncInvalidType_TypeInfo->_1.element_class )
  {
    this->fields.invalidType = *(_DWORD *)j_il2cpp_object_unbox_0(
                                            TypeFromHandle,
                                            BattleLogicFunctionProcess_FuncInvalidType_TypeInfo,
                                            v10,
                                            v11);
  }
  else
  {
    sub_1C3313C(TypeFromHandle);
    BattleLogicFunctionProcess_FunctionTargetCheck__IsExecutable(v12, v13, v14);
  }
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
  struct DataVals_o *dataVals_k__BackingField; // x9
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  if ( !funcProc )
    goto LABEL_8;
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
      dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
      if ( dataVals_k__BackingField )
      {
        procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
        if ( procArg_k__BackingField )
        {
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            procArg_k__BackingField,
            v4->fields._targetId_k__BackingField,
            (unsigned __int8)this & 1,
            dataVals_k__BackingField->fields.funcIndex,
            v5);
          return;
        }
      }
    }
LABEL_8:
    sub_1C32E7C(this);
  }
}


BattleActionData_o *BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    sub_1C32E7C(0);
  return BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(funcUnit_k__BackingField, this, v2);
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
    sub_1C32E7C(this);
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
  const MethodInfo *v3; // x3

  this->fields._WrapTarget_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._WrapTarget_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__set_funcUnit(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._funcUnit_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C3AA88 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
    byte_4C3AA88 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToOtherList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.linkedToOtherList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToSelfList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.linkedToSelfList, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._logic_k__BackingField = logic;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)logic, v13, v14);
  this->fields._procArg_k__BackingField = procArg;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._procArg_k__BackingField, (int32_t)procArg, v15, v16);
  this->fields._result_k__BackingField = 0;
  v17 = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)sub_1C32CC8(
                                                                         BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                                                         0);
  this->fields._funcTargetArray_k__BackingField = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._funcTargetArray_k__BackingField, (int32_t)v17, v18, v19);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // kr00_16
  int32_t v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4C3AA91 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3AA91 = 1;
  }
  if ( !baseVals )
    sub_1C32E7C(this);
  if ( !DataVals__isParam(baseVals, 180, 0) )
    return 1;
  if ( targetSvtData )
  {
    v7 = *(_QWORD *)&targetSvtData->fields.friendship.fields.currentCryptoKey;
    v6 = *(_QWORD *)&targetSvtData->fields.friendship.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    v7 = *(_QWORD *)&v9.fields.currentCryptoKey;
    v6 = *(_QWORD *)&v9.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v11, 0);
  return DataVals__IsMatchFriendShipCondition(baseVals, v10, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v6; // x19
  DataVals_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_ICollection_o *TargetTypeIndexArray; // x20
  System_Func_int__bool__o *v14; // x21

  if ( (byte_4C3AA8F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_All_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__);
    sub_1C32C20(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_TypeInfo);
    byte_4C3AA8F = 1;
  }
  v6 = sub_1C32E6C(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = baseVals,
        sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), (int32_t)baseVals, v8, v9),
        *(_QWORD *)(v6 + 24) = targetSvtData,
        sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 24), (int32_t)targetSvtData, v10, v11),
        (v7 = *(DataVals_o **)(v6 + 16)) == 0) )
  {
    sub_1C32E7C(v7);
  }
  TargetTypeIndexArray = (System_Collections_ICollection_o *)DataVals__GetTargetTypeIndexArray(v7, 178, 0);
  if ( BasicHelper__IsNullOrEmpty(TargetTypeIndexArray, 0) )
    return 1;
  if ( !*(_QWORD *)(v6 + 24) )
    return 0;
  v14 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v6,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__,
    0);
  return System_Linq_Enumerable__All_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)TargetTypeIndexArray,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_30E7248 *)Method_System_Linq_Enumerable_All_int___);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVal,
        int32_t actorId,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v6; // x20
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  bool isEnemyID; // w0
  struct BattleLogicFunction_o *v9; // x8
  int32_t v10; // w1
  bool existParamNum; // [xsp+Ch] [xbp-24h] BYREF

  existParamNum = 0;
  if ( !baseVal )
    goto LABEL_12;
  v6 = this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__CheckAssertStrParam(
                                                             baseVal,
                                                             134,
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
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetTriggeredFieldCountTargetFlag(
                                                             baseVal,
                                                             isEnemyID,
                                                             0);
  if ( (_DWORD)this )
  {
    v9 = v6->fields._logic_k__BackingField;
    if ( v9 )
    {
      v10 = (int)this;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v9->fields.data;
      if ( this )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleData__GetFieldAliveLogicServantArray(
                                                                   (BattleData_o *)this,
                                                                   v10,
                                                                   0,
                                                                   0);
        if ( this )
        {
          LOBYTE(this) = DataVals__IsSatisfyAboveBelowCondition(
                           baseVal,
                           134,
                           (int32_t)this->fields._procArg_k__BackingField,
                           0);
          return (unsigned __int8)this & 1;
        }
      }
    }
LABEL_12:
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  if ( DataVals__CheckAssertStrParam(baseVals, 177, &existParamNum, 0) )
  {
    if ( targetSvtData )
    {
      NpChargeStage = BattleServantData__getNpChargeStage(targetSvtData, 0);
      return DataVals__IsSatisfyAboveBelowCond(baseVals, 177, NpChargeStage - 1, 0x7FFFFFFF, 0);
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
    sub_1C32E7C(0);
  if ( DataVals__TryGetParam(baseVals, 236, &param, 0) )
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


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  int32_t v6; // w0
  _BOOL4 IsSatisfyAboveBelowCondition; // w22
  int32_t MaxHp; // w0
  int32_t v9; // w21
  int v10; // w0
  _BOOL4 v11; // w8
  bool existParamNum[4]; // [xsp+Ch] [xbp-24h] BYREF

  existParamNum[0] = 0;
  if ( !baseVals )
    goto LABEL_13;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__CheckAssertStrParam(
                                                             baseVals,
                                                             138,
                                                             existParamNum,
                                                             0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !targetSvtData )
      goto LABEL_13;
    v6 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
           targetSvtData,
           targetSvtData->klass->vtable._13_get_resultHp.method);
    IsSatisfyAboveBelowCondition = DataVals__IsSatisfyAboveBelowCondition(baseVals, 138, v6, 0);
  }
  else
  {
    IsSatisfyAboveBelowCondition = 1;
  }
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__CheckAssertStrParam(
                                                             baseVals,
                                                             139,
                                                             existParamNum,
                                                             0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = 1;
    goto LABEL_11;
  }
  if ( !targetSvtData )
LABEL_13:
    sub_1C32E7C(this);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0);
  if ( MaxHp )
  {
    v9 = MaxHp;
    v10 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))targetSvtData->klass->vtable._13_get_resultHp.methodPtr)(
            targetSvtData,
            targetSvtData->klass->vtable._13_get_resultHp.method);
    v11 = DataVals__IsSatisfyAboveBelowCondition(baseVals, 139, 1000 * v10 / v9, 0);
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
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v6; // x20
  System_Collections_ICollection_o *ParamArray; // x21
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  int32_t StartingPosition; // w1

  v6 = this;
  if ( (byte_4C3AA90 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C3AA90 = 1;
  }
  if ( !baseVals )
    goto LABEL_11;
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(baseVals, 179, 0);
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
                 (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
LABEL_11:
    sub_1C32E7C(this);
  }
  return 0;
}


AddBgmArgument_o *BattleLogicFunctionProcess_FunctionUnitCheck__MakeAddBgmArgument(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x19
  AddBgmArgument_o *v4; // x20

  if ( (byte_4C3AA87 & 1) == 0 )
  {
    sub_1C32C20(&AddBgmArgument_TypeInfo);
    byte_4C3AA87 = 1;
  }
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  v4 = (AddBgmArgument_o *)sub_1C32E6C(AddBgmArgument_TypeInfo);
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
    sub_1C32E7C(this);
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
  System_Object_array *funcTargetArray_k__BackingField; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C3AA8B & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1C32C20(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0__checkFuncTargetResult_b__0__);
    sub_1C32C20(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_TypeInfo);
    byte_4C3AA8B = 1;
  }
  v7 = sub_1C32E6C(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = targetId;
  *(_BYTE *)(v7 + 20) = result;
  funcTargetArray_k__BackingField = (System_Object_array *)this->fields._funcTargetArray_k__BackingField;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0__checkFuncTargetResult_b__0__,
    0);
  return BasicHelper__Any_object__51144764(
           funcTargetArray_k__BackingField,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_30C683C *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *linkedToSelfList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  int v11; // w19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3AA8E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_4C3AA8E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  linkedToSelfList = (System_Collections_Generic_List_object__o *)this->fields.linkedToSelfList;
  if ( !linkedToSelfList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    linkedToSelfList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    do
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
      if ( !v6 )
      {
        v11 = 6;
        goto LABEL_13;
      }
      current = v14.fields._current;
      if ( !v14.fields._current )
        sub_1C32E7C(v6);
      klass = v14.fields._current[2].klass;
      if ( !klass )
        sub_1C32E7C(0);
    }
    while ( DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed((DataVals_o *)klass, 0) );
    if ( !BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
            (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
            action,
            v9) )
      break;
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      this,
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
      v10);
  }
  v11 = 5;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
  return v11 != 5;
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__checkSelfCondtion(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x20
  DataVals_o *dataVals_k__BackingField; // x21
  FunctionEntity_o *funcEnt; // x22
  bool v7; // w8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleServantData_o *ServantData; // x23
  struct BattleLogicFunction_o *v10; // x8
  struct BattleData_o *data; // x24
  _BOOL4 endbattleFlg; // w25
  char v13; // w25
  char v14; // w8
  struct BattleLogicFunction_o *v15; // x8
  struct BattleData_o *v16; // x24
  bool loseBattleFlg; // w25
  struct BattleLogicFunction_o *v18; // x8
  struct BattleData_o *v19; // x24
  bool winBattleNotRelatedSurvivalStatus; // w25
  const MethodInfo *v21; // x2
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v22; // x24
  struct BattleLogicFunction_o *v23; // x8
  System_Int32_array *QuestIndividualities; // x25
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleLogicFunction_o *v27; // x8
  struct BattleData_o *v28; // x8
  System_Collections_Generic_HashSet_int__o *FuncEventExceptedHash_k__BackingField; // x0
  const MethodInfo *v30; // x3
  _BOOL8 v31; // x0
  const MethodInfo *v32; // x3
  _BOOL8 v33; // x0
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x3
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v40; // x8
  int32_t Param; // w23
  const MethodInfo *v42; // x1
  bool v43; // zf
  Target_BattleTargetArgs_o *args; // x23
  struct BattleLogicFunction_o *v45; // x8
  int32_t targetId; // w26
  int32_t PTTargetId; // w0
  int32_t targetType; // w27
  int32_t taskActorType; // w28
  bool checkRevengeId; // w29
  int32_t v51; // w24
  System_Int32_array *ValsList; // x25
  bool IsIncludeIgnoreIndividuality; // w0
  struct BattleLogicFunction_ProcListInArgs_o *v54; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v55; // x2
  struct BattleLogicFunction_ProcListInArgs_o *v56; // x8
  struct BattleLogicFunction_FunctionArgument_o *v57; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v58; // x22
  struct BattleLogicFunction_o *v59; // x8
  struct BattleData_o *v60; // x8
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  int v63; // w8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v64; // x21
  int v65; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v66; // x22
  const MethodInfo *v67; // x3
  int32_t actorId; // [xsp+24h] [xbp-6Ch]
  BattleData_o *bdata; // [xsp+28h] [xbp-68h]

  v4 = this;
  if ( (byte_4C3AA8D & 1) == 0 )
  {
    sub_1C32C20(&Target_BattleTargetArgs_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C32C20(&Individuality_TypeInfo);
    byte_4C3AA8D = 1;
  }
  dataVals_k__BackingField = v4->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_72;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_72;
  v7 = FuncList__Check(0, funcEnt->fields.funcType, 0);
  this = 0;
  if ( v7 )
    return (char)this;
  logic_k__BackingField = v4->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_72;
  if ( !action )
    goto LABEL_72;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_72;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FuncList__Check(26, funcEnt->fields.funcType, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    action->fields.isSuccessTargetSelection = 1;
  v10 = v4->fields._logic_k__BackingField;
  if ( !v10 )
    goto LABEL_72;
  data = v10->fields.data;
  if ( !data )
    goto LABEL_72;
  endbattleFlg = data->fields.endbattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsEndBattle(dataVals_k__BackingField, 0);
  v13 = endbattleFlg;
  if ( ((unsigned __int8)this & 1) != 0
    || (v13 &= (unsigned __int8)this ^ 1,
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0),
        ((unsigned __int8)this & 1) != 0) )
  {
    v14 = 1;
  }
  else
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                               dataVals_k__BackingField,
                                                               0);
    v14 = (unsigned __int8)this & 1;
  }
  data->fields.endbattleFlg = v14 | v13;
  v15 = v4->fields._logic_k__BackingField;
  if ( !v15 )
    goto LABEL_72;
  v16 = v15->fields.data;
  if ( !v16 )
    goto LABEL_72;
  loseBattleFlg = v16->fields.loseBattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0);
  v16->fields.loseBattleFlg = loseBattleFlg | (unsigned __int8)this & 1;
  v18 = v4->fields._logic_k__BackingField;
  if ( !v18 )
    goto LABEL_72;
  v19 = v18->fields.data;
  if ( !v19 )
    goto LABEL_72;
  winBattleNotRelatedSurvivalStatus = v19->fields.winBattleNotRelatedSurvivalStatus;
  v19->fields.winBattleNotRelatedSurvivalStatus = winBattleNotRelatedSurvivalStatus
                                                | DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                    dataVals_k__BackingField,
                                                    0);
  v4->fields.questFuncFlg = 1;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FunctionEntity__getQuestTargetValues(funcEnt, 0);
  if ( !this )
    goto LABEL_72;
  v22 = this;
  if ( this->fields._procArg_k__BackingField )
  {
    v23 = v4->fields._logic_k__BackingField;
    if ( !v23 )
      goto LABEL_72;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v23->fields.data;
    if ( !this )
      goto LABEL_72;
    QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0);
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
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
    goto LABEL_72;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_72;
  if ( externalArg->fields.isPassive )
  {
    v27 = v4->fields._logic_k__BackingField;
    if ( !v27 )
      goto LABEL_72;
    v28 = v27->fields.data;
    if ( !v28 )
      goto LABEL_72;
    FuncEventExceptedHash_k__BackingField = v28->fields._FuncEventExceptedHash_k__BackingField;
    if ( FuncEventExceptedHash_k__BackingField
      && FuncEventExceptedHash_k__BackingField->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           FuncEventExceptedHash_k__BackingField,
           funcEnt->fields.id,
           (const MethodInfo_3649914 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      goto LABEL_58;
    }
  }
  if ( !BattleActionData__IsSelectedAddTargetIndex(action, dataVals_k__BackingField, 0) )
    goto LABEL_58;
  v31 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
          v4,
          dataVals_k__BackingField,
          action->fields.actorId,
          v30);
  if ( !v31 )
    goto LABEL_58;
  v33 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyOverChargeStageRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v31,
          dataVals_k__BackingField,
          ServantData,
          v32);
  if ( !v33 )
    goto LABEL_58;
  if ( !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v33,
          dataVals_k__BackingField,
          ServantData,
          v34) )
    goto LABEL_58;
  v36 = BattleLogicFunctionProcess_FunctionUnitCheck__IsStartingPositionCondition(
          v4,
          dataVals_k__BackingField,
          ServantData,
          v35);
  if ( !v36 )
    goto LABEL_58;
  v38 = BattleLogicFunctionProcess_FunctionUnitCheck__IsFriendShipCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v36,
          dataVals_k__BackingField,
          ServantData,
          v37);
  if ( !v38
    || !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfySupportSvtExec(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v38,
          dataVals_k__BackingField,
          ServantData,
          v39) )
  {
    goto LABEL_58;
  }
  if ( DataVals__checkActSet(dataVals_k__BackingField, 0) )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__getActSet(dataVals_k__BackingField, 0);
    v40 = v4->fields._procArg_k__BackingField;
    if ( !v40 )
      goto LABEL_72;
    if ( (_DWORD)this != v40->fields.actSetId )
    {
LABEL_58:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  if ( !DataVals__isParam(dataVals_k__BackingField, 130, 0)
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 130, 0, 0),
        v43 = Param == BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(v4, v42),
        LOBYTE(this) = 0,
        v43) )
  {
    if ( DataVals__IsSatisfyCommonReleaseId(dataVals_k__BackingField, 0) )
    {
      args = (Target_BattleTargetArgs_o *)sub_1C32E6C(Target_BattleTargetArgs_TypeInfo);
      Target_BattleTargetArgs___ctor(args, dataVals_k__BackingField, 0);
      v45 = v4->fields._logic_k__BackingField;
      if ( v45 )
      {
        bdata = v45->fields.data;
        targetId = action->fields.targetId;
        actorId = action->fields.actorId;
        PTTargetId = BattleActionData__getPTTargetId(action, 0);
        targetType = funcEnt->fields.targetType;
        taskActorType = action->fields.taskActorType;
        checkRevengeId = action->fields.checkRevengeId;
        v51 = PTTargetId;
        ValsList = DataVals__GetValsList(dataVals_k__BackingField, 84, 0);
        IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(dataVals_k__BackingField, 0);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Target__getTargetIds_40355556(
                                                                   bdata,
                                                                   actorId,
                                                                   targetId,
                                                                   v51,
                                                                   targetType,
                                                                   taskActorType,
                                                                   checkRevengeId,
                                                                   ValsList,
                                                                   IsIncludeIgnoreIndividuality,
                                                                   args,
                                                                   0);
        v54 = v4->fields._procArg_k__BackingField;
        if ( v54 )
        {
          v55 = this;
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v54->fields.externalArg;
          if ( this )
          {
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const char *))this->klass[1]._1.name)(
                                                                       this,
                                                                       (unsigned int)funcEnt->fields.targetType,
                                                                       v55,
                                                                       this->klass[1]._1.namespaze);
            v56 = v4->fields._procArg_k__BackingField;
            if ( v56 )
            {
              v57 = v56->fields.externalArg;
              if ( v57 )
              {
                v58 = this;
                this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v57->fields.checkDuplicate;
                if ( this )
                {
                  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, DataVals_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                                                                             this,
                                                                             dataVals_k__BackingField,
                                                                             v58,
                                                                             *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    goto LABEL_58;
                  v59 = v4->fields._logic_k__BackingField;
                  if ( v59 )
                  {
                    v60 = v59->fields.data;
                    if ( v60 )
                    {
                      if ( !DataVals__CheckFunctionTriggerStar(
                              dataVals_k__BackingField,
                              v60->fields.totalCriticalStars,
                              0)
                        && !v4->fields.isLowestStarFunction )
                      {
                        goto LABEL_58;
                      }
                      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
                                                                                 v4,
                                                                                 (System_Int32_array *)v58,
                                                                                 v61);
                      if ( this )
                      {
                        v63 = (int)this->fields._procArg_k__BackingField;
                        v64 = this;
                        if ( v63 < 1 )
                        {
                          LOBYTE(this) = 1;
                          return (char)this;
                        }
                        v65 = 0;
                        while ( 1 )
                        {
                          if ( v65 >= (unsigned int)v63 )
                            sub_1C32E84(this);
                          v66 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)*((_QWORD *)&v64->fields._dataVals_k__BackingField
                                                                                    + v65);
                          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                                     v4,
                                                                                     v62);
                          if ( !v66 )
                            break;
                          BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
                            v66,
                            (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
                            action,
                            v67);
                          v63 = (int)v64->fields._procArg_k__BackingField;
                          ++v65;
                          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(&dword_0 + 1);
                          if ( v65 >= v63 )
                            return (char)this;
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
LABEL_72:
      sub_1C32E7C(this);
    }
    goto LABEL_58;
  }
  return (char)this;
}


BattleActionData_o *BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x21
  BattleActionData_BuffData_o *v5; // x20
  DataVals_o *v6; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v7; // x8
  struct BattleLogicFunction_FunctionArgument_o *v8; // x8
  DataVals_o *dataVals_k__BackingField; // x22
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isCommandSideEffect; // w25
  BattleLogicFunction_o *logic_k__BackingField; // x21
  int32_t targetId_k__BackingField; // w24
  int32_t funcIndex; // w23
  struct DataVals_o *v17; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *v19; // x9

  if ( !funcTarget )
    goto LABEL_22;
  v4 = this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr)(
                                                             funcTarget,
                                                             funcTarget->klass->vtable._8_MakeActionBuffData.method,
                                                             method);
  if ( !v4->fields._dataVals_k__BackingField )
    goto LABEL_22;
  v5 = (BattleActionData_BuffData_o *)this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetOverwriteFuncInvalidType(
                                                             v4->fields._dataVals_k__BackingField,
                                                             funcTarget->fields.invalidType,
                                                             0);
  switch ( (_DWORD)this )
  {
    case 1:
      dataVals_k__BackingField = v4->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        goto LABEL_22;
      procArg_k__BackingField = v4->fields._procArg_k__BackingField;
      if ( !procArg_k__BackingField )
        goto LABEL_22;
      externalArg = procArg_k__BackingField->fields.externalArg;
      if ( !externalArg )
        goto LABEL_22;
      isCommandSideEffect = externalArg->fields.isCommandSideEffect;
      logic_k__BackingField = v4->fields._logic_k__BackingField;
      targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
      funcIndex = dataVals_k__BackingField->fields.funcIndex;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))funcTarget->klass->vtable._5_GetFixNoEffectText.methodPtr)(
                                                                 funcTarget,
                                                                 funcTarget->klass->vtable._5_GetFixNoEffectText.method);
      if ( !logic_k__BackingField )
        goto LABEL_22;
      return BattleLogicFunction__getNoEffectObject(
               logic_k__BackingField,
               targetId_k__BackingField,
               funcIndex,
               dataVals_k__BackingField,
               isCommandSideEffect,
               (System_String_o *)this,
               v5,
               0);
    case 3:
      v17 = v4->fields._dataVals_k__BackingField;
      if ( !v17 )
        goto LABEL_22;
      funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
      if ( !funcUnit_k__BackingField )
        goto LABEL_22;
      v19 = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
      if ( !v19 )
        goto LABEL_22;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._logic_k__BackingField;
      if ( !this )
        goto LABEL_22;
      return BattleLogicFunction__getGrayPopupActionData(
               (BattleLogicFunction_o *)this,
               funcTarget->fields._targetId_k__BackingField,
               v17->fields.funcIndex,
               v19->fields.funcEnt,
               0);
    case 2:
      v6 = v4->fields._dataVals_k__BackingField;
      if ( v6 )
      {
        v7 = v4->fields._procArg_k__BackingField;
        if ( v7 )
        {
          v8 = v7->fields.externalArg;
          if ( v8 )
          {
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._logic_k__BackingField;
            if ( this )
              return BattleLogicFunction__getMissObject(
                       (BattleLogicFunction_o *)this,
                       funcTarget->fields._targetId_k__BackingField,
                       v6->fields.funcIndex,
                       v6,
                       v8->fields.isCommandSideEffect,
                       funcTarget->fields.invalidText,
                       v5,
                       0);
          }
        }
      }
LABEL_22:
      sub_1C32E7C(this);
    default:
      return 0;
  }
}


System_Int32_array *BattleLogicFunctionProcess_FunctionUnitCheck__get_AddIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C32E7C(0);
  return DataVals__GetAddIndividualty(dataVals_k__BackingField, 0);
}


BattleData_o *BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_1C32E7C(this);
  return logic_k__BackingField->fields.data;
}


int32_t BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C32E7C(this);
  return dataVals_k__BackingField->fields.funcIndex;
}


System_Int32_array *BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_funcIndividuality; // x19
  System_Int32_array *funcIndividuality; // x20
  struct DataVals_o *dataVals_k__BackingField; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_funcIndividuality = (CGThumbnailListItem_o *)&this->fields.funcIndividuality;
  funcIndividuality = this->fields.funcIndividuality;
  if ( !funcIndividuality )
  {
    dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
    if ( !dataVals_k__BackingField
      || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)dataVals_k__BackingField->fields.funcEnt) == 0 )
    {
      sub_1C32E7C(this);
    }
    funcIndividuality = FunctionEntity__GetFuncIndividuality((FunctionEntity_o *)this, 0);
    p_funcIndividuality->klass = (CGThumbnailListItem_c *)funcIndividuality;
    sub_1C32BC4(p_funcIndividuality, (int32_t)funcIndividuality, v5, v6);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
  return DataVals__IsAddIndividualty(dataVals_k__BackingField, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddLinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C32E7C(0);
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

  logic_k__BackingField = this->fields._logic_k__BackingField;
  v3 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(this, method);
  if ( !logic_k__BackingField )
    sub_1C32E7C(v3);
  return BattleLogicFunction__IsIgnoreResistFunc(logic_k__BackingField, v3, 0);
}


System_Int32_array *BattleLogicFunctionProcess_FunctionUnitCheck__get_LinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C32E7C(0);
  return DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0);
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
  int max_length; // w21
  __int64 v6; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array **p_funcTargetArray_k__BackingField; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x23
  unsigned int v12; // w24
  __int64 v13; // x25
  int32_t *v14; // x26
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v17; // x24
  Il2CppClass **v18; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v19; // x8
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4C3AA8A & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C32C20(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    byte_4C3AA8A = 1;
  }
  if ( !targetlist )
LABEL_19:
    sub_1C32E7C(this);
  max_length = targetlist->max_length;
  v6 = sub_1C32CC8(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, (unsigned int)max_length);
  v4->fields._funcTargetArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)v6;
  p_funcTargetArray_k__BackingField = &v4->fields._funcTargetArray_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._funcTargetArray_k__BackingField, v6, v8, v9);
  funcTargetArray_k__BackingField = v4->fields._funcTargetArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v12 = 0;
    do
    {
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                 v4,
                                                                 v10);
      if ( v12 >= LODWORD(targetlist->max_length) )
        goto LABEL_18;
      if ( !this )
        goto LABEL_19;
      v13 = (int)v12;
      v14 = &targetlist->m_Items[v12];
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppClass *))this->klass[1]._1.element_class)(
                                                                 this,
                                                                 (unsigned int)*v14,
                                                                 v4,
                                                                 this->klass[1]._1.castClass);
      if ( !funcTargetArray_k__BackingField )
        goto LABEL_19;
      v17 = this;
      if ( this )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C32D5C(
                                                                   this,
                                                                   funcTargetArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v21 = sub_1C32EA0(0);
          sub_1C32D48(v21, 0);
        }
      }
      if ( (unsigned int)v13 >= LODWORD(funcTargetArray_k__BackingField->max_length) )
        goto LABEL_18;
      v18 = &funcTargetArray_k__BackingField->obj.klass + v13;
      v18[4] = (Il2CppClass *)v17;
      sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v15, v16);
      v19 = *p_funcTargetArray_k__BackingField;
      if ( !*p_funcTargetArray_k__BackingField )
        goto LABEL_19;
      if ( (unsigned int)v13 >= LODWORD(v19->max_length) || (unsigned int)v13 >= LODWORD(targetlist->max_length) )
LABEL_18:
        sub_1C32E84(this);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v19->m_Items[v13];
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))this->klass[1]._1.image)(
        this,
        (unsigned int)*v14,
        v4,
        this->klass[1]._1.gc_desc);
      funcTargetArray_k__BackingField = v4->fields._funcTargetArray_k__BackingField;
      v12 = v13 + 1;
    }
    while ( max_length != (_DWORD)v13 + 1 );
  }
  return funcTargetArray_k__BackingField;
}


void BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToOtherResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *linkedToOtherList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  DataVals_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3AA8C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_4C3AA8C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  linkedToOtherList = (System_Collections_Generic_List_object__o *)this->fields.linkedToOtherList;
  if ( !linkedToOtherList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    linkedToOtherList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    if ( !v4 )
      break;
    current = v8.fields._current;
    if ( !v8.fields._current )
      sub_1C32E7C(v4);
    v6 = *(DataVals_o **)((char *)&v8.fields._current->klass + (unsigned __int64)&qword_20);
    if ( !v6 )
      sub_1C32E7C(0);
    if ( !DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed(v6, 0) )
      BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
        this,
        v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *linkedToSelf,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x20
  int max_length; // w8
  unsigned int v6; // w21

  if ( !linkedToSelf )
    goto LABEL_12;
  if ( !linkedToSelf->fields._result_k__BackingField )
    this->fields._result_k__BackingField = 0;
  funcTargetArray_k__BackingField = this->fields._funcTargetArray_k__BackingField;
  if ( !funcTargetArray_k__BackingField )
    goto LABEL_12;
  max_length = funcTargetArray_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C32E84(this);
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
LABEL_12:
    sub_1C32E7C(this);
  }
}


void BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        int32_t *funcIndex,
        int32_t functionId,
        DataVals_o *dataVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  struct DataVals_o **p_dataVals_k__BackingField; // x24
  BattleLogicFunction_o *FuncMaster; // x0
  DataVals_o *v13; // x24
  DataVals_o *dataVals_k__BackingField; // x23

  this->fields._dataVals_k__BackingField = dataVals;
  p_dataVals_k__BackingField = &this->fields._dataVals_k__BackingField;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._dataVals_k__BackingField,
    (int32_t)dataVals,
    functionId,
    (const MethodInfo *)dataVals);
  FuncMaster = (BattleLogicFunction_o *)*(p_dataVals_k__BackingField - 2);
  if ( !FuncMaster )
    goto LABEL_12;
  v13 = *p_dataVals_k__BackingField;
  FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFuncMaster(FuncMaster, 0);
  if ( !v13 )
    goto LABEL_12;
  DataVals__SetDependDataVals(v13, (FunctionMaster_o *)FuncMaster, funcIndex, 0);
  FuncMaster = this->fields._logic_k__BackingField;
  if ( !FuncMaster )
    goto LABEL_12;
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionEntity(FuncMaster, functionId, 0);
  if ( !dataVals_k__BackingField )
    goto LABEL_12;
  DataVals__SetType_41578984(dataVals_k__BackingField, (FunctionEntity_o *)FuncMaster, *funcIndex, 0);
  if ( !dataVals )
    goto LABEL_12;
  FuncMaster = (BattleLogicFunction_o *)Target__IsFuncTargetTypeNoTarget(dataVals->fields.targetType, 0);
  if ( ((unsigned __int8)FuncMaster & 1) == 0 )
    return;
  if ( !actionData )
LABEL_12:
    sub_1C32E7C(FuncMaster);
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
  unsigned int v6; // w24
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v7; // x21
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v9; // x22
  System_Int32_array *AddIndividualty; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  _QWORD *v14; // x9
  __int64 procArg_k__BackingField_low; // x10
  BattleLogicFunction_c **v16; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v17; // x22
  System_Int32_array *LinkageTargetIndividualty; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct BattleLogicFunction_o *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  BattleLogicFunction_c **v24; // x8

  v4 = (BattleLogicFunctionProcess_FunctionUnitCheck_o **)this;
  if ( (byte_4C3AA89 & 1) == 0 )
  {
    sub_1C32C20(&Individuality_TypeInfo);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
    byte_4C3AA89 = 1;
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
        sub_1C32E84(this);
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
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        if ( Individuality__IsPartialMatchArray((System_Int32_array *)v9, AddIndividualty, 0) )
        {
          this = v4[7];
          if ( !this )
            break;
          logic_k__BackingField = this->fields._logic_k__BackingField;
          v14 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !logic_k__BackingField )
            break;
          procArg_k__BackingField_low = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)procArg_k__BackingField_low >= LODWORD(logic_k__BackingField->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v7,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &logic_k__BackingField->klass + procArg_k__BackingField_low;
            LODWORD(this->fields._procArg_k__BackingField) = procArg_k__BackingField_low + 1;
            v16[4] = (BattleLogicFunction_c *)v7;
            sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v7, v11, v12);
          }
        }
        this = v4[4];
        if ( !this )
          break;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetAddIndividualty((DataVals_o *)this, 0);
        if ( !v7->fields._dataVals_k__BackingField )
          break;
        v17 = this;
        LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(v7->fields._dataVals_k__BackingField, 0);
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__IsPartialMatchArray(
                                                                   (System_Int32_array *)v17,
                                                                   LinkageTargetIndividualty,
                                                                   0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v4[8];
          if ( !this )
            break;
          v21 = this->fields._logic_k__BackingField;
          v22 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !v21 )
            break;
          v23 = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)v23 >= LODWORD(v21->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v7,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &v21->klass + v23;
            LODWORD(this->fields._procArg_k__BackingField) = v23 + 1;
            v24[4] = (BattleLogicFunction_c *)v7;
            sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v7, v19, v20);
          }
        }
      }
      max_length = funcUnitArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_32:
    sub_1C32E7C(this);
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
  const MethodInfo *v3; // x3

  this->fields._dataVals_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._dataVals_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_funcTargetArray(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._funcTargetArray_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._funcTargetArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_logic(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logic_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_procArg(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_ProcListInArgs_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._procArg_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._procArg_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_result(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._result_k__BackingField = value;
}


void BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0___checkFuncTargetResult_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields._targetId_k__BackingField == this->fields.targetId
      && this->fields.result == x->fields._result_k__BackingField;
}


void BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0___IsSatisfyBattlePointPhaseRangeCondition_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_o *this,
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
    sub_1C32E7C(targetSvtData);
  }
  return DataVals__IsSatisfyAboveBelowCond(baseVals, 178, (int32_t)targetSvtData, id, 0);
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
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  BuffList_TYPE_array *v6; // x1

  if ( (byte_4C3AA99 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_8787/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/);
    byte_4C3AA99 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_8787/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/,
                                0,
                                0);
  if ( !Instance )
    return (char)Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
  {
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                              (System_Collections_IEnumerable_o *)Instance,
                                                              (const MethodInfo_30EBA3C *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                v5,
                                (const MethodInfo_311C97C *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !targetSvtData
    || (v6 = (BuffList_TYPE_array *)Instance, (Instance = (DataManager_o *)targetSvtData->fields.buffData) == 0)
    || (Instance = (DataManager_o *)BattleBuffData__getBuffList_45459384((BattleBuffData_o *)Instance, v6, 0, 0, 0)) == 0 )
  {
LABEL_13:
    sub_1C32E7C(Instance);
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
  int klass; // w24
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v14; // x0
  const MethodInfo *v15; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8
  bool HasRefuseBuff; // w0
  const MethodInfo *v20; // x3

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
  klass = (int)this[1].klass;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getBuffList(v10, 84, 0, 0, 0);
  if ( !this )
    goto LABEL_18;
  if ( this[1].klass )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, v12);
    BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(v14, v10, v15);
    goto LABEL_11;
  }
  HasRefuseBuff = BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(this, v10, v13);
  if ( klass < 2 || HasRefuseBuff )
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
    sub_1C32E7C(this);
  }
  return BattleLogicFunctionProcess_CommonFunctionTypeProcess__checkCondition(v5, action, funcTarget, v20);
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
  if ( !actBuffData
    || (actBuffData->fields.procType = 6, !buffData)
    || (buffData->fields.param = this->fields.OverwriteClassId,
        (this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)this->fields.targetSvt) == 0) )
  {
    sub_1C32E7C(this);
  }
  BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0);
}


bool BattleLogicFunctionProcess_OverwriteBattleClassCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  int32_t *p_OverwriteClassId; // x20
  ConstantStrMaster_o *Master_object; // x0
  bool result; // w0

  if ( (byte_4C3AA7B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5424/*"ENABLE_OVERWRITE_CLASS_IDS"*/);
    byte_4C3AA7B = 1;
  }
  p_OverwriteClassId = &this->fields.OverwriteClassId;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(
          this,
          &this->fields.OverwriteClassId,
          (const MethodInfo *)buffEnt) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( !ConstantStrMaster__ExistValueArray(Master_object, (System_String_o *)StringLiteral_5424/*"ENABLE_OVERWRITE_CLASS_IDS"*/, *p_OverwriteClassId, 0) )
  {
LABEL_10:
    result = 0;
    this->fields.invalidType = 1;
    return result;
  }
  Master_object = (ConstantStrMaster_o *)this->fields.targetSvt;
  if ( !Master_object )
LABEL_12:
    sub_1C32E7C(Master_object);
  if ( BattleServantData__GetLogicClassId((BattleServantData_o *)Master_object, 0) == *p_OverwriteClassId )
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

  if ( (byte_4C3AA7C & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2815/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_4C3AA7C = 1;
  }
  classId = 0;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(this, &classId, v2) )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v4);
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1C32E7C(0);
  LogicClassId = BattleServantData__GetLogicClassId(targetSvt, 0);
  if ( LogicClassId != classId )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2815/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0);
}


bool BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        int32_t *classId,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *v4; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x21
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v8; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleServantData_o *ServantData; // x0
  int32_t Value; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C3AA7D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_4C3AA7D = 1;
  }
  entity = 0;
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_18;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_18;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)DataVals__GetParam(
                                                                     funcUnit_k__BackingField->fields._dataVals_k__BackingField,
                                                                     188,
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
    this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)logic_k__BackingField->fields.data;
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
LABEL_18:
    sub_1C32E7C(this);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           *classId,
           (const MethodInfo_3396884 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
    sub_1C32E7C(0);
  BattleServantData__addBuff(targetSvt, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0);
}


bool BattleLogicFunctionProcess_ServantAddStateTargetCheck__CheckConvertBuffData(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BuffConvertEntity_o *buffConvertEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BuffConvertEntity_o **p_buffConvertEntity; // x0
  __int64 v7; // x0
  int32_t ConvertBuffIdFromIndex; // w0
  BuffEntity_o *BuffEntity; // x0
  BuffEntity_o *v10; // x20
  const MethodInfo *v11; // x3

  this->fields.buffConvertEntity = buffConvertEntity;
  p_buffConvertEntity = &this->fields.buffConvertEntity;
  *((_BYTE *)p_buffConvertEntity + 8) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)p_buffConvertEntity, (int32_t)buffConvertEntity, (int32_t)method, v3);
  if ( !buffConvertEntity )
    sub_1C32E7C(v7);
  ConvertBuffIdFromIndex = BuffConvertEntity__GetConvertBuffIdFromIndex(
                             buffConvertEntity,
                             this->fields.convertBuffIndex,
                             0);
  this->fields.convertBuffId = ConvertBuffIdFromIndex;
  BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, ConvertBuffIdFromIndex, 0);
  if ( BuffEntity )
  {
    v10 = BuffEntity;
    if ( BuffEntity__isCheckGroup(BuffEntity, 0)
      && BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
           this,
           v10,
           this->fields.targetSvt,
           v11) )
    {
      this->fields.isBuffConvertFailure = 1;
    }
  }
  return !this->fields.isBuffConvertFailure;
}


BuffConvertEntity_o *BattleLogicFunctionProcess_ServantAddStateTargetCheck__GetConvertBuffEntity(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        int32_t actorId,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *v4; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  Il2CppObject *v6; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v7; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  BattleBuffData_BuffData_o *current; // x22
  Il2CppObject *Master_object; // x0
  _BOOL8 v13; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v14; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct FunctionEntity_o *funcEnt; // x8
  _BOOL8 IsTargetLimit; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v18; // x8
  DataVals_o *v19; // x0
  struct FunctionEntity_o *v20; // x8
  struct System_Int32_array *vals; // x8
  Il2CppObject *v22; // x24
  int32_t v23; // w23
  System_Int32_array *ParamArray; // x0
  BattleServantData_o *targetSvt; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4C3AA75 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_BuffConvertMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4C3AA75 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  entity = 0;
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_40;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_40;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 22, 0);
  v6 = 0;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = v4->fields._funcUnit_k__BackingField;
    if ( !v7 )
      goto LABEL_40;
    procArg_k__BackingField = v7->fields._procArg_k__BackingField;
    if ( !procArg_k__BackingField )
      goto LABEL_40;
    externalArg = procArg_k__BackingField->fields.externalArg;
    if ( !externalArg )
      goto LABEL_40;
    if ( externalArg->fields.isPassive )
      return 0;
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v7->fields._dataVals_k__BackingField;
    if ( !this )
LABEL_40:
      sub_1C32E7C(this);
    v6 = 0;
    if ( !DataVals__isParam((DataVals_o *)this, 23, 0) )
    {
      this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v4->fields.targetSvt;
      if ( this )
      {
        BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffList(
                                                                          (BattleServantData_o *)this,
                                                                          114,
                                                                          1,
                                                                          0,
                                                                          0);
        this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                            BuffList,
                                                                            (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
        if ( this )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v28,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
          v29 = v28;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v29,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
          {
            current = (BattleBuffData_BuffData_o *)v29.fields._current;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BuffConvertMaster___);
            if ( !current )
              sub_1C32E7C(Master_object);
            if ( !Master_object )
              sub_1C32E7C(0);
            v13 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    current->fields.buffId,
                    (const MethodInfo_3396884 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
            if ( v13 )
            {
              v14 = v4->fields._funcUnit_k__BackingField;
              if ( !v14 )
                sub_1C32E7C(v13);
              dataVals_k__BackingField = v14->fields._dataVals_k__BackingField;
              if ( !dataVals_k__BackingField )
                sub_1C32E7C(v13);
              funcEnt = dataVals_k__BackingField->fields.funcEnt;
              if ( !funcEnt )
                sub_1C32E7C(v13);
              if ( !entity )
                sub_1C32E7C(0);
              IsTargetLimit = BuffConvertEntity__IsTargetLimit(
                                (BuffConvertEntity_o *)entity,
                                funcEnt->fields.targetType,
                                v4->fields._targetId_k__BackingField,
                                actorId,
                                0);
              if ( IsTargetLimit )
              {
                v18 = v4->fields._funcUnit_k__BackingField;
                if ( !v18 )
                  sub_1C32E7C(IsTargetLimit);
                v19 = v18->fields._dataVals_k__BackingField;
                if ( !v19 )
                  sub_1C32E7C(0);
                v20 = v19->fields.funcEnt;
                if ( !v20 )
                  sub_1C32E7C(v19);
                vals = v20->fields.vals;
                if ( !vals )
                  sub_1C32E7C(v19);
                if ( !LODWORD(vals->max_length) )
                  sub_1C32E84(v19);
                v22 = entity;
                v23 = vals->m_Items[0];
                ParamArray = DataVals__GetParamArray(v19, 112, 0);
                if ( !v22 )
                  sub_1C32E7C(ParamArray);
                if ( BuffConvertEntity__TryGetConvertBuffIndex(
                       (BuffConvertEntity_o *)v22,
                       &v4->fields.convertBuffIndex,
                       v23,
                       ParamArray,
                       0) )
                {
                  targetSvt = v4->fields.targetSvt;
                  if ( !targetSvt )
                    sub_1C32E7C(0);
                  BuffData = BattleServantData__get_BuffData(targetSvt, 0);
                  if ( !BuffData )
                    sub_1C32E7C(0);
                  if ( BattleBuffData__checkBuffSuccessful(BuffData, current, 1, 0) )
                  {
                    v6 = entity;
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &v29,
                      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                    return (BuffConvertEntity_o *)v6;
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v29,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
          return 0;
        }
      }
      goto LABEL_40;
    }
  }
  return (BuffConvertEntity_o *)v6;
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
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleServantData_o *ServantData; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  BattleLogicFunctionProcess_FunctionTargetCheck__Init(
    (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
    targetId,
    funcUnit,
    method);
  if ( !funcUnit
    || (logic_k__BackingField = funcUnit->fields._logic_k__BackingField) == 0
    || (data = logic_k__BackingField->fields.data) == 0 )
  {
    sub_1C32E7C(data);
  }
  ServantData = BattleData__getServantData(data, targetId, 0);
  this->fields.targetSvt = ServantData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetSvt, (int32_t)ServantData, v10, v11);
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

  if ( (byte_4C3AA76 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C3AA76 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                 AttachTargetList_k__BackingField,
                                                                                 (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1C32E84(AttachTargetList_k__BackingField);
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
    sub_1C32E7C(AttachTargetList_k__BackingField);
  }
LABEL_14:
  if ( (byte_4C3AA6F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C3AA6F = 1;
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
  _BYTE *BuffEntity; // x0
  int32_t convertBuffId; // w1
  _BYTE *v9; // x19
  BuffConvertEntity_o *buffConvertEntity; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *dataVals_k__BackingField; // x8
  BuffEntity_o *v13; // x21
  BattleActionData_BuffData_o *GrayActionBuffData; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array *EffectList; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *OverwritePopupTextFromIndex; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  BuffEntity = BattleLogicFunctionProcess_FunctionTargetCheck__MakeAddActionBuffData(
                 (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
                 actBuffData,
                 buffData,
                 funcEnt,
                 isCommandSideEffect,
                 method);
  convertBuffId = this->fields.convertBuffId;
  v9 = BuffEntity;
  if ( convertBuffId )
  {
    if ( !BuffEntity )
      goto LABEL_13;
    BuffEntity[102] = this->fields.isBuffConvertFailure;
    buffConvertEntity = this->fields.buffConvertEntity;
    if ( buffConvertEntity )
    {
      BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, convertBuffId, 0);
      funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
      if ( funcUnit_k__BackingField )
      {
        dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
        if ( dataVals_k__BackingField )
        {
          v13 = (BuffEntity_o *)BuffEntity;
          BuffEntity = funcUnit_k__BackingField->fields._logic_k__BackingField;
          if ( BuffEntity )
          {
            GrayActionBuffData = BattleLogicFunction__MakeGrayActionBuffData(
                                   (BattleLogicFunction_o *)BuffEntity,
                                   this->fields._targetId_k__BackingField,
                                   dataVals_k__BackingField->fields.funcIndex,
                                   *((_DWORD *)v9 + 16),
                                   *((System_String_o **)v9 + 7),
                                   *((_DWORD *)v9 + 17),
                                   0);
            *((_QWORD *)v9 + 13) = GrayActionBuffData;
            sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 104), (int32_t)GrayActionBuffData, v15, v16);
            *((_DWORD *)v9 + 11) = this->fields.convertBuffId;
            if ( v13 )
            {
              *((_DWORD *)v9 + 16) = BuffEntity__GetIconId(v13, 0);
              BuffEntity = this->fields.buffConvertEntity;
              if ( BuffEntity )
              {
                *((_DWORD *)v9 + 17) = BuffConvertEntity__GetOverwritePopupColorFromIndex(
                                         (BuffConvertEntity_o *)BuffEntity,
                                         this->fields.convertBuffIndex,
                                         *((_DWORD *)v9 + 17),
                                         0);
                BuffEntity = this->fields.buffConvertEntity;
                if ( BuffEntity )
                {
                  EffectList = BuffConvertEntity__GetEffectList(
                                 (BuffConvertEntity_o *)BuffEntity,
                                 *((System_Int32_array **)v9 + 9),
                                 0);
                  *((_QWORD *)v9 + 9) = EffectList;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 72), (int32_t)EffectList, v18, v19);
                  BuffEntity = this->fields.buffConvertEntity;
                  if ( BuffEntity )
                  {
                    OverwritePopupTextFromIndex = BuffConvertEntity__GetOverwritePopupTextFromIndex(
                                                    (BuffConvertEntity_o *)BuffEntity,
                                                    this->fields.convertBuffIndex,
                                                    v13->fields.name,
                                                    0);
                    *((_QWORD *)v9 + 7) = OverwritePopupTextFromIndex;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 56), (int32_t)OverwritePopupTextFromIndex, v21, v22);
                    return (BattleActionData_BuffData_o *)v9;
                  }
                }
              }
            }
          }
        }
      }
LABEL_13:
      sub_1C32E7C(BuffEntity);
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
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_c *v7; // x8
  System_Object_array *v8; // x20
  System_Func_object__bool__o *_9__0_0; // x21
  Il2CppObject *v10; // x22
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool v14; // w0

  if ( (byte_4C3AA77 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_BattleSkillInfoData___);
    sub_1C32C20(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__);
    sub_1C32C20(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_4C3AA77 = 1;
  }
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1C32E7C(0);
  ActiveSkillInfos = BattleServantData__getActiveSkillInfos(targetSvt, 0);
  v7 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  v8 = (System_Object_array *)ActiveSkillInfos;
  if ( !BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    v7 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v7->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v10,
      Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      0);
    static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__0_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v12, v13);
  }
  v14 = BasicHelper__Any_object__51144764(
          v8,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_30C683C *)Method_BasicHelper_Any_BattleSkillInfoData___);
  if ( !v14 )
    this->fields.invalidType = 1;
  return v14;
}


void BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3AA78 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_4C3AA78 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C32E7C(this);
  return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skill->klass->vtable._14_IsChangeable.methodPtr)(
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
    sub_1C32E7C(targetSvt);
  }
  v9 = *(_QWORD *)&targetSvt->fields.uniqueId;
  v10 = targetSvt;
  v11 = (int)v9 > 0;
  if ( (int)v9 >= 1 )
  {
    v12 = 0;
    p_userSvtId = &targetSvt->fields.userSvtId;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v9 )
LABEL_21:
        sub_1C32E84(targetSvt);
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
      v11 = (__int64)++v12 < (int)v9;
      if ( (__int64)v12 >= (int)v9 )
        return !v11;
    }
    this->fields.invalidType = 1;
  }
  return !v11;
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v13; // x8
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
        sub_1C32BC4((CGThumbnailListItem_o *)&buffData->fields.generalParams, (int32_t)this, v11, v12),
        (this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)v7->fields.targetSvt) == 0)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0),
        (v13 = v7->fields._funcUnit_k__BackingField) == 0)
    || (procArg_k__BackingField = v13->fields._procArg_k__BackingField) == 0 )
  {
LABEL_8:
    sub_1C32E7C(this);
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
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v8; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x23
  BattleBuffData_FieldChangeData_o *v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x5
  struct BattleBuffData_FieldChangeData_o *fieldChangeData; // x8

  v8 = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this;
  if ( (byte_4C3AA83 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)sub_1C32C20(&BattleBuffData_FieldChangeData_TypeInfo);
    byte_4C3AA83 = 1;
  }
  funcUnit_k__BackingField = v8->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleBuffData_FieldChangeData_o *)sub_1C32E6C(BattleBuffData_FieldChangeData_TypeInfo);
  BattleBuffData_FieldChangeData___ctor_45707332(v11, dataVals_k__BackingField, 0);
  if ( !buffData
    || (buffData->fields.fieldChangeData = v11,
        sub_1C32BC4((CGThumbnailListItem_o *)&buffData->fields.fieldChangeData, (int32_t)v11, v12, v13),
        buffData->fields.delAfterProcType = 1,
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(v8, actBuffData, buffData, 0, 0, v14),
        (fieldChangeData = buffData->fields.fieldChangeData) == 0) )
  {
LABEL_7:
    sub_1C32E7C(this);
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

  if ( (byte_4C3AA9A & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
    byte_4C3AA9A = 1;
  }
  v4 = (Il2CppObject *)sub_1C32E6C(BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
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

  if ( (byte_4C3AA84 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_FieldBuffData_TypeInfo);
    byte_4C3AA84 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_1C32E6C(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4C3AA85 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_4C3AA85 = 1;
  }
  v2 = (Il2CppObject *)sub_1C32E6C(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
  System_Object___ctor(v2, 0);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x5
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v13; // x8
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
        sub_1C32BC4((CGThumbnailListItem_o *)&buffData->fields.generalParams, (int32_t)this, v10, v11),
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(v7, actBuffData, buffData, 0, 0, v12),
        (v13 = v7->fields._funcUnit_k__BackingField) == 0)
    || (procArg_k__BackingField = v13->fields._procArg_k__BackingField) == 0 )
  {
LABEL_7:
    sub_1C32E7C(this);
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
  bool result; // w0
  bool IsCancelTransform; // w8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_15;
  if ( !funcTarget )
    goto LABEL_15;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_15;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)BattleData__getServantData(
                                                                   (BattleData_o *)this,
                                                                   funcTarget->fields._targetId_k__BackingField,
                                                                   0);
  if ( !this )
    goto LABEL_15;
  v9 = this;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)this[11].fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_15;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)ServantEntity__isInvalidSkillShift(
                                                                   (ServantEntity_o *)this,
                                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    result = 0;
    funcTarget->fields.invalidType = 1;
    return result;
  }
  if ( !baseVals )
LABEL_15:
    sub_1C32E7C(this);
  if ( DataVals__isParam(baseVals, 6, 0) && DataVals__GetParam(baseVals, 6, 0, 0) != HIDWORD(v9[8].monitor) )
    return 1;
  IsCancelTransform = DataVals__IsCancelTransform(baseVals, 0);
  result = 1;
  if ( !IsCancelTransform )
  {
    funcTarget->fields.invalidType = 1;
    return 0;
  }
  return result;
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
  const MethodInfo *v3; // x3

  this->fields.funcTarget = funcTarget;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)funcTarget, (int32_t)method, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
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
  const MethodInfo *v4; // x3

  *text = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)text, 0, (int32_t)method, v4);
  return resVal;
}


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
    sub_1C32E7C(target);
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
  *missText = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)missText, 0, (int32_t)opSvt, (const MethodInfo *)missText);
  return 0.0;
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetField__GetBuffTargetCardIndexArray(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3AA86 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3AA86 = 1;
  }
  return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
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
    sub_1C32E7C(0);
  return (System_Int32_array *)((__int64 (__fastcall *)(struct BattleFieldEnvironmentData_o *, _QWORD, __int64, const MethodInfo *))target->klass->vtable._4_GetFieldIndividuality.methodPtr)(
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
  *missText = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)missText, 0, (int32_t)opSvt, (const MethodInfo *)missText);
  return 0.0;
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
    sub_1C32E7C(target);
  return BattleBuffData__getSameIndivualityBuffSum((BattleBuffData_o *)target, indiv, isActiveOnly, 0, 0, 0);
}


void BattleLogicFunctionProcess_WrapTargetField__InitPartial(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x1

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data )
    sub_1C32E7C(0);
  FieldEnvData_k__BackingField = Data->fields._FieldEnvData_k__BackingField;
  this->fields.target = FieldEnvData_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.target, (int32_t)FieldEnvData_k__BackingField, v4, v5);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
  return BattleServantData__checkBuffAvoid(target, buffIndiv, opSvt, 0);
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
    sub_1C32E7C(0);
  return BattleServantData__CheckDisableForciblyAddStateBuffAvoid(target, buffIndiv, opSvt, 0);
}


int32_t BattleLogicFunctionProcess_WrapTargetServant__GetAddBaseValue(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_o *LogicFunc; // x20
  const MethodInfo *v4; // x1
  DataVals_o *BaseVals; // x0

  LogicFunc = BattleLogicFunctionProcess_WrapTargetData__get_LogicFunc(
                (BattleLogicFunctionProcess_WrapTargetData_o *)this,
                method);
  BaseVals = BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
               (BattleLogicFunctionProcess_WrapTargetData_o *)this,
               v4);
  if ( !LogicFunc )
    sub_1C32E7C(BaseVals);
  return BattleLogicFunction__GetAddCondParamValue(LogicFunc, BaseVals, this->fields.target, 0);
}


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
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
  return BattleServantData__getBuffTOLERANCEMagnification(target, buffIndiv, opSvt, missText, 0);
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetServant__GetBuffTargetCardIndexArray(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_o *LogicFunc; // x20
  const MethodInfo *v4; // x1
  DataVals_o *BaseVals; // x0

  LogicFunc = BattleLogicFunctionProcess_WrapTargetData__get_LogicFunc(
                (BattleLogicFunctionProcess_WrapTargetData_o *)this,
                method);
  BaseVals = BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
               (BattleLogicFunctionProcess_WrapTargetData_o *)this,
               v4);
  if ( !LogicFunc )
    sub_1C32E7C(BaseVals);
  return BattleLogicFunction__GetBuffTargetCardIndexArray(LogicFunc, BaseVals, this->fields.target, 0);
}


int32_t BattleLogicFunctionProcess_WrapTargetServant__GetCommandCardIndex(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C32E7C(0);
  return BattleServantData__GetCommandCardIndex(target, userCommandCodeId, 0);
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetServant__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C32E7C(0);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
  return BattleServantData__getSameIndiualityBuffSum(target, indiv, isActiveOnly, 0, 0, 0);
}


void BattleLogicFunctionProcess_WrapTargetServant__InitPartial(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleServantData_o *ServantData; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || !Data )
    sub_1C32E7C(Data);
  ServantData = BattleData__getServantData(Data, funcTarget->fields._targetId_k__BackingField, 0);
  this->fields.target = ServantData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.target, (int32_t)ServantData, v6, v7);
}


bool BattleLogicFunctionProcess_WrapTargetServant__IsSatisfyTargetDefeatPointCondtion(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *BaseVals; // x0
  int32_t DefeatPoint; // w0
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  param = 0;
  BaseVals = (BattleServantData_o *)BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
                                      (BattleLogicFunctionProcess_WrapTargetData_o *)this,
                                      method);
  if ( !BaseVals )
    goto LABEL_7;
  if ( DataVals__TryGetParam((DataVals_o *)BaseVals, 145, &param, 0) )
  {
    BaseVals = this->fields.target;
    if ( BaseVals )
    {
      DefeatPoint = BattleServantData__getDefeatPoint(BaseVals, 0);
      return (DefeatPoint < 1) ^ (param > 0);
    }
LABEL_7:
    sub_1C32E7C(BaseVals);
  }
  return 1;
}


bool BattleLogicFunctionProcess_WrapTargetServant__IsSatisfyTargetRessurectableCondtion(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  DataVals_o *BaseVals; // x0
  bool exists; // w0
  char v5; // w8
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  param = 0;
  BaseVals = BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
               (BattleLogicFunctionProcess_WrapTargetData_o *)this,
               method);
  if ( !BaseVals )
    goto LABEL_7;
  if ( !DataVals__TryGetParam(BaseVals, 142, &param, 0) )
  {
    v5 = 1;
    return v5 & 1;
  }
  BaseVals = (DataVals_o *)this->fields.target;
  if ( !BaseVals )
LABEL_7:
    sub_1C32E7C(BaseVals);
  exists = BattleServantData__ExistsResurrection((BattleServantData_o *)BaseVals, 0);
  v5 = exists ^ (param < 1);
  return v5 & 1;
}


BattleBuffData_o *BattleLogicFunctionProcess_WrapTargetServant__get_BuffData(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C32E7C(0);
  return BattleServantData__get_BuffData(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target )
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
  return BattleServantData__checkPlayer(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C32E7C(0);
  return BattleServantData__isGuts(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
  return BattleServantData__isShiftableServant(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsUseDefeatPointReady(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data || (Data = (BattleData_o *)Data->fields.battleEvent) == 0 )
    sub_1C32E7C(Data);
  return ((__int64 (__fastcall *)(BattleData_o *, struct BattleServantData_o *, _QWORD))Data->klass[1]._2.unity_user_data)(
           Data,
           this->fields.target,
           *(_QWORD *)&Data->klass[1]._2.initializationExceptionGCHandle);
}