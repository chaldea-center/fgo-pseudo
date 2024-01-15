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
  __int64 v4; // x4
  Il2CppObject *v5; // x19

  if ( (byte_40F9DAC & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo, *(_QWORD *)&targetId);
    byte_40F9DAC = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(
                         BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo,
                         *(_QWORD *)&targetId,
                         funcUnitCheck,
                         method,
                         v4);
  System_Object___ctor(v5, 0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v5;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCommonCondition(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x26
  int32_t targetId_k__BackingField; // w8
  DataVals_o *dataVals_k__BackingField; // x20
  FunctionEntity_o *funcEnt; // x23
  __int64 v18; // x0
  __int64 v19; // x22
  System_String_o *v20; // x25
  System_String_o *v21; // x0
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x22
  int32_t funcIndex; // w25
  char v24; // w0
  struct System_Int32_array *tvals; // x8
  __int64 v26; // x24
  _BOOL4 v27; // w25
  bool isParam; // w0
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x25
  System_Int32_array *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  int v35; // w11
  unsigned __int64 i; // x8
  __int64 v37; // x9
  __int64 j; // x8
  unsigned int v39; // w10
  int v40; // w9
  char *v41; // x10
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8
  struct BattleLogicFunction_o *v44; // x8
  BattleData_o *v45; // x0
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x2
  bool result; // w0
  int32_t uniqueId[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F9DAB & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, action);
    sub_B16FFC(&FuncList_TYPE_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_93/*"  => targetId : "*/, v8);
    sub_B16FFC(&StringLiteral_92/*"  <= no Target"*/, v9);
    sub_B16FFC(&StringLiteral_213/*" funcEnt.funcType : "*/, v10);
    sub_B16FFC(&StringLiteral_91/*"  <= no Individuality"*/, v11);
    sub_B16FFC(&StringLiteral_90/*"  <= is No applyTarget "*/, v12);
    sub_B16FFC(&StringLiteral_89/*"  <= is Dead"*/, v13);
    byte_40F9DAB = 1;
  }
  *(_QWORD *)uniqueId = 0LL;
  if ( !funcTarget )
    goto LABEL_61;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcTarget->fields.invalidType = 0;
  uniqueId[1] = targetId_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_61;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_61;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  uniqueId[0] = dataVals_k__BackingField->fields.funcType;
  v18 = j_il2cpp_value_box_0(FuncList_TYPE_TypeInfo, uniqueId);
  if ( !v18 )
    goto LABEL_61;
  v19 = v18;
  v20 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 360LL))(
                             v18,
                             *(_QWORD *)(*(_QWORD *)v18 + 368LL));
  uniqueId[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v19);
  System_String__Concat_43743732((System_String_o *)StringLiteral_213/*" funcEnt.funcType : "*/, v20, 0LL);
  v21 = System_Int32__ToString((int32_t)&uniqueId[1], 0LL);
  System_String__Concat_43743732((System_String_o *)StringLiteral_93/*"  => targetId : "*/, v21, 0LL);
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  if ( !WrapTarget_k__BackingField )
    goto LABEL_61;
  if ( (((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.namespaze)(
          funcTarget->fields._WrapTarget_k__BackingField,
          WrapTarget_k__BackingField->klass[1]._1.byval_arg.data) & 1) == 0 )
  {
    if ( ((*(__int64 (__fastcall **)(struct BattleLogicFunctionProcess_WrapTargetData_o *, void *))&WrapTarget_k__BackingField->klass[1]._1.byval_arg.bits)(
            WrapTarget_k__BackingField,
            WrapTarget_k__BackingField->klass[1]._1.this_arg.data) & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_61;
      if ( FunctionEntity__isTargetEnemy(funcEnt, 0LL) )
        goto LABEL_21;
    }
    if ( ((*(__int64 (__fastcall **)(struct BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass *))&WrapTarget_k__BackingField->klass[1]._1.this_arg.bits)(
            WrapTarget_k__BackingField,
            WrapTarget_k__BackingField->klass[1]._1.element_class) & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_61;
      if ( FunctionEntity__isTargetPlayer(funcEnt, 0LL) )
        goto LABEL_21;
    }
    if ( (((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass *))WrapTarget_k__BackingField->klass[1]._1.castClass)(
            WrapTarget_k__BackingField,
            WrapTarget_k__BackingField->klass[1]._1.declaringType) & 1) != 0 )
    {
LABEL_21:
      if ( DataVals__isCheckDead(dataVals_k__BackingField, 0LL)
        || dataVals_k__BackingField->fields.flgBoost
        || (((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.parent)(
              WrapTarget_k__BackingField,
              WrapTarget_k__BackingField->klass[1]._1.generic_class) & 1) != 0
        || (((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.typeMetadataHandle)(
              WrapTarget_k__BackingField,
              WrapTarget_k__BackingField->klass[1]._1.interopData) & 1) != 0
        || (((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.klass)(
              WrapTarget_k__BackingField,
              WrapTarget_k__BackingField->klass[1]._1.fields) & 1) != 0
        || (((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.events)(
              WrapTarget_k__BackingField,
              WrapTarget_k__BackingField->klass[1]._1.properties) & 1) != 0 )
      {
        goto LABEL_64;
      }
      if ( !funcEnt )
        goto LABEL_61;
      if ( FuncList__Check(43, funcEnt->fields.funcType, 0LL) || FuncList__Check(45, funcEnt->fields.funcType, 0LL) )
      {
LABEL_64:
        if ( !action )
          goto LABEL_61;
        action->fields.isSuccessTargetSelection = 1;
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        v24 = (*(__int64 (__fastcall **)(struct BattleLogicFunctionProcess_WrapTargetData_o *, void *))&WrapTarget_k__BackingField->klass[1]._1.byval_arg.bits)(
                WrapTarget_k__BackingField,
                WrapTarget_k__BackingField->klass[1]._1.this_arg.data);
        BattleActionData__setFuncTargetPlayerType(action, funcIndex, v24 & 1, 0LL);
        if ( !funcEnt )
          goto LABEL_61;
        tvals = funcEnt->fields.tvals;
        if ( !tvals )
          goto LABEL_61;
        if ( *(_QWORD *)&tvals->max_length )
        {
          v26 = ((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass **))WrapTarget_k__BackingField->klass[1]._1.methods)(
                  WrapTarget_k__BackingField,
                  WrapTarget_k__BackingField->klass[1]._1.nestedTypes);
          v27 = DataVals__GetParam(dataVals_k__BackingField, 62, 0, 0LL) < 1;
          isParam = DataVals__isParam(dataVals_k__BackingField, 140, 0LL);
          v29 = ((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, _BOOL4, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))WrapTarget_k__BackingField->klass[1]._1.implementedInterfaces)(
                  WrapTarget_k__BackingField,
                  v27,
                  0LL,
                  isParam,
                  WrapTarget_k__BackingField->klass[1]._1.interfaceOffsets);
          if ( !v26 )
            goto LABEL_61;
          v31 = v29;
          if ( !v29 )
            goto LABEL_61;
          v32 = (System_Int32_array *)sub_B17014(
                                        int___TypeInfo,
                                        (unsigned int)(*(_DWORD *)(v29 + 24) + *(_DWORD *)(v26 + 24)),
                                        v30);
          v35 = *(_QWORD *)(v26 + 24);
          if ( v35 < 1 )
          {
            if ( !v32 )
              goto LABEL_61;
          }
          else
          {
            for ( i = 0LL; (__int64)i < v35; ++i )
            {
              if ( i >= (unsigned int)v35 )
                goto LABEL_60;
              if ( !v32 )
                goto LABEL_61;
              if ( i >= v32->max_length )
              {
LABEL_60:
                sub_B17100(v32, v33, v34);
                sub_B170A0();
              }
              v32->m_Items[i + 1] = *(_DWORD *)(v26 + 32 + 4 * i);
              v35 = *(_DWORD *)(v26 + 24);
            }
          }
          v37 = *(_QWORD *)&v32->max_length;
          for ( j = v35; j < (int)v37; ++j )
          {
            v39 = j - *(_DWORD *)(v26 + 24);
            if ( v39 >= *(_DWORD *)(v31 + 24) || (unsigned int)j >= (unsigned int)v37 )
              goto LABEL_60;
            v40 = *(_DWORD *)(v31 + 4LL * (int)v39 + 32);
            v41 = (char *)v32 + 4 * j;
            *((_DWORD *)v41 + 8) = v40;
            v37 = *(_QWORD *)&v32->max_length;
          }
          if ( !Individuality__CheckSignedIndividualities(v32, funcEnt->fields.tvals, 0LL) )
            goto LABEL_58;
        }
        if ( funcUnit_k__BackingField->fields.questFuncFlg )
        {
          if ( !funcUnit_k__BackingField->fields.isLowestStarFunction )
            goto LABEL_50;
          logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
          if ( !logic_k__BackingField )
            goto LABEL_61;
          data = logic_k__BackingField->fields.data;
          if ( !data )
            goto LABEL_61;
          if ( DataVals__CheckFunctionTriggerStar(dataVals_k__BackingField, data->fields.totalCriticalStars, 0LL) )
          {
LABEL_50:
            v44 = this->fields._logic_k__BackingField;
            if ( v44 )
            {
              v45 = v44->fields.data;
              if ( v45 )
              {
                ServantData = BattleData__getServantData(v45, uniqueId[1], 0LL);
                if ( BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
                       (BattleLogicFunctionProcess_FunctionUnitCheck_o *)ServantData,
                       dataVals_k__BackingField,
                       ServantData,
                       v47)
                  && ((*(__int64 (__fastcall **)(struct BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))&WrapTarget_k__BackingField->klass[1]._2.naturalAligment)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass[1].vtable._0_Equals.methodPtr) & 1) != 0
                  && (((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass[1].vtable._0_Equals.method)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass[1].vtable._1_Finalize.methodPtr) & 1) != 0 )
                {
                  return 1;
                }
                BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v48);
                return 0;
              }
            }
LABEL_61:
            sub_B170D4();
          }
LABEL_58:
          result = 0;
          funcTarget->fields.invalidType = 1;
          return result;
        }
        if ( DataVals__isShowQuestNoEffect(dataVals_k__BackingField, 0LL) )
          goto LABEL_58;
      }
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._logic_k__BackingField = logic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)logic,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__set_logic(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleLogicFunction_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._logic_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x9
  BattleData_o *data; // x0
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x23
  BattleServantData_o *ServantData; // x0
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x25
  FunctionEntity_o *funcEnt; // x22
  BattleServantData_o *v30; // x26
  struct System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x8
  BattleLogicFunction_o *v32; // x0
  BuffEntity_o *BuffEntity; // x0
  BuffEntity_o *v34; // x24
  __int64 v35; // x0
  __int64 v36; // x22
  System_String_o *v37; // x28
  System_Int32_array *vals; // x22
  System_Int32_array *ParamArray; // x0
  System_Int32_array *v40; // x0
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  System_Int32_array *v42; // x28
  BattleLogicFunction_o *v43; // x0
  bool isDisabledBuff; // w22
  const MethodInfo *v45; // x4
  char v46; // w0
  BattleLogicFunction_o *v47; // x0
  const MethodInfo *v48; // x2
  bool result; // w0
  int32_t v50; // w8
  struct BattleLogicFunction_o *v51; // x8
  const MethodInfo *v52; // x3
  int32_t Param; // w27
  int32_t Next; // w0
  int32_t v55; // w27
  int v56; // w27
  float v57; // s0
  int32_t v58; // w0
  bool isParam; // w0
  float v60; // s0
  System_String_o *v61; // x0
  System_String_o *v62; // x22
  System_String_o *v63; // x0
  int32_t v64; // w22
  System_Int32_array *SameBuffLimitTargetIndividuality; // x0
  __int64 v66; // x22
  System_String_o *v67; // x0
  const MethodInfo *v68; // x3
  _BOOL8 v69; // x0
  const MethodInfo *v70; // x4
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int32_t Value; // w0
  __int64 v78; // x2
  System_Int32_array *v79; // x22
  int32_t v80; // w21
  System_Int32_array *v81; // x0
  __int64 v82; // x2
  struct System_String_o *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_o *v90; // x0
  int32_t v91; // [xsp+0h] [xbp-70h]
  int32_t targetId; // [xsp+4h] [xbp-6Ch]
  MethodInfo methoda; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F9DAE & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, action);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&BuffList_TYPE_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_12318/*"STATUS_UP_BUFF"*/, v10);
    sub_B16FFC(&StringLiteral_19836/*"is same Group "*/, v11);
    sub_B16FFC(&StringLiteral_19835/*"is rate over "*/, v12);
    sub_B16FFC(&StringLiteral_2436/*"BATTLE_GUARD_FUNCTION"*/, v13);
    sub_B16FFC(&StringLiteral_19837/*"is same Limit "*/, v14);
    sub_B16FFC(&StringLiteral_17330/*"check--Group( "*/, v15);
    sub_B16FFC(&StringLiteral_186/*" buff : "*/, v16);
    sub_B16FFC(&StringLiteral_181/*" avoid buff "*/, v17);
    sub_B16FFC(&StringLiteral_133/*" < "*/, v18);
    sub_B16FFC(&StringLiteral_17331/*"check--Rate( "*/, v19);
    sub_B16FFC(&StringLiteral_17329/*"check-- SameBuffLimit"*/, v20);
    sub_B16FFC(&StringLiteral_17866/*"defRate"*/, v21);
    byte_40F9DAE = 1;
  }
  memset(&methoda, 0, 24);
  if ( !funcTarget )
    goto LABEL_74;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_74;
  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_74;
  if ( !action )
    goto LABEL_74;
  data = logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_74;
  targetId = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  ServantData = BattleData__getServantData(data, action->fields.actorId, 0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_74;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v30 = ServantData;
  ((void (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))funcTarget->klass->vtable._14_InitPrevCheckCondition.method)(
    funcTarget,
    action,
    WrapTarget_k__BackingField,
    funcTarget->klass->vtable._15_GetAttachTargetArray.methodPtr);
  if ( (DataVals__GetCardIndex(dataVals_k__BackingField, 0LL) & 0x80000000) == 0
    || (DataVals__GetCardIndividuality(dataVals_k__BackingField, 0LL) & 0x80000000) == 0 )
  {
    CardIdsIndexList_k__BackingField = funcTarget->fields._CardIdsIndexList_k__BackingField;
    if ( !CardIdsIndexList_k__BackingField )
      goto LABEL_74;
    if ( CardIdsIndexList_k__BackingField->fields._size <= 0 )
    {
LABEL_28:
      result = 0;
      v50 = 1;
LABEL_29:
      funcTarget->fields.invalidType = v50;
      return result;
    }
  }
  v32 = this->fields._logic_k__BackingField;
  if ( !v32 )
    goto LABEL_74;
  BuffEntity = BattleLogicFunction__GetBuffEntity(v32, funcEnt, 0LL);
  if ( !BuffEntity )
    goto LABEL_74;
  v34 = BuffEntity;
  HIDWORD(methoda.methodPointer) = BuffEntity->fields.id;
  v35 = j_il2cpp_value_box_0(BuffList_TYPE_TypeInfo, (char *)&methoda.methodPointer + 4);
  if ( !v35 )
    goto LABEL_74;
  v36 = v35;
  v37 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 360LL))(
                             v35,
                             *(_QWORD *)(*(_QWORD *)v35 + 368LL));
  HIDWORD(methoda.methodPointer) = *(_DWORD *)j_il2cpp_object_unbox_0(v36);
  System_String__Concat_43743732((System_String_o *)StringLiteral_186/*" buff : "*/, v37, 0LL);
  vals = v34->fields.vals;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 112, 0LL);
  v40 = CommonFunction__JoinIndiv(vals, ParamArray, 0LL);
  if ( !procArg_k__BackingField
    || (externalArg = procArg_k__BackingField->fields.externalArg) == 0LL
    || (v42 = v40, (v43 = this->fields._logic_k__BackingField) == 0LL) )
  {
LABEL_74:
    sub_B170D4();
  }
  isDisabledBuff = BattleLogicFunction__isDisabledBuff(
                     v43,
                     externalArg->fields.isPassive,
                     dataVals_k__BackingField,
                     0LL);
  if ( !isDisabledBuff )
  {
    v47 = this->fields._logic_k__BackingField;
    if ( !v47 )
      goto LABEL_74;
    if ( BattleLogicFunction__isFailDependentLastResult(
           v47,
           procArg_k__BackingField,
           targetId,
           dataVals_k__BackingField,
           0LL) )
    {
      goto LABEL_39;
    }
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    v46 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, System_Int32_array *, BattleServantData_o *, Il2CppRGCTXData *))WrapTarget_k__BackingField->klass[1].static_fields)(
            WrapTarget_k__BackingField,
            v42,
            v30,
            WrapTarget_k__BackingField->klass[1].rgctx_data);
    goto LABEL_27;
  }
  if ( DataVals__IsForciblyAddState(dataVals_k__BackingField, 0LL) )
  {
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    v46 = (*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, System_Int32_array *, BattleServantData_o *, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.field_count)(
            WrapTarget_k__BackingField,
            v42,
            v30,
            *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.interfaces_count);
LABEL_27:
    if ( (v46 & 1) != 0 )
      goto LABEL_28;
  }
  v51 = this->fields._logic_k__BackingField;
  if ( !v51 )
    goto LABEL_74;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField,
          v51->fields.data,
          v45) )
    goto LABEL_39;
  Param = DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
  if ( (Param & 0x80000000) == 0 )
  {
    v91 = Param;
    goto LABEL_36;
  }
  if ( !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField->fields.funcIndex,
          v52) )
  {
LABEL_39:
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      dataVals_k__BackingField,
      v48);
    return 0;
  }
  v91 = BattleUtility__Abs_23374496(Param, 0LL);
LABEL_36:
  methoda.name = 0LL;
  Next = BattleRandom__getNext(1000, 0LL);
  HIDWORD(methoda.invoker_method) = Next;
  if ( isDisabledBuff )
  {
    LODWORD(methoda.invoker_method) = 1000;
    if ( !DataVals__isParam(dataVals_k__BackingField, 113, 0LL) )
    {
      v55 = v91;
      LODWORD(methoda.invoker_method) = v91;
      goto LABEL_49;
    }
  }
  else
  {
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    v56 = Next;
    v57 = ((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, System_Int32_array *, BattleServantData_o *, const char **, void *))WrapTarget_k__BackingField->klass[1]._2.typeHierarchy)(
            WrapTarget_k__BackingField,
            v42,
            v30,
            &methoda.name,
            WrapTarget_k__BackingField->klass[1]._2.unity_user_data);
    v58 = BattleUtility__FloorToInt((float)(v57 * 1000.0) + (float)v56, 0LL);
    LODWORD(methoda.invoker_method) = 1000;
    HIDWORD(methoda.invoker_method) = v58;
  }
  v55 = v91;
  if ( v30 )
  {
    isParam = DataVals__isParam(dataVals_k__BackingField, 113, 0LL);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    v60 = (float)((*(float (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, System_Int32_array *, BattleServantData_o *, const char **, bool, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.thread_static_fields_offset)(
                    WrapTarget_k__BackingField,
                    v42,
                    v30,
                    &methoda.name,
                    isParam,
                    *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.token)
                * 1000.0)
        + (float)v91;
  }
  else
  {
    v60 = (float)v91;
  }
  LODWORD(methoda.invoker_method) = BattleUtility__FloorToInt(v60, 0LL);
LABEL_49:
  *(float *)&methoda.methodPointer = (float)DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
  v61 = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
  System_String__Concat_43743732((System_String_o *)StringLiteral_17866/*"defRate"*/, v61, 0LL);
  v62 = System_Int32__ToString((int32_t)&methoda.invoker_method + 4, 0LL);
  v63 = System_Int32__ToString((int32_t)&methoda.invoker_method, 0LL);
  System_String__Concat_43747144(
    (System_String_o *)StringLiteral_17331/*"check--Rate( "*/,
    v62,
    (System_String_o *)StringLiteral_133/*" < "*/,
    v63,
    0LL);
  if ( DataVals__isSameBuffLimit(dataVals_k__BackingField, 0LL) )
  {
    v64 = DataVals__GetParam(dataVals_k__BackingField, 40, 0, 0LL);
    SameBuffLimitTargetIndividuality = DataVals__GetSameBuffLimitTargetIndividuality(dataVals_k__BackingField, 0LL);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    if ( (*(int (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, System_Int32_array *, __int64, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.initializationExceptionGCHandle)(
           WrapTarget_k__BackingField,
           SameBuffLimitTargetIndividuality,
           1LL,
           *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.cctor_finished) >= v64 )
    {
      result = 0;
      funcTarget->fields.invalidType = 1;
      return result;
    }
  }
  v66 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._11_GetConvertBuffEntity.method)(
          funcTarget,
          (unsigned int)action->fields.actorId,
          funcTarget->klass->vtable._12_CheckConvertBuffData.methodPtr);
  v67 = System_Int32__ToString((int)v34 + 72, 0LL);
  System_String__Concat_43743732((System_String_o *)StringLiteral_17330/*"check--Group( "*/, v67, 0LL);
  if ( !v66 )
  {
    v69 = BuffEntity__isCheckGroup(v34, 0LL);
    if ( v69
      && BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
           (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v69,
           funcTarget,
           v34,
           WrapTarget_k__BackingField,
           v70) )
    {
      goto LABEL_28;
    }
  }
  if ( (v55 & 0x80000000) != 0
    && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField->fields.funcIndex,
          v68) )
  {
    LODWORD(methoda.invoker_method) = -1000;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BuffEntity_o *, void *))funcTarget->klass->vtable._16_CheckBuffCondtion.method)(
          funcTarget,
          action,
          v34,
          funcTarget->klass[1]._1.image) & 1) == 0 )
    return 0;
  if ( SHIDWORD(methoda.invoker_method) >= SLODWORD(methoda.invoker_method) )
  {
    funcTarget->fields.invalidText = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&funcTarget->fields.invalidText, 0LL, v71, v72, v73, v74, v75, v76);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_12318/*"STATUS_UP_BUFF"*/, 0LL);
    if ( SHIDWORD(methoda.invoker_method) < 1000 )
    {
LABEL_72:
      v90 = System_Int32__ToString((int32_t)&methoda.invoker_method, 0LL);
      System_String__Concat_43743732((System_String_o *)StringLiteral_19835/*"is rate over "*/, v90, 0LL);
      result = 0;
      v50 = 2;
      goto LABEL_29;
    }
    v79 = v34->fields.vals;
    v80 = Value;
    v81 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v78);
    if ( v81 )
    {
      if ( !v81->max_length )
      {
        sub_B17100(v81, v81, v82);
        sub_B170A0();
      }
      v81->m_Items[1] = v80;
      if ( !Individuality__CheckIndividualities(v79, v81, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_2436/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
        funcTarget->fields.invalidText = v83;
        sub_B16F98(
          (BattleServantConfConponent_o *)&funcTarget->fields.invalidText,
          (System_Int32_array **)v83,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89);
      }
      goto LABEL_72;
    }
    goto LABEL_74;
  }
  if ( v66
    && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._12_CheckConvertBuffData.method)(
          funcTarget,
          v66,
          funcTarget->klass->vtable._13_GetFixBuffEntity.methodPtr) & 1) == 0 )
  {
    result = 0;
    v50 = 3;
    goto LABEL_29;
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
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0
  System_Int32_array *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  System_Int32_array *v13; // x22
  unsigned __int64 v14; // x24
  int32_t v15; // w23
  BattleBuffData_o *v16; // x0
  struct System_Collections_Generic_List_int__o *v17; // x8

  if ( (byte_40F9DAF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, funcTarget);
    byte_40F9DAF = 1;
  }
  if ( !funcTarget )
    goto LABEL_20;
  AttachTargetList_k__BackingField = funcTarget->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_20;
  v9 = System_Collections_Generic_List_int___ToArray(
         AttachTargetList_k__BackingField,
         (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v9 )
    goto LABEL_20;
  v12 = *(_QWORD *)&v9->max_length;
  v13 = v9;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
      {
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      if ( !wrapTarget )
        break;
      v15 = v13->m_Items[v14 + 1];
      v16 = (BattleBuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const char *))wrapTarget->klass[1]._1.gc_desc)(
                                  wrapTarget,
                                  wrapTarget->klass[1]._1.name);
      if ( !buffEnt || !v16 )
        break;
      v9 = (System_Int32_array *)BattleBuffData__checkBuffGroup(v16, buffEnt->fields.buffGroup, v15, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(funcTarget, v15, v11);
      LODWORD(v12) = v13->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_15;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_15:
  if ( (byte_40F9DB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    byte_40F9DB1 = 1;
  }
  v17 = funcTarget->fields._AttachTargetList_k__BackingField;
  return !v17 || v17->fields._size < 1;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_FunctionTargetCheck_o *__fastcall BattleLogicFunctionProcess_CommonAddStateProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunction_o *logic_k__BackingField; // x0
  BuffEntity_o *BuffEntity; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int type; // w8
  _QWORD *v20; // x8
  Il2CppObject *v21; // x19

  if ( (byte_40F9DB0 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo, v6);
    sub_B16FFC(&BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo, v7);
    sub_B16FFC(&BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo, v8);
    sub_B16FFC(&BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo, v9);
    sub_B16FFC(&BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo, v10);
    sub_B16FFC(&BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo, v11);
    byte_40F9DB0 = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0LL
    || (logic_k__BackingField = this->fields._logic_k__BackingField) == 0LL
    || (BuffEntity = BattleLogicFunction__GetBuffEntity(
                       logic_k__BackingField,
                       dataVals_k__BackingField->fields.funcEnt,
                       0LL)) == 0LL )
  {
    sub_B170D4();
  }
  type = BuffEntity->fields.type;
  if ( type <= 161 )
  {
    if ( type == 154 )
    {
      v20 = &BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo;
      goto LABEL_22;
    }
    if ( type == 161 )
    {
      v20 = &BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo;
      goto LABEL_22;
    }
LABEL_18:
    v20 = &BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo;
    goto LABEL_22;
  }
  if ( type > 10001 )
  {
    if ( type == 10002 )
    {
      v20 = &BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo;
      goto LABEL_22;
    }
    if ( type == 10003 )
    {
      v20 = &BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo;
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  if ( type == 176 )
  {
    v20 = &BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo;
    goto LABEL_22;
  }
  if ( type != 10001 )
    goto LABEL_18;
  v20 = &BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo;
LABEL_22:
  v21 = (Il2CppObject *)sub_B170CC(*v20, v15, v16, v17, v18);
  System_Object___ctor(v21, 0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v21;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__checkCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x10
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v8; // x2

  if ( (byte_40F9DAD & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo, action);
    byte_40F9DAD = 1;
  }
  if ( funcTarget
    && (v7 = *(&BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo->_2.bitflags2 + 1),
        *(&funcTarget->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
  {
    if ( (BattleLogicFunctionProcess_CommonAddStateTargetCheck_c *)funcTarget->klass->_2.typeHierarchy[v7 - 1] == BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo )
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
  struct System_Int32_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0
  struct System_Int32_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F9DB5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, buff);
    byte_40F9DB5 = 1;
  }
  CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField
    || (v6 = System_Collections_Generic_List_int___ToArray(
               CardIdsIndexList_k__BackingField,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !buff)
    || (buff->fields.servantCardIdsIndexArray = v6,
        sub_B16F98(
          (BattleServantConfConponent_o *)&buff->fields.servantCardIdsIndexArray,
          (System_Int32_array **)v6,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField) == 0LL) )
  {
    sub_B170D4();
  }
  v14 = System_Collections_Generic_List_int___ToArray(
          AttachTargetList_k__BackingField,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  buff->fields.attachTargets = v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&buff->fields.attachTargets,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  __int64 v18; // x1
  __int64 v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_int__o *v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_int__o *v41; // x23
  int v42; // w0
  System_Action_int__o *v43; // x20
  __int64 v44; // x2
  System_Collections_Generic_List_int__o *v45; // x0
  System_Int32_array *result; // x0
  __int64 v47; // x1
  __int64 v48; // x2

  if ( (byte_40F9DB3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, wrapTarget);
    sub_B16FFC(&System_Action_int__TypeInfo, v9);
    sub_B16FFC(&Method_BasicHelper_ForEach_int___, v10);
    sub_B16FFC(&int___TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B16FFC(
      &Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
      v17);
    sub_B16FFC(&BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo, v18);
    byte_40F9DB3 = 1;
  }
  v19 = sub_B170CC(
          BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo,
          wrapTarget,
          userCommandCodeId,
          cardIdsIndexArray,
          method);
  BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0___ctor(
    (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_14;
  *(_QWORD *)(v19 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  v30 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v19 + 16) = v30;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  if ( userCommandCodeId >= 1 )
  {
    if ( !wrapTarget )
      goto LABEL_14;
    v41 = *(System_Collections_Generic_List_int__o **)(v19 + 16);
    v42 = (*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, _QWORD))&wrapTarget->klass[1]._2.element_size)(
            wrapTarget,
            userCommandCodeId,
            *(_QWORD *)&wrapTarget->klass[1]._2.static_fields_size);
    if ( !v41 )
      goto LABEL_14;
    System_Collections_Generic_List_int___Add(
      v41,
      v42 + 101,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  v43 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v37, v38, v39, v40);
  System_Action_int____ctor(
    v43,
    (Il2CppObject *)v19,
    Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)cardIdsIndexArray,
    (System_Action_T__o *)v43,
    (const MethodInfo_18B6CD8 *)Method_BasicHelper_ForEach_int___);
  v45 = *(System_Collections_Generic_List_int__o **)(v19 + 16);
  if ( !v45 )
    goto LABEL_14;
  if ( v45->fields._size > 0 )
    return System_Collections_Generic_List_int___ToArray(
             v45,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v44);
  if ( !result )
LABEL_14:
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v47, v48);
    sub_B170A0();
  }
  result->m_Items[1] = 1;
  return result;
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__InitPrevCheckCondition(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_WrapTargetData_o *wrapTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_int__o *v14; // x23
  System_Collections_Generic_List_int__o **p_CardIdsIndexList_k__BackingField; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int64_t userCommandCodeId; // x21
  System_Int32_array *v23; // x0
  BattleServantConfConponent_o *p_AttachTargetList_k__BackingField; // x22
  System_Collections_Generic_IEnumerable_T__o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_int__o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F9DB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, action);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_40F9DB2 = 1;
  }
  if ( !wrapTarget
    || (v9 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, _QWORD, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass[1]._2.genericContainerHandle)(
                                                              wrapTarget,
                                                              *(_QWORD *)&wrapTarget->klass[1]._2.instance_size,
                                                              wrapTarget,
                                                              method),
        v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v10,
                                                          v11,
                                                          v12,
                                                          v13),
        System_Collections_Generic_List_int____ctor_49346956(
          v14,
          v9,
          (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200),
        this->fields._CardIdsIndexList_k__BackingField = v14,
        p_CardIdsIndexList_k__BackingField = &this->fields._CardIdsIndexList_k__BackingField,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._CardIdsIndexList_k__BackingField,
          (System_Int32_array **)v14,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        !action)
    || !*p_CardIdsIndexList_k__BackingField )
  {
    sub_B170D4();
  }
  userCommandCodeId = action->fields.userCommandCodeId;
  v23 = System_Collections_Generic_List_int___ToArray(
          *p_CardIdsIndexList_k__BackingField,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  p_AttachTargetList_k__BackingField = (BattleServantConfConponent_o *)&this->fields._AttachTargetList_k__BackingField;
  v25 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, System_Int32_array *, Il2CppMethodPointer))this->klass->vtable._15_GetAttachTargetArray.method)(
                                                         this,
                                                         wrapTarget,
                                                         userCommandCodeId,
                                                         v23,
                                                         this->klass->vtable._16_CheckBuffCondtion.methodPtr);
  v30 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor_49346956(
    v30,
    v25,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  p_AttachTargetList_k__BackingField->klass = (BattleServantConfConponent_c *)v30;
  sub_B16F98(p_AttachTargetList_k__BackingField, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t attachTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0
  System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x0

  if ( (byte_40F9DB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, *(_QWORD *)&attachTarget);
    byte_40F9DB4 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField
    || (System_Collections_Generic_List_int___Remove(
          AttachTargetList_k__BackingField,
          attachTarget,
          (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__),
        (CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___Remove(
    CardIdsIndexList_k__BackingField,
    attachTarget - 101,
    (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
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

  if ( (byte_40F9DB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    byte_40F9DB1 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  return AttachTargetList_k__BackingField && AttachTargetList_k__BackingField->fields._size > 0;
}


void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__set_AttachTargetList(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AttachTargetList_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._AttachTargetList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CardIdsIndexList_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._CardIdsIndexList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *_4__this; // x0
  System_Collections_Generic_List_int__o *targetList; // x20
  int32_t v7; // w0

  if ( (byte_40F78C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&index);
    byte_40F78C7 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (targetList = this->fields.targetList,
        v7 = BattleLogicFunctionProcess_CommonAddStateTargetCheck__ConvertAttachTargetFromCardIndex(
               _4__this,
               index,
               0LL),
        !targetList) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___Add(
    targetList,
    v7,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v7; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x9
  BattleData_o *data; // x0
  int32_t targetId_k__BackingField; // w27
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x26
  BattleServantData_o *ServantData; // x0
  struct BattleLogicFunction_o *v15; // x8
  BattleServantData_o *v16; // x20
  BattleData_o *v17; // x0
  BattleServantData_o *v18; // x0
  FunctionEntity_o *funcEnt; // x23
  BattleServantData_o *v20; // x22
  BattleLogicFunction_o *v21; // x0
  const MethodInfo *v22; // x2
  BattleLogicFunction_o *v23; // x0
  char v24; // w0
  int32_t v26; // w8
  struct System_String_o *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_String_o **p_invalidText; // x19
  bool v35; // w0
  System_Int32_array *vals; // x23
  bool isParam; // w0
  float BuffTOLERANCESUBSTATEMagnification; // s0
  bool isDisplayLastFuncInvalid; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_40F9DB6 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, action);
    sub_B16FFC(&StringLiteral_2436/*"BATTLE_GUARD_FUNCTION"*/, v7);
    byte_40F9DB6 = 1;
  }
  isDisplayLastFuncInvalid = 0;
  if ( !funcTarget )
    goto LABEL_52;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_52;
  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_52;
  if ( !action )
    goto LABEL_52;
  data = logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_52;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  ServantData = BattleData__getServantData(data, action->fields.actorId, 0LL);
  v15 = this->fields._logic_k__BackingField;
  if ( !v15 )
    goto LABEL_52;
  v16 = ServantData;
  v17 = v15->fields.data;
  if ( !v17 )
    goto LABEL_52;
  v18 = BattleData__getServantData(v17, targetId_k__BackingField, 0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_52;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  isDisplayLastFuncInvalid = 0;
  v20 = v18;
  v21 = this->fields._logic_k__BackingField;
  if ( !v21 )
    goto LABEL_52;
  if ( !BattleLogicFunction__checkFuncAction(
          v21,
          procArg_k__BackingField,
          action->fields.actorId,
          targetId_k__BackingField,
          0LL,
          funcEnt,
          dataVals_k__BackingField,
          action->fields.treasureDvcId > 0,
          &isDisplayLastFuncInvalid,
          0LL) )
  {
    if ( isDisplayLastFuncInvalid )
    {
      BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v22);
      goto LABEL_18;
    }
    if ( funcEnt )
    {
      if ( !FuncList__Check(7, funcEnt->fields.funcType, 0LL) && !FuncList__Check(8, funcEnt->fields.funcType, 0LL) )
      {
        if ( FuncList__Check(19, funcEnt->fields.funcType, 0LL) || FuncList__Check(20, funcEnt->fields.funcType, 0LL) )
        {
          if ( !v20 )
            goto LABEL_52;
          if ( !v20->fields.isEnemy )
            goto LABEL_18;
          funcTarget->fields.invalidType = 2;
          if ( !FuncList__Check(20, funcEnt->fields.funcType, 0LL)
            || BattleServantData__getBuffResistDelayNPTurn(v20, v16, 0LL) <= 0.0 )
          {
            goto LABEL_18;
          }
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2436/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
          funcTarget->fields.invalidText = v27;
          p_invalidText = &funcTarget->fields.invalidText;
        }
        else
        {
          if ( FuncList__Check(13, funcEnt->fields.funcType, 0LL) )
          {
            if ( !v20 )
              goto LABEL_52;
            if ( BattleServantData__checkAvoidInstantDeath(v20, v16, 0LL) )
            {
              v26 = 1;
              goto LABEL_26;
            }
          }
          v35 = FuncList__Check(2, funcEnt->fields.funcType, 0LL);
          v27 = 0LL;
          if ( v35 )
          {
            vals = funcEnt->fields.vals;
            if ( v16 || (isParam = DataVals__isParam(dataVals_k__BackingField, 74, 0LL), v27 = 0LL, !isParam) )
            {
              if ( !v20 )
                goto LABEL_52;
              BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                     v20,
                                                     vals,
                                                     v16,
                                                     0LL);
              v27 = 0LL;
              if ( BuffTOLERANCESUBSTATEMagnification > 0.0 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2436/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
              }
            }
          }
          funcTarget->fields.invalidText = v27;
          p_invalidText = &funcTarget->fields.invalidText;
          *((_DWORD *)p_invalidText - 2) = 2;
        }
        sub_B16F98(
          (BattleServantConfConponent_o *)p_invalidText,
          (System_Int32_array **)v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        goto LABEL_18;
      }
      if ( v20 )
      {
        if ( !BattleServantData__checkPlayer(v20, 0LL) )
          goto LABEL_18;
        v26 = 2;
LABEL_26:
        v24 = 0;
        funcTarget->fields.invalidType = v26;
        return v24 & 1;
      }
    }
LABEL_52:
    sub_B170D4();
  }
  v23 = this->fields._logic_k__BackingField;
  if ( !v23 )
    goto LABEL_52;
  if ( BattleLogicFunction__checkNoActionCondition(v23, targetId_k__BackingField, funcEnt, 0LL) )
  {
LABEL_18:
    v24 = 0;
    return v24 & 1;
  }
  v24 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, DataVals_o *, BattleLogicFunction_ProcListInArgs_o *, void *))this->klass->vtable._9_CheckConditionPartial.method)(
          this,
          action,
          funcTarget,
          dataVals_k__BackingField,
          procArg_k__BackingField,
          this->klass[1]._1.image);
  return v24 & 1;
}


void __fastcall BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(
        BattleLogicFunctionProcess_DependFunctionUnitCheck_o *this,
        BattleLogicFunction_o *logic,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  BattleLogicFunctionProcess_FunctionUnitCheck___ctor(
    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
    logic,
    procArg,
    (const MethodInfo *)dataVal);
  this->fields._dataVals_k__BackingField = dataVal;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._dataVals_k__BackingField,
    (System_Int32_array **)dataVal,
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleFieldEnvironmentData_o *v14; // x0
  RemovedBuffInfo_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v21; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x0
  bool isParam; // w0
  const MethodInfo *v33; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v34; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isPassive; // w21
  BattleFieldEnvironmentData_o *v38; // x0

  if ( (byte_40F9DB9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, actBuffData);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v9);
    sub_B16FFC(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__, v10);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v11);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v13);
    byte_40F9DB9 = 1;
  }
  if ( !this->fields.grantType )
  {
    v14 = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, (const MethodInfo *)actBuffData);
    if ( !buffData
      || !v14
      || (v15 = BattleFieldEnvironmentData__SubBuffFromType(v14, buffData->fields.buffId, 0, 0LL)) == 0LL
      || (RemovedAllBuffList_k__BackingField = v15->fields._RemovedAllBuffList_k__BackingField) == 0LL )
    {
LABEL_19:
      sub_B170D4();
    }
    if ( RemovedAllBuffList_k__BackingField->fields._size >= 1 )
    {
      v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                              System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                                                                              v16,
                                                                                              v17,
                                                                                              v18,
                                                                                              v19);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v21,
        (Il2CppObject *)this,
        Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__,
        (const MethodInfo_2B6C28C *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)RemovedAllBuffList_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)v21,
                                                                   (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
      v23 = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                   v22,
                                                                                   (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
      if ( !actBuffData )
        goto LABEL_19;
      actBuffData->fields.removeBuffList = v23;
      sub_B16F98(
        (BattleServantConfConponent_o *)&actBuffData->fields.removeBuffList,
        (System_Int32_array **)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
  }
  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_19;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_19;
  isParam = DataVals__isParam(dataVals_k__BackingField, 109, 0LL);
  if ( !buffData )
    goto LABEL_19;
  buffData->fields.isRemoveFieldBuffActorDeath = isParam;
  v34 = this->fields._funcUnit_k__BackingField;
  if ( !v34 )
    goto LABEL_19;
  procArg_k__BackingField = v34->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_19;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_19;
  isPassive = externalArg->fields.isPassive;
  v38 = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v33);
  if ( !v38 )
    goto LABEL_19;
  BattleFieldEnvironmentData__AddFieldBuff(v38, buffData, !isPassive, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__CheckBuffCondtion(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleActionData_o *action,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  BattleFieldEnvironmentData_o *v19; // x0
  BattleBuffData_o *BuffData; // x0
  bool v21; // w21
  System_Int32_array *GrantBuffTypeArray; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Func_int__bool__o *v27; // x23

  if ( (byte_40F9DB8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, action);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(
      &Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
      v9);
    sub_B16FFC(&BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo, v10);
    byte_40F9DB8 = 1;
  }
  v11 = sub_B170CC(
          BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo,
          action,
          buffEnt,
          method,
          v4);
  BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___ctor(
    (BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = buffEnt;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)buffEnt, v12, v13, v14, v15, v16, v17);
  if ( this->fields.grantType != 1 )
    return 1;
  v19 = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v18);
  if ( !v19 || (BuffData = BattleFieldEnvironmentData__get_BuffData(v19, 0LL)) == 0LL )
LABEL_11:
    sub_B170D4();
  v21 = 1;
  GrantBuffTypeArray = BattleBuffData__GetGrantBuffTypeArray(BuffData, 1, 1, 0LL);
  v27 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v23, v24, v25, v26);
  System_Func_int__bool____ctor(
    v27,
    (Il2CppObject *)v11,
    Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__25910576(
         GrantBuffTypeArray,
         (System_Func_T__bool__o *)v27,
         (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return v21;
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

  if ( (byte_40F9DB7 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, wrapTarget);
    byte_40F9DB7 = 1;
  }
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, userCommandCodeId);
  if ( !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v6, v7);
    sub_B170A0();
  }
  result->m_Items[1] = 10001;
  return result;
}


int32_t __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__GetGrantType(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  if ( !baseVals )
    sub_B170D4();
  return DataVals__GetParam(baseVals, 110, 0, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__Init(
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
  if ( !funcUnit || (dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField) == 0LL )
    sub_B170D4();
  this->fields.grantType = DataVals__GetParam(dataVals_k__BackingField, 110, 0, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleActionData_FieldBuffData_o *v5; // x19

  if ( (byte_40F9DBA & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_FieldBuffData_TypeInfo, method);
    byte_40F9DBA = 1;
  }
  v5 = (BattleActionData_FieldBuffData_o *)sub_B170CC(BattleActionData_FieldBuffData_TypeInfo, method, v2, v3, v4);
  BattleActionData_FieldBuffData___ctor(v5, 0LL);
  return (BattleActionData_BuffData_o *)v5;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19

  if ( (byte_40F9DBB & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method);
    byte_40F9DBB = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v5;
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck___AddBuff_b__8_0(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v4; // x0
  BattleBuffData_o *BuffData; // x0

  v4 = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, (const MethodInfo *)buff);
  if ( !v4 || (BuffData = BattleFieldEnvironmentData__get_BuffData(v4, 0LL)) == 0LL )
    sub_B170D4();
  return BattleBuffData__CreateDummyBuff(BuffData, buff, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
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
  BattleLogicFunction_o *logic_k__BackingField; // x0

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField) == 0LL )
  {
    sub_B170D4();
  }
  return BattleLogicFunction__GetBuffEntity(logic_k__BackingField, dataVals_k__BackingField->fields.funcEnt, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__Init(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleLogicFunctionProcess_FunctionTargetCheck_c *klass; // x8
  struct BattleLogicFunctionProcess_WrapTargetData_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x0

  this->fields._targetId_k__BackingField = targetId;
  this->fields._funcUnit_k__BackingField = funcUnit;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)funcUnit,
    (System_String_array **)funcUnit,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  klass = this->klass;
  this->fields._result_k__BackingField = 0;
  v10 = (struct BattleLogicFunctionProcess_WrapTargetData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))klass->vtable._9_MakeWrapTarget.method)(
                                                                this,
                                                                klass->vtable._10_MakeAddActionBuffData.methodPtr);
  this->fields._WrapTarget_k__BackingField = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._WrapTarget_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  WrapTarget_k__BackingField = this->fields._WrapTarget_k__BackingField;
  if ( !WrapTarget_k__BackingField )
    sub_B170D4();
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
  BattleActionData_o *v5; // x0

  if ( this->fields._result_k__BackingField )
    return (unsigned __int8)&dword_0 + 1;
  v5 = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(this, (const MethodInfo *)mainAction);
  if ( !mainAction )
    sub_B170D4();
  BattleActionData__addAction(mainAction, v5, 0LL);
  return 0;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleActionData_BuffData_o *v5; // x19

  if ( (byte_40F9DBD & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_BuffData_TypeInfo, method);
    byte_40F9DBD = 1;
  }
  v5 = (BattleActionData_BuffData_o *)sub_B170CC(BattleActionData_BuffData_TypeInfo, method, v2, v3, v4);
  BattleActionData_BuffData___ctor(v5, 0LL);
  return v5;
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
  BattleLogicFunction_o *logic_k__BackingField; // x0

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField) == 0LL )
  {
    sub_B170D4();
  }
  return BattleLogicFunction__MakeAddActionBuffData(
           logic_k__BackingField,
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19

  if ( (byte_40F9DBE & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_WrapTargetServant_TypeInfo, method);
    byte_40F9DBE = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicFunctionProcess_WrapTargetServant_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v5;
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
  System_Type_o *v10; // x21
  int32_t DisplayLastFuncInvalidType; // w20
  Il2CppObject *v12; // x0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v13; // x0
  BattleActionData_o *v14; // x1
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v15; // x2
  const MethodInfo *v16; // x3
  System_RuntimeTypeHandle_o v17; // 0:w0.4

  if ( (byte_40F9DBC & 1) == 0 )
  {
    sub_B16FFC(&System_Enum_TypeInfo, baseVals);
    sub_B16FFC(&BattleLogicFunctionProcess_FuncInvalidType_var, v5);
    sub_B16FFC(&BattleLogicFunctionProcess_FuncInvalidType_TypeInfo, v6);
    sub_B16FFC(&System_Type_TypeInfo, v7);
    byte_40F9DBC = 1;
  }
  v8 = (int)BattleLogicFunctionProcess_FuncInvalidType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v17.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v17, 0LL);
  if ( !baseVals )
    goto LABEL_13;
  v10 = TypeFromHandle;
  DisplayLastFuncInvalidType = DataVals__GetDisplayLastFuncInvalidType(baseVals, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v12 = System_Enum__ToObject_15852992(v10, DisplayLastFuncInvalidType, 0LL);
  if ( !v12 )
LABEL_13:
    sub_B170D4();
  if ( v12->klass->_1.element_class == BattleLogicFunctionProcess_FuncInvalidType_TypeInfo->_1.element_class )
  {
    this->fields.invalidType = *(_DWORD *)j_il2cpp_object_unbox_0(v12);
  }
  else
  {
    v13 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B173C8(v12);
    BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCondition(v13, v14, v15, v16);
  }
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *funcProc,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  bool v5; // w0
  const MethodInfo *v6; // x4
  _BOOL4 isFixResult; // w8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x9
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  if ( !funcProc )
    goto LABEL_8;
  v5 = BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkExecutable(funcProc, action, this, method);
  isFixResult = this->fields.isFixResult;
  this->fields._result_k__BackingField = v5;
  if ( isFixResult )
  {
    funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
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
            this->fields._targetId_k__BackingField,
            v5,
            dataVals_k__BackingField->fields.funcIndex,
            v6);
          return;
        }
      }
    }
LABEL_8:
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._WrapTarget_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._WrapTarget_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._funcUnit_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct BattleLogicFunction_ProcListInArgs_o **p_procArg_k__BackingField; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x2
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_40F9DBF & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, logic);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo, v9);
    byte_40F9DBF = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo,
                                                                                                  logic,
                                                                                                  procArg,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToOtherList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkedToOtherList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToSelfList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkedToSelfList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._logic_k__BackingField = logic;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)logic, v28, v29, v30, v31, v32, v33);
  this->fields._procArg_k__BackingField = procArg;
  p_procArg_k__BackingField = &this->fields._procArg_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_procArg_k__BackingField,
    (System_Int32_array **)procArg,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  *((_BYTE *)p_procArg_k__BackingField + 17) = 0;
  v42 = (System_Int32_array **)sub_B17014(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, 0LL, v41);
  p_procArg_k__BackingField[6] = (struct BattleLogicFunction_ProcListInArgs_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)(p_procArg_k__BackingField + 6), v42, v43, v44, v45, v46, v47, v48);
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField || (data = logic_k__BackingField->fields.data) == 0LL )
    sub_B170D4();
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


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *baseVal,
        int32_t actorId,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleData_o *data; // x0
  bool isEnemyID; // w0
  int32_t TriggeredFieldCountTargetFlag; // w0
  struct BattleLogicFunction_o *v11; // x8
  int32_t v12; // w1
  BattleData_o *v13; // x0
  BattleServantData_array *FieldAliveLogicServantArray; // x0
  bool existParamNum; // [xsp+Ch] [xbp-14h] BYREF

  existParamNum = 0;
  if ( !baseVal )
    goto LABEL_12;
  if ( !DataVals__CheckAssertStrParam(baseVal, 134, &existParamNum, 0LL) )
  {
    LOBYTE(TriggeredFieldCountTargetFlag) = !existParamNum;
    return TriggeredFieldCountTargetFlag & 1;
  }
  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_12;
  data = logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_12;
  isEnemyID = BattleData__isEnemyID(data, actorId, 0LL);
  TriggeredFieldCountTargetFlag = DataVals__GetTriggeredFieldCountTargetFlag(baseVal, isEnemyID, 0LL);
  if ( TriggeredFieldCountTargetFlag )
  {
    v11 = this->fields._logic_k__BackingField;
    if ( v11 )
    {
      v12 = TriggeredFieldCountTargetFlag;
      v13 = v11->fields.data;
      if ( v13 )
      {
        FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(v13, v12, 0, 0LL);
        if ( FieldAliveLogicServantArray )
        {
          LOBYTE(TriggeredFieldCountTargetFlag) = DataVals__IsSatisfyAboveBelowCondition(
                                                    baseVal,
                                                    134,
                                                    FieldAliveLogicServantArray->max_length,
                                                    0LL);
          return TriggeredFieldCountTargetFlag & 1;
        }
      }
    }
LABEL_12:
    sub_B170D4();
  }
  return TriggeredFieldCountTargetFlag & 1;
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
  if ( DataVals__CheckAssertStrParam(baseVals, 138, existParamNum, 0LL) )
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
  if ( !DataVals__CheckAssertStrParam(baseVals, 139, existParamNum, 0LL) )
  {
    v11 = 1;
    goto LABEL_11;
  }
  if ( !targetSvtData )
LABEL_13:
    sub_B170D4();
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


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__SetAfterUpdateField(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  procArg_k__BackingField = this->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    sub_B170D4();
  procArg_k__BackingField->fields.updateField = 1;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  bool *p_result_k__BackingField; // x21
  bool v6; // w0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  if ( this->fields.isChecked )
  {
    p_result_k__BackingField = &this->fields._result_k__BackingField;
  }
  else
  {
    this->fields.isChecked = 1;
    v6 = BattleLogicFunctionProcess_FunctionUnitCheck__checkSelfCondtion(this, action, method);
    p_result_k__BackingField = &this->fields._result_k__BackingField;
    this->fields._result_k__BackingField = v6;
    if ( v6 )
    {
      this->fields._result_k__BackingField = BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
                                               this,
                                               action,
                                               v7);
      BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToOtherResult(this, v8);
    }
  }
  return *p_result_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkFuncTargetResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        int32_t targetId,
        bool result,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20

  if ( (byte_40F9DC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__, v8);
    sub_B16FFC(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v9);
    sub_B16FFC(
      &Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0__checkFuncTargetResult_b__0__,
      v10);
    sub_B16FFC(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_TypeInfo, v11);
    byte_40F9DC2 = 1;
  }
  v12 = (BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_o *)sub_B170CC(
                                                                                  BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_TypeInfo,
                                                                                  *(_QWORD *)&targetId,
                                                                                  result,
                                                                                  method,
                                                                                  v4);
  BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.targetId = targetId;
  v12->fields.result = result;
  funcTargetArray_k__BackingField = this->fields._funcTargetArray_k__BackingField;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo,
                                                                             v13,
                                                                             v14,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0__checkFuncTargetResult_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)funcTargetArray_k__BackingField,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_18B6074 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *linkedToSelfList; // x0
  const MethodInfo *v9; // x2
  Il2CppObject *current; // x21
  const MethodInfo *v11; // x2
  int v12; // w19
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9DC5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__,
      action);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__,
      v7);
    byte_40F9DC5 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  linkedToSelfList = this->fields.linkedToSelfList;
  if ( !linkedToSelfList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkedToSelfList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__) )
    {
      v12 = 3;
      goto LABEL_11;
    }
    current = v14.fields.current;
    if ( !v14.fields.current )
      sub_B170D4();
    if ( !BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
            (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v14.fields.current,
            action,
            v9) )
      break;
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      this,
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
      v11);
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
  return v12 != 5;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkSelfCondtion(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x21
  FunctionEntity_o *funcEnt; // x22
  bool v7; // w8
  BattleLogicFunctionProcess_FunctionTargetCheck_array *v8; // x0
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x23
  bool endbattleFlg; // w24
  bool v12; // w8
  struct BattleLogicFunction_o *v13; // x8
  struct BattleData_o *v14; // x23
  bool loseBattleFlg; // w24
  struct BattleLogicFunction_o *v16; // x8
  struct BattleData_o *v17; // x23
  bool winBattleNotRelatedSurvivalStatus; // w24
  System_Int32_array *QuestTargetValues; // x0
  System_Int32_array *v20; // x23
  struct BattleLogicFunction_o *v21; // x8
  BattleData_o *v22; // x0
  System_Int32_array *QuestIndividualities; // x0
  const MethodInfo *v24; // x3
  int32_t ActSet; // w0
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t Param; // w23
  const MethodInfo *v32; // x1
  bool v33; // zf
  Target_BattleTargetArgs_o *args; // x23
  struct BattleLogicFunction_o *v35; // x8
  int32_t PTTargetId; // w0
  int32_t targetType; // w27
  int32_t taskActorType; // w28
  bool checkRevengeId; // w24
  int32_t v40; // w25
  System_Int32_array *ValsList; // x26
  bool IsIncludeIgnoreIndividuality; // w0
  System_Int32_array *TargetIds_19019748; // x0
  struct BattleLogicFunction_ProcListInArgs_o *v44; // x8
  System_Int32_array *v45; // x2
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x0
  __int64 v47; // x0
  struct BattleLogicFunction_ProcListInArgs_o *v48; // x8
  struct BattleLogicFunction_FunctionArgument_o *v49; // x8
  System_Int32_array *v50; // x22
  struct BattleLogicFunction_CheckDuplicateFunction_o *checkDuplicate; // x0
  struct BattleLogicFunction_o *v52; // x8
  struct BattleData_o *v53; // x8
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x1
  __int64 v56; // x2
  int max_length; // w8
  BattleLogicFunctionProcess_FunctionTargetCheck_array *v58; // x21
  int v59; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v60; // x22
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v61; // x0
  const MethodInfo *v62; // x3
  int32_t targetId; // [xsp+20h] [xbp-60h]
  int32_t actorId; // [xsp+24h] [xbp-5Ch]
  BattleData_o *bdata; // [xsp+28h] [xbp-58h]

  if ( (byte_40F9DC4 & 1) == 0 )
  {
    sub_B16FFC(&Target_BattleTargetArgs_TypeInfo, action);
    byte_40F9DC4 = 1;
  }
  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_55;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_55;
  v7 = FuncList__Check(0, funcEnt->fields.funcType, 0LL);
  LOBYTE(v8) = 0;
  if ( v7 )
    return (char)v8;
  if ( FuncList__Check(26, funcEnt->fields.funcType, 0LL) )
  {
    if ( !action )
      goto LABEL_55;
    action->fields.isSuccessTargetSelection = 1;
  }
  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_55;
  data = logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_55;
  endbattleFlg = data->fields.endbattleFlg;
  v12 = DataVals__IsEndBattle(dataVals_k__BackingField, 0LL)
     || DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL)
     || DataVals__IsWinBattleNotRelatedSurvivalStatus(dataVals_k__BackingField, 0LL);
  data->fields.endbattleFlg = v12 || endbattleFlg;
  v13 = this->fields._logic_k__BackingField;
  if ( !v13 )
    goto LABEL_55;
  v14 = v13->fields.data;
  if ( !v14 )
    goto LABEL_55;
  loseBattleFlg = v14->fields.loseBattleFlg;
  v14->fields.loseBattleFlg = (loseBattleFlg | DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL)) & 1;
  v16 = this->fields._logic_k__BackingField;
  if ( !v16
    || (v17 = v16->fields.data) == 0LL
    || (winBattleNotRelatedSurvivalStatus = v17->fields.winBattleNotRelatedSurvivalStatus,
        v17->fields.winBattleNotRelatedSurvivalStatus = (winBattleNotRelatedSurvivalStatus | DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                                                               dataVals_k__BackingField,
                                                                                               0LL)) & 1,
        this->fields.questFuncFlg = 1,
        (QuestTargetValues = FunctionEntity__getQuestTargetValues(funcEnt, 0LL)) == 0LL) )
  {
LABEL_55:
    sub_B170D4();
  }
  v20 = QuestTargetValues;
  if ( *(_QWORD *)&QuestTargetValues->max_length )
  {
    v21 = this->fields._logic_k__BackingField;
    if ( !v21 )
      goto LABEL_55;
    v22 = v21->fields.data;
    if ( !v22 )
      goto LABEL_55;
    QuestIndividualities = BattleData__getQuestIndividualities(v22, 0LL);
    if ( !Individuality__CheckIndividualities(QuestIndividualities, v20, 0LL) )
      this->fields.questFuncFlg = 0;
  }
  if ( !action )
    goto LABEL_55;
  if ( !BattleActionData__IsSelectedAddTargetIndex(action, dataVals_k__BackingField, 0LL)
    || !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
          this,
          dataVals_k__BackingField,
          action->fields.actorId,
          v24) )
  {
    goto LABEL_41;
  }
  if ( DataVals__checkActSet(dataVals_k__BackingField, 0LL) )
  {
    ActSet = DataVals__getActSet(dataVals_k__BackingField, 0LL);
    procArg_k__BackingField = this->fields._procArg_k__BackingField;
    if ( !procArg_k__BackingField )
      goto LABEL_55;
    if ( ActSet != procArg_k__BackingField->fields.actSetId )
    {
LABEL_41:
      LOBYTE(v8) = 0;
      return (char)v8;
    }
  }
  if ( !DataVals__isParam(dataVals_k__BackingField, 130, 0LL)
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 130, 0, 0LL),
        v33 = Param == BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(this, v32),
        LOBYTE(v8) = 0,
        v33) )
  {
    args = (Target_BattleTargetArgs_o *)sub_B170CC(Target_BattleTargetArgs_TypeInfo, v27, v28, v29, v30);
    Target_BattleTargetArgs___ctor(args, dataVals_k__BackingField, 0LL);
    v35 = this->fields._logic_k__BackingField;
    if ( v35 )
    {
      bdata = v35->fields.data;
      actorId = action->fields.actorId;
      targetId = action->fields.targetId;
      PTTargetId = BattleActionData__getPTTargetId(action, 0LL);
      targetType = funcEnt->fields.targetType;
      taskActorType = action->fields.taskActorType;
      checkRevengeId = action->fields.checkRevengeId;
      v40 = PTTargetId;
      ValsList = DataVals__GetValsList(dataVals_k__BackingField, 83, 0LL);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(dataVals_k__BackingField, 0LL);
      TargetIds_19019748 = Target__getTargetIds_19019748(
                             bdata,
                             actorId,
                             targetId,
                             v40,
                             targetType,
                             taskActorType,
                             checkRevengeId,
                             ValsList,
                             IsIncludeIgnoreIndividuality,
                             args,
                             0LL);
      v44 = this->fields._procArg_k__BackingField;
      if ( v44 )
      {
        v45 = TargetIds_19019748;
        externalArg = v44->fields.externalArg;
        if ( externalArg )
        {
          v47 = ((__int64 (__fastcall *)(struct BattleLogicFunction_FunctionArgument_o *, _QWORD, System_Int32_array *, void *))externalArg->klass->vtable._5_GetFixTargetIds.method)(
                  externalArg,
                  (unsigned int)funcEnt->fields.targetType,
                  v45,
                  externalArg->klass[1]._1.image);
          v48 = this->fields._procArg_k__BackingField;
          if ( v48 )
          {
            v49 = v48->fields.externalArg;
            if ( v49 )
            {
              v50 = (System_Int32_array *)v47;
              checkDuplicate = v49->fields.checkDuplicate;
              if ( checkDuplicate )
              {
                if ( (((__int64 (__fastcall *)(struct BattleLogicFunction_CheckDuplicateFunction_o *, struct DataVals_o *, System_Int32_array *, void *))checkDuplicate->klass->vtable._6_isNotExec.method)(
                        checkDuplicate,
                        dataVals_k__BackingField,
                        v50,
                        checkDuplicate->klass[1]._1.image) & 1) != 0 )
                  goto LABEL_41;
                v52 = this->fields._logic_k__BackingField;
                if ( v52 )
                {
                  v53 = v52->fields.data;
                  if ( v53 )
                  {
                    if ( !DataVals__CheckFunctionTriggerStar(
                            dataVals_k__BackingField,
                            v53->fields.totalCriticalStars,
                            0LL)
                      && !this->fields.isLowestStarFunction )
                    {
                      goto LABEL_41;
                    }
                    v8 = BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(this, v50, v54);
                    if ( v8 )
                    {
                      max_length = v8->max_length;
                      v58 = v8;
                      if ( max_length < 1 )
                      {
                        LOBYTE(v8) = 1;
                        return (char)v8;
                      }
                      v59 = 0;
                      while ( 1 )
                      {
                        if ( v59 >= (unsigned int)max_length )
                        {
                          sub_B17100(v8, v55, v56);
                          sub_B170A0();
                        }
                        v60 = v58->m_Items[v59];
                        v61 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(this, v55);
                        if ( !v60 )
                          break;
                        BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(v60, v61, action, v62);
                        max_length = v58->max_length;
                        ++v59;
                        v8 = (BattleLogicFunctionProcess_FunctionTargetCheck_array *)(&dword_0 + 1);
                        if ( v59 >= max_length )
                          return (char)v8;
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
    goto LABEL_55;
  }
  return (char)v8;
}


BattleActionData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t invalidType; // w8
  BattleActionData_BuffData_o *v7; // x6
  struct DataVals_o *v8; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v9; // x8
  struct BattleLogicFunction_FunctionArgument_o *v10; // x8
  BattleLogicFunction_o *v11; // x0
  struct DataVals_o *dataVals_k__BackingField; // x3
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogicFunction_o *logic_k__BackingField; // x0
  struct DataVals_o *v17; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *v19; // x9
  BattleLogicFunction_o *v20; // x0

  if ( !funcTarget )
    goto LABEL_21;
  v5 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer, const MethodInfo *))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
         funcTarget,
         funcTarget->klass->vtable._8_AddBuff.methodPtr,
         method);
  invalidType = funcTarget->fields.invalidType;
  v7 = (BattleActionData_BuffData_o *)v5;
  switch ( invalidType )
  {
    case 1:
      dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        goto LABEL_21;
      procArg_k__BackingField = this->fields._procArg_k__BackingField;
      if ( !procArg_k__BackingField )
        goto LABEL_21;
      externalArg = procArg_k__BackingField->fields.externalArg;
      if ( !externalArg )
        goto LABEL_21;
      logic_k__BackingField = this->fields._logic_k__BackingField;
      if ( !logic_k__BackingField )
        goto LABEL_21;
      return BattleLogicFunction__getNoEffectObject(
               logic_k__BackingField,
               funcTarget->fields._targetId_k__BackingField,
               dataVals_k__BackingField->fields.funcIndex,
               dataVals_k__BackingField,
               externalArg->fields.isCommandSideEffect,
               funcTarget->fields.invalidText,
               v7,
               0LL);
    case 3:
      v17 = this->fields._dataVals_k__BackingField;
      if ( !v17 )
        goto LABEL_21;
      funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
      if ( !funcUnit_k__BackingField )
        goto LABEL_21;
      v19 = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
      if ( !v19 )
        goto LABEL_21;
      v20 = this->fields._logic_k__BackingField;
      if ( !v20 )
        goto LABEL_21;
      return BattleLogicFunction__getGrayPopupActionData(
               v20,
               funcTarget->fields._targetId_k__BackingField,
               v17->fields.funcIndex,
               v19->fields.funcEnt,
               0LL);
    case 2:
      v8 = this->fields._dataVals_k__BackingField;
      if ( v8 )
      {
        v9 = this->fields._procArg_k__BackingField;
        if ( v9 )
        {
          v10 = v9->fields.externalArg;
          if ( v10 )
          {
            v11 = this->fields._logic_k__BackingField;
            if ( v11 )
              return BattleLogicFunction__getMissObject(
                       v11,
                       funcTarget->fields._targetId_k__BackingField,
                       v8->fields.funcIndex,
                       v8,
                       v10->fields.isCommandSideEffect,
                       funcTarget->fields.invalidText,
                       v7,
                       0LL);
          }
        }
      }
LABEL_21:
      sub_B170D4();
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
    sub_B170D4();
  return DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
}


BattleData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_B170D4();
  return logic_k__BackingField->fields.data;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B170D4();
  return dataVals_k__BackingField->fields.funcIndex;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B170D4();
  return dataVals_k__BackingField->fields.funcType;
}


BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunction_o *logic_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField || (logic_k__BackingField = this->fields._logic_k__BackingField) == 0LL )
    sub_B170D4();
  return BattleLogicFunction__getFunctionTypeProcess(
           logic_k__BackingField,
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
    sub_B170D4();
  return DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddLinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B170D4();
  return DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_LinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B170D4();
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
  signed int max_length; // w21
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v6; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array **p_funcTargetArray_k__BackingField; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x23
  __int64 v16; // x25
  int32_t *v17; // x26
  __int64 v18; // x27
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x24
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v28; // x8
  __int64 v29; // x0

  if ( (byte_40F9DC1 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, targetlist);
    byte_40F9DC1 = 1;
  }
  if ( !targetlist )
LABEL_19:
    sub_B170D4();
  max_length = targetlist->max_length;
  v6 = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)sub_B17014(
                                                                        BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                                                        (unsigned int)max_length,
                                                                        method);
  this->fields._funcTargetArray_k__BackingField = v6;
  p_funcTargetArray_k__BackingField = &this->fields._funcTargetArray_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._funcTargetArray_k__BackingField,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  funcTargetArray_k__BackingField = this->fields._funcTargetArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v16 = 0LL;
    v17 = &targetlist->m_Items[1];
    v18 = 32LL;
    do
    {
      v19 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(this, v14);
      if ( (unsigned int)v16 >= targetlist->max_length )
        goto LABEL_18;
      if ( !v19 )
        goto LABEL_19;
      v19 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))v19->klass->vtable._8_MakeFunctionTargetCheck.method)(
                                                                      v19,
                                                                      (unsigned int)v17[v16],
                                                                      this,
                                                                      v19->klass[1]._1.image);
      if ( !funcTargetArray_k__BackingField )
        goto LABEL_19;
      v27 = (System_Int32_array **)v19;
      if ( v19 )
      {
        v19 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B170BC(
                                                                        v19,
                                                                        funcTargetArray_k__BackingField->obj.klass->_1.element_class);
        if ( !v19 )
        {
          sub_B170F4();
          sub_B170A0();
        }
      }
      if ( (unsigned int)v16 >= funcTargetArray_k__BackingField->max_length )
        goto LABEL_18;
      *(Il2CppClass **)((char *)&funcTargetArray_k__BackingField->obj.klass + v18) = (Il2CppClass *)v27;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)funcTargetArray_k__BackingField + v18),
        v27,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v28 = *p_funcTargetArray_k__BackingField;
      if ( !*p_funcTargetArray_k__BackingField )
        goto LABEL_19;
      if ( (unsigned int)v16 >= v28->max_length || (unsigned int)v16 >= targetlist->max_length )
      {
LABEL_18:
        sub_B17100(v19, v20, v21);
        sub_B170A0();
      }
      v29 = *(__int64 *)((char *)&v28->obj.klass + v18);
      if ( !v29 )
        goto LABEL_19;
      (*(void (__fastcall **)(__int64, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD))(*(_QWORD *)v29 + 376LL))(
        v29,
        (unsigned int)v17[v16],
        this,
        *(_QWORD *)(*(_QWORD *)v29 + 384LL));
      funcTargetArray_k__BackingField = this->fields._funcTargetArray_k__BackingField;
      ++v16;
      v18 += 8LL;
    }
    while ( (int)v16 < max_length );
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
  struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *linkedToOtherList; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9DC3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__,
      v5);
    byte_40F9DC3 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  linkedToOtherList = this->fields.linkedToOtherList;
  if ( !linkedToOtherList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkedToOtherList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v8.fields.current,
      this,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *linkedToSelf,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x20
  int max_length; // w8
  unsigned int v6; // w21
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v7; // x0

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
      {
        sub_B17100(this, linkedToSelf, method);
        sub_B170A0();
      }
      v7 = funcTargetArray_k__BackingField->m_Items[v6];
      if ( !v7 )
        break;
      BattleLogicFunctionProcess_FunctionTargetCheck__reflectLinkedToSelfResult(v7, linkedToSelf, method);
      max_length = funcTargetArray_k__BackingField->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_12:
    sub_B170D4();
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct DataVals_o **p_dataVals_k__BackingField; // x22
  BattleLogicFunction_o *v12; // x0
  DataVals_o *v13; // x22
  FunctionMaster_o *FuncMaster; // x0
  BattleLogicFunction_o *logic_k__BackingField; // x0
  DataVals_o *dataVals_k__BackingField; // x21
  FunctionEntity_o *FunctionEntity; // x0

  this->fields._dataVals_k__BackingField = dataVals;
  p_dataVals_k__BackingField = &this->fields._dataVals_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._dataVals_k__BackingField,
    (System_Int32_array **)dataVals,
    *(System_String_array ***)&functionId,
    (System_String_array **)dataVals,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v12 = (BattleLogicFunction_o *)*(p_dataVals_k__BackingField - 2);
  if ( !v12
    || (v13 = *p_dataVals_k__BackingField, FuncMaster = BattleLogicFunction__getFuncMaster(v12, 0LL), !v13)
    || (DataVals__SetDependDataVals(v13, FuncMaster, funcIndex, 0LL),
        (logic_k__BackingField = this->fields._logic_k__BackingField) == 0LL)
    || (dataVals_k__BackingField = this->fields._dataVals_k__BackingField,
        FunctionEntity = BattleLogicFunction__getFunctionEntity(logic_k__BackingField, functionId, 0LL),
        !dataVals_k__BackingField) )
  {
    sub_B170D4();
  }
  DataVals__SetType_25712276(dataVals_k__BackingField, FunctionEntity, *funcIndex, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x20
  signed int max_length; // w8
  unsigned int v6; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v7; // x21
  struct DataVals_o *dataVals_k__BackingField; // x8
  System_Int32_array *LinkageTargetIndividualty; // x0
  System_Int32_array *v10; // x22
  System_Int32_array *AddIndividualty; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *linkedToOtherList; // x0
  DataVals_o *v13; // x0
  System_Int32_array *v14; // x0
  System_Int32_array *v15; // x22
  System_Int32_array *v16; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *linkedToSelfList; // x0

  v4 = this;
  if ( (byte_40F9DC0 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B16FFC(
                                                               &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__,
                                                               funcUnitArray);
    byte_40F9DC0 = 1;
  }
  if ( !funcUnitArray )
    goto LABEL_22;
  max_length = funcUnitArray->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        sub_B17100(this, funcUnitArray, method);
        sub_B170A0();
      }
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._dataVals_k__BackingField;
      if ( !this )
        break;
      v7 = funcUnitArray->m_Items[v6];
      if ( !v7 )
        break;
      dataVals_k__BackingField = v7->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        break;
      if ( LODWORD(this->fields._dataVals_k__BackingField) != dataVals_k__BackingField->fields.funcIndex )
      {
        LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty((DataVals_o *)this, 0LL);
        if ( !v7->fields._dataVals_k__BackingField )
          break;
        v10 = LinkageTargetIndividualty;
        AddIndividualty = DataVals__GetAddIndividualty(v7->fields._dataVals_k__BackingField, 0LL);
        if ( Individuality__IsPartialMatchArray(v10, AddIndividualty, 0LL) )
        {
          linkedToOtherList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.linkedToOtherList;
          if ( !linkedToOtherList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            linkedToOtherList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
        }
        v13 = v4->fields._dataVals_k__BackingField;
        if ( !v13 )
          break;
        v14 = DataVals__GetAddIndividualty(v13, 0LL);
        if ( !v7->fields._dataVals_k__BackingField )
          break;
        v15 = v14;
        v16 = DataVals__GetLinkageTargetIndividualty(v7->fields._dataVals_k__BackingField, 0LL);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__IsPartialMatchArray(v15, v16, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          linkedToSelfList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.linkedToSelfList;
          if ( !linkedToSelfList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            linkedToSelfList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
        }
      }
      max_length = funcUnitArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_22:
    sub_B170D4();
  }
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_dataVals(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        DataVals_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._dataVals_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._dataVals_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._funcTargetArray_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._funcTargetArray_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._logic_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__set_procArg(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunction_ProcListInArgs_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._procArg_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._procArg_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0___checkFuncTargetResult_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  if ( x->fields._targetId_k__BackingField == this->fields.targetId )
    return !x->fields._result_k__BackingField ^ this->fields.result;
  else
    return 0;
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
  WebViewManager_o *Instance; // x0
  ConstantStrMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_IEnumerable_o *ValueArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  BuffList_TYPE_array *v12; // x0
  BuffList_TYPE_array *v13; // x1
  BattleBuffData_o *buffData; // x0

  if ( (byte_40F9DC6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, targetSvtData);
    sub_B16FFC(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_8794/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/, v7);
    byte_40F9DC6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  ValueArray = (System_Collections_IEnumerable_o *)ConstantStrMaster__GetValueArray(
                                                     MasterData_WarQuestSelectionMaster,
                                                     (System_String_o *)StringLiteral_8794/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/,
                                                     0LL,
                                                     0LL);
  if ( !ValueArray )
    return (char)ValueArray;
  if ( !ValueArray[1].monitor )
  {
    LOBYTE(ValueArray) = 0;
    return (char)ValueArray;
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_BuffList_TYPE_(
                                                               ValueArray,
                                                               (const MethodInfo_18C9EEC *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  v12 = System_Linq_Enumerable__ToArray_BuffList_TYPE_(
          v11,
          (const MethodInfo_19C4AB4 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !targetSvtData
    || (v13 = v12, (buffData = targetSvtData->fields.buffData) == 0LL)
    || (ValueArray = (System_Collections_IEnumerable_o *)BattleBuffData__getBuffList_31020028(
                                                           buffData,
                                                           v13,
                                                           0LL,
                                                           0LL,
                                                           0LL)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  LOBYTE(ValueArray) = LODWORD(ValueArray[1].monitor) != 0;
  return (char)ValueArray;
}


bool __fastcall BattleLogicFunctionProcess_MoveToLastSubMemberProcess__checkCondition(
        BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleData_o *data; // x0
  int32_t targetId_k__BackingField; // w21
  BattleServantData_o *ServantData; // x0
  struct BattleLogicFunction_o *v11; // x8
  BattleServantData_o *v12; // x23
  BattleData_o *v13; // x0
  System_Int32_array *AliveFieldSvtIdArray; // x0
  System_Int32_array *v15; // x24
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *BuffList; // x0
  const MethodInfo *v17; // x2
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v18; // x25
  const MethodInfo *v19; // x3
  int32_t DeckIndex; // w0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !funcTarget )
    goto LABEL_17;
  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_17;
  data = logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_17;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  ServantData = BattleData__getServantData(data, targetId_k__BackingField, 0LL);
  v11 = this->fields._logic_k__BackingField;
  if ( !v11 )
    goto LABEL_17;
  v12 = ServantData;
  v13 = v11->fields.data;
  if ( !v13 )
    goto LABEL_17;
  AliveFieldSvtIdArray = BattleData__getAliveFieldSvtIdArray(v13, targetId_k__BackingField, 1, 0LL, 0, 0LL);
  if ( !AliveFieldSvtIdArray )
    goto LABEL_17;
  if ( !v12 )
    goto LABEL_17;
  v15 = AliveFieldSvtIdArray;
  BuffList = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getBuffList(v12, 84, 0LL);
  if ( !BuffList )
    goto LABEL_17;
  v18 = BuffList;
  if ( !BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(BuffList, v12, v17)
    && (int)v15->max_length >= 2
    && !LODWORD(v18[1].klass) )
  {
    return BattleLogicFunctionProcess_CommonFunctionTypeProcess__checkCondition(
             (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)this,
             action,
             funcTarget,
             v19);
  }
  DeckIndex = BattleServantData__getDeckIndex(v12, 0LL);
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL
    || !action )
  {
LABEL_17:
    sub_B170D4();
  }
  BattleActionData__AddNewMoveToSubMember(
    action,
    DeckIndex,
    targetId_k__BackingField,
    dataVals_k__BackingField->fields.funcIndex,
    0,
    0LL);
  funcTarget->fields.invalidType = 1;
  return 0;
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
    sub_B170D4();
  BattleServantData__addBuff(targetSvt, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__CheckConvertBuffData(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BuffConvertEntity_o *buffConvertEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BuffConvertEntity_o **p_buffConvertEntity; // x0
  int32_t ConvertBuffIdFromIndex; // w0
  BuffEntity_o *BuffEntity; // x0
  BuffEntity_o *v13; // x20
  const MethodInfo *v14; // x3

  this->fields.buffConvertEntity = buffConvertEntity;
  p_buffConvertEntity = &this->fields.buffConvertEntity;
  *((_BYTE *)p_buffConvertEntity + 8) = 0;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_buffConvertEntity,
    (System_Int32_array **)buffConvertEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !buffConvertEntity )
    sub_B170D4();
  ConvertBuffIdFromIndex = BuffConvertEntity__GetConvertBuffIdFromIndex(
                             buffConvertEntity,
                             this->fields.convertBuffIndex,
                             0LL);
  this->fields.convertBuffId = ConvertBuffIdFromIndex;
  BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, ConvertBuffIdFromIndex, 0LL);
  if ( BuffEntity )
  {
    v13 = BuffEntity;
    if ( BuffEntity__isCheckGroup(BuffEntity, 0LL)
      && BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
           this,
           v13,
           this->fields.targetSvt,
           v14) )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x0
  bool isParam; // w8
  BuffConvertEntity_o *result; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v16; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  DataVals_o *v19; // x0
  bool v20; // w8
  BattleServantData_o *targetSvt; // x0
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v23; // x0
  Il2CppObject *current; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v26; // x8
  struct DataVals_o *v27; // x8
  struct FunctionEntity_o *funcEnt; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v31; // x8
  DataVals_o *v32; // x0
  struct FunctionEntity_o *v33; // x8
  struct System_Int32_array *vals; // x8
  BuffConvertEntity_o *v35; // x23
  int32_t v36; // w22
  System_Int32_array *ParamArray; // x0
  BuffConvertEntity_o *v38; // x19
  char v39; // w20
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_40F9DC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BuffConvertMaster___, *(_QWORD *)&actorId);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v11);
    byte_40F9DC7 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  entity = 0LL;
  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_41;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_41;
  isParam = DataVals__isParam(dataVals_k__BackingField, 22, 0LL);
  result = 0LL;
  if ( isParam )
    return result;
  v16 = this->fields._funcUnit_k__BackingField;
  if ( !v16 )
    goto LABEL_41;
  procArg_k__BackingField = v16->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_41;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_41;
  if ( externalArg->fields.isPassive )
    return 0LL;
  v19 = v16->fields._dataVals_k__BackingField;
  if ( !v19 )
    goto LABEL_41;
  v20 = DataVals__isParam(v19, 23, 0LL);
  result = 0LL;
  if ( v20 )
    return result;
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt
    || (BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffList(
                                                                          targetSvt,
                                                                          114,
                                                                          0LL),
        (v23 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                BuffList,
                                                                                                (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___)) == 0LL) )
  {
LABEL_41:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    v23,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v41.fields.current;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffConvertMaster___);
    if ( !current )
      sub_B170D4();
    if ( !Master_WarQuestSelectionMaster )
      sub_B170D4();
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           (int32_t)current[1].klass,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__) )
    {
      v26 = this->fields._funcUnit_k__BackingField;
      if ( !v26 )
        sub_B170D4();
      v27 = v26->fields._dataVals_k__BackingField;
      if ( !v27 )
        sub_B170D4();
      funcEnt = v27->fields.funcEnt;
      if ( !funcEnt )
        sub_B170D4();
      if ( !entity )
        sub_B170D4();
      if ( BuffConvertEntity__IsTargetLimit(
             (BuffConvertEntity_o *)entity,
             funcEnt->fields.targetType,
             this->fields._targetId_k__BackingField,
             actorId,
             0LL) )
      {
        v31 = this->fields._funcUnit_k__BackingField;
        if ( !v31 )
          sub_B170D4();
        v32 = v31->fields._dataVals_k__BackingField;
        if ( !v32 )
          sub_B170D4();
        v33 = v32->fields.funcEnt;
        if ( !v33 )
          sub_B170D4();
        vals = v33->fields.vals;
        if ( !vals )
          sub_B170D4();
        if ( !vals->max_length )
        {
          sub_B17100(v32, v29, v30);
          sub_B170A0();
        }
        v35 = (BuffConvertEntity_o *)entity;
        v36 = vals->m_Items[1];
        ParamArray = DataVals__GetParamArray(v32, 112, 0LL);
        if ( !v35 )
          sub_B170D4();
        if ( BuffConvertEntity__TryGetConvertBuffIndex(v35, &this->fields.convertBuffIndex, v36, ParamArray, 0LL) )
        {
          v38 = (BuffConvertEntity_o *)entity;
          v39 = 2;
          goto LABEL_37;
        }
      }
    }
  }
  v39 = 0;
  v38 = 0LL;
LABEL_37:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( ((v39 + 2) & 3) != 0 )
    return 0LL;
  else
    return v38;
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
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  BattleData_o *data; // x0
  struct BattleServantData_o *ServantData; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  BattleLogicFunctionProcess_FunctionTargetCheck__Init(
    (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
    targetId,
    funcUnit,
    method);
  if ( !funcUnit
    || (logic_k__BackingField = funcUnit->fields._logic_k__BackingField) == 0LL
    || (data = logic_k__BackingField->fields.data) == 0LL )
  {
    sub_B170D4();
  }
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  this->fields.targetSvt = ServantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetSvt,
    (System_Int32_array **)ServantData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


bool __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BuffEntity_o *buffEnt,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0
  System_Int32_array *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x8
  System_Int32_array *v12; // x22
  unsigned __int64 v13; // x24
  int32_t v14; // w23
  BattleBuffData_o *BuffData; // x0
  struct System_Collections_Generic_List_int__o *v16; // x8

  if ( (byte_40F9DC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, buffEnt);
    byte_40F9DC8 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  v8 = System_Collections_Generic_List_int___ToArray(
         AttachTargetList_k__BackingField,
         (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_19;
  v11 = *(_QWORD *)&v8->max_length;
  v12 = v8;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
      {
        sub_B17100(v8, v9, v10);
        sub_B170A0();
      }
      if ( !targetSvt )
        break;
      v14 = v12->m_Items[v13 + 1];
      BuffData = BattleServantData__get_BuffData(targetSvt, 0LL);
      if ( !buffEnt || !BuffData )
        break;
      v8 = (System_Int32_array *)BattleBuffData__checkBuffGroup(BuffData, buffEnt->fields.buffGroup, v14, 0LL);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
          (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this,
          v14,
          v10);
      LODWORD(v11) = v12->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_14;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_14:
  if ( (byte_40F9DB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    byte_40F9DB1 = 1;
  }
  v16 = this->fields._AttachTargetList_k__BackingField;
  return !v16 || v16->fields._size < 1;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__MakeAddActionBuffData(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        FunctionEntity_o *funcEnt,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v7; // x0
  BattleActionData_BuffData_o *v8; // x19
  BuffConvertEntity_o *buffConvertEntity; // x0
  BuffEntity_o *BuffEntity; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *dataVals_k__BackingField; // x8
  BuffEntity_o *v13; // x21
  BattleLogicFunction_o *logic_k__BackingField; // x0
  System_Int32_array **GrayActionBuffData; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BuffConvertEntity_o *v22; // x0
  BuffConvertEntity_o *v23; // x0
  System_Int32_array **EffectList; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BuffConvertEntity_o *v31; // x0
  System_Int32_array **OverwritePopupTextFromIndex; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  v7 = BattleLogicFunctionProcess_FunctionTargetCheck__MakeAddActionBuffData(
         (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
         actBuffData,
         buffData,
         funcEnt,
         isCommandSideEffect,
         method);
  v8 = v7;
  if ( this->fields.convertBuffId )
  {
    if ( !v7 )
      goto LABEL_13;
    v7->fields.isGrayDisp = this->fields.isBuffConvertFailure;
    buffConvertEntity = this->fields.buffConvertEntity;
    if ( buffConvertEntity )
    {
      BuffEntity = BuffConvertEntity__GetBuffEntity(buffConvertEntity, this->fields.convertBuffId, 0LL);
      funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
      if ( funcUnit_k__BackingField )
      {
        dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
        if ( dataVals_k__BackingField )
        {
          v13 = BuffEntity;
          logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
          if ( logic_k__BackingField )
          {
            GrayActionBuffData = (System_Int32_array **)BattleLogicFunction__MakeGrayActionBuffData(
                                                          logic_k__BackingField,
                                                          this->fields._targetId_k__BackingField,
                                                          dataVals_k__BackingField->fields.funcIndex,
                                                          v8->fields.popIcon,
                                                          v8->fields.popLabel,
                                                          v8->fields.popColor,
                                                          0LL);
            v8->fields.grayPopupBuffData = (struct BattleActionData_BuffData_o *)GrayActionBuffData;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v8->fields.grayPopupBuffData,
              GrayActionBuffData,
              v16,
              v17,
              v18,
              v19,
              v20,
              v21);
            v8->fields.buffId = this->fields.convertBuffId;
            if ( v13 )
            {
              v8->fields.popIcon = v13->fields.iconId;
              v22 = this->fields.buffConvertEntity;
              if ( v22 )
              {
                v8->fields.popColor = BuffConvertEntity__GetOverwritePopupColorFromIndex(
                                        v22,
                                        this->fields.convertBuffIndex,
                                        v8->fields.popColor,
                                        0LL);
                v23 = this->fields.buffConvertEntity;
                if ( v23 )
                {
                  EffectList = (System_Int32_array **)BuffConvertEntity__GetEffectList(v23, v8->fields.effectList, 0LL);
                  v8->fields.effectList = (struct System_Int32_array *)EffectList;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v8->fields.effectList,
                    EffectList,
                    v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30);
                  v31 = this->fields.buffConvertEntity;
                  if ( v31 )
                  {
                    OverwritePopupTextFromIndex = (System_Int32_array **)BuffConvertEntity__GetOverwritePopupTextFromIndex(
                                                                           v31,
                                                                           this->fields.convertBuffIndex,
                                                                           v13->fields.name,
                                                                           0LL);
                    v8->fields.popLabel = (struct System_String_o *)OverwritePopupTextFromIndex;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v8->fields.popLabel,
                      OverwritePopupTextFromIndex,
                      v33,
                      v34,
                      v35,
                      v36,
                      v37,
                      v38);
                    return v8;
                  }
                }
              }
            }
          }
        }
      }
LABEL_13:
      sub_B170D4();
    }
  }
  return v8;
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
  __int64 v8; // x1
  BattleServantData_o *targetSvt; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  BattleSkillInfoData_array *ActiveSkillInfos; // x20
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_c *v15; // x8
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x21
  Il2CppObject *v18; // x22
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  bool v26; // w8
  bool result; // w0

  if ( (byte_40F9DC9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BattleSkillInfoData___, action);
    sub_B16FFC(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BattleSkillInfoData__bool__TypeInfo, v6);
    sub_B16FFC(&Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__, v7);
    sub_B16FFC(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v8);
    byte_40F9DC9 = 1;
  }
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_B170D4();
  ActiveSkillInfos = BattleServantData__getActiveSkillInfos(targetSvt, 0LL);
  v15 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    v15 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_BattleSkillInfoData__bool__TypeInfo,
                                                                                   v10,
                                                                                   v11,
                                                                                   v12,
                                                                                   v13);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v18,
      Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v19 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    v19->__9__0_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)ActiveSkillInfos,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_18B6074 *)Method_BasicHelper_Any_BattleSkillInfoData___);
  result = 1;
  if ( !v26 )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return result;
}


void __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x0

  if ( (byte_40F78C8 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v1);
    byte_40F78C8 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
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
  System_Boolean_array *SkillSealSelect; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  System_Boolean_array *v8; // x20
  DataVals_o *dataVals_k__BackingField; // x0
  int32_t Param; // w0
  int32_t v11; // w21
  BattleBuffData_o *BuffData; // x0
  System_Boolean_array *SkillSealSelectListFromValue; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  System_Boolean_array *v17; // x21
  unsigned __int64 v18; // x22
  bool *v19; // x23
  BattleServantData_o *v20; // x0
  bool result; // w0

  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    goto LABEL_19;
  SkillSealSelect = BattleServantData__getSkillSealSelect(targetSvt, 0LL);
  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (v8 = SkillSealSelect,
        (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL)
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL), !this->fields.targetSvt)
    || (v11 = Param, (BuffData = BattleServantData__get_BuffData(this->fields.targetSvt, 0LL)) == 0LL)
    || (SkillSealSelectListFromValue = BattleBuffData__getSkillSealSelectListFromValue(BuffData, v11, 0LL)) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  v16 = *(_QWORD *)&SkillSealSelectListFromValue->max_length;
  v17 = SkillSealSelectListFromValue;
  if ( (int)v16 < 1 )
    return 1;
  v18 = 0LL;
  v19 = &SkillSealSelectListFromValue->m_Items[4];
  while ( 1 )
  {
    if ( v18 >= (unsigned int)v16 )
    {
LABEL_20:
      sub_B17100(SkillSealSelectListFromValue, v14, v15);
      sub_B170A0();
    }
    if ( v19[v18] )
    {
      if ( !v8 )
        goto LABEL_19;
      if ( v18 >= v8->max_length )
        goto LABEL_20;
      if ( v8->m_Items[v18 + 4] )
        break;
      v20 = this->fields.targetSvt;
      if ( !v20 )
        goto LABEL_19;
      SkillSealSelectListFromValue = (System_Boolean_array *)BattleServantData__isUseSelfSkill(v20, v18, 0LL);
      if ( ((unsigned __int8)SkillSealSelectListFromValue & 1) == 0 )
        break;
    }
    LODWORD(v16) = v17->max_length;
    if ( (__int64)++v18 >= (int)v16 )
      return 1;
  }
  result = 0;
  this->fields.invalidType = 1;
  return result;
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
  DataVals_o *dataVals_k__BackingField; // x0
  struct System_Int32_array *TargetList; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantData_o *targetSvt; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v20; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_8;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField
    || (TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL), !buffData)
    || (buffData->fields.generalParams = TargetList,
        sub_B16F98(
          (BattleServantConfConponent_o *)&buffData->fields.generalParams,
          (System_Int32_array **)TargetList,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (targetSvt = this->fields.targetSvt) == 0LL)
    || (BattleServantData__addBuff(targetSvt, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL),
        (v20 = this->fields._funcUnit_k__BackingField) == 0LL)
    || (procArg_k__BackingField = v20->fields._procArg_k__BackingField) == 0LL )
  {
LABEL_8:
    sub_B170D4();
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x23
  BattleBuffData_FieldChangeData_o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x5
  struct BattleBuffData_FieldChangeData_o *fieldChangeData; // x8

  if ( (byte_40F9DCA & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_FieldChangeData_TypeInfo, actBuffData);
    byte_40F9DCA = 1;
  }
  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleBuffData_FieldChangeData_o *)sub_B170CC(
                                              BattleBuffData_FieldChangeData_TypeInfo,
                                              actBuffData,
                                              buffData,
                                              fieldFlag,
                                              isChangeMaxHpFlag);
  BattleBuffData_FieldChangeData___ctor_22057672(v11, dataVals_k__BackingField, 0LL);
  if ( !buffData
    || (buffData->fields.fieldChangeData = v11,
        sub_B16F98(
          (BattleServantConfConponent_o *)&buffData->fields.fieldChangeData,
          (System_Int32_array **)v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        buffData->fields.delAfterProcType = 1,
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(
          (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this,
          actBuffData,
          buffData,
          0,
          0,
          v18),
        (fieldChangeData = buffData->fields.fieldChangeData) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19

  if ( (byte_40F9DCB & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo, *(_QWORD *)&targetId);
    byte_40F9DCB = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(
                         BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo,
                         *(_QWORD *)&targetId,
                         funcUnitCheck,
                         method,
                         v4);
  System_Object___ctor(v5, 0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v5;
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
  __int64 v4; // x4
  BattleActionData_FieldBuffData_o *v5; // x19

  if ( (byte_40F9DCC & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_FieldBuffData_TypeInfo, method);
    byte_40F9DCC = 1;
  }
  v5 = (BattleActionData_FieldBuffData_o *)sub_B170CC(BattleActionData_FieldBuffData_TypeInfo, method, v2, v3, v4);
  BattleActionData_FieldBuffData___ctor(v5, 0LL);
  return (BattleActionData_BuffData_o *)v5;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19

  if ( (byte_40F9DCD & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method);
    byte_40F9DCD = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicFunctionProcess_WrapTargetField_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v5;
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
  DataVals_o *dataVals_k__BackingField; // x0
  struct System_Int32_array *TargetList; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x5
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v19; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL
    || (TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL), !buffData)
    || (buffData->fields.generalParams = TargetList,
        sub_B16F98(
          (BattleServantConfConponent_o *)&buffData->fields.generalParams,
          (System_Int32_array **)TargetList,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(
          (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this,
          actBuffData,
          buffData,
          0,
          0,
          v18),
        (v19 = this->fields._funcUnit_k__BackingField) == 0LL)
    || (procArg_k__BackingField = v19->fields._procArg_k__BackingField) == 0LL )
  {
    sub_B170D4();
  }
  procArg_k__BackingField->fields.updateField = 1;
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
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v11; // x21
  ServantEntity_o *svtdata; // x0
  bool result; // w0
  bool IsCancelTransform; // w8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_15;
  if ( !funcTarget )
    goto LABEL_15;
  data = logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_15;
  ServantData = BattleData__getServantData(data, funcTarget->fields._targetId_k__BackingField, 0LL);
  if ( !ServantData )
    goto LABEL_15;
  v11 = ServantData;
  svtdata = ServantData->fields.svtdata;
  if ( !svtdata )
    goto LABEL_15;
  if ( ServantEntity__isInvalidSkillShift(svtdata, 0LL) )
  {
    result = 0;
    funcTarget->fields.invalidType = 1;
    return result;
  }
  if ( !baseVals )
LABEL_15:
    sub_B170D4();
  if ( DataVals__isParam(baseVals, 6, 0LL) && DataVals__GetParam(baseVals, 6, 0, 0LL) != v11->fields.transformIndex )
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.funcTarget = funcTarget;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)funcTarget,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  *text = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)text, 0LL, (System_String_array **)method, v4, v5, v6, v7, v8);
  return resVal;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetField__GetBuffIndividualities(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *target; // x0
  BattleBuffData_o *BuffData; // x0

  target = this->fields.target;
  if ( !target || (BuffData = BattleFieldEnvironmentData__get_BuffData(target, 0LL)) == 0LL )
    sub_B170D4();
  return BattleBuffData__getBuffIndividualities(
           BuffData,
           isActiveOnly,
           isIncludeIgnoreIndiv,
           isIgnoreIndivUnreleaseable,
           0,
           0LL);
}


float __fastcall BattleLogicFunctionProcess_WrapTargetField__GetBuffTOLERANCEMagnification(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  *missText = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)missText,
    0LL,
    (System_String_array **)opSvt,
    (System_String_array **)missText,
    (System_Boolean_array **)method,
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

  if ( (byte_40F9DCE & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F9DCE = 1;
  }
  return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
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
    sub_B170D4();
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  *missText = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)missText,
    0LL,
    (System_String_array **)opSvt,
    (System_String_array **)missText,
    (System_Boolean_array **)upOnly,
    (System_Int32_array **)method,
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
  BattleBuffData_o *BuffData; // x0

  target = this->fields.target;
  if ( !target || (BuffData = BattleFieldEnvironmentData__get_BuffData(target, 0LL)) == 0LL )
    sub_B170D4();
  return BattleBuffData__getSameIndivualityBuffSum(BuffData, indiv, isActiveOnly, 0, 0, 0LL);
}


void __fastcall BattleLogicFunctionProcess_WrapTargetField__InitPartial(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x1

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data )
    sub_B170D4();
  FieldEnvData_k__BackingField = Data->fields._FieldEnvData_k__BackingField;
  this->fields.target = FieldEnvData_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.target,
    (System_Int32_array **)FieldEnvData_k__BackingField,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  BattleBuffData_o *buffData; // x0

  target = this->fields.target;
  if ( !target || (buffData = target->fields.buffData) == 0LL )
    sub_B170D4();
  return BattleBuffData__getBuffIndividualities(
           buffData,
           isActiveOnly,
           isIncludeIgnoreIndiv,
           isIgnoreIndivUnreleaseable,
           0,
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
    sub_B170D4();
  return BattleServantData__getBuffTOLERANCEMagnification(target, buffIndiv, opSvt, missText, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetServant__GetBuffTargetCardIndexArray(
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
    sub_B170D4();
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
    sub_B170D4();
  return BattleServantData__GetCommandCardIndex(target, userCommandCodeId, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetServant__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_B170D4();
  return BattleServantData__getIndividualities(target, 0LL, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  return BattleServantData__getSameIndiualityBuffSum(target, indiv, isActiveOnly, 0, 0, 0LL);
}


void __fastcall BattleLogicFunctionProcess_WrapTargetServant__InitPartial(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleServantData_o *ServantData; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || !Data )
    sub_B170D4();
  ServantData = BattleData__getServantData(Data, funcTarget->fields._targetId_k__BackingField, 0LL);
  this->fields.target = ServantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.target,
    (System_Int32_array **)ServantData,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__IsSatisfyTargetDefeatPointCondtion(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  DataVals_o *BaseVals; // x0
  BattleServantData_o *target; // x0
  int32_t DefeatPoint; // w0
  int32_t param; // [xsp+Ch] [xbp-4h] BYREF

  param = 0;
  BaseVals = BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
               (BattleLogicFunctionProcess_WrapTargetData_o *)this,
               method);
  if ( !BaseVals )
    goto LABEL_6;
  if ( DataVals__TryGetParam(BaseVals, 145, &param, 0LL) )
  {
    target = this->fields.target;
    if ( target )
    {
      DefeatPoint = BattleServantData__getDefeatPoint(target, 0LL);
      return (DefeatPoint < 1) ^ (param > 0);
    }
LABEL_6:
    sub_B170D4();
  }
  return 1;
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__IsSatisfyTargetRessurectableCondtion(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  DataVals_o *BaseVals; // x0
  BattleServantData_o *target; // x0
  bool exists; // w0
  char v6; // w8
  int32_t param; // [xsp+Ch] [xbp-4h] BYREF

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
  target = this->fields.target;
  if ( !target )
LABEL_7:
    sub_B170D4();
  exists = BattleServantData__ExistsResurrection(target, 0LL);
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
    sub_B170D4();
  return BattleServantData__get_BuffData(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target )
    sub_B170D4();
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
    sub_B170D4();
  return BattleServantData__checkPlayer(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_B170D4();
  return BattleServantData__isGuts(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_B170D4();
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
    sub_B170D4();
  return BattleServantData__isShiftableServant(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsUseDefeatPointReady(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  struct BaseBattleEvent_o *battleEvent; // x0

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data || (battleEvent = Data->fields.battleEvent) == 0LL )
    sub_B170D4();
  return ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, struct BattleServantData_o *, Il2CppMethodPointer))battleEvent->klass->vtable._19_IsUseDefeatPointReady.method)(
           battleEvent,
           this->fields.target,
           battleEvent->klass->vtable._20_IsLogicEscape.methodPtr);
}