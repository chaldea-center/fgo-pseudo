void __fastcall BattleLogicFunctionProcess___ctor(BattleLogicFunctionProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionProcess_AddStateProcess___ctor(
        BattleLogicFunctionProcess_AddStateProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
    0LL);
}


void __fastcall BattleLogicFunctionProcess_AddStateShortProcess___ctor(
        BattleLogicFunctionProcess_AddStateShortProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
    0LL);
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
  int32_t Param; // w22
  char v13; // w23
  __int64 v14; // x21
  __int64 v15; // x20
  const MethodInfo *v16; // x4
  bool TargetUniqueIdArray; // w24
  bool v18; // w26
  System_Collections_Generic_List_int__o *v19; // x25
  System_Int32_array *v20; // x24
  __int64 v21; // x8
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
  if ( (byte_4BDF288 & 1) == 0 )
  {
    sub_1C21E38(&Individuality_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDF288 = 1;
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
  v13 = (char)this;
  v14 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass **))wrapTarget->klass[1]._1.methods)(
          wrapTarget,
          wrapTarget->klass[1]._1.nestedTypes);
  v15 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, bool, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))wrapTarget->klass[1]._1.implementedInterfaces)(
          wrapTarget,
          Param < 1,
          0LL,
          v13 & 1,
          wrapTarget->klass[1]._1.interfaceOffsets);
  TargetUniqueIdArray = BattleLogicFunctionProcess_BaseFunctionTypeProcess__TryGetTargetUniqueIdArray(
                          v10,
                          baseVals,
                          actionData,
                          &targetIdArray,
                          v16);
  v18 = DataVals__TryGetFuncCheckTargetIndividualityCount(baseVals, &countLower[1], countLower, &countEqual, 0LL);
  v19 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( TargetUniqueIdArray )
  {
    v45 = TargetUniqueIdArray;
    v20 = targetIdArray;
    if ( !targetIdArray )
      goto LABEL_66;
    v21 = *(_QWORD *)&targetIdArray->max_length;
    v44 = v14;
    if ( (int)v21 >= 1 )
    {
      count = 0;
      v22 = 0LL;
      while ( v22 < (unsigned int)v21 )
      {
        logic_k__BackingField = v10->fields._logic_k__BackingField;
        if ( !logic_k__BackingField )
          goto LABEL_66;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)logic_k__BackingField->fields.data;
        if ( !this )
          goto LABEL_66;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleData__getServantData(
                                                                         (BattleData_o *)this,
                                                                         v20->m_Items[v22 + 1],
                                                                         0LL);
        if ( this )
        {
          v24 = this;
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__isLogicDeadAndNoRevive(
                                                                           (BattleServantData_o *)this,
                                                                           0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v25 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v25,
              (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__getIndividualities(
                                                                             (BattleServantData_o *)v24,
                                                                             0LL,
                                                                             1,
                                                                             0,
                                                                             0LL);
            if ( !v25 )
              goto LABEL_66;
            System_Collections_Generic_List_int___AddRange(
              v25,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v24[32].fields._logic_k__BackingField;
            if ( !this )
              goto LABEL_66;
            BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffIndividualities(
                                                                                   (BattleBuffData_o *)this,
                                                                                   Param < 1,
                                                                                   0,
                                                                                   v13 & 1,
                                                                                   0,
                                                                                   0LL,
                                                                                   0LL);
            System_Collections_Generic_List_int___AddRange(
              v25,
              BuffIndividualities,
              (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                             v25,
                                                                             (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v19 )
              goto LABEL_66;
            v27 = this;
            System_Collections_Generic_List_int___AddRange(
              v19,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v18 )
            {
              if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0LL) )
              {
                v28 = originalTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCount(
                                                                                 (System_Int32_array *)v27,
                                                                                 v28,
                                                                                 0LL);
              }
              else
              {
                v29 = overwriteTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCountMultiIndividuality(
                                                                                 (System_Int32_array *)v27,
                                                                                 v29,
                                                                                 0LL);
              }
              count += (int)this;
            }
          }
        }
        LODWORD(v21) = v20->max_length;
        if ( (__int64)++v22 >= (int)v21 )
          goto LABEL_33;
      }
LABEL_67:
      sub_1C2209C(this, baseVals);
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
      return Individuality__IsMatchAboveBelowEqual(count, v31, v30, v32, 0LL);
    }
  }
  if ( !v14 || !v15 )
LABEL_66:
    sub_1C22094(this, baseVals);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1C21EE0(
                                                                   int___TypeInfo,
                                                                   (unsigned int)(*(_DWORD *)(v15 + 24)
                                                                                + *(_DWORD *)(v14 + 24)));
  if ( !TargetUniqueIdArray )
  {
    v34 = *(_QWORD *)(v14 + 24);
    v33 = (System_Int32_array *)this;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
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
        v39 = 0LL;
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
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_58:
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0LL) )
  {
    v41 = originalTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedIndividualities(v33, v41, 0LL);
  }
  else
  {
    v42 = overwriteTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedMultiIndividuality(v33, v42, 0LL);
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


BattleLogicFunctionProcess_FunctionTargetCheck_o *__fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_4BDF287 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
    byte_4BDF287 = 1;
  }
  v4 = (Il2CppObject *)sub_1C22084(BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
  System_Object___ctor(v4, 0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v4;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__TryGetTargetUniqueIdArray(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        System_Int32_array **targetIdArray,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w20
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleData_o *data; // x22
  int32_t actorId; // w23
  int32_t targetId; // w24
  int32_t PTTargetId; // w0
  System_Int32_array *TargetIds; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  *targetIdArray = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)targetIdArray,
    0LL,
    (int64_t)actionData,
    (int32_t)targetIdArray,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !baseVals )
    goto LABEL_7;
  v12 = DataVals__GetFuncCheckTargetIndividualityTargetType(baseVals, 0LL);
  v14 = v12;
  if ( (v12 & 0x80000000) == 0 )
  {
    logic_k__BackingField = this->fields._logic_k__BackingField;
    if ( logic_k__BackingField && actionData )
    {
      data = logic_k__BackingField->fields.data;
      actorId = actionData->fields.actorId;
      targetId = actionData->fields.targetId;
      PTTargetId = BattleActionData__getPTTargetId(actionData, 0LL);
      TargetIds = Target__getTargetIds(data, actorId, targetId, PTTargetId, v14, 0LL, 0LL);
      *targetIdArray = TargetIds;
      sub_1C21DDC((PartyOrganizationUtility_o *)targetIdArray, (int64_t)TargetIds, v21, v22, v23, v24, v25, v26);
      return v14 >= 0;
    }
LABEL_7:
    sub_1C22094(v12, v13);
  }
  return v14 >= 0;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCommonCondition(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v6; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x26
  int32_t targetId_k__BackingField; // w8
  DataVals_o *dataVals_k__BackingField; // x20
  int funcType; // w9
  FunctionEntity_o *funcEnt; // x24
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x23
  int32_t funcIndex; // w25
  char v18; // w0
  const MethodInfo *v19; // x5
  bool result; // w0
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8
  struct BattleLogicFunction_o *v23; // x8
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  System_Enum_o v27; // [xsp+0h] [xbp-70h] BYREF
  int v28; // [xsp+10h] [xbp-60h]
  int32_t uniqueId; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4BDF286 & 1) == 0 )
  {
    sub_1C21E38(&FuncList_TYPE_TypeInfo);
    sub_1C21E38(&StringLiteral_133/*"  => targetId : "*/);
    sub_1C21E38(&StringLiteral_132/*"  <= no Target"*/);
    sub_1C21E38(&StringLiteral_264/*" funcEnt.funcType : "*/);
    sub_1C21E38(&StringLiteral_131/*"  <= no Individuality"*/);
    sub_1C21E38(&StringLiteral_130/*"  <= is No applyTarget "*/);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1C21E38(&StringLiteral_129/*"  <= is Dead"*/);
    byte_4BDF286 = 1;
  }
  if ( !funcTarget )
    goto LABEL_50;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcTarget->fields.invalidType = 0;
  uniqueId = targetId_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_50;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_50;
  funcType = dataVals_k__BackingField->fields.funcType;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v27.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
  v27.monitor = (void *)-1LL;
  v28 = funcType;
  v12 = System_Enum__ToString(&v27, 0LL);
  System_String__Concat_63115476((System_String_o *)StringLiteral_264/*" funcEnt.funcType : "*/, v12, 0LL);
  v13 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_String__Concat_63115476(
                                                                   (System_String_o *)StringLiteral_133/*"  => targetId : "*/,
                                                                   v13,
                                                                   0LL);
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_50;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_50;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  if ( externalArg->fields._SkillTiming_k__BackingField == 1 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__IsEqualsTo1(
                                                                     dataVals_k__BackingField,
                                                                     158,
                                                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
  }
  if ( !WrapTarget_k__BackingField )
    goto LABEL_50;
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.namespaze)(
          WrapTarget_k__BackingField,
          WrapTarget_k__BackingField->klass[1]._1.byval_arg.data) & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))&WrapTarget_k__BackingField->klass[1]._1.byval_arg.bits)(
                                                                     WrapTarget_k__BackingField,
                                                                     WrapTarget_k__BackingField->klass[1]._1.this_arg.data);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_50;
      if ( FunctionEntity__isTargetEnemy(funcEnt, 0LL) )
        goto LABEL_19;
    }
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass *))&WrapTarget_k__BackingField->klass[1]._1.this_arg.bits)(
                                                                     WrapTarget_k__BackingField,
                                                                     WrapTarget_k__BackingField->klass[1]._1.element_class);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_50;
      if ( FunctionEntity__isTargetPlayer(funcEnt, 0LL) )
        goto LABEL_19;
    }
    if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass *))WrapTarget_k__BackingField->klass[1]._1.castClass)(
            WrapTarget_k__BackingField,
            WrapTarget_k__BackingField->klass[1]._1.declaringType) & 1) != 0 )
    {
LABEL_19:
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__isCheckDead(
                                                                       dataVals_k__BackingField,
                                                                       0LL);
      if ( ((unsigned __int8)this & 1) == 0 && !dataVals_k__BackingField->fields.flgBoost )
      {
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.parent)(
                                                                         WrapTarget_k__BackingField,
                                                                         WrapTarget_k__BackingField->klass[1]._1.generic_class);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.typeMetadataHandle)(
                                                                           WrapTarget_k__BackingField,
                                                                           WrapTarget_k__BackingField->klass[1]._1.interopData);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.klass)(
                                                                             WrapTarget_k__BackingField,
                                                                             WrapTarget_k__BackingField->klass[1]._1.fields);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.events)(
                                                                               WrapTarget_k__BackingField,
                                                                               WrapTarget_k__BackingField->klass[1]._1.properties);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !funcEnt )
                  goto LABEL_50;
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
        v18 = (*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))&WrapTarget_k__BackingField->klass[1]._1.byval_arg.bits)(
                WrapTarget_k__BackingField,
                WrapTarget_k__BackingField->klass[1]._1.this_arg.data);
        BattleActionData__setFuncTargetPlayerType(action, funcIndex, v18 & 1, 0LL);
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__CheckTargetIndividuality(
                                                                         v6,
                                                                         dataVals_k__BackingField,
                                                                         WrapTarget_k__BackingField,
                                                                         funcEnt,
                                                                         action,
                                                                         v19);
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
            goto LABEL_40;
          logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
          if ( !logic_k__BackingField )
            goto LABEL_50;
          data = logic_k__BackingField->fields.data;
          if ( !data )
            goto LABEL_50;
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__CheckFunctionTriggerStar(
                                                                           dataVals_k__BackingField,
                                                                           data->fields.totalCriticalStars,
                                                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_40:
            v23 = v6->fields._logic_k__BackingField;
            if ( v23 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v23->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
                if ( BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
                       (BattleLogicFunctionProcess_FunctionUnitCheck_o *)ServantData,
                       dataVals_k__BackingField,
                       ServantData,
                       v25)
                  && ((*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))&WrapTarget_k__BackingField->klass[1]._2.naturalAligment)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass[1].vtable._0_Equals.methodPtr) & 1) != 0
                  && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass[1].vtable._0_Equals.method)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass[1].vtable._1_Finalize.methodPtr) & 1) != 0 )
                {
                  return 1;
                }
                BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v26);
                return 0;
              }
            }
            goto LABEL_50;
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
LABEL_50:
      sub_1C22094(this, action);
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
    sub_1C22094(this, action);
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
    sub_1C22094(this, action);
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
    sub_1C22094(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._logic_k__BackingField = logic;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)logic, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__set_logic(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._logic_k__BackingField = value;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v9 = this;
  if ( (byte_4BDF26D & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_1C21E38(&BattleBuffData_ChangeBgmData_TypeInfo);
    byte_4BDF26D = 1;
  }
  if ( !buffData
    || (buffData->fields.delAfterProcType = 3,
        (this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)v9->fields.targetSvt) == 0LL)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL),
        (targetSvt = v9->fields.targetSvt) == 0LL)
    || (funcUnit_k__BackingField = v9->fields._funcUnit_k__BackingField) == 0LL )
  {
    sub_1C22094(this, actBuffData);
  }
  uniqueId = targetSvt->fields.uniqueId;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v14 = (BattleBuffData_ChangeBgmData_o *)sub_1C22084(BattleBuffData_ChangeBgmData_TypeInfo);
  BattleBuffData_ChangeBgmData___ctor_43952300(v14, uniqueId, buffData, dataVals_k__BackingField, 0LL);
  buffData->fields.changeBgmData = v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&buffData->fields.changeBgmData, (int64_t)v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall BattleLogicFunctionProcess_ChangeBgmCheck__AfterAddBuffProc(
        BattleLogicFunctionProcess_ChangeBgmCheck_o *this,
        BattleActionData_o *mainAction,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleActionData_o *v7; // x20
  BattleLogicFunctionProcess_ChangeBgmCheck_o *v8; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  BattleBuffData_ChangeBgmData_o *changeBgmData; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  __int64 v14; // x20
  BattleActionEffect_ChangeBgmBuff_o *v15; // x20

  v7 = mainAction;
  v8 = this;
  if ( (byte_4BDF26E & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_1C21E38(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    byte_4BDF26E = 1;
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
  mainAction = (BattleActionData_o *)logic_k__BackingField->fields.data;
  changeBgmData = buffData->fields.changeBgmData;
  if ( !procArg_k__BackingField->fields._IsTreasureDvc_k__BackingField )
    goto LABEL_20;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_17;
  if ( externalArg->fields.isPassive )
  {
LABEL_20:
    if ( mainAction )
    {
      if ( changeBgmData )
      {
        v14 = *(_QWORD *)&mainAction->fields.npPer;
        this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)BattleBuffData_ChangeBgmData__MakeBgmGenerator(
                                                                buffData->fields.changeBgmData,
                                                                (BattleData_o *)mainAction,
                                                                0LL);
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64, BattleLogicFunctionProcess_ChangeBgmCheck_o *, __int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 408LL))(
            v14,
            this,
            2LL,
            0LL,
            *(_QWORD *)(*(_QWORD *)v14 + 416LL));
          v15 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1C22084(BattleActionEffect_ChangeBgmBuff_TypeInfo);
          BattleActionEffect_ChangeBgmBuff___ctor(v15, 0LL);
          if ( actBuffData )
          {
            BattleActionData_BuffData__SetActionEffectProc(actBuffData, (BattleActionEffect_Base_o *)v15, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1C22094(this, mainAction);
  }
  if ( !v7 )
    goto LABEL_17;
  BattleActionData__SetTreasureDvcAfterChangeBgm(v7, changeBgmData, 0LL);
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateProcess___ctor(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
    0LL);
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__CheckCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v6; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w23
  DataVals_o *dataVals_k__BackingField; // x22
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x24
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x26
  FunctionEntity_o *funcEnt; // x25
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v13; // x27
  struct System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x8
  BuffEntity_o *v15; // x25
  int logic_k__BackingField; // w9
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_Int32_array *vals; // x23
  System_Int32_array *ParamArray; // x0
  BattleLogicFunction_o *v21; // x23
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v22; // x29
  bool isDisabledBuff; // w28
  int32_t v24; // w23
  BattleData_o *data; // x0
  BattleData_o *v26; // x0
  int v27; // w28
  bool result; // w0
  int v29; // w23
  float v30; // s0
  int32_t v31; // w0
  float v32; // s0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x23
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  int32_t Param; // w27
  __int64 v39; // x27
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  _BOOL8 v42; // x0
  const MethodInfo *v43; // x4
  int32_t v44; // w8
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int32_t v51; // w0
  System_Int32_array *v52; // x22
  int32_t v53; // w24
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v54; // x23
  struct System_String_o *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  int value; // [xsp+8h] [xbp-98h]
  int32_t targetId; // [xsp+Ch] [xbp-94h]
  System_Enum_o v66; // [xsp+10h] [xbp-90h] BYREF
  int v67; // [xsp+20h] [xbp-80h]
  MethodInfo methoda; // [xsp+2Ch] [xbp-74h] BYREF

  v6 = this;
  if ( (byte_4BDF28A & 1) == 0 )
  {
    sub_1C21E38(&Individuality_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&BuffList_TYPE_TypeInfo);
    sub_1C21E38(&StringLiteral_12504/*"STATUS_UP_BUFF"*/);
    sub_1C21E38(&StringLiteral_21149/*"is same Group "*/);
    sub_1C21E38(&StringLiteral_21148/*"is rate over "*/);
    sub_1C21E38(&StringLiteral_2931/*"BATTLE_GUARD_FUNCTION"*/);
    sub_1C21E38(&StringLiteral_21150/*"is same Limit "*/);
    sub_1C21E38(&StringLiteral_18241/*"check--Group( "*/);
    sub_1C21E38(&StringLiteral_233/*" buff : "*/);
    sub_1C21E38(&StringLiteral_229/*" avoid buff "*/);
    sub_1C21E38(&StringLiteral_177/*" < "*/);
    sub_1C21E38(&StringLiteral_18242/*"check--Rate( "*/);
    sub_1C21E38(&StringLiteral_18240/*"check-- SameBuffLimit"*/);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C21E38(&StringLiteral_18847/*"defRate"*/);
    byte_4BDF28A = 1;
  }
  memset(&methoda, 0, 20);
  if ( !funcTarget )
    goto LABEL_74;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_74;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
                                                                 (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                                                                 0LL);
  if ( !action )
    goto LABEL_74;
  if ( !this )
    goto LABEL_74;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleData__getServantData(
                                                                 (BattleData_o *)this,
                                                                 action->fields.actorId,
                                                                 0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_74;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v13 = this;
  ((void (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))funcTarget->klass->vtable._16_InitPrevCheckCondition.method)(
    funcTarget,
    action,
    WrapTarget_k__BackingField,
    funcTarget->klass->vtable._17_GetAttachTargetArray.methodPtr);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetCardIndex(dataVals_k__BackingField, 0LL);
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetCardIndividuality(
                                                                   dataVals_k__BackingField,
                                                                   0LL);
    if ( ((unsigned int)this & 0x80000000) != 0 )
      goto LABEL_12;
  }
  CardIdsIndexList_k__BackingField = funcTarget->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField )
    goto LABEL_74;
  if ( CardIdsIndexList_k__BackingField->fields._size > 0 )
  {
LABEL_12:
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
    if ( !this )
      goto LABEL_74;
    targetId = targetId_k__BackingField;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                   (BattleLogicFunction_o *)this,
                                                                   funcEnt,
                                                                   0LL);
    if ( !this )
      goto LABEL_74;
    v15 = (BuffEntity_o *)this;
    logic_k__BackingField = (int)this->fields._logic_k__BackingField;
    v66.klass = (System_Enum_c *)BuffList_TYPE_TypeInfo;
    v66.monitor = (void *)-1LL;
    v67 = logic_k__BackingField;
    v17 = System_Enum__ToString(&v66, 0LL);
    v18 = System_String__Concat_63115476((System_String_o *)StringLiteral_233/*" buff : "*/, v17, 0LL);
    BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
      (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
      v18,
      0LL);
    vals = v15->fields.vals;
    ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 112, 0LL);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)CommonFunction__JoinIndiv(vals, ParamArray, 0LL);
    if ( !procArg_k__BackingField )
      goto LABEL_74;
    v21 = v6->fields._logic_k__BackingField;
    v22 = this;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction_ProcListInArgs__get_IsPassive(
                                                                   procArg_k__BackingField,
                                                                   0LL);
    if ( !v21 )
      goto LABEL_74;
    isDisabledBuff = BattleLogicFunction__isDisabledBuff(v21, (unsigned __int8)this & 1, dataVals_k__BackingField, 0LL);
    if ( isDisabledBuff )
    {
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__IsForciblyAddState(
                                                                     dataVals_k__BackingField,
                                                                     0LL);
      v24 = targetId;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_27;
      if ( !WrapTarget_k__BackingField )
        goto LABEL_74;
      if ( ((*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.field_count)(
              WrapTarget_k__BackingField,
              v22,
              v13,
              *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.interfaces_count) & 1) == 0 )
        goto LABEL_27;
    }
    else
    {
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
      v24 = targetId;
      if ( !this )
        goto LABEL_74;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__isFailDependentLastResult(
                                                                     (BattleLogicFunction_o *)this,
                                                                     procArg_k__BackingField,
                                                                     targetId,
                                                                     dataVals_k__BackingField,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_35;
      if ( !WrapTarget_k__BackingField )
        goto LABEL_74;
      if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, Il2CppRGCTXData *))WrapTarget_k__BackingField->klass[1].static_fields)(
              WrapTarget_k__BackingField,
              v22,
              v13,
              WrapTarget_k__BackingField->klass[1].rgctx_data) & 1) == 0 )
      {
LABEL_27:
        data = BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
                 (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                 0LL);
        if ( BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
               procArg_k__BackingField,
               v24,
               dataVals_k__BackingField,
               data,
               0LL) )
        {
          v26 = BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
                  (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                  0LL);
          if ( BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
                 procArg_k__BackingField,
                 v24,
                 dataVals_k__BackingField,
                 v26,
                 0LL) )
          {
            value = DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
            if ( (value & 0x80000000) == 0 )
              goto LABEL_32;
            if ( BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
                   procArg_k__BackingField,
                   v24,
                   dataVals_k__BackingField->fields.funcIndex,
                   0LL) )
            {
              value = BattleUtility__Abs_44373092(value, 0LL);
LABEL_32:
              *(Il2CppMethodPointer *)((char *)&methoda.virtualMethodPointer + 4) = 0LL;
              this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleRandom__getNext(1000, 0LL);
              LODWORD(methoda.virtualMethodPointer) = (_DWORD)this;
              if ( isDisabledBuff )
              {
                HIDWORD(methoda.methodPointer) = 1000;
                if ( !DataVals__isParam(dataVals_k__BackingField, 113, 0LL) )
                {
                  v27 = value;
                  HIDWORD(methoda.methodPointer) = value;
                  goto LABEL_44;
                }
              }
              else
              {
                if ( !WrapTarget_k__BackingField )
                  goto LABEL_74;
                v29 = (int)this;
                v30 = ((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, char *, void *))WrapTarget_k__BackingField->klass[1]._2.typeHierarchy)(
                        WrapTarget_k__BackingField,
                        v22,
                        v13,
                        (char *)&methoda.virtualMethodPointer + 4,
                        WrapTarget_k__BackingField->klass[1]._2.unity_user_data);
                v31 = BattleUtility__FloorToInt((float)(v30 * 1000.0) + (float)v29, 0LL);
                HIDWORD(methoda.methodPointer) = 1000;
                LODWORD(methoda.virtualMethodPointer) = v31;
              }
              if ( v13 )
              {
                this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__isParam(
                                                                               dataVals_k__BackingField,
                                                                               113,
                                                                               0LL);
                if ( !WrapTarget_k__BackingField )
                  goto LABEL_74;
                v27 = value;
                v32 = (float)((*(float (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, char *, _QWORD, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.thread_static_fields_offset)(
                                WrapTarget_k__BackingField,
                                v22,
                                v13,
                                (char *)&methoda.virtualMethodPointer + 4,
                                (unsigned __int8)this & 1,
                                *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.token)
                            * 1000.0)
                    + (float)value;
              }
              else
              {
                v27 = value;
                v32 = (float)value;
              }
              HIDWORD(methoda.methodPointer) = BattleUtility__FloorToInt(v32, 0LL);
LABEL_44:
              *(float *)&methoda.methodPointer = (float)DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
              v33 = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
              v34 = System_String__Concat_63115476((System_String_o *)StringLiteral_18847/*"defRate"*/, v33, 0LL);
              BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
                (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                v34,
                0LL);
              v35 = System_Int32__ToString((int32_t)&methoda.virtualMethodPointer, 0LL);
              v36 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
              v37 = System_String__Concat_63128740(
                      (System_String_o *)StringLiteral_18242/*"check--Rate( "*/,
                      v35,
                      (System_String_o *)StringLiteral_177/*" < "*/,
                      v36,
                      0LL);
              BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
                (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                v37,
                0LL);
              if ( DataVals__isSameBuffLimit(dataVals_k__BackingField, 0LL) )
              {
                BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
                  (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                  (System_String_o *)StringLiteral_18240/*"check-- SameBuffLimit"*/,
                  0LL);
                Param = DataVals__GetParam(dataVals_k__BackingField, 40, 0, 0LL);
                this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetSameBuffLimitTargetIndividuality(
                                                                               dataVals_k__BackingField,
                                                                               0LL);
                if ( !WrapTarget_k__BackingField )
                  goto LABEL_74;
                if ( (*(int (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.initializationExceptionGCHandle)(
                       WrapTarget_k__BackingField,
                       this,
                       1LL,
                       *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.cctor_finished) >= Param )
                {
                  BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
                    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                    (System_String_o *)StringLiteral_21150/*"is same Limit "*/,
                    0LL);
                  result = 0;
                  funcTarget->fields.invalidType = 1;
                  return result;
                }
              }
              v39 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._13_GetConvertBuffEntity.method)(
                      funcTarget,
                      (unsigned int)action->fields.actorId,
                      funcTarget->klass->vtable._14_CheckConvertBuffData.methodPtr);
              v40 = System_Int32__ToString((int)v15 + 72, 0LL);
              v41 = System_String__Concat_63115476((System_String_o *)StringLiteral_18241/*"check--Group( "*/, v40, 0LL);
              BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
                (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                v41,
                0LL);
              if ( !v39 )
              {
                v42 = BuffEntity__isCheckGroup(v15, 0LL);
                if ( v42
                  && BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
                       (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v42,
                       funcTarget,
                       v15,
                       WrapTarget_k__BackingField,
                       v43) )
                {
                  BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
                    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                    (System_String_o *)StringLiteral_21149/*"is same Group "*/,
                    0LL);
                  goto LABEL_51;
                }
              }
              if ( (v27 & 0x80000000) != 0
                && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
                      procArg_k__BackingField,
                      targetId,
                      dataVals_k__BackingField->fields.funcIndex,
                      0LL) )
              {
                HIDWORD(methoda.methodPointer) = -1000;
              }
              if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BuffEntity_o *, void *))funcTarget->klass->vtable._18_CheckBuffCondtion.method)(
                      funcTarget,
                      action,
                      v15,
                      funcTarget->klass[1]._1.image) & 1) != 0 )
              {
                if ( SLODWORD(methoda.virtualMethodPointer) < SHIDWORD(methoda.methodPointer) )
                {
                  if ( !v39
                    || (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._14_CheckConvertBuffData.method)(
                          funcTarget,
                          v39,
                          funcTarget->klass->vtable._15_GetFixBuffEntity.methodPtr) & 1) != 0 )
                  {
                    return 1;
                  }
                  result = 0;
                  v44 = 3;
                  goto LABEL_52;
                }
                funcTarget->fields.invalidText = 0LL;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&funcTarget->fields.invalidText,
                  0LL,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49,
                  v50);
                v51 = ConstantMaster__getValue((System_String_o *)StringLiteral_12504/*"STATUS_UP_BUFF"*/, 0LL);
                if ( SLODWORD(methoda.virtualMethodPointer) < 1000 )
                  goto LABEL_72;
                v52 = v15->fields.vals;
                v53 = v51;
                this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C21EE0(int___TypeInfo, 1LL);
                if ( this )
                {
                  v54 = this;
                  if ( !LODWORD(this[1].klass) )
                    sub_1C2209C(this, action);
                  LODWORD(this[1].monitor) = v53;
                  if ( !Individuality_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
                  if ( !Individuality__CheckIndividualities(v52, (System_Int32_array *)v54, 0LL) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_2931/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
                    funcTarget->fields.invalidText = v55;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&funcTarget->fields.invalidText,
                      (int64_t)v55,
                      v56,
                      v57,
                      v58,
                      v59,
                      v60,
                      v61);
                  }
LABEL_72:
                  v62 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
                  v63 = System_String__Concat_63115476((System_String_o *)StringLiteral_21148/*"is rate over "*/, v62, 0LL);
                  BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
                    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                    v63,
                    0LL);
                  result = 0;
                  v44 = 2;
                  goto LABEL_52;
                }
LABEL_74:
                sub_1C22094(this, action);
              }
              return 0;
            }
          }
        }
LABEL_35:
        BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
          (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
          dataVals_k__BackingField,
          0LL);
        return 0;
      }
      BattleLogicFunctionProcess_BaseFunctionTypeProcess__DebugLog(
        (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
        (System_String_o *)StringLiteral_229/*" avoid buff "*/,
        0LL);
    }
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      0LL);
    return 0;
  }
LABEL_51:
  result = 0;
  v44 = 1;
LABEL_52:
  funcTarget->fields.invalidType = v44;
  return result;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
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

  if ( (byte_4BDF28B & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4BDF28B = 1;
  }
  if ( !funcTarget )
    goto LABEL_16;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcTarget->fields._AttachTargetList_k__BackingField;
  if ( !this )
    goto LABEL_16;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_16;
  klass = this[1].klass;
  v9 = this;
  if ( (int)klass >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)klass )
        sub_1C2209C(this, funcTarget);
      if ( !wrapTarget )
        break;
      v11 = *((_DWORD *)&v9[1].monitor + v10);
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const char *))wrapTarget->klass[1]._1.gc_desc)(
                                                                     wrapTarget,
                                                                     wrapTarget->klass[1]._1.name);
      if ( !buffEnt || !this )
        break;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleBuffData__checkBuffGroup(
                                                                     (BattleBuffData_o *)this,
                                                                     buffEnt->fields.buffGroup,
                                                                     v11,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(funcTarget, v11, 0LL);
      LODWORD(klass) = v9[1].klass;
      if ( (__int64)++v10 >= (int)klass )
        return !BattleLogicFunctionProcess_CommonAddStateTargetCheck__get_ExistAttachTarget(funcTarget, 0LL);
    }
LABEL_16:
    sub_1C22094(this, funcTarget);
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
  struct DataVals_o *dataVals_k__BackingField; // x8
  int logic_k__BackingField_high; // w8
  BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *v8; // x19

  v5 = this;
  if ( (byte_4BDF28C & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo);
    sub_1C21E38(&BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo);
    sub_1C21E38(&BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo);
    sub_1C21E38(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo);
    sub_1C21E38(&BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo);
    sub_1C21E38(&BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo);
    sub_1C21E38(&BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo);
    sub_1C21E38(&BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1C21E38(&BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo);
    byte_4BDF28C = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v5->fields._logic_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                       (BattleLogicFunction_o *)this,
                                                                       dataVals_k__BackingField->fields.funcEnt,
                                                                       0LL)) == 0LL )
  {
    sub_1C22094(this, *(_QWORD *)&targetId);
  }
  logic_k__BackingField_high = HIDWORD(this->fields._logic_k__BackingField);
  if ( logic_k__BackingField_high <= 161 )
  {
    switch ( logic_k__BackingField_high )
    {
      case 107:
        v8 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C22084(BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo);
        BattleLogicFunctionProcess_OverwriteBattleClassCheck___ctor(v8, 0LL);
        return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v8;
      case 154:
        v8 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C22084(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo);
        BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___ctor(
          (BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_o *)v8,
          0LL);
        return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v8;
      case 161:
        v8 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C22084(BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo);
        BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck___ctor(
          (BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_o *)v8,
          0LL);
        return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v8;
    }
LABEL_20:
    v8 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C22084(BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo);
    BattleLogicFunctionProcess_ServantAddStateTargetCheck___ctor(
      (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v8,
      0LL);
    return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v8;
  }
  if ( logic_k__BackingField_high <= 10000 )
  {
    if ( logic_k__BackingField_high == 176 )
    {
      v8 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C22084(BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo);
      BattleLogicFunctionProcess_SubFieldIndividualityCheck___ctor(
        (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)v8,
        0LL);
      return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v8;
    }
    if ( logic_k__BackingField_high == 199 )
    {
      v8 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C22084(BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo);
      BattleLogicFunctionProcess_ChangeBgmCheck___ctor((BattleLogicFunctionProcess_ChangeBgmCheck_o *)v8, 0LL);
      return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v8;
    }
    goto LABEL_20;
  }
  if ( logic_k__BackingField_high == 10001 )
  {
    v8 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C22084(BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo);
    BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck___ctor(
      (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)v8,
      0LL);
    return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v8;
  }
  if ( logic_k__BackingField_high == 10002 )
  {
    v8 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C22084(BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo);
    BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck___ctor(
      (BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_o *)v8,
      0LL);
    return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v8;
  }
  if ( logic_k__BackingField_high != 10003 )
    goto LABEL_20;
  v8 = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C22084(BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo);
  BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck___ctor(
    (BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *)v8,
    0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v8;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__checkCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v8; // x2

  if ( (byte_4BDF289 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo);
    byte_4BDF289 = 1;
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Int32_array *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BDF267 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4BDF267 = 1;
  }
  CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField
    || (CardIdsIndexList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       CardIdsIndexList_k__BackingField,
                                                                                       (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        !buff)
    || (buff->fields.servantCardIdsIndexArray = (struct System_Int32_array *)CardIdsIndexList_k__BackingField,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&buff->fields.servantCardIdsIndexArray,
          (int64_t)CardIdsIndexList_k__BackingField,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (CardIdsIndexList_k__BackingField = this->fields._AttachTargetList_k__BackingField) == 0LL) )
  {
    sub_1C22094(CardIdsIndexList_k__BackingField, buff);
  }
  v12 = System_Collections_Generic_List_int___ToArray(
          CardIdsIndexList_k__BackingField,
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  buff->fields.attachTargets = v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&buff->fields.attachTargets, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  __int64 v9; // x20
  System_Int32_array *result; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x24
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int32_t v29; // w1
  System_Action_int__o *v30; // x21

  if ( (byte_4BDF265 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_int___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__);
    sub_1C21E38(&BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
    byte_4BDF265 = 1;
  }
  v9 = sub_1C22084(BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_17;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v9 + 16) = v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)v18, v19, v20, v21, v22, v23, v24);
  if ( userCommandCodeId >= 1 )
  {
    if ( !wrapTarget )
      goto LABEL_17;
    v25 = *(System_Collections_Generic_List_int__o **)(v9 + 16);
    result = (System_Int32_array *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, _QWORD))&wrapTarget->klass[1]._2.element_size)(
                                     wrapTarget,
                                     userCommandCodeId,
                                     *(_QWORD *)&wrapTarget->klass[1]._2.static_fields_size);
    if ( !v25 )
      goto LABEL_17;
    items = v25->fields._items;
    v27 = Method_System_Collections_Generic_List_int__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_17;
    size = v25->fields._size;
    v29 = (_DWORD)result + 101;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v25,
        v29,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v25->fields._size = size + 1;
      items->m_Items[size + 1] = v29;
    }
  }
  v30 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v30,
    (Il2CppObject *)v9,
    Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)cardIdsIndexArray,
    (System_Action_T__o *)v30,
    (const MethodInfo_2F9C448 *)Method_BasicHelper_ForEach_int___);
  result = *(System_Int32_array **)(v9 + 16);
  if ( !result )
    goto LABEL_17;
  if ( (int)result->max_length > 0 )
    return System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)result,
             (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !result )
LABEL_17:
    sub_1C22094(result, v11);
  if ( !result->max_length )
    sub_1C2209C(result, v11);
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
  System_Collections_Generic_IEnumerable_T__o *v7; // x22
  System_Collections_Generic_List_int__o *v8; // x23
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **p_CardIdsIndexList_k__BackingField; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t userCommandCodeId; // x21
  System_Int32_array *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Collections_Generic_List_int__o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  v6 = this;
  if ( (byte_4BDF264 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDF264 = 1;
  }
  if ( !wrapTarget
    || (v7 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, _QWORD, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass[1]._2.genericContainerHandle)(
                                                              wrapTarget,
                                                              *(_QWORD *)&wrapTarget->klass[1]._2.instance_size,
                                                              wrapTarget,
                                                              method),
        v8 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_56826212(
          v8,
          v7,
          (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624),
        v6->fields._CardIdsIndexList_k__BackingField = v8,
        p_CardIdsIndexList_k__BackingField = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **)&v6->fields._CardIdsIndexList_k__BackingField,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v6->fields._CardIdsIndexList_k__BackingField,
          (int64_t)v8,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !action)
    || (this = *p_CardIdsIndexList_k__BackingField) == 0LL )
  {
    sub_1C22094(this, action);
  }
  userCommandCodeId = action->fields.userCommandCodeId;
  v17 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)this,
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, System_Int32_array *, Il2CppMethodPointer))v6->klass->vtable._17_GetAttachTargetArray.method)(
                                                         v6,
                                                         wrapTarget,
                                                         userCommandCodeId,
                                                         v17,
                                                         v6->klass->vtable._18_CheckBuffCondtion.methodPtr);
  v19 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56826212(
    v19,
    v18,
    (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
  v6->fields._AttachTargetList_k__BackingField = v19;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v6->fields._AttachTargetList_k__BackingField,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t attachTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0

  if ( (byte_4BDF266 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Remove__);
    byte_4BDF266 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField
    || (System_Collections_Generic_List_int___Remove(
          AttachTargetList_k__BackingField,
          attachTarget,
          (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__),
        (AttachTargetList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField) == 0LL) )
  {
    sub_1C22094(AttachTargetList_k__BackingField, *(_QWORD *)&attachTarget);
  }
  System_Collections_Generic_List_int___Remove(
    AttachTargetList_k__BackingField,
    attachTarget - 101,
    (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__);
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

  if ( (byte_4BDF263 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4BDF263 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  return AttachTargetList_k__BackingField && AttachTargetList_k__BackingField->fields._size > 0;
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__set_AttachTargetList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AttachTargetList_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._AttachTargetList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__set_CardIdsIndexList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CardIdsIndexList_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._CardIdsIndexList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4BDF268 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    byte_4BDF268 = 1;
  }
  if ( !v4->fields.__4__this
    || (this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)v4->fields.targetList) == 0LL
    || (targetList = this->fields.targetList,
        v6 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(this->fields.__4__this),
        !targetList) )
  {
    sub_1C22094(this, *(_QWORD *)&index);
  }
  _4__this_low = SLODWORD(this->fields.__4__this);
  v8 = index + 101;
  if ( (unsigned int)_4__this_low >= targetList->fields._size )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      v8,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
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
  BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
    0LL);
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
    sub_1C22094(this, 0LL);
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

  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0LL
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL
    || !action )
  {
    sub_1C22094(this, action);
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
           0LL);
}


void __fastcall BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(
        BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
    0LL);
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
  BattleActionData_o *v5; // x24
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v6; // x25
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  int32_t targetId_k__BackingField; // w27
  DataVals_o *dataVals_k__BackingField; // x20
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x26
  BattleServantData_o *ServantData; // x21
  FunctionEntity_o *funcEnt; // x23
  BattleServantData_o *v13; // x22
  char v14; // w0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_String_o **p_invalidText; // x19
  System_Int32_array *vals; // x23
  float BuffTOLERANCESUBSTATEMagnification; // s0
  bool isDisplayLastFuncInvalid; // [xsp+1Ch] [xbp-54h] BYREF

  v5 = action;
  v6 = this;
  if ( (byte_4BDF28D & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1C21E38(&StringLiteral_2931/*"BATTLE_GUARD_FUNCTION"*/);
    byte_4BDF28D = 1;
  }
  if ( !funcTarget )
    goto LABEL_47;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_47;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
                                                                     (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                                                                     0LL);
  if ( !v5 )
    goto LABEL_47;
  if ( !this )
    goto LABEL_47;
  ServantData = BattleData__getServantData((BattleData_o *)this, v5->fields.actorId, 0LL);
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
                                                                     (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v6,
                                                                     0LL);
  if ( !this )
    goto LABEL_47;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     targetId_k__BackingField,
                                                                     0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_47;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  isDisplayLastFuncInvalid = 0;
  v13 = (BattleServantData_o *)this;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v6->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_47;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleLogicFunction__checkFuncAction(
                                                                     (BattleLogicFunction_o *)this,
                                                                     procArg_k__BackingField,
                                                                     v5->fields.actorId,
                                                                     targetId_k__BackingField,
                                                                     0LL,
                                                                     funcEnt,
                                                                     dataVals_k__BackingField,
                                                                     v5->fields.treasureDvcId > 0,
                                                                     &isDisplayLastFuncInvalid,
                                                                     0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( isDisplayLastFuncInvalid )
    {
      BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, 0LL);
      goto LABEL_16;
    }
    if ( funcEnt )
    {
      this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(7, funcEnt->fields.funcType, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(
                                                                           8,
                                                                           funcEnt->fields.funcType,
                                                                           0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(
                                                                             19,
                                                                             funcEnt->fields.funcType,
                                                                             0LL);
          if ( ((unsigned __int8)this & 1) != 0
            || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(
                                                                                   20,
                                                                                   funcEnt->fields.funcType,
                                                                                   0LL),
                ((unsigned __int8)this & 1) != 0) )
          {
            if ( !v13 )
              goto LABEL_47;
            if ( !v13->fields.isEnemy )
              goto LABEL_16;
            funcTarget->fields.invalidType = 2;
            if ( !FuncList__Check(20, funcEnt->fields.funcType, 0LL)
              || BattleServantData__getBuffResistDelayNPTurn(v13, ServantData, 0LL) <= 0.0 )
            {
              goto LABEL_16;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2931/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
            funcTarget->fields.invalidText = (struct System_String_o *)action;
            p_invalidText = &funcTarget->fields.invalidText;
          }
          else
          {
            this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(
                                                                               13,
                                                                               funcEnt->fields.funcType,
                                                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_47;
              if ( BattleServantData__checkAvoidInstantDeath(v13, ServantData, 0LL) )
              {
                BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, 0LL);
                goto LABEL_16;
              }
            }
            this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)FuncList__Check(
                                                                               2,
                                                                               funcEnt->fields.funcType,
                                                                               0LL);
            action = 0LL;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              vals = funcEnt->fields.vals;
              if ( ServantData
                || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)DataVals__isParam(
                                                                                       dataVals_k__BackingField,
                                                                                       75,
                                                                                       0LL),
                    action = 0LL,
                    ((unsigned __int8)this & 1) == 0) )
              {
                if ( !v13 )
                  goto LABEL_47;
                BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                       v13,
                                                       vals,
                                                       ServantData,
                                                       0LL);
                action = 0LL;
                if ( BuffTOLERANCESUBSTATEMagnification > 0.0 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2931/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
                }
              }
            }
            funcTarget->fields.invalidText = (struct System_String_o *)action;
            p_invalidText = &funcTarget->fields.invalidText;
            *((_DWORD *)p_invalidText - 2) = 2;
          }
          sub_1C21DDC((PartyOrganizationUtility_o *)p_invalidText, (int64_t)action, v16, v17, v18, v19, v20, v21);
          goto LABEL_16;
        }
      }
      if ( v13 )
      {
        if ( BattleServantData__checkPlayer(v13, 0LL) )
        {
          v14 = 0;
          funcTarget->fields.invalidType = 2;
          return v14 & 1;
        }
        goto LABEL_16;
      }
    }
LABEL_47:
    sub_1C22094(this, action);
  }
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v6->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_47;
  if ( BattleLogicFunction__checkNoActionCondition(
         (BattleLogicFunction_o *)this,
         targetId_k__BackingField,
         funcEnt,
         0LL) )
  {
LABEL_16:
    v14 = 0;
    return v14 & 1;
  }
  v14 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, DataVals_o *, BattleLogicFunction_ProcListInArgs_o *, void *))v6->klass->vtable._9_CheckConditionPartial.method)(
          v6,
          v5,
          funcTarget,
          dataVals_k__BackingField,
          procArg_k__BackingField,
          v6->klass[1]._1.image);
  return v14 & 1;
}


void __fastcall BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(
        BattleLogicFunctionProcess_DependFunctionUnitCheck_o *this,
        BattleLogicFunction_o *logic,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  BattleLogicFunctionProcess_FunctionUnitCheck___ctor(
    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
    logic,
    procArg,
    (const MethodInfo *)dataVal);
  this->fields._dataVals_k__BackingField = dataVal;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._dataVals_k__BackingField,
    (int64_t)dataVal,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x22
  System_Func_object__object__o *v10; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v18; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v19; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isPassive; // w21

  v8 = this;
  if ( (byte_4BDF274 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C21E38(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__);
    sub_1C21E38(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_4BDF274 = 1;
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
      sub_1C22094(this, actBuffData);
    }
    if ( SLODWORD(funcUnit_k__BackingField->fields._procArg_k__BackingField) >= 1 )
    {
      v10 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
      System_Func_object__object____ctor(
        v10,
        (Il2CppObject *)v8,
        Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__,
        0LL);
      v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)funcUnit_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)v10,
                                                                   (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
      this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                        v11,
                                                                        (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
      if ( !actBuffData )
        goto LABEL_19;
      actBuffData->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&actBuffData->fields.removeBuffList,
        (int64_t)this,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
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
  __int64 v6; // x20
  BattleFieldEnvironmentData_o *BuffData; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x1
  bool v16; // w21
  System_Int32_array *GrantBuffTypeArray; // x22
  System_Func_int__bool__o *v18; // x23

  if ( (byte_4BDF273 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int____77629760);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__);
    sub_1C21E38(&BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
    byte_4BDF273 = 1;
  }
  v6 = sub_1C22084(BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = buffEnt;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)buffEnt, v9, v10, v11, v12, v13, v14);
  if ( this->fields.grantType != 1 )
    return 1;
  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v15);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1C22094(BuffData, v8);
  }
  v16 = 1;
  GrantBuffTypeArray = BattleBuffData__GetGrantBuffTypeArray((BattleBuffData_o *)BuffData, 1, 1, 0LL);
  v18 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
    0LL);
  if ( BasicHelper__Any_int__49916656(
         GrantBuffTypeArray,
         (System_Func_T__bool__o *)v18,
         (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760) )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return v16;
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

  if ( (byte_4BDF272 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDF272 = 1;
  }
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C22094(0LL, v6);
  if ( !result->max_length )
    sub_1C2209C(result, v6);
  result->m_Items[1] = 10001;
  return result;
}


int32_t __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetGrantType(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  if ( !baseVals )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(dataVals_k__BackingField, v7);
  this->fields.grantType = DataVals__GetParam(dataVals_k__BackingField, 110, 0, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData_o *v2; // x19

  if ( (byte_4BDF275 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_FieldBuffData_TypeInfo);
    byte_4BDF275 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_1C22084(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0LL);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4BDF276 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_4BDF276 = 1;
  }
  v2 = (Il2CppObject *)sub_1C22084(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
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
    sub_1C22094(BuffData, v5);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)BuffData, buff, 0LL);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField) == 0LL
    || (data = logic_k__BackingField->fields.data) == 0LL )
  {
    sub_1C22094(this, method);
  }
  return data->fields._FieldEnvData_k__BackingField;
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
    sub_1C22094(this, type);
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
    sub_1C22094(this, method);
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
  const MethodInfo *v2; // x2

  if ( !this->fields._funcUnit_k__BackingField )
    sub_1C22094(this, method);
  return BattleLogicFunctionProcess_FunctionUnitCheck__GetFuncNoEffectText(
           this->fields._funcUnit_k__BackingField,
           this->fields.invalidText,
           v2);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__GetFunctionDisplayData(
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
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL
    || (procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField) == 0LL
    || (externalArg = procArg_k__BackingField->fields.externalArg) == 0LL
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField) == 0LL )
  {
    sub_1C22094(this, method);
  }
  return BattleLogicFunction__getFunctionObject(
           logic_k__BackingField,
           dataVals_k__BackingField->fields.funcEnt,
           this->fields._targetId_k__BackingField,
           dataVals_k__BackingField->fields.funcIndex,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleLogicFunctionProcess_FunctionTargetCheck_c *klass; // x8
  struct BattleLogicFunctionProcess_WrapTargetData_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x0

  this->fields._targetId_k__BackingField = targetId;
  this->fields._funcUnit_k__BackingField = funcUnit;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)funcUnit,
    (int64_t)funcUnit,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  klass = this->klass;
  this->fields._result_k__BackingField = 0;
  v10 = (struct BattleLogicFunctionProcess_WrapTargetData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))klass->vtable._11_MakeWrapTarget.method)(
                                                                this,
                                                                klass->vtable._12_MakeAddActionBuffData.methodPtr);
  this->fields._WrapTarget_k__BackingField = v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._WrapTarget_k__BackingField,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  WrapTarget_k__BackingField = this->fields._WrapTarget_k__BackingField;
  if ( !WrapTarget_k__BackingField )
    sub_1C22094(0LL, v17);
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
    sub_1C22094(this, mainAction);
  }
  return result_k__BackingField;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v2; // x19

  if ( (byte_4BDF261 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_BuffData_TypeInfo);
    byte_4BDF261 = 1;
  }
  v2 = (BattleActionData_BuffData_o *)sub_1C22084(BattleActionData_BuffData_TypeInfo);
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
    sub_1C22094(this, actBuffData);
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

  if ( (byte_4BDF262 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
    byte_4BDF262 = 1;
  }
  v2 = (Il2CppObject *)sub_1C22084(BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
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
    sub_1C22094(this, method);
  }
  DataVals__SetInvalidCauseByAnyBuff(dataVals_k__BackingField, this->fields._targetId_k__BackingField, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  intptr_t v5; // w21
  System_Type_o *TypeFromHandle; // x0
  __int64 v7; // x1
  System_Type_o *v8; // x21
  int32_t DisplayLastFuncInvalidType; // w20
  __int64 v10; // x2
  __int64 v11; // x3
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v12; // x0
  BattleActionData_o *v13; // x1
  const MethodInfo *v14; // x2
  System_RuntimeTypeHandle_o v15; // 0:w0.4

  if ( (byte_4BDF260 & 1) == 0 )
  {
    sub_1C21E38(&System_Enum_TypeInfo);
    sub_1C21E38(&BattleLogicFunctionProcess_FuncInvalidType_var);
    sub_1C21E38(&BattleLogicFunctionProcess_FuncInvalidType_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    byte_4BDF260 = 1;
  }
  v5 = (int)BattleLogicFunctionProcess_FuncInvalidType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v15.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0LL);
  if ( !baseVals )
    goto LABEL_11;
  v8 = TypeFromHandle;
  DisplayLastFuncInvalidType = DataVals__GetDisplayLastFuncInvalidType(baseVals, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  TypeFromHandle = (System_Type_o *)System_Enum__ToObject_64145316(v8, DisplayLastFuncInvalidType, 0LL);
  if ( !TypeFromHandle )
LABEL_11:
    sub_1C22094(TypeFromHandle, v7);
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
    sub_1C22354(TypeFromHandle);
    BattleLogicFunctionProcess_FunctionTargetCheck__IsExecutable(v12, v13, v14);
  }
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
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
    sub_1C22094(this, funcProc);
  }
}


BattleActionData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x0

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    sub_1C22094(0LL, this);
  return BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(funcUnit_k__BackingField, this, v2);
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
  const MethodInfo *v3; // x3

  if ( !linkedToSelf )
    sub_1C22094(this, 0LL);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkFuncTargetResult(
         linkedToSelf,
         this->fields._targetId_k__BackingField,
         0,
         v3) )
  {
    this->fields._result_k__BackingField = 0;
  }
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__set_WrapTarget(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_WrapTargetData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._WrapTarget_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._WrapTarget_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__set_funcUnit(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._funcUnit_k__BackingField = value;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  System_Collections_Generic_List_object__o *v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4BDF27C & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
    byte_4BDF27C = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToOtherList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.linkedToOtherList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToSelfList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.linkedToSelfList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._logic_k__BackingField = logic;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)logic, v21, v22, v23, v24, v25, v26);
  this->fields._procArg_k__BackingField = procArg;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._procArg_k__BackingField,
    (int64_t)procArg,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields._result_k__BackingField = 0;
  v33 = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)sub_1C21EE0(
                                                                         BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                                                         0LL);
  this->fields._funcTargetArray_k__BackingField = v33;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._funcTargetArray_k__BackingField,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
    sub_1C22094(this, defText);
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
    sub_1C22094(this, method);
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

  if ( (byte_4BDF285 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDF285 = 1;
  }
  if ( !baseVals )
    sub_1C22094(this, baseVals);
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v11, 0LL);
  return DataVals__IsMatchFriendShipCondition(baseVals, v10, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v6; // x19
  DataVals_o *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_ICollection_o *TargetTypeIndexArray; // x20
  System_Func_int__bool__o *v23; // x21

  if ( (byte_4BDF283 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_All_int___);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__);
    sub_1C21E38(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0_TypeInfo);
    byte_4BDF283 = 1;
  }
  v6 = sub_1C22084(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6
    || (*(_QWORD *)(v6 + 16) = baseVals,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)baseVals, v9, v10, v11, v12, v13, v14),
        *(_QWORD *)(v6 + 24) = targetSvtData,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)targetSvtData, v15, v16, v17, v18, v19, v20),
        (v7 = *(DataVals_o **)(v6 + 16)) == 0LL) )
  {
    sub_1C22094(v7, v8);
  }
  TargetTypeIndexArray = (System_Collections_ICollection_o *)DataVals__GetTargetTypeIndexArray(v7, 178, 0LL);
  if ( BasicHelper__IsNullOrEmpty(TargetTypeIndexArray, 0LL) )
    return 1;
  if ( !*(_QWORD *)(v6 + 24) )
    return 0;
  v23 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v23,
    (Il2CppObject *)v6,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__,
    0LL);
  return System_Linq_Enumerable__All_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)TargetTypeIndexArray,
           (System_Func_TSource__bool__o *)v23,
           (const MethodInfo_2FB981C *)Method_System_Linq_Enumerable_All_int___);
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
    sub_1C22094(this, baseVal);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, baseVals);
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
  if ( (byte_4BDF284 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4BDF284 = 1;
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
                 (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
LABEL_11:
    sub_1C22094(this, baseVals);
  }
  return 0;
}


AddBgmArgument_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__MakeAddBgmArgument(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x19
  AddBgmArgument_o *v4; // x20

  if ( (byte_4BDF27B & 1) == 0 )
  {
    sub_1C21E38(&AddBgmArgument_TypeInfo);
    byte_4BDF27B = 1;
  }
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  v4 = (AddBgmArgument_o *)sub_1C22084(AddBgmArgument_TypeInfo);
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
    sub_1C22094(this, method);
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


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkFuncTargetResult(
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

  if ( (byte_4BDF27F & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1C21E38(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_1C21E38(&Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0__checkFuncTargetResult_b__0__);
    sub_1C21E38(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0_TypeInfo);
    byte_4BDF27F = 1;
  }
  v7 = sub_1C22084(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = targetId;
  *(_BYTE *)(v7 + 20) = result;
  funcTargetArray_k__BackingField = (System_Object_array *)this->fields._funcTargetArray_k__BackingField;
  v11 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0__checkFuncTargetResult_b__0__,
    0LL);
  return BasicHelper__Any_object__49917468(
           funcTargetArray_k__BackingField,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
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

  if ( (byte_4BDF282 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_4BDF282 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  linkedToSelfList = (System_Collections_Generic_List_object__o *)this->fields.linkedToSelfList;
  if ( !linkedToSelfList )
    sub_1C22094(0LL, action);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    linkedToSelfList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    do
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
      if ( !v6 )
      {
        v12 = 6;
        goto LABEL_13;
      }
      current = v15.fields._current;
      if ( !v15.fields._current )
        sub_1C22094(v6, v7);
      klass = v15.fields._current[2].klass;
      if ( !klass )
        sub_1C22094(0LL, v7);
    }
    while ( DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed((DataVals_o *)klass, 0LL) );
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
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
  return v12 != 5;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkSelfCondtion(
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
  struct BattleLogicFunction_ProcListInArgs_o *v38; // x8
  int32_t Param; // w23
  const MethodInfo *v40; // x1
  bool v41; // zf
  Target_BattleTargetArgs_o *args; // x23
  struct BattleLogicFunction_o *v43; // x8
  int32_t targetId; // w26
  int32_t PTTargetId; // w0
  int32_t targetType; // w27
  int32_t taskActorType; // w28
  bool checkRevengeId; // w29
  int32_t v49; // w24
  System_Int32_array *ValsList; // x25
  bool IsIncludeIgnoreIndividuality; // w0
  struct BattleLogicFunction_ProcListInArgs_o *v52; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v53; // x2
  struct BattleLogicFunction_ProcListInArgs_o *v54; // x8
  struct BattleLogicFunction_FunctionArgument_o *v55; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v56; // x22
  struct BattleLogicFunction_o *v57; // x8
  struct BattleData_o *v58; // x8
  const MethodInfo *v59; // x2
  int v60; // w8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v61; // x21
  int v62; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v63; // x22
  const MethodInfo *v64; // x3
  int32_t actorId; // [xsp+24h] [xbp-6Ch]
  BattleData_o *bdata; // [xsp+28h] [xbp-68h]

  v4 = this;
  if ( (byte_4BDF281 & 1) == 0 )
  {
    sub_1C21E38(&Target_BattleTargetArgs_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C21E38(&Individuality_TypeInfo);
    byte_4BDF281 = 1;
  }
  dataVals_k__BackingField = v4->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_71;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_71;
  v7 = FuncList__Check(0, funcEnt->fields.funcType, 0LL);
  this = 0LL;
  if ( v7 )
    return (char)this;
  logic_k__BackingField = v4->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_71;
  if ( !action )
    goto LABEL_71;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_71;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0LL);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FuncList__Check(26, funcEnt->fields.funcType, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    action->fields.isSuccessTargetSelection = 1;
  v10 = v4->fields._logic_k__BackingField;
  if ( !v10 )
    goto LABEL_71;
  data = v10->fields.data;
  if ( !data )
    goto LABEL_71;
  endbattleFlg = data->fields.endbattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsEndBattle(dataVals_k__BackingField, 0LL);
  v13 = endbattleFlg;
  if ( ((unsigned __int8)this & 1) != 0
    || (v13 &= (unsigned __int8)this ^ 1,
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    v14 = 1;
  }
  else
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                               dataVals_k__BackingField,
                                                               0LL);
    v14 = (unsigned __int8)this & 1;
  }
  data->fields.endbattleFlg = v14 | v13;
  v15 = v4->fields._logic_k__BackingField;
  if ( !v15 )
    goto LABEL_71;
  v16 = v15->fields.data;
  if ( !v16 )
    goto LABEL_71;
  loseBattleFlg = v16->fields.loseBattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL);
  v16->fields.loseBattleFlg = loseBattleFlg | (unsigned __int8)this & 1;
  v18 = v4->fields._logic_k__BackingField;
  if ( !v18 )
    goto LABEL_71;
  v19 = v18->fields.data;
  if ( !v19 )
    goto LABEL_71;
  winBattleNotRelatedSurvivalStatus = v19->fields.winBattleNotRelatedSurvivalStatus;
  v19->fields.winBattleNotRelatedSurvivalStatus = winBattleNotRelatedSurvivalStatus | DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                                                        dataVals_k__BackingField,
                                                                                        0LL);
  v4->fields.questFuncFlg = 1;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FunctionEntity__getQuestTargetValues(funcEnt, 0LL);
  if ( !this )
    goto LABEL_71;
  v22 = this;
  if ( this->fields._procArg_k__BackingField )
  {
    v23 = v4->fields._logic_k__BackingField;
    if ( !v23 )
      goto LABEL_71;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v23->fields.data;
    if ( !this )
      goto LABEL_71;
    QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    if ( !Individuality__CheckIndividualities(QuestIndividualities, (System_Int32_array *)v22, 0LL) )
      v4->fields.questFuncFlg = 0;
  }
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__IsAvoidExecuteSelfFunc(
                                                             v4,
                                                             ServantData,
                                                             v21);
  procArg_k__BackingField = v4->fields._procArg_k__BackingField;
  v4->fields._IsAvoidFuncExec_k__BackingField = (unsigned __int8)this & 1;
  if ( !procArg_k__BackingField )
    goto LABEL_71;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_71;
  if ( externalArg->fields.isPassive )
  {
    v27 = v4->fields._logic_k__BackingField;
    if ( !v27 )
      goto LABEL_71;
    v28 = v27->fields.data;
    if ( !v28 )
      goto LABEL_71;
    FuncEventExceptedHash_k__BackingField = v28->fields._FuncEventExceptedHash_k__BackingField;
    if ( FuncEventExceptedHash_k__BackingField
      && FuncEventExceptedHash_k__BackingField->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           FuncEventExceptedHash_k__BackingField,
           funcEnt->fields.id,
           (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      goto LABEL_57;
    }
  }
  if ( !BattleActionData__IsSelectedAddTargetIndex(action, dataVals_k__BackingField, 0LL) )
    goto LABEL_57;
  v31 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
          v4,
          dataVals_k__BackingField,
          action->fields.actorId,
          v30);
  if ( !v31 )
    goto LABEL_57;
  v33 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyOverChargeStageRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v31,
          dataVals_k__BackingField,
          ServantData,
          v32);
  if ( !v33 )
    goto LABEL_57;
  if ( !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v33,
          dataVals_k__BackingField,
          ServantData,
          v34) )
    goto LABEL_57;
  v36 = BattleLogicFunctionProcess_FunctionUnitCheck__IsStartingPositionCondition(
          v4,
          dataVals_k__BackingField,
          ServantData,
          v35);
  if ( !v36
    || !BattleLogicFunctionProcess_FunctionUnitCheck__IsFriendShipCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v36,
          dataVals_k__BackingField,
          ServantData,
          v37) )
  {
    goto LABEL_57;
  }
  if ( DataVals__checkActSet(dataVals_k__BackingField, 0LL) )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__getActSet(dataVals_k__BackingField, 0LL);
    v38 = v4->fields._procArg_k__BackingField;
    if ( !v38 )
      goto LABEL_71;
    if ( (_DWORD)this != v38->fields.actSetId )
    {
LABEL_57:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  if ( !DataVals__isParam(dataVals_k__BackingField, 130, 0LL)
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 130, 0, 0LL),
        v41 = Param == BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(v4, v40),
        LOBYTE(this) = 0,
        v41) )
  {
    if ( DataVals__IsSatisfyCommonReleaseId(dataVals_k__BackingField, 0LL) )
    {
      args = (Target_BattleTargetArgs_o *)sub_1C22084(Target_BattleTargetArgs_TypeInfo);
      Target_BattleTargetArgs___ctor(args, dataVals_k__BackingField, 0LL);
      v43 = v4->fields._logic_k__BackingField;
      if ( v43 )
      {
        bdata = v43->fields.data;
        targetId = action->fields.targetId;
        actorId = action->fields.actorId;
        PTTargetId = BattleActionData__getPTTargetId(action, 0LL);
        targetType = funcEnt->fields.targetType;
        taskActorType = action->fields.taskActorType;
        checkRevengeId = action->fields.checkRevengeId;
        v49 = PTTargetId;
        ValsList = DataVals__GetValsList(dataVals_k__BackingField, 84, 0LL);
        IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(dataVals_k__BackingField, 0LL);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Target__getTargetIds_38957408(
                                                                   bdata,
                                                                   actorId,
                                                                   targetId,
                                                                   v49,
                                                                   targetType,
                                                                   taskActorType,
                                                                   checkRevengeId,
                                                                   ValsList,
                                                                   IsIncludeIgnoreIndividuality,
                                                                   args,
                                                                   0LL);
        v52 = v4->fields._procArg_k__BackingField;
        if ( v52 )
        {
          v53 = this;
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v52->fields.externalArg;
          if ( this )
          {
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))this->klass[1]._1.namespaze)(
                                                                       this,
                                                                       (unsigned int)funcEnt->fields.targetType,
                                                                       v53,
                                                                       this->klass[1]._1.byval_arg.data);
            v54 = v4->fields._procArg_k__BackingField;
            if ( v54 )
            {
              v55 = v54->fields.externalArg;
              if ( v55 )
              {
                v56 = this;
                this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v55->fields.checkDuplicate;
                if ( this )
                {
                  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, DataVals_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                                             this,
                                                                             dataVals_k__BackingField,
                                                                             v56,
                                                                             this->klass[1]._1.this_arg.data);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    goto LABEL_57;
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
                        goto LABEL_57;
                      }
                      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
                                                                                 v4,
                                                                                 (System_Int32_array *)v56,
                                                                                 v59);
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
                            sub_1C2209C(this, action);
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
      }
LABEL_71:
      sub_1C22094(this, action);
    }
    goto LABEL_57;
  }
  return (char)this;
}


BattleActionData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x21
  int32_t invalidType; // w8
  BattleActionData_BuffData_o *v6; // x20
  DataVals_o *v7; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v8; // x8
  struct BattleLogicFunction_FunctionArgument_o *v9; // x8
  DataVals_o *dataVals_k__BackingField; // x22
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isCommandSideEffect; // w25
  BattleLogicFunction_o *logic_k__BackingField; // x21
  int32_t targetId_k__BackingField; // w24
  int32_t funcIndex; // w23
  struct DataVals_o *v18; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *v20; // x9

  if ( !funcTarget )
    goto LABEL_21;
  v4 = this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer, const MethodInfo *))funcTarget->klass->vtable._8_MakeActionBuffData.method)(
                                                             funcTarget,
                                                             funcTarget->klass->vtable._9_AddBuff.methodPtr,
                                                             method);
  invalidType = funcTarget->fields.invalidType;
  v6 = (BattleActionData_BuffData_o *)this;
  switch ( invalidType )
  {
    case 1:
      dataVals_k__BackingField = v4->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        goto LABEL_21;
      procArg_k__BackingField = v4->fields._procArg_k__BackingField;
      if ( !procArg_k__BackingField )
        goto LABEL_21;
      externalArg = procArg_k__BackingField->fields.externalArg;
      if ( !externalArg )
        goto LABEL_21;
      isCommandSideEffect = externalArg->fields.isCommandSideEffect;
      logic_k__BackingField = v4->fields._logic_k__BackingField;
      targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
      funcIndex = dataVals_k__BackingField->fields.funcIndex;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._5_GetFixNoEffectText.method)(
                                                                 funcTarget,
                                                                 funcTarget->klass->vtable._6_IsExecutable.methodPtr);
      if ( !logic_k__BackingField )
        goto LABEL_21;
      return BattleLogicFunction__getNoEffectObject(
               logic_k__BackingField,
               targetId_k__BackingField,
               funcIndex,
               dataVals_k__BackingField,
               isCommandSideEffect,
               (System_String_o *)this,
               v6,
               0LL);
    case 3:
      v18 = v4->fields._dataVals_k__BackingField;
      if ( !v18 )
        goto LABEL_21;
      funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
      if ( !funcUnit_k__BackingField )
        goto LABEL_21;
      v20 = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
      if ( !v20 )
        goto LABEL_21;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._logic_k__BackingField;
      if ( !this )
        goto LABEL_21;
      return BattleLogicFunction__getGrayPopupActionData(
               (BattleLogicFunction_o *)this,
               funcTarget->fields._targetId_k__BackingField,
               v18->fields.funcIndex,
               v20->fields.funcEnt,
               0LL);
    case 2:
      v7 = v4->fields._dataVals_k__BackingField;
      if ( v7 )
      {
        v8 = v4->fields._procArg_k__BackingField;
        if ( v8 )
        {
          v9 = v8->fields.externalArg;
          if ( v9 )
          {
            this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._logic_k__BackingField;
            if ( this )
              return BattleLogicFunction__getMissObject(
                       (BattleLogicFunction_o *)this,
                       funcTarget->fields._targetId_k__BackingField,
                       v7->fields.funcIndex,
                       v7,
                       v9->fields.isCommandSideEffect,
                       funcTarget->fields.invalidText,
                       v6,
                       0LL);
          }
        }
      }
LABEL_21:
      sub_1C22094(this, funcTarget);
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
    sub_1C22094(0LL, method);
  return DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
}


BattleData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_1C22094(this, method);
  return logic_k__BackingField->fields.data;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C22094(this, method);
  return dataVals_k__BackingField->fields.funcIndex;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_funcIndividuality; // x19
  System_Int32_array *funcIndividuality; // x20
  struct DataVals_o *dataVals_k__BackingField; // x8
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_funcIndividuality = (PartyOrganizationUtility_o *)&this->fields.funcIndividuality;
  funcIndividuality = this->fields.funcIndividuality;
  if ( !funcIndividuality )
  {
    dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
    if ( !dataVals_k__BackingField
      || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)dataVals_k__BackingField->fields.funcEnt) == 0LL )
    {
      sub_1C22094(this, method);
    }
    funcIndividuality = FunctionEntity__GetFuncIndividuality((FunctionEntity_o *)this, 0LL);
    p_funcIndividuality->klass = (PartyOrganizationUtility_c *)funcIndividuality;
    sub_1C21DDC(p_funcIndividuality, (int64_t)funcIndividuality, v5, v6, v7, v8, v9, v10);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(0LL, method);
  return DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddLinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C22094(0LL, method);
  return DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAvoidFuncExec(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAvoidFuncExec_k__BackingField;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_LinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1C22094(0LL, method);
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
  int64_t v6; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array **p_funcTargetArray_k__BackingField; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1
  BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x23
  il2cpp_array_size_t v16; // w24
  __int64 v17; // x25
  int32_t *v18; // x26
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v25; // x24
  Il2CppClass **v26; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v27; // x8
  __int64 v29; // x0

  v4 = this;
  if ( (byte_4BDF27E & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C21E38(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    byte_4BDF27E = 1;
  }
  if ( !targetlist )
LABEL_19:
    sub_1C22094(this, targetlist);
  max_length = targetlist->max_length;
  v6 = sub_1C21EE0(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, (unsigned int)max_length);
  v4->fields._funcTargetArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)v6;
  p_funcTargetArray_k__BackingField = &v4->fields._funcTargetArray_k__BackingField;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v4->fields._funcTargetArray_k__BackingField,
    v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  funcTargetArray_k__BackingField = v4->fields._funcTargetArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v16 = 0;
    do
    {
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                 v4,
                                                                 v14);
      if ( v16 >= targetlist->max_length )
        goto LABEL_18;
      if ( !this )
        goto LABEL_19;
      v17 = (int)v16;
      v18 = &targetlist->m_Items[v16 + 1];
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                                                 this,
                                                                 (unsigned int)*v18,
                                                                 v4,
                                                                 this->klass[1]._1.declaringType);
      if ( !funcTargetArray_k__BackingField )
        goto LABEL_19;
      v25 = this;
      if ( this )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C21F74(
                                                                   this,
                                                                   funcTargetArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v29 = sub_1C220B8(0LL);
          sub_1C21F60(v29, 0LL);
        }
      }
      if ( (unsigned int)v17 >= funcTargetArray_k__BackingField->max_length )
        goto LABEL_18;
      v26 = &funcTargetArray_k__BackingField->obj.klass + v17;
      v26[4] = (Il2CppClass *)v25;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v25, v19, v20, v21, v22, v23, v24);
      v27 = *p_funcTargetArray_k__BackingField;
      if ( !*p_funcTargetArray_k__BackingField )
        goto LABEL_19;
      if ( (unsigned int)v17 >= v27->max_length || (unsigned int)v17 >= targetlist->max_length )
LABEL_18:
        sub_1C2209C(this, targetlist);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v27->m_Items[v17];
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const char *))this->klass[1]._1.gc_desc)(
        this,
        (unsigned int)*v18,
        v4,
        this->klass[1]._1.name);
      funcTargetArray_k__BackingField = v4->fields._funcTargetArray_k__BackingField;
      v16 = v17 + 1;
    }
    while ( max_length != (_DWORD)v17 + 1 );
  }
  return funcTargetArray_k__BackingField;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToOtherResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *linkedToOtherList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF280 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_4BDF280 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  linkedToOtherList = (System_Collections_Generic_List_object__o *)this->fields.linkedToOtherList;
  if ( !linkedToOtherList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    linkedToOtherList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C22094(v4, v5);
    klass = v9.fields._current[2].klass;
    if ( !klass )
      sub_1C22094(0LL, v5);
    if ( !DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed((DataVals_o *)klass, 0LL) )
      BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
        this,
        v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
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
        sub_1C2209C(this, linkedToSelf);
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
    sub_1C22094(this, linkedToSelf);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        int32_t *funcIndex,
        int32_t functionId,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct DataVals_o **p_dataVals_k__BackingField; // x22
  __int64 v12; // x1
  BattleLogicFunction_o *FuncMaster; // x0
  DataVals_o *v14; // x22
  DataVals_o *dataVals_k__BackingField; // x21

  this->fields._dataVals_k__BackingField = dataVals;
  p_dataVals_k__BackingField = &this->fields._dataVals_k__BackingField;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._dataVals_k__BackingField,
    (int64_t)dataVals,
    *(int64_t *)&functionId,
    (int32_t)dataVals,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  FuncMaster = (BattleLogicFunction_o *)*(p_dataVals_k__BackingField - 2);
  if ( !FuncMaster
    || (v14 = *p_dataVals_k__BackingField,
        FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFuncMaster(FuncMaster, 0LL),
        !v14)
    || (DataVals__SetDependDataVals(v14, (FunctionMaster_o *)FuncMaster, funcIndex, 0LL),
        (FuncMaster = this->fields._logic_k__BackingField) == 0LL)
    || (dataVals_k__BackingField = this->fields._dataVals_k__BackingField,
        FuncMaster = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionEntity(FuncMaster, functionId, 0LL),
        !dataVals_k__BackingField) )
  {
    sub_1C22094(FuncMaster, v12);
  }
  DataVals__SetType_40112564(dataVals_k__BackingField, (FunctionEntity_o *)FuncMaster, *funcIndex, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o **v4; // x20
  signed int max_length; // w8
  unsigned int v6; // w24
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v7; // x21
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v9; // x22
  System_Int32_array *AddIndividualty; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  _QWORD *v18; // x9
  __int64 procArg_k__BackingField_low; // x10
  BattleLogicFunction_c **v20; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v21; // x22
  System_Int32_array *LinkageTargetIndividualty; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct BattleLogicFunction_o *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  BattleLogicFunction_c **v32; // x8

  v4 = (BattleLogicFunctionProcess_FunctionUnitCheck_o **)this;
  if ( (byte_4BDF27D & 1) == 0 )
  {
    sub_1C21E38(&Individuality_TypeInfo);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
    byte_4BDF27D = 1;
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
        sub_1C2209C(this, funcUnitArray);
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
                                                                   0LL);
        if ( !v7->fields._dataVals_k__BackingField )
          break;
        v9 = this;
        AddIndividualty = DataVals__GetAddIndividualty(v7->fields._dataVals_k__BackingField, 0LL);
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        if ( Individuality__IsPartialMatchArray((System_Int32_array *)v9, AddIndividualty, 0LL) )
        {
          this = v4[7];
          if ( !this )
            break;
          logic_k__BackingField = this->fields._logic_k__BackingField;
          v18 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !logic_k__BackingField )
            break;
          procArg_k__BackingField_low = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)procArg_k__BackingField_low >= LODWORD(logic_k__BackingField->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v7,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &logic_k__BackingField->klass + procArg_k__BackingField_low;
            LODWORD(this->fields._procArg_k__BackingField) = procArg_k__BackingField_low + 1;
            v20[4] = (BattleLogicFunction_c *)v7;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v7, v11, v12, v13, v14, v15, v16);
          }
        }
        this = v4[4];
        if ( !this )
          break;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetAddIndividualty((DataVals_o *)this, 0LL);
        if ( !v7->fields._dataVals_k__BackingField )
          break;
        v21 = this;
        LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(v7->fields._dataVals_k__BackingField, 0LL);
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__IsPartialMatchArray(
                                                                   (System_Int32_array *)v21,
                                                                   LinkageTargetIndividualty,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v4[8];
          if ( !this )
            break;
          v29 = this->fields._logic_k__BackingField;
          v30 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !v29 )
            break;
          v31 = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)v31 >= LODWORD(v29->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v7,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &v29->klass + v31;
            LODWORD(this->fields._procArg_k__BackingField) = v31 + 1;
            v32[4] = (BattleLogicFunction_c *)v7;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v7, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      max_length = funcUnitArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_32:
    sub_1C22094(this, funcUnitArray);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._dataVals_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._dataVals_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_funcTargetArray(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._funcTargetArray_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._funcTargetArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_logic(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._logic_k__BackingField = value;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_procArg(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_ProcListInArgs_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._procArg_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._procArg_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_result(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._result_k__BackingField = value;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0___checkFuncTargetResult_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields._targetId_k__BackingField == this->fields.targetId
      && this->fields.result == x->fields._result_k__BackingField;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0___IsSatisfyBattlePointPhaseRangeCondition_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0_o *this,
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
    sub_1C22094(targetSvtData, *(_QWORD *)&id);
  }
  return DataVals__IsSatisfyAboveBelowCond(baseVals, 178, (int32_t)targetSvtData, id, 0LL);
}


void __fastcall BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(
        BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
    0LL);
}


bool __fastcall BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(
        BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  BuffList_TYPE_array *v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4BDF28E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_8935/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/);
    byte_4BDF28E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_8935/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/,
                                0LL,
                                0LL);
  if ( !Instance )
    return (char)Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
  {
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                              (System_Collections_IEnumerable_o *)Instance,
                                                              (const MethodInfo_2FBDD78 *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                v6,
                                (const MethodInfo_2FE96D4 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !targetSvtData
    || (v5 = (BuffList_TYPE_array *)Instance, (Instance = (DataManager_o *)targetSvtData->fields.buffData) == 0LL)
    || (Instance = (DataManager_o *)BattleBuffData__getBuffList_43742152(
                                      (BattleBuffData_o *)Instance,
                                      v5,
                                      0LL,
                                      0LL,
                                      0LL)) == 0LL )
  {
LABEL_13:
    sub_1C22094(Instance, v5);
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
  int32_t targetId_k__BackingField; // w21
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v7; // x22
  BattleServantData_o *ServantData; // x23
  int klass; // w24
  const MethodInfo *v10; // x2
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v11; // x0
  const MethodInfo *v12; // x2
  int32_t v13; // w22
  bool HasRefuseBuff; // w0
  const MethodInfo *v16; // x3

  if ( !funcTarget )
    goto LABEL_15;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  v7 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
                                                                      (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
                                                                      0LL);
  if ( !this )
    goto LABEL_15;
  ServantData = BattleData__getServantData((BattleData_o *)this, funcTarget->fields._targetId_k__BackingField, 0LL);
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
                                                                      v7,
                                                                      0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleData__getAliveFieldSvtIdArray(
                                                                      (BattleData_o *)this,
                                                                      targetId_k__BackingField,
                                                                      1,
                                                                      0LL,
                                                                      0,
                                                                      0LL);
  if ( !this )
    goto LABEL_15;
  if ( !ServantData )
    goto LABEL_15;
  klass = (int)this[1].klass;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getBuffList(
                                                                      ServantData,
                                                                      84,
                                                                      0,
                                                                      0LL);
  if ( !this )
    goto LABEL_15;
  if ( this[1].klass )
  {
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, 0LL);
    BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(v11, ServantData, v12);
    goto LABEL_9;
  }
  HasRefuseBuff = BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(this, ServantData, v10);
  if ( klass < 2 || HasRefuseBuff )
  {
LABEL_9:
    this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getDeckIndex(ServantData, 0LL);
    if ( funcTarget->fields._funcUnit_k__BackingField )
    {
      v13 = (int)this;
      this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                                                          funcTarget->fields._funcUnit_k__BackingField,
                                                                          0LL);
      if ( action )
      {
        BattleActionData__AddNewMoveToSubMember(action, v13, targetId_k__BackingField, (int32_t)this, 0, 0LL);
        funcTarget->fields.invalidType = 1;
        return 0;
      }
    }
LABEL_15:
    sub_1C22094(this, action);
  }
  return BattleLogicFunctionProcess_CommonFunctionTypeProcess__checkCondition(
           (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v7,
           action,
           funcTarget,
           v16);
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
    sub_1C22094(this, actBuffData);
  }
  BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_OverwriteBattleClassCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  int32_t *p_OverwriteClassId; // x20
  ConstantStrMaster_o *Master_object; // x0
  __int64 v7; // x1
  bool result; // w0

  if ( (byte_4BDF26F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5574/*"ENABLE_OVERWRITE_CLASS_IDS"*/);
    byte_4BDF26F = 1;
  }
  p_OverwriteClassId = &this->fields.OverwriteClassId;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(
          this,
          &this->fields.OverwriteClassId,
          (const MethodInfo *)buffEnt) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( !ConstantStrMaster__ExistValueArray(
          Master_object,
          (System_String_o *)StringLiteral_5574/*"ENABLE_OVERWRITE_CLASS_IDS"*/,
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
    sub_1C22094(Master_object, v7);
  if ( BattleServantData__GetLogicClassId((BattleServantData_o *)Master_object, 0LL) == *p_OverwriteClassId )
    goto LABEL_10;
  return 1;
}


System_String_o *__fastcall BattleLogicFunctionProcess_OverwriteBattleClassCheck__GetFixNoEffectText(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  BattleServantData_o *targetSvt; // x0
  int32_t LogicClassId; // w0
  int32_t classId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4BDF270 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2972/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_4BDF270 = 1;
  }
  classId = 0;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(this, &classId, v2) )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v4);
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1C22094(0LL, v4);
  LogicClassId = BattleServantData__GetLogicClassId(targetSvt, 0LL);
  if ( LogicClassId != classId )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2972/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(
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
  if ( (byte_4BDF271 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_4BDF271 = 1;
  }
  entity = 0LL;
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
                                                                     0LL);
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
  this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
LABEL_18:
    sub_1C22094(this, classId);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           *classId,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
    sub_1C22094(0LL, actBuffData);
  BattleServantData__addBuff(targetSvt, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__CheckConvertBuffData(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BuffConvertEntity_o *buffConvertEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)p_buffConvertEntity,
    (int64_t)buffConvertEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !buffConvertEntity )
    sub_1C22094(v11, v12);
  ConvertBuffIdFromIndex = BuffConvertEntity__GetConvertBuffIdFromIndex(
                             buffConvertEntity,
                             this->fields.convertBuffIndex,
                             0LL);
  this->fields.convertBuffId = ConvertBuffIdFromIndex;
  BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, ConvertBuffIdFromIndex, 0LL);
  if ( BuffEntity )
  {
    v15 = BuffEntity;
    if ( BuffEntity__isCheckGroup(BuffEntity, 0LL)
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
BuffConvertEntity_o *__fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__GetConvertBuffEntity(
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
  if ( (byte_4BDF269 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BuffConvertMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4BDF269 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  entity = 0LL;
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_40;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_40;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 22, 0LL);
  v6 = 0LL;
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
      return 0LL;
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v7->fields._dataVals_k__BackingField;
    if ( !this )
LABEL_40:
      sub_1C22094(this, *(_QWORD *)&actorId);
    v6 = 0LL;
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
                                                                            (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
        if ( this )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v34,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
          v35 = v34;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v35,
                    (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
          {
            current = (BattleBuffData_BuffData_o *)v35.fields._current;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BuffConvertMaster___);
            if ( !current )
              sub_1C22094(Master_object, v13);
            if ( !Master_object )
              sub_1C22094(0LL, v13);
            v14 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    current->fields.buffId,
                    (const MethodInfo_325BE14 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
            if ( v14 )
            {
              v16 = v4->fields._funcUnit_k__BackingField;
              if ( !v16 )
                sub_1C22094(v14, v15);
              dataVals_k__BackingField = v16->fields._dataVals_k__BackingField;
              if ( !dataVals_k__BackingField )
                sub_1C22094(v14, v15);
              funcEnt = dataVals_k__BackingField->fields.funcEnt;
              if ( !funcEnt )
                sub_1C22094(v14, v15);
              if ( !entity )
                sub_1C22094(0LL, v15);
              IsTargetLimit = BuffConvertEntity__IsTargetLimit(
                                (BuffConvertEntity_o *)entity,
                                funcEnt->fields.targetType,
                                v4->fields._targetId_k__BackingField,
                                actorId,
                                0LL);
              if ( IsTargetLimit )
              {
                v21 = v4->fields._funcUnit_k__BackingField;
                if ( !v21 )
                  sub_1C22094(IsTargetLimit, v20);
                v22 = v21->fields._dataVals_k__BackingField;
                if ( !v22 )
                  sub_1C22094(0LL, v20);
                v23 = v22->fields.funcEnt;
                if ( !v23 )
                  sub_1C22094(v22, v20);
                vals = v23->fields.vals;
                if ( !vals )
                  sub_1C22094(v22, v20);
                if ( !vals->max_length )
                  sub_1C2209C(v22, v20);
                v25 = entity;
                v26 = vals->m_Items[1];
                ParamArray = DataVals__GetParamArray(v22, 112, 0LL);
                if ( !v25 )
                  sub_1C22094(ParamArray, v28);
                if ( BuffConvertEntity__TryGetConvertBuffIndex(
                       (BuffConvertEntity_o *)v25,
                       &v4->fields.convertBuffIndex,
                       v26,
                       ParamArray,
                       0LL) )
                {
                  targetSvt = v4->fields.targetSvt;
                  if ( !targetSvt )
                    sub_1C22094(0LL, v29);
                  BuffData = BattleServantData__get_BuffData(targetSvt, 0LL);
                  if ( !BuffData )
                    sub_1C22094(0LL, v32);
                  if ( BattleBuffData__checkBuffSuccessful(BuffData, current, 1, 0LL) )
                  {
                    v6 = entity;
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &v35,
                      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                    return (BuffConvertEntity_o *)v6;
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v35,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
          return 0LL;
        }
      }
      goto LABEL_40;
    }
  }
  return (BuffConvertEntity_o *)v6;
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
  BattleData_o *data; // x0
  __int64 v8; // x1
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleServantData_o *ServantData; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  BattleLogicFunctionProcess_FunctionTargetCheck__Init(
    (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
    targetId,
    funcUnit,
    method);
  if ( !funcUnit
    || (logic_k__BackingField = funcUnit->fields._logic_k__BackingField) == 0LL
    || (data = logic_k__BackingField->fields.data) == 0LL )
  {
    sub_1C22094(data, v8);
  }
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  this->fields.targetSvt = ServantData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetSvt, (int64_t)ServantData, v11, v12, v13, v14, v15, v16);
}


bool __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
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

  if ( (byte_4BDF26A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4BDF26A = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                 AttachTargetList_k__BackingField,
                                                                                 (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  v8 = *(_QWORD *)&AttachTargetList_k__BackingField->fields._size;
  v9 = AttachTargetList_k__BackingField;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1C2209C(AttachTargetList_k__BackingField, buffEnt);
      if ( !targetSvt )
        break;
      v11 = *((_DWORD *)&v9->fields._syncRoot + v10);
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleServantData__get_BuffData(
                                                                                     targetSvt,
                                                                                     0LL);
      if ( !buffEnt || !AttachTargetList_k__BackingField )
        break;
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleBuffData__checkBuffGroup(
                                                                                     (BattleBuffData_o *)AttachTargetList_k__BackingField,
                                                                                     buffEnt->fields.buffGroup,
                                                                                     v11,
                                                                                     0LL);
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
    sub_1C22094(AttachTargetList_k__BackingField, buffEnt);
  }
LABEL_14:
  if ( (byte_4BDF263 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4BDF263 = 1;
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
  _BYTE *BuffEntity; // x0
  __int64 convertBuffId; // x1
  _BYTE *v9; // x19
  BuffConvertEntity_o *buffConvertEntity; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *dataVals_k__BackingField; // x8
  _BYTE *v13; // x21
  BattleActionData_BuffData_o *GrayActionBuffData; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Int32_array *EffectList; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_String_o *OverwritePopupTextFromIndex; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

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
      BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, convertBuffId, 0LL);
      funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
      if ( funcUnit_k__BackingField )
      {
        dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
        if ( dataVals_k__BackingField )
        {
          v13 = BuffEntity;
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
                                   0LL);
            *((_QWORD *)v9 + 13) = GrayActionBuffData;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)(v9 + 104),
              (int64_t)GrayActionBuffData,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
            *((_DWORD *)v9 + 11) = this->fields.convertBuffId;
            if ( v13 )
            {
              *((_DWORD *)v9 + 16) = *((_DWORD *)v13 + 10);
              BuffEntity = this->fields.buffConvertEntity;
              if ( BuffEntity )
              {
                *((_DWORD *)v9 + 17) = BuffConvertEntity__GetOverwritePopupColorFromIndex(
                                         (BuffConvertEntity_o *)BuffEntity,
                                         this->fields.convertBuffIndex,
                                         *((_DWORD *)v9 + 17),
                                         0LL);
                BuffEntity = this->fields.buffConvertEntity;
                if ( BuffEntity )
                {
                  EffectList = BuffConvertEntity__GetEffectList(
                                 (BuffConvertEntity_o *)BuffEntity,
                                 *((System_Int32_array **)v9 + 9),
                                 0LL);
                  *((_QWORD *)v9 + 9) = EffectList;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)(v9 + 72),
                    (int64_t)EffectList,
                    v22,
                    v23,
                    v24,
                    v25,
                    v26,
                    v27);
                  BuffEntity = this->fields.buffConvertEntity;
                  if ( BuffEntity )
                  {
                    OverwritePopupTextFromIndex = BuffConvertEntity__GetOverwritePopupTextFromIndex(
                                                    (BuffConvertEntity_o *)BuffEntity,
                                                    this->fields.convertBuffIndex,
                                                    *((System_String_o **)v13 + 3),
                                                    0LL);
                    *((_QWORD *)v9 + 7) = OverwritePopupTextFromIndex;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)(v9 + 56),
                      (int64_t)OverwritePopupTextFromIndex,
                      v29,
                      v30,
                      v31,
                      v32,
                      v33,
                      v34);
                    return (BattleActionData_BuffData_o *)v9;
                  }
                }
              }
            }
          }
        }
      }
LABEL_13:
      sub_1C22094(BuffEntity, convertBuffId);
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
  BattleServantData_o *targetSvt; // x0
  BattleSkillInfoData_array *ActiveSkillInfos; // x0
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_c *v7; // x8
  System_Object_array *v8; // x20
  System_Func_object__bool__o *_9__0_0; // x21
  Il2CppObject *v10; // x22
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  bool v18; // w0

  if ( (byte_4BDF26B & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_BattleSkillInfoData___);
    sub_1C21E38(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_1C21E38(&Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__);
    sub_1C21E38(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_4BDF26B = 1;
  }
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1C22094(0LL, action);
  ActiveSkillInfos = BattleServantData__getActiveSkillInfos(targetSvt, 0LL);
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
    _9__0_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__0_0,
      v10,
      Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      0LL);
    static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__0_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = BasicHelper__Any_object__49917468(
          v8,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_BattleSkillInfoData___);
  if ( !v18 )
    this->fields.invalidType = 1;
  return v18;
}


void __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF26C & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_4BDF26C = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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
  __int64 v9; // x8
  BattleServantData_o *v10; // x21
  bool v11; // w23
  unsigned __int64 v12; // x22
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
    sub_1C22094(targetSvt, action);
  }
  v9 = *(_QWORD *)&targetSvt->fields.uniqueId;
  v10 = targetSvt;
  v11 = (int)v9 > 0;
  if ( (int)v9 >= 1 )
  {
    v12 = 0LL;
    p_userSvtId = &targetSvt->fields.userSvtId;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v9 )
LABEL_21:
        sub_1C2209C(targetSvt, action);
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
        targetSvt = (BattleServantData_o *)BattleServantData__isUseSelfSkill(targetSvt, v12, 0LL);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v17; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_8;
  v7 = this;
  this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this
    || (this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)DataVals__GetTargetList(
                                                                            (DataVals_o *)this,
                                                                            0LL),
        !buffData)
    || (buffData->fields.generalParams = (struct System_Int32_array *)this,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&buffData->fields.generalParams,
          (int64_t)this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (this = (BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *)v7->fields.targetSvt) == 0LL)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL),
        (v17 = v7->fields._funcUnit_k__BackingField) == 0LL)
    || (procArg_k__BackingField = v17->fields._procArg_k__BackingField) == 0LL )
  {
LABEL_8:
    sub_1C22094(this, actBuffData);
  }
  procArg_k__BackingField->fields.updateField = 1;
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x5
  struct BattleBuffData_FieldChangeData_o *fieldChangeData; // x8

  v8 = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this;
  if ( (byte_4BDF277 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)sub_1C21E38(&BattleBuffData_FieldChangeData_TypeInfo);
    byte_4BDF277 = 1;
  }
  funcUnit_k__BackingField = v8->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleBuffData_FieldChangeData_o *)sub_1C22084(BattleBuffData_FieldChangeData_TypeInfo);
  BattleBuffData_FieldChangeData___ctor_43951612(v11, dataVals_k__BackingField, 0LL);
  if ( !buffData
    || (buffData->fields.fieldChangeData = v11,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&buffData->fields.fieldChangeData,
          (int64_t)v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        buffData->fields.delAfterProcType = 1,
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(v8, actBuffData, buffData, 0, 0, v18),
        (fieldChangeData = buffData->fields.fieldChangeData) == 0LL) )
  {
LABEL_7:
    sub_1C22094(this, actBuffData);
  }
  fieldChangeData->fields.buffUniqueId = buffData->fields.addOrder;
}


void __fastcall BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
    0LL);
}


BattleLogicFunctionProcess_FunctionTargetCheck_o *__fastcall BattleLogicFunctionProcess_ToFieldCommonFunctionProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *v4; // x19

  if ( (byte_4BDF28F & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
    byte_4BDF28F = 1;
  }
  v4 = (BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *)sub_1C22084(BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
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

  if ( (byte_4BDF278 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_FieldBuffData_TypeInfo);
    byte_4BDF278 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_1C22084(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0LL);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4BDF279 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_4BDF279 = 1;
  }
  v2 = (Il2CppObject *)sub_1C22084(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
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
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v7; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x5
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v17; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  v7 = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this;
  this = (BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this
    || (this = (BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_o *)DataVals__GetTargetList(
                                                                                   (DataVals_o *)this,
                                                                                   0LL),
        !buffData)
    || (buffData->fields.generalParams = (struct System_Int32_array *)this,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&buffData->fields.generalParams,
          (int64_t)this,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(v7, actBuffData, buffData, 0, 0, v16),
        (v17 = v7->fields._funcUnit_k__BackingField) == 0LL)
    || (procArg_k__BackingField = v17->fields._procArg_k__BackingField) == 0LL )
  {
LABEL_7:
    sub_1C22094(this, actBuffData);
  }
  procArg_k__BackingField->fields.updateField = 1;
}


void __fastcall BattleLogicFunctionProcess_TransformServantProcess___ctor(
        BattleLogicFunctionProcess_TransformServantProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
    0LL);
}


bool __fastcall BattleLogicFunctionProcess_TransformServantProcess__CheckConditionPartial(
        BattleLogicFunctionProcess_TransformServantProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        DataVals_o *baseVals,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v9; // x1
  BattleData_o *v10; // x21
  bool result; // w0
  bool IsCancelTransform; // w8

  data = BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_data(
           (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
           0LL);
  if ( !funcTarget )
    goto LABEL_14;
  if ( !data )
    goto LABEL_14;
  data = (BattleData_o *)BattleData__getServantData(data, funcTarget->fields._targetId_k__BackingField, 0LL);
  if ( !data )
    goto LABEL_14;
  v10 = data;
  data = (BattleData_o *)data->fields.playerServantNoblePhantasmUsageData;
  if ( !data )
    goto LABEL_14;
  data = (BattleData_o *)ServantEntity__isInvalidSkillShift((ServantEntity_o *)data, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    result = 0;
    funcTarget->fields.invalidType = 1;
    return result;
  }
  if ( !baseVals )
LABEL_14:
    sub_1C22094(data, v9);
  if ( DataVals__isParam(baseVals, 6, 0LL) && DataVals__GetParam(baseVals, 6, 0, 0LL) != v10->fields.totalTurnCount )
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


void __fastcall BattleLogicFunctionProcess_WrapTargetData__Init(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.funcTarget = funcTarget;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)funcTarget, (int64_t)method, v3, v4, v5, v6, v7);
  ((void (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))this->klass->vtable._5_InitPartial.method)(
    this,
    this->klass[1]._1.image);
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
    sub_1C22094(this, method);
  return funcUnit_k__BackingField->fields._dataVals_k__BackingField;
}


BattleData_o *__fastcall BattleLogicFunctionProcess_WrapTargetData__get_Data(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0LL
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField) == 0LL )
  {
    sub_1C22094(this, method);
  }
  return logic_k__BackingField->fields.data;
}


BattleLogicFunctionProcess_FunctionUnitCheck_o *__fastcall BattleLogicFunctionProcess_WrapTargetData__get_FuncUnit(
        BattleLogicFunctionProcess_WrapTargetData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget )
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(0LL, buffIndiv);
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
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  *text = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)text, 0LL, (int64_t)method, v4, v5, v6, v7, v8);
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
    sub_1C22094(target, isActiveOnly);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  *missText = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)missText,
    0LL,
    (int64_t)opSvt,
    (int32_t)missText,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  return 0.0;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetField__GetBuffTargetCardIndexArray(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDF27A & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BDF27A = 1;
  }
  return (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
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
    sub_1C22094(0LL, method);
  return (System_Int32_array *)((__int64 (__fastcall *)(struct BattleFieldEnvironmentData_o *, _QWORD, Il2CppMethodPointer))target->klass->vtable._4_GetFieldIndividuality.method)(
                                 target,
                                 0LL,
                                 target->klass->vtable._5_AddBackground.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleLogicFunctionProcess_WrapTargetField__GetOptBuffGRANTSTATEMagnification(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        bool upOnly,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  *missText = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)missText,
    0LL,
    (int64_t)opSvt,
    (int32_t)missText,
    (System_String_o *)upOnly,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
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
    sub_1C22094(target, indiv);
  }
  return BattleBuffData__getSameIndivualityBuffSum((BattleBuffData_o *)target, indiv, isActiveOnly, 0, 0, 0LL);
}


void __fastcall BattleLogicFunctionProcess_WrapTargetField__InitPartial(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x1

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data )
    sub_1C22094(0LL, v4);
  FieldEnvData_k__BackingField = Data->fields._FieldEnvData_k__BackingField;
  this->fields.target = FieldEnvData_k__BackingField;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.target,
    (int64_t)FieldEnvData_k__BackingField,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, buffIndiv);
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
    sub_1C22094(0LL, buffIndiv);
  return BattleServantData__CheckDisableForciblyAddStateBuffAvoid(target, buffIndiv, opSvt, 0LL);
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
    sub_1C22094(this, isActiveOnly);
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
    sub_1C22094(0LL, buffIndiv);
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
    sub_1C22094(BaseVals, v6);
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
    sub_1C22094(0LL, userCommandCodeId);
  return BattleServantData__GetCommandCardIndex(target, userCommandCodeId, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetServant__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C22094(0LL, method);
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
    sub_1C22094(this, buffIndiv);
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
    sub_1C22094(0LL, indiv);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || !Data )
    sub_1C22094(Data, v4);
  ServantData = BattleData__getServantData(Data, funcTarget->fields._targetId_k__BackingField, 0LL);
  this->fields.target = ServantData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.target, (int64_t)ServantData, v7, v8, v9, v10, v11, v12);
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
    sub_1C22094(BaseVals, v4);
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
    sub_1C22094(BaseVals, v4);
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
    sub_1C22094(0LL, method);
  return BattleServantData__get_BuffData(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target )
    sub_1C22094(this, method);
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
    sub_1C22094(0LL, method);
  return BattleServantData__checkPlayer(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C22094(0LL, method);
  return BattleServantData__isGuts(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(Data, v4);
  return (*(__int64 (__fastcall **)(BattleData_o *, struct BattleServantData_o *, _QWORD))&Data->klass[1]._2.initializationExceptionGCHandle)(
           Data,
           this->fields.target,
           *(_QWORD *)&Data->klass[1]._2.cctor_finished);
}