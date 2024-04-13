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
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v9; // x19
  _BOOL4 v10; // w22
  bool isParam; // w0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v12; // x21
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v13; // x20
  int klass; // w11
  unsigned __int64 i; // x8
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_c *v16; // x9
  __int64 j; // x8
  unsigned int v18; // w10
  int v19; // w9
  char *v20; // x10
  __int64 v22; // x0
  System_Collections_ICollection_o *self; // [xsp+0h] [xbp-30h] BYREF
  System_Int32_array *originalTvals; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7C86 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B5D5C4(
                                                                     &int___TypeInfo,
                                                                     (_DWORD)baseVals,
                                                                     (_DWORD)wrapTarget,
                                                                     funcEnt);
    byte_42E7C86 = 1;
  }
  self = 0LL;
  originalTvals = 0LL;
  if ( !funcEnt )
    goto LABEL_29;
  FunctionEntity__GetTargetVals(funcEnt, &originalTvals, (System_Int32_array_array **)&self, 0LL);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)originalTvals,
                                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
  }
  if ( !wrapTarget )
    goto LABEL_29;
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass **))wrapTarget->klass[1]._1.methods)(
                                                                   wrapTarget,
                                                                   wrapTarget->klass[1]._1.nestedTypes);
  if ( !baseVals )
    goto LABEL_29;
  v9 = this;
  v10 = DataVals__GetParam(baseVals, 62, 0, 0LL) < 1;
  isParam = DataVals__isParam(baseVals, 140, 0LL);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, _BOOL4, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))wrapTarget->klass[1]._1.implementedInterfaces)(
                                                                   wrapTarget,
                                                                   v10,
                                                                   0LL,
                                                                   isParam,
                                                                   wrapTarget->klass[1]._1.interfaceOffsets);
  if ( !v9 )
    goto LABEL_29;
  v12 = this;
  if ( !this )
    goto LABEL_29;
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B5D5DC(
                                                                   int___TypeInfo,
                                                                   (unsigned int)(LODWORD(this[1].klass)
                                                                                + LODWORD(v9[1].klass)));
  v13 = this;
  klass = (int)v9[1].klass;
  if ( klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        goto LABEL_28;
      if ( !this )
        goto LABEL_29;
      if ( i >= LODWORD(this[1].klass) )
      {
LABEL_28:
        v22 = sub_B5D6C8(this);
        sub_B5D668(v22, 0LL);
      }
      *((_DWORD *)&this[1].monitor + i) = *((_DWORD *)&v9[1].monitor + i);
      klass = (int)v9[1].klass;
    }
    goto LABEL_19;
  }
  if ( !this )
LABEL_29:
    sub_B5D69C(this, baseVals);
LABEL_19:
  v16 = this[1].klass;
  for ( j = klass; j < (int)v16; ++j )
  {
    v18 = j - LODWORD(v9[1].klass);
    if ( v18 >= LODWORD(v12[1].klass) || (unsigned int)j >= (unsigned int)v16 )
      goto LABEL_28;
    v19 = *((_DWORD *)&v12[1].monitor + (int)v18);
    v20 = (char *)this + 4 * j;
    *((_DWORD *)v20 + 8) = v19;
    v16 = this[1].klass;
  }
  if ( BasicHelper__IsNullOrEmpty(self, 0LL) )
    return Individuality__CheckSignedIndividualities((System_Int32_array *)v13, originalTvals, 0LL);
  else
    return Individuality__CheckSignedMultiIndividuality(
             (System_Int32_array *)v13,
             (System_Int32_array_array *)self,
             0LL);
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

  if ( (byte_42E7C85 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo, targetId, (_DWORD)funcUnitCheck, method);
    byte_42E7C85 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
  System_Object___ctor(v4, 0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v4;
}


bool __fastcall BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCommonCondition(
        BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x26
  int32_t targetId_k__BackingField; // w8
  DataVals_o *dataVals_k__BackingField; // x20
  FunctionEntity_o *funcEnt; // x24
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v29; // x23
  System_String_o *v30; // x25
  System_String_o *v31; // x0
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x23
  int32_t funcIndex; // w25
  char v34; // w0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v35; // x0
  const MethodInfo *v36; // x4
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8
  struct BattleLogicFunction_o *v39; // x8
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  bool result; // w0
  int32_t uniqueId[2]; // [xsp+8h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_42E7C84 & 1) == 0 )
  {
    sub_B5D5C4(&FuncList_TYPE_TypeInfo, (_DWORD)action, (_DWORD)funcTarget, method);
    sub_B5D5C4(&StringLiteral_94/*"  => targetId : "*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_93/*"  <= no Target"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_217/*" funcEnt.funcType : "*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_92/*"  <= no Individuality"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_91/*"  <= is No applyTarget "*/, v19, v20, v21);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B5D5C4(&StringLiteral_90/*"  <= is Dead"*/, v22, v23, v24);
    byte_42E7C84 = 1;
  }
  *(_QWORD *)uniqueId = 0LL;
  if ( !funcTarget )
    goto LABEL_43;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcTarget->fields.invalidType = 0;
  uniqueId[1] = targetId_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_43;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_43;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  uniqueId[0] = dataVals_k__BackingField->fields.funcType;
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)j_il2cpp_value_box_0(FuncList_TYPE_TypeInfo, uniqueId);
  if ( !this )
    goto LABEL_43;
  v29 = this;
  v30 = (System_String_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass->vtable._4_init.methodPtr);
  uniqueId[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v29);
  System_String__Concat_44577788((System_String_o *)StringLiteral_217/*" funcEnt.funcType : "*/, v30, 0LL);
  v31 = System_Int32__ToString((int32_t)&uniqueId[1], 0LL);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_String__Concat_44577788(
                                                                   (System_String_o *)StringLiteral_94/*"  => targetId : "*/,
                                                                   v31,
                                                                   0LL);
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  if ( !WrapTarget_k__BackingField )
    goto LABEL_43;
  if ( (((__int64 (__fastcall *)(struct BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.namespaze)(
          funcTarget->fields._WrapTarget_k__BackingField,
          WrapTarget_k__BackingField->klass[1]._1.byval_arg.data) & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))&WrapTarget_k__BackingField->klass[1]._1.byval_arg.bits)(
                                                                     WrapTarget_k__BackingField,
                                                                     WrapTarget_k__BackingField->klass[1]._1.this_arg.data);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_43;
      if ( FunctionEntity__isTargetEnemy(funcEnt, 0LL) )
        goto LABEL_46;
    }
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass *))&WrapTarget_k__BackingField->klass[1]._1.this_arg.bits)(
                                                                     WrapTarget_k__BackingField,
                                                                     WrapTarget_k__BackingField->klass[1]._1.element_class);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !funcEnt )
        goto LABEL_43;
      if ( FunctionEntity__isTargetPlayer(funcEnt, 0LL) )
        goto LABEL_46;
    }
    if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass *))WrapTarget_k__BackingField->klass[1]._1.castClass)(
            WrapTarget_k__BackingField,
            WrapTarget_k__BackingField->klass[1]._1.declaringType) & 1) != 0 )
    {
LABEL_46:
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__isCheckDead(
                                                                       dataVals_k__BackingField,
                                                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_25;
      if ( dataVals_k__BackingField->fields.flgBoost )
        goto LABEL_25;
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.parent)(
                                                                       WrapTarget_k__BackingField,
                                                                       WrapTarget_k__BackingField->klass[1]._1.generic_class);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_25;
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.typeMetadataHandle)(
                                                                       WrapTarget_k__BackingField,
                                                                       WrapTarget_k__BackingField->klass[1]._1.interopData);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_25;
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.klass)(
                                                                       WrapTarget_k__BackingField,
                                                                       WrapTarget_k__BackingField->klass[1]._1.fields);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_25;
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.events)(
                                                                       WrapTarget_k__BackingField,
                                                                       WrapTarget_k__BackingField->klass[1]._1.properties);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_25;
      if ( !funcEnt )
        goto LABEL_43;
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)FuncList__Check(43, funcEnt->fields.funcType, 0LL);
      if ( ((unsigned __int8)this & 1) != 0
        || (this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)FuncList__Check(
                                                                             45,
                                                                             funcEnt->fields.funcType,
                                                                             0LL),
            ((unsigned __int8)this & 1) != 0) )
      {
LABEL_25:
        if ( !action )
          goto LABEL_43;
        action->fields.isSuccessTargetSelection = 1;
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        v34 = (*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))&WrapTarget_k__BackingField->klass[1]._1.byval_arg.bits)(
                WrapTarget_k__BackingField,
                WrapTarget_k__BackingField->klass[1]._1.this_arg.data);
        BattleActionData__setFuncTargetPlayerType(action, funcIndex, v34 & 1, 0LL);
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__CheckTargetIndividuality(
                                                                         v35,
                                                                         dataVals_k__BackingField,
                                                                         WrapTarget_k__BackingField,
                                                                         funcEnt,
                                                                         v36);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          result = 0;
          funcTarget->fields.invalidType = 1;
          return result;
        }
        if ( funcUnit_k__BackingField->fields.questFuncFlg )
        {
          if ( !funcUnit_k__BackingField->fields.isLowestStarFunction )
            goto LABEL_32;
          logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
          if ( !logic_k__BackingField )
            goto LABEL_43;
          data = logic_k__BackingField->fields.data;
          if ( !data )
            goto LABEL_43;
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__CheckFunctionTriggerStar(
                                                                           dataVals_k__BackingField,
                                                                           data->fields.totalCriticalStars,
                                                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
LABEL_32:
            v39 = v6->fields._logic_k__BackingField;
            if ( v39 )
            {
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v39->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, uniqueId[1], 0LL);
                if ( BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyTargetHpCondition(
                       (BattleLogicFunctionProcess_FunctionUnitCheck_o *)ServantData,
                       dataVals_k__BackingField,
                       ServantData,
                       v41)
                  && ((*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))&WrapTarget_k__BackingField->klass[1]._2.naturalAligment)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass[1].vtable._0_Equals.methodPtr) & 1) != 0
                  && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))WrapTarget_k__BackingField->klass[1].vtable._0_Equals.method)(
                        WrapTarget_k__BackingField,
                        WrapTarget_k__BackingField->klass[1].vtable._1_Finalize.methodPtr) & 1) != 0 )
                {
                  return 1;
                }
                BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v42);
                return 0;
              }
            }
LABEL_43:
            sub_B5D69C(this, action);
          }
LABEL_41:
          result = 0;
          funcTarget->fields.invalidType = 1;
          return result;
        }
        if ( DataVals__isShowQuestNoEffect(dataVals_k__BackingField, 0LL) )
          goto LABEL_41;
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
    sub_B5D69C(this, action);
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
    sub_B5D69C(this, action);
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
    sub_B5D69C(this, method);
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
  sub_B5D560(
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
  sub_B5D560(
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
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v6; // x27
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x9
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x23
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x25
  FunctionEntity_o *funcEnt; // x22
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v58; // x26
  struct System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x8
  BuffEntity_o *v60; // x24
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v61; // x22
  System_String_o *v62; // x28
  System_Int32_array *vals; // x22
  System_Int32_array *ParamArray; // x0
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v66; // x28
  bool isDisabledBuff; // w22
  const MethodInfo *v68; // x4
  const MethodInfo *v69; // x2
  bool result; // w0
  int32_t v71; // w8
  struct BattleLogicFunction_o *v72; // x8
  const MethodInfo *v73; // x3
  int32_t Param; // w27
  int32_t v75; // w27
  int v76; // w27
  float v77; // s0
  int32_t v78; // w0
  float v79; // s0
  System_String_o *v80; // x0
  System_String_o *v81; // x22
  System_String_o *v82; // x0
  int32_t v83; // w22
  __int64 v84; // x22
  System_String_o *v85; // x0
  const MethodInfo *v86; // x3
  _BOOL8 v87; // x0
  const MethodInfo *v88; // x4
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int32_t Value; // w0
  System_Int32_array *v96; // x22
  int32_t v97; // w21
  struct System_String_o *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_o *v105; // x0
  __int64 v106; // x0
  int32_t v107; // [xsp+0h] [xbp-70h]
  int32_t targetId; // [xsp+4h] [xbp-6Ch]
  MethodInfo methoda; // [xsp+8h] [xbp-68h] BYREF

  v6 = this;
  if ( (byte_42E7C88 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)action, (_DWORD)funcTarget, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&BuffList_TYPE_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12521/*"STATUS_UP_BUFF"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_20169/*"is same Group "*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_20168/*"is rate over "*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_2486/*"BATTLE_GUARD_FUNCTION"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_20170/*"is same Limit "*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17613/*"check--Group( "*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_190/*" buff : "*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_185/*" avoid buff "*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_133/*" < "*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_17614/*"check--Rate( "*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_17612/*"check-- SameBuffLimit"*/, v46, v47, v48);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B5D5C4(&StringLiteral_18156/*"defRate"*/, v49, v50, v51);
    byte_42E7C88 = 1;
  }
  memset(&methoda, 0, 24);
  if ( !funcTarget )
    goto LABEL_74;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_74;
  logic_k__BackingField = v6->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_74;
  if ( !action )
    goto LABEL_74;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_74;
  targetId = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleData__getServantData(
                                                                 (BattleData_o *)this,
                                                                 action->fields.actorId,
                                                                 0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_74;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v58 = this;
  ((void (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))funcTarget->klass->vtable._14_InitPrevCheckCondition.method)(
    funcTarget,
    action,
    WrapTarget_k__BackingField,
    funcTarget->klass->vtable._15_GetAttachTargetArray.methodPtr);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetCardIndex(dataVals_k__BackingField, 0LL);
  if ( ((unsigned int)this & 0x80000000) == 0
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetCardIndividuality(
                                                                       dataVals_k__BackingField,
                                                                       0LL),
        ((unsigned int)this & 0x80000000) == 0) )
  {
    CardIdsIndexList_k__BackingField = funcTarget->fields._CardIdsIndexList_k__BackingField;
    if ( !CardIdsIndexList_k__BackingField )
      goto LABEL_74;
    if ( CardIdsIndexList_k__BackingField->fields._size <= 0 )
    {
LABEL_28:
      result = 0;
      v71 = 1;
LABEL_29:
      funcTarget->fields.invalidType = v71;
      return result;
    }
  }
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_74;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                 (BattleLogicFunction_o *)this,
                                                                 funcEnt,
                                                                 0LL);
  if ( !this )
    goto LABEL_74;
  v60 = (BuffEntity_o *)this;
  HIDWORD(methoda.methodPointer) = this->fields._logic_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)j_il2cpp_value_box_0(
                                                                 BuffList_TYPE_TypeInfo,
                                                                 (char *)&methoda.methodPointer + 4);
  if ( !this )
    goto LABEL_74;
  v61 = this;
  v62 = (System_String_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateProcess_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass->vtable._4_init.methodPtr);
  HIDWORD(methoda.methodPointer) = *(_DWORD *)j_il2cpp_object_unbox_0(v61);
  System_String__Concat_44577788((System_String_o *)StringLiteral_190/*" buff : "*/, v62, 0LL);
  vals = v60->fields.vals;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 112, 0LL);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)CommonFunction__JoinIndiv(vals, ParamArray, 0LL);
  if ( !procArg_k__BackingField
    || (externalArg = procArg_k__BackingField->fields.externalArg) == 0LL
    || (v66 = this,
        (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField) == 0LL) )
  {
LABEL_74:
    sub_B5D69C(this, action);
  }
  isDisabledBuff = BattleLogicFunction__isDisabledBuff(
                     (BattleLogicFunction_o *)this,
                     externalArg->fields.isPassive,
                     dataVals_k__BackingField,
                     0LL);
  if ( !isDisabledBuff )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField;
    if ( !this )
      goto LABEL_74;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__isFailDependentLastResult(
                                                                   (BattleLogicFunction_o *)this,
                                                                   procArg_k__BackingField,
                                                                   targetId,
                                                                   dataVals_k__BackingField,
                                                                   0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_39;
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, Il2CppRGCTXData *))WrapTarget_k__BackingField->klass[1].static_fields)(
                                                                   WrapTarget_k__BackingField,
                                                                   v66,
                                                                   v58,
                                                                   WrapTarget_k__BackingField->klass[1].rgctx_data);
    goto LABEL_27;
  }
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__IsForciblyAddState(
                                                                 dataVals_k__BackingField,
                                                                 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.field_count)(
                                                                   WrapTarget_k__BackingField,
                                                                   v66,
                                                                   v58,
                                                                   *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.interfaces_count);
LABEL_27:
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_28;
  }
  v72 = v6->fields._logic_k__BackingField;
  if ( !v72 )
    goto LABEL_74;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField,
          v72->fields.data,
          v68) )
    goto LABEL_39;
  Param = DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
  if ( (Param & 0x80000000) == 0 )
  {
    v107 = Param;
    goto LABEL_36;
  }
  if ( !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField->fields.funcIndex,
          v73) )
  {
LABEL_39:
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      dataVals_k__BackingField,
      v69);
    return 0;
  }
  v107 = BattleUtility__Abs_23939196(Param, 0LL);
LABEL_36:
  methoda.name = 0LL;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleRandom__getNext(1000, 0LL);
  HIDWORD(methoda.invoker_method) = (_DWORD)this;
  if ( isDisabledBuff )
  {
    LODWORD(methoda.invoker_method) = 1000;
    if ( !DataVals__isParam(dataVals_k__BackingField, 113, 0LL) )
    {
      v75 = v107;
      LODWORD(methoda.invoker_method) = v107;
      goto LABEL_49;
    }
  }
  else
  {
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    v76 = (int)this;
    v77 = ((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, const char **, void *))WrapTarget_k__BackingField->klass[1]._2.typeHierarchy)(
            WrapTarget_k__BackingField,
            v66,
            v58,
            &methoda.name,
            WrapTarget_k__BackingField->klass[1]._2.unity_user_data);
    v78 = BattleUtility__FloorToInt((float)(v77 * 1000.0) + (float)v76, 0LL);
    LODWORD(methoda.invoker_method) = 1000;
    HIDWORD(methoda.invoker_method) = v78;
  }
  v75 = v107;
  if ( v58 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__isParam(dataVals_k__BackingField, 113, 0LL);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    v79 = (float)((*(float (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, const char **, _QWORD, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.thread_static_fields_offset)(
                    WrapTarget_k__BackingField,
                    v66,
                    v58,
                    &methoda.name,
                    (unsigned __int8)this & 1,
                    *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.token)
                * 1000.0)
        + (float)v107;
  }
  else
  {
    v79 = (float)v107;
  }
  LODWORD(methoda.invoker_method) = BattleUtility__FloorToInt(v79, 0LL);
LABEL_49:
  *(float *)&methoda.methodPointer = (float)DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
  v80 = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
  System_String__Concat_44577788((System_String_o *)StringLiteral_18156/*"defRate"*/, v80, 0LL);
  v81 = System_Int32__ToString((int32_t)&methoda.invoker_method + 4, 0LL);
  v82 = System_Int32__ToString((int32_t)&methoda.invoker_method, 0LL);
  System_String__Concat_44581200(
    (System_String_o *)StringLiteral_17614/*"check--Rate( "*/,
    v81,
    (System_String_o *)StringLiteral_133/*" < "*/,
    v82,
    0LL);
  if ( DataVals__isSameBuffLimit(dataVals_k__BackingField, 0LL) )
  {
    v83 = DataVals__GetParam(dataVals_k__BackingField, 40, 0, 0LL);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetSameBuffLimitTargetIndividuality(
                                                                   dataVals_k__BackingField,
                                                                   0LL);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    if ( (*(int (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.initializationExceptionGCHandle)(
           WrapTarget_k__BackingField,
           this,
           1LL,
           *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.cctor_finished) >= v83 )
    {
      result = 0;
      funcTarget->fields.invalidType = 1;
      return result;
    }
  }
  v84 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._11_GetConvertBuffEntity.method)(
          funcTarget,
          (unsigned int)action->fields.actorId,
          funcTarget->klass->vtable._12_CheckConvertBuffData.methodPtr);
  v85 = System_Int32__ToString((int)v60 + 72, 0LL);
  System_String__Concat_44577788((System_String_o *)StringLiteral_17613/*"check--Group( "*/, v85, 0LL);
  if ( !v84 )
  {
    v87 = BuffEntity__isCheckGroup(v60, 0LL);
    if ( v87
      && BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
           (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v87,
           funcTarget,
           v60,
           WrapTarget_k__BackingField,
           v88) )
    {
      goto LABEL_28;
    }
  }
  if ( (v75 & 0x80000000) != 0
    && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField->fields.funcIndex,
          v86) )
  {
    LODWORD(methoda.invoker_method) = -1000;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BuffEntity_o *, void *))funcTarget->klass->vtable._16_CheckBuffCondtion.method)(
          funcTarget,
          action,
          v60,
          funcTarget->klass[1]._1.image) & 1) == 0 )
    return 0;
  if ( SHIDWORD(methoda.invoker_method) >= SLODWORD(methoda.invoker_method) )
  {
    funcTarget->fields.invalidText = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&funcTarget->fields.invalidText, 0LL, v89, v90, v91, v92, v93, v94);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_12521/*"STATUS_UP_BUFF"*/, 0LL);
    if ( SHIDWORD(methoda.invoker_method) < 1000 )
    {
LABEL_72:
      v105 = System_Int32__ToString((int32_t)&methoda.invoker_method, 0LL);
      System_String__Concat_44577788((System_String_o *)StringLiteral_20168/*"is rate over "*/, v105, 0LL);
      result = 0;
      v71 = 2;
      goto LABEL_29;
    }
    v96 = v60->fields.vals;
    v97 = Value;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B5D5DC(int___TypeInfo, 1LL);
    if ( this )
    {
      if ( !LODWORD(this[1].klass) )
      {
        v106 = sub_B5D6C8(this);
        sub_B5D668(v106, 0LL);
      }
      LODWORD(this[1].monitor) = v97;
      if ( !Individuality__CheckIndividualities(v96, (System_Int32_array *)this, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v98 = LocalizationManager__Get((System_String_o *)StringLiteral_2486/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
        funcTarget->fields.invalidText = v98;
        sub_B5D560(
          (BattleServantConfConponent_o *)&funcTarget->fields.invalidText,
          (System_Int32_array **)v98,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104);
      }
      goto LABEL_72;
    }
    goto LABEL_74;
  }
  if ( v84
    && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._12_CheckConvertBuffData.method)(
          funcTarget,
          v84,
          funcTarget->klass->vtable._13_GetFixBuffEntity.methodPtr) & 1) == 0 )
  {
    result = 0;
    v71 = 3;
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
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  BattleLogicFunctionProcess_CommonAddStateProcess_c *klass; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v11; // x22
  unsigned __int64 v12; // x24
  int32_t v13; // w23
  struct System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x8
  __int64 v16; // x0

  if ( (byte_42E7C89 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B5D5C4(
                                                                   &Method_System_Collections_Generic_List_int__ToArray__,
                                                                   (_DWORD)funcTarget,
                                                                   (_DWORD)buffEnt,
                                                                   wrapTarget);
    byte_42E7C89 = 1;
  }
  if ( !funcTarget )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcTarget->fields._AttachTargetList_k__BackingField;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_20;
  klass = this[1].klass;
  v11 = this;
  if ( (int)klass >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)klass )
      {
        v16 = sub_B5D6C8(this);
        sub_B5D668(v16, 0LL);
      }
      if ( !wrapTarget )
        break;
      v13 = *((_DWORD *)&v11[1].monitor + v12);
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, const char *))wrapTarget->klass[1]._1.gc_desc)(
                                                                     wrapTarget,
                                                                     wrapTarget->klass[1]._1.name);
      if ( !buffEnt || !this )
        break;
      this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleBuffData__checkBuffGroup(
                                                                     (BattleBuffData_o *)this,
                                                                     buffEnt->fields.buffGroup,
                                                                     v13,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(funcTarget, v13, v8);
      LODWORD(klass) = v11[1].klass;
      if ( (__int64)++v12 >= (int)klass )
        goto LABEL_15;
    }
LABEL_20:
    sub_B5D69C(this, funcTarget);
  }
LABEL_15:
  if ( (byte_42E7C8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)funcTarget, (_DWORD)v8, v9);
    byte_42E7C8B = 1;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct DataVals_o *dataVals_k__BackingField; // x8
  int logic_k__BackingField_high; // w8
  _QWORD *v26; // x8
  Il2CppObject *v27; // x19

  v5 = this;
  if ( (byte_42E7C8A & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo, targetId, (_DWORD)funcUnitCheck, method);
    sub_B5D5C4(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo, v18, v19, v20);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B5D5C4(
                                                                   &BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo,
                                                                   v21,
                                                                   v22,
                                                                   v23);
    byte_42E7C8A = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v5->fields._logic_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                       (BattleLogicFunction_o *)this,
                                                                       dataVals_k__BackingField->fields.funcEnt,
                                                                       0LL)) == 0LL )
  {
    sub_B5D69C(this, *(_QWORD *)&targetId);
  }
  logic_k__BackingField_high = HIDWORD(this->fields._logic_k__BackingField);
  if ( logic_k__BackingField_high <= 161 )
  {
    if ( logic_k__BackingField_high == 154 )
    {
      v26 = &BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo;
      goto LABEL_22;
    }
    if ( logic_k__BackingField_high == 161 )
    {
      v26 = &BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo;
      goto LABEL_22;
    }
LABEL_18:
    v26 = &BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo;
    goto LABEL_22;
  }
  if ( logic_k__BackingField_high > 10001 )
  {
    if ( logic_k__BackingField_high == 10002 )
    {
      v26 = &BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo;
      goto LABEL_22;
    }
    if ( logic_k__BackingField_high == 10003 )
    {
      v26 = &BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo;
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  if ( logic_k__BackingField_high == 176 )
  {
    v26 = &BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo;
    goto LABEL_22;
  }
  if ( logic_k__BackingField_high != 10001 )
    goto LABEL_18;
  v26 = &BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo;
LABEL_22:
  v27 = (Il2CppObject *)sub_B5D694(*v26);
  System_Object___ctor(v27, 0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v27;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__checkCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x10
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v8; // x2

  if ( (byte_42E7C87 & 1) == 0 )
  {
    sub_B5D5C4(
      &BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo,
      (_DWORD)action,
      (_DWORD)funcTarget,
      method);
    byte_42E7C87 = 1;
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
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Int32_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E7C8F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)buff, (_DWORD)method, v3);
    byte_42E7C8F = 1;
  }
  CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField
    || (CardIdsIndexList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       CardIdsIndexList_k__BackingField,
                                                                                       (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        !buff)
    || (buff->fields.servantCardIdsIndexArray = (struct System_Int32_array *)CardIdsIndexList_k__BackingField,
        sub_B5D560(
          (BattleServantConfConponent_o *)&buff->fields.servantCardIdsIndexArray,
          (System_Int32_array **)CardIdsIndexList_k__BackingField,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (CardIdsIndexList_k__BackingField = this->fields._AttachTargetList_k__BackingField) == 0LL) )
  {
    sub_B5D69C(CardIdsIndexList_k__BackingField, buff);
  }
  v13 = System_Collections_Generic_List_int___ToArray(
          CardIdsIndexList_k__BackingField,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  buff->fields.attachTargets = v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&buff->fields.attachTargets,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x22
  System_Int32_array *result; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_int__o *v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_int__o *v55; // x23
  System_Action_int__o *v56; // x20
  __int64 v57; // x0

  if ( (byte_42E7C8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)wrapTarget, userCommandCodeId, cardIdsIndexArray);
    sub_B5D5C4(&System_Action_int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BasicHelper_ForEach_int___, v12, v13, v14);
    sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(
      &Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
      v33,
      v34,
      v35);
    sub_B5D5C4(&BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo, v36, v37, v38);
    byte_42E7C8D = 1;
  }
  v39 = sub_B5D694(BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0___ctor(
    (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)v39,
    0LL);
  if ( !v39 )
    goto LABEL_14;
  *(_QWORD *)(v39 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v39 + 24), (System_Int32_array **)this, v42, v43, v44, v45, v46, v47);
  v48 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  *(_QWORD *)(v39 + 16) = v48;
  sub_B5D560((BattleServantConfConponent_o *)(v39 + 16), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  if ( userCommandCodeId >= 1 )
  {
    if ( !wrapTarget )
      goto LABEL_14;
    v55 = *(System_Collections_Generic_List_int__o **)(v39 + 16);
    result = (System_Int32_array *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, _QWORD))&wrapTarget->klass[1]._2.element_size)(
                                     wrapTarget,
                                     userCommandCodeId,
                                     *(_QWORD *)&wrapTarget->klass[1]._2.static_fields_size);
    if ( !v55 )
      goto LABEL_14;
    System_Collections_Generic_List_int___Add(
      v55,
      (_DWORD)result + 101,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  v56 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v56,
    (Il2CppObject *)v39,
    Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)cardIdsIndexArray,
    (System_Action_T__o *)v56,
    (const MethodInfo_1AD7A44 *)Method_BasicHelper_ForEach_int___);
  result = *(System_Int32_array **)(v39 + 16);
  if ( !result )
    goto LABEL_14;
  if ( (int)result->max_length > 0 )
    return System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)result,
             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
LABEL_14:
    sub_B5D69C(result, v41);
  if ( !result->max_length )
  {
    v57 = sub_B5D6C8(result);
    sub_B5D668(v57, 0LL);
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
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_IEnumerable_T__o *v13; // x22
  System_Collections_Generic_List_int__o *v14; // x23
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **p_CardIdsIndexList_k__BackingField; // x22
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
  System_Collections_Generic_List_int__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  v6 = this;
  if ( (byte_42E7C8C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)action, (_DWORD)wrapTarget, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v7, v8, v9);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_B5D5C4(
                                                                       &System_Collections_Generic_List_int__TypeInfo,
                                                                       v10,
                                                                       v11,
                                                                       v12);
    byte_42E7C8C = 1;
  }
  if ( !wrapTarget
    || (v13 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, _QWORD, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass[1]._2.genericContainerHandle)(
                                                               wrapTarget,
                                                               *(_QWORD *)&wrapTarget->klass[1]._2.instance_size,
                                                               wrapTarget,
                                                               method),
        v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_50870440(
          v14,
          v13,
          (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__),
        v6->fields._CardIdsIndexList_k__BackingField = v14,
        p_CardIdsIndexList_k__BackingField = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **)&v6->fields._CardIdsIndexList_k__BackingField,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v6->fields._CardIdsIndexList_k__BackingField,
          (System_Int32_array **)v14,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        !action)
    || (this = *p_CardIdsIndexList_k__BackingField) == 0LL )
  {
    sub_B5D69C(this, action);
  }
  userCommandCodeId = action->fields.userCommandCodeId;
  v23 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)this,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_AttachTargetList_k__BackingField = (BattleServantConfConponent_o *)&v6->fields._AttachTargetList_k__BackingField;
  v25 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, System_Int32_array *, Il2CppMethodPointer))v6->klass->vtable._15_GetAttachTargetArray.method)(
                                                         v6,
                                                         wrapTarget,
                                                         userCommandCodeId,
                                                         v23,
                                                         v6->klass->vtable._16_CheckBuffCondtion.methodPtr);
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v26,
    v25,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  p_AttachTargetList_k__BackingField->klass = (BattleServantConfConponent_c *)v26;
  sub_B5D560(p_AttachTargetList_k__BackingField, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t attachTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0

  if ( (byte_42E7C8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, attachTarget, (_DWORD)method, v3);
    byte_42E7C8E = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField
    || (System_Collections_Generic_List_int___Remove(
          AttachTargetList_k__BackingField,
          attachTarget,
          (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__),
        (AttachTargetList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField) == 0LL) )
  {
    sub_B5D69C(AttachTargetList_k__BackingField, *(_QWORD *)&attachTarget);
  }
  System_Collections_Generic_List_int___Remove(
    AttachTargetList_k__BackingField,
    attachTarget - 101,
    (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
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
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x8

  if ( (byte_42E7C8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, v2, v3);
    byte_42E7C8B = 1;
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
  sub_B5D560(
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
  sub_B5D560(
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
  __int64 v3; // x3
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *_4__this; // x0
  System_Collections_Generic_List_int__o *targetList; // x20

  if ( (byte_42E602C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, index, (_DWORD)method, v3);
    byte_42E602C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (targetList = this->fields.targetList,
        _4__this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)BattleLogicFunctionProcess_CommonAddStateTargetCheck__ConvertAttachTargetFromCardIndex(
                                                                               _4__this,
                                                                               index,
                                                                               0LL),
        !targetList) )
  {
    sub_B5D69C(_4__this, *(_QWORD *)&index);
  }
  System_Collections_Generic_List_int___Add(
    targetList,
    (int32_t)_4__this,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, action);
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
  BattleActionData_o *v5; // x24
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **v6; // x25
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v11; // x9
  int32_t targetId_k__BackingField; // w27
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x26
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v15; // x8
  BattleServantData_o *v16; // x20
  FunctionEntity_o *funcEnt; // x23
  BattleServantData_o *v18; // x22
  const MethodInfo *v19; // x2
  char v20; // w0
  int32_t v22; // w8
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_String_o **p_invalidText; // x19
  System_Int32_array *vals; // x23
  float BuffTOLERANCESUBSTATEMagnification; // s0
  bool isDisplayLastFuncInvalid; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = action;
  v6 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **)this;
  if ( (byte_42E7C90 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)action, (_DWORD)funcTarget, method);
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_B5D5C4(&StringLiteral_2486/*"BATTLE_GUARD_FUNCTION"*/, v7, v8, v9);
    byte_42E7C90 = 1;
  }
  isDisplayLastFuncInvalid = 0;
  if ( !funcTarget )
    goto LABEL_52;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_52;
  v11 = v6[2];
  if ( !v11 )
    goto LABEL_52;
  if ( !v5 )
    goto LABEL_52;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v11->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_52;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     v5->fields.actorId,
                                                                     0LL);
  v15 = v6[2];
  if ( !v15 )
    goto LABEL_52;
  v16 = (BattleServantData_o *)this;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v15->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     targetId_k__BackingField,
                                                                     0LL);
  if ( !dataVals_k__BackingField )
    goto LABEL_52;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  isDisplayLastFuncInvalid = 0;
  v18 = (BattleServantData_o *)this;
  this = v6[2];
  if ( !this )
    goto LABEL_52;
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
      BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v19);
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
            if ( !v18 )
              goto LABEL_52;
            if ( !v18->fields.isEnemy )
              goto LABEL_18;
            funcTarget->fields.invalidType = 2;
            if ( !FuncList__Check(20, funcEnt->fields.funcType, 0LL)
              || BattleServantData__getBuffResistDelayNPTurn(v18, v16, 0LL) <= 0.0 )
            {
              goto LABEL_18;
            }
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2486/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
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
              if ( !v18 )
                goto LABEL_52;
              if ( BattleServantData__checkAvoidInstantDeath(v18, v16, 0LL) )
              {
                v22 = 1;
                goto LABEL_26;
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
              if ( v16
                || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)DataVals__isParam(
                                                                                       dataVals_k__BackingField,
                                                                                       74,
                                                                                       0LL),
                    action = 0LL,
                    ((unsigned __int8)this & 1) == 0) )
              {
                if ( !v18 )
                  goto LABEL_52;
                BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                       v18,
                                                       vals,
                                                       v16,
                                                       0LL);
                action = 0LL;
                if ( BuffTOLERANCESUBSTATEMagnification > 0.0 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2486/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
                }
              }
            }
            funcTarget->fields.invalidText = (struct System_String_o *)action;
            p_invalidText = &funcTarget->fields.invalidText;
            *((_DWORD *)p_invalidText - 2) = 2;
          }
          sub_B5D560(
            (BattleServantConfConponent_o *)p_invalidText,
            (System_Int32_array **)action,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          goto LABEL_18;
        }
      }
      if ( v18 )
      {
        if ( !BattleServantData__checkPlayer(v18, 0LL) )
          goto LABEL_18;
        v22 = 2;
LABEL_26:
        v20 = 0;
        funcTarget->fields.invalidType = v22;
        return v20 & 1;
      }
    }
LABEL_52:
    sub_B5D69C(this, action);
  }
  this = v6[2];
  if ( !this )
    goto LABEL_52;
  if ( BattleLogicFunction__checkNoActionCondition(
         (BattleLogicFunction_o *)this,
         targetId_k__BackingField,
         funcEnt,
         0LL) )
  {
LABEL_18:
    v20 = 0;
    return v20 & 1;
  }
  v20 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, DataVals_o *, BattleLogicFunction_ProcListInArgs_o *, void *))(*v6)[19].klass)(
          v6,
          v5,
          funcTarget,
          dataVals_k__BackingField,
          procArg_k__BackingField,
          (*v6)[19].monitor);
  return v20 & 1;
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
  sub_B5D560(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        bool fieldFlag,
        bool isChangeMaxHpFlag,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v8; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v25; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v33; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v34; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isPassive; // w21

  v8 = this;
  if ( (byte_42E7C93 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___,
      (_DWORD)actBuffData,
      (_DWORD)buffData,
      fieldFlag);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v18, v19, v20);
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_B5D5C4(
                                                                      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__,
                                                                      v21,
                                                                      v22,
                                                                      v23);
    byte_42E7C93 = 1;
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
      sub_B5D69C(this, actBuffData);
    }
    if ( SLODWORD(funcUnit_k__BackingField->fields._procArg_k__BackingField) >= 1 )
    {
      v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v25,
        (Il2CppObject *)v8,
        Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__,
        (const MethodInfo_2C3041C *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)funcUnit_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)v25,
                                                                   (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
      this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v26,
                                                                        (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
      if ( !actBuffData )
        goto LABEL_19;
      actBuffData->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_B5D560(
        (BattleServantConfConponent_o *)&actBuffData->fields.removeBuffList,
        (System_Int32_array **)this,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
  }
  v33 = v8->fields._funcUnit_k__BackingField;
  if ( !v33 )
    goto LABEL_19;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)v33->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_19;
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 109, 0LL);
  if ( !buffData )
    goto LABEL_19;
  buffData->fields.isRemoveFieldBuffActorDeath = (unsigned __int8)this & 1;
  v34 = v8->fields._funcUnit_k__BackingField;
  if ( !v34 )
    goto LABEL_19;
  procArg_k__BackingField = v34->fields._procArg_k__BackingField;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x20
  BattleFieldEnvironmentData_o *BuffData; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  bool v28; // w21
  System_Int32_array *GrantBuffTypeArray; // x22
  System_Func_int__bool__o *v30; // x23

  if ( (byte_42E7C92 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)action, (_DWORD)buffEnt, method);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo, v15, v16, v17);
    byte_42E7C92 = 1;
  }
  v18 = sub_B5D694(BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
  BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___ctor(
    (BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_11;
  *(_QWORD *)(v18 + 16) = buffEnt;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)buffEnt, v21, v22, v23, v24, v25, v26);
  if ( this->fields.grantType != 1 )
    return 1;
  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v27);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0LL)) == 0LL )
  {
LABEL_11:
    sub_B5D69C(BuffData, v20);
  }
  v28 = 1;
  GrantBuffTypeArray = BattleBuffData__GetGrantBuffTypeArray((BattleBuffData_o *)BuffData, 1, 1, 0LL);
  v30 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v30,
    (Il2CppObject *)v18,
    Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__28142236(
         GrantBuffTypeArray,
         (System_Func_T__bool__o *)v30,
         (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return v28;
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
  __int64 v7; // x0

  if ( (byte_42E7C91 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)wrapTarget, userCommandCodeId, cardIdsIndexArray);
    byte_42E7C91 = 1;
  }
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v6);
  if ( !result->max_length )
  {
    v7 = sub_B5D6C8(result);
    sub_B5D668(v7, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(dataVals_k__BackingField, v7);
  this->fields.grantType = DataVals__GetParam(dataVals_k__BackingField, 110, 0, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_FieldBuffData_o *v4; // x19

  if ( (byte_42E7C94 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_FieldBuffData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C94 = 1;
  }
  v4 = (BattleActionData_FieldBuffData_o *)sub_B5D694(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v4, 0LL);
  return (BattleActionData_BuffData_o *)v4;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_42E7C95 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C95 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
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
    sub_B5D69C(BuffData, v5);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, type);
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

  funcUnit_k__BackingField = this->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcUnit_k__BackingField->fields._logic_k__BackingField) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  return BattleLogicFunction__GetBuffEntity(
           (BattleLogicFunction_o *)this,
           dataVals_k__BackingField->fields.funcEnt,
           0LL);
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
  __int64 v17; // x1
  struct BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x0

  this->fields._targetId_k__BackingField = targetId;
  this->fields._funcUnit_k__BackingField = funcUnit;
  sub_B5D560(
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v17);
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
  if ( v6->fields._result_k__BackingField )
    return 1;
  this = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(
                                                               v6,
                                                               (const MethodInfo *)mainAction);
  if ( !mainAction )
LABEL_10:
    sub_B5D69C(this, mainAction);
  BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0LL);
  return 0;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_BuffData_o *v4; // x19

  if ( (byte_42E7C97 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_BuffData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C97 = 1;
  }
  v4 = (BattleActionData_BuffData_o *)sub_B5D694(BattleActionData_BuffData_TypeInfo);
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
    sub_B5D69C(this, actBuffData);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_42E7C98 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunctionProcess_WrapTargetServant_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7C98 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
  System_Object___ctor(v4, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v4;
}


void __fastcall BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  intptr_t v15; // w21
  System_Type_o *TypeFromHandle; // x0
  __int64 v17; // x1
  System_Type_o *v18; // x21
  int32_t DisplayLastFuncInvalidType; // w20
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v20; // x0
  BattleActionData_o *v21; // x1
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v22; // x2
  const MethodInfo *v23; // x3
  System_RuntimeTypeHandle_o v24; // 0:w0.4

  if ( (byte_42E7C96 & 1) == 0 )
  {
    sub_B5D5C4(&System_Enum_TypeInfo, (_DWORD)baseVals, (_DWORD)method, v3);
    sub_B5D5C4(&BattleLogicFunctionProcess_FuncInvalidType_var, v6, v7, v8);
    sub_B5D5C4(&BattleLogicFunctionProcess_FuncInvalidType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Type_TypeInfo, v12, v13, v14);
    byte_42E7C96 = 1;
  }
  v15 = (int)BattleLogicFunctionProcess_FuncInvalidType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v24.fields.value = v15;
  TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0LL);
  if ( !baseVals )
    goto LABEL_13;
  v18 = TypeFromHandle;
  DisplayLastFuncInvalidType = DataVals__GetDisplayLastFuncInvalidType(baseVals, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  TypeFromHandle = (System_Type_o *)System_Enum__ToObject_16245624(v18, DisplayLastFuncInvalidType, 0LL);
  if ( !TypeFromHandle )
LABEL_13:
    sub_B5D69C(TypeFromHandle, v17);
  if ( TypeFromHandle->klass->_1.element_class == BattleLogicFunctionProcess_FuncInvalidType_TypeInfo->_1.element_class )
  {
    this->fields.invalidType = *(_DWORD *)j_il2cpp_object_unbox_0(TypeFromHandle);
  }
  else
  {
    v20 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B5D990(TypeFromHandle);
    BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCondition(v20, v21, v22, v23);
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
    sub_B5D69C(this, funcProc);
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
    sub_B5D69C(0LL, this);
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
    sub_B5D69C(this, 0LL);
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct BattleLogicFunction_ProcListInArgs_o **p_procArg_k__BackingField; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42E7C99 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, (_DWORD)logic, (_DWORD)procArg, method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo, v10, v11, v12);
    byte_42E7C99 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToOtherList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.linkedToOtherList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToSelfList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.linkedToSelfList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._logic_k__BackingField = logic;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)logic, v27, v28, v29, v30, v31, v32);
  this->fields._procArg_k__BackingField = procArg;
  p_procArg_k__BackingField = &this->fields._procArg_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_procArg_k__BackingField,
    (System_Int32_array **)procArg,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  *((_BYTE *)p_procArg_k__BackingField + 17) = 0;
  v40 = (System_Int32_array **)sub_B5D5DC(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, 0LL);
  p_procArg_k__BackingField[6] = (struct BattleLogicFunction_ProcListInArgs_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)(p_procArg_k__BackingField + 6), v40, v41, v42, v43, v44, v45, v46);
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField || (data = logic_k__BackingField->fields.data) == 0LL )
    sub_B5D69C(this, method);
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
  DataVals_o *v4; // x19
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v6; // x20
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  bool isEnemyID; // w0
  struct BattleLogicFunction_o *v9; // x8
  bool existParamNum; // [xsp+Ch] [xbp-14h] BYREF

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
    sub_B5D69C(this, baseVal);
  }
  return (unsigned __int8)this & 1;
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
    sub_B5D69C(this, baseVals);
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
    sub_B5D69C(this, method);
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


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkFuncTargetResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        int32_t targetId,
        bool result,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_42E7C9C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___, targetId, result, method);
    sub_B5D5C4(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(
      &Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0__checkFuncTargetResult_b__0__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_TypeInfo, v16, v17, v18);
    byte_42E7C9C = 1;
  }
  v19 = (BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_o *)sub_B5D694(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0_TypeInfo);
  BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.targetId = targetId;
  v19->fields.result = result;
  funcTargetArray_k__BackingField = this->fields._funcTargetArray_k__BackingField;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass49_0__checkFuncTargetResult_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)funcTargetArray_k__BackingField,
           (System_Func_T__bool__o *)v23,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *linkedToSelfList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  Il2CppObject *current; // x21
  const MethodInfo *v20; // x2
  int v21; // w19
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7C9F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__,
      (_DWORD)action,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__,
      v12,
      v13,
      v14);
    byte_42E7C9F = 1;
  }
  memset(&v23, 0, sizeof(v23));
  linkedToSelfList = this->fields.linkedToSelfList;
  if ( !linkedToSelfList )
    sub_B5D69C(0LL, action);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkedToSelfList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    if ( !v16 )
    {
      v21 = 3;
      goto LABEL_11;
    }
    current = v23.fields.current;
    if ( !v23.fields.current )
      sub_B5D69C(v16, v17);
    if ( !BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
            (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v23.fields.current,
            action,
            v18) )
      break;
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      this,
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
      v20);
  }
  v21 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
  return v21 != 5;
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkSelfCondtion(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataVals_o *dataVals_k__BackingField; // x21
  FunctionEntity_o *funcEnt; // x22
  bool v14; // w8
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x23
  bool endbattleFlg; // w24
  char v18; // w8
  struct BattleLogicFunction_o *v19; // x8
  struct BattleData_o *v20; // x23
  bool loseBattleFlg; // w24
  struct BattleLogicFunction_o *v22; // x8
  struct BattleData_o *v23; // x23
  bool winBattleNotRelatedSurvivalStatus; // w24
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v25; // x23
  struct BattleLogicFunction_o *v26; // x8
  System_Int32_array *QuestIndividualities; // x0
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleLogicFunction_o *v30; // x8
  struct BattleData_o *v31; // x8
  const MethodInfo *v32; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v33; // x8
  int32_t Param; // w23
  const MethodInfo *v35; // x1
  bool v36; // zf
  Target_BattleTargetArgs_o *args; // x23
  struct BattleLogicFunction_o *v38; // x8
  int32_t PTTargetId; // w0
  int32_t targetType; // w27
  int32_t taskActorType; // w28
  bool checkRevengeId; // w24
  int32_t v43; // w25
  System_Int32_array *ValsList; // x26
  bool IsIncludeIgnoreIndividuality; // w0
  struct BattleLogicFunction_ProcListInArgs_o *v46; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v47; // x2
  struct BattleLogicFunction_ProcListInArgs_o *v48; // x8
  struct BattleLogicFunction_FunctionArgument_o *v49; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v50; // x22
  struct BattleLogicFunction_o *v51; // x8
  struct BattleData_o *v52; // x8
  const MethodInfo *v53; // x2
  int v54; // w8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v55; // x21
  int v56; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v57; // x22
  const MethodInfo *v58; // x3
  __int64 v59; // x0
  int32_t targetId; // [xsp+20h] [xbp-60h]
  int32_t actorId; // [xsp+24h] [xbp-5Ch]
  BattleData_o *bdata; // [xsp+28h] [xbp-58h]

  v5 = this;
  if ( (byte_42E7C9E & 1) == 0 )
  {
    sub_B5D5C4(&Target_BattleTargetArgs_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v6, v7, v8);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B5D5C4(
                                                               &Method_System_Collections_Generic_HashSet_int__get_Count__,
                                                               v9,
                                                               v10,
                                                               v11);
    byte_42E7C9E = 1;
  }
  dataVals_k__BackingField = v5->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_63;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_63;
  v14 = FuncList__Check(0, funcEnt->fields.funcType, 0LL);
  LOBYTE(this) = 0;
  if ( v14 )
    return (char)this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FuncList__Check(26, funcEnt->fields.funcType, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !action )
      goto LABEL_63;
    action->fields.isSuccessTargetSelection = 1;
  }
  logic_k__BackingField = v5->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_63;
  data = logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_63;
  endbattleFlg = data->fields.endbattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsEndBattle(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    v18 = 1;
  }
  else
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                               dataVals_k__BackingField,
                                                               0LL);
    v18 = (unsigned __int8)this & 1;
  }
  data->fields.endbattleFlg = v18 | endbattleFlg;
  v19 = v5->fields._logic_k__BackingField;
  if ( !v19 )
    goto LABEL_63;
  v20 = v19->fields.data;
  if ( !v20 )
    goto LABEL_63;
  loseBattleFlg = v20->fields.loseBattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL);
  v20->fields.loseBattleFlg = (loseBattleFlg | (unsigned __int8)this) & 1;
  v22 = v5->fields._logic_k__BackingField;
  if ( !v22
    || (v23 = v22->fields.data) == 0LL
    || (winBattleNotRelatedSurvivalStatus = v23->fields.winBattleNotRelatedSurvivalStatus,
        v23->fields.winBattleNotRelatedSurvivalStatus = (winBattleNotRelatedSurvivalStatus | DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                                                               dataVals_k__BackingField,
                                                                                               0LL)) & 1,
        v5->fields.questFuncFlg = 1,
        (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FunctionEntity__getQuestTargetValues(funcEnt, 0LL)) == 0LL) )
  {
LABEL_63:
    sub_B5D69C(this, action);
  }
  v25 = this;
  if ( this->fields._procArg_k__BackingField )
  {
    v26 = v5->fields._logic_k__BackingField;
    if ( !v26 )
      goto LABEL_63;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v26->fields.data;
    if ( !this )
      goto LABEL_63;
    QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__CheckIndividualities(
                                                               QuestIndividualities,
                                                               (System_Int32_array *)v25,
                                                               0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      v5->fields.questFuncFlg = 0;
  }
  procArg_k__BackingField = v5->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_63;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_63;
  if ( externalArg->fields.isPassive )
  {
    v30 = v5->fields._logic_k__BackingField;
    if ( !v30 )
      goto LABEL_63;
    v31 = v30->fields.data;
    if ( !v31 )
      goto LABEL_63;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v31->fields._FuncEventExceptedHash_k__BackingField;
    if ( this )
    {
      if ( SLODWORD(this->fields._dataVals_k__BackingField) >= 1 )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)System_Collections_Generic_HashSet_int___Contains(
                                                                   (System_Collections_Generic_HashSet_int__o *)this,
                                                                   funcEnt->fields.id,
                                                                   (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_49;
      }
    }
  }
  if ( !action )
    goto LABEL_63;
  if ( !BattleActionData__IsSelectedAddTargetIndex(action, dataVals_k__BackingField, 0LL)
    || !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
          v5,
          dataVals_k__BackingField,
          action->fields.actorId,
          v32) )
  {
    goto LABEL_49;
  }
  if ( DataVals__checkActSet(dataVals_k__BackingField, 0LL) )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__getActSet(dataVals_k__BackingField, 0LL);
    v33 = v5->fields._procArg_k__BackingField;
    if ( !v33 )
      goto LABEL_63;
    if ( (_DWORD)this != v33->fields.actSetId )
    {
LABEL_49:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  if ( !DataVals__isParam(dataVals_k__BackingField, 130, 0LL)
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 130, 0, 0LL),
        v36 = Param == BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(v5, v35),
        LOBYTE(this) = 0,
        v36) )
  {
    args = (Target_BattleTargetArgs_o *)sub_B5D694(Target_BattleTargetArgs_TypeInfo);
    Target_BattleTargetArgs___ctor(args, dataVals_k__BackingField, 0LL);
    v38 = v5->fields._logic_k__BackingField;
    if ( v38 )
    {
      bdata = v38->fields.data;
      actorId = action->fields.actorId;
      targetId = action->fields.targetId;
      PTTargetId = BattleActionData__getPTTargetId(action, 0LL);
      targetType = funcEnt->fields.targetType;
      taskActorType = action->fields.taskActorType;
      checkRevengeId = action->fields.checkRevengeId;
      v43 = PTTargetId;
      ValsList = DataVals__GetValsList(dataVals_k__BackingField, 83, 0LL);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(dataVals_k__BackingField, 0LL);
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Target__getTargetIds_19913408(
                                                                 bdata,
                                                                 actorId,
                                                                 targetId,
                                                                 v43,
                                                                 targetType,
                                                                 taskActorType,
                                                                 checkRevengeId,
                                                                 ValsList,
                                                                 IsIncludeIgnoreIndividuality,
                                                                 args,
                                                                 0LL);
      v46 = v5->fields._procArg_k__BackingField;
      if ( v46 )
      {
        v47 = this;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v46->fields.externalArg;
        if ( this )
        {
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))this->klass[1]._1.namespaze)(
                                                                     this,
                                                                     (unsigned int)funcEnt->fields.targetType,
                                                                     v47,
                                                                     this->klass[1]._1.byval_arg.data);
          v48 = v5->fields._procArg_k__BackingField;
          if ( v48 )
          {
            v49 = v48->fields.externalArg;
            if ( v49 )
            {
              v50 = this;
              this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v49->fields.checkDuplicate;
              if ( this )
              {
                this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, DataVals_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                                           this,
                                                                           dataVals_k__BackingField,
                                                                           v50,
                                                                           this->klass[1]._1.this_arg.data);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_49;
                v51 = v5->fields._logic_k__BackingField;
                if ( v51 )
                {
                  v52 = v51->fields.data;
                  if ( v52 )
                  {
                    if ( !DataVals__CheckFunctionTriggerStar(
                            dataVals_k__BackingField,
                            v52->fields.totalCriticalStars,
                            0LL)
                      && !v5->fields.isLowestStarFunction )
                    {
                      goto LABEL_49;
                    }
                    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
                                                                               v5,
                                                                               (System_Int32_array *)v50,
                                                                               v53);
                    if ( this )
                    {
                      v54 = (int)this->fields._procArg_k__BackingField;
                      v55 = this;
                      if ( v54 < 1 )
                      {
                        LOBYTE(this) = 1;
                        return (char)this;
                      }
                      v56 = 0;
                      while ( 1 )
                      {
                        if ( v56 >= (unsigned int)v54 )
                        {
                          v59 = sub_B5D6C8(this);
                          sub_B5D668(v59, 0LL);
                        }
                        v57 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)*((_QWORD *)&v55->fields._dataVals_k__BackingField
                                                                                  + v56);
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                                   v5,
                                                                                   (const MethodInfo *)action);
                        if ( !v57 )
                          break;
                        BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
                          v57,
                          (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
                          action,
                          v58);
                        v54 = (int)v55->fields._procArg_k__BackingField;
                        ++v56;
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(&dword_0 + 1);
                        if ( v56 >= v54 )
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
    goto LABEL_63;
  }
  return (char)this;
}


BattleActionData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__getInvalidObject(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v4; // x20
  int32_t invalidType; // w8
  BattleActionData_BuffData_o *v6; // x6
  DataVals_o *v7; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v8; // x8
  struct BattleLogicFunction_FunctionArgument_o *v9; // x8
  DataVals_o *dataVals_k__BackingField; // x3
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct DataVals_o *v14; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *v16; // x9

  if ( !funcTarget )
    goto LABEL_21;
  v4 = this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer, const MethodInfo *))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                                             funcTarget,
                                                             funcTarget->klass->vtable._8_AddBuff.methodPtr,
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
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._logic_k__BackingField;
      if ( !this )
        goto LABEL_21;
      return BattleLogicFunction__getNoEffectObject(
               (BattleLogicFunction_o *)this,
               funcTarget->fields._targetId_k__BackingField,
               dataVals_k__BackingField->fields.funcIndex,
               dataVals_k__BackingField,
               externalArg->fields.isCommandSideEffect,
               funcTarget->fields.invalidText,
               v6,
               0LL);
    case 3:
      v14 = v4->fields._dataVals_k__BackingField;
      if ( !v14 )
        goto LABEL_21;
      funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
      if ( !funcUnit_k__BackingField )
        goto LABEL_21;
      v16 = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
      if ( !v16 )
        goto LABEL_21;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v4->fields._logic_k__BackingField;
      if ( !this )
        goto LABEL_21;
      return BattleLogicFunction__getGrayPopupActionData(
               (BattleLogicFunction_o *)this,
               funcTarget->fields._targetId_k__BackingField,
               v14->fields.funcIndex,
               v16->fields.funcEnt,
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
      sub_B5D69C(this, funcTarget);
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
    sub_B5D69C(0LL, method);
  return DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
}


BattleData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_B5D69C(this, method);
  return logic_k__BackingField->fields.data;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B5D69C(this, method);
  return dataVals_k__BackingField->fields.funcIndex;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
  return DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddLinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B5D69C(0LL, method);
  return DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_LinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v5; // x20
  signed int max_length; // w21
  System_Int32_array **v7; // x0
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array **p_funcTargetArray_k__BackingField; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x23
  __int64 v17; // x25
  int32_t *v18; // x26
  __int64 v19; // x27
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x24
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v27; // x8
  __int64 v29; // x0
  __int64 v30; // x0

  v5 = this;
  if ( (byte_42E7C9B & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B5D5C4(
                                                               &BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                                               (_DWORD)targetlist,
                                                               (_DWORD)method,
                                                               v3);
    byte_42E7C9B = 1;
  }
  if ( !targetlist )
LABEL_19:
    sub_B5D69C(this, targetlist);
  max_length = targetlist->max_length;
  v7 = (System_Int32_array **)sub_B5D5DC(
                                BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                (unsigned int)max_length);
  v5->fields._funcTargetArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)v7;
  p_funcTargetArray_k__BackingField = &v5->fields._funcTargetArray_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields._funcTargetArray_k__BackingField,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  funcTargetArray_k__BackingField = v5->fields._funcTargetArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v17 = 0LL;
    v18 = &targetlist->m_Items[1];
    v19 = 32LL;
    do
    {
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                 v5,
                                                                 v15);
      if ( (unsigned int)v17 >= targetlist->max_length )
        goto LABEL_18;
      if ( !this )
        goto LABEL_19;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                                                 this,
                                                                 (unsigned int)v18[v17],
                                                                 v5,
                                                                 this->klass[1]._1.declaringType);
      if ( !funcTargetArray_k__BackingField )
        goto LABEL_19;
      v26 = (System_Int32_array **)this;
      if ( this )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B5D684(
                                                                   this,
                                                                   funcTargetArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v30 = sub_B5D6BC(0LL);
          sub_B5D668(v30, 0LL);
        }
      }
      if ( (unsigned int)v17 >= funcTargetArray_k__BackingField->max_length )
        goto LABEL_18;
      *(Il2CppClass **)((char *)&funcTargetArray_k__BackingField->obj.klass + v19) = (Il2CppClass *)v26;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)funcTargetArray_k__BackingField + v19),
        v26,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v27 = *p_funcTargetArray_k__BackingField;
      if ( !*p_funcTargetArray_k__BackingField )
        goto LABEL_19;
      if ( (unsigned int)v17 >= v27->max_length || (unsigned int)v17 >= targetlist->max_length )
      {
LABEL_18:
        v29 = sub_B5D6C8(this);
        sub_B5D668(v29, 0LL);
      }
      this = *(BattleLogicFunctionProcess_FunctionUnitCheck_o **)((char *)&v27->obj.klass + v19);
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const char *))this->klass[1]._1.gc_desc)(
        this,
        (unsigned int)v18[v17],
        v5,
        this->klass[1]._1.name);
      funcTargetArray_k__BackingField = v5->fields._funcTargetArray_k__BackingField;
      ++v17;
      v19 += 8LL;
    }
    while ( (int)v17 < max_length );
  }
  return funcTargetArray_k__BackingField;
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToOtherResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *linkedToOtherList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7C9D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E7C9D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  linkedToOtherList = this->fields.linkedToOtherList;
  if ( !linkedToOtherList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkedToOtherList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B5D69C(0LL, v15);
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v17.fields.current,
      this,
      v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *linkedToSelf,
        const MethodInfo *method)
{
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x20
  int max_length; // w8
  unsigned int v6; // w21
  __int64 v7; // x0

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
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
      }
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
    sub_B5D69C(this, linkedToSelf);
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
  __int64 v12; // x1
  BattleLogicFunction_o *FuncMaster; // x0
  DataVals_o *v14; // x22
  DataVals_o *dataVals_k__BackingField; // x21

  this->fields._dataVals_k__BackingField = dataVals;
  p_dataVals_k__BackingField = &this->fields._dataVals_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._dataVals_k__BackingField,
    (System_Int32_array **)dataVals,
    *(System_String_array ***)&functionId,
    (System_String_array **)dataVals,
    (System_Boolean_array **)method,
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
    sub_B5D69C(FuncMaster, v12);
  }
  DataVals__SetType_24517908(dataVals_k__BackingField, (FunctionEntity_o *)FuncMaster, *funcIndex, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicFunctionProcess_FunctionUnitCheck_o **v5; // x20
  signed int max_length; // w8
  unsigned int v7; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v8; // x21
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v10; // x22
  System_Int32_array *AddIndividualty; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v12; // x22
  System_Int32_array *LinkageTargetIndividualty; // x0
  __int64 v14; // x0

  v5 = (BattleLogicFunctionProcess_FunctionUnitCheck_o **)this;
  if ( (byte_42E7C9A & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B5D5C4(
                                                               &Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__,
                                                               (_DWORD)funcUnitArray,
                                                               (_DWORD)method,
                                                               v3);
    byte_42E7C9A = 1;
  }
  if ( !funcUnitArray )
    goto LABEL_22;
  max_length = funcUnitArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
      }
      this = v5[4];
      if ( !this )
        break;
      v8 = funcUnitArray->m_Items[v7];
      if ( !v8 )
        break;
      dataVals_k__BackingField = v8->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        break;
      if ( LODWORD(this->fields._dataVals_k__BackingField) != dataVals_k__BackingField->fields.funcIndex )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetLinkageTargetIndividualty(
                                                                   (DataVals_o *)this,
                                                                   0LL);
        if ( !v8->fields._dataVals_k__BackingField )
          break;
        v10 = this;
        AddIndividualty = DataVals__GetAddIndividualty(v8->fields._dataVals_k__BackingField, 0LL);
        if ( Individuality__IsPartialMatchArray((System_Int32_array *)v10, AddIndividualty, 0LL) )
        {
          this = v5[6];
          if ( !this )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
        }
        this = v5[4];
        if ( !this )
          break;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetAddIndividualty((DataVals_o *)this, 0LL);
        if ( !v8->fields._dataVals_k__BackingField )
          break;
        v12 = this;
        LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(v8->fields._dataVals_k__BackingField, 0LL);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__IsPartialMatchArray(
                                                                   (System_Int32_array *)v12,
                                                                   LinkageTargetIndividualty,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v5[7];
          if ( !this )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
        }
      }
      max_length = funcUnitArray->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_22:
    sub_B5D69C(this, funcUnitArray);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  BuffList_TYPE_array *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_42E7CA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, (_DWORD)targetSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_8914/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/, v14, v15, v16);
    byte_42E7CA0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_8914/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/,
                                0LL,
                                0LL);
  if ( !Instance )
    return (char)Instance;
  if ( !Instance->fields.datalist )
  {
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_QuestGroupType_Type_(
                                                               (System_Collections_IEnumerable_o *)Instance,
                                                               (const MethodInfo_1C9AC88 *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_BuffList_TYPE_(
                                v19,
                                (const MethodInfo_1CB7748 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !targetSvtData
    || (v18 = (BuffList_TYPE_array *)Instance, (Instance = (DataManager_o *)targetSvtData->fields.buffData) == 0LL)
    || (Instance = (DataManager_o *)BattleBuffData__getBuffList_31648088(
                                      (BattleBuffData_o *)Instance,
                                      v18,
                                      0LL,
                                      0LL,
                                      0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v18);
  }
  LOBYTE(Instance) = LODWORD(Instance->fields.datalist) != 0;
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
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v11; // x24
  const MethodInfo *v12; // x2
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v13; // x25
  const MethodInfo *v14; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !funcTarget )
    goto LABEL_17;
  logic_k__BackingField = this->fields._logic_k__BackingField;
  v5 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)this;
  if ( !logic_k__BackingField )
    goto LABEL_17;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)logic_k__BackingField->fields.data;
  if ( !this )
    goto LABEL_17;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleData__getServantData(
                                                                      (BattleData_o *)this,
                                                                      targetId_k__BackingField,
                                                                      0LL);
  v9 = v5->fields._logic_k__BackingField;
  if ( !v9 )
    goto LABEL_17;
  v10 = (BattleServantData_o *)this;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)v9->fields.data;
  if ( !this )
    goto LABEL_17;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleData__getAliveFieldSvtIdArray(
                                                                      (BattleData_o *)this,
                                                                      targetId_k__BackingField,
                                                                      1,
                                                                      0LL,
                                                                      0,
                                                                      0LL);
  if ( !this )
    goto LABEL_17;
  if ( !v10 )
    goto LABEL_17;
  v11 = this;
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getBuffList(v10, 84, 0, 0LL);
  if ( !this )
    goto LABEL_17;
  v13 = this;
  if ( !BattleLogicFunctionProcess_MoveToLastSubMemberProcess__HasRefuseBuff(this, v10, v12)
    && SLODWORD(v11[1].klass) >= 2
    && !LODWORD(v13[1].klass) )
  {
    return BattleLogicFunctionProcess_CommonFunctionTypeProcess__checkCondition(v5, action, funcTarget, v14);
  }
  this = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)BattleServantData__getDeckIndex(v10, 0LL);
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField
    || (dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField) == 0LL
    || !action )
  {
LABEL_17:
    sub_B5D69C(this, action);
  }
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
    sub_B5D69C(0LL, actBuffData);
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
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t ConvertBuffIdFromIndex; // w0
  BuffEntity_o *BuffEntity; // x0
  BuffEntity_o *v15; // x20
  const MethodInfo *v16; // x3

  this->fields.buffConvertEntity = buffConvertEntity;
  p_buffConvertEntity = &this->fields.buffConvertEntity;
  *((_BYTE *)p_buffConvertEntity + 8) = 0;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_buffConvertEntity,
    (System_Int32_array **)buffConvertEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !buffConvertEntity )
    sub_B5D69C(v11, v12);
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
  __int64 v3; // x3
  BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  bool isParam; // w8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v29; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  bool v32; // w8
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  BattleBuffData_BuffData_o *current; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v39; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct FunctionEntity_o *funcEnt; // x8
  _BOOL8 IsTargetLimit; // x0
  __int64 v43; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v44; // x8
  DataVals_o *v45; // x0
  struct FunctionEntity_o *v46; // x8
  struct System_Int32_array *vals; // x8
  BuffConvertEntity_o *v48; // x24
  int32_t v49; // w23
  System_Int32_array *ParamArray; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  BattleServantData_o *targetSvt; // x0
  BattleBuffData_o *BuffData; // x0
  __int64 v55; // x1
  BuffConvertEntity_o *v56; // x19
  char v57; // w20
  __int64 v58; // x0
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+0h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-70h] BYREF

  v5 = this;
  if ( (byte_42E7CA1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffConvertMaster___, actorId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v21, v22, v23);
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)sub_B5D5C4(
                                                                        &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                        v24,
                                                                        v25,
                                                                        v26);
    byte_42E7CA1 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  entity = 0LL;
  funcUnit_k__BackingField = v5->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_44;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_44;
  isParam = DataVals__isParam((DataVals_o *)this, 22, 0LL);
  this = 0LL;
  if ( isParam )
    return (BuffConvertEntity_o *)this;
  v29 = v5->fields._funcUnit_k__BackingField;
  if ( !v29 )
    goto LABEL_44;
  procArg_k__BackingField = v29->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_44;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_44;
  if ( externalArg->fields.isPassive )
    return 0LL;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v29->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_44;
  v32 = DataVals__isParam((DataVals_o *)this, 23, 0LL);
  this = 0LL;
  if ( v32 )
    return (BuffConvertEntity_o *)this;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v5->fields.targetSvt;
  if ( !this
    || (BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffList(
                                                                          (BattleServantData_o *)this,
                                                                          114,
                                                                          1,
                                                                          0LL),
        (this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                             BuffList,
                                                                             (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___)) == 0LL) )
  {
LABEL_44:
    sub_B5D69C(this, *(_QWORD *)&actorId);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v61 = v59;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = (BattleBuffData_BuffData_o *)v61.fields.current;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffConvertMaster___);
    if ( !current )
      sub_B5D69C(Master_WarQuestSelectionMaster, v36);
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v36);
    v37 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            current->fields.buffId,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
    if ( v37 )
    {
      v39 = v5->fields._funcUnit_k__BackingField;
      if ( !v39 )
        sub_B5D69C(v37, v38);
      dataVals_k__BackingField = v39->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        sub_B5D69C(v37, v38);
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      if ( !funcEnt )
        sub_B5D69C(v37, v38);
      if ( !entity )
        sub_B5D69C(0LL, v38);
      IsTargetLimit = BuffConvertEntity__IsTargetLimit(
                        (BuffConvertEntity_o *)entity,
                        funcEnt->fields.targetType,
                        v5->fields._targetId_k__BackingField,
                        actorId,
                        0LL);
      if ( IsTargetLimit )
      {
        v44 = v5->fields._funcUnit_k__BackingField;
        if ( !v44 )
          sub_B5D69C(IsTargetLimit, v43);
        v45 = v44->fields._dataVals_k__BackingField;
        if ( !v45 )
          sub_B5D69C(0LL, v43);
        v46 = v45->fields.funcEnt;
        if ( !v46 )
          sub_B5D69C(v45, v43);
        vals = v46->fields.vals;
        if ( !vals )
          sub_B5D69C(v45, v43);
        if ( !vals->max_length )
        {
          v58 = sub_B5D6C8(v45);
          sub_B5D668(v58, 0LL);
        }
        v48 = (BuffConvertEntity_o *)entity;
        v49 = vals->m_Items[1];
        ParamArray = DataVals__GetParamArray(v45, 112, 0LL);
        if ( !v48 )
          sub_B5D69C(ParamArray, v51);
        if ( BuffConvertEntity__TryGetConvertBuffIndex(v48, &v5->fields.convertBuffIndex, v49, ParamArray, 0LL) )
        {
          targetSvt = v5->fields.targetSvt;
          if ( !targetSvt )
            sub_B5D69C(0LL, v52);
          BuffData = BattleServantData__get_BuffData(targetSvt, 0LL);
          if ( !BuffData )
            sub_B5D69C(0LL, v55);
          if ( BattleBuffData__checkBuffSuccessful(BuffData, current, 1, 0LL) )
          {
            v56 = (BuffConvertEntity_o *)entity;
            v57 = 2;
            goto LABEL_40;
          }
        }
      }
    }
  }
  v57 = 0;
  v56 = 0LL;
LABEL_40:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( ((v57 + 2) & 3) != 0 )
    return 0LL;
  else
    return v56;
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  BattleLogicFunctionProcess_FunctionTargetCheck__Init(
    (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
    targetId,
    funcUnit,
    method);
  if ( !funcUnit
    || (logic_k__BackingField = funcUnit->fields._logic_k__BackingField) == 0LL
    || (data = logic_k__BackingField->fields.data) == 0LL )
  {
    sub_B5D69C(data, v8);
  }
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  this->fields.targetSvt = ServantData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetSvt,
    (System_Int32_array **)ServantData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


bool __fastcall BattleLogicFunctionProcess_ServantAddStateTargetCheck__IsDuplicatedBuffGroup(
        BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *this,
        BuffEntity_o *buffEnt,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  __int64 v10; // x8
  System_Collections_Generic_List_int__o *v11; // x22
  unsigned __int64 v12; // x24
  int32_t v13; // w23
  struct System_Collections_Generic_List_int__o *v14; // x8
  __int64 v16; // x0

  if ( (byte_42E7CA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)buffEnt, (_DWORD)targetSvt, method);
    byte_42E7CA2 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                 AttachTargetList_k__BackingField,
                                                                                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  v10 = *(_QWORD *)&AttachTargetList_k__BackingField->fields._size;
  v11 = AttachTargetList_k__BackingField;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v10 )
      {
        v16 = sub_B5D6C8(AttachTargetList_k__BackingField);
        sub_B5D668(v16, 0LL);
      }
      if ( !targetSvt )
        break;
      v13 = *((_DWORD *)&v11->fields._syncRoot + v12);
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleServantData__get_BuffData(
                                                                                     targetSvt,
                                                                                     0LL);
      if ( !buffEnt || !AttachTargetList_k__BackingField )
        break;
      AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)BattleBuffData__checkBuffGroup(
                                                                                     (BattleBuffData_o *)AttachTargetList_k__BackingField,
                                                                                     buffEnt->fields.buffGroup,
                                                                                     v13,
                                                                                     0LL);
      if ( ((unsigned __int8)AttachTargetList_k__BackingField & 1) != 0 )
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
          (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)this,
          v13,
          v8);
      LODWORD(v10) = v11->fields._size;
      if ( (__int64)++v12 >= (int)v10 )
        goto LABEL_14;
    }
LABEL_19:
    sub_B5D69C(AttachTargetList_k__BackingField, buffEnt);
  }
LABEL_14:
  if ( (byte_42E7C8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)buffEnt, (_DWORD)v8, v9);
    byte_42E7C8B = 1;
  }
  v14 = this->fields._AttachTargetList_k__BackingField;
  return !v14 || v14->fields._size < 1;
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
  __int64 v8; // x1
  _BYTE *v9; // x19
  BuffConvertEntity_o *buffConvertEntity; // x0
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x9
  struct DataVals_o *dataVals_k__BackingField; // x8
  _BYTE *v13; // x21
  System_Int32_array **GrayActionBuffData; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **EffectList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **OverwritePopupTextFromIndex; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  BuffEntity = BattleLogicFunctionProcess_FunctionTargetCheck__MakeAddActionBuffData(
                 (BattleLogicFunctionProcess_FunctionTargetCheck_o *)this,
                 actBuffData,
                 buffData,
                 funcEnt,
                 isCommandSideEffect,
                 method);
  v9 = BuffEntity;
  if ( this->fields.convertBuffId )
  {
    if ( !BuffEntity )
      goto LABEL_13;
    BuffEntity[91] = this->fields.isBuffConvertFailure;
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
          BuffEntity = funcUnit_k__BackingField->fields._logic_k__BackingField;
          if ( BuffEntity )
          {
            GrayActionBuffData = (System_Int32_array **)BattleLogicFunction__MakeGrayActionBuffData(
                                                          (BattleLogicFunction_o *)BuffEntity,
                                                          this->fields._targetId_k__BackingField,
                                                          dataVals_k__BackingField->fields.funcIndex,
                                                          *((_DWORD *)v9 + 16),
                                                          *((System_String_o **)v9 + 7),
                                                          *((_DWORD *)v9 + 17),
                                                          0LL);
            *((_QWORD *)v9 + 12) = GrayActionBuffData;
            sub_B5D560((BattleServantConfConponent_o *)(v9 + 96), GrayActionBuffData, v15, v16, v17, v18, v19, v20);
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
                  EffectList = (System_Int32_array **)BuffConvertEntity__GetEffectList(
                                                        (BuffConvertEntity_o *)BuffEntity,
                                                        *((System_Int32_array **)v9 + 9),
                                                        0LL);
                  *((_QWORD *)v9 + 9) = EffectList;
                  sub_B5D560((BattleServantConfConponent_o *)(v9 + 72), EffectList, v22, v23, v24, v25, v26, v27);
                  BuffEntity = this->fields.buffConvertEntity;
                  if ( BuffEntity )
                  {
                    OverwritePopupTextFromIndex = (System_Int32_array **)BuffConvertEntity__GetOverwritePopupTextFromIndex(
                                                                           (BuffConvertEntity_o *)BuffEntity,
                                                                           this->fields.convertBuffIndex,
                                                                           *((System_String_o **)v13 + 3),
                                                                           0LL);
                    *((_QWORD *)v9 + 7) = OverwritePopupTextFromIndex;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)(v9 + 56),
                      OverwritePopupTextFromIndex,
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
      sub_B5D69C(BuffEntity, v8);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantData_o *targetSvt; // x0
  BattleSkillInfoData_array *ActiveSkillInfos; // x20
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_c *v19; // x8
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x21
  Il2CppObject *v22; // x22
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  bool v30; // w8
  bool result; // w0

  if ( (byte_42E7CA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleSkillInfoData___, (_DWORD)action, (_DWORD)buffEnt, method);
    sub_B5D5C4(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleSkillInfoData__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v14, v15, v16);
    byte_42E7CA3 = 1;
  }
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_B5D69C(0LL, action);
  ActiveSkillInfos = BattleServantData__getActiveSkillInfos(targetSvt, 0LL);
  v19 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    v19 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v22,
      Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v23 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    v23->__9__0_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__0_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)ActiveSkillInfos,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleSkillInfoData___);
  result = 1;
  if ( !v30 )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return result;
}


void __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x0

  if ( (byte_42E602D & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo, v1, v2, v3);
    byte_42E602D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
  unsigned __int64 v11; // x22
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userSvtId; // x23
  bool result; // w0
  __int64 v14; // x0

  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    goto LABEL_19;
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
LABEL_19:
    sub_B5D69C(targetSvt, action);
  }
  v9 = *(_QWORD *)&targetSvt->fields.uniqueId;
  v10 = targetSvt;
  if ( (int)v9 < 1 )
    return 1;
  v11 = 0LL;
  p_userSvtId = &targetSvt->fields.userSvtId;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)v9 )
    {
LABEL_20:
      v14 = sub_B5D6C8(targetSvt);
      sub_B5D668(v14, 0LL);
    }
    if ( *((_BYTE *)&p_userSvtId->fields.currentCryptoKey + v11) )
    {
      if ( !v7 )
        goto LABEL_19;
      if ( v11 >= (unsigned int)v7->fields.uniqueId )
        goto LABEL_20;
      if ( *((_BYTE *)&v7->fields.userSvtId.fields.currentCryptoKey + v11) )
        break;
      targetSvt = this->fields.targetSvt;
      if ( !targetSvt )
        goto LABEL_19;
      targetSvt = (BattleServantData_o *)BattleServantData__isUseSelfSkill(targetSvt, v11, 0LL);
      if ( ((unsigned __int8)targetSvt & 1) == 0 )
        break;
    }
    LODWORD(v9) = v10->fields.uniqueId;
    if ( (__int64)++v11 >= (int)v9 )
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
  BattleLogicFunctionProcess_SubFieldIndividualityCheck_o *v7; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
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
        sub_B5D560(
          (BattleServantConfConponent_o *)&buffData->fields.generalParams,
          (System_Int32_array **)this,
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
    sub_B5D69C(this, actBuffData);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x5
  struct BattleBuffData_FieldChangeData_o *fieldChangeData; // x8

  v8 = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this;
  if ( (byte_42E7CA4 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)sub_B5D5C4(
                                                                                &BattleBuffData_FieldChangeData_TypeInfo,
                                                                                (_DWORD)actBuffData,
                                                                                (_DWORD)buffData,
                                                                                fieldFlag);
    byte_42E7CA4 = 1;
  }
  funcUnit_k__BackingField = v8->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleBuffData_FieldChangeData_o *)sub_B5D694(BattleBuffData_FieldChangeData_TypeInfo);
  BattleBuffData_FieldChangeData___ctor_23688116(v11, dataVals_k__BackingField, 0LL);
  if ( !buffData
    || (buffData->fields.fieldChangeData = v11,
        sub_B5D560(
          (BattleServantConfConponent_o *)&buffData->fields.fieldChangeData,
          (System_Int32_array **)v11,
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
    sub_B5D69C(this, actBuffData);
  }
  fieldChangeData->fields.buffUniqueId = buffData->fields.addOrder;
}


void __fastcall BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicFunctionProcess_FunctionTargetCheck_o *__fastcall BattleLogicFunctionProcess_ToFieldCommonFunctionProcess__MakeFunctionTargetCheck(
        BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *this,
        int32_t targetId,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnitCheck,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19

  if ( (byte_42E7CA5 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo, targetId, (_DWORD)funcUnitCheck, method);
    byte_42E7CA5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
  System_Object___ctor(v4, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleActionData_FieldBuffData_o *v4; // x19

  if ( (byte_42E7CA6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_FieldBuffData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7CA6 = 1;
  }
  v4 = (BattleActionData_FieldBuffData_o *)sub_B5D694(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v4, 0LL);
  return (BattleActionData_BuffData_o *)v4;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_42E7CA7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7CA7 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
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
        sub_B5D560(
          (BattleServantConfConponent_o *)&buffData->fields.generalParams,
          (System_Int32_array **)this,
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
    sub_B5D69C(this, actBuffData);
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
  this = (BattleLogicFunctionProcess_TransformServantProcess_o *)this[10].klass;
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
    sub_B5D69C(this, action);
  if ( DataVals__isParam(baseVals, 6, 0LL) && DataVals__GetParam(baseVals, 6, 0, 0LL) != HIDWORD(v9[7].monitor) )
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
  sub_B5D560(
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, buffIndiv);
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
  sub_B5D560((BattleServantConfConponent_o *)text, 0LL, (System_String_array **)method, v4, v5, v6, v7, v8);
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
    sub_B5D69C(target, isActiveOnly);
  }
  return BattleBuffData__getBuffIndividualities(
           (BattleBuffData_o *)target,
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7CA8 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7CA8 = 1;
  }
  return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
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
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
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

  target = this->fields.target;
  if ( !target
    || (target = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(target, 0LL)) == 0LL )
  {
    sub_B5D69C(target, indiv);
  }
  return BattleBuffData__getSameIndivualityBuffSum((BattleBuffData_o *)target, indiv, isActiveOnly, 0, 0, 0LL);
}


void __fastcall BattleLogicFunctionProcess_WrapTargetField__InitPartial(
        BattleLogicFunctionProcess_WrapTargetField_o *this,
        const MethodInfo *method)
{
  BattleData_o *Data; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x1

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  if ( !Data )
    sub_B5D69C(0LL, v4);
  FieldEnvData_k__BackingField = Data->fields._FieldEnvData_k__BackingField;
  this->fields.target = FieldEnvData_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.target,
    (System_Int32_array **)FieldEnvData_k__BackingField,
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, buffIndiv);
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
    sub_B5D69C(0LL, buffIndiv);
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
    sub_B5D69C(this, isActiveOnly);
  return BattleBuffData__getBuffIndividualities(
           (BattleBuffData_o *)this,
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
    sub_B5D69C(0LL, buffIndiv);
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
    sub_B5D69C(BaseVals, v6);
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
    sub_B5D69C(0LL, userCommandCodeId);
  return BattleServantData__GetCommandCardIndex(target, userCommandCodeId, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetServant__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, buffIndiv);
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
    sub_B5D69C(0LL, indiv);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  Data = BattleLogicFunctionProcess_WrapTargetData__get_Data(
           (BattleLogicFunctionProcess_WrapTargetData_o *)this,
           method);
  funcTarget = this->fields.funcTarget;
  if ( !funcTarget || !Data )
    sub_B5D69C(Data, v4);
  ServantData = BattleData__getServantData(Data, funcTarget->fields._targetId_k__BackingField, 0LL);
  this->fields.target = ServantData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.target,
    (System_Int32_array **)ServantData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__IsSatisfyTargetDefeatPointCondtion(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *BaseVals; // x0
  __int64 v4; // x1
  int32_t DefeatPoint; // w0
  int32_t param; // [xsp+Ch] [xbp-4h] BYREF

  param = 0;
  BaseVals = (BattleServantData_o *)BattleLogicFunctionProcess_WrapTargetData__get_BaseVals(
                                      (BattleLogicFunctionProcess_WrapTargetData_o *)this,
                                      method);
  if ( !BaseVals )
    goto LABEL_6;
  if ( DataVals__TryGetParam((DataVals_o *)BaseVals, 145, &param, 0LL) )
  {
    BaseVals = this->fields.target;
    if ( BaseVals )
    {
      DefeatPoint = BattleServantData__getDefeatPoint(BaseVals, 0LL);
      return (DefeatPoint < 1) ^ (param > 0);
    }
LABEL_6:
    sub_B5D69C(BaseVals, v4);
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
  BaseVals = (DataVals_o *)this->fields.target;
  if ( !BaseVals )
LABEL_7:
    sub_B5D69C(BaseVals, v4);
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
    sub_B5D69C(0LL, method);
  return BattleServantData__get_BuffData(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target )
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
  return BattleServantData__checkPlayer(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_B5D69C(0LL, method);
  return BattleServantData__isGuts(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(Data, v4);
  return (*(__int64 (__fastcall **)(BattleData_o *, struct BattleServantData_o *, _QWORD))&Data->klass[1]._2.initializationExceptionGCHandle)(
           Data,
           this->fields.target,
           *(_QWORD *)&Data->klass[1]._2.cctor_finished);
}