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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t Param; // w22
  char v23; // w23
  __int64 v24; // x21
  __int64 v25; // x20
  const MethodInfo *v26; // x4
  bool TargetUniqueIdArray; // w24
  bool v28; // w26
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x25
  System_Int32_array *v33; // x24
  __int64 v34; // x8
  unsigned __int64 v35; // x21
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v37; // x29
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_int__o *v40; // x28
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v42; // x28
  __int64 v43; // x1
  System_Int32_array *v44; // x29
  System_Int32_array_array *v45; // x29
  int32_t v46; // w19
  int32_t v47; // w21
  int32_t v48; // w20
  System_Int32_array *v49; // x19
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_c *klass; // x10
  __int64 v53; // x12
  unsigned int v54; // w11
  __int64 v55; // x9
  __int64 v56; // x12
  __int64 v57; // x1
  System_Int32_array *v58; // x20
  System_Int32_array_array *v59; // x20
  __int64 v61; // [xsp+8h] [xbp-98h]
  bool v62; // [xsp+10h] [xbp-90h]
  int32_t count; // [xsp+18h] [xbp-88h]
  int32_t countEqual; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t countLower[2]; // [xsp+20h] [xbp-80h] BYREF
  System_Int32_array *targetIdArray; // [xsp+28h] [xbp-78h] BYREF
  System_Int32_array_array *overwriteTvals; // [xsp+30h] [xbp-70h] BYREF
  System_Int32_array *originalTvals; // [xsp+38h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_4B18E64 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, baseVals, wrapTarget);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v17, v18);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1BCA7E0(
                                                                     &System_Collections_Generic_List_int__TypeInfo,
                                                                     v19,
                                                                     v20);
    byte_4B18E64 = 1;
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
  Param = DataVals__GetParam(baseVals, 62, 0, 0LL);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__isParam(baseVals, 139, 0LL);
  if ( !wrapTarget )
    goto LABEL_66;
  v23 = (char)this;
  v24 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass **))wrapTarget->klass[1]._1.methods)(
          wrapTarget,
          wrapTarget->klass[1]._1.nestedTypes);
  v25 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, bool, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))wrapTarget->klass[1]._1.implementedInterfaces)(
          wrapTarget,
          Param < 1,
          0LL,
          v23 & 1,
          wrapTarget->klass[1]._1.interfaceOffsets);
  TargetUniqueIdArray = BattleLogicFunctionProcess_BaseFunctionTypeProcess__TryGetTargetUniqueIdArray(
                          v10,
                          baseVals,
                          actionData,
                          &targetIdArray,
                          v26);
  v28 = DataVals__TryGetFuncCheckTargetIndividualityCount(baseVals, &countLower[1], countLower, &countEqual, 0LL);
  v32 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( TargetUniqueIdArray )
  {
    v62 = TargetUniqueIdArray;
    v33 = targetIdArray;
    if ( !targetIdArray )
      goto LABEL_66;
    v34 = *(_QWORD *)&targetIdArray->max_length;
    v61 = v24;
    if ( (int)v34 >= 1 )
    {
      count = 0;
      v35 = 0LL;
      while ( v35 < (unsigned int)v34 )
      {
        logic_k__BackingField = v10->fields._logic_k__BackingField;
        if ( !logic_k__BackingField )
          goto LABEL_66;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)logic_k__BackingField->fields.data;
        if ( !this )
          goto LABEL_66;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleData__getServantData(
                                                                         (BattleData_o *)this,
                                                                         v33->m_Items[v35 + 1],
                                                                         0LL);
        if ( this )
        {
          v37 = this;
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__isLogicDeadAndNoRevive(
                                                                           (BattleServantData_o *)this,
                                                                           0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_int__TypeInfo,
                                                              baseVals,
                                                              v38,
                                                              v39);
            System_Collections_Generic_List_int____ctor(
              v40,
              (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleServantData__getIndividualities(
                                                                             (BattleServantData_o *)v37,
                                                                             0LL,
                                                                             1,
                                                                             0,
                                                                             0LL);
            if ( !v40 )
              goto LABEL_66;
            System_Collections_Generic_List_int___AddRange(
              v40,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v37[33].klass;
            if ( !this )
              goto LABEL_66;
            BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffIndividualities(
                                                                                   (BattleBuffData_o *)this,
                                                                                   Param < 1,
                                                                                   0,
                                                                                   v23 & 1,
                                                                                   0,
                                                                                   0LL,
                                                                                   0LL);
            System_Collections_Generic_List_int___AddRange(
              v40,
              BuffIndividualities,
              (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
            this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                             v40,
                                                                             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
            if ( !v32 )
              goto LABEL_66;
            v42 = this;
            System_Collections_Generic_List_int___AddRange(
              v32,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v28 )
            {
              if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0LL) )
              {
                v44 = originalTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v43);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCount(
                                                                                 (System_Int32_array *)v42,
                                                                                 v44,
                                                                                 0LL);
              }
              else
              {
                v45 = overwriteTvals;
                if ( !Individuality_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v43);
                this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)Individuality__GetMatchedTotalCountMultiIndividuality(
                                                                                 (System_Int32_array *)v42,
                                                                                 v45,
                                                                                 0LL);
              }
              count += (int)this;
            }
          }
        }
        LODWORD(v34) = v33->max_length;
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_33;
      }
LABEL_67:
      sub_1BCAA44(this, baseVals);
    }
    count = 0;
LABEL_33:
    v24 = v61;
    TargetUniqueIdArray = v62;
    if ( v28 )
    {
      v46 = countLower[0];
      v47 = countLower[1];
      v48 = countEqual;
      if ( !Individuality_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, baseVals);
      return Individuality__IsMatchAboveBelowEqual(count, v47, v46, v48, 0LL);
    }
  }
  if ( !v24 || !v25 )
LABEL_66:
    sub_1BCAA3C(this, baseVals);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1BCA888(
                                                                   int___TypeInfo,
                                                                   (unsigned int)(*(_DWORD *)(v25 + 24)
                                                                                + *(_DWORD *)(v24 + 24)));
  if ( !TargetUniqueIdArray )
  {
    v50 = *(_QWORD *)(v24 + 24);
    v49 = (System_Int32_array *)this;
    if ( (int)v50 >= 1 )
    {
      v51 = 0LL;
      while ( v51 < (unsigned int)v50 )
      {
        if ( !this )
          goto LABEL_66;
        if ( v51 >= LODWORD(this[1].klass) )
          break;
        *((_DWORD *)&this[1].monitor + v51) = *(_DWORD *)(v24 + 32 + 4 * v51);
        if ( (__int64)++v51 >= (int)v50 )
          goto LABEL_50;
      }
      goto LABEL_67;
    }
    if ( this )
    {
LABEL_50:
      klass = this[1].klass;
      if ( (int)v50 <= (__int64)(int)klass )
        v53 = (int)klass;
      else
        v53 = (int)v50;
      if ( (int)v50 < (__int64)(int)klass )
      {
        v54 = *(_DWORD *)(v25 + 24);
        v55 = 0LL;
        v56 = v53 - (int)v50;
        while ( (unsigned int)v55 < v54 && (int)v50 + (int)v55 < (unsigned int)klass )
        {
          *((_DWORD *)&this[1].monitor + (int)v50 + v55) = *(_DWORD *)(v25 + 4LL * (int)v55 + 32);
          if ( v56 == ++v55 )
            goto LABEL_58;
        }
        goto LABEL_67;
      }
      goto LABEL_58;
    }
    goto LABEL_66;
  }
  if ( !v32 )
    goto LABEL_66;
  v49 = System_Collections_Generic_List_int___ToArray(
          v32,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_58:
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)overwriteTvals, 0LL) )
  {
    v58 = originalTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v57);
    return Individuality__CheckSignedIndividualities(v49, v58, 0LL);
  }
  else
  {
    v59 = overwriteTvals;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v57);
    return Individuality__CheckSignedMultiIndividuality(v49, v59, 0LL);
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
  Il2CppObject *v4; // x19

  if ( (byte_4B18E63 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo, *(_QWORD *)&targetId, funcUnitCheck);
    byte_4B18E63 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(
                         BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo,
                         *(_QWORD *)&targetId,
                         funcUnitCheck,
                         method);
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
  sub_1BCA784(
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
      sub_1BCA784((PartyOrganizationUtility_o *)targetIdArray, (int64_t)TargetIds, v21, v22, v23, v24, v25, v26);
      return v14 >= 0;
    }
LABEL_7:
    sub_1BCAA3C(v12, v13);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x26
  int32_t targetId_k__BackingField; // w8
  DataVals_o *dataVals_k__BackingField; // x20
  int funcType; // w9
  FunctionEntity_o *funcEnt; // x24
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x23
  int32_t funcIndex; // w25
  char v30; // w0
  const MethodInfo *v31; // x5
  bool result; // w0
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8
  struct BattleLogicFunction_o *v35; // x8
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  System_Enum_o v39; // [xsp+0h] [xbp-70h] BYREF
  int v40; // [xsp+10h] [xbp-60h]
  int32_t uniqueId; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4B18E62 & 1) == 0 )
  {
    sub_1BCA7E0(&FuncList_TYPE_TypeInfo, action, funcTarget);
    sub_1BCA7E0(&StringLiteral_132/*"  => targetId : "*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_131/*"  <= no Target"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_262/*" funcEnt.funcType : "*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_130/*"  <= no Individuality"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_129/*"  <= is No applyTarget "*/, v15, v16);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_1BCA7E0(&StringLiteral_128/*"  <= is Dead"*/, v17, v18);
    byte_4B18E62 = 1;
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
  v39.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
  v39.monitor = (void *)-1LL;
  v40 = funcType;
  v24 = System_Enum__ToString(&v39, 0LL);
  System_String__Concat_62401220((System_String_o *)StringLiteral_262/*" funcEnt.funcType : "*/, v24, 0LL);
  v25 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_String__Concat_62401220(
                                                                   (System_String_o *)StringLiteral_132/*"  => targetId : "*/,
                                                                   v25,
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
                                                                     157,
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
        v30 = (*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))&WrapTarget_k__BackingField->klass[1]._1.byval_arg.bits)(
                WrapTarget_k__BackingField,
                WrapTarget_k__BackingField->klass[1]._1.this_arg.data);
        BattleActionData__setFuncTargetPlayerType(action, funcIndex, v30 & 1, 0LL);
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__CheckTargetIndividuality(
                                                                         v6,
                                                                         dataVals_k__BackingField,
                                                                         WrapTarget_k__BackingField,
                                                                         funcEnt,
                                                                         action,
                                                                         v31);
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
            v35 = v6->fields._logic_k__BackingField;
            if ( v35 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v35->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, uniqueId, 0LL);
                if ( BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
                       (BattleLogicFunctionProcess_FunctionUnitCheck_o *)ServantData,
                       dataVals_k__BackingField,
                       ServantData,
                       v37)
                  && ((*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))&WrapTarget_k__BackingField->klass[1]._2.naturalAligment)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass[1].vtable._0_Equals.methodPtr) & 1) != 0
                  && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass[1].vtable._0_Equals.method)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass[1].vtable._1_Finalize.methodPtr) & 1) != 0 )
                {
                  return 1;
                }
                BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v38);
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
      sub_1BCAA3C(this, action);
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
    sub_1BCAA3C(this, action);
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
    sub_1BCAA3C(this, action);
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
    sub_1BCAA3C(this, method);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)logic, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v10; // x2
  __int64 v11; // x3
  struct BattleServantData_o *targetSvt; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  int32_t uniqueId; // w20
  DataVals_o *dataVals_k__BackingField; // x21
  BattleBuffData_ChangeBgmData_o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v9 = this;
  if ( (byte_4B18E49 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_1BCA7E0(
                                                            &BattleBuffData_ChangeBgmData_TypeInfo,
                                                            actBuffData,
                                                            buffData);
    byte_4B18E49 = 1;
  }
  if ( !buffData
    || (buffData->fields.delAfterProcType = 3,
        (this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)v9->fields.targetSvt) == 0LL)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL),
        (targetSvt = v9->fields.targetSvt) == 0LL)
    || (funcUnit_k__BackingField = v9->fields._funcUnit_k__BackingField) == 0LL )
  {
    sub_1BCAA3C(this, actBuffData);
  }
  uniqueId = targetSvt->fields.uniqueId;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v16 = (BattleBuffData_ChangeBgmData_o *)sub_1BCAA2C(BattleBuffData_ChangeBgmData_TypeInfo, actBuffData, v10, v11);
  BattleBuffData_ChangeBgmData___ctor_43377924(v16, uniqueId, buffData, dataVals_k__BackingField, 0LL);
  buffData->fields.changeBgmData = v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&buffData->fields.changeBgmData, (int64_t)v16, v17, v18, v19, v20, v21, v22);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BattleActionEffect_ChangeBgmBuff_o *v18; // x20

  v7 = mainAction;
  v8 = this;
  if ( (byte_4B18E4A & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_1BCA7E0(
                                                            &BattleActionEffect_ChangeBgmBuff_TypeInfo,
                                                            mainAction,
                                                            actBuffData);
    byte_4B18E4A = 1;
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
          v18 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1BCAA2C(
                                                        BattleActionEffect_ChangeBgmBuff_TypeInfo,
                                                        v15,
                                                        v16,
                                                        v17);
          BattleActionEffect_ChangeBgmBuff___ctor(v18, 0LL);
          if ( actBuffData )
          {
            BattleActionData_BuffData__SetActionEffectProc(actBuffData, (BattleActionEffect_Base_o *)v18, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(this, mainAction);
  }
  if ( !v7 )
    goto LABEL_17;
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
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v6; // x27
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x9
  int32_t targetId_k__BackingField; // w22
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x23
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x25
  FunctionEntity_o *funcEnt; // x24
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v46; // x26
  struct System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x8
  BuffEntity_o *v48; // x24
  int v49; // w9
  System_String_o *v50; // x0
  System_Int32_array *vals; // x28
  System_Int32_array *ParamArray; // x0
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v54; // x28
  bool isDisabledBuff; // w29
  const MethodInfo *v56; // x4
  const MethodInfo *v57; // x2
  struct BattleLogicFunction_o *v58; // x8
  BattleData_o *v59; // x3
  const MethodInfo *v60; // x4
  const MethodInfo *v61; // x3
  int v62; // w28
  bool result; // w0
  int v64; // w27
  float v65; // s0
  int32_t v66; // w0
  float v67; // s0
  float v68; // s0
  System_String_o *v69; // x0
  System_String_o *v70; // x26
  System_String_o *v71; // x0
  int32_t Param; // w26
  __int64 v73; // x26
  System_String_o *v74; // x0
  const MethodInfo *v75; // x3
  _BOOL8 v76; // x0
  const MethodInfo *v77; // x4
  int32_t v78; // w8
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int32_t v85; // w0
  System_Int32_array *v86; // x21
  int32_t v87; // w23
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v88; // x22
  __int64 v89; // x1
  struct System_String_o *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  System_String_o *v97; // x0
  int value; // [xsp+Ch] [xbp-94h]
  System_Enum_o v99; // [xsp+10h] [xbp-90h] BYREF
  int v100; // [xsp+20h] [xbp-80h]
  MethodInfo methoda; // [xsp+2Ch] [xbp-74h] BYREF

  v6 = this;
  if ( (byte_4B18E66 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, action, funcTarget);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&BuffList_TYPE_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_12422/*"STATUS_UP_BUFF"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_20999/*"is same Group "*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_20998/*"is rate over "*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_2912/*"BATTLE_GUARD_FUNCTION"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_21000/*"is same Limit "*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_18119/*"check--Group( "*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_231/*" buff : "*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_227/*" avoid buff "*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_175/*" < "*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_18120/*"check--Rate( "*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_18118/*"check-- SameBuffLimit"*/, v35, v36);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1BCA7E0(&StringLiteral_18721/*"defRate"*/, v37, v38);
    byte_4B18E66 = 1;
  }
  memset(&methoda, 0, 20);
  if ( !funcTarget )
    goto LABEL_76;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_76;
  logic_k__BackingField = v6->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_76;
  if ( !action )
    goto LABEL_76;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_76;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleData__getServantData(
                                                                 (BattleData_o *)this,
                                                                 action->fields.actorId,
                                                                 0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_76;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v46 = this;
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
      goto LABEL_13;
  }
  CardIdsIndexList_k__BackingField = funcTarget->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField )
    goto LABEL_76;
  if ( CardIdsIndexList_k__BackingField->fields._size > 0 )
  {
LABEL_13:
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
    if ( !this )
      goto LABEL_76;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                   (BattleLogicFunction_o *)this,
                                                                   funcEnt,
                                                                   0LL);
    if ( !this )
      goto LABEL_76;
    v48 = (BuffEntity_o *)this;
    v49 = (int)this->fields._logic_k__BackingField;
    v99.klass = (System_Enum_c *)BuffList_TYPE_TypeInfo;
    v99.monitor = (void *)-1LL;
    v100 = v49;
    v50 = System_Enum__ToString(&v99, 0LL);
    System_String__Concat_62401220((System_String_o *)StringLiteral_231/*" buff : "*/, v50, 0LL);
    vals = v48->fields.vals;
    ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 111, 0LL);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)CommonFunction__JoinIndiv(vals, ParamArray, 0LL);
    if ( !procArg_k__BackingField )
      goto LABEL_76;
    externalArg = procArg_k__BackingField->fields.externalArg;
    if ( !externalArg )
      goto LABEL_76;
    v54 = this;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
    if ( !this )
      goto LABEL_76;
    isDisabledBuff = BattleLogicFunction__isDisabledBuff(
                       (BattleLogicFunction_o *)this,
                       externalArg->fields.isPassive,
                       dataVals_k__BackingField,
                       0LL);
    if ( isDisabledBuff )
    {
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__IsForciblyAddState(
                                                                     dataVals_k__BackingField,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_28:
        v58 = v6->fields._logic_k__BackingField;
        if ( !v58 )
          goto LABEL_76;
        this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
                                                                       procArg_k__BackingField,
                                                                       targetId_k__BackingField,
                                                                       dataVals_k__BackingField,
                                                                       v58->fields.data,
                                                                       v56);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v6->fields._logic_k__BackingField )
            goto LABEL_76;
          if ( BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
                 procArg_k__BackingField,
                 targetId_k__BackingField,
                 dataVals_k__BackingField,
                 v59,
                 v60) )
          {
            value = DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
            if ( (value & 0x80000000) == 0 )
              goto LABEL_35;
            if ( BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
                   procArg_k__BackingField,
                   targetId_k__BackingField,
                   dataVals_k__BackingField->fields.funcIndex,
                   v61) )
            {
              value = BattleUtility__Abs_43794764(value, 0LL);
LABEL_35:
              *(Il2CppMethodPointer *)((char *)&methoda.virtualMethodPointer + 4) = 0LL;
              this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleRandom__getNext(1000, 0LL);
              LODWORD(methoda.virtualMethodPointer) = (_DWORD)this;
              if ( isDisabledBuff )
              {
                HIDWORD(methoda.methodPointer) = 1000;
                if ( !DataVals__isParam(dataVals_k__BackingField, 112, 0LL) )
                {
                  v62 = value;
                  HIDWORD(methoda.methodPointer) = value;
LABEL_47:
                  *(float *)&methoda.methodPointer = (float)DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
                  v69 = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
                  System_String__Concat_62401220((System_String_o *)StringLiteral_18721/*"defRate"*/, v69, 0LL);
                  v70 = System_Int32__ToString((int32_t)&methoda.virtualMethodPointer, 0LL);
                  v71 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
                  System_String__Concat_62414484(
                    (System_String_o *)StringLiteral_18120/*"check--Rate( "*/,
                    v70,
                    (System_String_o *)StringLiteral_175/*" < "*/,
                    v71,
                    0LL);
                  if ( DataVals__isSameBuffLimit(dataVals_k__BackingField, 0LL) )
                  {
                    Param = DataVals__GetParam(dataVals_k__BackingField, 40, 0, 0LL);
                    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetSameBuffLimitTargetIndividuality(
                                                                                   dataVals_k__BackingField,
                                                                                   0LL);
                    if ( !WrapTarget_k__BackingField )
                      goto LABEL_76;
                    if ( (*(int (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.initializationExceptionGCHandle)(
                           WrapTarget_k__BackingField,
                           this,
                           1LL,
                           *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.cctor_finished) >= Param )
                    {
                      result = 0;
                      funcTarget->fields.invalidType = 1;
                      return result;
                    }
                  }
                  v73 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._13_GetConvertBuffEntity.method)(
                          funcTarget,
                          (unsigned int)action->fields.actorId,
                          funcTarget->klass->vtable._14_CheckConvertBuffData.methodPtr);
                  v74 = System_Int32__ToString((int)v48 + 72, 0LL);
                  System_String__Concat_62401220((System_String_o *)StringLiteral_18119/*"check--Group( "*/, v74, 0LL);
                  if ( !v73 )
                  {
                    v76 = BuffEntity__isCheckGroup(v48, 0LL);
                    if ( v76
                      && BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
                           (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v76,
                           funcTarget,
                           v48,
                           WrapTarget_k__BackingField,
                           v77) )
                    {
                      goto LABEL_53;
                    }
                  }
                  if ( (v62 & 0x80000000) != 0
                    && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
                          procArg_k__BackingField,
                          targetId_k__BackingField,
                          dataVals_k__BackingField->fields.funcIndex,
                          v75) )
                  {
                    HIDWORD(methoda.methodPointer) = -1000;
                  }
                  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BuffEntity_o *, void *))funcTarget->klass->vtable._18_CheckBuffCondtion.method)(
                          funcTarget,
                          action,
                          v48,
                          funcTarget->klass[1]._1.image) & 1) == 0 )
                    return 0;
                  if ( SLODWORD(methoda.virtualMethodPointer) < SHIDWORD(methoda.methodPointer) )
                  {
                    if ( !v73
                      || (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._14_CheckConvertBuffData.method)(
                            funcTarget,
                            v73,
                            funcTarget->klass->vtable._15_GetFixBuffEntity.methodPtr) & 1) != 0 )
                    {
                      return 1;
                    }
                    result = 0;
                    v78 = 3;
                    goto LABEL_54;
                  }
                  funcTarget->fields.invalidText = 0LL;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&funcTarget->fields.invalidText,
                    0LL,
                    v79,
                    v80,
                    v81,
                    v82,
                    v83,
                    v84);
                  v85 = ConstantMaster__getValue((System_String_o *)StringLiteral_12422/*"STATUS_UP_BUFF"*/, 0LL);
                  if ( SLODWORD(methoda.virtualMethodPointer) < 1000 )
                  {
LABEL_74:
                    v97 = System_Int32__ToString((int32_t)&methoda.methodPointer + 4, 0LL);
                    System_String__Concat_62401220((System_String_o *)StringLiteral_20998/*"is rate over "*/, v97, 0LL);
                    result = 0;
                    v78 = 2;
                    goto LABEL_54;
                  }
                  v86 = v48->fields.vals;
                  v87 = v85;
                  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1BCA888(int___TypeInfo, 1LL);
                  if ( this )
                  {
                    v88 = this;
                    if ( !LODWORD(this[1].klass) )
                      sub_1BCAA44(this, action);
                    LODWORD(this[1].monitor) = v87;
                    if ( !Individuality_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, action);
                    if ( !Individuality__CheckIndividualities(v86, (System_Int32_array *)v88, 0LL) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v89);
                      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_2912/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
                      funcTarget->fields.invalidText = v90;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&funcTarget->fields.invalidText,
                        (int64_t)v90,
                        v91,
                        v92,
                        v93,
                        v94,
                        v95,
                        v96);
                    }
                    goto LABEL_74;
                  }
LABEL_76:
                  sub_1BCAA3C(this, action);
                }
              }
              else
              {
                if ( !WrapTarget_k__BackingField )
                  goto LABEL_76;
                v64 = (int)this;
                v65 = ((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, char *, void *))WrapTarget_k__BackingField->klass[1]._2.typeHierarchy)(
                        WrapTarget_k__BackingField,
                        v54,
                        v46,
                        (char *)&methoda.virtualMethodPointer + 4,
                        WrapTarget_k__BackingField->klass[1]._2.unity_user_data);
                v66 = BattleUtility__FloorToInt((float)(v65 * 1000.0) + (float)v64, 0LL);
                HIDWORD(methoda.methodPointer) = 1000;
                LODWORD(methoda.virtualMethodPointer) = v66;
              }
              if ( v46 )
              {
                this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__isParam(
                                                                               dataVals_k__BackingField,
                                                                               112,
                                                                               0LL);
                if ( !WrapTarget_k__BackingField )
                  goto LABEL_76;
                v67 = (*(float (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, char *, _QWORD, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.thread_static_fields_offset)(
                        WrapTarget_k__BackingField,
                        v54,
                        v46,
                        (char *)&methoda.virtualMethodPointer + 4,
                        (unsigned __int8)this & 1,
                        *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.token);
                v62 = value;
                v68 = (float)(v67 * 1000.0) + (float)value;
              }
              else
              {
                v62 = value;
                v68 = (float)value;
              }
              HIDWORD(methoda.methodPointer) = BattleUtility__FloorToInt(v68, 0LL);
              goto LABEL_47;
            }
          }
        }
LABEL_38:
        BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
          (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
          dataVals_k__BackingField,
          v57);
        return 0;
      }
      if ( !WrapTarget_k__BackingField )
        goto LABEL_76;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.field_count)(
                                                                     WrapTarget_k__BackingField,
                                                                     v54,
                                                                     v46,
                                                                     *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.interfaces_count);
    }
    else
    {
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
      if ( !this )
        goto LABEL_76;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__isFailDependentLastResult(
                                                                     (BattleLogicFunction_o *)this,
                                                                     procArg_k__BackingField,
                                                                     targetId_k__BackingField,
                                                                     dataVals_k__BackingField,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_38;
      if ( !WrapTarget_k__BackingField )
        goto LABEL_76;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, Il2CppRGCTXData *))WrapTarget_k__BackingField->klass[1].static_fields)(
                                                                     WrapTarget_k__BackingField,
                                                                     v54,
                                                                     v46,
                                                                     WrapTarget_k__BackingField->klass[1].rgctx_data);
    }
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(
        (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
        (const MethodInfo *)action);
      return 0;
    }
    goto LABEL_28;
  }
LABEL_53:
  result = 0;
  v78 = 1;
LABEL_54:
  funcTarget->fields.invalidType = v78;
  return result;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
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

  if ( (byte_4B18E67 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1BCA7E0(
                                                                   &Method_System_Collections_Generic_List_int__ToArray__,
                                                                   funcTarget,
                                                                   buffEnt);
    byte_4B18E67 = 1;
  }
  if ( !funcTarget )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcTarget->fields._AttachTargetList_k__BackingField;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_20;
  klass = this[1].klass;
  v10 = this;
  if ( (int)klass >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)klass )
        sub_1BCAA44(this, funcTarget);
      if ( !wrapTarget )
        break;
      v12 = *((_DWORD *)&v10[1].monitor + v11);
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const char *))wrapTarget->klass[1]._1.gc_desc)(
                                                                     wrapTarget,
                                                                     wrapTarget->klass[1]._1.name);
      if ( !buffEnt || !this )
        break;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleBuffData__checkBuffGroup(
                                                                     (BattleBuffData_o *)this,
                                                                     buffEnt->fields.buffGroup,
                                                                     v12,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(funcTarget, v12, v8);
      LODWORD(klass) = v10[1].klass;
      if ( (__int64)++v11 >= (int)klass )
        goto LABEL_15;
    }
LABEL_20:
    sub_1BCAA3C(this, funcTarget);
  }
LABEL_15:
  if ( (byte_4B18E3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, funcTarget, v8);
    byte_4B18E3F = 1;
  }
  AttachTargetList_k__BackingField = funcTarget->fields._AttachTargetList_k__BackingField;
  return !AttachTargetList_k__BackingField || AttachTargetList_k__BackingField->fields._size < 1;
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct DataVals_o *dataVals_k__BackingField; // x8
  __int64 v23; // x2
  __int64 v24; // x3
  int logic_k__BackingField_high; // w8
  _QWORD *v26; // x8
  __int64 v27; // x19

  v5 = this;
  if ( (byte_4B18E68 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo, *(_QWORD *)&targetId, funcUnitCheck);
    sub_1BCA7E0(&BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo, v8, v9);
    sub_1BCA7E0(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo, v10, v11);
    sub_1BCA7E0(&BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo, v12, v13);
    sub_1BCA7E0(&BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo, v14, v15);
    sub_1BCA7E0(&BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo, v16, v17);
    sub_1BCA7E0(&BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo, v18, v19);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1BCA7E0(
                                                                   &BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo,
                                                                   v20,
                                                                   v21);
    byte_4B18E68 = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v5->fields._logic_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                       (BattleLogicFunction_o *)this,
                                                                       dataVals_k__BackingField->fields.funcEnt,
                                                                       0LL)) == 0LL )
  {
    sub_1BCAA3C(this, *(_QWORD *)&targetId);
  }
  logic_k__BackingField_high = HIDWORD(this->fields._logic_k__BackingField);
  if ( logic_k__BackingField_high > 161 )
  {
    if ( logic_k__BackingField_high <= 10000 )
    {
      if ( logic_k__BackingField_high == 176 )
      {
        v26 = &BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo;
        goto LABEL_26;
      }
      if ( logic_k__BackingField_high == 199 )
      {
        v26 = &BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo;
        goto LABEL_26;
      }
    }
    else
    {
      switch ( logic_k__BackingField_high )
      {
        case 10001:
          v26 = &BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo;
          goto LABEL_26;
        case 10002:
          v26 = &BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo;
          goto LABEL_26;
        case 10003:
          v26 = &BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo;
LABEL_26:
          v27 = sub_1BCAA2C(*v26, *(_QWORD *)&targetId, v23, v24);
          goto LABEL_27;
      }
    }
    goto LABEL_20;
  }
  if ( logic_k__BackingField_high != 107 )
  {
    if ( logic_k__BackingField_high == 154 )
    {
      v26 = &BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo;
      goto LABEL_26;
    }
    if ( logic_k__BackingField_high == 161 )
    {
      v26 = &BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo;
      goto LABEL_26;
    }
LABEL_20:
    v26 = &BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo;
    goto LABEL_26;
  }
  v27 = sub_1BCAA2C(BattleLogicFunctionProcess_OverwriteBattleClassCheck_TypeInfo, *(_QWORD *)&targetId, v23, v24);
  *(_DWORD *)(v27 + 108) = -1;
LABEL_27:
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v27;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__checkCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v8; // x2

  if ( (byte_4B18E65 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo, action, funcTarget);
    byte_4B18E65 = 1;
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

  if ( (byte_4B18E43 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, buff, method);
    byte_4B18E43 = 1;
  }
  CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField
    || (CardIdsIndexList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       CardIdsIndexList_k__BackingField,
                                                                                       (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !buff)
    || (buff->fields.servantCardIdsIndexArray = (struct System_Int32_array *)CardIdsIndexList_k__BackingField,
        sub_1BCA784(
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
    sub_1BCAA3C(CardIdsIndexList_k__BackingField, buff);
  }
  v12 = System_Collections_Generic_List_int___ToArray(
          CardIdsIndexList_k__BackingField,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  buff->fields.attachTargets = v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&buff->fields.attachTargets, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x20
  System_Int32_array *result; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_int__o *v39; // x24
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_List_int__o *v48; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  System_Action_int__o *v52; // x21

  if ( (byte_4B18E41 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, wrapTarget, userCommandCodeId);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_int___, v9, v10);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v21, v22);
    sub_1BCA7E0(
      &Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
      v23,
      v24);
    sub_1BCA7E0(&BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo, v25, v26);
    byte_4B18E41 = 1;
  }
  v27 = sub_1BCAA2C(
          BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo,
          wrapTarget,
          userCommandCodeId,
          cardIdsIndexArray);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_17;
  *(_QWORD *)(v27 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)this, v30, v31, v32, v33, v34, v35);
  v39 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v36,
                                                    v37,
                                                    v38);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v27 + 16) = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)v39, v40, v41, v42, v43, v44, v45);
  if ( userCommandCodeId >= 1 )
  {
    if ( !wrapTarget )
      goto LABEL_17;
    v48 = *(System_Collections_Generic_List_int__o **)(v27 + 16);
    result = (System_Int32_array *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, _QWORD))&wrapTarget->klass[1]._2.element_size)(
                                     wrapTarget,
                                     userCommandCodeId,
                                     *(_QWORD *)&wrapTarget->klass[1]._2.static_fields_size);
    if ( !v48 )
      goto LABEL_17;
    items = v48->fields._items;
    v50 = Method_System_Collections_Generic_List_int__Add__;
    ++v48->fields._version;
    if ( !items )
      goto LABEL_17;
    size = v48->fields._size;
    v29 = (unsigned int)((_DWORD)result + 101);
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v48,
        v29,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v48->fields._size = size + 1;
      items->m_Items[size + 1] = v29;
    }
  }
  v52 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v29, v46, v47);
  System_Action_int____ctor(
    v52,
    (Il2CppObject *)v27,
    Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)cardIdsIndexArray,
    (System_Action_T__o *)v52,
    (const MethodInfo_2EFF36C *)Method_BasicHelper_ForEach_int___);
  result = *(System_Int32_array **)(v27 + 16);
  if ( !result )
    goto LABEL_17;
  if ( (int)result->max_length > 0 )
    return System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)result,
             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !result )
LABEL_17:
    sub_1BCAA3C(result, v29);
  if ( !result->max_length )
    sub_1BCAA44(result, v29);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_T__o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_int__o *v15; // x23
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **p_CardIdsIndexList_k__BackingField; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t userCommandCodeId; // x21
  System_Int32_array *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_int__o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  v6 = this;
  if ( (byte_4B18E40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, action, wrapTarget);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v7, v8);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_1BCA7E0(
                                                                       &System_Collections_Generic_List_int__TypeInfo,
                                                                       v9,
                                                                       v10);
    byte_4B18E40 = 1;
  }
  if ( !wrapTarget
    || (v11 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, _QWORD, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass[1]._2.genericContainerHandle)(
                                                               wrapTarget,
                                                               *(_QWORD *)&wrapTarget->klass[1]._2.instance_size,
                                                               wrapTarget,
                                                               method),
        v15 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v12,
                                                          v13,
                                                          v14),
        System_Collections_Generic_List_int____ctor_56116492(
          v15,
          v11,
          (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440),
        v6->fields._CardIdsIndexList_k__BackingField = v15,
        p_CardIdsIndexList_k__BackingField = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **)&v6->fields._CardIdsIndexList_k__BackingField,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v6->fields._CardIdsIndexList_k__BackingField,
          (int64_t)v15,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        !action)
    || (this = *p_CardIdsIndexList_k__BackingField) == 0LL )
  {
    sub_1BCAA3C(this, action);
  }
  userCommandCodeId = action->fields.userCommandCodeId;
  v24 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)this,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  v25 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, System_Int32_array *, Il2CppMethodPointer))v6->klass->vtable._17_GetAttachTargetArray.method)(
                                                         v6,
                                                         wrapTarget,
                                                         userCommandCodeId,
                                                         v24,
                                                         v6->klass->vtable._18_CheckBuffCondtion.methodPtr);
  v29 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28);
  System_Collections_Generic_List_int____ctor_56116492(
    v29,
    v25,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  v6->fields._AttachTargetList_k__BackingField = v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v6->fields._AttachTargetList_k__BackingField,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t attachTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0

  if ( (byte_4B18E42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, *(_QWORD *)&attachTarget, method);
    byte_4B18E42 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField
    || (System_Collections_Generic_List_int___Remove(
          AttachTargetList_k__BackingField,
          attachTarget,
          (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__),
        (AttachTargetList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField) == 0LL) )
  {
    sub_1BCAA3C(AttachTargetList_k__BackingField, *(_QWORD *)&attachTarget);
  }
  System_Collections_Generic_List_int___Remove(
    AttachTargetList_k__BackingField,
    attachTarget - 101,
    (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
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
  __int64 v2; // x2
  struct System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x8

  if ( (byte_4B18E3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, method, v2);
    byte_4B18E3F = 1;
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  if ( (byte_4B18E44 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)sub_1BCA7E0(
                                                                                             &Method_System_Collections_Generic_List_int__Add__,
                                                                                             *(_QWORD *)&index,
                                                                                             method);
    byte_4B18E44 = 1;
  }
  if ( !v4->fields.__4__this
    || (this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)v4->fields.targetList) == 0LL
    || (targetList = this->fields.targetList,
        v6 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(this->fields.__4__this),
        !targetList) )
  {
    sub_1BCAA3C(this, *(_QWORD *)&index);
  }
  _4__this_low = SLODWORD(this->fields.__4__this);
  v8 = index + 101;
  if ( (unsigned int)_4__this_low >= targetList->fields._size )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      v8,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
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
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)this,
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, action);
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
  BattleActionData_o *v5; // x24
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **v6; // x25
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v10; // x9
  int32_t targetId_k__BackingField; // w27
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x26
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v14; // x8
  BattleServantData_o *v15; // x20
  FunctionEntity_o *funcEnt; // x23
  BattleServantData_o *v17; // x22
  const MethodInfo *v18; // x2
  char v19; // w0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_o **p_invalidText; // x19
  const MethodInfo *v29; // x1
  System_Int32_array *vals; // x23
  float BuffTOLERANCESUBSTATEMagnification; // s0
  bool isDisplayLastFuncInvalid; // [xsp+1Ch] [xbp-54h] BYREF

  v5 = action;
  v6 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **)this;
  if ( (byte_4B18E69 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, action, funcTarget);
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1BCA7E0(&StringLiteral_2912/*"BATTLE_GUARD_FUNCTION"*/, v7, v8);
    byte_4B18E69 = 1;
  }
  if ( !funcTarget )
    goto LABEL_49;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_49;
  v10 = v6[2];
  if ( !v10 )
    goto LABEL_49;
  if ( !v5 )
    goto LABEL_49;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v10->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_49;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     v5->fields.actorId,
                                                                     0LL);
  v14 = v6[2];
  if ( !v14 )
    goto LABEL_49;
  v15 = (BattleServantData_o *)this;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v14->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_49;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     targetId_k__BackingField,
                                                                     0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_49;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  isDisplayLastFuncInvalid = 0;
  v17 = (BattleServantData_o *)this;
  this = v6[2];
  if ( !this )
    goto LABEL_49;
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
      BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v18);
      goto LABEL_18;
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
            if ( !v17 )
              goto LABEL_49;
            if ( !v17->fields.isEnemy )
              goto LABEL_18;
            funcTarget->fields.invalidType = 2;
            if ( !FuncList__Check(20, funcEnt->fields.funcType, 0LL)
              || BattleServantData__getBuffResistDelayNPTurn(v17, v15, 0LL) <= 0.0 )
            {
              goto LABEL_18;
            }
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
            action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2912/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
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
              if ( !v17 )
                goto LABEL_49;
              if ( BattleServantData__checkAvoidInstantDeath(v17, v15, 0LL) )
              {
                BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, v29);
                goto LABEL_18;
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
              if ( v15
                || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)DataVals__isParam(
                                                                                       dataVals_k__BackingField,
                                                                                       74,
                                                                                       0LL),
                    action = 0LL,
                    ((unsigned __int8)this & 1) == 0) )
              {
                if ( !v17 )
                  goto LABEL_49;
                BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                       v17,
                                                       vals,
                                                       v15,
                                                       0LL);
                action = 0LL;
                if ( BuffTOLERANCESUBSTATEMagnification > 0.0 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, 0LL);
                  action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2912/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
                }
              }
            }
            funcTarget->fields.invalidText = (struct System_String_o *)action;
            p_invalidText = &funcTarget->fields.invalidText;
            *((_DWORD *)p_invalidText - 2) = 2;
          }
          sub_1BCA784((PartyOrganizationUtility_o *)p_invalidText, (int64_t)action, v22, v23, v24, v25, v26, v27);
          goto LABEL_18;
        }
      }
      if ( v17 )
      {
        if ( BattleServantData__checkPlayer(v17, 0LL) )
        {
          v19 = 0;
          funcTarget->fields.invalidType = 2;
          return v19 & 1;
        }
        goto LABEL_18;
      }
    }
LABEL_49:
    sub_1BCAA3C(this, action);
  }
  this = v6[2];
  if ( !this )
    goto LABEL_49;
  if ( BattleLogicFunction__checkNoActionCondition(
         (BattleLogicFunction_o *)this,
         targetId_k__BackingField,
         funcEnt,
         0LL) )
  {
LABEL_18:
    v19 = 0;
    return v19 & 1;
  }
  v19 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, DataVals_o *, BattleLogicFunction_ProcListInArgs_o *, void *))(*v6)[19].klass)(
          v6,
          v5,
          funcTarget,
          dataVals_k__BackingField,
          procArg_k__BackingField,
          (*v6)[19].monitor);
  return v19 & 1;
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
  sub_1BCA784(
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x2
  __int64 v18; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x22
  System_Func_object__object__o *v20; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v28; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v29; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isPassive; // w21

  v8 = this;
  if ( (byte_4B18E50 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___,
      actBuffData,
      buffData);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v9, v10);
    sub_1BCA7E0(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__, v11, v12);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v13, v14);
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_1BCA7E0(
                                                                      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__,
                                                                      v15,
                                                                      v16);
    byte_4B18E50 = 1;
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
      sub_1BCAA3C(this, actBuffData);
    }
    if ( SLODWORD(funcUnit_k__BackingField->fields._procArg_k__BackingField) >= 1 )
    {
      v20 = (System_Func_object__object__o *)sub_1BCAA2C(
                                               System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                               actBuffData,
                                               v17,
                                               v18);
      System_Func_object__object____ctor(
        v20,
        (Il2CppObject *)v8,
        Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__,
        0LL);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)funcUnit_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)v20,
                                                                   (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
      this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_object_(
                                                                        v21,
                                                                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
      if ( !actBuffData )
        goto LABEL_19;
      actBuffData->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&actBuffData->fields.removeBuffList,
        (int64_t)this,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
  }
  v28 = v8->fields._funcUnit_k__BackingField;
  if ( !v28 )
    goto LABEL_19;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)v28->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_19;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 108, 0LL);
  if ( !buffData )
    goto LABEL_19;
  buffData->fields.isRemoveFieldBuffActorDeath = (unsigned __int8)this & 1;
  v29 = v8->fields._funcUnit_k__BackingField;
  if ( !v29 )
    goto LABEL_19;
  procArg_k__BackingField = v29->fields._procArg_k__BackingField;
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  BattleFieldEnvironmentData_o *BuffData; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1
  bool v22; // w21
  System_Int32_array *GrantBuffTypeArray; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Func_int__bool__o *v27; // x23

  if ( (byte_4B18E4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, action, buffEnt);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
      v8,
      v9);
    sub_1BCA7E0(&BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo, v10, v11);
    byte_4B18E4F = 1;
  }
  v12 = sub_1BCAA2C(
          BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo,
          action,
          buffEnt,
          method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = buffEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)buffEnt, v15, v16, v17, v18, v19, v20);
  if ( this->fields.grantType != 1 )
    return 1;
  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v21);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(BuffData, v14);
  }
  v22 = 1;
  GrantBuffTypeArray = BattleBuffData__GetGrantBuffTypeArray((BattleBuffData_o *)BuffData, 1, 1, 0LL);
  v27 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v24, v25, v26);
  System_Func_int__bool____ctor(
    v27,
    (Il2CppObject *)v12,
    Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
    0LL);
  if ( BasicHelper__Any_int__49273364(
         GrantBuffTypeArray,
         (System_Func_T__bool__o *)v27,
         (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176) )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return v22;
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

  if ( (byte_4B18E4E & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, wrapTarget, userCommandCodeId);
    byte_4B18E4E = 1;
  }
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BCAA3C(0LL, v6);
  if ( !result->max_length )
    sub_1BCAA44(result, v6);
  result->m_Items[1] = 10001;
  return result;
}


int32_t __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetGrantType(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  if ( !baseVals )
    sub_1BCAA3C(this, 0LL);
  return DataVals__GetParam(baseVals, 109, 0, 0LL);
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
    sub_1BCAA3C(dataVals_k__BackingField, v7);
  this->fields.grantType = DataVals__GetParam(dataVals_k__BackingField, 109, 0, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleActionData_FieldBuffData_o *v4; // x19

  if ( (byte_4B18E51 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_FieldBuffData_TypeInfo, method, v2);
    byte_4B18E51 = 1;
  }
  v4 = (BattleActionData_FieldBuffData_o *)sub_1BCAA2C(BattleActionData_FieldBuffData_TypeInfo, method, v2, v3);
  BattleActionData_FieldBuffData___ctor(v4, 0LL);
  return (BattleActionData_BuffData_o *)v4;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B18E52 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method, v2);
    byte_4B18E52 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v4;
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
    sub_1BCAA3C(BuffData, v5);
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
    sub_1BCAA3C(this, method);
  }
  return data->fields._FieldEnvData_k__BackingField;
}


void __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___ctor(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___CheckBuffCondtion_b__0(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_1BCAA3C(this, *(_QWORD *)&type);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return BattleLogicFunctionProcess_FunctionUnitCheck__GetFuncNoEffectText(
           this->fields._funcUnit_k__BackingField,
           this->fields.invalidText,
           v2);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, v17);
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
    sub_1BCAA3C(this, mainAction);
  }
  return result_k__BackingField;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleActionData_BuffData_o *v4; // x19

  if ( (byte_4B18E3D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_BuffData_TypeInfo, method, v2);
    byte_4B18E3D = 1;
  }
  v4 = (BattleActionData_BuffData_o *)sub_1BCAA2C(BattleActionData_BuffData_TypeInfo, method, v2, v3);
  BattleActionData_BuffData___ctor(v4, 0LL);
  return v4;
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
    sub_1BCAA3C(this, actBuffData);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B18E3E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_WrapTargetServant_TypeInfo, method, v2);
    byte_4B18E3E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicFunctionProcess_WrapTargetServant_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v4;
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
    sub_1BCAA3C(this, method);
  }
  DataVals__SetInvalidCauseByAnyBuff(dataVals_k__BackingField, this->fields._targetId_k__BackingField, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  intptr_t v11; // w21
  System_Type_o *TypeFromHandle; // x0
  __int64 v13; // x1
  System_Type_o *v14; // x21
  __int64 v15; // x1
  int32_t DisplayLastFuncInvalidType; // w20
  __int64 v17; // x2
  __int64 v18; // x3
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v19; // x0
  BattleActionData_o *v20; // x1
  const MethodInfo *v21; // x2
  System_RuntimeTypeHandle_o v22; // 0:w0.4

  if ( (byte_4B18E3C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Enum_TypeInfo, baseVals, method);
    sub_1BCA7E0(&BattleLogicFunctionProcess_FuncInvalidType_var, v5, v6);
    sub_1BCA7E0(&BattleLogicFunctionProcess_FuncInvalidType_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Type_TypeInfo, v9, v10);
    byte_4B18E3C = 1;
  }
  v11 = (int)BattleLogicFunctionProcess_FuncInvalidType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, baseVals);
  v22.fields.value = v11;
  TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0LL);
  if ( !baseVals )
    goto LABEL_11;
  v14 = TypeFromHandle;
  DisplayLastFuncInvalidType = DataVals__GetDisplayLastFuncInvalidType(baseVals, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v15);
  TypeFromHandle = (System_Type_o *)System_Enum__ToObject_63430800(v14, DisplayLastFuncInvalidType, 0LL);
  if ( !TypeFromHandle )
LABEL_11:
    sub_1BCAA3C(TypeFromHandle, v13);
  if ( TypeFromHandle->klass->_1.element_class == BattleLogicFunctionProcess_FuncInvalidType_TypeInfo->_1.element_class )
  {
    this->fields.invalidType = *(_DWORD *)j_il2cpp_object_unbox_0(
                                            TypeFromHandle,
                                            BattleLogicFunctionProcess_FuncInvalidType_TypeInfo,
                                            v17,
                                            v18);
  }
  else
  {
    sub_1BCACFC(TypeFromHandle);
    BattleLogicFunctionProcess_FunctionTargetCheck__IsExecutable(v19, v20, v21);
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
    sub_1BCAA3C(this, funcProc);
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
    sub_1BCAA3C(0LL, this);
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
    sub_1BCAA3C(this, 0LL);
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B18E58 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, logic, procArg);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo, v9, v10);
    byte_4B18E58 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo,
                                                       logic,
                                                       procArg,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToOtherList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.linkedToOtherList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToSelfList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.linkedToSelfList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._logic_k__BackingField = logic;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)logic, v28, v29, v30, v31, v32, v33);
  this->fields._procArg_k__BackingField = procArg;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._procArg_k__BackingField,
    (int64_t)procArg,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields._result_k__BackingField = 0;
  v40 = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)sub_1BCA888(
                                                                         BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                                                         0LL);
  this->fields._funcTargetArray_k__BackingField = v40;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._funcTargetArray_k__BackingField,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
    sub_1BCAA3C(this, defText);
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
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // kr00_16
  int32_t v11; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B18E61 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BCA7E0(
                                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                               baseVals,
                                                               targetSvtData);
    byte_4B18E61 = 1;
  }
  if ( !baseVals )
    sub_1BCAA3C(this, baseVals);
  if ( !DataVals__isParam(baseVals, 179, 0LL) )
    return 1;
  if ( targetSvtData )
  {
    v8 = *(_QWORD *)&targetSvtData->fields.friendship.fields.currentCryptoKey;
    v7 = *(_QWORD *)&targetSvtData->fields.friendship.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
    v6 = *(_QWORD *)&v10.fields.fakeValue;
    v7 = *(_QWORD *)&v10.fields.fakeValue;
    v8 = *(_QWORD *)&v10.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  return DataVals__IsMatchFriendShipCondition(baseVals, v11, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x19
  DataVals_o *v13; // x0
  __int64 v14; // x1
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
  System_Collections_ICollection_o *TargetTypeIndexArray; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Func_int__bool__o *v32; // x21

  if ( (byte_4B18E5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_int___, baseVals, targetSvtData);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__,
      v8,
      v9);
    sub_1BCA7E0(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0_TypeInfo, v10, v11);
    byte_4B18E5F = 1;
  }
  v12 = sub_1BCAA2C(
          BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0_TypeInfo,
          baseVals,
          targetSvtData,
          method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = baseVals,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)baseVals, v15, v16, v17, v18, v19, v20),
        *(_QWORD *)(v12 + 24) = targetSvtData,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)targetSvtData, v21, v22, v23, v24, v25, v26),
        (v13 = *(DataVals_o **)(v12 + 16)) == 0LL) )
  {
    sub_1BCAA3C(v13, v14);
  }
  TargetTypeIndexArray = (System_Collections_ICollection_o *)DataVals__GetTargetTypeIndexArray(v13, 177, 0LL);
  if ( BasicHelper__IsNullOrEmpty(TargetTypeIndexArray, 0LL) )
    return 1;
  if ( !*(_QWORD *)(v12 + 24) )
    return 0;
  v32 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v28, v29, v30);
  System_Func_int__bool____ctor(
    v32,
    (Il2CppObject *)v12,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass67_0__IsSatisfyBattlePointPhaseRangeCondition_b__0__,
    0LL);
  return System_Linq_Enumerable__All_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)TargetTypeIndexArray,
           (System_Func_TSource__bool__o *)v32,
           (const MethodInfo_2F1CDBC *)Method_System_Linq_Enumerable_All_int___);
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
                                                             133,
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
                           133,
                           (int32_t)this->fields._procArg_k__BackingField,
                           0LL);
          return (unsigned __int8)this & 1;
        }
      }
    }
LABEL_12:
    sub_1BCAA3C(this, baseVal);
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
    sub_1BCAA3C(this, 0LL);
  if ( DataVals__CheckAssertStrParam(baseVals, 176, &existParamNum, 0LL) )
  {
    if ( targetSvtData )
    {
      NpChargeStage = BattleServantData__getNpChargeStage(targetSvtData, 0LL);
      return DataVals__IsSatisfyAboveBelowCond(baseVals, 176, NpChargeStage - 1, 0x7FFFFFFF, 0LL);
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
                                                             137,
                                                             existParamNum,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !targetSvtData )
      goto LABEL_13;
    v6 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
           targetSvtData,
           targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
    IsSatisfyAboveBelowCondition = DataVals__IsSatisfyAboveBelowCondition(baseVals, 137, v6, 0LL);
  }
  else
  {
    IsSatisfyAboveBelowCondition = 1;
  }
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__CheckAssertStrParam(
                                                             baseVals,
                                                             138,
                                                             existParamNum,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = 1;
    goto LABEL_11;
  }
  if ( !targetSvtData )
LABEL_13:
    sub_1BCAA3C(this, baseVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  if ( MaxHp )
  {
    v9 = MaxHp;
    v10 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
            targetSvtData,
            targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
    v11 = DataVals__IsSatisfyAboveBelowCondition(baseVals, 138, 1000 * v10 / v9, 0LL);
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
  if ( (byte_4B18E60 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BCA7E0(
                                                               &Method_System_Linq_Enumerable_Contains_int___,
                                                               baseVals,
                                                               targetSvtData);
    byte_4B18E60 = 1;
  }
  if ( !baseVals )
    goto LABEL_11;
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(baseVals, 178, 0LL);
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
                 (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
LABEL_11:
    sub_1BCAA3C(this, baseVals);
  }
  return 0;
}


AddBgmArgument_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__MakeAddBgmArgument(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  DataVals_o *dataVals_k__BackingField; // x19
  AddBgmArgument_o *v6; // x20

  if ( (byte_4B18E57 & 1) == 0 )
  {
    sub_1BCA7E0(&AddBgmArgument_TypeInfo, method, v2);
    byte_4B18E57 = 1;
  }
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  v6 = (AddBgmArgument_o *)sub_1BCAA2C(AddBgmArgument_TypeInfo, method, v2, v3);
  AddBgmArgument___ctor(v6, dataVals_k__BackingField, 0LL);
  return v6;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__SetAfterUpdateField(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  procArg_k__BackingField = this->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    sub_1BCAA3C(this, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Object_array *funcTargetArray_k__BackingField; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4B18E5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___, *(_QWORD *)&targetId, result);
    sub_1BCA7E0(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(
      &Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0__checkFuncTargetResult_b__0__,
      v9,
      v10);
    sub_1BCA7E0(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0_TypeInfo, v11, v12);
    byte_4B18E5B = 1;
  }
  v13 = sub_1BCAA2C(
          BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0_TypeInfo,
          *(_QWORD *)&targetId,
          result,
          method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_DWORD *)(v13 + 16) = targetId;
  *(_BYTE *)(v13 + 20) = result;
  funcTargetArray_k__BackingField = (System_Object_array *)this->fields._funcTargetArray_k__BackingField;
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo,
                                         v15,
                                         v16,
                                         v17);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass58_0__checkFuncTargetResult_b__0__,
    0LL);
  return BasicHelper__Any_object__49274176(
           funcTargetArray_k__BackingField,
           (System_Func_T__bool__o *)v19,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *linkedToSelfList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  int v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18E5E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__,
      action,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__,
      v9,
      v10);
    byte_4B18E5E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  linkedToSelfList = (System_Collections_Generic_List_object__o *)this->fields.linkedToSelfList;
  if ( !linkedToSelfList )
    sub_1BCAA3C(0LL, action);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    linkedToSelfList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    do
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
      if ( !v12 )
      {
        v18 = 6;
        goto LABEL_13;
      }
      current = v21.fields._current;
      if ( !v21.fields._current )
        sub_1BCAA3C(v12, v13);
      klass = v21.fields._current[2].klass;
      if ( !klass )
        sub_1BCAA3C(0LL, v13);
    }
    while ( DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed((DataVals_o *)klass, 0LL) );
    if ( !BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
            (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
            action,
            v16) )
      break;
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      this,
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
      v17);
  }
  v18 = 5;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
  return v18 != 5;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkSelfCondtion(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataVals_o *dataVals_k__BackingField; // x21
  FunctionEntity_o *funcEnt; // x22
  bool v13; // w8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleServantData_o *ServantData; // x23
  struct BattleLogicFunction_o *v16; // x8
  struct BattleData_o *data; // x24
  _BOOL4 endbattleFlg; // w25
  char v19; // w25
  char v20; // w8
  struct BattleLogicFunction_o *v21; // x8
  struct BattleData_o *v22; // x24
  bool loseBattleFlg; // w25
  struct BattleLogicFunction_o *v24; // x8
  struct BattleData_o *v25; // x24
  bool winBattleNotRelatedSurvivalStatus; // w25
  const MethodInfo *v27; // x2
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v28; // x24
  struct BattleLogicFunction_o *v29; // x8
  __int64 v30; // x1
  System_Int32_array *QuestIndividualities; // x25
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleLogicFunction_o *v34; // x8
  struct BattleData_o *v35; // x8
  System_Collections_Generic_HashSet_int__o *FuncEventExceptedHash_k__BackingField; // x0
  const MethodInfo *v37; // x3
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x3
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  _BOOL8 v43; // x0
  const MethodInfo *v44; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v45; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  int32_t Param; // w23
  const MethodInfo *v50; // x1
  bool v51; // zf
  Target_BattleTargetArgs_o *args; // x23
  struct BattleLogicFunction_o *v53; // x8
  int32_t targetId; // w26
  int32_t PTTargetId; // w0
  int32_t targetType; // w27
  int32_t taskActorType; // w28
  bool checkRevengeId; // w29
  int32_t v59; // w24
  System_Int32_array *ValsList; // x25
  bool IsIncludeIgnoreIndividuality; // w0
  struct BattleLogicFunction_ProcListInArgs_o *v62; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v63; // x2
  struct BattleLogicFunction_ProcListInArgs_o *v64; // x8
  struct BattleLogicFunction_FunctionArgument_o *v65; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v66; // x22
  struct BattleLogicFunction_o *v67; // x8
  struct BattleData_o *v68; // x8
  const MethodInfo *v69; // x2
  int v70; // w8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v71; // x21
  int v72; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v73; // x22
  const MethodInfo *v74; // x3
  int32_t actorId; // [xsp+24h] [xbp-6Ch]
  BattleData_o *bdata; // [xsp+28h] [xbp-68h]

  v4 = this;
  if ( (byte_4B18E5D & 1) == 0 )
  {
    sub_1BCA7E0(&Target_BattleTargetArgs_TypeInfo, action, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v7, v8);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BCA7E0(&Individuality_TypeInfo, v9, v10);
    byte_4B18E5D = 1;
  }
  dataVals_k__BackingField = v4->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_70;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_70;
  v13 = FuncList__Check(0, funcEnt->fields.funcType, 0LL);
  this = 0LL;
  if ( v13 )
    return (char)this;
  logic_k__BackingField = v4->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_70;
  if ( !action )
    goto LABEL_70;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_70;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0LL);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FuncList__Check(26, funcEnt->fields.funcType, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    action->fields.isSuccessTargetSelection = 1;
  v16 = v4->fields._logic_k__BackingField;
  if ( !v16 )
    goto LABEL_70;
  data = v16->fields.data;
  if ( !data )
    goto LABEL_70;
  endbattleFlg = data->fields.endbattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsEndBattle(dataVals_k__BackingField, 0LL);
  v19 = endbattleFlg;
  if ( ((unsigned __int8)this & 1) != 0
    || (v19 &= (unsigned __int8)this ^ 1,
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    v20 = 1;
  }
  else
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                               dataVals_k__BackingField,
                                                               0LL);
    v20 = (unsigned __int8)this & 1;
  }
  data->fields.endbattleFlg = v20 | v19;
  v21 = v4->fields._logic_k__BackingField;
  if ( !v21 )
    goto LABEL_70;
  v22 = v21->fields.data;
  if ( !v22 )
    goto LABEL_70;
  loseBattleFlg = v22->fields.loseBattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL);
  v22->fields.loseBattleFlg = loseBattleFlg | (unsigned __int8)this & 1;
  v24 = v4->fields._logic_k__BackingField;
  if ( !v24 )
    goto LABEL_70;
  v25 = v24->fields.data;
  if ( !v25 )
    goto LABEL_70;
  winBattleNotRelatedSurvivalStatus = v25->fields.winBattleNotRelatedSurvivalStatus;
  v25->fields.winBattleNotRelatedSurvivalStatus = winBattleNotRelatedSurvivalStatus | DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                                                        dataVals_k__BackingField,
                                                                                        0LL);
  v4->fields.questFuncFlg = 1;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FunctionEntity__getQuestTargetValues(funcEnt, 0LL);
  if ( !this )
    goto LABEL_70;
  v28 = this;
  if ( this->fields._procArg_k__BackingField )
  {
    v29 = v4->fields._logic_k__BackingField;
    if ( !v29 )
      goto LABEL_70;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v29->fields.data;
    if ( !this )
      goto LABEL_70;
    QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v30);
    if ( !Individuality__CheckIndividualities(QuestIndividualities, (System_Int32_array *)v28, 0LL) )
      v4->fields.questFuncFlg = 0;
  }
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__IsAvoidExecuteSelfFunc(
                                                             v4,
                                                             ServantData,
                                                             v27);
  procArg_k__BackingField = v4->fields._procArg_k__BackingField;
  v4->fields._IsAvoidFuncExec_k__BackingField = (unsigned __int8)this & 1;
  if ( !procArg_k__BackingField )
    goto LABEL_70;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_70;
  if ( externalArg->fields.isPassive )
  {
    v34 = v4->fields._logic_k__BackingField;
    if ( !v34 )
      goto LABEL_70;
    v35 = v34->fields.data;
    if ( !v35 )
      goto LABEL_70;
    FuncEventExceptedHash_k__BackingField = v35->fields._FuncEventExceptedHash_k__BackingField;
    if ( FuncEventExceptedHash_k__BackingField
      && FuncEventExceptedHash_k__BackingField->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           FuncEventExceptedHash_k__BackingField,
           funcEnt->fields.id,
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      goto LABEL_56;
    }
  }
  if ( !BattleActionData__IsSelectedAddTargetIndex(action, dataVals_k__BackingField, 0LL) )
    goto LABEL_56;
  v38 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
          v4,
          dataVals_k__BackingField,
          action->fields.actorId,
          v37);
  if ( !v38 )
    goto LABEL_56;
  v40 = BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyOverChargeStageRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v38,
          dataVals_k__BackingField,
          ServantData,
          v39);
  if ( !v40 )
    goto LABEL_56;
  if ( !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyBattlePointPhaseRangeCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v40,
          dataVals_k__BackingField,
          ServantData,
          v41) )
    goto LABEL_56;
  v43 = BattleLogicFunctionProcess_FunctionUnitCheck__IsStartingPositionCondition(
          v4,
          dataVals_k__BackingField,
          ServantData,
          v42);
  if ( !v43
    || !BattleLogicFunctionProcess_FunctionUnitCheck__IsFriendShipCondition(
          (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v43,
          dataVals_k__BackingField,
          ServantData,
          v44) )
  {
    goto LABEL_56;
  }
  if ( DataVals__checkActSet(dataVals_k__BackingField, 0LL) )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__getActSet(dataVals_k__BackingField, 0LL);
    v45 = v4->fields._procArg_k__BackingField;
    if ( !v45 )
      goto LABEL_70;
    if ( (_DWORD)this != v45->fields.actSetId )
    {
LABEL_56:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  if ( !DataVals__isParam(dataVals_k__BackingField, 129, 0LL)
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 129, 0, 0LL),
        v51 = Param == BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(v4, v50),
        LOBYTE(this) = 0,
        v51) )
  {
    args = (Target_BattleTargetArgs_o *)sub_1BCAA2C(Target_BattleTargetArgs_TypeInfo, v46, v47, v48);
    Target_BattleTargetArgs___ctor(args, dataVals_k__BackingField, 0LL);
    v53 = v4->fields._logic_k__BackingField;
    if ( v53 )
    {
      bdata = v53->fields.data;
      targetId = action->fields.targetId;
      actorId = action->fields.actorId;
      PTTargetId = BattleActionData__getPTTargetId(action, 0LL);
      targetType = funcEnt->fields.targetType;
      taskActorType = action->fields.taskActorType;
      checkRevengeId = action->fields.checkRevengeId;
      v59 = PTTargetId;
      ValsList = DataVals__GetValsList(dataVals_k__BackingField, 83, 0LL);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(dataVals_k__BackingField, 0LL);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Target__getTargetIds_38428440(
                                                                 bdata,
                                                                 actorId,
                                                                 targetId,
                                                                 v59,
                                                                 targetType,
                                                                 taskActorType,
                                                                 checkRevengeId,
                                                                 ValsList,
                                                                 IsIncludeIgnoreIndividuality,
                                                                 args,
                                                                 0LL);
      v62 = v4->fields._procArg_k__BackingField;
      if ( v62 )
      {
        v63 = this;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v62->fields.externalArg;
        if ( this )
        {
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))this->klass[1]._1.namespaze)(
                                                                     this,
                                                                     (unsigned int)funcEnt->fields.targetType,
                                                                     v63,
                                                                     this->klass[1]._1.byval_arg.data);
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
                this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, DataVals_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                                           this,
                                                                           dataVals_k__BackingField,
                                                                           v66,
                                                                           this->klass[1]._1.this_arg.data);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_56;
                v67 = v4->fields._logic_k__BackingField;
                if ( v67 )
                {
                  v68 = v67->fields.data;
                  if ( v68 )
                  {
                    if ( !DataVals__CheckFunctionTriggerStar(
                            dataVals_k__BackingField,
                            v68->fields.totalCriticalStars,
                            0LL)
                      && !v4->fields.isLowestStarFunction )
                    {
                      goto LABEL_56;
                    }
                    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
                                                                               v4,
                                                                               (System_Int32_array *)v66,
                                                                               v69);
                    if ( this )
                    {
                      v70 = (int)this->fields._procArg_k__BackingField;
                      v71 = this;
                      if ( v70 < 1 )
                      {
                        LOBYTE(this) = 1;
                        return (char)this;
                      }
                      v72 = 0;
                      while ( 1 )
                      {
                        if ( v72 >= (unsigned int)v70 )
                          sub_1BCAA44(this, action);
                        v73 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)*((_QWORD *)&v71->fields._dataVals_k__BackingField
                                                                                  + v72);
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                                   v4,
                                                                                   (const MethodInfo *)action);
                        if ( !v73 )
                          break;
                        BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
                          v73,
                          (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
                          action,
                          v74);
                        v70 = (int)v71->fields._procArg_k__BackingField;
                        ++v72;
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(&dword_0 + 1);
                        if ( v72 >= v70 )
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
LABEL_70:
    sub_1BCAA3C(this, action);
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
      sub_1BCAA3C(this, funcTarget);
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
    sub_1BCAA3C(0LL, method);
  return DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
}


BattleData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_1BCAA3C(this, method);
  return logic_k__BackingField->fields.data;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1BCAA3C(this, method);
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
      sub_1BCAA3C(this, method);
    }
    funcIndividuality = FunctionEntity__GetFuncIndividuality((FunctionEntity_o *)this, 0LL);
    p_funcIndividuality->klass = (PartyOrganizationUtility_c *)funcIndividuality;
    sub_1BCA784(p_funcIndividuality, (int64_t)funcIndividuality, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, method);
  return DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddLinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  if ( (byte_4B18E5A & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BCA7E0(
                                                               &BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                                               targetlist,
                                                               method);
    byte_4B18E5A = 1;
  }
  if ( !targetlist )
LABEL_19:
    sub_1BCAA3C(this, targetlist);
  max_length = targetlist->max_length;
  v6 = sub_1BCA888(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, (unsigned int)max_length);
  v4->fields._funcTargetArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)v6;
  p_funcTargetArray_k__BackingField = &v4->fields._funcTargetArray_k__BackingField;
  sub_1BCA784(
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
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BCA91C(
                                                                   this,
                                                                   funcTargetArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v29 = sub_1BCAA60(0LL);
          sub_1BCA908(v29, 0LL);
        }
      }
      if ( (unsigned int)v17 >= funcTargetArray_k__BackingField->max_length )
        goto LABEL_18;
      v26 = &funcTargetArray_k__BackingField->obj.klass + v17;
      v26[4] = (Il2CppClass *)v25;
      sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v25, v19, v20, v21, v22, v23, v24);
      v27 = *p_funcTargetArray_k__BackingField;
      if ( !*p_funcTargetArray_k__BackingField )
        goto LABEL_19;
      if ( (unsigned int)v17 >= v27->max_length || (unsigned int)v17 >= targetlist->max_length )
LABEL_18:
        sub_1BCAA44(this, targetlist);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *linkedToOtherList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18E5C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__,
      v8,
      v9);
    byte_4B18E5C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  linkedToOtherList = (System_Collections_Generic_List_object__o *)this->fields.linkedToOtherList;
  if ( !linkedToOtherList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    linkedToOtherList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    if ( !v11 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1BCAA3C(v11, v12);
    klass = v16.fields._current[2].klass;
    if ( !klass )
      sub_1BCAA3C(0LL, v12);
    if ( !DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed((DataVals_o *)klass, 0LL) )
      BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
        this,
        v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
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
        sub_1BCAA44(this, linkedToSelf);
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
    sub_1BCAA3C(this, linkedToSelf);
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
  sub_1BCA784(
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
    sub_1BCAA3C(FuncMaster, v12);
  }
  DataVals__SetType_39572912(dataVals_k__BackingField, (FunctionEntity_o *)FuncMaster, *funcIndex, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o **v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  signed int max_length; // w8
  unsigned int v8; // w24
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v9; // x21
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v11; // x22
  __int64 v12; // x1
  System_Int32_array *AddIndividualty; // x23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  _QWORD *v21; // x9
  __int64 procArg_k__BackingField_low; // x10
  BattleLogicFunction_c **v23; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v24; // x22
  __int64 v25; // x1
  System_Int32_array *LinkageTargetIndividualty; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct BattleLogicFunction_o *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  BattleLogicFunction_c **v36; // x8

  v4 = (BattleLogicFunctionProcess_FunctionUnitCheck_o **)this;
  if ( (byte_4B18E59 & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, funcUnitArray, method);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BCA7E0(
                                                               &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__,
                                                               v5,
                                                               v6);
    byte_4B18E59 = 1;
  }
  if ( !funcUnitArray )
    goto LABEL_32;
  max_length = funcUnitArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1BCAA44(this, funcUnitArray);
      this = v4[4];
      if ( !this )
        break;
      v9 = funcUnitArray->m_Items[v8];
      if ( !v9 )
        break;
      dataVals_k__BackingField = v9->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        break;
      if ( HIDWORD(this->fields._dataVals_k__BackingField) != dataVals_k__BackingField->fields.funcIndex )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetLinkageTargetIndividualty(
                                                                   (DataVals_o *)this,
                                                                   0LL);
        if ( !v9->fields._dataVals_k__BackingField )
          break;
        v11 = this;
        AddIndividualty = DataVals__GetAddIndividualty(v9->fields._dataVals_k__BackingField, 0LL);
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v12);
        if ( Individuality__IsPartialMatchArray((System_Int32_array *)v11, AddIndividualty, 0LL) )
        {
          this = v4[7];
          if ( !this )
            break;
          logic_k__BackingField = this->fields._logic_k__BackingField;
          v21 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !logic_k__BackingField )
            break;
          procArg_k__BackingField_low = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)procArg_k__BackingField_low >= LODWORD(logic_k__BackingField->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v9,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &logic_k__BackingField->klass + procArg_k__BackingField_low;
            LODWORD(this->fields._procArg_k__BackingField) = procArg_k__BackingField_low + 1;
            v23[4] = (BattleLogicFunction_c *)v9;
            sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v9, v14, v15, v16, v17, v18, v19);
          }
        }
        this = v4[4];
        if ( !this )
          break;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetAddIndividualty((DataVals_o *)this, 0LL);
        if ( !v9->fields._dataVals_k__BackingField )
          break;
        v24 = this;
        LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(v9->fields._dataVals_k__BackingField, 0LL);
        if ( !Individuality_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v25);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__IsPartialMatchArray(
                                                                   (System_Int32_array *)v24,
                                                                   LinkageTargetIndividualty,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v4[8];
          if ( !this )
            break;
          v33 = this->fields._logic_k__BackingField;
          v34 = Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__;
          ++HIDWORD(this->fields._procArg_k__BackingField);
          if ( !v33 )
            break;
          v35 = SLODWORD(this->fields._procArg_k__BackingField);
          if ( (unsigned int)v35 >= LODWORD(v33->fields.logic) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v9,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &v33->klass + v35;
            LODWORD(this->fields._procArg_k__BackingField) = v35 + 1;
            v36[4] = (BattleLogicFunction_c *)v9;
            sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v9, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      max_length = funcUnitArray->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_32:
    sub_1BCAA3C(this, funcUnitArray);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BCA784(
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(targetSvtData, *(_QWORD *)&id);
  }
  return DataVals__IsSatisfyAboveBelowCond(baseVals, 177, (int32_t)targetSvtData, id, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  BuffList_TYPE_array *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4B18E6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantStrMaster___, targetSvtData, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_8875/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/, v10, v11);
    byte_4B18E6A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_8875/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/,
                                0LL,
                                0LL);
  if ( !Instance )
    return (char)Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
  {
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                               (System_Collections_IEnumerable_o *)Instance,
                                                               (const MethodInfo_2F20EF4 *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                v14,
                                (const MethodInfo_2F4B8F8 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !targetSvtData
    || (v13 = (BuffList_TYPE_array *)Instance, (Instance = (DataManager_o *)targetSvtData->fields.buffData) == 0LL)
    || (Instance = (DataManager_o *)BattleBuffData__getBuffList_43169876(
                                      (BattleBuffData_o *)Instance,
                                      v13,
                                      0LL,
                                      0LL,
                                      0LL)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v13);
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
    BattleLogicFunctionProcess_FunctionTargetCheck__SetNoEffectByAvoidBuff(funcTarget, (const MethodInfo *)action);
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
    sub_1BCAA3C(this, action);
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
    sub_1BCAA3C(this, actBuffData);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t *p_OverwriteClassId; // x20
  __int64 v10; // x1
  ConstantStrMaster_o *Master_object; // x0
  __int64 v12; // x1
  bool result; // w0

  if ( (byte_4B18E4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantStrMaster___, action, buffEnt);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_5535/*"ENABLE_OVERWRITE_CLASS_IDS"*/, v7, v8);
    byte_4B18E4B = 1;
  }
  p_OverwriteClassId = &this->fields.OverwriteClassId;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(
          this,
          &this->fields.OverwriteClassId,
          (const MethodInfo *)buffEnt) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( !ConstantStrMaster__ExistValueArray(
          Master_object,
          (System_String_o *)StringLiteral_5535/*"ENABLE_OVERWRITE_CLASS_IDS"*/,
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
    sub_1BCAA3C(Master_object, v12);
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
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  BattleServantData_o *targetSvt; // x0
  int32_t LogicClassId; // w0
  int32_t classId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B18E4C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2953/*"BATTLE_NO_EFFECT_FUNCTION"*/, v4, v5);
    byte_4B18E4C = 1;
  }
  classId = 0;
  if ( !BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(this, &classId, v2) )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v6);
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1BCAA3C(0LL, v6);
  LogicClassId = BattleServantData__GetLogicClassId(targetSvt, 0LL);
  if ( LogicClassId != classId )
    return BattleLogicFunctionProcess_FunctionTargetCheck__GetFixNoEffectText(
             (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
             v6);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  return LocalizationManager__Get((System_String_o *)StringLiteral_2953/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_OverwriteBattleClassCheck__TryGetOverwriteClassId(
        BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *this,
        int32_t *classId,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x21
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v12; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleServantData_o *ServantData; // x0
  __int64 v15; // x1
  int32_t Value; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B18E4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, classId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)sub_1BCA7E0(
                                                                       &Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__,
                                                                       v7,
                                                                       v8);
    byte_4B18E4D = 1;
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
                                                                     187,
                                                                     0,
                                                                     0LL);
  if ( (_DWORD)this == 1 )
  {
    v12 = v4->fields._funcUnit_k__BackingField;
    if ( !v12 )
      goto LABEL_18;
    logic_k__BackingField = v12->fields._logic_k__BackingField;
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  this = (BattleLogicFunctionProcess_OverwriteBattleClassCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
LABEL_18:
    sub_1BCAA3C(this, classId);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           *classId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
    sub_1BCAA3C(0LL, actBuffData);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_buffConvertEntity,
    (int64_t)buffConvertEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !buffConvertEntity )
    sub_1BCAA3C(v11, v12);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  Il2CppObject *v20; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v21; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  __int64 v25; // x1
  BattleBuffData_BuffData_o *current; // x22
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v31; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct FunctionEntity_o *funcEnt; // x8
  _BOOL8 IsTargetLimit; // x0
  __int64 v35; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v36; // x8
  DataVals_o *v37; // x0
  struct FunctionEntity_o *v38; // x8
  struct System_Int32_array *vals; // x8
  Il2CppObject *v40; // x24
  int32_t v41; // w23
  System_Int32_array *ParamArray; // x0
  __int64 v43; // x1
  __int64 v44; // x1
  BattleServantData_o *targetSvt; // x0
  BattleBuffData_o *BuffData; // x0
  __int64 v47; // x1
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4B18E45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffConvertMaster___, *(_QWORD *)&actorId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v15, v16);
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)sub_1BCA7E0(
                                                                        &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                        v17,
                                                                        v18);
    byte_4B18E45 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  entity = 0LL;
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_40;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_40;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 22, 0LL);
  v20 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v21 = v4->fields._funcUnit_k__BackingField;
    if ( !v21 )
      goto LABEL_40;
    procArg_k__BackingField = v21->fields._procArg_k__BackingField;
    if ( !procArg_k__BackingField )
      goto LABEL_40;
    externalArg = procArg_k__BackingField->fields.externalArg;
    if ( !externalArg )
      goto LABEL_40;
    if ( externalArg->fields.isPassive )
      return 0LL;
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v21->fields._dataVals_k__BackingField;
    if ( !this )
LABEL_40:
      sub_1BCAA3C(this, *(_QWORD *)&actorId);
    v20 = 0LL;
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
                                                                            (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
        if ( this )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v49,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
          v50 = v49;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v50,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
          {
            current = (BattleBuffData_BuffData_o *)v50.fields._current;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffConvertMaster___);
            if ( !current )
              sub_1BCAA3C(Master_object, v28);
            if ( !Master_object )
              sub_1BCAA3C(0LL, v28);
            v29 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    current->fields.buffId,
                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
            if ( v29 )
            {
              v31 = v4->fields._funcUnit_k__BackingField;
              if ( !v31 )
                sub_1BCAA3C(v29, v30);
              dataVals_k__BackingField = v31->fields._dataVals_k__BackingField;
              if ( !dataVals_k__BackingField )
                sub_1BCAA3C(v29, v30);
              funcEnt = dataVals_k__BackingField->fields.funcEnt;
              if ( !funcEnt )
                sub_1BCAA3C(v29, v30);
              if ( !entity )
                sub_1BCAA3C(0LL, v30);
              IsTargetLimit = BuffConvertEntity__IsTargetLimit(
                                (BuffConvertEntity_o *)entity,
                                funcEnt->fields.targetType,
                                v4->fields._targetId_k__BackingField,
                                actorId,
                                0LL);
              if ( IsTargetLimit )
              {
                v36 = v4->fields._funcUnit_k__BackingField;
                if ( !v36 )
                  sub_1BCAA3C(IsTargetLimit, v35);
                v37 = v36->fields._dataVals_k__BackingField;
                if ( !v37 )
                  sub_1BCAA3C(0LL, v35);
                v38 = v37->fields.funcEnt;
                if ( !v38 )
                  sub_1BCAA3C(v37, v35);
                vals = v38->fields.vals;
                if ( !vals )
                  sub_1BCAA3C(v37, v35);
                if ( !vals->max_length )
                  sub_1BCAA44(v37, v35);
                v40 = entity;
                v41 = vals->m_Items[1];
                ParamArray = DataVals__GetParamArray(v37, 111, 0LL);
                if ( !v40 )
                  sub_1BCAA3C(ParamArray, v43);
                if ( BuffConvertEntity__TryGetConvertBuffIndex(
                       (BuffConvertEntity_o *)v40,
                       &v4->fields.convertBuffIndex,
                       v41,
                       ParamArray,
                       0LL) )
                {
                  targetSvt = v4->fields.targetSvt;
                  if ( !targetSvt )
                    sub_1BCAA3C(0LL, v44);
                  BuffData = BattleServantData__get_BuffData(targetSvt, 0LL);
                  if ( !BuffData )
                    sub_1BCAA3C(0LL, v47);
                  if ( BattleBuffData__checkBuffSuccessful(BuffData, current, 1, 0LL) )
                  {
                    v20 = entity;
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &v50,
                      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                    return (BuffConvertEntity_o *)v20;
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v50,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
          return 0LL;
        }
      }
      goto LABEL_40;
    }
  }
  return (BuffConvertEntity_o *)v20;
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
    sub_1BCAA3C(data, v8);
  }
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  this->fields.targetSvt = ServantData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetSvt, (int64_t)ServantData, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4B18E46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, buffEnt, targetSvt);
    byte_4B18E46 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                 AttachTargetList_k__BackingField,
                                                                                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1BCAA44(AttachTargetList_k__BackingField, buffEnt);
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
    sub_1BCAA3C(AttachTargetList_k__BackingField, buffEnt);
  }
LABEL_14:
  if ( (byte_4B18E3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, buffEnt, v8);
    byte_4B18E3F = 1;
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
            sub_1BCA784(
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
                  sub_1BCA784(
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
                    sub_1BCA784(
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
      sub_1BCAA3C(BuffEntity, convertBuffId);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleServantData_o *targetSvt; // x0
  BattleSkillInfoData_array *ActiveSkillInfos; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_c *v16; // x8
  System_Object_array *v17; // x20
  System_Func_object__bool__o *_9__0_0; // x21
  Il2CppObject *v19; // x22
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  bool v27; // w0

  if ( (byte_4B18E47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleSkillInfoData___, action, buffEnt);
    sub_1BCA7E0(&System_Func_BattleSkillInfoData__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__, v7, v8);
    sub_1BCA7E0(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v9, v10);
    byte_4B18E47 = 1;
  }
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_1BCAA3C(0LL, action);
  ActiveSkillInfos = BattleServantData__getActiveSkillInfos(targetSvt, 0LL);
  v16 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  v17 = (System_Object_array *)ActiveSkillInfos;
  if ( !BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v13);
    v16 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__bool__o *)v16->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v13);
      v16 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__0_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleSkillInfoData__bool__TypeInfo, v13, v14, v15);
    System_Func_object__bool____ctor(
      _9__0_0,
      v19,
      Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      0LL);
    static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = BasicHelper__Any_object__49274176(
          v17,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_BattleSkillInfoData___);
  if ( !v27 )
    this->fields.invalidType = 1;
  return v27;
}


void __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18E48 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v1, v2);
    byte_4B18E48 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(targetSvt, action);
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
        sub_1BCAA44(targetSvt, action);
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
        sub_1BCA784(
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
    sub_1BCAA3C(this, actBuffData);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B18E53 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)sub_1BCA7E0(
                                                                                &BattleBuffData_FieldChangeData_TypeInfo,
                                                                                actBuffData,
                                                                                buffData);
    byte_4B18E53 = 1;
  }
  funcUnit_k__BackingField = v8->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleBuffData_FieldChangeData_o *)sub_1BCAA2C(
                                              BattleBuffData_FieldChangeData_TypeInfo,
                                              actBuffData,
                                              buffData,
                                              fieldFlag);
  BattleBuffData_FieldChangeData___ctor_43377236(v11, dataVals_k__BackingField, 0LL);
  if ( !buffData
    || (buffData->fields.fieldChangeData = v11,
        sub_1BCA784(
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
    sub_1BCAA3C(this, actBuffData);
  }
  fieldChangeData->fields.buffUniqueId = buffData->fields.addOrder;
}


void __fastcall BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)this,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_FunctionTargetCheck_o *__fastcall BattleLogicFunctionProcess_ToFieldCommonFunctionProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *v4; // x19

  if ( (byte_4B18E6B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo, *(_QWORD *)&targetId, funcUnitCheck);
    byte_4B18E6B = 1;
  }
  v4 = (BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *)sub_1BCAA2C(
                                                                    BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo,
                                                                    *(_QWORD *)&targetId,
                                                                    funcUnitCheck,
                                                                    method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  BattleActionData_FieldBuffData_o *v4; // x19

  if ( (byte_4B18E54 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_FieldBuffData_TypeInfo, method, v2);
    byte_4B18E54 = 1;
  }
  v4 = (BattleActionData_FieldBuffData_o *)sub_1BCAA2C(BattleActionData_FieldBuffData_TypeInfo, method, v2, v3);
  BattleActionData_FieldBuffData___ctor(v4, 0LL);
  return (BattleActionData_BuffData_o *)v4;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B18E55 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method, v2);
    byte_4B18E55 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method, v2, v3);
  System_Object___ctor(v4, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v4;
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
        sub_1BCA784(
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
    sub_1BCAA3C(this, actBuffData);
  }
  procArg_k__BackingField->fields.updateField = 1;
}


void __fastcall BattleLogicFunctionProcess_TransformServantProcess___ctor(
        BattleLogicFunctionProcess_TransformServantProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(
    (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)this,
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
    sub_1BCAA3C(data, v9);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)funcTarget, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, buffIndiv);
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
  sub_1BCA784((PartyOrganizationUtility_o *)text, 0LL, (int64_t)method, v4, v5, v6, v7, v8);
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
    sub_1BCAA3C(target, isActiveOnly);
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
  sub_1BCA784(
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
  __int64 v2; // x2

  if ( (byte_4B18E56 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B18E56 = 1;
  }
  return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
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
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784(
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
    sub_1BCAA3C(target, indiv);
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
    sub_1BCAA3C(0LL, v4);
  FieldEnvData_k__BackingField = Data->fields._FieldEnvData_k__BackingField;
  this->fields.target = FieldEnvData_k__BackingField;
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, buffIndiv);
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
    sub_1BCAA3C(0LL, buffIndiv);
  return BattleServantData__CheckDisableForciblyAddStateBuffAvoid(target, buffIndiv, opSvt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(this, isActiveOnly);
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
    sub_1BCAA3C(0LL, buffIndiv);
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
    sub_1BCAA3C(BaseVals, v6);
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
    sub_1BCAA3C(0LL, userCommandCodeId);
  return BattleServantData__GetCommandCardIndex(target, userCommandCodeId, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetServant__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(this, buffIndiv);
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
    sub_1BCAA3C(0LL, indiv);
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
    sub_1BCAA3C(Data, v4);
  ServantData = BattleData__getServantData(Data, funcTarget->fields._targetId_k__BackingField, 0LL);
  this->fields.target = ServantData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.target, (int64_t)ServantData, v7, v8, v9, v10, v11, v12);
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
  if ( DataVals__TryGetParam((DataVals_o *)BaseVals, 144, &param, 0LL) )
  {
    BaseVals = this->fields.target;
    if ( BaseVals )
    {
      DefeatPoint = BattleServantData__getDefeatPoint(BaseVals, 0LL);
      return (DefeatPoint < 1) ^ (param > 0);
    }
LABEL_7:
    sub_1BCAA3C(BaseVals, v4);
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
  if ( !DataVals__TryGetParam(BaseVals, 141, &param, 0LL) )
  {
    v6 = 1;
    return v6 & 1;
  }
  BaseVals = (DataVals_o *)this->fields.target;
  if ( !BaseVals )
LABEL_7:
    sub_1BCAA3C(BaseVals, v4);
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
    sub_1BCAA3C(0LL, method);
  return BattleServantData__get_BuffData(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, method);
  return BattleServantData__checkPlayer(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BCAA3C(0LL, method);
  return BattleServantData__isGuts(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(Data, v4);
  return (*(__int64 (__fastcall **)(BattleData_o *, struct BattleServantData_o *, _QWORD))&Data->klass[1]._2.initializationExceptionGCHandle)(
           Data,
           this->fields.target,
           *(_QWORD *)&Data->klass[1]._2.cctor_finished);
}