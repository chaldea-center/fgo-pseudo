void __fastcall TargetAggregator___ctor(TargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall TargetAggregator__BattleServantEnumerable(
        TargetAggregator_o *this,
        System_Collections_Generic_IEnumerable_int__o *servantUniqueIdArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Func_int__BattleActionData_SideEffectData__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  TargetAggregator___c_c *v15; // x8
  struct TargetAggregator___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__18_1; // x20
  Il2CppObject *v18; // x21
  struct TargetAggregator___c_StaticFields *v19; // x0

  if ( (byte_418452D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, servantUniqueIdArray);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v5);
    sub_B2C35C(&Method_System_Func_int__BattleServantData___ctor__, v6);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v7);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v8);
    sub_B2C35C(&System_Func_int__BattleServantData__TypeInfo, v9);
    sub_B2C35C(&Method_TargetAggregator__BattleServantEnumerable_b__18_0__, v10);
    sub_B2C35C(&Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, v11);
    sub_B2C35C(&TargetAggregator___c_TypeInfo, v12);
    byte_418452D = 1;
  }
  v13 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v13,
    (Il2CppObject *)this,
    Method_TargetAggregator__BattleServantEnumerable_b__18_0__,
    (const MethodInfo_270D828 *)Method_System_Func_int__BattleServantData___ctor__);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUniqueIdArray,
                                                               (System_Func_TSource__TResult__o *)v13,
                                                               (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v15 = TargetAggregator___c_TypeInfo;
  if ( (BYTE3(TargetAggregator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetAggregator___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetAggregator___c_TypeInfo);
    v15 = TargetAggregator___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__18_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = TargetAggregator___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__18_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__18_1,
      v18,
      Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
    v19 = TargetAggregator___c_TypeInfo->static_fields;
    v19->__9__18_1 = (struct System_Func_BattleServantData__bool__o *)_9__18_1;
    sub_B2C2F8(&v19->__9__18_1, _9__18_1);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v14,
                                                                          (System_Func_TSource__bool__o *)_9__18_1,
                                                                          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
}


BattleServantData_o *__fastcall TargetAggregator__GetMostMatchedServant(
        TargetAggregator_o *this,
        System_Int32_array *servantUniqueIdArray,
        TargetFilterLogic_o *targetFilterLogic,
        int32_t defaultServantUniqueId,
        const MethodInfo *method)
{
  BattleServantData_o *result; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  struct TargetAggregator_Args_o *args; // x8

  if ( (byte_418452F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___, servantUniqueIdArray);
    byte_418452F = 1;
  }
  result = (BattleServantData_o *)TargetAggregator__BattleServantEnumerable(
                                    this,
                                    (System_Collections_Generic_IEnumerable_int__o *)servantUniqueIdArray,
                                    (const MethodInfo *)targetFilterLogic);
  if ( !targetFilterLogic )
    goto LABEL_8;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(TargetFilterLogic_o *, BattleServantData_o *, const char *))targetFilterLogic->klass[1]._1.gc_desc)(
                                                               targetFilterLogic,
                                                               result,
                                                               targetFilterLogic->klass[1]._1.name);
  result = (BattleServantData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                    v11,
                                    (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___);
  if ( result )
    return result;
  args = this->fields.args;
  if ( !args || (result = (BattleServantData_o *)args->fields._battleData_k__BackingField) == 0LL )
LABEL_8:
    sub_B2C434(result, v10);
  return BattleData__getServantData((BattleData_o *)result, defaultServantUniqueId, 0LL);
}


void __fastcall TargetAggregator__Init(
        TargetAggregator_o *this,
        TargetAggregator_Args_o *args,
        const MethodInfo *method)
{
  this->fields.args = args;
  sub_B2C2F8(&this->fields, args);
}


System_Int32_array *__fastcall TargetAggregator__ToServantUniqueIdArray(
        TargetAggregator_o *this,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  __int64 v6; // x0

  if ( (byte_418452E & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, targetServant);
    byte_418452E = 1;
  }
  if ( !targetServant )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    sub_B2C434(0LL, v5);
  if ( !result->max_length )
  {
    v6 = sub_B2C460(result);
    sub_B2C400(v6, 0LL);
  }
  result->m_Items[1] = targetServant->fields.uniqueId;
  return result;
}


BattleServantData_o *__fastcall TargetAggregator___BattleServantEnumerable_b__18_0(
        TargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args || (this = (TargetAggregator_o *)args->fields._battleData_k__BackingField) == 0LL )
    sub_B2C434(this, x);
  return BattleData__getServantData((BattleData_o *)this, x, 0LL);
}


bool __fastcall TargetAggregator__get_IsOpponentTargetOnly(TargetAggregator_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TargetAggregator_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  bool IsActorPlayerSide; // w0
  struct TargetAggregator_Args_o *args; // x8
  bool v9; // w1
  __int16 *v10; // x0
  struct System_Nullable_bool__o v12; // [xsp+Ch] [xbp-14h] BYREF
  System_Nullable_bool__o v13; // 0:w0.2

  v3 = this;
  if ( (byte_418452C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_bool__GetValueOrDefault__, method);
    sub_B2C35C(&Method_System_Nullable_bool___ctor__, v4);
    sub_B2C35C(&Method_System_Nullable_bool__get_HasValue__, v5);
    this = (TargetAggregator_o *)sub_B2C35C(&Method_System_Nullable_bool__get_Value__, v6);
    byte_418452C = 1;
  }
  if ( *(_WORD *)&v3->fields.isOpponentTargetOnly <= 0xFFu )
  {
    args = v3->fields.args;
    if ( !args )
      sub_B2C434(this, method);
    IsActorPlayerSide = Target__IsActorPlayerSide(
                          args->fields._battleData_k__BackingField,
                          args->fields._actorId_k__BackingField,
                          args->fields._taskActorType_k__BackingField,
                          v2);
  }
  else
  {
    IsActorPlayerSide = (unsigned __int8)*(_WORD *)&v3->fields.isOpponentTargetOnly != 0;
  }
  v9 = IsActorPlayerSide;
  v10 = (__int16 *)&v12;
  v12 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v10,
    v9,
    (const MethodInfo_214E7FC *)Method_System_Nullable_bool___ctor__);
  v13 = (System_Nullable_bool__o)((_WORD)v3 + 24);
  v3->fields.isOpponentTargetOnly = v12;
  return System_Nullable_bool___get_Value(v13, (const MethodInfo_214E818 *)Method_System_Nullable_bool__get_Value__);
}


int32_t __fastcall TargetAggregator__get_actorId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B2C434(this, method);
  return args->fields._actorId_k__BackingField;
}


BattleData_o *__fastcall TargetAggregator__get_battleData(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B2C434(this, method);
  return args->fields._battleData_k__BackingField;
}


Target_BattleTargetArgs_o *__fastcall TargetAggregator__get_battleTargetArgs(
        TargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B2C434(this, method);
  return args->fields._battleTargetArgs_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_ptTargetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B2C434(this, method);
  return args->fields._ptTargetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_targetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B2C434(this, method);
  return args->fields._targetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_taskActorType(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B2C434(this, method);
  return args->fields._taskActorType_k__BackingField;
}


void __fastcall TargetAggregator_Args___ctor(
        TargetAggregator_Args_o *this,
        BattleData_o *battleData,
        int32_t actorId,
        int32_t targetId,
        int32_t ptTargetId,
        int32_t taskActorType,
        Target_BattleTargetArgs_o *battleTargetArgs,
        const MethodInfo *method)
{
  TargetAggregator_Args_o *v14; // x25

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields._battleData_k__BackingField = battleData;
  sub_B2C2F8(&v14->fields._battleData_k__BackingField, battleData);
  v14->fields._battleTargetArgs_k__BackingField = battleTargetArgs;
  v14 = (TargetAggregator_Args_o *)((char *)v14 + 48);
  v14[-1].fields._ptTargetId_k__BackingField = actorId;
  *(&v14[-1].fields._ptTargetId_k__BackingField + 1) = targetId;
  LODWORD(v14[-1].fields._battleData_k__BackingField) = ptTargetId;
  LODWORD(v14[-1].fields._battleTargetArgs_k__BackingField) = taskActorType;
  sub_B2C2F8(v14, battleTargetArgs);
}


int32_t __fastcall TargetAggregator_Args__get_actorId(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._actorId_k__BackingField;
}


BattleData_o *__fastcall TargetAggregator_Args__get_battleData(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._battleData_k__BackingField;
}


Target_BattleTargetArgs_o *__fastcall TargetAggregator_Args__get_battleTargetArgs(
        TargetAggregator_Args_o *this,
        const MethodInfo *method)
{
  return this->fields._battleTargetArgs_k__BackingField;
}


int32_t __fastcall TargetAggregator_Args__get_ptTargetId(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._ptTargetId_k__BackingField;
}


int32_t __fastcall TargetAggregator_Args__get_targetId(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._targetId_k__BackingField;
}


int32_t __fastcall TargetAggregator_Args__get_taskActorType(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._taskActorType_k__BackingField;
}


void __fastcall TargetAggregator_Args__set_actorId(
        TargetAggregator_Args_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._actorId_k__BackingField = value;
}


void __fastcall TargetAggregator_Args__set_battleData(
        TargetAggregator_Args_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  this->fields._battleData_k__BackingField = value;
  sub_B2C2F8(&this->fields._battleData_k__BackingField, value);
}


void __fastcall TargetAggregator_Args__set_ptTargetId(
        TargetAggregator_Args_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ptTargetId_k__BackingField = value;
}


void __fastcall TargetAggregator_Args__set_targetId(
        TargetAggregator_Args_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._targetId_k__BackingField = value;
}


void __fastcall TargetAggregator_Args__set_taskActorType(
        TargetAggregator_Args_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._taskActorType_k__BackingField = value;
}


void __fastcall TargetAggregator___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TargetAggregator___c_StaticFields *static_fields; // x0

  if ( (byte_41847E6 & 1) == 0 )
  {
    sub_B2C35C(&TargetAggregator___c_TypeInfo, v1);
    byte_41847E6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TargetAggregator___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TargetAggregator___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetAggregator___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall TargetAggregator___c___ctor(TargetAggregator___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TargetAggregator___c___BattleServantEnumerable_b__18_1(
        TargetAggregator___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}