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
  System_Func_T__TResult__o *v11; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x0
  TargetAggregator___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  System_Func_object__bool__o *_9__18_1; // x20
  Il2CppObject *v16; // x21
  struct TargetAggregator___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A72B35 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, servantUniqueIdArray);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_BattleServantData___, v5);
    sub_1B90010(&System_Func_int__BattleServantData__TypeInfo, v6);
    sub_1B90010(&System_Func_BattleServantData__bool__TypeInfo, v7);
    sub_1B90010(&Method_TargetAggregator__BattleServantEnumerable_b__18_0__, v8);
    sub_1B90010(&Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, v9);
    sub_1B90010(&TargetAggregator___c_TypeInfo, v10);
    byte_4A72B35 = 1;
  }
  v11 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_TargetAggregator__BattleServantEnumerable_b__18_0__,
    0LL);
  v12 = System_Linq_Enumerable__Select_int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantUniqueIdArray,
          (System_Func_TSource__TResult__o *)v11,
          (const MethodInfo_2EBC6B8 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v13 = TargetAggregator___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  if ( !TargetAggregator___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetAggregator___c_TypeInfo);
    v13 = TargetAggregator___c_TypeInfo;
  }
  _9__18_1 = (System_Func_object__bool__o *)v13->static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = TargetAggregator___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__18_1 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__18_1, v16, Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, 0LL);
    static_fields = TargetAggregator___c_TypeInfo->static_fields;
    static_fields->__9__18_1 = (struct System_Func_BattleServantData__bool__o *)_9__18_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_1, (int32_t)_9__18_1, v18, v19);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                          v14,
                                                                          (System_Func_TSource__bool__o *)_9__18_1,
                                                                          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
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

  if ( (byte_4A72B37 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___, servantUniqueIdArray);
    byte_4A72B37 = 1;
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
  result = (BattleServantData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                    v11,
                                    (const MethodInfo_2EB1F14 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___);
  if ( result )
    return result;
  args = this->fields.args;
  if ( !args || (result = (BattleServantData_o *)args->fields._battleData_k__BackingField) == 0LL )
LABEL_8:
    sub_1B9026C(result, v10);
  return BattleData__getServantData((BattleData_o *)result, defaultServantUniqueId, 0LL);
}


void __fastcall TargetAggregator__Init(
        TargetAggregator_o *this,
        TargetAggregator_Args_o *args,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.args = args;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)args, (int32_t)method, v3);
}


System_Int32_array *__fastcall TargetAggregator__ToServantUniqueIdArray(
        TargetAggregator_o *this,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1

  if ( (byte_4A72B36 & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, targetServant);
    byte_4A72B36 = 1;
  }
  if ( !targetServant )
    return (System_Int32_array *)sub_1B900B8(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1B900B8(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B9026C(0LL, v5);
  if ( !result->max_length )
    sub_1B90274(result, v5);
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
    sub_1B9026C(this, x);
  return BattleData__getServantData((BattleData_o *)this, x, 0LL);
}


bool __fastcall TargetAggregator__get_IsOpponentTargetOnly(TargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  bool IsActorPlayerSide; // w0
  struct TargetAggregator_Args_o *args; // x8
  bool v8; // w1
  __int16 *v9; // x0
  struct System_Nullable_bool__o v11; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v12; // 0:w0.2

  v2 = this;
  if ( (byte_4A72B34 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Nullable_bool__GetValueOrDefault__, method);
    sub_1B90010(&Method_System_Nullable_bool___ctor__, v3);
    sub_1B90010(&Method_System_Nullable_bool__get_HasValue__, v4);
    this = (TargetAggregator_o *)sub_1B90010(&Method_System_Nullable_bool__get_Value__, v5);
    byte_4A72B34 = 1;
  }
  if ( (unsigned __int8)*(_WORD *)&v2->fields.isOpponentTargetOnly )
  {
    IsActorPlayerSide = *(_WORD *)&v2->fields.isOpponentTargetOnly > 0xFFu;
  }
  else
  {
    args = v2->fields.args;
    if ( !args )
      sub_1B9026C(this, method);
    IsActorPlayerSide = Target__IsActorPlayerSide(
                          args->fields._battleData_k__BackingField,
                          args->fields._actorId_k__BackingField,
                          args->fields._taskActorType_k__BackingField,
                          0LL);
  }
  v8 = IsActorPlayerSide;
  v9 = (__int16 *)&v11;
  v11 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v9,
    v8,
    (const MethodInfo_36298D8 *)Method_System_Nullable_bool___ctor__);
  v12 = (System_Nullable_bool__o)((_WORD)v2 + 24);
  v2->fields.isOpponentTargetOnly = v11;
  return System_Nullable_bool___get_Value(v12, (const MethodInfo_36298F4 *)Method_System_Nullable_bool__get_Value__);
}


int32_t __fastcall TargetAggregator__get_actorId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1B9026C(this, method);
  return args->fields._actorId_k__BackingField;
}


BattleData_o *__fastcall TargetAggregator__get_battleData(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1B9026C(this, method);
  return args->fields._battleData_k__BackingField;
}


Target_BattleTargetArgs_o *__fastcall TargetAggregator__get_battleTargetArgs(
        TargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1B9026C(this, method);
  return args->fields._battleTargetArgs_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_ptTargetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1B9026C(this, method);
  return args->fields._ptTargetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_targetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1B9026C(this, method);
  return args->fields._targetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_taskActorType(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1B9026C(this, method);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields._battleData_k__BackingField = battleData;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&v14->fields._battleData_k__BackingField,
    (int32_t)battleData,
    v15,
    v16);
  v14->fields._battleTargetArgs_k__BackingField = battleTargetArgs;
  v14 = (TargetAggregator_Args_o *)((char *)v14 + 48);
  v14[-1].fields._ptTargetId_k__BackingField = actorId;
  *(&v14[-1].fields._ptTargetId_k__BackingField + 1) = targetId;
  LODWORD(v14[-1].fields._battleData_k__BackingField) = ptTargetId;
  LODWORD(v14[-1].fields._battleTargetArgs_k__BackingField) = taskActorType;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v14, (int32_t)battleTargetArgs, v17, v18);
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
  int32_t v3; // w3

  this->fields._battleData_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._battleData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A72B38 & 1) == 0 )
  {
    sub_1B90010(&TargetAggregator___c_TypeInfo, v1);
    byte_4A72B38 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(TargetAggregator___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TargetAggregator___c_TypeInfo->static_fields->__9 = (struct TargetAggregator___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)TargetAggregator___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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