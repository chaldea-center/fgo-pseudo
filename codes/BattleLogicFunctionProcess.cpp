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
  __int64 v20; // x2
  System_Int32_array *v21; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v23; // x21
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v25; // x29
  System_Collections_Generic_List_int__o *v26; // x28
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v28; // x28
  System_Int32_array *v29; // x29
  System_Int32_array_array *v30; // x29
  int32_t v31; // w19
  int32_t v32; // w21
  int32_t v33; // w20
  System_Int32_array *v34; // x19
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_c *klass; // x10
  __int64 v38; // x12
  unsigned int v39; // w11
  __int64 v40; // x9
  __int64 v41; // x12
  System_Int32_array *v42; // x20
  System_Int32_array_array *v43; // x20
  __int64 v45; // [xsp+8h] [xbp-98h]
  bool v46; // [xsp+10h] [xbp-90h]
  int32_t count; // [xsp+18h] [xbp-88h]
  int32_t countEqual; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t countLower[2]; // [xsp+20h] [xbp-80h] BYREF
  System_Int32_array *targetIdArray; // [xsp+28h] [xbp-78h] BYREF
  System_Int32_array_array *overwriteTvals; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *originalTvals; // [xsp+38h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_4C2A37B & 1) == 0 )
  {
    sub_1C2D490(&Individuality_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2A37B = 1;
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
  v19 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( TargetUniqueIdArray )
  {
    v46 = TargetUniqueIdArray;
    v21 = targetIdArray;
    if ( !targetIdArray )
      goto LABEL_66;
    max_length = targetIdArray->max_length;
    v45 = v14;
    if ( (int)max_length >= 1 )
    {
      count = 0;
      v23 = 0;
      while ( v23 < (unsigned int)max_length )
      {
        logic_k__BackingField = v10->fields._logic_k__BackingField;
        if ( !logic_k__BackingField )
          goto LABEL_66;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)logic_k__BackingField->fields.data;
        if ( !this )
          goto LABEL_66;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleData__getServantData(
                                                                         (BattleData_o *)this,
                                                                         v21->m_Items[v23],
                                                                         0);
        if ( this )
        {
          v25 = this;
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__isLogicDeadAndNoRevive(
                                                                           (BattleServantData_o *)this,
                                                                           0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v26 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v26,
              (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__getIndividualities(
                                                                             (BattleServantData_o *)v25,
                                                                             0,
                                                                             1,
                                                                             0,
                                                                             1,
                                                                             0);
            if ( !v26 )
              goto LABEL_66;
            System_Collections_Generic_List_int___AddRange(
              v26,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v25[34].klass;
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
              v26,
              BuffIndividualities,
              (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                             v26,
                                                                             (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v19 )
              goto LABEL_66;
            v28 = this;
            System_Collections_Generic_List_int___AddRange(
              v19,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v18 )
            {
              if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0) )
              {
                v29 = originalTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCount(
                                                                                 (System_Int32_array *)v28,
                                                                                 v29,
                                                                                 0);
              }
              else
              {
                v30 = overwriteTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCountMultiIndividuality(
                                                                                 (System_Int32_array *)v28,
                                                                                 v30,
                                                                                 0);
              }
              count += (int)this;
            }
          }
        }
        LODWORD(max_length) = v21->max_length;
        if ( (__int64)++v23 >= (int)max_length )
          goto LABEL_33;
      }
LABEL_67:
      sub_1C2D6F4(this, baseVals, v20);
    }
    count = 0;
LABEL_33:
    v14 = v45;
    TargetUniqueIdArray = v46;
    if ( v18 )
    {
      v31 = countLower[0];
      v32 = countLower[1];
      v33 = countEqual;
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
      return Individuality__IsMatchAboveBelowEqual(count, v32, v31, v33, 0);
    }
  }
  if ( !v14 || !v15 )
LABEL_66:
    sub_1C2D6EC(this, baseVals);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1C2D538(
                                                                   int___TypeInfo,
                                                                   (unsigned int)(*(_DWORD *)(v15 + 24)
                                                                                + *(_DWORD *)(v14 + 24)));
  if ( !TargetUniqueIdArray )
  {
    v35 = *(_QWORD *)(v14 + 24);
    v34 = (System_Int32_array *)this;
    if ( (int)v35 >= 1 )
    {
      v36 = 0;
      while ( v36 < (unsigned int)v35 )
      {
        if ( !this )
          goto LABEL_66;
        if ( v36 >= LODWORD(this[1].klass) )
          break;
        *((_DWORD *)&this[1].monitor + v36) = *(_DWORD *)(v14 + 32 + 4 * v36);
        if ( (__int64)++v36 >= (int)v35 )
          goto LABEL_50;
      }
      goto LABEL_67;
    }
    if ( this )
    {
LABEL_50:
      klass = this[1].klass;
      if ( (int)v35 <= (__int64)(int)klass )
        v38 = (int)klass;
      else
        v38 = (int)v35;
      if ( (int)v35 < (__int64)(int)klass )
      {
        v39 = *(_DWORD *)(v15 + 24);
        v40 = 0;
        v41 = v38 - (int)v35;
        while ( (unsigned int)v40 < v39 && (int)v35 + (int)v40 < (unsigned int)klass )
        {
          *((_DWORD *)&this[1].monitor + (int)v35 + v40) = *(_DWORD *)(v15 + 4LL * (int)v40 + 32);
          if ( v41 == ++v40 )
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
  v34 = System_Collections_Generic_List_int___ToArray(
          v19,
          (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_58:
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0) )
  {
    v42 = originalTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedIndividualities(v34, v42, 0);
  }
  else
  {
    v43 = overwriteTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedMultiIndividuality(v34, v43, 0);
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

  if ( (byte_4C2A37A & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
    byte_4C2A37A = 1;
  }
  v4 = (Il2CppObject *)sub_1C2D6DC(BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
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
  __int64 v10; // x1
  int32_t v11; // w20
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleData_o *data; // x22
  int32_t actorId; // w23
  int32_t targetId; // w24
  int32_t PTTargetId; // w0
  System_Int32_array *TargetIds; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  *targetIdArray = 0;
  sub_1C2D434((CGThumbnailListItem_o *)targetIdArray, 0, (int32_t)actionData, (const MethodInfo *)targetIdArray);
  if ( !baseVals )
    goto LABEL_7;
  v9 = DataVals__GetFuncCheckTargetIndividualityTargetType(baseVals, 0);
  v11 = v9;
  if ( (v9 & 0x80000000) == 0 )
  {
    logic_k__BackingField = this->fields._logic_k__BackingField;
    if ( logic_k__BackingField && actionData )
    {
      data = logic_k__BackingField->fields.data;
      actorId = actionData->fields.actorId;
      targetId = actionData->fields.targetId;
      PTTargetId = BattleActionData__getPTTargetId(actionData, 0);
      TargetIds = Target__getTargetIds(data, actorId, targetId, PTTargetId, v11, 0, 0);
      *targetIdArray = TargetIds;
      sub_1C2D434((CGThumbnailListItem_o *)targetIdArray, (int32_t)TargetIds, v18, v19);
      return v11 >= 0;
    }
LABEL_7:
    sub_1C2D6EC(v9, v10);
  }
  return v11 >= 0;
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
  bool result; // w0
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8
  struct BattleLogicFunction_o *v19; // x8
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2

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
            BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
              funcTarget,
              (const MethodInfo *)action);
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
            v19 = v8->fields._logic_k__BackingField;
            if ( v19 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v19->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, targetId_k__BackingField, 0);
                if ( BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
                       (BattleLogicFunctionProcess_FunctionUnitCheck_o *)ServantData,
                       dataVals_k__BackingField,
                       ServantData,
                       v21)
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
                BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v22);
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
      sub_1C2D6EC(this, action);
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
    sub_1C2D6EC(this, action);
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
    sub_1C2D6EC(this, action);
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
    sub_1C2D6EC(this, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)logic, (int32_t)method, v3);
}


void BattleLogicFunctionProcess_BaseFunctionTypeProcess__set_logic(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logic_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  if ( (byte_4C2A361 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_1C2D490(&BattleBuffData_ChangeBgmData_TypeInfo);
    byte_4C2A361 = 1;
  }
  if ( !buffData
    || (buffData->fields.delAfterProcType = 3,
        (this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)v9->fields.targetSvt) == 0)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0),
        (targetSvt = v9->fields.targetSvt) == 0)
    || (funcUnit_k__BackingField = v9->fields._funcUnit_k__BackingField) == 0 )
  {
    sub_1C2D6EC(this, actBuffData);
  }
  uniqueId = targetSvt->fields.uniqueId;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v14 = (BattleBuffData_ChangeBgmData_o *)sub_1C2D6DC(BattleBuffData_ChangeBgmData_TypeInfo);
  BattleBuffData_ChangeBgmData___ctor_45568200(v14, uniqueId, buffData, dataVals_k__BackingField, 0);
  buffData->fields.changeBgmData = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&buffData->fields.changeBgmData, (int32_t)v14, v15, v16);
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
  BattleData_o *data; // x22
  BattleBuffData_ChangeBgmData_o *changeBgmData; // x21
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x20
  BattleActionEffect_ChangeBgmBuff_o *v14; // x20

  v8 = this;
  if ( (byte_4C2A362 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_1C2D490(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    byte_4C2A362 = 1;
  }
  funcUnit_k__BackingField = v8->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_16;
  logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_16;
  if ( !buffData )
    goto LABEL_16;
  this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !this )
    goto LABEL_16;
  data = logic_k__BackingField->fields.data;
  changeBgmData = buffData->fields.changeBgmData;
  if ( !LOBYTE(this->fields._targetId_k__BackingField)
    || (this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)BattleLogicFunction_ProcListInArgs__get_IsPassive(
                                                                (BattleLogicFunction_ProcListInArgs_o *)this,
                                                                0),
        ((unsigned __int8)this & 1) != 0) )
  {
    if ( data )
    {
      if ( changeBgmData )
      {
        FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
        this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)BattleBuffData_ChangeBgmData__MakeBgmGenerator(
                                                                changeBgmData,
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
          v14 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1C2D6DC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
          BattleActionEffect_ChangeBgmBuff___ctor(v14, 0);
          if ( actBuffData )
          {
            BattleActionData_BuffData__SetActionEffectProc(actBuffData, (BattleActionEffect_Base_o *)v14, 0);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1C2D6EC(this, mainAction);
  }
  if ( !mainAction )
    goto LABEL_16;
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
  int32_t targetId_k__BackingField; // w22
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x23
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x25
  FunctionEntity_o *funcEnt; // x24
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v14; // x26
  struct System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_c *klass; // x28
  BuffEntity_o *v17; // x24
  System_Int32_array *ParamArray; // x0
  BattleLogicFunction_o *v19; // x28
  bool isDisabledBuff; // w28
  const MethodInfo *v21; // x2
  struct BattleLogicFunction_o *v22; // x8
  struct BattleLogicFunction_o *v23; // x8
  int Param; // w29
  const MethodInfo *v25; // x1
  int32_t v26; // w27
  bool result; // w0
  float v28; // s0
  float v29; // s0
  int32_t v30; // w26
  __int64 v31; // x26
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x4
  int32_t v34; // w8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t Value; // w0
  System_Int32_array *vals; // x21
  int32_t v39; // w23
  __int64 v40; // x2
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v41; // x22
  struct System_String_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t Next; // [xsp+Ch] [xbp-74h]
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v46; // [xsp+10h] [xbp-70h]
  __int64 v47; // [xsp+18h] [xbp-68h] BYREF

  v6 = this;
  if ( (byte_4C2A37D & 1) == 0 )
  {
    sub_1C2D490(&Individuality_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12354/*"STATUS_UP_BUFF"*/);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C2D490(&StringLiteral_2771/*"BATTLE_GUARD_FUNCTION"*/);
    byte_4C2A37D = 1;
  }
  v47 = 0;
  if ( !funcTarget )
    goto LABEL_77;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_77;
  logic_k__BackingField = v6->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_77;
  if ( !action )
    goto LABEL_77;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_77;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleData__getServantData(
                                                                 (BattleData_o *)this,
                                                                 action->fields.actorId,
                                                                 0);
  if ( !dataVals_k__BackingField )
    goto LABEL_77;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v14 = this;
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
      goto LABEL_77;
    if ( CardIdsIndexList_k__BackingField->fields._size <= 0 )
    {
LABEL_55:
      result = 0;
      v34 = 1;
LABEL_56:
      funcTarget->fields.invalidType = v34;
      return result;
    }
  }
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_77;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                 (BattleLogicFunction_o *)this,
                                                                 funcEnt,
                                                                 0);
  if ( !this
    || (klass = this[2].klass,
        v17 = (BuffEntity_o *)this,
        ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 112, 0),
        this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)CommonFunction__JoinIndiv(
                                                                       (System_Int32_array *)klass,
                                                                       ParamArray,
                                                                       0),
        v46 = this,
        !procArg_k__BackingField)
    || (v19 = v6->fields._logic_k__BackingField,
        this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction_ProcListInArgs__get_IsPassive(
                                                                       procArg_k__BackingField,
                                                                       0),
        !v19) )
  {
LABEL_77:
    sub_1C2D6EC(this, action);
  }
  isDisabledBuff = BattleLogicFunction__isDisabledBuff(v19, (unsigned __int8)this & 1, dataVals_k__BackingField, 0);
  if ( isDisabledBuff )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__IsForciblyAddState(
                                                                   dataVals_k__BackingField,
                                                                   0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_27;
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._23_unknown.methodPtr)(
                                                                   WrapTarget_k__BackingField,
                                                                   v46,
                                                                   v14,
                                                                   WrapTarget_k__BackingField->klass->vtable._23_unknown.method);
  }
  else
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
    if ( !this )
      goto LABEL_77;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__isFailDependentLastResult(
                                                                   (BattleLogicFunction_o *)this,
                                                                   procArg_k__BackingField,
                                                                   targetId_k__BackingField,
                                                                   dataVals_k__BackingField,
                                                                   0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_36;
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._17_unknown.methodPtr)(
                                                                   WrapTarget_k__BackingField,
                                                                   v46,
                                                                   v14,
                                                                   WrapTarget_k__BackingField->klass->vtable._17_unknown.method);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      (const MethodInfo *)action);
    return 0;
  }
LABEL_27:
  v22 = v6->fields._logic_k__BackingField;
  if ( !v22 )
    goto LABEL_77;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
                                                                 procArg_k__BackingField,
                                                                 targetId_k__BackingField,
                                                                 dataVals_k__BackingField,
                                                                 v22->fields.data,
                                                                 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  v23 = v6->fields._logic_k__BackingField;
  if ( !v23 )
    goto LABEL_77;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
          procArg_k__BackingField,
          targetId_k__BackingField,
          dataVals_k__BackingField,
          v23->fields.data,
          0) )
    goto LABEL_36;
  Param = DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0);
  if ( (Param & 0x80000000) == 0 )
    goto LABEL_34;
  if ( !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          0) )
  {
LABEL_36:
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      dataVals_k__BackingField,
      v21);
    return 0;
  }
  Param = BattleUtility__Abs_46137364(Param, 0);
LABEL_34:
  v47 = 0;
  Next = BattleRandom__getNext(1000, 0);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(
                                                                 funcUnit_k__BackingField,
                                                                 v25);
  if ( Param > 99999 )
  {
    v26 = Param;
    goto LABEL_49;
  }
  if ( isDisabledBuff )
  {
    v26 = Param;
    if ( !DataVals__isParam(dataVals_k__BackingField, 113, 0) )
      goto LABEL_49;
  }
  else if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    v28 = ((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64 *, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._18_unknown.methodPtr)(
            WrapTarget_k__BackingField,
            v46,
            v14,
            &v47,
            WrapTarget_k__BackingField->klass->vtable._18_unknown.method);
    Next = BattleUtility__FloorToInt((float)(v28 * 1000.0) + (float)Next, 0);
  }
  if ( v14 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__isParam(dataVals_k__BackingField, 113, 0);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    v29 = (float)(((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64 *, _QWORD, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._22_unknown.methodPtr)(
                    WrapTarget_k__BackingField,
                    v46,
                    v14,
                    &v47,
                    (unsigned __int8)this & 1,
                    WrapTarget_k__BackingField->klass->vtable._22_unknown.method)
                * 1000.0)
        + (float)Param;
  }
  else
  {
    v29 = (float)Param;
  }
  v26 = BattleUtility__FloorToInt(v29, 0);
LABEL_49:
  if ( DataVals__isSameBuffLimit(dataVals_k__BackingField, 0) )
  {
    v30 = DataVals__GetParam(dataVals_k__BackingField, 40, 0, 0);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetSameBuffLimitTargetIndividuality(
                                                                   dataVals_k__BackingField,
                                                                   0);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    if ( ((int (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64, const MethodInfo *))WrapTarget_k__BackingField->klass->vtable._19_unknown.methodPtr)(
           WrapTarget_k__BackingField,
           this,
           1,
           WrapTarget_k__BackingField->klass->vtable._19_unknown.method) >= v30 )
    {
      result = 0;
      funcTarget->fields.invalidType = 1;
      return result;
    }
  }
  v31 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, _QWORD, const MethodInfo *))funcTarget->klass->vtable._13_GetConvertBuffEntity.methodPtr)(
          funcTarget,
          (unsigned int)action->fields.actorId,
          funcTarget->klass->vtable._13_GetConvertBuffEntity.method);
  if ( !v31 )
  {
    v32 = BuffEntity__isCheckGroup(v17, 0);
    if ( v32
      && BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
           (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v32,
           funcTarget,
           v17,
           WrapTarget_k__BackingField,
           v33) )
    {
      goto LABEL_55;
    }
  }
  if ( Param < 0
    && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          0) )
  {
    v26 = -1000;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BuffEntity_o *, const MethodInfo *))funcTarget->klass->vtable._19_CheckBuffCondtion.methodPtr)(
          funcTarget,
          action,
          v17,
          funcTarget->klass->vtable._19_CheckBuffCondtion.method)
      & 1) == 0 )
    return 0;
  if ( Next >= v26 )
  {
    funcTarget->fields.invalidText = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&funcTarget->fields.invalidText, 0, v35, v36);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_12354/*"STATUS_UP_BUFF"*/, 0);
    if ( Next < 1000 )
    {
LABEL_75:
      result = 0;
      v34 = 2;
      goto LABEL_56;
    }
    vals = v17->fields.vals;
    v39 = Value;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C2D538(int___TypeInfo, 1);
    if ( this )
    {
      v41 = this;
      if ( !LODWORD(this[1].klass) )
        sub_1C2D6F4(this, action, v40);
      LODWORD(this[1].monitor) = v39;
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
      if ( !Individuality__CheckIndividualities(vals, (System_Int32_array *)v41, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2771/*"BATTLE_GUARD_FUNCTION"*/, 0);
        funcTarget->fields.invalidText = v42;
        sub_1C2D434((CGThumbnailListItem_o *)&funcTarget->fields.invalidText, (int32_t)v42, v43, v44);
      }
      goto LABEL_75;
    }
    goto LABEL_77;
  }
  if ( v31
    && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, __int64, const MethodInfo *))funcTarget->klass->vtable._14_CheckConvertBuffData.methodPtr)(
          funcTarget,
          v31,
          funcTarget->klass->vtable._14_CheckConvertBuffData.method)
      & 1) == 0 )
  {
    result = 0;
    v34 = 3;
    goto LABEL_56;
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
  const MethodInfo *v8; // x2
  BattleLogicFunctionProcess_CommonAddStateProcess_c *klass; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v10; // x22
  unsigned __int64 v11; // x24
  int32_t v12; // w23
  struct System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x8

  if ( (byte_4C2A37E & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C2A37E = 1;
  }
  if ( !funcTarget )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcTarget->fields._AttachTargetList_k__BackingField;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_20;
  klass = this[1].klass;
  v10 = this;
  if ( (int)klass >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)klass )
        sub_1C2D6F4(this, funcTarget, v8);
      if ( !wrapTarget )
        break;
      v12 = *((_DWORD *)&v10[1].monitor + v11);
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass->vtable._6_unknown.methodPtr)(
                                                                     wrapTarget,
                                                                     wrapTarget->klass->vtable._6_unknown.method);
      if ( !buffEnt || !this )
        break;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleBuffData__checkBuffGroup(
                                                                     (BattleBuffData_o *)this,
                                                                     buffEnt->fields.buffGroup,
                                                                     v12,
                                                                     0);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(funcTarget, v12, v8);
      LODWORD(klass) = v10[1].klass;
      if ( (__int64)++v11 >= (int)klass )
        goto LABEL_15;
    }
LABEL_20:
    sub_1C2D6EC(this, funcTarget);
  }
LABEL_15:
  if ( (byte_4C2A357 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C2A357 = 1;
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
  if ( (byte_4C2A37F & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo);
    sub_1C2D490(&BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo);
    sub_1C2D490(&BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo);
    sub_1C2D490(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo);
    sub_1C2D490(&BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo);
    sub_1C2D490(&BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo);
    sub_1C2D490(&BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo);
    sub_1C2D490(&BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C2D490(&BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo);
    byte_4C2A37F = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v5->fields._logic_k__BackingField) == 0
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                       (BattleLogicFunction_o *)this,
                                                                       dataVals_k__BackingField->fields.funcEnt,
                                                                       0)) == 0 )
  {
    sub_1C2D6EC(this, *(_QWORD *)&targetId);
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
          v9 = sub_1C2D6DC(*v8);
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
  v9 = sub_1C2D6DC(BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo);
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

  if ( (byte_4C2A37C & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo);
    byte_4C2A37C = 1;
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

  if ( (byte_4C2A35B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C2A35B = 1;
  }
  CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField
    || (CardIdsIndexList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       CardIdsIndexList_k__BackingField,
                                                                                       (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__),
        !buff)
    || (buff->fields.servantCardIdsIndexArray = (struct System_Int32_array *)CardIdsIndexList_k__BackingField,
        sub_1C2D434(
          (CGThumbnailListItem_o *)&buff->fields.servantCardIdsIndexArray,
          (int32_t)CardIdsIndexList_k__BackingField,
          v6,
          v7),
        (CardIdsIndexList_k__BackingField = this->fields._AttachTargetList_k__BackingField) == 0) )
  {
    sub_1C2D6EC(CardIdsIndexList_k__BackingField, buff);
  }
  v8 = System_Collections_Generic_List_int___ToArray(
         CardIdsIndexList_k__BackingField,
         (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  buff->fields.attachTargets = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&buff->fields.attachTargets, (int32_t)v8, v9, v10);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_int__o *v14; // x24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_int__o *v17; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int32_t v21; // w1
  System_Action_int__o *v22; // x21
  __int64 v23; // x2

  if ( (byte_4C2A359 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_int___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__);
    sub_1C2D490(&BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
    byte_4C2A359 = 1;
  }
  v9 = sub_1C2D6DC(BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v9 + 16) = v14;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v14, v15, v16);
  if ( userCommandCodeId >= 1 )
  {
    if ( !wrapTarget )
      goto LABEL_17;
    v17 = *(System_Collections_Generic_List_int__o **)(v9 + 16);
    result = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, const MethodInfo *))wrapTarget->klass->vtable._21_unknown.methodPtr)(
                                     wrapTarget,
                                     userCommandCodeId,
                                     wrapTarget->klass->vtable._21_unknown.method);
    if ( !v17 )
      goto LABEL_17;
    items = v17->fields._items;
    v19 = Method_System_Collections_Generic_List_int__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_17;
    size = v17->fields._size;
    v21 = (_DWORD)result + 101;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v17,
        v21,
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v17->fields._size = size + 1;
      items->m_Items[size] = v21;
    }
  }
  v22 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v22,
    (Il2CppObject *)v9,
    Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
    0);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)cardIdsIndexArray,
    (System_Action_T__o *)v22,
    (const MethodInfo_30B9CE0 *)Method_BasicHelper_ForEach_int___);
  result = *(System_Int32_array **)(v9 + 16);
  if ( !result )
    goto LABEL_17;
  if ( SLODWORD(result->max_length) > 0 )
    return System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)result,
             (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  result = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 1);
  if ( !result )
LABEL_17:
    sub_1C2D6EC(result, v11);
  if ( !LODWORD(result->max_length) )
    sub_1C2D6F4(result, v11, v23);
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
  if ( (byte_4C2A358 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor___77944936);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2A358 = 1;
  }
  if ( !wrapTarget
    || (v7 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass->vtable._20_unknown.methodPtr)(
                                                              wrapTarget,
                                                              wrapTarget->klass->vtable._20_unknown.method,
                                                              wrapTarget,
                                                              method),
        v8 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_58115124(
          v8,
          v7,
          (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936),
        v6->fields._CardIdsIndexList_k__BackingField = v8,
        p_CardIdsIndexList_k__BackingField = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **)&v6->fields._CardIdsIndexList_k__BackingField,
        sub_1C2D434((CGThumbnailListItem_o *)&v6->fields._CardIdsIndexList_k__BackingField, (int32_t)v8, v10, v11),
        !action)
    || (this = *p_CardIdsIndexList_k__BackingField) == 0 )
  {
    sub_1C2D6EC(this, action);
  }
  userCommandCodeId = action->fields.userCommandCodeId;
  v13 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)this,
          (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, System_Int32_array *, const MethodInfo *))v6->klass->vtable._18_GetAttachTargetArray.methodPtr)(
                                                         v6,
                                                         wrapTarget,
                                                         userCommandCodeId,
                                                         v13,
                                                         v6->klass->vtable._18_GetAttachTargetArray.method);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58115124(
    v15,
    v14,
    (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936);
  v6->fields._AttachTargetList_k__BackingField = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields._AttachTargetList_k__BackingField, (int32_t)v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t attachTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0

  if ( (byte_4C2A35A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    byte_4C2A35A = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField
    || (System_Collections_Generic_List_int___Remove(
          AttachTargetList_k__BackingField,
          attachTarget,
          (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__),
        (AttachTargetList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField) == 0) )
  {
    sub_1C2D6EC(AttachTargetList_k__BackingField, *(_QWORD *)&attachTarget);
  }
  System_Collections_Generic_List_int___Remove(
    AttachTargetList_k__BackingField,
    attachTarget - 101,
    (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
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

  if ( (byte_4C2A357 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C2A357 = 1;
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
  sub_1C2D434(
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
  sub_1C2D434(
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
  if ( (byte_4C2A35C & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C2A35C = 1;
  }
  if ( !v4->fields.__4__this
    || (this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)v4->fields.targetList) == 0
    || (targetList = this->fields.targetList,
        v6 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(this->fields.__4__this),
        !targetList) )
  {
    sub_1C2D6EC(this, *(_QWORD *)&index);
  }
  _4__this_low = SLODWORD(this->fields.__4__this);
  v8 = index + 101;
  if ( (unsigned int)_4__this_low >= targetList->fields._size )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      v8,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, action);
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
  BattleActionData_o *v5; // x25
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v6; // x26
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // x29
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w28
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x27
  struct BattleLogicFunction_o *v12; // x8
  BattleServantData_o *v13; // x20
  FunctionEntity_o *funcEnt; // x24
  BattleServantData_o *v15; // x22
  int v16; // w23
  const MethodInfo *v17; // x2
  char v18; // w0
  float BuffResistDelayNPTurn; // s0
  struct System_String_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_String_o **p_invalidText; // x19
  const MethodInfo *v25; // x1
  System_Int32_array *vals; // x24
  float BuffTOLERANCESUBSTATEMagnification; // s0
  bool isDisplayLastFuncInvalid; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = action;
  v6 = this;
  if ( (byte_4C2A380 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1C2D490(&StringLiteral_2771/*"BATTLE_GUARD_FUNCTION"*/);
    byte_4C2A380 = 1;
  }
  if ( !funcTarget )
    goto LABEL_52;
  funcUnit = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit )
    goto LABEL_52;
  logic_k__BackingField = v6->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_52;
  if ( !v5 )
    goto LABEL_52;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_52;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     v5->fields.actorId,
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
  v15 = (BattleServantData_o *)this;
  isDisplayLastFuncInvalid = 0;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(
                                                                     funcUnit,
                                                                     (const MethodInfo *)action);
  if ( !v6->fields._logic_k__BackingField )
    goto LABEL_52;
  v16 = (int)this;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunction__checkFuncAction(
                                                                     v6->fields._logic_k__BackingField,
                                                                     procArg_k__BackingField,
                                                                     v5->fields.actorId,
                                                                     targetId_k__BackingField,
                                                                     0,
                                                                     funcEnt,
                                                                     dataVals_k__BackingField,
                                                                     v5->fields.treasureDvcId > 0,
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
        v18 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, DataVals_o *, BattleLogicFunction_ProcListInArgs_o *, const MethodInfo *))v6->klass->vtable._9_CheckConditionPartial.methodPtr)(
                v6,
                v5,
                funcTarget,
                dataVals_k__BackingField,
                procArg_k__BackingField,
                v6->klass->vtable._9_CheckConditionPartial.method);
        return v18 & 1;
      }
LABEL_18:
      v18 = 0;
      return v18 & 1;
    }
    goto LABEL_52;
  }
  if ( isDisplayLastFuncInvalid )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v17);
    goto LABEL_18;
  }
  if ( !funcEnt )
LABEL_52:
    sub_1C2D6EC(this, action);
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(7, funcEnt->fields.funcType, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(8, funcEnt->fields.funcType, 0),
        ((unsigned __int8)this & 1) != 0) )
  {
    if ( v15 )
    {
      if ( BattleServantData__checkPlayer(v15, 0) )
      {
        v18 = 0;
        funcTarget->fields.invalidType = 2;
        return v18 & 1;
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
        if ( !v15 )
          goto LABEL_52;
        if ( BattleServantData__checkAvoidInstantDeath(v15, v13, 0) )
        {
          BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, v25);
          goto LABEL_18;
        }
      }
      this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(2, funcEnt->fields.funcType, 0);
      action = 0;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_50;
      vals = funcEnt->fields.vals;
      if ( v13 )
      {
        if ( (v16 & 1) != 0 )
        {
          action = 0;
LABEL_50:
          funcTarget->fields.invalidText = (struct System_String_o *)action;
          p_invalidText = &funcTarget->fields.invalidText;
          *((_DWORD *)p_invalidText - 2) = 2;
LABEL_51:
          sub_1C2D434((CGThumbnailListItem_o *)p_invalidText, (int32_t)action, v22, v23);
          goto LABEL_18;
        }
      }
      else
      {
        this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)DataVals__isParam(
                                                                           dataVals_k__BackingField,
                                                                           75,
                                                                           0);
        action = 0;
        if ( ((v16 | (unsigned int)this) & 1) != 0 )
          goto LABEL_50;
      }
      if ( !v15 )
        goto LABEL_52;
      BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(v15, vals, v13, 0);
      action = 0;
      if ( BuffTOLERANCESUBSTATEMagnification > 0.0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2771/*"BATTLE_GUARD_FUNCTION"*/, 0);
      }
      goto LABEL_50;
    }
  }
  if ( !v15 )
    goto LABEL_52;
  if ( !v15->fields.isEnemy )
    goto LABEL_18;
  funcTarget->fields.invalidType = 2;
  if ( !FuncList__Check(20, funcEnt->fields.funcType, 0) )
    goto LABEL_18;
  BuffResistDelayNPTurn = BattleServantData__getBuffResistDelayNPTurn(v15, v13, 0);
  v18 = 0;
  if ( BuffResistDelayNPTurn > 0.0 && ((v16 ^ 1) & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2771/*"BATTLE_GUARD_FUNCTION"*/, 0);
    LODWORD(action) = (_DWORD)v21;
    funcTarget->fields.invalidText = v21;
    p_invalidText = &funcTarget->fields.invalidText;
    goto LABEL_51;
  }
  return v18 & 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._dataVals_k__BackingField, (int32_t)dataVal, v7, v8);
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v15; // x8
  bool IsPassive; // w21
  const MethodInfo *v17; // x1

  v8 = this;
  if ( (byte_4C2A368 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C2D490(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__);
    sub_1C2D490(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_4C2A368 = 1;
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
LABEL_18:
      sub_1C2D6EC(this, actBuffData);
    }
    if ( SLODWORD(funcUnit_k__BackingField->fields._procArg_k__BackingField) >= 1 )
    {
      v10 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
      System_Func_object__object____ctor(
        v10,
        (Il2CppObject *)v8,
        Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__,
        0);
      v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)funcUnit_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)v10,
                                                                   (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
      this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                        v11,
                                                                        (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
      if ( !actBuffData )
        goto LABEL_18;
      actBuffData->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1C2D434((CGThumbnailListItem_o *)&actBuffData->fields.removeBuffList, (int32_t)this, v12, v13);
    }
  }
  v14 = v8->fields._funcUnit_k__BackingField;
  if ( !v14 )
    goto LABEL_18;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)v14->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_18;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 109, 0);
  if ( !buffData )
    goto LABEL_18;
  buffData->fields.isRemoveFieldBuffActorDeath = (unsigned __int8)this & 1;
  v15 = v8->fields._funcUnit_k__BackingField;
  if ( !v15 )
    goto LABEL_18;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)v15->fields._procArg_k__BackingField;
  if ( !this )
    goto LABEL_18;
  IsPassive = BattleLogicFunction_ProcListInArgs__get_IsPassive((BattleLogicFunction_ProcListInArgs_o *)this, 0);
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(
                                                                    v8,
                                                                    v17);
  if ( !this )
    goto LABEL_18;
  BattleFieldEnvironmentData__AddFieldBuff((BattleFieldEnvironmentData_o *)this, buffData, !IsPassive, 0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  bool v12; // w21
  System_Int32_array *GrantBuffTypeArray; // x22
  System_Func_int__bool__o *v14; // x23

  if ( (byte_4C2A367 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__);
    sub_1C2D490(&BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
    byte_4C2A367 = 1;
  }
  v6 = sub_1C2D6DC(BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = buffEnt;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 16), (int32_t)buffEnt, v9, v10);
  if ( this->fields.grantType != 1 )
    return 1;
  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v11);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0)) == 0 )
  {
LABEL_11:
    sub_1C2D6EC(BuffData, v8);
  }
  v12 = 1;
  GrantBuffTypeArray = BattleBuffData__GetGrantBuffTypeArray((BattleBuffData_o *)BuffData, 1, 1, 0);
  v14 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v6,
    Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
    0);
  if ( BasicHelper__Any_int__51083888(
         GrantBuffTypeArray,
         (System_Func_T__bool__o *)v14,
         (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856) )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return v12;
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
  __int64 v7; // x2

  if ( (byte_4C2A366 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C2A366 = 1;
  }
  result = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 1);
  if ( !result )
    sub_1C2D6EC(0, v6);
  if ( !LODWORD(result->max_length) )
    sub_1C2D6F4(result, v6, v7);
  result->m_Items[0] = 10001;
  return result;
}


int32_t BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetGrantType(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  if ( !baseVals )
    sub_1C2D6EC(this, 0);
  return DataVals__GetParam(baseVals, 110, 0, 0);
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
    sub_1C2D6EC(dataVals_k__BackingField, v7);
  this->fields.grantType = DataVals__GetParam(dataVals_k__BackingField, 110, 0, 0);
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData_o *v2; // x19

  if ( (byte_4C2A369 & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_FieldBuffData_TypeInfo);
    byte_4C2A369 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_1C2D6DC(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4C2A36A & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_4C2A36A = 1;
  }
  v2 = (Il2CppObject *)sub_1C2D6DC(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
  System_Object___ctor(v2, 0);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
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
    sub_1C2D6EC(BuffData, v5);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, type);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
  }
  return BattleLogicFunction__GetBuffEntity((BattleLogicFunction_o *)this, dataVals_k__BackingField->fields.funcEnt, 0);
}


System_String_o *BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields._funcUnit_k__BackingField )
    sub_1C2D6EC(this, method);
  return BattleLogicFunctionProcess_FunctionUnitCheck__GetFuncNoEffectText(
           this->fields._funcUnit_k__BackingField,
           this->fields.invalidText,
           v2);
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FunctionTargetCheck__GetFunctionDisplayData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *dataVals_k__BackingField; // x10
  BattleLogicFunction_o *logic_k__BackingField; // x19
  FunctionEntity_o *funcEnt; // x20
  int32_t targetId_k__BackingField; // w21
  int32_t funcIndex; // w22

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0
    || !funcUnit_k__BackingField->fields._procArg_k__BackingField
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField,
        funcEnt = dataVals_k__BackingField->fields.funcEnt,
        targetId_k__BackingField = this->fields._targetId_k__BackingField,
        funcIndex = dataVals_k__BackingField->fields.funcIndex,
        this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                                                     funcUnit_k__BackingField->fields._procArg_k__BackingField,
                                                                     0),
        !logic_k__BackingField) )
  {
    sub_1C2D6EC(this, method);
  }
  return BattleLogicFunction__getFunctionObject(
           logic_k__BackingField,
           funcEnt,
           targetId_k__BackingField,
           funcIndex,
           (unsigned __int8)this & 1,
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
  __int64 v9; // x1
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x0

  this->fields._targetId_k__BackingField = targetId;
  this->fields._funcUnit_k__BackingField = funcUnit;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)funcUnit, (int32_t)funcUnit, method);
  klass = this->klass;
  this->fields._result_k__BackingField = 0;
  v6 = (struct BattleLogicFunctionProcess_WrapTargetData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))klass->vtable._11_MakeWrapTarget.methodPtr)(
                                                               this,
                                                               klass->vtable._11_MakeWrapTarget.method);
  this->fields._WrapTarget_k__BackingField = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._WrapTarget_k__BackingField, (int32_t)v6, v7, v8);
  WrapTarget_k__BackingField = this->fields._WrapTarget_k__BackingField;
  if ( !WrapTarget_k__BackingField )
    sub_1C2D6EC(0, v9);
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
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v4; // x20
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  const MethodInfo *v7; // x1
  _BOOL4 result_k__BackingField; // w21

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_9;
  v4 = this;
  this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !this )
    goto LABEL_9;
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(
                        (BattleLogicFunction_ProcListInArgs_o *)this,
                        0);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(FuncSideEffectArg, v4, 0);
  result_k__BackingField = v4->fields._result_k__BackingField;
  if ( !v4->fields._result_k__BackingField )
  {
    this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(
                                                                 v4,
                                                                 v7);
    if ( mainAction )
    {
      BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0);
      return result_k__BackingField;
    }
LABEL_9:
    sub_1C2D6EC(this, mainAction);
  }
  return result_k__BackingField;
}


BattleActionData_BuffData_o *BattleLogicFunctionProcess_FunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v2; // x19

  if ( (byte_4C2A355 & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_BuffData_TypeInfo);
    byte_4C2A355 = 1;
  }
  v2 = (BattleActionData_BuffData_o *)sub_1C2D6DC(BattleActionData_BuffData_TypeInfo);
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
    sub_1C2D6EC(this, actBuffData);
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

  if ( (byte_4C2A356 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
    byte_4C2A356 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2D6DC(BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
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
    sub_1C2D6EC(this, method);
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
  __int64 v8; // x1
  System_Type_o *v9; // x21
  int32_t DisplayLastFuncInvalidType; // w20
  __int64 v11; // x2
  __int64 v12; // x3
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v13; // x0
  BattleActionData_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4C2A354 & 1) == 0 )
  {
    sub_1C2D490(&System_Enum_TypeInfo);
    sub_1C2D490(&BattleLogicFunctionProcess_FuncInvalidType_var);
    sub_1C2D490(&BattleLogicFunctionProcess_FuncInvalidType_TypeInfo);
    sub_1C2D490(&System_Type_TypeInfo);
    byte_4C2A354 = 1;
  }
  v5 = BattleLogicFunctionProcess_FuncInvalidType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = (intptr_t)v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  if ( !baseVals )
    goto LABEL_11;
  v9 = TypeFromHandle;
  DisplayLastFuncInvalidType = DataVals__GetDisplayLastFuncInvalidType(baseVals, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  TypeFromHandle = (System_Type_o *)System_Enum__ToObject_65194728(v9, DisplayLastFuncInvalidType, 0);
  if ( !TypeFromHandle )
LABEL_11:
    sub_1C2D6EC(TypeFromHandle, v8);
  if ( TypeFromHandle->klass->_1.element_class == BattleLogicFunctionProcess_FuncInvalidType_TypeInfo->_1.element_class )
  {
    this->fields.invalidType = *(_DWORD *)j_il2cpp_object_unbox_0(
                                            TypeFromHandle,
                                            BattleLogicFunctionProcess_FuncInvalidType_TypeInfo,
                                            v11,
                                            v12);
  }
  else
  {
    sub_1C2D9AC(TypeFromHandle);
    BattleLogicFunctionProcess_FunctionTargetCheck__IsExecutable(v13, v14, v15);
  }
}


void BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *funcProc,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v4; // x19
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
            0);
          return;
        }
      }
    }
LABEL_8:
    sub_1C2D6EC(this, funcProc);
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
    sub_1C2D6EC(0, this);
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
    sub_1C2D6EC(this, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._WrapTarget_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicFunctionProcess_FunctionTargetCheck__set_funcUnit(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._funcUnit_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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

  if ( (byte_4C2A370 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
    byte_4C2A370 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToOtherList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.linkedToOtherList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToSelfList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.linkedToSelfList, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._logic_k__BackingField = logic;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)logic, v13, v14);
  this->fields._procArg_k__BackingField = procArg;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._procArg_k__BackingField, (int32_t)procArg, v15, v16);
  this->fields._result_k__BackingField = 0;
  v17 = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)sub_1C2D538(
                                                                         BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                                                         0);
  this->fields._funcTargetArray_k__BackingField = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._funcTargetArray_k__BackingField, (int32_t)v17, v18, v19);
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
    sub_1C2D6EC(this, defText);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2A379 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2A379 = 1;
  }
  if ( !baseVals )
    sub_1C2D6EC(this, baseVals);
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v11, 0);
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
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_ICollection_o *TargetTypeIndexArray; // x20
  System_Func_int__bool__o *v15; // x21

  if ( (byte_4C2A377 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_All_int___);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__);
    sub_1C2D490(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_TypeInfo);
    byte_4C2A377 = 1;
  }
  v6 = sub_1C2D6DC(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = baseVals,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 16), (int32_t)baseVals, v9, v10),
        *(_QWORD *)(v6 + 24) = targetSvtData,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 24), (int32_t)targetSvtData, v11, v12),
        (v7 = *(DataVals_o **)(v6 + 16)) == 0) )
  {
    sub_1C2D6EC(v7, v8);
  }
  TargetTypeIndexArray = (System_Collections_ICollection_o *)DataVals__GetTargetTypeIndexArray(v7, 178, 0);
  if ( BasicHelper__IsNullOrEmpty(TargetTypeIndexArray, 0) )
    return 1;
  if ( !*(_QWORD *)(v6 + 24) )
    return 0;
  v15 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v6,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__,
    0);
  return System_Linq_Enumerable__All_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)TargetTypeIndexArray,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_30D87A8 *)Method_System_Linq_Enumerable_All_int___);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVal,
        int32_t actorId,
        const MethodInfo *method)
{
  DataVals_o *v4; // x19
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v6; // x20
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  bool isEnemyID; // w0
  struct BattleLogicFunction_o *v9; // x8
  bool existParamNum; // [xsp+Ch] [xbp-24h] BYREF

  existParamNum = 0;
  if ( !baseVal )
    goto LABEL_12;
  v4 = baseVal;
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
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetTriggeredFieldCountTargetFlag(v4, isEnemyID, 0);
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
                           v4,
                           134,
                           (int32_t)this->fields._procArg_k__BackingField,
                           0);
          return (unsigned __int8)this & 1;
        }
      }
    }
LABEL_12:
    sub_1C2D6EC(this, baseVal);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(0, 0);
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
    sub_1C2D6EC(this, baseVals);
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
  if ( (byte_4C2A378 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C2A378 = 1;
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
                 (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
LABEL_11:
    sub_1C2D6EC(this, baseVals);
  }
  return 0;
}


AddBgmArgument_o *BattleLogicFunctionProcess_FunctionUnitCheck__MakeAddBgmArgument(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x19
  AddBgmArgument_o *v4; // x20

  if ( (byte_4C2A36F & 1) == 0 )
  {
    sub_1C2D490(&AddBgmArgument_TypeInfo);
    byte_4C2A36F = 1;
  }
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  v4 = (AddBgmArgument_o *)sub_1C2D6DC(AddBgmArgument_TypeInfo);
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
    sub_1C2D6EC(this, method);
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
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C2A373 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1C2D490(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_1C2D490(&Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0__checkFuncTargetResult_b__0__);
    sub_1C2D490(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_TypeInfo);
    byte_4C2A373 = 1;
  }
  v7 = sub_1C2D6DC(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_DWORD *)(v7 + 16) = targetId;
  *(_BYTE *)(v7 + 20) = result;
  funcTargetArray_k__BackingField = (System_Object_array *)this->fields._funcTargetArray_k__BackingField;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0__checkFuncTargetResult_b__0__,
    0);
  return BasicHelper__Any_object__51084700(
           funcTargetArray_k__BackingField,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *linkedToSelfList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  int v12; // w19
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C2A376 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_4C2A376 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  linkedToSelfList = (System_Collections_Generic_List_object__o *)this->fields.linkedToSelfList;
  if ( !linkedToSelfList )
    sub_1C2D6EC(0, action);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    linkedToSelfList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    do
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
      if ( !v6 )
      {
        v12 = 6;
        goto LABEL_13;
      }
      current = v15.fields._current;
      if ( !v15.fields._current )
        sub_1C2D6EC(v6, v7);
      klass = v15.fields._current[2].klass;
      if ( !klass )
        sub_1C2D6EC(0, v7);
    }
    while ( DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed((DataVals_o *)klass, 0) );
    if ( !BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
            (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
            action,
            v10) )
      break;
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      this,
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
      v11);
  }
  v12 = 5;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
  return v12 != 5;
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
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_o *v26; // x8
  struct BattleData_o *v27; // x8
  System_Collections_Generic_HashSet_int__o *FuncEventExceptedHash_k__BackingField; // x0
  const MethodInfo *v29; // x3
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x3
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x3
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v39; // x8
  int32_t Param; // w23
  const MethodInfo *v41; // x1
  bool v42; // zf
  Target_BattleTargetArgs_o *args; // x23
  struct BattleLogicFunction_o *v44; // x8
  int32_t targetId; // w26
  int32_t PTTargetId; // w0
  int32_t targetType; // w27
  int32_t taskActorType; // w28
  bool checkRevengeId; // w29
  int32_t v50; // w24
  System_Int32_array *ValsList; // x25
  bool IsIncludeIgnoreIndividuality; // w0
  struct BattleLogicFunction_ProcListInArgs_o *v53; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v54; // x2
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v55; // x22
  struct BattleLogicFunction_o *v56; // x8
  struct BattleData_o *v57; // x8
  const MethodInfo *v58; // x2
  __int64 v59; // x2
  int v60; // w8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v61; // x21
  int v62; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v63; // x22
  const MethodInfo *v64; // x3
  int32_t actorId; // [xsp+24h] [xbp-6Ch]
  BattleData_o *bdata; // [xsp+28h] [xbp-68h]

  v4 = this;
  if ( (byte_4C2A375 & 1) == 0 )
  {
    sub_1C2D490(&Target_BattleTargetArgs_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C2D490(&Individuality_TypeInfo);
    byte_4C2A375 = 1;
  }
  dataVals_k__BackingField = v4->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_70;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_70;
  v7 = FuncList__Check(0, funcEnt->fields.funcType, 0);
  this = 0;
  if ( v7 )
    return (char)this;
  logic_k__BackingField = v4->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_70;
  if ( !action )
    goto LABEL_70;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_70;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FuncList__Check(26, funcEnt->fields.funcType, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    action->fields.isSuccessTargetSelection = 1;
  v10 = v4->fields._logic_k__BackingField;
  if ( !v10 )
    goto LABEL_70;
  data = v10->fields.data;
  if ( !data )
    goto LABEL_70;
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
    goto LABEL_70;
  v16 = v15->fields.data;
  if ( !v16 )
    goto LABEL_70;
  loseBattleFlg = v16->fields.loseBattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0);
  v16->fields.loseBattleFlg = loseBattleFlg | (unsigned __int8)this & 1;
  v18 = v4->fields._logic_k__BackingField;
  if ( !v18 )
    goto LABEL_70;
  v19 = v18->fields.data;
  if ( !v19 )
    goto LABEL_70;
  winBattleNotRelatedSurvivalStatus = v19->fields.winBattleNotRelatedSurvivalStatus;
  v19->fields.winBattleNotRelatedSurvivalStatus = winBattleNotRelatedSurvivalStatus
                                                | DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                    dataVals_k__BackingField,
                                                    0);
  v4->fields.questFuncFlg = 1;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FunctionEntity__getQuestTargetValues(funcEnt, 0);
  if ( !this )
    goto LABEL_70;
  v22 = this;
  if ( this->fields._procArg_k__BackingField )
  {
    v23 = v4->fields._logic_k__BackingField;
    if ( !v23 )
      goto LABEL_70;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v23->fields.data;
    if ( !this )
      goto LABEL_70;
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
    goto LABEL_70;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunction_ProcListInArgs__get_IsPassive(
                                                             procArg_k__BackingField,
                                                             0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v26 = v4->fields._logic_k__BackingField;
    if ( !v26 )
      goto LABEL_70;
    v27 = v26->fields.data;
    if ( !v27 )
      goto LABEL_70;
    FuncEventExceptedHash_k__BackingField = v27->fields._FuncEventExceptedHash_k__BackingField;
    if ( FuncEventExceptedHash_k__BackingField
      && FuncEventExceptedHash_k__BackingField->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           FuncEventExceptedHash_k__BackingField,
           funcEnt->fields.id,
           (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      goto LABEL_56;
    }
  }
  if ( !BattleActionData__IsSelectedAddTargetIndex(action, dataVals_k__BackingField, 0) )
    goto LABEL_56;
  v30 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
          v4,
          dataVals_k__BackingField,
          action->fields.actorId,
          v29);
  if ( !v30 )
    goto LABEL_56;
  v32 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyOverChargeStageRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v30,
          dataVals_k__BackingField,
          ServantData,
          v31);
  if ( !v32 )
    goto LABEL_56;
  if ( !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v32,
          dataVals_k__BackingField,
          ServantData,
          v33) )
    goto LABEL_56;
  v35 = BattleLogicFunctionProcess_FunctionUnitCheck__IsStartingPositionCondition(
          v4,
          dataVals_k__BackingField,
          ServantData,
          v34);
  if ( !v35 )
    goto LABEL_56;
  v37 = BattleLogicFunctionProcess_FunctionUnitCheck__IsFriendShipCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v35,
          dataVals_k__BackingField,
          ServantData,
          v36);
  if ( !v37
    || !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfySupportSvtExec(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v37,
          dataVals_k__BackingField,
          ServantData,
          v38) )
  {
    goto LABEL_56;
  }
  if ( DataVals__checkActSet(dataVals_k__BackingField, 0) )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__getActSet(dataVals_k__BackingField, 0);
    v39 = v4->fields._procArg_k__BackingField;
    if ( !v39 )
      goto LABEL_70;
    if ( (_DWORD)this != v39->fields.actSetId )
    {
LABEL_56:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  if ( !DataVals__isParam(dataVals_k__BackingField, 130, 0)
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 130, 0, 0),
        v42 = Param == BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(v4, v41),
        LOBYTE(this) = 0,
        v42) )
  {
    if ( DataVals__IsSatisfyCommonReleaseId(dataVals_k__BackingField, 0) )
    {
      args = (Target_BattleTargetArgs_o *)sub_1C2D6DC(Target_BattleTargetArgs_TypeInfo);
      Target_BattleTargetArgs___ctor(args, dataVals_k__BackingField, 0);
      v44 = v4->fields._logic_k__BackingField;
      if ( v44 )
      {
        bdata = v44->fields.data;
        targetId = action->fields.targetId;
        actorId = action->fields.actorId;
        PTTargetId = BattleActionData__getPTTargetId(action, 0);
        targetType = funcEnt->fields.targetType;
        taskActorType = action->fields.taskActorType;
        checkRevengeId = action->fields.checkRevengeId;
        v50 = PTTargetId;
        ValsList = DataVals__GetValsList(dataVals_k__BackingField, 84, 0);
        IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(dataVals_k__BackingField, 0);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Target__getTargetIds_40233328(
                                                                   bdata,
                                                                   actorId,
                                                                   targetId,
                                                                   v50,
                                                                   targetType,
                                                                   taskActorType,
                                                                   checkRevengeId,
                                                                   ValsList,
                                                                   IsIncludeIgnoreIndividuality,
                                                                   args,
                                                                   0);
        v53 = v4->fields._procArg_k__BackingField;
        if ( v53 )
        {
          v54 = this;
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v53->fields.externalArg;
          if ( this )
          {
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const char *))this->klass[1]._1.name)(
                                                                       this,
                                                                       (unsigned int)funcEnt->fields.targetType,
                                                                       v54,
                                                                       this->klass[1]._1.namespaze);
            if ( v4->fields._procArg_k__BackingField )
            {
              v55 = this;
              this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
                                                                         v4->fields._procArg_k__BackingField,
                                                                         0);
              if ( this )
              {
                this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, DataVals_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                                                                           this,
                                                                           dataVals_k__BackingField,
                                                                           v55,
                                                                           *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_56;
                v56 = v4->fields._logic_k__BackingField;
                if ( v56 )
                {
                  v57 = v56->fields.data;
                  if ( v57 )
                  {
                    if ( !DataVals__CheckFunctionTriggerStar(
                            dataVals_k__BackingField,
                            v57->fields.totalCriticalStars,
                            0)
                      && !v4->fields.isLowestStarFunction )
                    {
                      goto LABEL_56;
                    }
                    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
                                                                               v4,
                                                                               (System_Int32_array *)v55,
                                                                               v58);
                    if ( this )
                    {
                      v60 = (int)this->fields._procArg_k__BackingField;
                      v61 = this;
                      if ( v60 < 1 )
                      {
                        LOBYTE(this) = 1;
                        return (char)this;
                      }
                      v62 = 0;
                      while ( 1 )
                      {
                        if ( v62 >= (unsigned int)v60 )
                          sub_1C2D6F4(this, action, v59);
                        v63 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)*((_QWORD *)&v61->fields._dataVals_k__BackingField
                                                                                  + v62);
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                                   v4,
                                                                                   (const MethodInfo *)action);
                        if ( !v63 )
                          break;
                        BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
                          v63,
                          (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
                          action,
                          v64);
                        v60 = (int)v61->fields._procArg_k__BackingField;
                        ++v62;
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(&dword_0 + 1);
                        if ( v62 >= v60 )
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
LABEL_70:
      sub_1C2D6EC(this, action);
    }
    goto LABEL_56;
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
  DataVals_o *v6; // x22
  BattleLogicFunction_o *v7; // x21
  int32_t v8; // w23
  int32_t v9; // w24
  DataVals_o *dataVals_k__BackingField; // x22
  BattleLogicFunction_o *logic_k__BackingField; // x21
  int32_t targetId_k__BackingField; // w23
  int32_t funcIndex; // w24
  bool IsCommandSideEffect; // w25
  struct DataVals_o *v16; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *v18; // x9

  if ( !funcTarget )
    goto LABEL_20;
  v4 = this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr)(
                                                             funcTarget,
                                                             funcTarget->klass->vtable._8_MakeActionBuffData.method,
                                                             method);
  if ( !v4->fields._dataVals_k__BackingField )
    goto LABEL_20;
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
        goto LABEL_20;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._procArg_k__BackingField;
      if ( !this )
        goto LABEL_20;
      logic_k__BackingField = v4->fields._logic_k__BackingField;
      targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
      funcIndex = dataVals_k__BackingField->fields.funcIndex;
      IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                              (BattleLogicFunction_ProcListInArgs_o *)this,
                              0);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, const MethodInfo *))funcTarget->klass->vtable._5_GetFixNoEffectText.methodPtr)(
                                                                 funcTarget,
                                                                 funcTarget->klass->vtable._5_GetFixNoEffectText.method);
      if ( !logic_k__BackingField )
        goto LABEL_20;
      return BattleLogicFunction__getNoEffectObject(
               logic_k__BackingField,
               targetId_k__BackingField,
               funcIndex,
               dataVals_k__BackingField,
               IsCommandSideEffect,
               (System_String_o *)this,
               v5,
               0);
    case 3:
      v16 = v4->fields._dataVals_k__BackingField;
      if ( !v16 )
        goto LABEL_20;
      funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
      if ( !funcUnit_k__BackingField )
        goto LABEL_20;
      v18 = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
      if ( !v18 )
        goto LABEL_20;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._logic_k__BackingField;
      if ( !this )
        goto LABEL_20;
      return BattleLogicFunction__getGrayPopupActionData(
               (BattleLogicFunction_o *)this,
               funcTarget->fields._targetId_k__BackingField,
               v16->fields.funcIndex,
               v18->fields.funcEnt,
               0);
    case 2:
      v6 = v4->fields._dataVals_k__BackingField;
      if ( v6 )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._procArg_k__BackingField;
        if ( this )
        {
          v7 = v4->fields._logic_k__BackingField;
          v8 = funcTarget->fields._targetId_k__BackingField;
          v9 = v6->fields.funcIndex;
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                                                     (BattleLogicFunction_ProcListInArgs_o *)this,
                                                                     0);
          if ( v7 )
            return BattleLogicFunction__getMissObject(
                     v7,
                     v8,
                     v9,
                     v6,
                     (unsigned __int8)this & 1,
                     funcTarget->fields.invalidText,
                     v5,
                     0);
        }
      }
LABEL_20:
      sub_1C2D6EC(this, funcTarget);
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
    sub_1C2D6EC(0, method);
  return DataVals__GetAddIndividualty(dataVals_k__BackingField, 0);
}


BattleData_o *BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_1C2D6EC(this, method);
  return logic_k__BackingField->fields.data;
}


int32_t BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C2D6EC(this, method);
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
      sub_1C2D6EC(this, method);
    }
    funcIndividuality = FunctionEntity__GetFuncIndividuality((FunctionEntity_o *)this, 0);
    p_funcIndividuality->klass = (CGThumbnailListItem_c *)funcIndividuality;
    sub_1C2D434(p_funcIndividuality, (int32_t)funcIndividuality, v5, v6);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(0, method);
  return DataVals__IsAddIndividualty(dataVals_k__BackingField, 0);
}


bool BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddLinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(v3, v4);
  return BattleLogicFunction__IsIgnoreResistFunc(logic_k__BackingField, v3, 0);
}


System_Int32_array *BattleLogicFunctionProcess_FunctionUnitCheck__get_LinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C2D6EC(0, method);
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
  __int64 v13; // x2
  __int64 v14; // x25
  int32_t *v15; // x26
  const MethodInfo *v16; // x3
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v17; // x24
  Il2CppClass **v18; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v19; // x8
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4C2A372 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C2D490(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    byte_4C2A372 = 1;
  }
  if ( !targetlist )
LABEL_19:
    sub_1C2D6EC(this, targetlist);
  max_length = targetlist->max_length;
  v6 = sub_1C2D538(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, (unsigned int)max_length);
  v4->fields._funcTargetArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)v6;
  p_funcTargetArray_k__BackingField = &v4->fields._funcTargetArray_k__BackingField;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._funcTargetArray_k__BackingField, v6, v8, v9);
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
      v14 = (int)v12;
      v15 = &targetlist->m_Items[v12];
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppClass *))this->klass[1]._1.element_class)(
                                                                 this,
                                                                 (unsigned int)*v15,
                                                                 v4,
                                                                 this->klass[1]._1.castClass);
      if ( !funcTargetArray_k__BackingField )
        goto LABEL_19;
      v17 = this;
      if ( this )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C2D5CC(
                                                                   this,
                                                                   funcTargetArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v21 = sub_1C2D710(0);
          sub_1C2D5B8(v21, 0);
        }
      }
      if ( (unsigned int)v14 >= LODWORD(funcTargetArray_k__BackingField->max_length) )
        goto LABEL_18;
      v18 = &funcTargetArray_k__BackingField->obj.klass + v14;
      v18[4] = (Il2CppClass *)v17;
      sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v13, v16);
      v19 = *p_funcTargetArray_k__BackingField;
      if ( !*p_funcTargetArray_k__BackingField )
        goto LABEL_19;
      if ( (unsigned int)v14 >= LODWORD(v19->max_length) || (unsigned int)v14 >= LODWORD(targetlist->max_length) )
LABEL_18:
        sub_1C2D6F4(this, targetlist, v13);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v19->m_Items[v14];
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))this->klass[1]._1.image)(
        this,
        (unsigned int)*v15,
        v4,
        this->klass[1]._1.gc_desc);
      funcTargetArray_k__BackingField = v4->fields._funcTargetArray_k__BackingField;
      v12 = v14 + 1;
    }
    while ( max_length != (_DWORD)v14 + 1 );
  }
  return funcTargetArray_k__BackingField;
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A374 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_4C2A374 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  linkedToOtherList = (System_Collections_Generic_List_object__o *)this->fields.linkedToOtherList;
  if ( !linkedToOtherList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    linkedToOtherList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C2D6EC(v4, v5);
    v7 = *(DataVals_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&qword_20);
    if ( !v7 )
      sub_1C2D6EC(0, v5);
    if ( !DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed(v7, 0) )
      BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
        this,
        v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
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
        sub_1C2D6F4(this, linkedToSelf, method);
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
    sub_1C2D6EC(this, linkedToSelf);
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
  __int64 v12; // x1
  BattleLogicFunction_o *FuncMaster; // x0
  DataVals_o *v14; // x24
  DataVals_o *dataVals_k__BackingField; // x23

  this->fields._dataVals_k__BackingField = dataVals;
  p_dataVals_k__BackingField = &this->fields._dataVals_k__BackingField;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._dataVals_k__BackingField,
    (int32_t)dataVals,
    functionId,
    (const MethodInfo *)dataVals);
  FuncMaster = (BattleLogicFunction_o *)*(p_dataVals_k__BackingField - 2);
  if ( !FuncMaster )
    goto LABEL_12;
  v14 = *p_dataVals_k__BackingField;
  FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFuncMaster(FuncMaster, 0);
  if ( !v14 )
    goto LABEL_12;
  DataVals__SetDependDataVals(v14, (FunctionMaster_o *)FuncMaster, funcIndex, 0);
  FuncMaster = this->fields._logic_k__BackingField;
  if ( !FuncMaster )
    goto LABEL_12;
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionEntity(FuncMaster, functionId, 0);
  if ( !dataVals_k__BackingField )
    goto LABEL_12;
  DataVals__SetType_41456176(dataVals_k__BackingField, (FunctionEntity_o *)FuncMaster, *funcIndex, 0);
  if ( !dataVals )
    goto LABEL_12;
  FuncMaster = (BattleLogicFunction_o *)Target__IsFuncTargetTypeNoTarget(dataVals->fields.targetType, 0);
  if ( ((unsigned __int8)FuncMaster & 1) == 0 )
    return;
  if ( !actionData )
LABEL_12:
    sub_1C2D6EC(FuncMaster, v12);
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
  const MethodInfo *v19; // x3
  struct BattleLogicFunction_o *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  BattleLogicFunction_c **v23; // x8

  v4 = (BattleLogicFunctionProcess_FunctionUnitCheck_o **)this;
  if ( (byte_4C2A371 & 1) == 0 )
  {
    sub_1C2D490(&Individuality_TypeInfo);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
    byte_4C2A371 = 1;
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
        sub_1C2D6F4(this, funcUnitArray, method);
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
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &logic_k__BackingField->klass + procArg_k__BackingField_low;
            LODWORD(this->fields._procArg_k__BackingField) = procArg_k__BackingField_low + 1;
            v16[4] = (BattleLogicFunction_c *)v7;
            sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v7, v11, v12);
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
          v20 = this->fields._logic_k__BackingField;
          v21 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !v20 )
            break;
          v22 = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)v22 >= LODWORD(v20->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v7,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v20->klass + v22;
            LODWORD(this->fields._procArg_k__BackingField) = v22 + 1;
            v23[4] = (BattleLogicFunction_c *)v7;
            sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v7, (int32_t)method, v19);
          }
        }
      }
      max_length = funcUnitArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_32:
    sub_1C2D6EC(this, funcUnitArray);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._dataVals_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_funcTargetArray(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._funcTargetArray_k__BackingField = value;
  sub_1C2D434(
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicFunctionProcess_FunctionUnitCheck__set_procArg(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_ProcListInArgs_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._procArg_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._procArg_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
    sub_1C2D6EC(this, 0);
  return x->fields._targetId_k__BackingField == this->fields.targetId
      && this->fields.result == x->fields._result_k__BackingField;
}


void BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2D6EC(targetSvtData, *(_QWORD *)&id);
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
  BuffList_TYPE_array *v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4C2A381 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_8781/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/);
    byte_4C2A381 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_8781/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/,
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
                                                              (const MethodInfo_30DCF9C *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                v6,
                                (const MethodInfo_310DEDC *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !targetSvtData
    || (v5 = (BuffList_TYPE_array *)Instance, (Instance = (DataManager_o *)targetSvtData->fields.buffData) == 0)
    || (Instance = (DataManager_o *)BattleBuffData__getBuffList_45321240((BattleBuffData_o *)Instance, v5, 0, 0, 0)) == 0 )
  {
LABEL_13:
    sub_1C2D6EC(Instance, v5);
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
  klass = (int)this[1].klass;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getBuffList(v10, 84, 0, 0, 0);
  if ( !this )
    goto LABEL_18;
  if ( this[1].klass )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, (const MethodInfo *)action);
    BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(v13, v10, v14);
    goto LABEL_11;
  }
  HasRefuseBuff = BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(this, v10, v12);
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
    sub_1C2D6EC(this, action);
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
  if ( !actBuffData
    || (actBuffData->fields.procType = 6, !buffData)
    || (buffData->fields.param = this->fields.OverwriteClassId,
        (this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)this->fields.targetSvt) == 0) )
  {
    sub_1C2D6EC(this, actBuffData);
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
  __int64 v7; // x1
  bool result; // w0

  if ( (byte_4C2A363 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5416/*"ENABLE_OVERWRITE_CLASS_IDS"*/);
    byte_4C2A363 = 1;
  }
  p_OverwriteClassId = &this->fields.OverwriteClassId;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(
          this,
          &this->fields.OverwriteClassId,
          (const MethodInfo *)buffEnt) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( !ConstantStrMaster__ExistValueArray(Master_object, (System_String_o *)StringLiteral_5416/*"ENABLE_OVERWRITE_CLASS_IDS"*/, *p_OverwriteClassId, 0) )
  {
LABEL_10:
    result = 0;
    this->fields.invalidType = 1;
    return result;
  }
  Master_object = (ConstantStrMaster_o *)this->fields.targetSvt;
  if ( !Master_object )
LABEL_12:
    sub_1C2D6EC(Master_object, v7);
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

  if ( (byte_4C2A364 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2812/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_4C2A364 = 1;
  }
  classId = 0;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(this, &classId, v2) )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v4);
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1C2D6EC(0, v4);
  LogicClassId = BattleServantData__GetLogicClassId(targetSvt, 0);
  if ( LogicClassId != classId )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2812/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0);
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
  if ( (byte_4C2A365 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_4C2A365 = 1;
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
  this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
LABEL_18:
    sub_1C2D6EC(this, classId);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           *classId,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
    sub_1C2D6EC(0, actBuffData);
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
  __int64 v8; // x1
  int32_t ConvertBuffIdFromIndex; // w0
  BuffEntity_o *BuffEntity; // x0
  BuffEntity_o *v11; // x20
  const MethodInfo *v12; // x3

  this->fields.buffConvertEntity = buffConvertEntity;
  p_buffConvertEntity = &this->fields.buffConvertEntity;
  *((_BYTE *)p_buffConvertEntity + 8) = 0;
  sub_1C2D434((CGThumbnailListItem_o *)p_buffConvertEntity, (int32_t)buffConvertEntity, (int32_t)method, v3);
  if ( !buffConvertEntity )
    sub_1C2D6EC(v7, v8);
  ConvertBuffIdFromIndex = BuffConvertEntity__GetConvertBuffIdFromIndex(
                             buffConvertEntity,
                             this->fields.convertBuffIndex,
                             0);
  this->fields.convertBuffId = ConvertBuffIdFromIndex;
  BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, ConvertBuffIdFromIndex, 0);
  if ( BuffEntity )
  {
    v11 = BuffEntity;
    if ( BuffEntity__isCheckGroup(BuffEntity, 0)
      && BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
           this,
           v11,
           this->fields.targetSvt,
           v12) )
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
  Il2CppObject *v6; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v7; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  BattleBuffData_BuffData_o *current; // x22
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v15; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct FunctionEntity_o *funcEnt; // x8
  _BOOL8 IsTargetLimit; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v21; // x8
  DataVals_o *v22; // x0
  struct FunctionEntity_o *v23; // x8
  struct System_Int32_array *vals; // x8
  Il2CppObject *v25; // x24
  int32_t v26; // w23
  System_Int32_array *ParamArray; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  BattleServantData_o *targetSvt; // x0
  BattleBuffData_o *BuffData; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4C2A35D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_BuffConvertMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4C2A35D = 1;
  }
  memset(&v35, 0, sizeof(v35));
  entity = 0;
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_39;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_39;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 22, 0);
  v6 = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
    return (BuffConvertEntity_o *)v6;
  v7 = v4->fields._funcUnit_k__BackingField;
  if ( !v7 )
    goto LABEL_39;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v7->fields._procArg_k__BackingField;
  if ( !this )
    goto LABEL_39;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)BattleLogicFunction_ProcListInArgs__get_IsPassive(
                                                                      (BattleLogicFunction_ProcListInArgs_o *)this,
                                                                      0);
  v6 = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
    return (BuffConvertEntity_o *)v6;
  v8 = v4->fields._funcUnit_k__BackingField;
  if ( !v8 )
    goto LABEL_39;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v8->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_39;
  v6 = 0;
  if ( DataVals__isParam((DataVals_o *)this, 23, 0) )
    return (BuffConvertEntity_o *)v6;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v4->fields.targetSvt;
  if ( !this
    || (BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffList(
                                                                          (BattleServantData_o *)this,
                                                                          114,
                                                                          1,
                                                                          0,
                                                                          0),
        (this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                             BuffList,
                                                                             (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___)) == 0) )
  {
LABEL_39:
    sub_1C2D6EC(this, *(_QWORD *)&actorId);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = (BattleBuffData_BuffData_o *)v35.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BuffConvertMaster___);
    if ( !current )
      sub_1C2D6EC(Master_object, v12);
    if ( !Master_object )
      sub_1C2D6EC(0, v12);
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            current->fields.buffId,
            (const MethodInfo_3387DE4 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
    if ( v13 )
    {
      v15 = v4->fields._funcUnit_k__BackingField;
      if ( !v15 )
        sub_1C2D6EC(v13, v14);
      dataVals_k__BackingField = v15->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        sub_1C2D6EC(v13, v14);
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      if ( !funcEnt )
        sub_1C2D6EC(v13, v14);
      if ( !entity )
        sub_1C2D6EC(0, v14);
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
          sub_1C2D6EC(IsTargetLimit, v19);
        v22 = v21->fields._dataVals_k__BackingField;
        if ( !v22 )
          sub_1C2D6EC(0, v19);
        v23 = v22->fields.funcEnt;
        if ( !v23 )
          sub_1C2D6EC(v22, v19);
        vals = v23->fields.vals;
        if ( !vals )
          sub_1C2D6EC(v22, v19);
        if ( !LODWORD(vals->max_length) )
          sub_1C2D6F4(v22, v19, v20);
        v25 = entity;
        v26 = vals->m_Items[0];
        ParamArray = DataVals__GetParamArray(v22, 112, 0);
        if ( !v25 )
          sub_1C2D6EC(ParamArray, v28);
        if ( BuffConvertEntity__TryGetConvertBuffIndex(
               (BuffConvertEntity_o *)v25,
               &v4->fields.convertBuffIndex,
               v26,
               ParamArray,
               0) )
        {
          targetSvt = v4->fields.targetSvt;
          if ( !targetSvt )
            sub_1C2D6EC(0, v29);
          BuffData = BattleServantData__get_BuffData(targetSvt, 0);
          if ( !BuffData )
            sub_1C2D6EC(0, v32);
          if ( BattleBuffData__checkBuffSuccessful(BuffData, current, 1, 0) )
          {
            v6 = entity;
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v35,
              (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
            return (BuffConvertEntity_o *)v6;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return 0;
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  BattleLogicFunctionProcess_FunctionTargetCheck__Init(
    (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
    targetId,
    funcUnit,
    method);
  if ( !funcUnit
    || (logic_k__BackingField = funcUnit->fields._logic_k__BackingField) == 0
    || (data = logic_k__BackingField->fields.data) == 0 )
  {
    sub_1C2D6EC(data, v8);
  }
  ServantData = BattleData__getServantData(data, targetId, 0);
  this->fields.targetSvt = ServantData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetSvt, (int32_t)ServantData, v11, v12);
}


bool BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BuffEntity_o *buffEnt,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x8
  System_Collections_Generic_List_int__o *v10; // x22
  unsigned __int64 v11; // x24
  int32_t v12; // w23
  struct System_Collections_Generic_List_int__o *v13; // x8

  if ( (byte_4C2A35E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C2A35E = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                 AttachTargetList_k__BackingField,
                                                                                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  v9 = *(_QWORD *)&AttachTargetList_k__BackingField->fields._size;
  v10 = AttachTargetList_k__BackingField;
  if ( (int)v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1C2D6F4(AttachTargetList_k__BackingField, buffEnt, v8);
      if ( !targetSvt )
        break;
      v12 = *((_DWORD *)&v10->fields._syncRoot + v11);
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleServantData__get_BuffData(
                                                                                     targetSvt,
                                                                                     0);
      if ( !buffEnt || !AttachTargetList_k__BackingField )
        break;
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleBuffData__checkBuffGroup(
                                                                                     (BattleBuffData_o *)AttachTargetList_k__BackingField,
                                                                                     buffEnt->fields.buffGroup,
                                                                                     v12,
                                                                                     0);
      if ( ((unsigned __int8)AttachTargetList_k__BackingField & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
          (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this,
          v12,
          v8);
      LODWORD(v9) = v10->fields._size;
      if ( (__int64)++v11 >= (int)v9 )
        goto LABEL_14;
    }
LABEL_19:
    sub_1C2D6EC(AttachTargetList_k__BackingField, buffEnt);
  }
LABEL_14:
  if ( (byte_4C2A357 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C2A357 = 1;
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
  __int64 convertBuffId; // x1
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
  convertBuffId = (unsigned int)this->fields.convertBuffId;
  v9 = BuffEntity;
  if ( (_DWORD)convertBuffId )
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
            sub_1C2D434((CGThumbnailListItem_o *)(v9 + 104), (int32_t)GrayActionBuffData, v15, v16);
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
                  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 72), (int32_t)EffectList, v18, v19);
                  BuffEntity = this->fields.buffConvertEntity;
                  if ( BuffEntity )
                  {
                    OverwritePopupTextFromIndex = BuffConvertEntity__GetOverwritePopupTextFromIndex(
                                                    (BuffConvertEntity_o *)BuffEntity,
                                                    this->fields.convertBuffIndex,
                                                    v13->fields.name,
                                                    0);
                    *((_QWORD *)v9 + 7) = OverwritePopupTextFromIndex;
                    sub_1C2D434((CGThumbnailListItem_o *)(v9 + 56), (int32_t)OverwritePopupTextFromIndex, v21, v22);
                    return (BattleActionData_BuffData_o *)v9;
                  }
                }
              }
            }
          }
        }
      }
LABEL_13:
      sub_1C2D6EC(BuffEntity, convertBuffId);
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

  if ( (byte_4C2A35F & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_BattleSkillInfoData___);
    sub_1C2D490(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_1C2D490(&Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__);
    sub_1C2D490(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_4C2A35F = 1;
  }
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1C2D6EC(0, action);
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
    _9__0_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v10,
      Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      0);
    static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__0_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v12, v13);
  }
  v14 = BasicHelper__Any_object__51084700(
          v8,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_BattleSkillInfoData___);
  if ( !v14 )
    this->fields.invalidType = 1;
  return v14;
}


void BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2A360 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_4C2A360 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *)v1;
  sub_1C2D434(
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
    sub_1C2D6EC(this, 0);
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
  __int64 v9; // x2
  __int64 v10; // x8
  BattleServantData_o *v11; // x21
  bool v12; // w23
  unsigned __int64 v13; // x22
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
    sub_1C2D6EC(targetSvt, action);
  }
  v10 = *(_QWORD *)&targetSvt->fields.uniqueId;
  v11 = targetSvt;
  v12 = (int)v10 > 0;
  if ( (int)v10 >= 1 )
  {
    v13 = 0;
    p_userSvtId = &targetSvt->fields.userSvtId;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v10 )
LABEL_21:
        sub_1C2D6F4(targetSvt, action, v9);
      if ( *((_BYTE *)&p_userSvtId->fields.currentCryptoKey + v13) )
      {
        if ( !v7 )
          goto LABEL_20;
        if ( v13 >= (unsigned int)v7->fields.uniqueId )
          goto LABEL_21;
        if ( *((_BYTE *)&v7->fields.userSvtId.fields.currentCryptoKey + v13) )
          break;
        targetSvt = this->fields.targetSvt;
        if ( !targetSvt )
          goto LABEL_20;
        targetSvt = (BattleServantData_o *)BattleServantData__isUseSelfSkill(targetSvt, v13, 0);
        if ( ((unsigned __int8)targetSvt & 1) == 0 )
          break;
      }
      LODWORD(v10) = v11->fields.uniqueId;
      v12 = (__int64)++v13 < (int)v10;
      if ( (__int64)v13 >= (int)v10 )
        return !v12;
    }
    this->fields.invalidType = 1;
  }
  return !v12;
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
        sub_1C2D434((CGThumbnailListItem_o *)&buffData->fields.generalParams, (int32_t)this, v11, v12),
        (this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)v7->fields.targetSvt) == 0)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0),
        (v13 = v7->fields._funcUnit_k__BackingField) == 0)
    || (procArg_k__BackingField = v13->fields._procArg_k__BackingField) == 0 )
  {
LABEL_8:
    sub_1C2D6EC(this, actBuffData);
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
  if ( (byte_4C2A36B & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)sub_1C2D490(&BattleBuffData_FieldChangeData_TypeInfo);
    byte_4C2A36B = 1;
  }
  funcUnit_k__BackingField = v8->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleBuffData_FieldChangeData_o *)sub_1C2D6DC(BattleBuffData_FieldChangeData_TypeInfo);
  BattleBuffData_FieldChangeData___ctor_45567512(v11, dataVals_k__BackingField, 0);
  if ( !buffData
    || (buffData->fields.fieldChangeData = v11,
        sub_1C2D434((CGThumbnailListItem_o *)&buffData->fields.fieldChangeData, (int32_t)v11, v12, v13),
        buffData->fields.delAfterProcType = 1,
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(v8, actBuffData, buffData, 0, 0, v14),
        (fieldChangeData = buffData->fields.fieldChangeData) == 0) )
  {
LABEL_7:
    sub_1C2D6EC(this, actBuffData);
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

  if ( (byte_4C2A382 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
    byte_4C2A382 = 1;
  }
  v4 = (Il2CppObject *)sub_1C2D6DC(BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
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

  if ( (byte_4C2A36C & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_FieldBuffData_TypeInfo);
    byte_4C2A36C = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_1C2D6DC(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4C2A36D & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_4C2A36D = 1;
  }
  v2 = (Il2CppObject *)sub_1C2D6DC(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
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
        sub_1C2D434((CGThumbnailListItem_o *)&buffData->fields.generalParams, (int32_t)this, v10, v11),
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(v7, actBuffData, buffData, 0, 0, v12),
        (v13 = v7->fields._funcUnit_k__BackingField) == 0)
    || (procArg_k__BackingField = v13->fields._procArg_k__BackingField) == 0 )
  {
LABEL_7:
    sub_1C2D6EC(this, actBuffData);
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
    sub_1C2D6EC(this, action);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)funcTarget, (int32_t)method, v3);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(0, buffIndiv);
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
  sub_1C2D434((CGThumbnailListItem_o *)text, 0, (int32_t)method, v4);
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
    sub_1C2D6EC(target, isActiveOnly);
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
  sub_1C2D434((CGThumbnailListItem_o *)missText, 0, (int32_t)opSvt, (const MethodInfo *)missText);
  return 0.0;
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetField__GetBuffTargetCardIndexArray(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A36E & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C2A36E = 1;
  }
  return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
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
    sub_1C2D6EC(0, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)missText, 0, (int32_t)opSvt, (const MethodInfo *)missText);
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
    sub_1C2D6EC(target, indiv);
  return BattleBuffData__getSameIndivualityBuffSum((BattleBuffData_o *)target, indiv, isActiveOnly, 0, 0, 0);
}


void BattleLogicFunctionProcess_WrapTargetField__InitPartial(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x1

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data )
    sub_1C2D6EC(0, v4);
  FieldEnvData_k__BackingField = Data->fields._FieldEnvData_k__BackingField;
  this->fields.target = FieldEnvData_k__BackingField;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.target, (int32_t)FieldEnvData_k__BackingField, v5, v6);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, buffIndiv);
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
    sub_1C2D6EC(0, buffIndiv);
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
    sub_1C2D6EC(BaseVals, v6);
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
    sub_1C2D6EC(this, isActiveOnly);
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
    sub_1C2D6EC(0, buffIndiv);
  return BattleServantData__getBuffTOLERANCEMagnification(target, buffIndiv, opSvt, missText, 0);
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetServant__GetBuffTargetCardIndexArray(
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
    sub_1C2D6EC(BaseVals, v6);
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
    sub_1C2D6EC(0, userCommandCodeId);
  return BattleServantData__GetCommandCardIndex(target, userCommandCodeId, 0);
}


System_Int32_array *BattleLogicFunctionProcess_WrapTargetServant__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(this, buffIndiv);
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
    sub_1C2D6EC(0, indiv);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || !Data )
    sub_1C2D6EC(Data, v4);
  ServantData = BattleData__getServantData(Data, funcTarget->fields._targetId_k__BackingField, 0);
  this->fields.target = ServantData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.target, (int32_t)ServantData, v7, v8);
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
  if ( DataVals__TryGetParam((DataVals_o *)BaseVals, 145, &param, 0) )
  {
    BaseVals = this->fields.target;
    if ( BaseVals )
    {
      DefeatPoint = BattleServantData__getDefeatPoint(BaseVals, 0);
      return (DefeatPoint < 1) ^ (param > 0);
    }
LABEL_7:
    sub_1C2D6EC(BaseVals, v4);
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
  if ( !DataVals__TryGetParam(BaseVals, 142, &param, 0) )
  {
    v6 = 1;
    return v6 & 1;
  }
  BaseVals = (DataVals_o *)this->fields.target;
  if ( !BaseVals )
LABEL_7:
    sub_1C2D6EC(BaseVals, v4);
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
    sub_1C2D6EC(0, method);
  return BattleServantData__get_BuffData(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target )
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(0, method);
  return BattleServantData__checkPlayer(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C2D6EC(0, method);
  return BattleServantData__isGuts(target, 0);
}


bool BattleLogicFunctionProcess_WrapTargetServant__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(Data, v4);
  return ((__int64 (__fastcall *)(BattleData_o *, struct BattleServantData_o *, _QWORD))Data->klass[1]._2.unity_user_data)(
           Data,
           this->fields.target,
           *(_QWORD *)&Data->klass[1]._2.initializationExceptionGCHandle);
}