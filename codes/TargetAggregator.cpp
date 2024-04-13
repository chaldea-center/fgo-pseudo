void __fastcall TargetAggregator___ctor(TargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall TargetAggregator__BattleServantEnumerable(
        TargetAggregator_o *this,
        System_Collections_Generic_IEnumerable_int__o *servantUniqueIdArray,
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
  System_Func_int__BattleActionData_SideEffectData__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  TargetAggregator___c_c *v32; // x8
  struct TargetAggregator___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__18_1; // x20
  Il2CppObject *v35; // x21
  struct TargetAggregator___c_StaticFields *v36; // x0

  if ( (byte_42E5B26 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_int__BattleServantData___,
      (_DWORD)servantUniqueIdArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_int__BattleServantData___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Func_int__BattleServantData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_TargetAggregator__BattleServantEnumerable_b__18_0__, v21, v22, v23);
    sub_B5D5C4(&Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, v24, v25, v26);
    sub_B5D5C4(&TargetAggregator___c_TypeInfo, v27, v28, v29);
    byte_42E5B26 = 1;
  }
  v30 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v30,
    (Il2CppObject *)this,
    Method_TargetAggregator__BattleServantEnumerable_b__18_0__,
    (const MethodInfo_2C29938 *)Method_System_Func_int__BattleServantData___ctor__);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUniqueIdArray,
                                                               (System_Func_TSource__TResult__o *)v30,
                                                               (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v32 = TargetAggregator___c_TypeInfo;
  if ( (BYTE3(TargetAggregator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetAggregator___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetAggregator___c_TypeInfo);
    v32 = TargetAggregator___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__18_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = TargetAggregator___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__18_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__18_1,
      v35,
      Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
    v36 = TargetAggregator___c_TypeInfo->static_fields;
    v36->__9__18_1 = (struct System_Func_BattleServantData__bool__o *)_9__18_1;
    sub_B5D560(&v36->__9__18_1);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v31,
                                                                          (System_Func_TSource__bool__o *)_9__18_1,
                                                                          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42E5B28 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___,
      (_DWORD)servantUniqueIdArray,
      (_DWORD)targetFilterLogic,
      *(_QWORD *)&defaultServantUniqueId);
    byte_42E5B28 = 1;
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
                                    (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___);
  if ( result )
    return result;
  args = this->fields.args;
  if ( !args || (result = (BattleServantData_o *)args->fields._battleData_k__BackingField) == 0LL )
LABEL_8:
    sub_B5D69C(result, v10);
  return BattleData__getServantData((BattleData_o *)result, defaultServantUniqueId, 0LL);
}


void __fastcall TargetAggregator__Init(
        TargetAggregator_o *this,
        TargetAggregator_Args_o *args,
        const MethodInfo *method)
{
  this->fields.args = args;
  sub_B5D560(&this->fields);
}


System_Int32_array *__fastcall TargetAggregator__ToServantUniqueIdArray(
        TargetAggregator_o *this,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *result; // x0
  __int64 v6; // x1
  __int64 v7; // x0

  if ( (byte_42E5B27 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)targetServant, (_DWORD)method, v3);
    byte_42E5B27 = 1;
  }
  if ( !targetServant )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    sub_B5D69C(0LL, v6);
  if ( !result->max_length )
  {
    v7 = sub_B5D6C8(result);
    sub_B5D668(v7, 0LL);
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
    sub_B5D69C(this, x);
  return BattleData__getServantData((BattleData_o *)this, x, 0LL);
}


bool __fastcall TargetAggregator__get_IsOpponentTargetOnly(TargetAggregator_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  TargetAggregator_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  bool IsActorPlayerSide; // w0
  struct TargetAggregator_Args_o *args; // x8
  bool v16; // w1
  __int16 *v17; // x0
  struct System_Nullable_bool__o v19; // [xsp+Ch] [xbp-14h] BYREF
  System_Nullable_bool__o v20; // 0:w0.2

  v4 = this;
  if ( (byte_42E5B25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_bool__GetValueOrDefault__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Nullable_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Nullable_bool__get_HasValue__, v8, v9, v10);
    this = (TargetAggregator_o *)sub_B5D5C4(&Method_System_Nullable_bool__get_Value__, v11, v12, v13);
    byte_42E5B25 = 1;
  }
  if ( *(_WORD *)&v4->fields.isOpponentTargetOnly <= 0xFFu )
  {
    args = v4->fields.args;
    if ( !args )
      sub_B5D69C(this, method);
    IsActorPlayerSide = Target__IsActorPlayerSide(
                          args->fields._battleData_k__BackingField,
                          args->fields._actorId_k__BackingField,
                          args->fields._taskActorType_k__BackingField,
                          v3);
  }
  else
  {
    IsActorPlayerSide = (unsigned __int8)*(_WORD *)&v4->fields.isOpponentTargetOnly != 0;
  }
  v16 = IsActorPlayerSide;
  v17 = (__int16 *)&v19;
  v19 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v17,
    v16,
    (const MethodInfo_2347ED0 *)Method_System_Nullable_bool___ctor__);
  v20 = (System_Nullable_bool__o)((_WORD)v4 + 24);
  v4->fields.isOpponentTargetOnly = v19;
  return System_Nullable_bool___get_Value(v20, (const MethodInfo_2347EEC *)Method_System_Nullable_bool__get_Value__);
}


int32_t __fastcall TargetAggregator__get_actorId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B5D69C(this, method);
  return args->fields._actorId_k__BackingField;
}


BattleData_o *__fastcall TargetAggregator__get_battleData(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B5D69C(this, method);
  return args->fields._battleData_k__BackingField;
}


Target_BattleTargetArgs_o *__fastcall TargetAggregator__get_battleTargetArgs(
        TargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B5D69C(this, method);
  return args->fields._battleTargetArgs_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_ptTargetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B5D69C(this, method);
  return args->fields._ptTargetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_targetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B5D69C(this, method);
  return args->fields._targetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_taskActorType(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B5D69C(this, method);
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
  sub_B5D560(&v14->fields._battleData_k__BackingField);
  v14->fields._battleTargetArgs_k__BackingField = battleTargetArgs;
  v14 = (TargetAggregator_Args_o *)((char *)v14 + 48);
  v14[-1].fields._ptTargetId_k__BackingField = actorId;
  *(&v14[-1].fields._ptTargetId_k__BackingField + 1) = targetId;
  LODWORD(v14[-1].fields._battleData_k__BackingField) = ptTargetId;
  LODWORD(v14[-1].fields._battleTargetArgs_k__BackingField) = taskActorType;
  sub_B5D560(v14);
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
  sub_B5D560(&this->fields._battleData_k__BackingField);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TargetAggregator___c_StaticFields *static_fields; // x0

  if ( (byte_42E649C & 1) == 0 )
  {
    sub_B5D5C4(&TargetAggregator___c_TypeInfo, v1, v2, v3);
    byte_42E649C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TargetAggregator___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TargetAggregator___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetAggregator___c_o *)v4;
  sub_B5D560(static_fields);
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