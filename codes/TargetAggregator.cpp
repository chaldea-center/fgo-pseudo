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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Func_int__BattleActionData_SideEffectData__o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  TargetAggregator___c_c *v21; // x8
  struct TargetAggregator___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__18_1; // x20
  Il2CppObject *v24; // x21
  struct TargetAggregator___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40F6C3F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, servantUniqueIdArray);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v7);
    sub_B16FFC(&Method_System_Func_int__BattleServantData___ctor__, v8);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_B16FFC(&System_Func_int__BattleServantData__TypeInfo, v11);
    sub_B16FFC(&Method_TargetAggregator__BattleServantEnumerable_b__18_0__, v12);
    sub_B16FFC(&Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, v13);
    sub_B16FFC(&TargetAggregator___c_TypeInfo, v14);
    byte_40F6C3F = 1;
  }
  v15 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                 System_Func_int__BattleServantData__TypeInfo,
                                                                 servantUniqueIdArray,
                                                                 method,
                                                                 v3,
                                                                 v4);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v15,
    (Il2CppObject *)this,
    Method_TargetAggregator__BattleServantEnumerable_b__18_0__,
    (const MethodInfo_2B66764 *)Method_System_Func_int__BattleServantData___ctor__);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantUniqueIdArray,
                                                               (System_Func_TSource__TResult__o *)v15,
                                                               (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v21 = TargetAggregator___c_TypeInfo;
  if ( (BYTE3(TargetAggregator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetAggregator___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetAggregator___c_TypeInfo);
    v21 = TargetAggregator___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__18_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = TargetAggregator___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__18_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleServantData__bool__TypeInfo,
                                                                                    v16,
                                                                                    v17,
                                                                                    v18,
                                                                                    v19);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__18_1,
      v24,
      Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
    v25 = TargetAggregator___c_TypeInfo->static_fields;
    v25->__9__18_1 = (struct System_Func_BattleServantData__bool__o *)_9__18_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__18_1,
      (System_Int32_array **)_9__18_1,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v20,
                                                                          (System_Func_TSource__bool__o *)_9__18_1,
                                                                          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
}


BattleServantData_o *__fastcall TargetAggregator__GetMostMatchedServant(
        TargetAggregator_o *this,
        System_Int32_array *servantUniqueIdArray,
        TargetFilterLogic_o *targetFilterLogic,
        int32_t defaultServantUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleServantData__o *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  BattleServantData_o *result; // x0
  struct TargetAggregator_Args_o *args; // x8
  BattleData_o *battleData_k__BackingField; // x0

  if ( (byte_40F6C41 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___, servantUniqueIdArray);
    byte_40F6C41 = 1;
  }
  v9 = TargetAggregator__BattleServantEnumerable(
         this,
         (System_Collections_Generic_IEnumerable_int__o *)servantUniqueIdArray,
         (const MethodInfo *)targetFilterLogic);
  if ( !targetFilterLogic )
    goto LABEL_8;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(TargetFilterLogic_o *, System_Collections_Generic_IEnumerable_BattleServantData__o *, const char *))targetFilterLogic->klass[1]._1.gc_desc)(
                                                               targetFilterLogic,
                                                               v9,
                                                               targetFilterLogic->klass[1]._1.name);
  result = (BattleServantData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                    v10,
                                    (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___);
  if ( result )
    return result;
  args = this->fields.args;
  if ( !args || (battleData_k__BackingField = args->fields._battleData_k__BackingField) == 0LL )
LABEL_8:
    sub_B170D4();
  return BattleData__getServantData(battleData_k__BackingField, defaultServantUniqueId, 0LL);
}


void __fastcall TargetAggregator__Init(
        TargetAggregator_o *this,
        TargetAggregator_Args_o *args,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.args = args;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)args,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_Int32_array *__fastcall TargetAggregator__ToServantUniqueIdArray(
        TargetAggregator_o *this,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_40F6C40 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, targetServant);
    byte_40F6C40 = 1;
  }
  if ( !targetServant )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, method);
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, method);
  if ( !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v5, v6);
    sub_B170A0();
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
  BattleData_o *battleData_k__BackingField; // x0

  args = this->fields.args;
  if ( !args || (battleData_k__BackingField = args->fields._battleData_k__BackingField) == 0LL )
    sub_B170D4();
  return BattleData__getServantData(battleData_k__BackingField, x, 0LL);
}


bool __fastcall TargetAggregator__get_IsOpponentTargetOnly(TargetAggregator_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  bool IsActorPlayerSide; // w0
  struct TargetAggregator_Args_o *args; // x8
  bool v9; // w1
  struct System_Nullable_bool__o *v10; // x0
  struct System_Nullable_bool__o v12; // [xsp+Ch] [xbp-14h] BYREF
  System_Nullable_bool__o v13; // 0:w0.2

  if ( (byte_40F6C3E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_bool__GetValueOrDefault__, method);
    sub_B16FFC(&Method_System_Nullable_bool___ctor__, v4);
    sub_B16FFC(&Method_System_Nullable_bool__get_HasValue__, v5);
    sub_B16FFC(&Method_System_Nullable_bool__get_Value__, v6);
    byte_40F6C3E = 1;
  }
  if ( *(_WORD *)&this->fields.isOpponentTargetOnly <= 0xFFu )
  {
    args = this->fields.args;
    if ( !args )
      sub_B170D4();
    IsActorPlayerSide = Target__IsActorPlayerSide(
                          args->fields._battleData_k__BackingField,
                          args->fields._actorId_k__BackingField,
                          args->fields._taskActorType_k__BackingField,
                          v2);
  }
  else
  {
    IsActorPlayerSide = (unsigned __int8)*(_WORD *)&this->fields.isOpponentTargetOnly != 0;
  }
  v9 = IsActorPlayerSide;
  v10 = &v12;
  v12 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v10,
    v9,
    (const MethodInfo_296535C *)Method_System_Nullable_bool___ctor__);
  v13 = (System_Nullable_bool__o)((_WORD)this + 24);
  this->fields.isOpponentTargetOnly = v12;
  return System_Nullable_bool___get_Value(v13, (const MethodInfo_2965378 *)Method_System_Nullable_bool__get_Value__);
}


int32_t __fastcall TargetAggregator__get_actorId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B170D4();
  return args->fields._actorId_k__BackingField;
}


BattleData_o *__fastcall TargetAggregator__get_battleData(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B170D4();
  return args->fields._battleData_k__BackingField;
}


Target_BattleTargetArgs_o *__fastcall TargetAggregator__get_battleTargetArgs(
        TargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B170D4();
  return args->fields._battleTargetArgs_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_ptTargetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B170D4();
  return args->fields._ptTargetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_targetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B170D4();
  return args->fields._targetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_taskActorType(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_B170D4();
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

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields._battleData_k__BackingField = battleData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v14->fields._battleData_k__BackingField,
    (System_Int32_array **)battleData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v14->fields._battleTargetArgs_k__BackingField = battleTargetArgs;
  v14 = (TargetAggregator_Args_o *)((char *)v14 + 48);
  v14[-1].fields._ptTargetId_k__BackingField = actorId;
  *(&v14[-1].fields._ptTargetId_k__BackingField + 1) = targetId;
  LODWORD(v14[-1].fields._battleData_k__BackingField) = ptTargetId;
  LODWORD(v14[-1].fields._battleTargetArgs_k__BackingField) = taskActorType;
  sub_B16F98((BattleServantConfConponent_o *)v14, (System_Int32_array **)battleTargetArgs, v21, v22, v23, v24, v25, v26);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._battleData_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._battleData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F779B & 1) == 0 )
  {
    sub_B16FFC(&TargetAggregator___c_TypeInfo, v1);
    byte_40F779B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TargetAggregator___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TargetAggregator___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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