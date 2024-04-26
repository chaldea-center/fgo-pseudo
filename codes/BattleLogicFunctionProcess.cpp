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

  if ( (byte_43513F6 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B70694(&int___TypeInfo);
    byte_43513F6 = 1;
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
  isParam = DataVals__isParam(baseVals, 139, 0LL);
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
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B706AC(
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
        v22 = sub_B70798(this);
        sub_B70738(v22, 0LL);
      }
      *((_DWORD *)&this[1].monitor + i) = *((_DWORD *)&v9[1].monitor + i);
      klass = (int)v9[1].klass;
    }
    goto LABEL_19;
  }
  if ( !this )
LABEL_29:
    sub_B7076C(this, baseVals);
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

  if ( (byte_43513F5 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
    byte_43513F5 = 1;
  }
  v4 = (Il2CppObject *)sub_B70764(BattleLogicFunctionProcess_FunctionTargetCheck_TypeInfo);
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x26
  int32_t targetId_k__BackingField; // w8
  DataVals_o *dataVals_k__BackingField; // x20
  FunctionEntity_o *funcEnt; // x24
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v11; // x23
  System_String_o *v12; // x25
  System_String_o *v13; // x0
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x23
  int32_t funcIndex; // w25
  char v18; // w0
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v19; // x0
  const MethodInfo *v20; // x4
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8
  struct BattleLogicFunction_o *v23; // x8
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  bool result; // w0
  int32_t uniqueId[2]; // [xsp+8h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_43513F4 & 1) == 0 )
  {
    sub_B70694(&FuncList_TYPE_TypeInfo);
    sub_B70694(&StringLiteral_95/*"  => targetId : "*/);
    sub_B70694(&StringLiteral_94/*"  <= no Target"*/);
    sub_B70694(&StringLiteral_219/*" funcEnt.funcType : "*/);
    sub_B70694(&StringLiteral_93/*"  <= no Individuality"*/);
    sub_B70694(&StringLiteral_92/*"  <= is No applyTarget "*/);
    this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B70694(&StringLiteral_91/*"  <= is Dead"*/);
    byte_43513F4 = 1;
  }
  *(_QWORD *)uniqueId = 0LL;
  if ( !funcTarget )
    goto LABEL_48;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcTarget->fields.invalidType = 0;
  uniqueId[1] = targetId_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_48;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_48;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  uniqueId[0] = dataVals_k__BackingField->fields.funcType;
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)j_il2cpp_value_box_0(
                                                                   FuncList_TYPE_TypeInfo,
                                                                   uniqueId,
                                                                   funcTarget);
  if ( !this )
    goto LABEL_48;
  v11 = this;
  v12 = (System_String_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass->vtable._4_init.methodPtr);
  uniqueId[0] = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
  System_String__Concat_44758168((System_String_o *)StringLiteral_219/*" funcEnt.funcType : "*/, v12, 0LL);
  v13 = System_Int32__ToString((int32_t)&uniqueId[1], 0LL);
  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)System_String__Concat_44758168(
                                                                   (System_String_o *)StringLiteral_95/*"  => targetId : "*/,
                                                                   v13,
                                                                   0LL);
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_48;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_48;
  WrapTarget_k__BackingField = funcTarget->fields._WrapTarget_k__BackingField;
  if ( externalArg->fields._SkillTiming_k__BackingField != 1
    || (this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__IsEqualsTo1(
                                                                         dataVals_k__BackingField,
                                                                         157,
                                                                         0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    if ( !WrapTarget_k__BackingField )
      goto LABEL_48;
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
          goto LABEL_48;
        if ( FunctionEntity__isTargetEnemy(funcEnt, 0LL) )
          goto LABEL_51;
      }
      this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass *))&WrapTarget_k__BackingField->klass[1]._1.this_arg.bits)(
                                                                       WrapTarget_k__BackingField,
                                                                       WrapTarget_k__BackingField->klass[1]._1.element_class);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !funcEnt )
          goto LABEL_48;
        if ( FunctionEntity__isTargetPlayer(funcEnt, 0LL) )
          goto LABEL_51;
      }
      if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppClass *))WrapTarget_k__BackingField->klass[1]._1.castClass)(
              WrapTarget_k__BackingField,
              WrapTarget_k__BackingField->klass[1]._1.declaringType) & 1) != 0 )
      {
LABEL_51:
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__isCheckDead(
                                                                         dataVals_k__BackingField,
                                                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_29;
        if ( dataVals_k__BackingField->fields.flgBoost )
          goto LABEL_29;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.parent)(
                                                                         WrapTarget_k__BackingField,
                                                                         WrapTarget_k__BackingField->klass[1]._1.generic_class);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_29;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.typeMetadataHandle)(
                                                                         WrapTarget_k__BackingField,
                                                                         WrapTarget_k__BackingField->klass[1]._1.interopData);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_29;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.klass)(
                                                                         WrapTarget_k__BackingField,
                                                                         WrapTarget_k__BackingField->klass[1]._1.fields);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_29;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))WrapTarget_k__BackingField->klass[1]._1.events)(
                                                                         WrapTarget_k__BackingField,
                                                                         WrapTarget_k__BackingField->klass[1]._1.properties);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_29;
        if ( !funcEnt )
          goto LABEL_48;
        this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)FuncList__Check(
                                                                         43,
                                                                         funcEnt->fields.funcType,
                                                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0
          || (this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)FuncList__Check(
                                                                               45,
                                                                               funcEnt->fields.funcType,
                                                                               0LL),
              ((unsigned __int8)this & 1) != 0) )
        {
LABEL_29:
          if ( !action )
            goto LABEL_48;
          action->fields.isSuccessTargetSelection = 1;
          funcIndex = dataVals_k__BackingField->fields.funcIndex;
          v18 = (*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, void *))&WrapTarget_k__BackingField->klass[1]._1.byval_arg.bits)(
                  WrapTarget_k__BackingField,
                  WrapTarget_k__BackingField->klass[1]._1.this_arg.data);
          BattleActionData__setFuncTargetPlayerType(action, funcIndex, v18 & 1, 0LL);
          this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)BattleLogicFunctionProcess_BaseFunctionTypeProcess__CheckTargetIndividuality(
                                                                           v19,
                                                                           dataVals_k__BackingField,
                                                                           WrapTarget_k__BackingField,
                                                                           funcEnt,
                                                                           v20);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            result = 0;
            funcTarget->fields.invalidType = 1;
            return result;
          }
          if ( funcUnit_k__BackingField->fields.questFuncFlg )
          {
            if ( !funcUnit_k__BackingField->fields._IsAvoidFuncExec_k__BackingField )
            {
              if ( !funcUnit_k__BackingField->fields.isLowestStarFunction )
                goto LABEL_37;
              logic_k__BackingField = funcUnit_k__BackingField->fields._logic_k__BackingField;
              if ( !logic_k__BackingField )
                goto LABEL_48;
              data = logic_k__BackingField->fields.data;
              if ( !data )
                goto LABEL_48;
              this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)DataVals__CheckFunctionTriggerStar(
                                                                               dataVals_k__BackingField,
                                                                               data->fields.totalCriticalStars,
                                                                               0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_37:
                v23 = v6->fields._logic_k__BackingField;
                if ( v23 )
                {
                  this = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)v23->fields.data;
                  if ( this )
                  {
                    ServantData = BattleData__getServantData((BattleData_o *)this, uniqueId[1], 0LL);
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
                    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
                      funcTarget,
                      dataVals_k__BackingField,
                      v26);
                    return 0;
                  }
                }
LABEL_48:
                sub_B7076C(this, action);
              }
            }
LABEL_45:
            result = 0;
            funcTarget->fields.invalidType = 1;
            return result;
          }
          if ( DataVals__isShowQuestNoEffect(dataVals_k__BackingField, 0LL) )
            goto LABEL_45;
        }
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
    sub_B7076C(this, action);
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
    sub_B7076C(this, action);
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
    sub_B7076C(this, method);
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
  sub_B70630(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v9 = this;
  if ( (byte_43513F7 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_B70694(&BattleBuffData_ChangeBgmData_TypeInfo);
    byte_43513F7 = 1;
  }
  if ( !buffData
    || (buffData->fields.delAfterProcType = 3,
        (this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)v9->fields.targetSvt) == 0LL)
    || (BattleServantData__addBuff((BattleServantData_o *)this, buffData, fieldFlag, isChangeMaxHpFlag, 1, 0LL),
        (targetSvt = v9->fields.targetSvt) == 0LL)
    || (funcUnit_k__BackingField = v9->fields._funcUnit_k__BackingField) == 0LL )
  {
    sub_B7076C(this, actBuffData);
  }
  uniqueId = targetSvt->fields.uniqueId;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v14 = (BattleBuffData_ChangeBgmData_o *)sub_B70764(BattleBuffData_ChangeBgmData_TypeInfo);
  BattleBuffData_ChangeBgmData___ctor_24121044(v14, uniqueId, buffData, dataVals_k__BackingField, 0LL);
  buffData->fields.changeBgmData = v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&buffData->fields.changeBgmData,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  struct System_Int32_array *effectlist; // x20
  BattleActionEffect_ChangeBgmBuff_o *v15; // x20

  v7 = mainAction;
  v8 = this;
  if ( (byte_43513F8 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)sub_B70694(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    byte_43513F8 = 1;
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
        effectlist = mainAction->fields.effectlist;
        this = (BattleLogicFunctionProcess_ChangeBgmCheck_o *)BattleBuffData_ChangeBgmData__MakeBgmGenerator(
                                                                buffData->fields.changeBgmData,
                                                                (BattleData_o *)mainAction,
                                                                0LL);
        if ( effectlist )
        {
          ((void (__fastcall *)(struct System_Int32_array *, BattleLogicFunctionProcess_ChangeBgmCheck_o *, __int64, Il2CppMethodPointer))effectlist->obj.klass->vtable[6].method)(
            effectlist,
            this,
            2LL,
            effectlist->obj.klass->vtable[7].methodPtr);
          v15 = (BattleActionEffect_ChangeBgmBuff_o *)sub_B70764(BattleActionEffect_ChangeBgmBuff_TypeInfo);
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
    sub_B7076C(this, mainAction);
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct BattleLogicFunction_o *logic_k__BackingField; // x9
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x23
  BattleLogicFunctionProcess_WrapTargetData_o *WrapTarget_k__BackingField; // x25
  FunctionEntity_o *funcEnt; // x22
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v13; // x26
  struct System_Collections_Generic_List_int__o *CardIdsIndexList_k__BackingField; // x8
  __int64 v15; // x2
  BuffEntity_o *v16; // x24
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v17; // x22
  System_String_o *v18; // x28
  System_Int32_array *vals; // x22
  System_Int32_array *ParamArray; // x0
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v22; // x28
  bool isDisabledBuff; // w22
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x2
  bool result; // w0
  int32_t v27; // w8
  struct BattleLogicFunction_o *v28; // x8
  const MethodInfo *v29; // x3
  int32_t Param; // w27
  int32_t v31; // w27
  int v32; // w27
  float v33; // s0
  int32_t v34; // w0
  float v35; // s0
  System_String_o *v36; // x0
  System_String_o *v37; // x22
  System_String_o *v38; // x0
  int32_t v39; // w22
  __int64 v40; // x22
  System_String_o *v41; // x0
  const MethodInfo *v42; // x3
  _BOOL8 v43; // x0
  const MethodInfo *v44; // x4
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t Value; // w0
  System_Int32_array *v52; // x22
  int32_t v53; // w21
  struct System_String_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_o *v61; // x0
  __int64 v62; // x0
  int32_t v63; // [xsp+0h] [xbp-70h]
  int32_t targetId; // [xsp+4h] [xbp-6Ch]
  MethodInfo methoda; // [xsp+8h] [xbp-68h] BYREF

  v6 = this;
  if ( (byte_43513FA & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&BuffList_TYPE_TypeInfo);
    sub_B70694(&StringLiteral_12542/*"STATUS_UP_BUFF"*/);
    sub_B70694(&StringLiteral_20228/*"is same Group "*/);
    sub_B70694(&StringLiteral_20227/*"is rate over "*/);
    sub_B70694(&StringLiteral_2493/*"BATTLE_GUARD_FUNCTION"*/);
    sub_B70694(&StringLiteral_20229/*"is same Limit "*/);
    sub_B70694(&StringLiteral_17660/*"check--Group( "*/);
    sub_B70694(&StringLiteral_192/*" buff : "*/);
    sub_B70694(&StringLiteral_187/*" avoid buff "*/);
    sub_B70694(&StringLiteral_134/*" < "*/);
    sub_B70694(&StringLiteral_17661/*"check--Rate( "*/);
    sub_B70694(&StringLiteral_17659/*"check-- SameBuffLimit"*/);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B70694(&StringLiteral_18203/*"defRate"*/);
    byte_43513FA = 1;
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
  v13 = this;
  ((void (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BattleLogicFunctionProcess_WrapTargetData_o *, Il2CppMethodPointer))funcTarget->klass->vtable._15_InitPrevCheckCondition.method)(
    funcTarget,
    action,
    WrapTarget_k__BackingField,
    funcTarget->klass->vtable._16_GetAttachTargetArray.methodPtr);
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
      v27 = 1;
LABEL_29:
      funcTarget->fields.invalidType = v27;
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
  v16 = (BuffEntity_o *)this;
  HIDWORD(methoda.methodPointer) = this->fields._logic_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)j_il2cpp_value_box_0(
                                                                 BuffList_TYPE_TypeInfo,
                                                                 (char *)&methoda.methodPointer + 4,
                                                                 v15);
  if ( !this )
    goto LABEL_74;
  v17 = this;
  v18 = (System_String_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateProcess_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass->vtable._4_init.methodPtr);
  HIDWORD(methoda.methodPointer) = *(_DWORD *)j_il2cpp_object_unbox_0(v17);
  System_String__Concat_44758168((System_String_o *)StringLiteral_192/*" buff : "*/, v18, 0LL);
  vals = v16->fields.vals;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 111, 0LL);
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)CommonFunction__JoinIndiv(vals, ParamArray, 0LL);
  if ( !procArg_k__BackingField
    || (externalArg = procArg_k__BackingField->fields.externalArg) == 0LL
    || (v22 = this,
        (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v6->fields._logic_k__BackingField) == 0LL) )
  {
LABEL_74:
    sub_B7076C(this, action);
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
                                                                   v22,
                                                                   v13,
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
                                                                   v22,
                                                                   v13,
                                                                   *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.interfaces_count);
LABEL_27:
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_28;
  }
  v28 = v6->fields._logic_k__BackingField;
  if ( !v28 )
    goto LABEL_74;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField,
          v28->fields.data,
          v24) )
    goto LABEL_39;
  Param = DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
  if ( (Param & 0x80000000) == 0 )
  {
    v63 = Param;
    goto LABEL_36;
  }
  if ( !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField->fields.funcIndex,
          v29) )
  {
LABEL_39:
    BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(
      (BattleLogicFunctionProcess_FunctionTargetCheck_o *)funcTarget,
      dataVals_k__BackingField,
      v25);
    return 0;
  }
  v63 = BattleUtility__Abs_24011596(Param, 0LL);
LABEL_36:
  methoda.name = 0LL;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleRandom__getNext(1000, 0LL);
  HIDWORD(methoda.invoker_method) = (_DWORD)this;
  if ( isDisabledBuff )
  {
    LODWORD(methoda.invoker_method) = 1000;
    if ( !DataVals__isParam(dataVals_k__BackingField, 112, 0LL) )
    {
      v31 = v63;
      LODWORD(methoda.invoker_method) = v63;
      goto LABEL_49;
    }
  }
  else
  {
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    v32 = (int)this;
    v33 = ((float (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, const char **, void *))WrapTarget_k__BackingField->klass[1]._2.typeHierarchy)(
            WrapTarget_k__BackingField,
            v22,
            v13,
            &methoda.name,
            WrapTarget_k__BackingField->klass[1]._2.unity_user_data);
    v34 = BattleUtility__FloorToInt((float)(v33 * 1000.0) + (float)v32, 0LL);
    LODWORD(methoda.invoker_method) = 1000;
    HIDWORD(methoda.invoker_method) = v34;
  }
  v31 = v63;
  if ( v13 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__isParam(dataVals_k__BackingField, 112, 0LL);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    v35 = (float)((*(float (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, const char **, _QWORD, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.thread_static_fields_offset)(
                    WrapTarget_k__BackingField,
                    v22,
                    v13,
                    &methoda.name,
                    (unsigned __int8)this & 1,
                    *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.token)
                * 1000.0)
        + (float)v63;
  }
  else
  {
    v35 = (float)v63;
  }
  LODWORD(methoda.invoker_method) = BattleUtility__FloorToInt(v35, 0LL);
LABEL_49:
  *(float *)&methoda.methodPointer = (float)DataVals__GetParam(dataVals_k__BackingField, 0, 0, 0LL);
  v36 = System_Single__ToString(*(float *)&methoda.methodPointer, &methoda);
  System_String__Concat_44758168((System_String_o *)StringLiteral_18203/*"defRate"*/, v36, 0LL);
  v37 = System_Int32__ToString((int32_t)&methoda.invoker_method + 4, 0LL);
  v38 = System_Int32__ToString((int32_t)&methoda.invoker_method, 0LL);
  System_String__Concat_44761580(
    (System_String_o *)StringLiteral_17661/*"check--Rate( "*/,
    v37,
    (System_String_o *)StringLiteral_134/*" < "*/,
    v38,
    0LL);
  if ( DataVals__isSameBuffLimit(dataVals_k__BackingField, 0LL) )
  {
    v39 = DataVals__GetParam(dataVals_k__BackingField, 40, 0, 0LL);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)DataVals__GetSameBuffLimitTargetIndividuality(
                                                                   dataVals_k__BackingField,
                                                                   0LL);
    if ( !WrapTarget_k__BackingField )
      goto LABEL_74;
    if ( (*(int (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, BattleLogicFunctionProcess_CommonAddStateProcess_o *, __int64, _QWORD))&WrapTarget_k__BackingField->klass[1]._2.initializationExceptionGCHandle)(
           WrapTarget_k__BackingField,
           this,
           1LL,
           *(_QWORD *)&WrapTarget_k__BackingField->klass[1]._2.cctor_finished) >= v39 )
    {
      result = 0;
      funcTarget->fields.invalidType = 1;
      return result;
    }
  }
  v40 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._12_GetConvertBuffEntity.method)(
          funcTarget,
          (unsigned int)action->fields.actorId,
          funcTarget->klass->vtable._13_CheckConvertBuffData.methodPtr);
  v41 = System_Int32__ToString((int)v16 + 72, 0LL);
  System_String__Concat_44758168((System_String_o *)StringLiteral_17660/*"check--Group( "*/, v41, 0LL);
  if ( !v40 )
  {
    v43 = BuffEntity__isCheckGroup(v16, 0LL);
    if ( v43
      && BattleLogicFunctionProcess_CommonAddStateProcess__IsDuplicatedBuffGroup(
           (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v43,
           funcTarget,
           v16,
           WrapTarget_k__BackingField,
           v44) )
    {
      goto LABEL_28;
    }
  }
  if ( (v31 & 0x80000000) != 0
    && !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
          procArg_k__BackingField,
          targetId,
          dataVals_k__BackingField->fields.funcIndex,
          v42) )
  {
    LODWORD(methoda.invoker_method) = -1000;
  }
  if ( (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleActionData_o *, BuffEntity_o *, void *))funcTarget->klass->vtable._17_CheckBuffCondtion.method)(
          funcTarget,
          action,
          v16,
          funcTarget->klass[1]._1.image) & 1) == 0 )
    return 0;
  if ( SHIDWORD(methoda.invoker_method) >= SLODWORD(methoda.invoker_method) )
  {
    funcTarget->fields.invalidText = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&funcTarget->fields.invalidText, 0LL, v45, v46, v47, v48, v49, v50);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_12542/*"STATUS_UP_BUFF"*/, 0LL);
    if ( SHIDWORD(methoda.invoker_method) < 1000 )
    {
LABEL_72:
      v61 = System_Int32__ToString((int32_t)&methoda.invoker_method, 0LL);
      System_String__Concat_44758168((System_String_o *)StringLiteral_20227/*"is rate over "*/, v61, 0LL);
      result = 0;
      v27 = 2;
      goto LABEL_29;
    }
    v52 = v16->fields.vals;
    v53 = Value;
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B706AC(int___TypeInfo, 1LL);
    if ( this )
    {
      if ( !LODWORD(this[1].klass) )
      {
        v62 = sub_B70798(this);
        sub_B70738(v62, 0LL);
      }
      LODWORD(this[1].monitor) = v53;
      if ( !Individuality__CheckIndividualities(v52, (System_Int32_array *)this, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_2493/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
        funcTarget->fields.invalidText = v54;
        sub_B70630(
          (BattleServantConfConponent_o *)&funcTarget->fields.invalidText,
          (System_Int32_array **)v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      goto LABEL_72;
    }
    goto LABEL_74;
  }
  if ( v40
    && (((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._13_CheckConvertBuffData.method)(
          funcTarget,
          v40,
          funcTarget->klass->vtable._14_GetFixBuffEntity.methodPtr) & 1) == 0 )
  {
    result = 0;
    v27 = 3;
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
  BattleLogicFunctionProcess_CommonAddStateProcess_c *klass; // x8
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v9; // x22
  unsigned __int64 v10; // x24
  int32_t v11; // w23
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x8
  __int64 v15; // x0

  if ( (byte_43513FB & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_43513FB = 1;
  }
  if ( !funcTarget )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)funcTarget->fields._AttachTargetList_k__BackingField;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)System_Collections_Generic_List_int___ToArray(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_20;
  klass = this[1].klass;
  v9 = this;
  if ( (int)klass >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)klass )
      {
        v15 = sub_B70798(this);
        sub_B70738(v15, 0LL);
      }
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
        BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(funcTarget, v11, v12);
      LODWORD(klass) = v9[1].klass;
      if ( (__int64)++v10 >= (int)klass )
        goto LABEL_15;
    }
LABEL_20:
    sub_B7076C(this, funcTarget);
  }
LABEL_15:
  if ( (byte_43513FD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_43513FD = 1;
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
  struct DataVals_o *dataVals_k__BackingField; // x8
  int logic_k__BackingField_high; // w8
  _QWORD *v8; // x8
  Il2CppObject *v9; // x19

  v5 = this;
  if ( (byte_43513FC & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_B70694(&BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo);
    byte_43513FC = 1;
  }
  if ( !funcUnitCheck
    || (dataVals_k__BackingField = funcUnitCheck->fields._dataVals_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)v5->fields._logic_k__BackingField) == 0LL
    || (this = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)BattleLogicFunction__GetBuffEntity(
                                                                       (BattleLogicFunction_o *)this,
                                                                       dataVals_k__BackingField->fields.funcEnt,
                                                                       0LL)) == 0LL )
  {
    sub_B7076C(this, *(_QWORD *)&targetId);
  }
  logic_k__BackingField_high = HIDWORD(this->fields._logic_k__BackingField);
  if ( logic_k__BackingField_high <= 161 )
  {
    if ( logic_k__BackingField_high == 154 )
    {
      v8 = &BattleLogicFunctionProcess_SkillRankUpStateTargetCheck_TypeInfo;
      goto LABEL_24;
    }
    if ( logic_k__BackingField_high == 161 )
    {
      v8 = &BattleLogicFunctionProcess_SkillSealSelectStateTargetCheck_TypeInfo;
      goto LABEL_24;
    }
LABEL_19:
    v8 = &BattleLogicFunctionProcess_ServantAddStateTargetCheck_TypeInfo;
    goto LABEL_24;
  }
  if ( logic_k__BackingField_high <= 10000 )
  {
    if ( logic_k__BackingField_high == 176 )
    {
      v8 = &BattleLogicFunctionProcess_SubFieldIndividualityCheck_TypeInfo;
      goto LABEL_24;
    }
    if ( logic_k__BackingField_high == 199 )
    {
      v8 = &BattleLogicFunctionProcess_ChangeBgmCheck_TypeInfo;
      goto LABEL_24;
    }
    goto LABEL_19;
  }
  if ( logic_k__BackingField_high == 10001 )
  {
    v8 = &BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_TypeInfo;
    goto LABEL_24;
  }
  if ( logic_k__BackingField_high == 10002 )
  {
    v8 = &BattleLogicFunctionProcess_ToFieldAvoidStateTargetCheck_TypeInfo;
    goto LABEL_24;
  }
  if ( logic_k__BackingField_high != 10003 )
    goto LABEL_19;
  v8 = &BattleLogicFunctionProcess_ToFieldSubIndividualityFieldCheck_TypeInfo;
LABEL_24:
  v9 = (Il2CppObject *)sub_B70764(*v8);
  System_Object___ctor(v9, 0LL);
  return (BattleLogicFunctionProcess_FunctionTargetCheck_o *)v9;
}


bool __fastcall BattleLogicFunctionProcess_CommonAddStateProcess__checkCondition(
        BattleLogicFunctionProcess_CommonAddStateProcess_o *this,
        BattleActionData_o *action,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x10
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v8; // x2

  if ( (byte_43513F9 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_CommonAddStateTargetCheck_TypeInfo);
    byte_43513F9 = 1;
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Int32_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4351401 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4351401 = 1;
  }
  CardIdsIndexList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField;
  if ( !CardIdsIndexList_k__BackingField
    || (CardIdsIndexList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       CardIdsIndexList_k__BackingField,
                                                                                       (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !buff)
    || (buff->fields.servantCardIdsIndexArray = (struct System_Int32_array *)CardIdsIndexList_k__BackingField,
        sub_B70630(
          (BattleServantConfConponent_o *)&buff->fields.servantCardIdsIndexArray,
          (System_Int32_array **)CardIdsIndexList_k__BackingField,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (CardIdsIndexList_k__BackingField = this->fields._AttachTargetList_k__BackingField) == 0LL) )
  {
    sub_B7076C(CardIdsIndexList_k__BackingField, buff);
  }
  v12 = System_Collections_Generic_List_int___ToArray(
          CardIdsIndexList_k__BackingField,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  buff->fields.attachTargets = v12;
  sub_B70630(
    (BattleServantConfConponent_o *)&buff->fields.attachTargets,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  __int64 v9; // x22
  System_Int32_array *result; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x23
  System_Action_int__o *v26; // x20
  __int64 v27; // x0

  if ( (byte_43513FF & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_int___);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__);
    sub_B70694(&BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
    byte_43513FF = 1;
  }
  v9 = sub_B70764(BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0___ctor(
    (BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v9 + 16) = v18;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  if ( userCommandCodeId >= 1 )
  {
    if ( !wrapTarget )
      goto LABEL_14;
    v25 = *(System_Collections_Generic_List_int__o **)(v9 + 16);
    result = (System_Int32_array *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, _QWORD))&wrapTarget->klass[1]._2.element_size)(
                                     wrapTarget,
                                     userCommandCodeId,
                                     *(_QWORD *)&wrapTarget->klass[1]._2.static_fields_size);
    if ( !v25 )
      goto LABEL_14;
    System_Collections_Generic_List_int___Add(
      v25,
      (_DWORD)result + 101,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  v26 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_BattleLogicFunctionProcess_CommonAddStateTargetCheck___c__DisplayClass14_0__GetAttachTargetArray_b__0__,
    (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)cardIdsIndexArray,
    (System_Action_T__o *)v26,
    (const MethodInfo_1BDD798 *)Method_BasicHelper_ForEach_int___);
  result = *(System_Int32_array **)(v9 + 16);
  if ( !result )
    goto LABEL_14;
  if ( (int)result->max_length > 0 )
    return System_Collections_Generic_List_int___ToArray(
             (System_Collections_Generic_List_int__o *)result,
             (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
LABEL_14:
    sub_B7076C(result, v11);
  if ( !result->max_length )
  {
    v27 = sub_B70798(result);
    sub_B70738(v27, 0LL);
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
  System_Collections_Generic_IEnumerable_T__o *v7; // x22
  System_Collections_Generic_List_int__o *v8; // x23
  BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **p_CardIdsIndexList_k__BackingField; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int64_t userCommandCodeId; // x21
  System_Int32_array *v17; // x0
  BattleServantConfConponent_o *p_AttachTargetList_k__BackingField; // x22
  System_Collections_Generic_IEnumerable_T__o *v19; // x19
  System_Collections_Generic_List_int__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  v6 = this;
  if ( (byte_43513FE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor___69164920);
    this = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *)sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_43513FE = 1;
  }
  if ( !wrapTarget
    || (v7 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_WrapTargetData_o *, _QWORD, BattleLogicFunctionProcess_WrapTargetData_o *, const MethodInfo *))wrapTarget->klass[1]._2.genericContainerHandle)(
                                                              wrapTarget,
                                                              *(_QWORD *)&wrapTarget->klass[1]._2.instance_size,
                                                              wrapTarget,
                                                              method),
        v8 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor_51074676(
          v8,
          v7,
          (const MethodInfo_30B5674 *)Method_System_Collections_Generic_List_int___ctor___69164920),
        v6->fields._CardIdsIndexList_k__BackingField = v8,
        p_CardIdsIndexList_k__BackingField = (BattleLogicFunctionProcess_CommonAddStateTargetCheck_o **)&v6->fields._CardIdsIndexList_k__BackingField,
        sub_B70630(
          (BattleServantConfConponent_o *)&v6->fields._CardIdsIndexList_k__BackingField,
          (System_Int32_array **)v8,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !action)
    || (this = *p_CardIdsIndexList_k__BackingField) == 0LL )
  {
    sub_B7076C(this, action);
  }
  userCommandCodeId = action->fields.userCommandCodeId;
  v17 = System_Collections_Generic_List_int___ToArray(
          (System_Collections_Generic_List_int__o *)this,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_AttachTargetList_k__BackingField = (BattleServantConfConponent_o *)&v6->fields._AttachTargetList_k__BackingField;
  v19 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *, BattleLogicFunctionProcess_WrapTargetData_o *, int64_t, System_Int32_array *, Il2CppMethodPointer))v6->klass->vtable._16_GetAttachTargetArray.method)(
                                                         v6,
                                                         wrapTarget,
                                                         userCommandCodeId,
                                                         v17,
                                                         v6->klass->vtable._17_CheckBuffCondtion.methodPtr);
  v20 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51074676(
    v20,
    v19,
    (const MethodInfo_30B5674 *)Method_System_Collections_Generic_List_int___ctor___69164920);
  p_AttachTargetList_k__BackingField->klass = (BattleServantConfConponent_c *)v20;
  sub_B70630(p_AttachTargetList_k__BackingField, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunctionProcess_CommonAddStateTargetCheck__RemoveAttachTarget(
        BattleLogicFunctionProcess_CommonAddStateTargetCheck_o *this,
        int32_t attachTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AttachTargetList_k__BackingField; // x0

  if ( (byte_4351400 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Remove__);
    byte_4351400 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField
    || (System_Collections_Generic_List_int___Remove(
          AttachTargetList_k__BackingField,
          attachTarget,
          (const MethodInfo_30B7B54 *)Method_System_Collections_Generic_List_int__Remove__),
        (AttachTargetList_k__BackingField = this->fields._CardIdsIndexList_k__BackingField) == 0LL) )
  {
    sub_B7076C(AttachTargetList_k__BackingField, *(_QWORD *)&attachTarget);
  }
  System_Collections_Generic_List_int___Remove(
    AttachTargetList_k__BackingField,
    attachTarget - 101,
    (const MethodInfo_30B7B54 *)Method_System_Collections_Generic_List_int__Remove__);
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

  if ( (byte_43513FD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_43513FD = 1;
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
  sub_B70630(
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
  sub_B70630(
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

  if ( (byte_4351592 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    byte_4351592 = 1;
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
    sub_B7076C(_4__this, *(_QWORD *)&index);
  }
  System_Collections_Generic_List_int___Add(
    targetList,
    (int32_t)_4__this,
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, action);
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
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v8; // x9
  int32_t targetId_k__BackingField; // w27
  DataVals_o *dataVals_k__BackingField; // x21
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x26
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v12; // x8
  BattleServantData_o *v13; // x20
  FunctionEntity_o *funcEnt; // x23
  BattleServantData_o *v15; // x22
  const MethodInfo *v16; // x2
  char v17; // w0
  int32_t v19; // w8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_String_o **p_invalidText; // x19
  System_Int32_array *vals; // x23
  float BuffTOLERANCESUBSTATEMagnification; // s0
  bool isDisplayLastFuncInvalid; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = action;
  v6 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **)this;
  if ( (byte_4351402 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_B70694(&StringLiteral_2493/*"BATTLE_GUARD_FUNCTION"*/);
    byte_4351402 = 1;
  }
  isDisplayLastFuncInvalid = 0;
  if ( !funcTarget )
    goto LABEL_52;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_52;
  v8 = v6[2];
  if ( !v8 )
    goto LABEL_52;
  if ( !v5 )
    goto LABEL_52;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v8->fields._logic_k__BackingField;
  if ( !this )
    goto LABEL_52;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)BattleData__getServantData(
                                                                     (BattleData_o *)this,
                                                                     v5->fields.actorId,
                                                                     0LL);
  v12 = v6[2];
  if ( !v12 )
    goto LABEL_52;
  v13 = (BattleServantData_o *)this;
  this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)v12->fields._logic_k__BackingField;
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
  v15 = (BattleServantData_o *)this;
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
      BattleLogicFunctionProcess_FunctionTargetCheck__changeInvalid(funcTarget, dataVals_k__BackingField, v16);
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
            if ( !v15 )
              goto LABEL_52;
            if ( !v15->fields.isEnemy )
              goto LABEL_18;
            funcTarget->fields.invalidType = 2;
            if ( !FuncList__Check(20, funcEnt->fields.funcType, 0LL)
              || BattleServantData__getBuffResistDelayNPTurn(v15, v13, 0LL) <= 0.0 )
            {
              goto LABEL_18;
            }
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2493/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
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
              if ( !v15 )
                goto LABEL_52;
              if ( BattleServantData__checkAvoidInstantDeath(v15, v13, 0LL) )
              {
                v19 = 1;
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
              if ( v13
                || (this = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)DataVals__isParam(
                                                                                       dataVals_k__BackingField,
                                                                                       74,
                                                                                       0LL),
                    action = 0LL,
                    ((unsigned __int8)this & 1) == 0) )
              {
                if ( !v15 )
                  goto LABEL_52;
                BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                       v15,
                                                       vals,
                                                       v13,
                                                       0LL);
                action = 0LL;
                if ( BuffTOLERANCESUBSTATEMagnification > 0.0 )
                {
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  action = (BattleActionData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2493/*"BATTLE_GUARD_FUNCTION"*/, 0LL);
                }
              }
            }
            funcTarget->fields.invalidText = (struct System_String_o *)action;
            p_invalidText = &funcTarget->fields.invalidText;
            *((_DWORD *)p_invalidText - 2) = 2;
          }
          sub_B70630(
            (BattleServantConfConponent_o *)p_invalidText,
            (System_Int32_array **)action,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          goto LABEL_18;
        }
      }
      if ( v15 )
      {
        if ( !BattleServantData__checkPlayer(v15, 0LL) )
          goto LABEL_18;
        v19 = 2;
LABEL_26:
        v17 = 0;
        funcTarget->fields.invalidType = v19;
        return v17 & 1;
      }
    }
LABEL_52:
    sub_B7076C(this, action);
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
    v17 = 0;
    return v17 & 1;
  }
  v17 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_CommonFunctionTypeProcess_o **, BattleActionData_o *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, DataVals_o *, BattleLogicFunction_ProcListInArgs_o *, void *))(*v6)[19].klass)(
          v6,
          v5,
          funcTarget,
          dataVals_k__BackingField,
          procArg_k__BackingField,
          (*v6)[19].monitor);
  return v17 & 1;
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
  sub_B70630(
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
  BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *v8; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v10; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v18; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v19; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  _BOOL4 isPassive; // w21

  v8 = this;
  if ( (byte_4351405 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_B70694(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_4351405 = 1;
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
      sub_B7076C(this, actBuffData);
    }
    if ( SLODWORD(funcUnit_k__BackingField->fields._procArg_k__BackingField) >= 1 )
    {
      v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v10,
        (Il2CppObject *)v8,
        Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck__AddBuff_b__8_0__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData___ctor__);
      v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)funcUnit_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)v10,
                                                                   (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
      this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v11,
                                                                        (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
      if ( !actBuffData )
        goto LABEL_19;
      actBuffData->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_B70630(
        (BattleServantConfConponent_o *)&actBuffData->fields.removeBuffList,
        (System_Int32_array **)this,
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
  this = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)DataVals__isParam((DataVals_o *)this, 108, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  bool v16; // w21
  System_Int32_array *GrantBuffTypeArray; // x22
  System_Func_int__bool__o *v18; // x23

  if ( (byte_4351404 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__);
    sub_B70694(&BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
    byte_4351404 = 1;
  }
  v6 = sub_B70764(BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_TypeInfo);
  BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0___ctor(
    (BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0_o *)v6,
    0LL);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = buffEnt;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)buffEnt, v9, v10, v11, v12, v13, v14);
  if ( this->fields.grantType != 1 )
    return 1;
  BuffData = BattleLogicFunctionProcess_FieldAddStateTargetCheck__get_FieldEnvData(this, v15);
  if ( !BuffData
    || (BuffData = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(BuffData, 0LL)) == 0LL )
  {
LABEL_11:
    sub_B7076C(BuffData, v8);
  }
  v16 = 1;
  GrantBuffTypeArray = BattleBuffData__GetGrantBuffTypeArray((BattleBuffData_o *)BuffData, 1, 1, 0LL);
  v18 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_BattleLogicFunctionProcess_FieldAddStateTargetCheck___c__DisplayClass7_0__CheckBuffCondtion_b__0__,
    (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__29214704(
         GrantBuffTypeArray,
         (System_Func_T__bool__o *)v18,
         (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616) )
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
  __int64 v7; // x0

  if ( (byte_4351403 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_4351403 = 1;
  }
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B7076C(0LL, v6);
  if ( !result->max_length )
  {
    v7 = sub_B70798(result);
    sub_B70738(v7, 0LL);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(dataVals_k__BackingField, v7);
  this->fields.grantType = DataVals__GetParam(dataVals_k__BackingField, 109, 0, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_FieldBuffData_o *v2; // x19

  if ( (byte_4351406 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_FieldBuffData_TypeInfo);
    byte_4351406 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_B70764(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0LL);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_FieldAddStateTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4351407 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_4351407 = 1;
  }
  v2 = (Il2CppObject *)sub_B70764(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
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
    sub_B7076C(BuffData, v5);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, type);
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
    sub_B7076C(this, method);
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
  sub_B70630(
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
  v10 = (struct BattleLogicFunctionProcess_WrapTargetData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))klass->vtable._10_MakeWrapTarget.method)(
                                                                this,
                                                                klass->vtable._11_MakeAddActionBuffData.methodPtr);
  this->fields._WrapTarget_k__BackingField = v10;
  sub_B70630(
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
    sub_B7076C(0LL, v17);
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
    sub_B7076C(this, mainAction);
  BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0LL);
  return 0;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunctionProcess_FunctionTargetCheck__MakeActionBuffData(
        BattleLogicFunctionProcess_FunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v2; // x19

  if ( (byte_4351409 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_BuffData_TypeInfo);
    byte_4351409 = 1;
  }
  v2 = (BattleActionData_BuffData_o *)sub_B70764(BattleActionData_BuffData_TypeInfo);
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
    sub_B7076C(this, actBuffData);
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

  if ( (byte_435140A & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
    byte_435140A = 1;
  }
  v2 = (Il2CppObject *)sub_B70764(BattleLogicFunctionProcess_WrapTargetServant_TypeInfo);
  System_Object___ctor(v2, 0LL);
  return (BattleLogicFunctionProcess_WrapTargetData_o *)v2;
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
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v10; // x0
  BattleActionData_o *v11; // x1
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v12; // x2
  const MethodInfo *v13; // x3
  System_RuntimeTypeHandle_o v14; // 0:w0.4

  if ( (byte_4351408 & 1) == 0 )
  {
    sub_B70694(&System_Enum_TypeInfo);
    sub_B70694(&BattleLogicFunctionProcess_FuncInvalidType_var);
    sub_B70694(&BattleLogicFunctionProcess_FuncInvalidType_TypeInfo);
    sub_B70694(&System_Type_TypeInfo);
    byte_4351408 = 1;
  }
  v5 = (int)BattleLogicFunctionProcess_FuncInvalidType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v14.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v14, 0LL);
  if ( !baseVals )
    goto LABEL_13;
  v8 = TypeFromHandle;
  DisplayLastFuncInvalidType = DataVals__GetDisplayLastFuncInvalidType(baseVals, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  TypeFromHandle = (System_Type_o *)System_Enum__ToObject_16242500(v8, DisplayLastFuncInvalidType, 0LL);
  if ( !TypeFromHandle )
LABEL_13:
    sub_B7076C(TypeFromHandle, v7);
  if ( TypeFromHandle->klass->_1.element_class == BattleLogicFunctionProcess_FuncInvalidType_TypeInfo->_1.element_class )
  {
    this->fields.invalidType = *(_DWORD *)j_il2cpp_object_unbox_0(TypeFromHandle);
  }
  else
  {
    v10 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)sub_B70A60(TypeFromHandle);
    BattleLogicFunctionProcess_BaseFunctionTypeProcess__checkCondition(v10, v11, v12, v13);
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
    sub_B7076C(this, funcProc);
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
    sub_B7076C(0LL, this);
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
    sub_B7076C(this, 0LL);
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
  sub_B70630(
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
  sub_B70630(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BattleLogicFunction_ProcListInArgs_o **p_procArg_k__BackingField; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_435140B & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
    byte_435140B = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToOtherList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.linkedToOtherList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck___ctor__);
  this->fields.linkedToSelfList = (struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *)v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.linkedToSelfList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._logic_k__BackingField = logic;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)logic, v21, v22, v23, v24, v25, v26);
  this->fields._procArg_k__BackingField = procArg;
  p_procArg_k__BackingField = &this->fields._procArg_k__BackingField;
  sub_B70630(
    (BattleServantConfConponent_o *)p_procArg_k__BackingField,
    (System_Int32_array **)procArg,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *((_BYTE *)p_procArg_k__BackingField + 25) = 0;
  v34 = (System_Int32_array **)sub_B706AC(BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo, 0LL);
  p_procArg_k__BackingField[7] = (struct BattleLogicFunction_ProcListInArgs_o *)v34;
  sub_B70630((BattleServantConfConponent_o *)(p_procArg_k__BackingField + 7), v34, v35, v36, v37, v38, v39, v40);
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8
  struct BattleData_o *data; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField || (data = logic_k__BackingField->fields.data) == 0LL )
    sub_B7076C(this, method);
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
    sub_B7076C(this, baseVal);
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
    sub_B7076C(this, baseVals);
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


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__SetAfterUpdateField(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  procArg_k__BackingField = this->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    sub_B7076C(this, method);
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
  BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *funcTargetArray_k__BackingField; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20

  if ( (byte_435140E & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_B70694(&Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
    sub_B70694(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_B70694(&Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0__checkFuncTargetResult_b__0__);
    sub_B70694(&BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0_TypeInfo);
    byte_435140E = 1;
  }
  v7 = (BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0_o *)sub_B70764(BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0_TypeInfo);
  BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.targetId = targetId;
  v7->fields.result = result;
  funcTargetArray_k__BackingField = this->fields._funcTargetArray_k__BackingField;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0__checkFuncTargetResult_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)funcTargetArray_k__BackingField,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionTargetCheck___);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__checkLinkedToSelfCondition(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *linkedToSelfList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  Il2CppObject *current; // x21
  const MethodInfo *v10; // x2
  int v11; // w19
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4351411 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_4351411 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  linkedToSelfList = this->fields.linkedToSelfList;
  if ( !linkedToSelfList )
    sub_B7076C(0LL, action);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkedToSelfList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    if ( !v6 )
    {
      v11 = 3;
      goto LABEL_11;
    }
    current = v13.fields.current;
    if ( !v13.fields.current )
      sub_B7076C(v6, v7);
    if ( !BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
            (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v13.fields.current,
            action,
            v8) )
      break;
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      this,
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)current,
      v10);
  }
  v11 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
  return v11 != 5;
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
  struct BattleData_o *data; // x23
  bool endbattleFlg; // w24
  char v11; // w8
  struct BattleLogicFunction_o *v12; // x8
  struct BattleData_o *v13; // x23
  bool loseBattleFlg; // w24
  struct BattleLogicFunction_o *v15; // x8
  struct BattleData_o *v16; // x23
  bool winBattleNotRelatedSurvivalStatus; // w24
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v18; // x23
  struct BattleLogicFunction_o *v19; // x8
  System_Int32_array *QuestIndividualities; // x0
  struct BattleLogicFunction_o *v21; // x8
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v23; // x2
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleLogicFunction_o *v26; // x8
  struct BattleData_o *v27; // x8
  System_Collections_Generic_HashSet_int__o *FuncEventExceptedHash_k__BackingField; // x0
  const MethodInfo *v29; // x3
  struct BattleLogicFunction_ProcListInArgs_o *v30; // x8
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
  struct BattleLogicFunction_ProcListInArgs_o *v43; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v44; // x2
  struct BattleLogicFunction_ProcListInArgs_o *v45; // x8
  struct BattleLogicFunction_FunctionArgument_o *v46; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v47; // x22
  struct BattleLogicFunction_o *v48; // x8
  struct BattleData_o *v49; // x8
  const MethodInfo *v50; // x2
  int v51; // w8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v52; // x21
  int v53; // w23
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v54; // x22
  const MethodInfo *v55; // x3
  __int64 v56; // x0
  int32_t targetId; // [xsp+20h] [xbp-60h]
  int32_t actorId; // [xsp+24h] [xbp-5Ch]
  BattleData_o *bdata; // [xsp+28h] [xbp-58h]

  v4 = this;
  if ( (byte_4351410 & 1) == 0 )
  {
    sub_B70694(&Target_BattleTargetArgs_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B70694(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    byte_4351410 = 1;
  }
  dataVals_k__BackingField = v4->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_65;
  v7 = FuncList__Check(0, funcEnt->fields.funcType, 0LL);
  LOBYTE(this) = 0;
  if ( v7 )
    return (char)this;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FuncList__Check(26, funcEnt->fields.funcType, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !action )
      goto LABEL_65;
    action->fields.isSuccessTargetSelection = 1;
  }
  logic_k__BackingField = v4->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    goto LABEL_65;
  data = logic_k__BackingField->fields.data;
  if ( !data )
    goto LABEL_65;
  endbattleFlg = data->fields.endbattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsEndBattle(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    v11 = 1;
  }
  else
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                               dataVals_k__BackingField,
                                                               0LL);
    v11 = (unsigned __int8)this & 1;
  }
  data->fields.endbattleFlg = v11 | endbattleFlg;
  v12 = v4->fields._logic_k__BackingField;
  if ( !v12 )
    goto LABEL_65;
  v13 = v12->fields.data;
  if ( !v13 )
    goto LABEL_65;
  loseBattleFlg = v13->fields.loseBattleFlg;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__IsLoseBattle(dataVals_k__BackingField, 0LL);
  v13->fields.loseBattleFlg = (loseBattleFlg | (unsigned __int8)this) & 1;
  v15 = v4->fields._logic_k__BackingField;
  if ( !v15
    || (v16 = v15->fields.data) == 0LL
    || (winBattleNotRelatedSurvivalStatus = v16->fields.winBattleNotRelatedSurvivalStatus,
        v16->fields.winBattleNotRelatedSurvivalStatus = (winBattleNotRelatedSurvivalStatus | DataVals__IsWinBattleNotRelatedSurvivalStatus(
                                                                                               dataVals_k__BackingField,
                                                                                               0LL)) & 1,
        v4->fields.questFuncFlg = 1,
        (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)FunctionEntity__getQuestTargetValues(funcEnt, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_B7076C(this, action);
  }
  v18 = this;
  if ( this->fields._procArg_k__BackingField )
  {
    v19 = v4->fields._logic_k__BackingField;
    if ( !v19 )
      goto LABEL_65;
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v19->fields.data;
    if ( !this )
      goto LABEL_65;
    QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__CheckIndividualities(
                                                               QuestIndividualities,
                                                               (System_Int32_array *)v18,
                                                               0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      v4->fields.questFuncFlg = 0;
  }
  v21 = v4->fields._logic_k__BackingField;
  if ( !v21 )
    goto LABEL_65;
  if ( !action )
    goto LABEL_65;
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v21->fields.data;
  if ( !this )
    goto LABEL_65;
  ServantData = BattleData__getServantData((BattleData_o *)this, action->fields.actorId, 0LL);
  this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__IsAvoidExecuteSelfFunc(
                                                             v4,
                                                             ServantData,
                                                             v23);
  procArg_k__BackingField = v4->fields._procArg_k__BackingField;
  v4->fields._IsAvoidFuncExec_k__BackingField = (unsigned __int8)this & 1;
  if ( !procArg_k__BackingField )
    goto LABEL_65;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_65;
  if ( externalArg->fields.isPassive )
  {
    v26 = v4->fields._logic_k__BackingField;
    if ( !v26 )
      goto LABEL_65;
    v27 = v26->fields.data;
    if ( !v27 )
      goto LABEL_65;
    FuncEventExceptedHash_k__BackingField = v27->fields._FuncEventExceptedHash_k__BackingField;
    if ( FuncEventExceptedHash_k__BackingField
      && FuncEventExceptedHash_k__BackingField->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           FuncEventExceptedHash_k__BackingField,
           funcEnt->fields.id,
           (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      goto LABEL_51;
    }
  }
  if ( !BattleActionData__IsSelectedAddTargetIndex(action, dataVals_k__BackingField, 0LL)
    || !BattleLogicFunctionProcess_FunctionUnitCheck__IsSatisfyFieldCountCondition(
          v4,
          dataVals_k__BackingField,
          action->fields.actorId,
          v29) )
  {
    goto LABEL_51;
  }
  if ( DataVals__checkActSet(dataVals_k__BackingField, 0LL) )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__getActSet(dataVals_k__BackingField, 0LL);
    v30 = v4->fields._procArg_k__BackingField;
    if ( !v30 )
      goto LABEL_65;
    if ( (_DWORD)this != v30->fields.actSetId )
    {
LABEL_51:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  if ( !DataVals__isParam(dataVals_k__BackingField, 129, 0LL)
    || (Param = DataVals__GetParam(dataVals_k__BackingField, 129, 0, 0LL),
        v33 = Param == BattleLogicFunctionProcess_FunctionUnitCheck__GetSafeMasterGenderType(v4, v32),
        LOBYTE(this) = 0,
        v33) )
  {
    args = (Target_BattleTargetArgs_o *)sub_B70764(Target_BattleTargetArgs_TypeInfo);
    Target_BattleTargetArgs___ctor(args, dataVals_k__BackingField, 0LL);
    v35 = v4->fields._logic_k__BackingField;
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
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Target__getTargetIds_19749540(
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
      v43 = v4->fields._procArg_k__BackingField;
      if ( v43 )
      {
        v44 = this;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v43->fields.externalArg;
        if ( this )
        {
          this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))this->klass[1]._1.namespaze)(
                                                                     this,
                                                                     (unsigned int)funcEnt->fields.targetType,
                                                                     v44,
                                                                     this->klass[1]._1.byval_arg.data);
          v45 = v4->fields._procArg_k__BackingField;
          if ( v45 )
          {
            v46 = v45->fields.externalArg;
            if ( v46 )
            {
              v47 = this;
              this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v46->fields.checkDuplicate;
              if ( this )
              {
                this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(*(__int64 (__fastcall **)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, DataVals_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                                           this,
                                                                           dataVals_k__BackingField,
                                                                           v47,
                                                                           this->klass[1]._1.this_arg.data);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_51;
                v48 = v4->fields._logic_k__BackingField;
                if ( v48 )
                {
                  v49 = v48->fields.data;
                  if ( v49 )
                  {
                    if ( !DataVals__CheckFunctionTriggerStar(
                            dataVals_k__BackingField,
                            v49->fields.totalCriticalStars,
                            0LL)
                      && !v4->fields.isLowestStarFunction )
                    {
                      goto LABEL_51;
                    }
                    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__makeTargetArray(
                                                                               v4,
                                                                               (System_Int32_array *)v47,
                                                                               v50);
                    if ( this )
                    {
                      v51 = (int)this->fields._procArg_k__BackingField;
                      v52 = this;
                      if ( v51 < 1 )
                      {
                        LOBYTE(this) = 1;
                        return (char)this;
                      }
                      v53 = 0;
                      while ( 1 )
                      {
                        if ( v53 >= (unsigned int)v51 )
                        {
                          v56 = sub_B70798(this);
                          sub_B70738(v56, 0LL);
                        }
                        v54 = (BattleLogicFunctionProcess_FunctionTargetCheck_o *)*((_QWORD *)&v52->fields._dataVals_k__BackingField
                                                                                  + v53);
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                                   v4,
                                                                                   (const MethodInfo *)action);
                        if ( !v54 )
                          break;
                        BattleLogicFunctionProcess_FunctionTargetCheck__checkFunctionTypeCondtion(
                          v54,
                          (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)this,
                          action,
                          v55);
                        v51 = (int)v52->fields._procArg_k__BackingField;
                        ++v53;
                        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)(&dword_0 + 1);
                        if ( v53 >= v51 )
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
    goto LABEL_65;
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
      sub_B7076C(this, funcTarget);
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
    sub_B7076C(0LL, method);
  return DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
}


BattleData_o *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_Data(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_o *logic_k__BackingField; // x8

  logic_k__BackingField = this->fields._logic_k__BackingField;
  if ( !logic_k__BackingField )
    sub_B7076C(this, method);
  return logic_k__BackingField->fields.data;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B7076C(this, method);
  return dataVals_k__BackingField->fields.funcIndex;
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_funcIndividuality; // x19
  System_Int32_array **funcIndividuality; // x20
  struct DataVals_o *dataVals_k__BackingField; // x8
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_funcIndividuality = (BattleServantConfConponent_o *)&this->fields.funcIndividuality;
  funcIndividuality = (System_Int32_array **)this->fields.funcIndividuality;
  if ( !funcIndividuality )
  {
    dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
    if ( !dataVals_k__BackingField
      || (this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)dataVals_k__BackingField->fields.funcEnt) == 0LL )
    {
      sub_B7076C(this, method);
    }
    funcIndividuality = (System_Int32_array **)FunctionEntity__GetFuncIndividuality((FunctionEntity_o *)this, 0LL);
    p_funcIndividuality->klass = (BattleServantConfConponent_c *)funcIndividuality;
    sub_B70630(p_funcIndividuality, funcIndividuality, v5, v6, v7, v8, v9, v10);
  }
  return (System_Int32_array *)funcIndividuality;
}


int32_t __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncType(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(0LL, method);
  return DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__get_IsAddLinkageTargetIndividualty(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        const MethodInfo *method)
{
  DataVals_o *dataVals_k__BackingField; // x0

  dataVals_k__BackingField = this->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
  System_Int32_array **v6; // x0
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x24
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v26; // x8
  __int64 v28; // x0
  __int64 v29; // x0

  v4 = this;
  if ( (byte_435140D & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B70694(&BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo);
    byte_435140D = 1;
  }
  if ( !targetlist )
LABEL_19:
    sub_B7076C(this, targetlist);
  max_length = targetlist->max_length;
  v6 = (System_Int32_array **)sub_B706AC(
                                BattleLogicFunctionProcess_FunctionTargetCheck___TypeInfo,
                                (unsigned int)max_length);
  v4->fields._funcTargetArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionTargetCheck_array *)v6;
  p_funcTargetArray_k__BackingField = &v4->fields._funcTargetArray_k__BackingField;
  sub_B70630(
    (BattleServantConfConponent_o *)&v4->fields._funcTargetArray_k__BackingField,
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
    v16 = 0LL;
    v17 = &targetlist->m_Items[1];
    v18 = 32LL;
    do
    {
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncTypeProc(
                                                                 v4,
                                                                 v14);
      if ( (unsigned int)v16 >= targetlist->max_length )
        goto LABEL_18;
      if ( !this )
        goto LABEL_19;
      this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                                                 this,
                                                                 (unsigned int)v17[v16],
                                                                 v4,
                                                                 this->klass[1]._1.declaringType);
      if ( !funcTargetArray_k__BackingField )
        goto LABEL_19;
      v25 = (System_Int32_array **)this;
      if ( this )
      {
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B70754(
                                                                   this,
                                                                   funcTargetArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v29 = sub_B7078C(0LL);
          sub_B70738(v29, 0LL);
        }
      }
      if ( (unsigned int)v16 >= funcTargetArray_k__BackingField->max_length )
        goto LABEL_18;
      *(Il2CppClass **)((char *)&funcTargetArray_k__BackingField->obj.klass + v18) = (Il2CppClass *)v25;
      sub_B70630(
        (BattleServantConfConponent_o *)((char *)funcTargetArray_k__BackingField + v18),
        v25,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v26 = *p_funcTargetArray_k__BackingField;
      if ( !*p_funcTargetArray_k__BackingField )
        goto LABEL_19;
      if ( (unsigned int)v16 >= v26->max_length || (unsigned int)v16 >= targetlist->max_length )
      {
LABEL_18:
        v28 = sub_B70798(this);
        sub_B70738(v28, 0LL);
      }
      this = *(BattleLogicFunctionProcess_FunctionUnitCheck_o **)((char *)&v26->obj.klass + v18);
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionUnitCheck_o *, _QWORD, BattleLogicFunctionProcess_FunctionUnitCheck_o *, const char *))this->klass[1]._1.gc_desc)(
        this,
        (unsigned int)v17[v16],
        v4,
        this->klass[1]._1.name);
      funcTargetArray_k__BackingField = v4->fields._funcTargetArray_k__BackingField;
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
  struct System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__o *linkedToOtherList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435140F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
    byte_435140F = 1;
  }
  memset(&v6, 0, sizeof(v6));
  linkedToOtherList = this->fields.linkedToOtherList;
  if ( !linkedToOtherList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)linkedToOtherList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B7076C(0LL, v4);
    BattleLogicFunctionProcess_FunctionUnitCheck__reflectLinkedToSelfResult(
      (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v6.fields.current,
      this,
      v5);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicFunctionProcess_FunctionUnitCheck__Dispose__);
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
        v7 = sub_B70798(this);
        sub_B70738(v7, 0LL);
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
    sub_B7076C(this, linkedToSelf);
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
  sub_B70630(
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
    sub_B7076C(FuncMaster, v12);
  }
  DataVals__SetType_30445316(dataVals_k__BackingField, (FunctionEntity_o *)FuncMaster, *funcIndex, 0LL);
}


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(
        BattleLogicFunctionProcess_FunctionUnitCheck_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_FunctionUnitCheck_o **v4; // x20
  signed int max_length; // w8
  unsigned int v6; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v7; // x21
  struct DataVals_o *dataVals_k__BackingField; // x8
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v9; // x22
  System_Int32_array *AddIndividualty; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v11; // x22
  System_Int32_array *LinkageTargetIndividualty; // x0
  __int64 v13; // x0

  v4 = (BattleLogicFunctionProcess_FunctionUnitCheck_o **)this;
  if ( (byte_435140C & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
    byte_435140C = 1;
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
        v13 = sub_B70798(this);
        sub_B70738(v13, 0LL);
      }
      this = v4[4];
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
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetLinkageTargetIndividualty(
                                                                   (DataVals_o *)this,
                                                                   0LL);
        if ( !v7->fields._dataVals_k__BackingField )
          break;
        v9 = this;
        AddIndividualty = DataVals__GetAddIndividualty(v7->fields._dataVals_k__BackingField, 0LL);
        if ( Individuality__IsPartialMatchArray((System_Int32_array *)v9, AddIndividualty, 0LL) )
        {
          this = v4[7];
          if ( !this )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
        }
        this = v4[4];
        if ( !this )
          break;
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)DataVals__GetAddIndividualty((DataVals_o *)this, 0LL);
        if ( !v7->fields._dataVals_k__BackingField )
          break;
        v11 = this;
        LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(v7->fields._dataVals_k__BackingField, 0LL);
        this = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)Individuality__IsPartialMatchArray(
                                                                   (System_Int32_array *)v11,
                                                                   LinkageTargetIndividualty,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = v4[8];
          if ( !this )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicFunctionProcess_FunctionUnitCheck__Add__);
        }
      }
      max_length = funcUnitArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_22:
    sub_B7076C(this, funcUnitArray);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._dataVals_k__BackingField = value;
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630(
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


void __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0___ctor(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0___checkFuncTargetResult_b__0(
        BattleLogicFunctionProcess_FunctionUnitCheck___c__DisplayClass56_0_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
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
  DataManager_o *Instance; // x0
  BuffList_TYPE_array *v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4351412 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_8929/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/);
    byte_4351412 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)ConstantStrMaster__GetValueArray(
                                (ConstantStrMaster_o *)Instance,
                                (System_String_o *)StringLiteral_8929/*"MOVE_TO_SUBMEMBER_REFUSE_BUFF_TYPE"*/,
                                0LL,
                                0LL);
  if ( !Instance )
    return (char)Instance;
  if ( !Instance->fields.datalist )
  {
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_QuestGroupType_Type_(
                                                              (System_Collections_IEnumerable_o *)Instance,
                                                              (const MethodInfo_1CAABA4 *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_BuffList_TYPE_(
                                v6,
                                (const MethodInfo_1CC867C *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !targetSvtData
    || (v5 = (BuffList_TYPE_array *)Instance, (Instance = (DataManager_o *)targetSvtData->fields.buffData) == 0LL)
    || (Instance = (DataManager_o *)BattleBuffData__getBuffList_31731308(
                                      (BattleBuffData_o *)Instance,
                                      v5,
                                      0LL,
                                      0LL,
                                      0LL)) == 0LL )
  {
LABEL_13:
    sub_B7076C(Instance, v5);
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
    sub_B7076C(this, action);
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
    sub_B7076C(0LL, actBuffData);
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
  sub_B70630(
    (BattleServantConfConponent_o *)p_buffConvertEntity,
    (System_Int32_array **)buffConvertEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !buffConvertEntity )
    sub_B7076C(v11, v12);
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
  bool isParam; // w8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v7; // x8
  struct BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x9
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x9
  bool v10; // w8
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  BattleBuffData_BuffData_o *current; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v17; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8
  struct FunctionEntity_o *funcEnt; // x8
  _BOOL8 IsTargetLimit; // x0
  __int64 v21; // x1
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *v22; // x8
  DataVals_o *v23; // x0
  struct FunctionEntity_o *v24; // x8
  struct System_Int32_array *vals; // x8
  BuffConvertEntity_o *v26; // x24
  int32_t v27; // w23
  System_Int32_array *ParamArray; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  BattleServantData_o *targetSvt; // x0
  BattleBuffData_o *BuffData; // x0
  __int64 v33; // x1
  BuffConvertEntity_o *v34; // x19
  char v35; // w20
  __int64 v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+0h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4351413 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BuffConvertMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4351413 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  entity = 0LL;
  funcUnit_k__BackingField = v4->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_44;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_44;
  isParam = DataVals__isParam((DataVals_o *)this, 22, 0LL);
  this = 0LL;
  if ( isParam )
    return (BuffConvertEntity_o *)this;
  v7 = v4->fields._funcUnit_k__BackingField;
  if ( !v7 )
    goto LABEL_44;
  procArg_k__BackingField = v7->fields._procArg_k__BackingField;
  if ( !procArg_k__BackingField )
    goto LABEL_44;
  externalArg = procArg_k__BackingField->fields.externalArg;
  if ( !externalArg )
    goto LABEL_44;
  if ( externalArg->fields.isPassive )
    return 0LL;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v7->fields._dataVals_k__BackingField;
  if ( !this )
    goto LABEL_44;
  v10 = DataVals__isParam((DataVals_o *)this, 23, 0LL);
  this = 0LL;
  if ( v10 )
    return (BuffConvertEntity_o *)this;
  this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)v4->fields.targetSvt;
  if ( !this
    || (BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffList(
                                                                          (BattleServantData_o *)this,
                                                                          114,
                                                                          1,
                                                                          0LL),
        (this = (BattleLogicFunctionProcess_ServantAddStateTargetCheck_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                             BuffList,
                                                                             (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___)) == 0LL) )
  {
LABEL_44:
    sub_B7076C(this, *(_QWORD *)&actorId);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v39 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = (BattleBuffData_BuffData_o *)v39.fields.current;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffConvertMaster___);
    if ( !current )
      sub_B7076C(Master_WarQuestSelectionMaster, v14);
    if ( !Master_WarQuestSelectionMaster )
      sub_B7076C(0LL, v14);
    v15 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            current->fields.buffId,
            (const MethodInfo_21C049C *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int__TryGetEntity__);
    if ( v15 )
    {
      v17 = v4->fields._funcUnit_k__BackingField;
      if ( !v17 )
        sub_B7076C(v15, v16);
      dataVals_k__BackingField = v17->fields._dataVals_k__BackingField;
      if ( !dataVals_k__BackingField )
        sub_B7076C(v15, v16);
      funcEnt = dataVals_k__BackingField->fields.funcEnt;
      if ( !funcEnt )
        sub_B7076C(v15, v16);
      if ( !entity )
        sub_B7076C(0LL, v16);
      IsTargetLimit = BuffConvertEntity__IsTargetLimit(
                        (BuffConvertEntity_o *)entity,
                        funcEnt->fields.targetType,
                        v4->fields._targetId_k__BackingField,
                        actorId,
                        0LL);
      if ( IsTargetLimit )
      {
        v22 = v4->fields._funcUnit_k__BackingField;
        if ( !v22 )
          sub_B7076C(IsTargetLimit, v21);
        v23 = v22->fields._dataVals_k__BackingField;
        if ( !v23 )
          sub_B7076C(0LL, v21);
        v24 = v23->fields.funcEnt;
        if ( !v24 )
          sub_B7076C(v23, v21);
        vals = v24->fields.vals;
        if ( !vals )
          sub_B7076C(v23, v21);
        if ( !vals->max_length )
        {
          v36 = sub_B70798(v23);
          sub_B70738(v36, 0LL);
        }
        v26 = (BuffConvertEntity_o *)entity;
        v27 = vals->m_Items[1];
        ParamArray = DataVals__GetParamArray(v23, 111, 0LL);
        if ( !v26 )
          sub_B7076C(ParamArray, v29);
        if ( BuffConvertEntity__TryGetConvertBuffIndex(v26, &v4->fields.convertBuffIndex, v27, ParamArray, 0LL) )
        {
          targetSvt = v4->fields.targetSvt;
          if ( !targetSvt )
            sub_B7076C(0LL, v30);
          BuffData = BattleServantData__get_BuffData(targetSvt, 0LL);
          if ( !BuffData )
            sub_B7076C(0LL, v33);
          if ( BattleBuffData__checkBuffSuccessful(BuffData, current, 1, 0LL) )
          {
            v34 = (BuffConvertEntity_o *)entity;
            v35 = 2;
            goto LABEL_40;
          }
        }
      }
    }
  }
  v35 = 0;
  v34 = 0LL;
LABEL_40:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( ((v35 + 2) & 3) != 0 )
    return 0LL;
  else
    return v34;
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
    sub_B7076C(data, v8);
  }
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  this->fields.targetSvt = ServantData;
  sub_B70630(
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
  __int64 v8; // x8
  System_Collections_Generic_List_int__o *v9; // x22
  unsigned __int64 v10; // x24
  int32_t v11; // w23
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_int__o *v13; // x8
  __int64 v15; // x0

  if ( (byte_4351414 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4351414 = 1;
  }
  AttachTargetList_k__BackingField = this->fields._AttachTargetList_k__BackingField;
  if ( !AttachTargetList_k__BackingField )
    goto LABEL_19;
  AttachTargetList_k__BackingField = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                                 AttachTargetList_k__BackingField,
                                                                                 (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      {
        v15 = sub_B70798(AttachTargetList_k__BackingField);
        sub_B70738(v15, 0LL);
      }
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
    sub_B7076C(AttachTargetList_k__BackingField, buffEnt);
  }
LABEL_14:
  if ( (byte_43513FD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_43513FD = 1;
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
    BuffEntity[102] = this->fields.isBuffConvertFailure;
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
            *((_QWORD *)v9 + 13) = GrayActionBuffData;
            sub_B70630((BattleServantConfConponent_o *)(v9 + 104), GrayActionBuffData, v15, v16, v17, v18, v19, v20);
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
                  sub_B70630((BattleServantConfConponent_o *)(v9 + 72), EffectList, v22, v23, v24, v25, v26, v27);
                  BuffEntity = this->fields.buffConvertEntity;
                  if ( BuffEntity )
                  {
                    OverwritePopupTextFromIndex = (System_Int32_array **)BuffConvertEntity__GetOverwritePopupTextFromIndex(
                                                                           (BuffConvertEntity_o *)BuffEntity,
                                                                           this->fields.convertBuffIndex,
                                                                           *((System_String_o **)v13 + 3),
                                                                           0LL);
                    *((_QWORD *)v9 + 7) = OverwritePopupTextFromIndex;
                    sub_B70630(
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
      sub_B7076C(BuffEntity, v8);
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
  BattleSkillInfoData_array *ActiveSkillInfos; // x20
  BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_c *v7; // x8
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__0_0; // x21
  Il2CppObject *v10; // x22
  struct BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  bool v18; // w8
  bool result; // w0

  if ( (byte_4351415 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_BattleSkillInfoData___);
    sub_B70694(&Method_System_Func_BattleSkillInfoData__bool___ctor__);
    sub_B70694(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_B70694(&Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__);
    sub_B70694(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_4351415 = 1;
  }
  targetSvt = this->fields.targetSvt;
  if ( !targetSvt )
    sub_B7076C(0LL, action);
  ActiveSkillInfos = BattleServantData__getActiveSkillInfos(targetSvt, 0LL);
  v7 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  if ( (BYTE3(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    v7 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__0_0,
      v10,
      Method_BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c__CheckBuffCondtion_b__0_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v11 = BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
    v11->__9__0_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__0_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v11->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
          (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)ActiveSkillInfos,
          (System_Func_T__bool__o *)_9__0_0,
          (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_BattleSkillInfoData___);
  result = 1;
  if ( !v18 )
  {
    this->fields.invalidType = 1;
    return 0;
  }
  return result;
}


void __fastcall BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4351593 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
    byte_4351593 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicFunctionProcess_SkillRankUpStateTargetCheck___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(targetSvt, action);
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
      v14 = sub_B70798(targetSvt);
      sub_B70738(v14, 0LL);
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
        sub_B70630(
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
    sub_B7076C(this, actBuffData);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x5
  struct BattleBuffData_FieldChangeData_o *fieldChangeData; // x8

  v8 = (BattleLogicFunctionProcess_FieldAddStateTargetCheck_o *)this;
  if ( (byte_4351416 & 1) == 0 )
  {
    this = (BattleLogicFunctionProcess_ToFieldChangeFieldStateTargetCheck_o *)sub_B70694(&BattleBuffData_FieldChangeData_TypeInfo);
    byte_4351416 = 1;
  }
  funcUnit_k__BackingField = v8->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_7;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleBuffData_FieldChangeData_o *)sub_B70764(BattleBuffData_FieldChangeData_TypeInfo);
  BattleBuffData_FieldChangeData___ctor_24124064(v11, dataVals_k__BackingField, 0LL);
  if ( !buffData
    || (buffData->fields.fieldChangeData = v11,
        sub_B70630(
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
    sub_B7076C(this, actBuffData);
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

  if ( (byte_4351417 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
    byte_4351417 = 1;
  }
  v4 = (Il2CppObject *)sub_B70764(BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_TypeInfo);
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
  BattleActionData_FieldBuffData_o *v2; // x19

  if ( (byte_4351418 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_FieldBuffData_TypeInfo);
    byte_4351418 = 1;
  }
  v2 = (BattleActionData_FieldBuffData_o *)sub_B70764(BattleActionData_FieldBuffData_TypeInfo);
  BattleActionData_FieldBuffData___ctor(v2, 0LL);
  return (BattleActionData_BuffData_o *)v2;
}


BattleLogicFunctionProcess_WrapTargetData_o *__fastcall BattleLogicFunctionProcess_ToFieldFunctionTargetCheck__MakeWrapTarget(
        BattleLogicFunctionProcess_ToFieldFunctionTargetCheck_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19

  if ( (byte_4351419 & 1) == 0 )
  {
    sub_B70694(&BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
    byte_4351419 = 1;
  }
  v2 = (Il2CppObject *)sub_B70764(BattleLogicFunctionProcess_WrapTargetField_TypeInfo);
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
        sub_B70630(
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
    sub_B7076C(this, actBuffData);
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
    sub_B7076C(this, action);
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
  sub_B70630(
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(0LL, buffIndiv);
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
  sub_B70630((BattleServantConfConponent_o *)text, 0LL, (System_String_array **)method, v4, v5, v6, v7, v8);
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
    sub_B7076C(target, isActiveOnly);
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
  sub_B70630(
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
  if ( (byte_435141A & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_435141A = 1;
  }
  return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
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
    sub_B7076C(0LL, method);
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
  sub_B70630(
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
    sub_B7076C(target, indiv);
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
    sub_B7076C(0LL, v4);
  FieldEnvData_k__BackingField = Data->fields._FieldEnvData_k__BackingField;
  this->fields.target = FieldEnvData_k__BackingField;
  sub_B70630(
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, buffIndiv);
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
    sub_B7076C(0LL, buffIndiv);
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
    sub_B7076C(this, isActiveOnly);
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
    sub_B7076C(0LL, buffIndiv);
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
    sub_B7076C(BaseVals, v6);
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
    sub_B7076C(0LL, userCommandCodeId);
  return BattleServantData__GetCommandCardIndex(target, userCommandCodeId, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunctionProcess_WrapTargetServant__GetIndividualities(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_B7076C(0LL, method);
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
    sub_B7076C(this, buffIndiv);
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
    sub_B7076C(0LL, indiv);
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
    sub_B7076C(Data, v4);
  ServantData = BattleData__getServantData(Data, funcTarget->fields._targetId_k__BackingField, 0LL);
  this->fields.target = ServantData;
  sub_B70630(
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
  if ( DataVals__TryGetParam((DataVals_o *)BaseVals, 144, &param, 0LL) )
  {
    BaseVals = this->fields.target;
    if ( BaseVals )
    {
      DefeatPoint = BattleServantData__getDefeatPoint(BaseVals, 0LL);
      return (DefeatPoint < 1) ^ (param > 0);
    }
LABEL_6:
    sub_B7076C(BaseVals, v4);
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
  if ( !DataVals__TryGetParam(BaseVals, 141, &param, 0LL) )
  {
    v6 = 1;
    return v6 & 1;
  }
  BaseVals = (DataVals_o *)this->fields.target;
  if ( !BaseVals )
LABEL_7:
    sub_B7076C(BaseVals, v4);
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
    sub_B7076C(0LL, method);
  return BattleServantData__get_BuffData(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_CheckEnemy(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *target; // x8

  target = this->fields.target;
  if ( !target )
    sub_B7076C(this, method);
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
    sub_B7076C(0LL, method);
  return BattleServantData__checkPlayer(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsGuts(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_B7076C(0LL, method);
  return BattleServantData__isGuts(target, 0LL);
}


bool __fastcall BattleLogicFunctionProcess_WrapTargetServant__get_IsLogicResultAlive(
        BattleLogicFunctionProcess_WrapTargetServant_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(Data, v4);
  return (*(__int64 (__fastcall **)(BattleData_o *, struct BattleServantData_o *, _QWORD))&Data->klass[1]._2.initializationExceptionGCHandle)(
           Data,
           this->fields.target,
           *(_QWORD *)&Data->klass[1]._2.cctor_finished);
}