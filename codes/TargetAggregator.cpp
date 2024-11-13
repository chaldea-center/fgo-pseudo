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
  System_Func_T__TResult__o *v18; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  TargetAggregator___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_object__bool__o *_9__18_1; // x20
  Il2CppObject *v26; // x21
  struct TargetAggregator___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B18F3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, servantUniqueIdArray, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6, v7);
    sub_1BCA7E0(&System_Func_int__BattleServantData__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_TargetAggregator__BattleServantEnumerable_b__18_0__, v12, v13);
    sub_1BCA7E0(&Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, v14, v15);
    sub_1BCA7E0(&TargetAggregator___c_TypeInfo, v16, v17);
    byte_4B18F3B = 1;
  }
  v18 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_int__BattleServantData__TypeInfo,
                                       servantUniqueIdArray,
                                       method,
                                       v3);
  System_Func_int__object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_TargetAggregator__BattleServantEnumerable_b__18_0__,
    0LL);
  v19 = System_Linq_Enumerable__Select_int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantUniqueIdArray,
          (System_Func_TSource__TResult__o *)v18,
          (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v23 = TargetAggregator___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !TargetAggregator___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetAggregator___c_TypeInfo, v20);
    v23 = TargetAggregator___c_TypeInfo;
  }
  _9__18_1 = (System_Func_object__bool__o *)v23->static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, v20);
      v23 = TargetAggregator___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__18_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v20, v21, v22);
    System_Func_object__bool____ctor(_9__18_1, v26, Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, 0LL);
    static_fields = TargetAggregator___c_TypeInfo->static_fields;
    static_fields->__9__18_1 = (struct System_Func_BattleServantData__bool__o *)_9__18_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__18_1,
      (int64_t)_9__18_1,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                          v24,
                                                                          (System_Func_TSource__bool__o *)_9__18_1,
                                                                          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
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

  if ( (byte_4B18F3D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___,
      servantUniqueIdArray,
      targetFilterLogic);
    byte_4B18F3D = 1;
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
                                    (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___);
  if ( result )
    return result;
  args = this->fields.args;
  if ( !args || (result = (BattleServantData_o *)args->fields._battleData_k__BackingField) == 0LL )
LABEL_8:
    sub_1BCAA3C(result, v10);
  return BattleData__getServantData((BattleData_o *)result, defaultServantUniqueId, 0LL);
}


void __fastcall TargetAggregator__Init(
        TargetAggregator_o *this,
        TargetAggregator_Args_o *args,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.args = args;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)args, (int64_t)method, v3, v4, v5, v6, v7);
}


System_Int32_array *__fastcall TargetAggregator__ToServantUniqueIdArray(
        TargetAggregator_o *this,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1

  if ( (byte_4B18F3C & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, targetServant, method);
    byte_4B18F3C = 1;
  }
  if ( !targetServant )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BCAA3C(0LL, v5);
  if ( !result->max_length )
    sub_1BCAA44(result, v5);
  result->m_Items[1] = targetServant->fields.uniqueId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *__fastcall TargetAggregator___BattleServantEnumerable_b__18_0(
        TargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args || (this = (TargetAggregator_o *)args->fields._battleData_k__BackingField) == 0LL )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return BattleData__getServantData((BattleData_o *)this, x, 0LL);
}


bool __fastcall TargetAggregator__get_IsOpponentTargetOnly(TargetAggregator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TargetAggregator_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  bool IsActorPlayerSide; // w0
  struct TargetAggregator_Args_o *args; // x8
  bool v12; // w1
  __int16 *v13; // x0
  struct System_Nullable_bool__o v15; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v16; // 0:w0.2

  v3 = this;
  if ( (byte_4B18F3A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_bool__GetValueOrDefault__, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_bool___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_bool__get_HasValue__, v6, v7);
    this = (TargetAggregator_o *)sub_1BCA7E0(&Method_System_Nullable_bool__get_Value__, v8, v9);
    byte_4B18F3A = 1;
  }
  if ( (unsigned __int8)*(_WORD *)&v3->fields.isOpponentTargetOnly )
  {
    IsActorPlayerSide = *(_WORD *)&v3->fields.isOpponentTargetOnly > 0xFFu;
  }
  else
  {
    args = v3->fields.args;
    if ( !args )
      sub_1BCAA3C(this, method);
    IsActorPlayerSide = Target__IsActorPlayerSide(
                          args->fields._battleData_k__BackingField,
                          args->fields._actorId_k__BackingField,
                          args->fields._taskActorType_k__BackingField,
                          0LL);
  }
  v12 = IsActorPlayerSide;
  v13 = (__int16 *)&v15;
  v15 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v13,
    v12,
    (const MethodInfo_36BAF44 *)Method_System_Nullable_bool___ctor__);
  v16 = (System_Nullable_bool__o)((_WORD)v3 + 24);
  v3->fields.isOpponentTargetOnly = v15;
  return System_Nullable_bool___get_Value(v16, (const MethodInfo_36BAF60 *)Method_System_Nullable_bool__get_Value__);
}


int32_t __fastcall TargetAggregator__get_actorId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BCAA3C(this, method);
  return args->fields._actorId_k__BackingField;
}


BattleData_o *__fastcall TargetAggregator__get_battleData(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BCAA3C(this, method);
  return args->fields._battleData_k__BackingField;
}


Target_BattleTargetArgs_o *__fastcall TargetAggregator__get_battleTargetArgs(
        TargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BCAA3C(this, method);
  return args->fields._battleTargetArgs_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_ptTargetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BCAA3C(this, method);
  return args->fields._ptTargetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_targetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BCAA3C(this, method);
  return args->fields._targetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_taskActorType(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BCAA3C(this, method);
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

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields._battleData_k__BackingField = battleData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v14->fields._battleData_k__BackingField,
    (int64_t)battleData,
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
  sub_1BCA784((PartyOrganizationUtility_o *)v14, (int64_t)battleTargetArgs, v21, v22, v23, v24, v25, v26);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._battleData_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._battleData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18F3E & 1) == 0 )
  {
    sub_1BCA7E0(&TargetAggregator___c_TypeInfo, v1, v2);
    byte_4B18F3E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TargetAggregator___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TargetAggregator___c_TypeInfo->static_fields->__9 = (struct TargetAggregator___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TargetAggregator___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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