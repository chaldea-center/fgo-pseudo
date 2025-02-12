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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BB74D2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, servantUniqueIdArray);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_BattleServantData___, v5);
    sub_1C13D24(&System_Func_int__BattleServantData__TypeInfo, v6);
    sub_1C13D24(&System_Func_BattleServantData__bool__TypeInfo, v7);
    sub_1C13D24(&Method_TargetAggregator__BattleServantEnumerable_b__18_0__, v8);
    sub_1C13D24(&Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, v9);
    sub_1C13D24(&TargetAggregator___c_TypeInfo, v10);
    byte_4BB74D2 = 1;
  }
  v11 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_TargetAggregator__BattleServantEnumerable_b__18_0__,
    0LL);
  v12 = System_Linq_Enumerable__Select_int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantUniqueIdArray,
          (System_Func_TSource__TResult__o *)v11,
          (const MethodInfo_2FBE434 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
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
    _9__18_1 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__18_1, v16, Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, 0LL);
    static_fields = TargetAggregator___c_TypeInfo->static_fields;
    static_fields->__9__18_1 = (struct System_Func_BattleServantData__bool__o *)_9__18_1;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__18_1,
      (int64_t)_9__18_1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                          v14,
                                                                          (System_Func_TSource__bool__o *)_9__18_1,
                                                                          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
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

  if ( (byte_4BB74D4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___, servantUniqueIdArray);
    byte_4BB74D4 = 1;
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
                                    (const MethodInfo_2FB1C00 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___);
  if ( result )
    return result;
  args = this->fields.args;
  if ( !args || (result = (BattleServantData_o *)args->fields._battleData_k__BackingField) == 0LL )
LABEL_8:
    sub_1C13F80(result, v10);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)args, (int64_t)method, v3, v4, v5, v6, v7);
}


System_Int32_array *__fastcall TargetAggregator__ToServantUniqueIdArray(
        TargetAggregator_o *this,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v5; // x1

  if ( (byte_4BB74D3 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, targetServant);
    byte_4BB74D3 = 1;
  }
  if ( !targetServant )
    return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  result = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C13F80(0LL, v5);
  if ( !result->max_length )
    sub_1C13F88(result, v5);
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
    sub_1C13F80(this, x);
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
  if ( (byte_4BB74D1 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Nullable_bool__GetValueOrDefault__, method);
    sub_1C13D24(&Method_System_Nullable_bool___ctor__, v3);
    sub_1C13D24(&Method_System_Nullable_bool__get_HasValue__, v4);
    this = (TargetAggregator_o *)sub_1C13D24(&Method_System_Nullable_bool__get_Value__, v5);
    byte_4BB74D1 = 1;
  }
  if ( (unsigned __int8)*(_WORD *)&v2->fields.isOpponentTargetOnly )
  {
    IsActorPlayerSide = *(_WORD *)&v2->fields.isOpponentTargetOnly > 0xFFu;
  }
  else
  {
    args = v2->fields.args;
    if ( !args )
      sub_1C13F80(this, method);
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
    (const MethodInfo_37455FC *)Method_System_Nullable_bool___ctor__);
  v12 = (System_Nullable_bool__o)((_WORD)v2 + 24);
  v2->fields.isOpponentTargetOnly = v11;
  return System_Nullable_bool___get_Value(v12, (const MethodInfo_3745618 *)Method_System_Nullable_bool__get_Value__);
}


int32_t __fastcall TargetAggregator__get_actorId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C13F80(this, method);
  return args->fields._actorId_k__BackingField;
}


BattleData_o *__fastcall TargetAggregator__get_battleData(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C13F80(this, method);
  return args->fields._battleData_k__BackingField;
}


Target_BattleTargetArgs_o *__fastcall TargetAggregator__get_battleTargetArgs(
        TargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C13F80(this, method);
  return args->fields._battleTargetArgs_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_ptTargetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C13F80(this, method);
  return args->fields._ptTargetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_targetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C13F80(this, method);
  return args->fields._targetId_k__BackingField;
}


int32_t __fastcall TargetAggregator__get_taskActorType(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C13F80(this, method);
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
  sub_1C13CC8(
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
  sub_1C13CC8((PartyOrganizationUtility_o *)v14, (int64_t)battleTargetArgs, v21, v22, v23, v24, v25, v26);
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
  sub_1C13CC8(
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB74D5 & 1) == 0 )
  {
    sub_1C13D24(&TargetAggregator___c_TypeInfo, v1);
    byte_4BB74D5 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(TargetAggregator___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TargetAggregator___c_TypeInfo->static_fields->__9 = (struct TargetAggregator___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)TargetAggregator___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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