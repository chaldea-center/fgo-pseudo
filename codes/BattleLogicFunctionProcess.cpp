void __fastcall BattleLogicFunctionProcess___ctor(BattleLogicFunctionProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_AddStateProcess___ctor(
        BattleLogicFunctionProcess_AddStateProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_AddStateShortProcess___ctor(
        BattleLogicFunctionProcess_AddStateShortProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__CheckTargetIndividuality(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        DataVals_o *baseVals,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        FunctionEntity_o *funcEnt,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t Param; // w22
  char v18; // w23
  __int64 v19; // x21
  __int64 v20; // x20
  const MethodInfo *v21; // x4
  bool TargetUniqueIdArray; // w24
  bool v23; // w26
  System_Collections_Generic_List_int__o *v24; // x25
  __int64 v25; // x2
  System_Int32_array *v26; // x24
  __int64 v27; // x8
  unsigned __int64 v28; // x21
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v30; // x29
  System_Collections_Generic_List_int__o *v31; // x28
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v33; // x28
  System_Int32_array *v34; // x29
  System_Int32_array_array *v35; // x29
  int32_t v36; // w19
  int32_t v37; // w21
  int32_t v38; // w20
  System_Int32_array *v39; // x19
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_c *klass; // x10
  __int64 v43; // x12
  unsigned int v44; // w11
  __int64 v45; // x9
  __int64 v46; // x12
  System_Int32_array *v47; // x20
  System_Int32_array_array *v48; // x20
  __int64 v50; // [xsp+8h] [xbp-98h]
  bool v51; // [xsp+10h] [xbp-90h]
  int32_t count; // [xsp+18h] [xbp-88h]
  int32_t countEqual; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t countLower[2]; // [xsp+20h] [xbp-80h] BYREF
  System_Int32_array *targetIdArray; // [xsp+28h] [xbp-78h] BYREF
  System_Int32_array_array *overwriteTvals; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *originalTvals; // [xsp+38h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_4B479C5 & 1) == 0 )
  {
    sub_1BDB878(&Individuality_TypeInfo, baseVals);
    sub_1BDB878(&int___TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__AddRange__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v14);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1BDB878(
                                                                     &System_Collections_Generic_List_int__TypeInfo,
                                                                     v15);
    byte_4B479C5 = 1;
  }
  overwriteTvals = 0LL;
  originalTvals = 0LL;
  *(_QWORD *)countLower = 0LL;
  targetIdArray = 0LL;
  countEqual = 0;
  if ( !funcEnt )
    goto LABEL_66;
  FunctionEntity__GetTargetVals(funcEnt, &originalTvals, &overwriteTvals, 0LL);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)originalTvals,
                                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BasicHelper__IsNullOrEmpty(
                                                                     (System_Collections_ICollection_o *)overwriteTvals,
                                                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
  }
  if ( !baseVals )
    goto LABEL_66;
  Param = DataVals__GetParam(baseVals, 63, 0, 0LL);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__isParam(baseVals, 140, 0LL);
  if ( !wrapTarget )
    goto LABEL_66;
  v18 = (char)this;
  v19 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))wrapTarget->klass->vtable._15_unknown.method)(
          wrapTarget,
          wrapTarget->klass->vtable._16_unknown.methodPtr);
  v20 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, bool, _QWORD, _QWORD, Il2CppMethodPointer))wrapTarget->klass->vtable._16_unknown.method)(
          wrapTarget,
          Param < 1,
          0LL,
          v18 & 1,
          wrapTarget->klass->vtable._17_unknown.methodPtr);
  TargetUniqueIdArray = BattleLogicFunctionProcess_BaseFunctionTypeProcess__TryGetTargetUniqueIdArray(
                          v10,
                          baseVals,
                          actionData,
                          &targetIdArray,
                          v21);
  v23 = DataVals__TryGetFuncCheckTargetIndividualityCount(baseVals, &countLower[1], countLower, &countEqual, 0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( TargetUniqueIdArray )
  {
    v51 = TargetUniqueIdArray;
    v26 = targetIdArray;
    if ( !targetIdArray )
      goto LABEL_66;
    v27 = *(_QWORD *)&targetIdArray->max_length;
    v50 = v19;
    if ( (int)v27 >= 1 )
    {
      count = 0;
      v28 = 0LL;
      while ( v28 < (unsigned int)v27 )
      {
        logic_k__BackingField = v10->fields._logic_k__BackingField;
        if ( !logic_k__BackingField )
          goto LABEL_66;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)logic_k__BackingField->fields.data;
        if ( !this )
          goto LABEL_66;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleData__getServantData(
                                                                         (BattleData_o *)this,
                                                                         v26->m_Items[v28 + 1],
                                                                         0LL);
        if ( this )
        {
          v30 = this;
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__isLogicDeadAndNoRevive(
                                                                           (BattleServantData_o *)this,
                                                                           0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v31 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v31,
              (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__getIndividualities(
                                                                             (BattleServantData_o *)v30,
                                                                             0LL,
                                                                             1,
                                                                             0,
                                                                             0LL);
            if ( !v31 )
              goto LABEL_66;
            System_Collections_Generic_List_int___AddRange(
              v31,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v30[33].klass;
            if ( !this )
              goto LABEL_66;
            BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffIndividualities(
                                                                                   (BattleBuffData_o *)this,
                                                                                   Param < 1,
                                                                                   0,
                                                                                   v18 & 1,
                                                                                   0,
                                                                                   0LL,
                                                                                   0LL);
            System_Collections_Generic_List_int___AddRange(
              v31,
              BuffIndividualities,
              (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                             v31,
                                                                             (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v24 )
              goto LABEL_66;
            v33 = this;
            System_Collections_Generic_List_int___AddRange(
              v24,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v23 )
            {
              if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0LL) )
              {
                v34 = originalTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCount(
                                                                                 (System_Int32_array *)v33,
                                                                                 v34,
                                                                                 0LL);
              }
              else
              {
                v35 = overwriteTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCountMultiIndividuality(
                                                                                 (System_Int32_array *)v33,
                                                                                 v35,
                                                                                 0LL);
              }
              count += (int)this;
            }
          }
        }
        LODWORD(v27) = v26->max_length;
        if ( (__int64)++v28 >= (int)v27 )
          goto LABEL_33;
      }
LABEL_67:
      sub_1BDBADC(this, baseVals, v25);
    }
    count = 0;
LABEL_33:
    v19 = v50;
    TargetUniqueIdArray = v51;
    if ( v23 )
    {
      v36 = countLower[0];
      v37 = countLower[1];
      v38 = countEqual;
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
      return Individuality__IsMatchAboveBelowEqual(count, v37, v36, v38, 0LL);
    }
  }
  if ( !v19 || !v20 )
LABEL_66:
    sub_1BDBAD4(this, baseVals);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1BDB920(
                                                                   int___TypeInfo,
                                                                   (unsigned int)(*(_DWORD *)(v20 + 24)
                                                                                + *(_DWORD *)(v19 + 24)));
  if ( !TargetUniqueIdArray )
  {
    v40 = *(_QWORD *)(v19 + 24);
    v39 = (System_Int32_array *)this;
    if ( (int)v40 >= 1 )
    {
      v41 = 0LL;
      while ( v41 < (unsigned int)v40 )
      {
        if ( !this )
          goto LABEL_66;
        if ( v41 >= LODWORD(this[1].klass) )
          break;
        *((_DWORD *)&this[1].monitor + v41) = *(_DWORD *)(v19 + 32 + 4 * v41);
        if ( (__int64)++v41 >= (int)v40 )
          goto LABEL_50;
      }
      goto LABEL_67;
    }
    if ( this )
    {
LABEL_50:
      klass = this[1].klass;
      if ( (int)v40 <= (__int64)(int)klass )
        v43 = (int)klass;
      else
        v43 = (int)v40;
      if ( (int)v40 < (__int64)(int)klass )
      {
        v44 = *(_DWORD *)(v20 + 24);
        v45 = 0LL;
        v46 = v43 - (int)v40;
        while ( (unsigned int)v45 < v44 && (int)v40 + (int)v45 < (unsigned int)klass )
        {
          *((_DWORD *)&this[1].monitor + (int)v40 + v45) = *(_DWORD *)(v20 + 4LL * (int)v45 + 32);
          if ( v46 == ++v45 )
            goto LABEL_58;
        }
        goto LABEL_67;
      }
      goto LABEL_58;
    }
    goto LABEL_66;
  }
  if ( !v24 )
    goto LABEL_66;
  v39 = System_Collections_Generic_List_int___ToArray(
          v24,
          (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_58:
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0LL) )
  {
    v47 = originalTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedIndividualities(v39, v47, 0LL);
  }
  else
  {
    v48 = overwriteTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedMultiIndividuality(v39, v48, 0LL);
  }
}


void __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsNeedInit(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *logic,
        const MethodInfo *method)
{
  return this->fields._logic_k__BackingField != logic;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsPreCheckTargetsAvailable(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        FunctionEntity_o *funcEnt,
        int32_t actorUniqueId,
        const MethodInfo *method)
{
  return 1;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_FunctionTargetCheck_o *__fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v4; // x19

  if ( (byte_4B479C4 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo, *(_QWORD *)&targetId);
    byte_4B479C4 = 1;
  }
  v4 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
  BattleLogicFunctionProcess_FunctionTargetCheck___ctor(v4, 0LL);
  return v4;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__TryGetTargetUniqueIdArray(
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

  *targetIdArray = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)targetIdArray, 0, (int32_t)actionData, (const MethodInfo *)targetIdArray);
  if ( !baseVals )
    goto LABEL_7;
  v9 = DataVals__GetFuncCheckTargetIndividualityTargetType(baseVals, 0LL);
  v11 = v9;
  if ( (v9 & 0x80000000) == 0 )
  {
    logic_k__BackingField = this->fields._logic_k__BackingField;
    if ( logic_k__BackingField && actionData )
    {
      data = logic_k__BackingField->fields.data;
      actorId = actionData->fields.actorId;
      targetId = actionData->fields.targetId;
      PTTargetId = BattleActionData__getPTTargetId(actionData, 0LL);
      TargetIds = Target__getTargetIds(data, actorId, targetId, PTTargetId, v11, 0LL, 0LL);
      *targetIdArray = TargetIds;
      sub_1BDB81C((CGThumbnailListItem_o *)targetIdArray, (int32_t)TargetIds, v18, v19);
      return v11 >= 0;
    }
LABEL_7:
    sub_1BDBAD4(v9, v10);
  }
  return v11 >= 0;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCommonCondition(
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
                                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__IsEqualsTo1(
                                                                     dataVals_k__BackingField,
                                                                     158,
                                                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
  }
  if ( !WrapTarget_k__BackingField )
    goto LABEL_47;
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._7_unknown.method)(
          WrapTarget_k__BackingField,
          WrapTarget_k__BackingField->klass->vtable._8_unknown.methodPtr) & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._8_unknown.method)(
                                                                     WrapTarget_k__BackingField,
                                                                     WrapTarget_k__BackingField->klass->vtable._9_unknown.methodPtr);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_47;
      if ( FunctionEntity__isTargetEnemy(funcEnt, 0LL) )
        goto LABEL_17;
    }
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._9_unknown.method)(
                                                                     WrapTarget_k__BackingField,
                                                                     WrapTarget_k__BackingField->klass->vtable._10_unknown.methodPtr);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_47;
      if ( FunctionEntity__isTargetPlayer(funcEnt, 0LL) )
        goto LABEL_17;
    }
    if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._10_unknown.method)(
            WrapTarget_k__BackingField,
            WrapTarget_k__BackingField->klass->vtable._11_unknown.methodPtr) & 1) != 0 )
    {
LABEL_17:
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__isCheckDead(
                                                                       dataVals_k__BackingField,
                                                                       0LL);
      if ( ((unsigned __int8)this & 1) == 0 && !dataVals_k__BackingField->fields.flgBoost )
      {
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._11_unknown.method)(
                                                                         WrapTarget_k__BackingField,
                                                                         WrapTarget_k__BackingField->klass->vtable._12_unknown.methodPtr);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._12_unknown.method)(
                                                                           WrapTarget_k__BackingField,
                                                                           WrapTarget_k__BackingField->klass->vtable._13_unknown.methodPtr);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._13_unknown.method)(
                                                                             WrapTarget_k__BackingField,
                                                                             WrapTarget_k__BackingField->klass->vtable._14_unknown.methodPtr);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._14_unknown.method)(
                                                                               WrapTarget_k__BackingField,
                                                                               WrapTarget_k__BackingField->klass->vtable._15_unknown.methodPtr);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !funcEnt )
                  goto LABEL_47;
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)FuncList__Check(
                                                                                 43,
                                                                                 funcEnt->fields.funcType,
                                                                                 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)FuncList__Check(
                                                                                   45,
                                                                                   funcEnt->fields.funcType,
                                                                                   0LL);
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
        v14 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._8_unknown.method)(
                WrapTarget_k__BackingField,
                WrapTarget_k__BackingField->klass->vtable._9_unknown.methodPtr);
        BattleActionData__setFuncTargetPlayerType(action, funcIndex, v14 & 1, 0LL);
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
            BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, 0LL);
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
                                                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_38:
            v19 = v8->fields._logic_k__BackingField;
            if ( v19 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v19->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, targetId_k__BackingField, 0LL);
                if ( BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
                       (BattleLogicFunctionProcess_FunctionUnitCheck_o *)ServantData,
                       dataVals_k__BackingField,
                       ServantData,
                       v21)
                  && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._24_unknown.method)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass->vtable._25_unknown.methodPtr) & 1) != 0
                  && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._25_unknown.method)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass->vtable._26_GetAddBaseValue.methodPtr) & 1) != 0 )
                {
                  return 1;
                }
                BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, 0LL);
                return 0;
              }
            }
            goto LABEL_47;
          }
        }
        else if ( !DataVals__isShowQuestNoEffect(dataVals_k__BackingField, 0LL) )
        {
          return 0;
        }
        result = 0;
        funcTarget->fields.invalidType = 1;
        return result;
      }
LABEL_47:
      sub_1BDBAD4(this, action);
    }
  }
  return 0;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCondition(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  bool result; // w0

  if ( !funcTarget )
    sub_1BDBAD4(this, action);
  result = 1;
  funcTarget->fields.isFixResult = 0;
  return result;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkExecutable(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  if ( !funcTarget )
    sub_1BDBAD4(this, action);
  funcTarget->fields.isFixResult = 1;
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *))this->klass->vtable._6_checkCommonCondition.method)(this) & 1) != 0 )
    return ((__int64 (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))this->klass->vtable._7_checkCondition.method)(
             this,
             action,
             funcTarget,
             this->klass->vtable._8_MakeFunctionTargetCheck.methodPtr);
  else
    return 0;
}


BattleData_o *__fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_1BDBAD4(this, method);
  return logic_k__BackingField->fields.data;
}


BattleLogicFunction_o *__fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_logic(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  return this->fields._logic_k__BackingField;
}


void __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__init(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *logic,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logic_k__BackingField = logic;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)logic, (int32_t)method, v3);
}


void __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__set_logic(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logic_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleLogicFunctionProcess_ChangeBgmCheck___ctor(
        BattleLogicFunctionProcess_ChangeBgmCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_ChangeBgmCheck__AddBuff(
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
  if ( (byte_4B479AB & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_1BDB878(
                                                            &BattleBuffData_ChangeBgmData_TypeInfo,
                                                            actBuffData);
    byte_4B479AB = 1;
  }
  if ( !buffData
    || (buffData->fields.delAfterProcType = 3,
        (this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)v9->fields.targetSvt) == 0LL)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL),
        (targetSvt = v9->fields.targetSvt) == 0LL)
    || (funcUnit_k__BackingField = v9->fields._funcUnit_k__BackingField) == 0LL )
  {
    sub_1BDBAD4(this, actBuffData);
  }
  uniqueId = targetSvt->fields.uniqueId;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v14 = (BattleBuffData_ChangeBgmData_o *)sub_1BDBAC4(BattleBuffData_ChangeBgmData_TypeInfo);
  BattleBuffData_ChangeBgmData___ctor_44677864(v14, uniqueId, buffData, dataVals_k__BackingField, 0LL);
  buffData->fields.changeBgmData = v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&buffData->fields.changeBgmData, (int32_t)v14, v15, v16);
}


void __fastcall BattleLogicFunctionProcess_ChangeBgmCheck__AfterAddBuffProc(
        BattleLogicFunctionProcess_ChangeBgmCheck_o *this,
        BattleActionData_o *mainAction,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleActionData_o *v7; // x20
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleBuffData_ChangeBgmData_o *changeBgmData; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  __int64 v13; // x20
  BattleActionEffect_ChangeBgmBuff_o *v14; // x20

  v7 = mainAction;
  if ( (byte_4B479AC & 1) == 0 )
  {
    sub_1BDB878(&BattleActionEffect_ChangeBgmBuff_TypeInfo, mainAction);
    byte_4B479AC = 1;
  }
  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_16;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  funcUnit_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
                                                                                 funcUnit_k__BackingField,
                                                                                 0LL);
  if ( !buffData || !procArg_k__BackingField )
    goto LABEL_16;
  changeBgmData = buffData->fields.changeBgmData;
  mainAction = (BattleActionData_o *)funcUnit_k__BackingField;
  if ( !procArg_k__BackingField->fields._IsTreasureDvc_k__BackingField )
    goto LABEL_19;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_16;
  if ( externalArg->fields.isPassive )
  {
LABEL_19:
    if ( funcUnit_k__BackingField )
    {
      if ( changeBgmData )
      {
        v13 = *(_QWORD *)&funcUnit_k__BackingField[1].fields.questFuncFlg;
        funcUnit_k__BackingField = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleBuffData_ChangeBgmData__MakeBgmGenerator(
                                                                                       buffData->fields.changeBgmData,
                                                                                       (BattleData_o *)funcUnit_k__BackingField,
                                                                                       0LL);
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64, BattleLogicFunctionProcess_FunctionUnitCheck_o *, __int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 408LL))(
            v13,
            funcUnit_k__BackingField,
            2LL,
            0LL,
            *(_QWORD *)(*(_QWORD *)v13 + 416LL));
          v14 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1BDBAC4(BattleActionEffect_ChangeBgmBuff_TypeInfo);
          BattleActionEffect_ChangeBgmBuff___ctor(v14, 0LL);
          if ( actBuffData )
          {
            BattleActionData_BuffData__SetActionEffectProc(actBuffData, (BattleActionEffect_Base_o *)v14, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1BDBAD4(funcUnit_k__BackingField, mainAction);
  }
  if ( !v7 )
    goto LABEL_16;
  BattleActionData__SetTreasureDvcAfterChangeBgm(v7, changeBgmData, 0LL);
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateProcess___ctor(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__CheckCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v6; // x29
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x27
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w22
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x23
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x25
  FunctionEntity_o *funcEnt; // x24
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v19; // x26
  struct System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_c *klass; // x28
  BuffEntity_o *v22; // x24
  System_Int32_array *ParamArray; // x0
  BattleLogicFunction_o *v24; // x28
  bool isDisabledBuff; // w28
  struct BattleLogicFunction_o *v26; // x8
  struct BattleLogicFunction_o *v27; // x8
  int Param; // w29
  const MethodInfo *v29; // x1
  int32_t v30; // w27
  bool result; // w0
  float v32; // s0
  float v33; // s0
  int32_t v34; // w26
  __int64 v35; // x26
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x4
  int32_t v38; // w8
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t Value; // w0
  System_Int32_array *vals; // x21
  int32_t v43; // w23
  __int64 v44; // x2
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v45; // x22
  struct System_String_o *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t Next; // [xsp+Ch] [xbp-74h]
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v50; // [xsp+10h] [xbp-70h]
  __int64 v51; // [xsp+18h] [xbp-68h] BYREF

  v6 = this;
  if ( (byte_4B479C7 & 1) == 0 )
  {
    sub_1BDB878(&Individuality_TypeInfo, action);
    sub_1BDB878(&int___TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1BDB878(&LocalizationManager_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_12324/*"STATUS_UP_BUFF"*/, v10);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1BDB878(&StringLiteral_2801/*"BATTLE_GUARD_FUNCTION"*/, v11);
    byte_4B479C7 = 1;
  }
  v51 = 0LL;
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
                                                                 0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_77;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v19 = this;
  ((void (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))funcTarget->klass->vtable._17_InitPrevCheckCondition.method)(
    funcTarget,
    action,
    WrapTarget_k__BackingField,
    funcTarget->klass->vtable._18_GetAttachTargetArray.methodPtr);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetCardIndex(dataVals_k__BackingField, 0LL);
  if ( ((unsigned int)this & 0x80000000) == 0
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetCardIndividuality(
                                                                       dataVals_k__BackingField,
                                                                       0LL),
        ((unsigned int)this & 0x80000000) == 0) )
  {
    CardIdsIndexList_k__BackingField = funcTarget->fields._CardIdsIndexList_k__BackingField;
    if ( !CardIdsIndexList_k__BackingField )
      goto LABEL_77;
    if ( CardIdsIndexList_k__BackingField->fields._size <= 0 )
    {
LABEL_55:
      result = 0;
      v38 = 1;
LABEL_56:
      funcTarget->fields.invalidType = v38;
      return result;
    }
  }
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_77;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                 (BattleLogicFunction_o *)this,
                                                                 funcEnt,
                                                                 0LL);
  if ( !this
    || (klass = this[2].klass,
        v22 = (BuffEntity_o *)this,
        ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 112, 0LL),
        this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)CommonFunction__JoinIndiv(
                                                                       (System_Int32_array *)klass,
                                                                       ParamArray,
                                                                       0LL),
        v50 = this,
        !procArg_k__BackingField)
    || (v24 = v6->fields._logic_k__BackingField,
        this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction_ProcListInArgs__get_IsPassive(
                                                                       procArg_k__BackingField,
                                                                       0LL),
        !v24) )
  {
LABEL_77:
    sub_1BDBAD4(this, action);
  }
  isDisabledBuff = BattleLogicFunction__isDisabledBuff(v24, (unsigned __int8)this & 1, dataVals_k__BackingField, 0LL);
  if ( isDisabledBuff )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__IsForciblyAddState(
                                                                   dataVals_k__BackingField,
                                                                   0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_27;
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._23_unknown.method)(
                                                                   WrapTarget_k__BackingField,
                                                                   v50,
                                                                   v19,
                                                                   WrapTarget_k__BackingField->klass->vtable._24_unknown.methodPtr);
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
                                                                   0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_36;
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._17_unknown.method)(
                                                                   WrapTarget_k__BackingField,
                                                                   v50,
                                                                   v19,
                                                                   WrapTarget_k__BackingField->klass->vtable._18_unknown.methodPtr);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      0LL);
    return 0;
  }
LABEL_27:
  v26 = v6->fields._logic_k__BackingField;
  if ( !v26 )
    goto LABEL_77;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
                                                                 procArg_k__BackingField,
                                                                 targetId_k__BackingField,
                                                                 dataVals_k__BackingField,
                                                                 v26->fields.data,
                                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  v27 = v6->fields._logic_k__BackingField;
  if ( !v27 )
    goto LABEL_77;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
          procArg_k__BackingField,
          targetId_k__BackingField,
          dataVals_k__BackingField,
          v27->fields.data,
          0LL) )
    goto LABEL_36;
  Param = DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
  if ( (Param & 0x80000000) == 0 )
    goto LABEL_34;
  if ( !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          0LL) )
  {
LABEL_36:
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      dataVals_k__BackingField,
      0LL);
    return 0;
  }
  Param = BattleUtility__Abs_45209404(Param, 0LL);
LABEL_34:
  v51 = 0LL;
  Next = BattleRandom__getNext(1000, 0LL);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(
                                                                 funcUnit_k__BackingField,
                                                                 v29);
  if ( Param > 99999 )
  {
    v30 = Param;
    goto LABEL_49;
  }
  if ( isDisabledBuff )
  {
    v30 = Param;
    if ( !DataVals__isParam(dataVals_k__BackingField, 113, 0LL) )
      goto LABEL_49;
  }
  else if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    v32 = ((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64 *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._18_unknown.method)(
            WrapTarget_k__BackingField,
            v50,
            v19,
            &v51,
            WrapTarget_k__BackingField->klass->vtable._19_unknown.methodPtr);
    Next = BattleUtility__FloorToInt((float)(v32 * 1000.0) + (float)Next, 0LL);
  }
  if ( v19 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__isParam(dataVals_k__BackingField, 113, 0LL);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    v33 = (float)(((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64 *, _QWORD, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._22_unknown.method)(
                    WrapTarget_k__BackingField,
                    v50,
                    v19,
                    &v51,
                    (unsigned __int8)this & 1,
                    WrapTarget_k__BackingField->klass->vtable._23_unknown.methodPtr)
                * 1000.0)
        + (float)Param;
  }
  else
  {
    v33 = (float)Param;
  }
  v30 = BattleUtility__FloorToInt(v33, 0LL);
LABEL_49:
  if ( DataVals__isSameBuffLimit(dataVals_k__BackingField, 0LL) )
  {
    v34 = DataVals__GetParam(dataVals_k__BackingField, 40, 0, 0LL);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetSameBuffLimitTargetIndividuality(
                                                                   dataVals_k__BackingField,
                                                                   0LL);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_77;
    if ( ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._19_unknown.method)(
           WrapTarget_k__BackingField,
           this,
           1LL,
           WrapTarget_k__BackingField->klass->vtable._20_unknown.methodPtr) >= v34 )
    {
      result = 0;
      funcTarget->fields.invalidType = 1;
      return result;
    }
  }
  v35 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._13_GetConvertBuffEntity.method)(
          funcTarget,
          (unsigned int)action->fields.actorId,
          funcTarget->klass->vtable._14_CheckConvertBuffData.methodPtr);
  if ( !v35 )
  {
    v36 = BuffEntity__isCheckGroup(v22, 0LL);
    if ( v36
      && BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
           (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v36,
           funcTarget,
           v22,
           WrapTarget_k__BackingField,
           v37) )
    {
      goto LABEL_55;
    }
  }
  if ( (Param & 0x80000000) != 0
    && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          0LL) )
  {
    v30 = -1000;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BuffEntity_o *, void *))funcTarget->klass->vtable._19_CheckBuffCondtion.method)(
          funcTarget,
          action,
          v22,
          funcTarget->klass[1]._1.image) & 1) == 0 )
    return 0;
  if ( Next >= v30 )
  {
    funcTarget->fields.invalidText = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&funcTarget->fields.invalidText, 0, v39, v40);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_12324/*"STATUS_UP_BUFF"*/, 0LL);
    if ( Next < 1000 )
    {
LABEL_75:
      result = 0;
      v38 = 2;
      goto LABEL_56;
    }
    vals = v22->fields.vals;
    v43 = Value;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1BDB920(int___TypeInfo, 1LL);
    if ( this )
    {
      v45 = this;
      if ( !LODWORD(this[1].klass) )
        sub_1BDBADC(this, action, v44);
      LODWORD(this[1].monitor) = v43;
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
      if ( !Individuality__CheckIndividualities(vals, (System_Int32_array *)v45, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2801/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
        funcTarget->fields.invalidText = v46;
        sub_1BDB81C((CGThumbnailListItem_o *)&funcTarget->fields.invalidText, (int32_t)v46, v47, v48);
      }
      goto LABEL_75;
    }
    goto LABEL_77;
  }
  if ( v35
    && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._14_CheckConvertBuffData.method)(
          funcTarget,
          v35,
          funcTarget->klass->vtable._15_GetFixBuffEntity.methodPtr) & 1) == 0 )
  {
    result = 0;
    v38 = 3;
    goto LABEL_56;
  }
  return 1;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *funcTarget,
        BuffEntity_o *buffEnt,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        const MethodInfo *method)
{
  __int64 v8; // x2
  BattleLogicFunctionProcess_CommonAddStateProcess_c *klass; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v10; // x22
  unsigned __int64 v11; // x24
  int32_t v12; // w23

  if ( (byte_4B479C8 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1BDB878(
                                                                   &Method_System_Collections_Generic_List_int__ToArray__,
                                                                   funcTarget);
    byte_4B479C8 = 1;
  }
  if ( !funcTarget )
    goto LABEL_16;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcTarget->fields._AttachTargetList_k__BackingField;
  if ( !this )
    goto LABEL_16;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_16;
  klass = this[1].klass;
  v10 = this;
  if ( (int)klass >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)klass )
        sub_1BDBADC(this, funcTarget, v8);
      if ( !wrapTarget )
        break;
      v12 = *((_DWORD *)&v10[1].monitor + v11);
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))wrapTarget->klass->vtable._6_unknown.method)(
                                                                     wrapTarget,
                                                                     wrapTarget->klass->vtable._7_unknown.methodPtr);
      if ( !buffEnt || !this )
        break;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleBuffData__checkBuffGroup(
                                                                     (BattleBuffData_o *)this,
                                                                     buffEnt->fields.buffGroup,
                                                                     v12,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(funcTarget, v12, 0LL);
      LODWORD(klass) = v10[1].klass;
      if ( (__int64)++v11 >= (int)klass )
        return !BattleLogicFunctionProcess_CommonAddStateTargetCheck__get_ExistAttachTarget(funcTarget, 0LL);
    }
LABEL_16:
    sub_1BDBAD4(this, funcTarget);
  }
  return !BattleLogicFunctionProcess_CommonAddStateTargetCheck__get_ExistAttachTarget(funcTarget, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_FunctionTargetCheck_o *__fastcall BattleLogicFunctionProcess_CommonAddStateProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct DataVals_o *dataVals_k__BackingField; // x8
  int logic_k__BackingField_high; // w8
  BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *v16; // x19

  v5 = this;
  if ( (byte_4B479C9 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo, *(_QWORD *)&targetId);
    sub_1BDB878(&BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo, v6);
    sub_1BDB878(&BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo, v7);
    sub_1BDB878(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo, v8);
    sub_1BDB878(&BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo, v9);
    sub_1BDB878(&BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo, v10);
    sub_1BDB878(&BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo, v11);
    sub_1BDB878(&BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo, v12);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1BDB878(
                                                                   &BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo,
                                                                   v13);
    byte_4B479C9 = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v5->fields._logic_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                       (BattleLogicFunction_o *)this,
                                                                       dataVals_k__BackingField->fields.funcEnt,
                                                                       0LL)) == 0LL )
  {
    sub_1BDBAD4(this, *(_QWORD *)&targetId);
  }
  logic_k__BackingField_high = HIDWORD(this->fields._logic_k__BackingField);
  if ( logic_k__BackingField_high <= 161 )
  {
    switch ( logic_k__BackingField_high )
    {
      case 107:
        v16 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo);
        BattleLogicFunctionProcess_OverwriteBattleClassCheck___ctor(v16, 0LL);
        return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v16;
      case 154:
        v16 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo);
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___ctor(
          (BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_o *)v16,
          0LL);
        return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v16;
      case 161:
        v16 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo);
        BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck___ctor(
          (BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_o *)v16,
          0LL);
        return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v16;
    }
LABEL_20:
    v16 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo);
    BattleLogicFunctionProcess_ServantAddStateTargetCheck___ctor(
      (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v16,
      0LL);
    return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v16;
  }
  if ( logic_k__BackingField_high <= 10000 )
  {
    if ( logic_k__BackingField_high == 176 )
    {
      v16 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo);
      BattleLogicFunctionProcess_SubFieldIndividualityCheck___ctor(
        (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)v16,
        0LL);
      return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v16;
    }
    if ( logic_k__BackingField_high == 199 )
    {
      v16 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo);
      BattleLogicFunctionProcess_ChangeBgmCheck___ctor((BattleLogicFunctionProcess_ChangeBgmCheck_o *)v16, 0LL);
      return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v16;
    }
    goto LABEL_20;
  }
  if ( logic_k__BackingField_high == 10001 )
  {
    v16 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo);
    BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck___ctor(
      (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)v16,
      0LL);
    return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v16;
  }
  if ( logic_k__BackingField_high == 10002 )
  {
    v16 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo);
    BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck___ctor(
      (BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_o *)v16,
      0LL);
    return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v16;
  }
  if ( logic_k__BackingField_high != 10003 )
    goto LABEL_20;
  v16 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo);
  BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck___ctor(
    (BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *)v16,
    0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v16;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__checkCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v8; // x2

  if ( (byte_4B479C6 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo, action);
    byte_4B479C6 = 1;
  }
  if ( funcTarget
    && (methodPtr_low = LOBYTE(BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(funcTarget->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (BattleLogicFunctionProcess_CommonAddStateTargetCheck_c *)funcTarget->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo )
      v8 = funcTarget;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  return BattleLogicFunctionProcess_CommonAddStateProcess__CheckCondition(
           this,
           action,
           (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)v8,
           method);
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck___ctor(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__ApplyPrevSaveBuffData(
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

  if ( (byte_4B479A5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, buff);
    byte_4B479A5 = 1;
  }
  CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField
    || (CardIdsIndexList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       CardIdsIndexList_k__BackingField,
                                                                                       (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__),
        !buff)
    || (buff->fields.servantCardIdsIndexArray = (struct System_Int32_array *)CardIdsIndexList_k__BackingField,
        sub_1BDB81C(
          (CGThumbnailListItem_o *)&buff->fields.servantCardIdsIndexArray,
          (int32_t)CardIdsIndexList_k__BackingField,
          v6,
          v7),
        (CardIdsIndexList_k__BackingField = this->fields._AttachTargetList_k__BackingField) == 0LL) )
  {
    sub_1BDBAD4(CardIdsIndexList_k__BackingField, buff);
  }
  v8 = System_Collections_Generic_List_int___ToArray(
         CardIdsIndexList_k__BackingField,
         (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  buff->fields.attachTargets = v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&buff->fields.attachTargets, (int32_t)v8, v9, v10);
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__ConvertAttachTargetFromCardIndex(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  return cardIndex + 101;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__GetAttachTargetArray(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        int64_t userCommandCodeId,
        System_Int32_array *cardIdsIndexArray,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  System_Int32_array *result; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_int__o *v23; // x24
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_int__o *v26; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int32_t v30; // w1
  System_Action_int__o *v31; // x21
  __int64 v32; // x2

  if ( (byte_4B479A3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, wrapTarget);
    sub_1BDB878(&Method_BasicHelper_ForEach_int___, v9);
    sub_1BDB878(&int___TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1BDB878(
      &Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
      v16);
    sub_1BDB878(&BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo, v17);
    byte_4B479A3 = 1;
  }
  v18 = sub_1BDBAC4(BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_17;
  *(_QWORD *)(v18 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 24), (int32_t)this, v21, v22);
  v23 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v18 + 16) = v23;
  sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)v23, v24, v25);
  if ( userCommandCodeId >= 1 )
  {
    if ( !wrapTarget )
      goto LABEL_17;
    v26 = *(System_Collections_Generic_List_int__o **)(v18 + 16);
    result = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, Il2CppMethodPointer))wrapTarget->klass->vtable._21_unknown.method)(
                                     wrapTarget,
                                     userCommandCodeId,
                                     wrapTarget->klass->vtable._22_unknown.methodPtr);
    if ( !v26 )
      goto LABEL_17;
    items = v26->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v26->fields._version;
    if ( !items )
      goto LABEL_17;
    size = v26->fields._size;
    v30 = (_DWORD)result + 101;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v26,
        v30,
        *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v26->fields._size = size + 1;
      items->m_Items[size + 1] = v30;
    }
  }
  v31 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v31,
    (Il2CppObject *)v18,
    Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)cardIdsIndexArray,
    (System_Action_T__o *)v31,
    (const MethodInfo_301EDEC *)Method_BasicHelper_ForEach_int___);
  result = *(System_Int32_array **)(v18 + 16);
  if ( !result )
    goto LABEL_17;
  if ( (int)result->max_length > 0 )
    return System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)result,
             (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  result = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
  if ( !result )
LABEL_17:
    sub_1BDBAD4(result, v20);
  if ( !result->max_length )
    sub_1BDBADC(result, v20, v32);
  result->m_Items[1] = 1;
  return result;
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__InitPrevCheckCondition(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  System_Collections_Generic_List_int__o *v10; // x23
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **p_CardIdsIndexList_k__BackingField; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int64_t userCommandCodeId; // x21
  System_Int32_array *v15; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x20
  System_Collections_Generic_List_int__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v6 = this;
  if ( (byte_4B479A2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, action);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor___77024896, v7);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_1BDB878(
                                                                       &System_Collections_Generic_List_int__TypeInfo,
                                                                       v8);
    byte_4B479A2 = 1;
  }
  if ( !wrapTarget
    || (v9 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass->vtable._20_unknown.method)(
                                                              wrapTarget,
                                                              wrapTarget->klass->vtable._21_unknown.methodPtr,
                                                              wrapTarget,
                                                              method),
        v10 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_57378420(
          v10,
          v9,
          (const MethodInfo_36B8674 *)Method_System_Collections_Generic_List_int___ctor___77024896),
        v6->fields._CardIdsIndexList_k__BackingField = v10,
        p_CardIdsIndexList_k__BackingField = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **)&v6->fields._CardIdsIndexList_k__BackingField,
        sub_1BDB81C((CGThumbnailListItem_o *)&v6->fields._CardIdsIndexList_k__BackingField, (int32_t)v10, v12, v13),
        !action)
    || (this = *p_CardIdsIndexList_k__BackingField) == 0LL )
  {
    sub_1BDBAD4(this, action);
  }
  userCommandCodeId = action->fields.userCommandCodeId;
  v15 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)this,
          (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, System_Int32_array *, Il2CppMethodPointer))v6->klass->vtable._18_GetAttachTargetArray.method)(
                                                         v6,
                                                         wrapTarget,
                                                         userCommandCodeId,
                                                         v15,
                                                         v6->klass->vtable._19_CheckBuffCondtion.methodPtr);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57378420(
    v17,
    v16,
    (const MethodInfo_36B8674 *)Method_System_Collections_Generic_List_int___ctor___77024896);
  v6->fields._AttachTargetList_k__BackingField = v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->fields._AttachTargetList_k__BackingField, (int32_t)v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t attachTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0

  if ( (byte_4B479A4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Remove__, *(_QWORD *)&attachTarget);
    byte_4B479A4 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField
    || (System_Collections_Generic_List_int___Remove(
          AttachTargetList_k__BackingField,
          attachTarget,
          (const MethodInfo_36BA29C *)Method_System_Collections_Generic_List_int__Remove__),
        (AttachTargetList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField) == 0LL) )
  {
    sub_1BDBAD4(AttachTargetList_k__BackingField, *(_QWORD *)&attachTarget);
  }
  System_Collections_Generic_List_int___Remove(
    AttachTargetList_k__BackingField,
    attachTarget - 101,
    (const MethodInfo_36BA29C *)Method_System_Collections_Generic_List_int__Remove__);
}


System_Collections_Generic_List_int__o *__fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__get_AttachTargetList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._AttachTargetList_k__BackingField;
}


System_Collections_Generic_List_int__o *__fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__get_CardIdsIndexList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._CardIdsIndexList_k__BackingField;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__get_ExistAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x8

  if ( (byte_4B479A1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, method);
    byte_4B479A1 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  return AttachTargetList_k__BackingField && AttachTargetList_k__BackingField->fields._size > 0;
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__set_AttachTargetList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AttachTargetList_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._AttachTargetList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__set_CardIdsIndexList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CardIdsIndexList_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._CardIdsIndexList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0___ctor(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0___GetAttachTargetArray_b__0(
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
  if ( (byte_4B479A6 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)sub_1BDB878(
                                                                                             &Method_System_Collections_Generic_List_int__Add__,
                                                                                             *(_QWORD *)&index);
    byte_4B479A6 = 1;
  }
  if ( !v4->fields.__4__this
    || (this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)v4->fields.targetList) == 0LL
    || (targetList = this->fields.targetList,
        v6 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(this->fields.__4__this),
        !targetList) )
  {
    sub_1BDBAD4(this, *(_QWORD *)&index);
  }
  _4__this_low = SLODWORD(this->fields.__4__this);
  v8 = index + 101;
  if ( (unsigned int)_4__this_low >= targetList->fields._size )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      v8,
      *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.__4__this) = _4__this_low + 1;
    *((_DWORD *)&targetList->fields._syncRoot + _4__this_low) = v8;
  }
}


void __fastcall BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(
        BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_CommonFieldFunctionProcess__IsPreCheckTargetsAvailable(
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


bool __fastcall BattleLogicFunctionProcess_CommonFieldFunctionProcess__IsTargetNotServant(
        BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *this,
        FunctionEntity_o *funcEnt,
        int32_t actorUniqueId,
        const MethodInfo *method)
{
  if ( !funcEnt )
    sub_1BDBAD4(this, 0LL);
  return (actorUniqueId < 0) & Target__Check(0, funcEnt->fields.targetType, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_CommonFieldFunctionProcess__checkCommonCondition(
        BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x22
  const MethodInfo *v9; // x3

  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0LL
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL
    || !action )
  {
    sub_1BDBAD4(this, action);
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


void __fastcall BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(
        BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_CommonFunctionTypeProcess__CheckConditionPartial(
        BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        DataVals_o *baseVals,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall BattleLogicFunctionProcess_CommonFunctionTypeProcess__checkCondition(
        BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleActionData_o *v5; // x25
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v6; // x26
  __int64 v7; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // x29
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w28
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x27
  struct BattleLogicFunction_o *v13; // x8
  BattleServantData_o *v14; // x20
  FunctionEntity_o *funcEnt; // x24
  BattleServantData_o *v16; // x22
  int v17; // w23
  char v18; // w0
  float BuffResistDelayNPTurn; // s0
  struct System_String_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_String_o **p_invalidText; // x19
  System_Int32_array *vals; // x24
  float BuffTOLERANCESUBSTATEMagnification; // s0
  bool isDisplayLastFuncInvalid; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = action;
  v6 = this;
  if ( (byte_4B479CA & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, action);
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1BDB878(&StringLiteral_2801/*"BATTLE_GUARD_FUNCTION"*/, v7);
    byte_4B479CA = 1;
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
                                                                     0LL);
  v13 = v6->fields._logic_k__BackingField;
  if ( !v13 )
    goto LABEL_52;
  v14 = (BattleServantData_o *)this;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v13->fields.data;
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     targetId_k__BackingField,
                                                                     0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_52;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v16 = (BattleServantData_o *)this;
  isDisplayLastFuncInvalid = 0;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(
                                                                     funcUnit,
                                                                     (const MethodInfo *)action);
  if ( !v6->fields._logic_k__BackingField )
    goto LABEL_52;
  v17 = (int)this;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunction__checkFuncAction(
                                                                     v6->fields._logic_k__BackingField,
                                                                     procArg_k__BackingField,
                                                                     v5->fields.actorId,
                                                                     targetId_k__BackingField,
                                                                     0LL,
                                                                     funcEnt,
                                                                     dataVals_k__BackingField,
                                                                     v5->fields.treasureDvcId > 0,
                                                                     &isDisplayLastFuncInvalid,
                                                                     funcUnit,
                                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v6->fields._logic_k__BackingField;
    if ( this )
    {
      if ( !BattleLogicFunction__checkNoActionCondition(
              (BattleLogicFunction_o *)this,
              targetId_k__BackingField,
              funcEnt,
              0LL) )
      {
        v18 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, DataVals_o *, BattleLogicFunction_ProcListInArgs_o *, void *))v6->klass->vtable._9_CheckConditionPartial.method)(
                v6,
                v5,
                funcTarget,
                dataVals_k__BackingField,
                procArg_k__BackingField,
                v6->klass[1]._1.image);
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
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, 0LL);
    goto LABEL_18;
  }
  if ( !funcEnt )
LABEL_52:
    sub_1BDBAD4(this, action);
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(7, funcEnt->fields.funcType, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(
                                                                           8,
                                                                           funcEnt->fields.funcType,
                                                                           0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    if ( v16 )
    {
      if ( BattleServantData__checkPlayer(v16, 0LL) )
      {
        v18 = 0;
        funcTarget->fields.invalidType = 2;
        return v18 & 1;
      }
      goto LABEL_18;
    }
    goto LABEL_52;
  }
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(19, funcEnt->fields.funcType, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(20, funcEnt->fields.funcType, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(
                                                                         13,
                                                                         funcEnt->fields.funcType,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_52;
        if ( BattleServantData__checkAvoidInstantDeath(v16, v14, 0LL) )
        {
          BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, 0LL);
          goto LABEL_18;
        }
      }
      this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(2, funcEnt->fields.funcType, 0LL);
      action = 0LL;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_50;
      vals = funcEnt->fields.vals;
      if ( v14 )
      {
        if ( (v17 & 1) != 0 )
        {
          action = 0LL;
LABEL_50:
          funcTarget->fields.invalidText = (struct System_String_o *)action;
          p_invalidText = &funcTarget->fields.invalidText;
          *((_DWORD *)p_invalidText - 2) = 2;
LABEL_51:
          sub_1BDB81C((CGThumbnailListItem_o *)p_invalidText, (int32_t)action, v22, v23);
          goto LABEL_18;
        }
      }
      else
      {
        this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)DataVals__isParam(
                                                                           dataVals_k__BackingField,
                                                                           75,
                                                                           0LL);
        action = 0LL;
        if ( ((v17 | (unsigned int)this) & 1) != 0 )
          goto LABEL_50;
      }
      if ( !v16 )
        goto LABEL_52;
      BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(v16, vals, v14, 0LL);
      action = 0LL;
      if ( BuffTOLERANCESUBSTATEMagnification > 0.0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2801/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
      }
      goto LABEL_50;
    }
  }
  if ( !v16 )
    goto LABEL_52;
  if ( !v16->fields.isEnemy )
    goto LABEL_18;
  funcTarget->fields.invalidType = 2;
  if ( !FuncList__Check(20, funcEnt->fields.funcType, 0LL) )
    goto LABEL_18;
  BuffResistDelayNPTurn = BattleServantData__getBuffResistDelayNPTurn(v16, v14, 0LL);
  v18 = 0;
  if ( BuffResistDelayNPTurn > 0.0 && ((v17 ^ 1) & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2801/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
    LODWORD(action) = (_DWORD)v21;
    funcTarget->fields.invalidText = v21;
    p_invalidText = &funcTarget->fields.invalidText;
    goto LABEL_51;
  }
  return v18 & 1;
}


void __fastcall BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._dataVals_k__BackingField, (int32_t)dataVal, v7, v8);
}


void __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck___ctor(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x22
  System_Func_object__object__o *v14; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v18; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v19; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isPassive; // w21

  v8 = this;
  if ( (byte_4B479B2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, actBuffData);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v9);
    sub_1BDB878(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__, v10);
    sub_1BDB878(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v11);
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_1BDB878(
                                                                      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__,
                                                                      v12);
    byte_4B479B2 = 1;
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
                                                                            0LL)) == 0LL
      || (funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField) == 0LL )
    {
LABEL_19:
      sub_1BDBAD4(this, actBuffData);
    }
    if ( SLODWORD(funcUnit_k__BackingField->fields._procArg_k__BackingField) >= 1 )
    {
      v14 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
      System_Func_object__object____ctor(
        v14,
        (Il2CppObject *)v8,
        Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__,
        0LL);
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)funcUnit_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)v14,
                                                                   (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
      this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                        v15,
                                                                        (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
      if ( !actBuffData )
        goto LABEL_19;
      actBuffData->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1BDB81C((CGThumbnailListItem_o *)&actBuffData->fields.removeBuffList, (int32_t)this, v16, v17);
    }
  }
  v18 = v8->fields._funcUnit_k__BackingField;
  if ( !v18 )
    goto LABEL_19;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)v18->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_19;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 109, 0LL);
  if ( !buffData )
    goto LABEL_19;
  buffData->fields.isRemoveFieldBuffActorDeath = (unsigned __int8)this & 1;
  v19 = v8->fields._funcUnit_k__BackingField;
  if ( !v19 )
    goto LABEL_19;
  procArg_k__BackingField = v19->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_19;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_19;
  isPassive = externalArg->fields.isPassive;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(
                                                                    v8,
                                                                    (const MethodInfo *)actBuffData);
  if ( !this )
    goto LABEL_19;
  BattleFieldEnvironmentData__AddFieldBuff((BattleFieldEnvironmentData_o *)this, buffData, !isPassive, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  BattleFieldEnvironmentData_o *BuffData; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  bool v15; // w21
  System_Int32_array *GrantBuffTypeArray; // x22
  System_Func_int__bool__o *v17; // x23

  if ( (byte_4B479B1 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_int____77076928, action);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v6);
    sub_1BDB878(
      &Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
      v7);
    sub_1BDB878(&BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo, v8);
    byte_4B479B1 = 1;
  }
  v9 = sub_1BDBAC4(BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = buffEnt;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)buffEnt, v12, v13);
  if ( this->fields.grantType != 1 )
    return 1;
  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v14);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1BDBAD4(BuffData, v11);
  }
  v15 = 1;
  GrantBuffTypeArray = BattleBuffData__GetGrantBuffTypeArray((BattleBuffData_o *)BuffData, 1, 1, 0LL);
  v17 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
    0LL);
  if ( BasicHelper__Any_int__50449276(
         GrantBuffTypeArray,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928) )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return v15;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetAttachTargetArray(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        int64_t userCommandCodeId,
        System_Int32_array *cardIdsIndexArray,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_4B479B0 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, wrapTarget);
    byte_4B479B0 = 1;
  }
  result = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BDBAD4(0LL, v6);
  if ( !result->max_length )
    sub_1BDBADC(result, v6, v7);
  result->m_Items[1] = 10001;
  return result;
}


int32_t __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetGrantType(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  if ( !baseVals )
    sub_1BDBAD4(this, 0LL);
  return DataVals__GetParam(baseVals, 110, 0, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__Init(
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
  if ( !funcUnit || (dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField) == 0LL )
    sub_1BDBAD4(dataVals_k__BackingField, v7);
  this->fields.grantType = DataVals__GetParam(dataVals_k__BackingField, 110, 0, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData_o *v2; // x19

  if ( (byte_4B479B3 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_FieldBuffData_TypeInfo, method);
    byte_4B479B3 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_1BDBAC4(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0LL);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4B479B4 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method);
    byte_4B479B4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck___AddBuff_b__8_0(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *BuffData; // x0
  __int64 v5; // x1

  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, (const MethodInfo *)buff);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0LL)) == 0LL )
  {
    sub_1BDBAD4(BuffData, v5);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)BuffData, buff, 0LL);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  void *funcUnit_k__BackingField; // x0

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (funcUnit_k__BackingField = BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
                                     (BattleLogicFunctionProcess_FunctionUnitCheck_o *)funcUnit_k__BackingField,
                                     0LL)) == 0LL )
  {
    sub_1BDBAD4(funcUnit_k__BackingField, method);
  }
  return (BattleFieldEnvironmentData_o *)*((_QWORD *)funcUnit_k__BackingField + 21);
}


void __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___ctor(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___CheckBuffCondtion_b__0(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_1BDBAD4(this, type);
  return buffEnt->fields.type == type;
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck___ctor(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__AddBuff(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__AfterAddBuffProc(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleActionData_o *mainAction,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__ApplyPrevSaveBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__CheckConvertBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BuffConvertEntity_o *buffConvertEntity,
        const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__GetCommonBaseValue(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v3; // x19
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (v3 = this,
        (this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL)
    || (this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)DataVals__GetValue((DataVals_o *)this, 0LL),
        (WrapTarget_k__BackingField = v3->fields._WrapTarget_k__BackingField) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  return ((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass->vtable._26_GetAddBaseValue.method)(
           WrapTarget_k__BackingField,
           WrapTarget_k__BackingField->klass[1]._1.image)
       + (_DWORD)this;
}


BuffConvertEntity_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__GetConvertBuffEntity(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        int32_t actorId,
        const MethodInfo *method)
{
  return 0LL;
}


BuffEntity_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__GetFixBuffEntity(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x9

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcUnit_k__BackingField->fields._logic_k__BackingField) == 0LL )
  {
    sub_1BDBAD4(this, method);
  }
  return BattleLogicFunction__GetBuffEntity(
           (BattleLogicFunction_o *)this,
           dataVals_k__BackingField->fields.funcEnt,
           0LL);
}


System_String_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    sub_1BDBAD4(0LL, method);
  return BattleLogicFunctionProcess_FunctionUnitCheck__GetFuncNoEffectText(
           funcUnit_k__BackingField,
           this->fields.invalidText,
           0LL);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__GetFunctionDisplayData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunction_o *logic_k__BackingField; // x19
  FunctionEntity_o *funcEnt; // x20
  int32_t targetId_k__BackingField; // w21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v8; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_8;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField,
        funcEnt = dataVals_k__BackingField->fields.funcEnt,
        targetId_k__BackingField = this->fields._targetId_k__BackingField,
        funcUnit_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                                                                              funcUnit_k__BackingField,
                                                                                              0LL),
        (v8 = this->fields._funcUnit_k__BackingField) == 0LL)
    || (procArg_k__BackingField = v8->fields._procArg_k__BackingField) == 0LL
    || (externalArg = procArg_k__BackingField->fields.externalArg) == 0LL
    || !logic_k__BackingField )
  {
LABEL_8:
    sub_1BDBAD4(funcUnit_k__BackingField, method);
  }
  return BattleLogicFunction__getFunctionObject(
           logic_k__BackingField,
           funcEnt,
           targetId_k__BackingField,
           (int32_t)funcUnit_k__BackingField,
           externalArg->fields.isCommandSideEffect,
           0LL,
           0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__Init(
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)funcUnit, (int32_t)funcUnit, method);
  klass = this->klass;
  this->fields._result_k__BackingField = 0;
  v6 = (struct BattleLogicFunctionProcess_WrapTargetData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))klass->vtable._11_MakeWrapTarget.method)(
                                                               this,
                                                               klass->vtable._12_MakeAddActionBuffData.methodPtr);
  this->fields._WrapTarget_k__BackingField = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._WrapTarget_k__BackingField, (int32_t)v6, v7, v8);
  WrapTarget_k__BackingField = this->fields._WrapTarget_k__BackingField;
  if ( !WrapTarget_k__BackingField )
    sub_1BDBAD4(0LL, v9);
  ((void (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass->vtable._4_Init.method)(
    WrapTarget_k__BackingField,
    this,
    WrapTarget_k__BackingField->klass->vtable._5_InitPartial.methodPtr);
}


bool __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__IsExecutable(
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
                                                                 (const MethodInfo *)mainAction);
    if ( mainAction )
    {
      BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0LL);
      return result_k__BackingField;
    }
LABEL_10:
    sub_1BDBAD4(this, mainAction);
  }
  return result_k__BackingField;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v2; // x19

  if ( (byte_4B4799F & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_BuffData_TypeInfo, method);
    byte_4B4799F = 1;
  }
  v2 = (BattleActionData_BuffData_o *)sub_1BDBAC4(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor(v2, 0LL);
  return v2;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__MakeAddActionBuffData(
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
    || (this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcUnit_k__BackingField->fields._logic_k__BackingField) == 0LL )
  {
    sub_1BDBAD4(this, actBuffData);
  }
  return BattleLogicFunction__MakeAddActionBuffData(
           (BattleLogicFunction_o *)this,
           actBuffData,
           buffData,
           funcEnt,
           isCommandSideEffect,
           0,
           0LL);
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4B479A0 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicFunctionProcess_WrapTargetServant_TypeInfo, method);
    byte_4B479A0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  this->fields.invalidType = 1;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL )
  {
    sub_1BDBAD4(this, method);
  }
  DataVals__SetInvalidCauseByAnyBuff(dataVals_k__BackingField, this->fields._targetId_k__BackingField, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  intptr_t v8; // w21
  System_Type_o *TypeFromHandle; // x0
  __int64 v10; // x1
  System_Type_o *v11; // x21
  int32_t DisplayLastFuncInvalidType; // w20
  __int64 v13; // x2
  __int64 v14; // x3
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v15; // x0
  BattleActionData_o *v16; // x1
  const MethodInfo *v17; // x2
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_4B4799E & 1) == 0 )
  {
    sub_1BDB878(&System_Enum_TypeInfo, baseVals);
    sub_1BDB878(&BattleLogicFunctionProcess_FuncInvalidType_var, v5);
    sub_1BDB878(&BattleLogicFunctionProcess_FuncInvalidType_TypeInfo, v6);
    sub_1BDB878(&System_Type_TypeInfo, v7);
    byte_4B4799E = 1;
  }
  v8 = (int)BattleLogicFunctionProcess_FuncInvalidType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v18.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
  if ( !baseVals )
    goto LABEL_11;
  v11 = TypeFromHandle;
  DisplayLastFuncInvalidType = DataVals__GetDisplayLastFuncInvalidType(baseVals, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  TypeFromHandle = (System_Type_o *)System_Enum__ToObject_64313500(v11, DisplayLastFuncInvalidType, 0LL);
  if ( !TypeFromHandle )
LABEL_11:
    sub_1BDBAD4(TypeFromHandle, v10);
  if ( TypeFromHandle->klass->_1.element_class == BattleLogicFunctionProcess_FuncInvalidType_TypeInfo->_1.element_class )
  {
    this->fields.invalidType = *(_DWORD *)j_il2cpp_object_unbox_0(
                                            TypeFromHandle,
                                            BattleLogicFunctionProcess_FuncInvalidType_TypeInfo,
                                            v13,
                                            v14);
  }
  else
  {
    sub_1BDBD94(TypeFromHandle);
    BattleLogicFunctionProcess_FunctionTargetCheck__IsExecutable(v15, v16, v17);
  }
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *funcProc,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v4; // x19
  bool v5; // w0
  _BOOL4 isFixResult; // w8
  bool v7; // w20
  BattleLogicFunction_ProcListInArgs_o *WrapTarget_k__BackingField; // x21
  int32_t targetId_k__BackingField; // w19
  const MethodInfo *v10; // x4

  if ( !funcProc )
    goto LABEL_7;
  v4 = this;
  v5 = BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkExecutable(funcProc, action, this, 0LL);
  isFixResult = v4->fields.isFixResult;
  v4->fields._result_k__BackingField = v5;
  if ( isFixResult )
  {
    v7 = v5;
    this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v4->fields._funcUnit_k__BackingField;
    if ( this )
    {
      WrapTarget_k__BackingField = (BattleLogicFunction_ProcListInArgs_o *)this->fields._WrapTarget_k__BackingField;
      targetId_k__BackingField = v4->fields._targetId_k__BackingField;
      this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                                                   (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
                                                                   0LL);
      if ( WrapTarget_k__BackingField )
      {
        BattleLogicFunction_ProcListInArgs__setFuncResult(
          WrapTarget_k__BackingField,
          targetId_k__BackingField,
          v7,
          (int32_t)this,
          v10);
        return;
      }
    }
LABEL_7:
    sub_1BDBAD4(this, funcProc);
  }
}


BattleActionData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    sub_1BDBAD4(0LL, this);
  return BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(funcUnit_k__BackingField, this, 0LL);
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__get_WrapTarget(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._WrapTarget_k__BackingField;
}


BattleLogicFunctionProcess_FunctionUnitCheck_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__get_funcUnit(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._funcUnit_k__BackingField;
}


bool __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__get_result(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__get_targetId(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._targetId_k__BackingField;
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__reflectLinkedToSelfResult(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *linkedToSelf,
        const MethodInfo *method)
{
  if ( !linkedToSelf )
    sub_1BDBAD4(this, 0LL);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkFuncTargetResult(
         linkedToSelf,
         this->fields._targetId_k__BackingField,
         0,
         0LL) )
  {
    this->fields._result_k__BackingField = 0;
  }
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__set_WrapTarget(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_WrapTargetData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._WrapTarget_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._WrapTarget_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__set_funcUnit(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._funcUnit_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__set_result(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._result_k__BackingField = value;
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__set_targetId(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._targetId_k__BackingField = value;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_o *logic,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B479BA & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, logic);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo, v8);
    byte_4B479BA = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToOtherList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.linkedToOtherList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToSelfList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.linkedToSelfList, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._logic_k__BackingField = logic;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)logic, v15, v16);
  this->fields._procArg_k__BackingField = procArg;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._procArg_k__BackingField, (int32_t)procArg, v17, v18);
  this->fields._result_k__BackingField = 0;
  v19 = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)sub_1BDB920(
                                                                         BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                                                         0LL);
  this->fields._funcTargetArray_k__BackingField = v19;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._funcTargetArray_k__BackingField, (int32_t)v19, v20, v21);
}


System_String_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__GetFuncNoEffectText(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        System_String_o *defText,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField
    || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)dataVals_k__BackingField->fields.funcEnt) == 0LL )
  {
    sub_1BDBAD4(this, defText);
  }
  return FunctionEntity__GetNoEffectText((FunctionEntity_o *)this, defText, 0LL);
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField || (data = logic_k__BackingField->fields.data) == 0LL )
    sub_1BDBAD4(this, method);
  if ( data->fields.battleGenderType == 2 )
    return 2;
  else
    return 1;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.linkedToOtherList, 0LL)
      || !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.linkedToSelfList, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsAvoidExecuteSelfFunc(
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
  if ( BasicHelper__IsNullOrEmpty(v5, 0LL) )
    return 0;
  v8 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(this, v6);
  return BattleServantData__CheckAvoidFuncExecSelf(actionSvtData, v8, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsFriendShipCondition(
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

  if ( (byte_4B479C3 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BDB878(
                                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                               baseVals);
    byte_4B479C3 = 1;
  }
  if ( !baseVals )
    sub_1BDBAD4(this, baseVals);
  if ( !DataVals__isParam(baseVals, 180, 0LL) )
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
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v6 = *(_QWORD *)&v9.fields.fakeValue;
    v7 = *(_QWORD *)&v9.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v11, 0LL);
  return DataVals__IsMatchFriendShipCondition(baseVals, v10, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  DataVals_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_ICollection_o *TargetTypeIndexArray; // x20
  System_Func_int__bool__o *v18; // x21

  if ( (byte_4B479C1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_All_int___, baseVals);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v6);
    sub_1BDB878(
      &Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__,
      v7);
    sub_1BDB878(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_TypeInfo, v8);
    byte_4B479C1 = 1;
  }
  v9 = sub_1BDBAC4(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = baseVals,
        sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)baseVals, v12, v13),
        *(_QWORD *)(v9 + 24) = targetSvtData,
        sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)targetSvtData, v14, v15),
        (v10 = *(DataVals_o **)(v9 + 16)) == 0LL) )
  {
    sub_1BDBAD4(v10, v11);
  }
  TargetTypeIndexArray = (System_Collections_ICollection_o *)DataVals__GetTargetTypeIndexArray(v10, 178, 0LL);
  if ( BasicHelper__IsNullOrEmpty(TargetTypeIndexArray, 0LL) )
    return 1;
  if ( !*(_QWORD *)(v9 + 24) )
    return 0;
  v18 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__,
    0LL);
  return System_Linq_Enumerable__All_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)TargetTypeIndexArray,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_303D8D0 *)Method_System_Linq_Enumerable_All_int___);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
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
                                                             0LL);
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
  isEnemyID = BattleData__isEnemyID((BattleData_o *)this, actorId, 0LL);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetTriggeredFieldCountTargetFlag(
                                                             v4,
                                                             isEnemyID,
                                                             0LL);
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
                                                                   0LL);
        if ( this )
        {
          LOBYTE(this) = DataVals__IsSatisfyAboveBelowCondition(
                           v4,
                           134,
                           (int32_t)this->fields._procArg_k__BackingField,
                           0LL);
          return (unsigned __int8)this & 1;
        }
      }
    }
LABEL_12:
    sub_1BDBAD4(this, baseVal);
  }
  return (unsigned __int8)this & 1;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyOverChargeStageRangeCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  int32_t NpChargeStage; // w0
  bool existParamNum; // [xsp+Ch] [xbp-14h] BYREF

  existParamNum = 0;
  if ( !baseVals )
    sub_1BDBAD4(this, 0LL);
  if ( DataVals__CheckAssertStrParam(baseVals, 177, &existParamNum, 0LL) )
  {
    if ( targetSvtData )
    {
      NpChargeStage = BattleServantData__getNpChargeStage(targetSvtData, 0LL);
      return DataVals__IsSatisfyAboveBelowCond(baseVals, 177, NpChargeStage - 1, 0x7FFFFFFF, 0LL);
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


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
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
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !targetSvtData )
      goto LABEL_13;
    v6 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
           targetSvtData,
           targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
    IsSatisfyAboveBelowCondition = DataVals__IsSatisfyAboveBelowCondition(baseVals, 138, v6, 0LL);
  }
  else
  {
    IsSatisfyAboveBelowCondition = 1;
  }
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__CheckAssertStrParam(
                                                             baseVals,
                                                             139,
                                                             existParamNum,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = 1;
    goto LABEL_11;
  }
  if ( !targetSvtData )
LABEL_13:
    sub_1BDBAD4(this, baseVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  if ( MaxHp )
  {
    v9 = MaxHp;
    v10 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
            targetSvtData,
            targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
    v11 = DataVals__IsSatisfyAboveBelowCondition(baseVals, 139, 1000 * v10 / v9, 0LL);
LABEL_11:
    LOBYTE(MaxHp) = v11 && IsSatisfyAboveBelowCondition;
  }
  return MaxHp;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsStartingPositionCondition(
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
  if ( (byte_4B479C2 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BDB878(
                                                               &Method_System_Linq_Enumerable_Contains_int___,
                                                               baseVals);
    byte_4B479C2 = 1;
  }
  if ( !baseVals )
    goto LABEL_11;
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(baseVals, 179, 0LL);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BasicHelper__IsNullOrEmpty(ParamArray, 0LL);
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
        StartingPosition = BattleData__GetStartingPosition((BattleData_o *)this, targetSvtData->fields.uniqueId, 0LL);
        return System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)ParamArray,
                 StartingPosition,
                 (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
LABEL_11:
    sub_1BDBAD4(this, baseVals);
  }
  return 0;
}


AddBgmArgument_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__MakeAddBgmArgument(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x19
  AddBgmArgument_o *v4; // x20

  if ( (byte_4B479B9 & 1) == 0 )
  {
    sub_1BDB878(&AddBgmArgument_TypeInfo, method);
    byte_4B479B9 = 1;
  }
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  v4 = (AddBgmArgument_o *)sub_1BDBAC4(AddBgmArgument_TypeInfo);
  AddBgmArgument___ctor(v4, dataVals_k__BackingField, 0LL);
  return v4;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__SetAfterUpdateField(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  procArg_k__BackingField = this->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    sub_1BDBAD4(this, method);
  procArg_k__BackingField->fields.updateField = 1;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkFuncTargetResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        int32_t targetId,
        bool result,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Object_array *funcTargetArray_k__BackingField; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4B479BD & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___, *(_QWORD *)&targetId);
    sub_1BDB878(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v7);
    sub_1BDB878(
      &Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0__checkFuncTargetResult_b__0__,
      v8);
    sub_1BDB878(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_TypeInfo, v9);
    byte_4B479BD = 1;
  }
  v10 = sub_1BDBAC4(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BDBAD4(v11, v12);
  *(_DWORD *)(v10 + 16) = targetId;
  *(_BYTE *)(v10 + 20) = result;
  funcTargetArray_k__BackingField = (System_Object_array *)this->fields._funcTargetArray_k__BackingField;
  v14 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0__checkFuncTargetResult_b__0__,
    0LL);
  return BasicHelper__Any_object__50450088(
           funcTargetArray_k__BackingField,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *linkedToSelfList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  int v15; // w19
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B479C0 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__,
      action);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__,
      v5);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__,
      v6);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__,
      v7);
    byte_4B479C0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  linkedToSelfList = (System_Collections_Generic_List_object__o *)this->fields.linkedToSelfList;
  if ( !linkedToSelfList )
    sub_1BDBAD4(0LL, action);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    linkedToSelfList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    do
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v18,
             (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
      if ( !v9 )
      {
        v15 = 6;
        goto LABEL_13;
      }
      current = v18.fields._current;
      if ( !v18.fields._current )
        sub_1BDBAD4(v9, v10);
      klass = v18.fields._current[2].klass;
      if ( !klass )
        sub_1BDBAD4(0LL, v10);
    }
    while ( DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed((DataVals_o *)klass, 0LL) );
    if ( !BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
            (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
            action,
            v13) )
      break;
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      this,
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
      v14);
  }
  v15 = 5;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
  return v15 != 5;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkSelfCondtion(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataVals_o *dataVals_k__BackingField; // x21
  FunctionEntity_o *funcEnt; // x22
  bool v10; // w8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleServantData_o *ServantData; // x23
  struct BattleLogicFunction_o *v13; // x8
  struct BattleData_o *data; // x24
  _BOOL4 endbattleFlg; // w25
  char v16; // w25
  char v17; // w8
  struct BattleLogicFunction_o *v18; // x8
  struct BattleData_o *v19; // x24
  bool loseBattleFlg; // w25
  struct BattleLogicFunction_o *v21; // x8
  struct BattleData_o *v22; // x24
  bool winBattleNotRelatedSurvivalStatus; // w25
  const MethodInfo *v24; // x2
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v25; // x24
  struct BattleLogicFunction_o *v26; // x8
  System_Int32_array *QuestIndividualities; // x25
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_o *v29; // x8
  struct BattleData_o *v30; // x8
  System_Collections_Generic_HashSet_int__o *FuncEventExceptedHash_k__BackingField; // x0
  const MethodInfo *v32; // x3
  _BOOL8 v33; // x0
  const MethodInfo *v34; // x3
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x3
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
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v56; // x22
  struct BattleLogicFunction_o *v57; // x8
  struct BattleData_o *v58; // x8
  const MethodInfo *v59; // x2
  __int64 v60; // x2
  int v61; // w8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v62; // x21
  int v63; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v64; // x22
  int32_t actorId; // [xsp+24h] [xbp-6Ch]
  BattleData_o *bdata; // [xsp+28h] [xbp-68h]

  v4 = this;
  if ( (byte_4B479BF & 1) == 0 )
  {
    sub_1BDB878(&Target_BattleTargetArgs_TypeInfo, action);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__get_Count__, v6);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BDB878(&Individuality_TypeInfo, v7);
    byte_4B479BF = 1;
  }
  dataVals_k__BackingField = v4->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_69;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_69;
  v10 = FuncList__Check(0, funcEnt->fields.funcType, 0LL);
  this = 0LL;
  if ( v10 )
    return (char)this;
  logic_k__BackingField = v4->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_69;
  if ( !action )
    goto LABEL_69;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_69;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0LL);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FuncList__Check(26, funcEnt->fields.funcType, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    action->fields.isSuccessTargetSelection = 1;
  v13 = v4->fields._logic_k__BackingField;
  if ( !v13 )
    goto LABEL_69;
  data = v13->fields.data;
  if ( !data )
    goto LABEL_69;
  endbattleFlg = data->fields.endbattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsEndBattle(dataVals_k__BackingField, 0LL);
  v16 = endbattleFlg;
  if ( ((unsigned __int8)this & 1) != 0
    || (v16 &= (unsigned __int8)this ^ 1,
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    v17 = 1;
  }
  else
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                               dataVals_k__BackingField,
                                                               0LL);
    v17 = (unsigned __int8)this & 1;
  }
  data->fields.endbattleFlg = v17 | v16;
  v18 = v4->fields._logic_k__BackingField;
  if ( !v18 )
    goto LABEL_69;
  v19 = v18->fields.data;
  if ( !v19 )
    goto LABEL_69;
  loseBattleFlg = v19->fields.loseBattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL);
  v19->fields.loseBattleFlg = loseBattleFlg | (unsigned __int8)this & 1;
  v21 = v4->fields._logic_k__BackingField;
  if ( !v21 )
    goto LABEL_69;
  v22 = v21->fields.data;
  if ( !v22 )
    goto LABEL_69;
  winBattleNotRelatedSurvivalStatus = v22->fields.winBattleNotRelatedSurvivalStatus;
  v22->fields.winBattleNotRelatedSurvivalStatus = winBattleNotRelatedSurvivalStatus | DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                                                        dataVals_k__BackingField,
                                                                                        0LL);
  v4->fields.questFuncFlg = 1;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FunctionEntity__getQuestTargetValues(funcEnt, 0LL);
  if ( !this )
    goto LABEL_69;
  v25 = this;
  if ( this->fields._procArg_k__BackingField )
  {
    v26 = v4->fields._logic_k__BackingField;
    if ( !v26 )
      goto LABEL_69;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v26->fields.data;
    if ( !this )
      goto LABEL_69;
    QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    if ( !Individuality__CheckIndividualities(QuestIndividualities, (System_Int32_array *)v25, 0LL) )
      v4->fields.questFuncFlg = 0;
  }
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__IsAvoidExecuteSelfFunc(
                                                             v4,
                                                             ServantData,
                                                             v24);
  procArg_k__BackingField = v4->fields._procArg_k__BackingField;
  v4->fields._IsAvoidFuncExec_k__BackingField = (unsigned __int8)this & 1;
  if ( !procArg_k__BackingField )
    goto LABEL_69;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunction_ProcListInArgs__get_IsPassive(
                                                             procArg_k__BackingField,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v29 = v4->fields._logic_k__BackingField;
    if ( !v29 )
      goto LABEL_69;
    v30 = v29->fields.data;
    if ( !v30 )
      goto LABEL_69;
    FuncEventExceptedHash_k__BackingField = v30->fields._FuncEventExceptedHash_k__BackingField;
    if ( FuncEventExceptedHash_k__BackingField
      && FuncEventExceptedHash_k__BackingField->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           FuncEventExceptedHash_k__BackingField,
           funcEnt->fields.id,
           (const MethodInfo_358C094 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      goto LABEL_55;
    }
  }
  if ( !BattleActionData__IsSelectedAddTargetIndex(action, dataVals_k__BackingField, 0LL) )
    goto LABEL_55;
  v33 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
          v4,
          dataVals_k__BackingField,
          action->fields.actorId,
          v32);
  if ( !v33 )
    goto LABEL_55;
  v35 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyOverChargeStageRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v33,
          dataVals_k__BackingField,
          ServantData,
          v34);
  if ( !v35 )
    goto LABEL_55;
  if ( !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v35,
          dataVals_k__BackingField,
          ServantData,
          v36) )
    goto LABEL_55;
  v38 = BattleLogicFunctionProcess_FunctionUnitCheck__IsStartingPositionCondition(
          v4,
          dataVals_k__BackingField,
          ServantData,
          v37);
  if ( !v38
    || !BattleLogicFunctionProcess_FunctionUnitCheck__IsFriendShipCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v38,
          dataVals_k__BackingField,
          ServantData,
          v39) )
  {
    goto LABEL_55;
  }
  if ( DataVals__checkActSet(dataVals_k__BackingField, 0LL) )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__getActSet(dataVals_k__BackingField, 0LL);
    v40 = v4->fields._procArg_k__BackingField;
    if ( !v40 )
      goto LABEL_69;
    if ( (_DWORD)this != v40->fields.actSetId )
    {
LABEL_55:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  if ( !DataVals__isParam(dataVals_k__BackingField, 130, 0LL)
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 130, 0, 0LL),
        v43 = Param == BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(v4, v42),
        LOBYTE(this) = 0,
        v43) )
  {
    if ( DataVals__IsSatisfyCommonReleaseId(dataVals_k__BackingField, 0LL) )
    {
      args = (Target_BattleTargetArgs_o *)sub_1BDBAC4(Target_BattleTargetArgs_TypeInfo);
      Target_BattleTargetArgs___ctor(args, dataVals_k__BackingField, 0LL);
      v45 = v4->fields._logic_k__BackingField;
      if ( v45 )
      {
        bdata = v45->fields.data;
        targetId = action->fields.targetId;
        actorId = action->fields.actorId;
        PTTargetId = BattleActionData__getPTTargetId(action, 0LL);
        targetType = funcEnt->fields.targetType;
        taskActorType = action->fields.taskActorType;
        checkRevengeId = action->fields.checkRevengeId;
        v51 = PTTargetId;
        ValsList = DataVals__GetValsList(dataVals_k__BackingField, 84, 0LL);
        IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(dataVals_k__BackingField, 0LL);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Target__getTargetIds_39476520(
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
                                                                   0LL);
        v54 = v4->fields._procArg_k__BackingField;
        if ( v54 )
        {
          v55 = this;
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v54->fields.externalArg;
          if ( this )
          {
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))this->klass[1]._1.namespaze)(
                                                                       this,
                                                                       (unsigned int)funcEnt->fields.targetType,
                                                                       v55,
                                                                       this->klass[1]._1.byval_arg.data);
            if ( v4->fields._procArg_k__BackingField )
            {
              v56 = this;
              this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
                                                                         v4->fields._procArg_k__BackingField,
                                                                         0LL);
              if ( this )
              {
                this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, DataVals_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                                           this,
                                                                           dataVals_k__BackingField,
                                                                           v56,
                                                                           this->klass[1]._1.this_arg.data);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_55;
                v57 = v4->fields._logic_k__BackingField;
                if ( v57 )
                {
                  v58 = v57->fields.data;
                  if ( v58 )
                  {
                    if ( !DataVals__CheckFunctionTriggerStar(
                            dataVals_k__BackingField,
                            v58->fields.totalCriticalStars,
                            0LL)
                      && !v4->fields.isLowestStarFunction )
                    {
                      goto LABEL_55;
                    }
                    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
                                                                               v4,
                                                                               (System_Int32_array *)v56,
                                                                               v59);
                    if ( this )
                    {
                      v61 = (int)this->fields._procArg_k__BackingField;
                      v62 = this;
                      if ( v61 < 1 )
                      {
                        LOBYTE(this) = 1;
                        return (char)this;
                      }
                      v63 = 0;
                      while ( 1 )
                      {
                        if ( v63 >= (unsigned int)v61 )
                          sub_1BDBADC(this, action, v60);
                        v64 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)*((_QWORD *)&v62->fields._dataVals_k__BackingField
                                                                                  + v63);
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                                   v4,
                                                                                   (const MethodInfo *)action);
                        if ( !v64 )
                          break;
                        BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
                          v64,
                          (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
                          action,
                          0LL);
                        v61 = (int)v62->fields._procArg_k__BackingField;
                        ++v63;
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(&dword_0 + 1);
                        if ( v63 >= v61 )
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
LABEL_69:
      sub_1BDBAD4(this, action);
    }
    goto LABEL_55;
  }
  return (char)this;
}


BattleActionData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(
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
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.method)(
                                                             funcTarget,
                                                             funcTarget->klass->vtable._9_AddBuff.methodPtr,
                                                             method);
  if ( !v4->fields._dataVals_k__BackingField )
    goto LABEL_20;
  v5 = (BattleActionData_BuffData_o *)this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetOverwriteFuncInvalidType(
                                                             v4->fields._dataVals_k__BackingField,
                                                             funcTarget->fields.invalidType,
                                                             0LL);
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
                              0LL);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._5_GetFixNoEffectText.method)(
                                                                 funcTarget,
                                                                 funcTarget->klass->vtable._6_IsExecutable.methodPtr);
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
               0LL);
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
               0LL);
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
                                                                     0LL);
          if ( v7 )
            return BattleLogicFunction__getMissObject(
                     v7,
                     v8,
                     v9,
                     v6,
                     (unsigned __int8)this & 1,
                     funcTarget->fields.invalidText,
                     v5,
                     0LL);
        }
      }
LABEL_20:
      sub_1BDBAD4(this, funcTarget);
    default:
      return 0LL;
  }
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_AddIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1BDBAD4(0LL, method);
  return DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
}


BattleData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_1BDBAD4(this, method);
  return logic_k__BackingField->fields.data;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1BDBAD4(this, method);
  return dataVals_k__BackingField->fields.funcIndex;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(
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
      || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)dataVals_k__BackingField->fields.funcEnt) == 0LL )
    {
      sub_1BDBAD4(this, method);
    }
    funcIndividuality = FunctionEntity__GetFuncIndividuality((FunctionEntity_o *)this, 0LL);
    p_funcIndividuality->klass = (CGThumbnailListItem_c *)funcIndividuality;
    sub_1BDB81C(p_funcIndividuality, (int32_t)funcIndividuality, v5, v6);
  }
  return funcIndividuality;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1BDBAD4(this, method);
  return dataVals_k__BackingField->fields.funcType;
}


BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField
    || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this->fields._logic_k__BackingField) == 0LL )
  {
    sub_1BDBAD4(this, method);
  }
  return BattleLogicFunction__getFunctionTypeProcess(
           (BattleLogicFunction_o *)this,
           dataVals_k__BackingField->fields.funcType,
           0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1BDBAD4(0LL, method);
  return DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddLinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1BDBAD4(0LL, method);
  return DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAvoidFuncExec(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAvoidFuncExec_k__BackingField;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsIgnoreResistFunc(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_o *logic_k__BackingField; // x19
  System_Int32_array *v3; // x0
  __int64 v4; // x1

  logic_k__BackingField = this->fields._logic_k__BackingField;
  v3 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(this, method);
  if ( !logic_k__BackingField )
    sub_1BDBAD4(v3, v4);
  return BattleLogicFunction__IsIgnoreResistFunc(logic_k__BackingField, v3, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_LinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1BDBAD4(0LL, method);
  return DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
}


DataVals_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_dataVals(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._dataVals_k__BackingField;
}


BattleLogicFunctionProcess_FunctionTargetCheck_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_funcTargetArray(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._funcTargetArray_k__BackingField;
}


BattleLogicFunction_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_logic(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._logic_k__BackingField;
}


BattleLogicFunction_ProcListInArgs_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_procArg(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._procArg_k__BackingField;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_result(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._result_k__BackingField;
}


BattleLogicFunctionProcess_FunctionTargetCheck_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        System_Int32_array *targetlist,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x20
  signed int max_length; // w21
  __int64 v6; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array **p_funcTargetArray_k__BackingField; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x23
  il2cpp_array_size_t v12; // w24
  __int64 v13; // x2
  __int64 v14; // x25
  int32_t *v15; // x26
  const MethodInfo *v16; // x3
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v17; // x24
  Il2CppClass **v18; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v19; // x8
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4B479BC & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BDB878(
                                                               &BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                                               targetlist);
    byte_4B479BC = 1;
  }
  if ( !targetlist )
LABEL_19:
    sub_1BDBAD4(this, targetlist);
  max_length = targetlist->max_length;
  v6 = sub_1BDB920(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, (unsigned int)max_length);
  v4->fields._funcTargetArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)v6;
  p_funcTargetArray_k__BackingField = &v4->fields._funcTargetArray_k__BackingField;
  sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._funcTargetArray_k__BackingField, v6, v8, v9);
  funcTargetArray_k__BackingField = v4->fields._funcTargetArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v12 = 0;
    do
    {
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                 v4,
                                                                 v10);
      if ( v12 >= targetlist->max_length )
        goto LABEL_18;
      if ( !this )
        goto LABEL_19;
      v14 = (int)v12;
      v15 = &targetlist->m_Items[v12 + 1];
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                                                 this,
                                                                 (unsigned int)*v15,
                                                                 v4,
                                                                 this->klass[1]._1.declaringType);
      if ( !funcTargetArray_k__BackingField )
        goto LABEL_19;
      v17 = this;
      if ( this )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BDB9B4(
                                                                   this,
                                                                   funcTargetArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v21 = sub_1BDBAF8(0LL);
          sub_1BDB9A0(v21, 0LL);
        }
      }
      if ( (unsigned int)v14 >= funcTargetArray_k__BackingField->max_length )
        goto LABEL_18;
      v18 = &funcTargetArray_k__BackingField->obj.klass + v14;
      v18[4] = (Il2CppClass *)v17;
      sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v13, v16);
      v19 = *p_funcTargetArray_k__BackingField;
      if ( !*p_funcTargetArray_k__BackingField )
        goto LABEL_19;
      if ( (unsigned int)v14 >= v19->max_length || (unsigned int)v14 >= targetlist->max_length )
LABEL_18:
        sub_1BDBADC(this, targetlist, v13);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v19->m_Items[v14];
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const char *))this->klass[1]._1.gc_desc)(
        this,
        (unsigned int)*v15,
        v4,
        this->klass[1]._1.name);
      funcTargetArray_k__BackingField = v4->fields._funcTargetArray_k__BackingField;
      v12 = v14 + 1;
    }
    while ( max_length != (_DWORD)v14 + 1 );
  }
  return funcTargetArray_k__BackingField;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToOtherResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *linkedToOtherList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B479BE & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__,
      method);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__,
      v3);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__,
      v4);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__,
      v5);
    byte_4B479BE = 1;
  }
  memset(&v12, 0, sizeof(v12));
  linkedToOtherList = (System_Collections_Generic_List_object__o *)this->fields.linkedToOtherList;
  if ( !linkedToOtherList )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    linkedToOtherList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    if ( !v7 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1BDBAD4(v7, v8);
    klass = v12.fields._current[2].klass;
    if ( !klass )
      sub_1BDBAD4(0LL, v8);
    if ( !DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed((DataVals_o *)klass, 0LL) )
      BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
        this,
        v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
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
        sub_1BDBADC(this, linkedToSelf, method);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)funcTargetArray_k__BackingField->m_Items[v6];
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionTargetCheck__reflectLinkedToSelfResult(
        (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
        linkedToSelf,
        0LL);
      max_length = funcTargetArray_k__BackingField->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_12:
    sub_1BDBAD4(this, linkedToSelf);
  }
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        int32_t *funcIndex,
        int32_t functionId,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  struct DataVals_o **p_dataVals_k__BackingField; // x22
  __int64 v9; // x1
  BattleLogicFunction_o *FuncMaster; // x0
  DataVals_o *v11; // x22
  DataVals_o *dataVals_k__BackingField; // x21

  this->fields._dataVals_k__BackingField = dataVals;
  p_dataVals_k__BackingField = &this->fields._dataVals_k__BackingField;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._dataVals_k__BackingField,
    (int32_t)dataVals,
    functionId,
    (const MethodInfo *)dataVals);
  FuncMaster = (BattleLogicFunction_o *)*(p_dataVals_k__BackingField - 2);
  if ( !FuncMaster
    || (v11 = *p_dataVals_k__BackingField,
        FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFuncMaster(FuncMaster, 0LL),
        !v11)
    || (DataVals__SetDependDataVals(v11, (FunctionMaster_o *)FuncMaster, funcIndex, 0LL),
        (FuncMaster = this->fields._logic_k__BackingField) == 0LL)
    || (dataVals_k__BackingField = this->fields._dataVals_k__BackingField,
        FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionEntity(FuncMaster, functionId, 0LL),
        !dataVals_k__BackingField) )
  {
    sub_1BDBAD4(FuncMaster, v9);
  }
  DataVals__SetType_40678864(dataVals_k__BackingField, (FunctionEntity_o *)FuncMaster, *funcIndex, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o **v4; // x20
  __int64 v5; // x1
  signed int max_length; // w8
  unsigned int v7; // w24
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v8; // x21
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v10; // x22
  System_Int32_array *AddIndividualty; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  _QWORD *v15; // x9
  __int64 procArg_k__BackingField_low; // x10
  BattleLogicFunction_c **v17; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v18; // x22
  System_Int32_array *LinkageTargetIndividualty; // x23
  const MethodInfo *v20; // x3
  struct BattleLogicFunction_o *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  BattleLogicFunction_c **v24; // x8

  v4 = (BattleLogicFunctionProcess_FunctionUnitCheck_o **)this;
  if ( (byte_4B479BB & 1) == 0 )
  {
    sub_1BDB878(&Individuality_TypeInfo, funcUnitArray);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BDB878(
                                                               &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__,
                                                               v5);
    byte_4B479BB = 1;
  }
  if ( !funcUnitArray )
    goto LABEL_32;
  max_length = funcUnitArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1BDBADC(this, funcUnitArray, method);
      this = v4[4];
      if ( !this )
        break;
      v8 = funcUnitArray->m_Items[v7];
      if ( !v8 )
        break;
      dataVals_k__BackingField = v8->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        break;
      if ( HIDWORD(this->fields._dataVals_k__BackingField) != dataVals_k__BackingField->fields.funcIndex )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetLinkageTargetIndividualty(
                                                                   (DataVals_o *)this,
                                                                   0LL);
        if ( !v8->fields._dataVals_k__BackingField )
          break;
        v10 = this;
        AddIndividualty = DataVals__GetAddIndividualty(v8->fields._dataVals_k__BackingField, 0LL);
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        if ( Individuality__IsPartialMatchArray((System_Int32_array *)v10, AddIndividualty, 0LL) )
        {
          this = v4[7];
          if ( !this )
            break;
          logic_k__BackingField = this->fields._logic_k__BackingField;
          v15 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !logic_k__BackingField )
            break;
          procArg_k__BackingField_low = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)procArg_k__BackingField_low >= LODWORD(logic_k__BackingField->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v8,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &logic_k__BackingField->klass + procArg_k__BackingField_low;
            LODWORD(this->fields._procArg_k__BackingField) = procArg_k__BackingField_low + 1;
            v17[4] = (BattleLogicFunction_c *)v8;
            sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v8, v12, v13);
          }
        }
        this = v4[4];
        if ( !this )
          break;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetAddIndividualty((DataVals_o *)this, 0LL);
        if ( !v8->fields._dataVals_k__BackingField )
          break;
        v18 = this;
        LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(v8->fields._dataVals_k__BackingField, 0LL);
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__IsPartialMatchArray(
                                                                   (System_Int32_array *)v18,
                                                                   LinkageTargetIndividualty,
                                                                   0LL);
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
              (Il2CppObject *)v8,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &v21->klass + v23;
            LODWORD(this->fields._procArg_k__BackingField) = v23 + 1;
            v24[4] = (BattleLogicFunction_c *)v8;
            sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v8, (int32_t)method, v20);
          }
        }
      }
      max_length = funcUnitArray->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_32:
    sub_1BDBAD4(this, funcUnitArray);
  }
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_IsAvoidFuncExec(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAvoidFuncExec_k__BackingField = value;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_dataVals(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._dataVals_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._dataVals_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_funcTargetArray(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._funcTargetArray_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._funcTargetArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_logic(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._logic_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_procArg(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_ProcListInArgs_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._procArg_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._procArg_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_result(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._result_k__BackingField = value;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0___checkFuncTargetResult_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass60_0_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._targetId_k__BackingField == this->fields.targetId
      && this->fields.result == x->fields._result_k__BackingField;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0___IsSatisfyBattlePointPhaseRangeCondition_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass69_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0
  DataVals_o *baseVals; // x20

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData
    || (baseVals = this->fields.baseVals,
        targetSvtData = (BattleServantData_o *)BattleServantData__GetBattlePointPhase(targetSvtData, id, 0LL),
        !baseVals) )
  {
    sub_1BDBAD4(targetSvtData, *(_QWORD *)&id);
  }
  return DataVals__IsSatisfyAboveBelowCond(baseVals, 178, (int32_t)targetSvtData, id, 0LL);
}


void __fastcall BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(
        BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(
        BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  BuffList_TYPE_array *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4B479CB & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ConstantStrMaster___, targetSvtData);
    sub_1BDB878(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BDB878(&StringLiteral_8779/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/, v7);
    byte_4B479CB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_8779/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/,
                                0LL,
                                0LL);
  if ( !Instance )
    return (char)Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
  {
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                               (System_Collections_IEnumerable_o *)Instance,
                                                               (const MethodInfo_30420C4 *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                v10,
                                (const MethodInfo_3070698 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !targetSvtData
    || (v9 = (BuffList_TYPE_array *)Instance, (Instance = (DataManager_o *)targetSvtData->fields.buffData) == 0LL)
    || (Instance = (DataManager_o *)BattleBuffData__getBuffList_44456812(
                                      (BattleBuffData_o *)Instance,
                                      v9,
                                      0LL,
                                      0LL,
                                      0LL)) == 0LL )
  {
LABEL_13:
    sub_1BDBAD4(Instance, v9);
  }
  LOBYTE(Instance) = LODWORD(Instance->fields.m_CancellationTokenSource) != 0;
  return (char)Instance;
}


bool __fastcall BattleLogicFunctionProcess_MoveToLastSubMemberProcess__checkCondition(
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
                                                                      0LL);
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
                                                                      0LL,
                                                                      0,
                                                                      0LL);
  if ( !this )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_18;
  klass = (int)this[1].klass;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getBuffList(v10, 84, 0, 0LL);
  if ( !this )
    goto LABEL_18;
  if ( this[1].klass )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, 0LL);
    BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(v13, v10, v14);
    goto LABEL_11;
  }
  HasRefuseBuff = BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(this, v10, v12);
  if ( klass < 2 || HasRefuseBuff )
  {
LABEL_11:
    this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getDeckIndex(v10, 0LL);
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
            0LL);
          funcTarget->fields.invalidType = 1;
          return 0;
        }
      }
    }
LABEL_18:
    sub_1BDBAD4(this, action);
  }
  return BattleLogicFunctionProcess_CommonFunctionTypeProcess__checkCondition(v5, action, funcTarget, v19);
}


void __fastcall BattleLogicFunctionProcess_OverwriteBattleClassCheck___ctor(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        const MethodInfo *method)
{
  this->fields.OverwriteClassId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_OverwriteBattleClassCheck__AddBuff(
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
        (this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)this->fields.targetSvt) == 0LL) )
  {
    sub_1BDBAD4(this, actBuffData);
  }
  BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_OverwriteBattleClassCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t *p_OverwriteClassId; // x20
  ConstantStrMaster_o *Master_object; // x0
  __int64 v9; // x1
  bool result; // w0

  if ( (byte_4B479AD & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ConstantStrMaster___, action);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_5460/*"ENABLE_OVERWRITE_CLASS_IDS"*/, v6);
    byte_4B479AD = 1;
  }
  p_OverwriteClassId = &this->fields.OverwriteClassId;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(
          this,
          &this->fields.OverwriteClassId,
          (const MethodInfo *)buffEnt) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( !ConstantStrMaster__ExistValueArray(
          Master_object,
          (System_String_o *)StringLiteral_5460/*"ENABLE_OVERWRITE_CLASS_IDS"*/,
          *p_OverwriteClassId,
          0LL) )
  {
LABEL_10:
    result = 0;
    this->fields.invalidType = 1;
    return result;
  }
  Master_object = (ConstantStrMaster_o *)this->fields.targetSvt;
  if ( !Master_object )
LABEL_12:
    sub_1BDBAD4(Master_object, v9);
  if ( BattleServantData__GetLogicClassId((BattleServantData_o *)Master_object, 0LL) == *p_OverwriteClassId )
    goto LABEL_10;
  return 1;
}


System_String_o *__fastcall BattleLogicFunctionProcess_OverwriteBattleClassCheck__GetFixNoEffectText(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  BattleServantData_o *targetSvt; // x0
  int32_t LogicClassId; // w0
  int32_t classId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B479AE & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_2842/*"BATTLE_NO_EFFECT_FUNCTION"*/, v4);
    byte_4B479AE = 1;
  }
  classId = 0;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(this, &classId, v2) )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v5);
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1BDBAD4(0LL, v5);
  LogicClassId = BattleServantData__GetLogicClassId(targetSvt, 0LL);
  if ( LogicClassId != classId )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v5);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2842/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        int32_t *classId,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x21
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleServantData_o *ServantData; // x0
  int32_t Value; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B479AF & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantClassMaster___, classId);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BDB878(
                                                                       &Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__,
                                                                       v6);
    byte_4B479AF = 1;
  }
  entity = 0LL;
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_17;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_17;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( DataVals__GetParam(funcUnit_k__BackingField->fields._dataVals_k__BackingField, 188, 0, 0LL) == 1 )
  {
    this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)v4->fields._funcUnit_k__BackingField;
    if ( !this )
      goto LABEL_17;
    this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
                                                                       (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
                                                                       0LL);
    if ( !procArg_k__BackingField || !this )
      goto LABEL_17;
    ServantData = BattleData__getServantData(
                    (BattleData_o *)this,
                    procArg_k__BackingField->fields._EnemyTargetId_k__BackingField,
                    0LL);
    Value = ServantData ? BattleServantData__GetLogicClassId(ServantData, 0LL) : -1;
  }
  else
  {
    Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
  }
  *classId = Value;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
LABEL_17:
    sub_1BDBAD4(this, classId);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           *classId,
           (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
}


void __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck___ctor(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__AddBuff(
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
    sub_1BDBAD4(0LL, actBuffData);
  BattleServantData__addBuff(targetSvt, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__CheckConvertBuffData(
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
  sub_1BDB81C((CGThumbnailListItem_o *)p_buffConvertEntity, (int32_t)buffConvertEntity, (int32_t)method, v3);
  if ( !buffConvertEntity )
    sub_1BDBAD4(v7, v8);
  ConvertBuffIdFromIndex = BuffConvertEntity__GetConvertBuffIdFromIndex(
                             buffConvertEntity,
                             this->fields.convertBuffIndex,
                             0LL);
  this->fields.convertBuffId = ConvertBuffIdFromIndex;
  BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, ConvertBuffIdFromIndex, 0LL);
  if ( BuffEntity )
  {
    v11 = BuffEntity;
    if ( BuffEntity__isCheckGroup(BuffEntity, 0LL)
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
BuffConvertEntity_o *__fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__GetConvertBuffEntity(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        int32_t actorId,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  Il2CppObject *v13; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v14; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  BattleBuffData_BuffData_o *current; // x22
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v23; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct FunctionEntity_o *funcEnt; // x8
  _BOOL8 IsTargetLimit; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v29; // x8
  DataVals_o *v30; // x0
  struct FunctionEntity_o *v31; // x8
  struct System_Int32_array *vals; // x8
  Il2CppObject *v33; // x24
  int32_t v34; // w23
  System_Int32_array *ParamArray; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  BattleServantData_o *targetSvt; // x0
  BattleBuffData_o *BuffData; // x0
  __int64 v40; // x1
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4B479A7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_BuffConvertMaster___, *(_QWORD *)&actorId);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)sub_1BDB878(
                                                                        &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                        v11);
    byte_4B479A7 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  entity = 0LL;
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_40;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_40;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 22, 0LL);
  v13 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v14 = v4->fields._funcUnit_k__BackingField;
    if ( !v14 )
      goto LABEL_40;
    procArg_k__BackingField = v14->fields._procArg_k__BackingField;
    if ( !procArg_k__BackingField )
      goto LABEL_40;
    externalArg = procArg_k__BackingField->fields.externalArg;
    if ( !externalArg )
      goto LABEL_40;
    if ( externalArg->fields.isPassive )
      return 0LL;
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v14->fields._dataVals_k__BackingField;
    if ( !this )
LABEL_40:
      sub_1BDBAD4(this, *(_QWORD *)&actorId);
    v13 = 0LL;
    if ( !DataVals__isParam((DataVals_o *)this, 23, 0LL) )
    {
      this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v4->fields.targetSvt;
      if ( this )
      {
        BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffList(
                                                                          (BattleServantData_o *)this,
                                                                          114,
                                                                          1,
                                                                          0LL);
        this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                            BuffList,
                                                                            (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
        if ( this )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v42,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
          v43 = v42;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v43,
                    (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
          {
            current = (BattleBuffData_BuffData_o *)v43.fields._current;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BuffConvertMaster___);
            if ( !current )
              sub_1BDBAD4(Master_object, v20);
            if ( !Master_object )
              sub_1BDBAD4(0LL, v20);
            v21 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    current->fields.buffId,
                    (const MethodInfo_32E1E88 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
            if ( v21 )
            {
              v23 = v4->fields._funcUnit_k__BackingField;
              if ( !v23 )
                sub_1BDBAD4(v21, v22);
              dataVals_k__BackingField = v23->fields._dataVals_k__BackingField;
              if ( !dataVals_k__BackingField )
                sub_1BDBAD4(v21, v22);
              funcEnt = dataVals_k__BackingField->fields.funcEnt;
              if ( !funcEnt )
                sub_1BDBAD4(v21, v22);
              if ( !entity )
                sub_1BDBAD4(0LL, v22);
              IsTargetLimit = BuffConvertEntity__IsTargetLimit(
                                (BuffConvertEntity_o *)entity,
                                funcEnt->fields.targetType,
                                v4->fields._targetId_k__BackingField,
                                actorId,
                                0LL);
              if ( IsTargetLimit )
              {
                v29 = v4->fields._funcUnit_k__BackingField;
                if ( !v29 )
                  sub_1BDBAD4(IsTargetLimit, v27);
                v30 = v29->fields._dataVals_k__BackingField;
                if ( !v30 )
                  sub_1BDBAD4(0LL, v27);
                v31 = v30->fields.funcEnt;
                if ( !v31 )
                  sub_1BDBAD4(v30, v27);
                vals = v31->fields.vals;
                if ( !vals )
                  sub_1BDBAD4(v30, v27);
                if ( !vals->max_length )
                  sub_1BDBADC(v30, v27, v28);
                v33 = entity;
                v34 = vals->m_Items[1];
                ParamArray = DataVals__GetParamArray(v30, 112, 0LL);
                if ( !v33 )
                  sub_1BDBAD4(ParamArray, v36);
                if ( BuffConvertEntity__TryGetConvertBuffIndex(
                       (BuffConvertEntity_o *)v33,
                       &v4->fields.convertBuffIndex,
                       v34,
                       ParamArray,
                       0LL) )
                {
                  targetSvt = v4->fields.targetSvt;
                  if ( !targetSvt )
                    sub_1BDBAD4(0LL, v37);
                  BuffData = BattleServantData__get_BuffData(targetSvt, 0LL);
                  if ( !BuffData )
                    sub_1BDBAD4(0LL, v40);
                  if ( BattleBuffData__checkBuffSuccessful(BuffData, current, 1, 0LL) )
                  {
                    v13 = entity;
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &v43,
                      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                    return (BuffConvertEntity_o *)v13;
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v43,
            (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
          return 0LL;
        }
      }
      goto LABEL_40;
    }
  }
  return (BuffConvertEntity_o *)v13;
}


BuffEntity_o *__fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__GetFixBuffEntity(
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
  result = BuffConvertEntity__GetBuffEntity(buffConvertEntity, this->fields.convertBuffId, 0LL);
  if ( !result )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixBuffEntity(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             method);
  return result;
}


void __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__Init(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  BattleData_o *v7; // x0
  __int64 v8; // x1
  struct BattleServantData_o *ServantData; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  BattleLogicFunctionProcess_FunctionTargetCheck__Init(
    (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
    targetId,
    funcUnit,
    method);
  if ( !funcUnit || (v7 = BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(funcUnit, 0LL)) == 0LL )
    sub_1BDBAD4(v7, v8);
  ServantData = BattleData__getServantData(v7, targetId, 0LL);
  this->fields.targetSvt = ServantData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetSvt, (int32_t)ServantData, v10, v11);
}


bool __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
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

  if ( (byte_4B479A8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, buffEnt);
    byte_4B479A8 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                 AttachTargetList_k__BackingField,
                                                                                 (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  v9 = *(_QWORD *)&AttachTargetList_k__BackingField->fields._size;
  v10 = AttachTargetList_k__BackingField;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1BDBADC(AttachTargetList_k__BackingField, buffEnt, v8);
      if ( !targetSvt )
        break;
      v12 = *((_DWORD *)&v10->fields._syncRoot + v11);
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleServantData__get_BuffData(
                                                                                     targetSvt,
                                                                                     0LL);
      if ( !buffEnt || !AttachTargetList_k__BackingField )
        break;
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleBuffData__checkBuffGroup(
                                                                                     (BattleBuffData_o *)AttachTargetList_k__BackingField,
                                                                                     buffEnt->fields.buffGroup,
                                                                                     v12,
                                                                                     0LL);
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
    sub_1BDBAD4(AttachTargetList_k__BackingField, buffEnt);
  }
LABEL_14:
  if ( (byte_4B479A1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, buffEnt);
    byte_4B479A1 = 1;
  }
  v13 = this->fields._AttachTargetList_k__BackingField;
  return !v13 || v13->fields._size < 1;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__MakeAddActionBuffData(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        FunctionEntity_o *funcEnt,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  BuffConvertEntity_o *BuffEntity; // x0
  __int64 convertBuffId; // x1
  BuffConvertEntity_o *v9; // x19
  BuffConvertEntity_o *buffConvertEntity; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_o *logic_k__BackingField; // x22
  int32_t targetId_k__BackingField; // w23
  BuffConvertEntity_o *v14; // x21
  BattleActionData_BuffData_o *GrayActionBuffData; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Int32_array *EffectList; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *OverwritePopupTextFromIndex; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  BuffEntity = (BuffConvertEntity_o *)BattleLogicFunctionProcess_FunctionTargetCheck__MakeAddActionBuffData(
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
      goto LABEL_12;
    BYTE2(BuffEntity[1].fields.effectId) = this->fields.isBuffConvertFailure;
    buffConvertEntity = this->fields.buffConvertEntity;
    if ( buffConvertEntity )
    {
      BuffEntity = (BuffConvertEntity_o *)BuffConvertEntity__GetBuffEntity(buffConvertEntity, convertBuffId, 0LL);
      funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
      if ( funcUnit_k__BackingField )
      {
        logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
        targetId_k__BackingField = this->fields._targetId_k__BackingField;
        v14 = BuffEntity;
        BuffEntity = (BuffConvertEntity_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                              this->fields._funcUnit_k__BackingField,
                                              0LL);
        if ( logic_k__BackingField )
        {
          GrayActionBuffData = BattleLogicFunction__MakeGrayActionBuffData(
                                 logic_k__BackingField,
                                 targetId_k__BackingField,
                                 (int32_t)BuffEntity,
                                 (int32_t)v9[1].monitor,
                                 (System_String_o *)v9[1].klass,
                                 HIDWORD(v9[1].monitor),
                                 0LL);
          v9[1].fields.script = (struct System_Collections_Generic_Dictionary_string__object__o *)GrayActionBuffData;
          sub_1BDB81C((CGThumbnailListItem_o *)&v9[1].fields.script, (int32_t)GrayActionBuffData, v16, v17);
          v9->fields.effectId = this->fields.convertBuffId;
          if ( v14 )
          {
            LODWORD(v9[1].monitor) = v14->fields.targetLimit;
            BuffEntity = this->fields.buffConvertEntity;
            if ( BuffEntity )
            {
              HIDWORD(v9[1].monitor) = BuffConvertEntity__GetOverwritePopupColorFromIndex(
                                         BuffEntity,
                                         this->fields.convertBuffIndex,
                                         HIDWORD(v9[1].monitor),
                                         0LL);
              BuffEntity = this->fields.buffConvertEntity;
              if ( BuffEntity )
              {
                EffectList = BuffConvertEntity__GetEffectList(
                               BuffEntity,
                               *(System_Int32_array **)&v9[1].fields.buffId,
                               0LL);
                *(_QWORD *)&v9[1].fields.buffId = EffectList;
                sub_1BDB81C((CGThumbnailListItem_o *)&v9[1].fields, (int32_t)EffectList, v19, v20);
                BuffEntity = this->fields.buffConvertEntity;
                if ( BuffEntity )
                {
                  OverwritePopupTextFromIndex = BuffConvertEntity__GetOverwritePopupTextFromIndex(
                                                  BuffEntity,
                                                  this->fields.convertBuffIndex,
                                                  (System_String_o *)v14->fields.targetIds,
                                                  0LL);
                  v9[1].klass = (BuffConvertEntity_c *)OverwritePopupTextFromIndex;
                  sub_1BDB81C((CGThumbnailListItem_o *)&v9[1], (int32_t)OverwritePopupTextFromIndex, v22, v23);
                  return (BattleActionData_BuffData_o *)v9;
                }
              }
            }
          }
        }
      }
LABEL_12:
      sub_1BDBAD4(BuffEntity, convertBuffId);
    }
  }
  return (BattleActionData_BuffData_o *)v9;
}


void __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___ctor(
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantData_o *targetSvt; // x0
  BattleSkillInfoData_array *ActiveSkillInfos; // x0
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_c *v10; // x8
  System_Object_array *v11; // x20
  System_Func_object__bool__o *_9__0_0; // x21
  Il2CppObject *v13; // x22
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  bool v17; // w0

  if ( (byte_4B479A9 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_BattleSkillInfoData___, action);
    sub_1BDB878(&System_Func_BattleSkillInfoData__bool__TypeInfo, v5);
    sub_1BDB878(&Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__, v6);
    sub_1BDB878(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v7);
    byte_4B479A9 = 1;
  }
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1BDBAD4(0LL, action);
  ActiveSkillInfos = BattleServantData__getActiveSkillInfos(targetSvt, 0LL);
  v10 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  v11 = (System_Object_array *)ActiveSkillInfos;
  if ( !BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    v10 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v10->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v13,
      Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      0LL);
    static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__0_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v15, v16);
  }
  v17 = BasicHelper__Any_object__50450088(
          v11,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_BattleSkillInfoData___);
  if ( !v17 )
    this->fields.invalidType = 1;
  return v17;
}


void __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B479AA & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v1);
    byte_4B479AA = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___ctor(
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___CheckBuffCondtion_b__0_0(
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *this,
        BattleSkillInfoData_o *skill,
        const MethodInfo *method)
{
  if ( !skill )
    sub_1BDBAD4(this, 0LL);
  return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skill->klass->vtable._12_IsChangeable.method)(
           skill,
           skill->klass->vtable._13_UseSkill.methodPtr);
}


void __fastcall BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck___ctor(
        BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck__CheckBuffCondtion(
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
  targetSvt = (BattleServantData_o *)BattleServantData__getSkillSealSelect(targetSvt, 0LL);
  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (v7 = targetSvt,
        (targetSvt = (BattleServantData_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL)
    || (targetSvt = (BattleServantData_o *)DataVals__GetParam((DataVals_o *)targetSvt, 3, 0, 0LL),
        !this->fields.targetSvt)
    || (v8 = (int)targetSvt,
        (targetSvt = (BattleServantData_o *)BattleServantData__get_BuffData(this->fields.targetSvt, 0LL)) == 0LL)
    || (targetSvt = (BattleServantData_o *)BattleBuffData__getSkillSealSelectListFromValue(
                                             (BattleBuffData_o *)targetSvt,
                                             v8,
                                             0LL)) == 0LL )
  {
LABEL_20:
    sub_1BDBAD4(targetSvt, action);
  }
  v10 = *(_QWORD *)&targetSvt->fields.uniqueId;
  v11 = targetSvt;
  v12 = (int)v10 > 0;
  if ( (int)v10 >= 1 )
  {
    v13 = 0LL;
    p_userSvtId = &targetSvt->fields.userSvtId;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v10 )
LABEL_21:
        sub_1BDBADC(targetSvt, action, v9);
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
        targetSvt = (BattleServantData_o *)BattleServantData__isUseSelfSkill(targetSvt, v13, 0LL);
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


void __fastcall BattleLogicFunctionProcess_SubFieldIndividualityCheck___ctor(
        BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_SubFieldIndividualityCheck__AddBuff(
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

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  v7 = this;
  this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this
    || (this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)DataVals__GetTargetList(
                                                                            (DataVals_o *)this,
                                                                            0LL),
        !buffData)
    || (buffData->fields.generalParams = (struct System_Int32_array *)this,
        sub_1BDB81C((CGThumbnailListItem_o *)&buffData->fields.generalParams, (int32_t)this, v11, v12),
        (this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)v7->fields.targetSvt) == 0LL)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL),
        (this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)v7->fields._funcUnit_k__BackingField) == 0LL) )
  {
LABEL_7:
    sub_1BDBAD4(this, actBuffData);
  }
  BattleLogicFunctionProcess_FunctionUnitCheck__SetAfterUpdateField(
    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
    0LL);
}


void __fastcall BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck___ctor(
        BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck___ctor(
        BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck__AddBuff(
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
  if ( (byte_4B479B5 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)sub_1BDB878(
                                                                                &BattleBuffData_FieldChangeData_TypeInfo,
                                                                                actBuffData);
    byte_4B479B5 = 1;
  }
  funcUnit_k__BackingField = v8->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleBuffData_FieldChangeData_o *)sub_1BDBAC4(BattleBuffData_FieldChangeData_TypeInfo);
  BattleBuffData_FieldChangeData___ctor_44677176(v11, dataVals_k__BackingField, 0LL);
  if ( !buffData
    || (buffData->fields.fieldChangeData = v11,
        sub_1BDB81C((CGThumbnailListItem_o *)&buffData->fields.fieldChangeData, (int32_t)v11, v12, v13),
        buffData->fields.delAfterProcType = 1,
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(v8, actBuffData, buffData, 0, 0, v14),
        (fieldChangeData = buffData->fields.fieldChangeData) == 0LL) )
  {
LABEL_7:
    sub_1BDBAD4(this, actBuffData);
  }
  fieldChangeData->fields.buffUniqueId = buffData->fields.addOrder;
}


void __fastcall BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_FunctionTargetCheck_o *__fastcall BattleLogicFunctionProcess_ToFieldCommonFunctionProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *v4; // x19

  if ( (byte_4B479CC & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo, *(_QWORD *)&targetId);
    byte_4B479CC = 1;
  }
  v4 = (BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *)sub_1BDBAC4(BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
  BattleLogicFunctionProcess_ToFieldFunctionTargetCheck___ctor(v4, 0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v4;
}


void __fastcall BattleLogicFunctionProcess_ToFieldFunctionTargetCheck___ctor(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData_o *v2; // x19

  if ( (byte_4B479B6 & 1) == 0 )
  {
    sub_1BDB878(&BattleActionData_FieldBuffData_TypeInfo, method);
    byte_4B479B6 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_1BDBAC4(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0LL);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4B479B7 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method);
    byte_4B479B7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
}


void __fastcall BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck___ctor(
        BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck__AddBuff(
        BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *v7; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x5

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (v7 = this,
        (this = (BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL)
    || (this = (BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *)DataVals__GetTargetList(
                                                                                   (DataVals_o *)this,
                                                                                   0LL),
        !buffData)
    || (buffData->fields.generalParams = (struct System_Int32_array *)this,
        sub_1BDB81C((CGThumbnailListItem_o *)&buffData->fields.generalParams, (int32_t)this, v10, v11),
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(
          (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)v7,
          actBuffData,
          buffData,
          0,
          0,
          v12),
        (this = (BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *)v7->fields._funcUnit_k__BackingField) == 0LL) )
  {
    sub_1BDBAD4(this, actBuffData);
  }
  BattleLogicFunctionProcess_FunctionUnitCheck__SetAfterUpdateField(
    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
    0LL);
}


void __fastcall BattleLogicFunctionProcess_TransformServantProcess___ctor(
        BattleLogicFunctionProcess_TransformServantProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_TransformServantProcess__CheckConditionPartial(
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
                                                                   0LL);
  if ( !this )
    goto LABEL_15;
  v9 = this;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)this[11].monitor;
  if ( !this )
    goto LABEL_15;
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)ServantEntity__isInvalidSkillShift(
                                                                   (ServantEntity_o *)this,
                                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    result = 0;
    funcTarget->fields.invalidType = 1;
    return result;
  }
  if ( !baseVals )
LABEL_15:
    sub_1BDBAD4(this, action);
  if ( DataVals__isParam(baseVals, 6, 0LL) && DataVals__GetParam(baseVals, 6, 0, 0LL) != HIDWORD(v9[8].monitor) )
    return 1;
  IsCancelTransform = DataVals__IsCancelTransform(baseVals, 0LL);
  result = 1;
  if ( !IsCancelTransform )
  {
    funcTarget->fields.invalidType = 1;
    return 0;
  }
  return result;
}


void __fastcall BattleLogicFunctionProcess_WrapTargetData___ctor(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicFunctionProcess_WrapTargetData__GetAddBaseValue(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleLogicFunctionProcess_WrapTargetData__Init(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.funcTarget = funcTarget;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)funcTarget, (int32_t)method, v3);
  ((void (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))this->klass->vtable._5_InitPartial.method)(
    this,
    this->klass->vtable._6_unknown.methodPtr);
}


void __fastcall BattleLogicFunctionProcess_WrapTargetData__InitPartial(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  ;
}


DataVals_o *__fastcall BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0LL )
    sub_1BDBAD4(this, method);
  return funcUnit_k__BackingField->fields._dataVals_k__BackingField;
}


BattleData_o *__fastcall BattleLogicFunctionProcess_WrapTargetData__get_Data(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget
    || (this = (BattleLogicFunctionProcess_WrapTargetData_o *)funcTarget->fields._funcUnit_k__BackingField) == 0LL )
  {
    sub_1BDBAD4(this, method);
  }
  return BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
           (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
           0LL);
}


BattleLogicFunctionProcess_FunctionUnitCheck_o *__fastcall BattleLogicFunctionProcess_WrapTargetData__get_FuncUnit(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget )
    sub_1BDBAD4(this, method);
  return funcTarget->fields._funcUnit_k__BackingField;
}


BattleLogicFunction_o *__fastcall BattleLogicFunctionProcess_WrapTargetData__get_LogicFunc(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0LL )
    sub_1BDBAD4(this, method);
  return funcUnit_k__BackingField->fields._logic_k__BackingField;
}


void __fastcall BattleLogicFunctionProcess_WrapTargetField___ctor(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__CheckBuffAvoid(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, buffIndiv);
  return BattleFieldEnvironmentData__CheckBuffAvoid(target, buffIndiv, opSvt, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__CheckDisableForciblyAddStateBuffAvoid(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  return 0;
}


float __fastcall BattleLogicFunctionProcess_WrapTargetField__DefaultMagnification(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_String_o **text,
        float resVal,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  *text = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)text, 0, (int32_t)method, v4);
  return resVal;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetField__GetBuffIndividualities(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target
    || (target = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(target, 0LL)) == 0LL )
  {
    sub_1BDBAD4(target, isActiveOnly);
  }
  return BattleBuffData__getBuffIndividualities(
           (BattleBuffData_o *)target,
           isActiveOnly,
           isIncludeIgnoreIndiv,
           isIgnoreIndivUnreleaseable,
           0,
           0LL,
           0LL);
}


float __fastcall BattleLogicFunctionProcess_WrapTargetField__GetBuffTOLERANCEMagnification(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        const MethodInfo *method)
{
  *missText = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)missText, 0, (int32_t)opSvt, (const MethodInfo *)missText);
  return 0.0;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetField__GetBuffTargetCardIndexArray(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B479B8 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    byte_4B479B8 = 1;
  }
  return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
}


int32_t __fastcall BattleLogicFunctionProcess_WrapTargetField__GetCommandCardIndex(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  return -1;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetField__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, method);
  return (System_Int32_array *)((__int64 (__fastcall *)(struct BattleFieldEnvironmentData_o *, _QWORD, __int64, Il2CppMethodPointer))target->klass->vtable._4_GetFieldIndividuality.method)(
                                 target,
                                 0LL,
                                 1LL,
                                 target->klass->vtable._5_AddBackground.methodPtr);
}


float __fastcall BattleLogicFunctionProcess_WrapTargetField__GetOptBuffGRANTSTATEMagnification(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        bool upOnly,
        const MethodInfo *method)
{
  *missText = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)missText, 0, (int32_t)opSvt, (const MethodInfo *)missText);
  return 0.0;
}


int32_t __fastcall BattleLogicFunctionProcess_WrapTargetField__GetSameIndividualityBuffSum(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *indiv,
        bool isActiveOnly,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target
    || (target = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(target, 0LL)) == 0LL )
  {
    sub_1BDBAD4(target, indiv);
  }
  return BattleBuffData__getSameIndivualityBuffSum((BattleBuffData_o *)target, indiv, isActiveOnly, 0, 0, 0LL);
}


void __fastcall BattleLogicFunctionProcess_WrapTargetField__InitPartial(
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
    sub_1BDBAD4(0LL, v4);
  FieldEnvData_k__BackingField = Data->fields._FieldEnvData_k__BackingField;
  this->fields.target = FieldEnvData_k__BackingField;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.target, (int32_t)FieldEnvData_k__BackingField, v5, v6);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__IsSatisfyTargetDefeatPointCondtion(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__IsSatisfyTargetRessurectableCondtion(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 1;
}


BattleBuffData_o *__fastcall BattleLogicFunctionProcess_WrapTargetField__get_BuffData(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, method);
  return BattleFieldEnvironmentData__get_BuffData(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__get_CheckField(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__get_CheckPlayer(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__get_IsNoTarget(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__get_IsShiftableServant(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetField__get_IsUseDefeatPointReady(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleLogicFunctionProcess_WrapTargetServant___ctor(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__CheckBuffAvoid(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, buffIndiv);
  return BattleServantData__checkBuffAvoid(target, buffIndiv, opSvt, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__CheckDisableForciblyAddStateBuffAvoid(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, buffIndiv);
  return BattleServantData__CheckDisableForciblyAddStateBuffAvoid(target, buffIndiv, opSvt, 0LL);
}


int32_t __fastcall BattleLogicFunctionProcess_WrapTargetServant__GetAddBaseValue(
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
    sub_1BDBAD4(BaseVals, v6);
  return BattleLogicFunction__GetAddCondParamValue(LogicFunc, BaseVals, this->fields.target, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetServant__GetBuffIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target || (this = (BattleLogicFunctionProcess_WrapTargetServant_o *)target->fields.buffData) == 0LL )
    sub_1BDBAD4(this, isActiveOnly);
  return BattleBuffData__getBuffIndividualities(
           (BattleBuffData_o *)this,
           isActiveOnly,
           isIncludeIgnoreIndiv,
           isIgnoreIndivUnreleaseable,
           0,
           0LL,
           0LL);
}


float __fastcall BattleLogicFunctionProcess_WrapTargetServant__GetBuffTOLERANCEMagnification(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, buffIndiv);
  return BattleServantData__getBuffTOLERANCEMagnification(target, buffIndiv, opSvt, missText, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetServant__GetBuffTargetCardIndexArray(
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
    sub_1BDBAD4(BaseVals, v6);
  return BattleLogicFunction__GetBuffTargetCardIndexArray(LogicFunc, BaseVals, this->fields.target, 0LL);
}


int32_t __fastcall BattleLogicFunctionProcess_WrapTargetServant__GetCommandCardIndex(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, userCommandCodeId);
  return BattleServantData__GetCommandCardIndex(target, userCommandCodeId, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetServant__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, method);
  return BattleServantData__getIndividualities(target, 0LL, 1, 0, 0LL);
}


float __fastcall BattleLogicFunctionProcess_WrapTargetServant__GetOptBuffGRANTSTATEMagnification(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        bool upOnly,
        const MethodInfo *method)
{
  if ( !opSvt )
    sub_1BDBAD4(this, buffIndiv);
  return BattleServantData__getBuffGRANTSTATEMagnification(opSvt, buffIndiv, this->fields.target, missText, upOnly, 0LL);
}


int32_t __fastcall BattleLogicFunctionProcess_WrapTargetServant__GetSameIndividualityBuffSum(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        System_Int32_array *indiv,
        bool isActiveOnly,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, indiv);
  return BattleServantData__getSameIndiualityBuffSum(target, indiv, isActiveOnly, 0, 0, 0LL);
}


void __fastcall BattleLogicFunctionProcess_WrapTargetServant__InitPartial(
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
    sub_1BDBAD4(Data, v4);
  ServantData = BattleData__getServantData(Data, funcTarget->fields._targetId_k__BackingField, 0LL);
  this->fields.target = ServantData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.target, (int32_t)ServantData, v7, v8);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__IsSatisfyTargetDefeatPointCondtion(
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
  if ( DataVals__TryGetParam((DataVals_o *)BaseVals, 145, &param, 0LL) )
  {
    BaseVals = this->fields.target;
    if ( BaseVals )
    {
      DefeatPoint = BattleServantData__getDefeatPoint(BaseVals, 0LL);
      return (DefeatPoint < 1) ^ (param > 0);
    }
LABEL_7:
    sub_1BDBAD4(BaseVals, v4);
  }
  return 1;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__IsSatisfyTargetRessurectableCondtion(
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
  if ( !DataVals__TryGetParam(BaseVals, 142, &param, 0LL) )
  {
    v6 = 1;
    return v6 & 1;
  }
  BaseVals = (DataVals_o *)this->fields.target;
  if ( !BaseVals )
LABEL_7:
    sub_1BDBAD4(BaseVals, v4);
  exists = BattleServantData__ExistsResurrection((BattleServantData_o *)BaseVals, 0LL);
  v6 = exists ^ (param < 1);
  return v6 & 1;
}


BattleBuffData_o *__fastcall BattleLogicFunctionProcess_WrapTargetServant__get_BuffData(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, method);
  return BattleServantData__get_BuffData(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(this, method);
  return target->fields.isEnemy;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_CheckField(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_CheckPlayer(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, method);
  return BattleServantData__checkPlayer(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, method);
  return BattleServantData__isGuts(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, method);
  return BattleServantData__isLogicResultAlive(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsNoTarget(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  return this->fields.target == 0LL;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsShiftableServant(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BDBAD4(0LL, method);
  return BattleServantData__isShiftableServant(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsUseDefeatPointReady(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  __int64 v4; // x1

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data || (Data = (BattleData_o *)Data->fields.battleEvent) == 0LL )
    sub_1BDBAD4(Data, v4);
  return (*(__int64 (__fastcall **)(BattleData_o *, struct BattleServantData_o *, _QWORD))&Data->klass[1]._2.initializationExceptionGCHandle)(
           Data,
           this->fields.target,
           *(_QWORD *)&Data->klass[1]._2.cctor_finished);
}