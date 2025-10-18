void TargetAggregator___ctor(TargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *TargetAggregator__BattleServantEnumerable(
        TargetAggregator_o *this,
        System_Collections_Generic_IEnumerable_int__o *servantUniqueIdArray,
        const MethodInfo *method)
{
  System_Func_T__TResult__o *v5; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v6; // x0
  TargetAggregator___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *_9__18_1; // x20
  Il2CppObject *v10; // x21
  struct TargetAggregator___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C46279 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C37058(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C37058(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C37058(&Method_TargetAggregator__BattleServantEnumerable_b__18_0__);
    sub_1C37058(&Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__);
    sub_1C37058(&TargetAggregator___c_TypeInfo);
    byte_4C46279 = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__BattleServantData__TypeInfo);
  System_Func_int__object____ctor(
    v5,
    (Il2CppObject *)this,
    Method_TargetAggregator__BattleServantEnumerable_b__18_0__,
    0);
  v6 = System_Linq_Enumerable__Select_int__object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)servantUniqueIdArray,
         (System_Func_TSource__TResult__o *)v5,
         (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
  v7 = TargetAggregator___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)v6;
  if ( !TargetAggregator___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetAggregator___c_TypeInfo);
    v7 = TargetAggregator___c_TypeInfo;
  }
  _9__18_1 = (System_Func_object__bool__o *)v7->static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TargetAggregator___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__18_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__18_1, v10, Method_TargetAggregator___c__BattleServantEnumerable_b__18_1__, 0);
    static_fields = TargetAggregator___c_TypeInfo->static_fields;
    static_fields->__9__18_1 = (struct System_Func_BattleServantData__bool__o *)_9__18_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__18_1, (int32_t)_9__18_1, v12, v13);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                          v8,
                                                                          (System_Func_TSource__bool__o *)_9__18_1,
                                                                          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
}


BattleServantData_o *TargetAggregator__GetMostMatchedServant(
        TargetAggregator_o *this,
        System_Int32_array *servantUniqueIdArray,
        TargetFilterLogic_o *targetFilterLogic,
        int32_t defaultServantUniqueId,
        const MethodInfo *method)
{
  BattleServantData_o *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  struct TargetAggregator_Args_o *args; // x8

  if ( (byte_4C4627B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___);
    byte_4C4627B = 1;
  }
  result = (BattleServantData_o *)TargetAggregator__BattleServantEnumerable(
                                    this,
                                    (System_Collections_Generic_IEnumerable_int__o *)servantUniqueIdArray,
                                    (const MethodInfo *)targetFilterLogic);
  if ( !targetFilterLogic )
    goto LABEL_8;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(TargetFilterLogic_o *, BattleServantData_o *, void *))targetFilterLogic->klass[1]._1.image)(
                                                               targetFilterLogic,
                                                               result,
                                                               targetFilterLogic->klass[1]._1.gc_desc);
  result = (BattleServantData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                    v10,
                                    (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleServantData___);
  if ( result )
    return result;
  args = this->fields.args;
  if ( !args || (result = (BattleServantData_o *)args->fields._battleData_k__BackingField) == 0 )
LABEL_8:
    sub_1C372B4(result);
  return BattleData__getServantData((BattleData_o *)result, defaultServantUniqueId, 0);
}


void TargetAggregator__Init(TargetAggregator_o *this, TargetAggregator_Args_o *args, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.args = args;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)args, (int32_t)method, v3);
}


System_Int32_array *TargetAggregator__ToServantUniqueIdArray(
        TargetAggregator_o *this,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4C4627A & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C4627A = 1;
  }
  if ( !targetServant )
    return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  result = (System_Int32_array *)sub_1C37100(int___TypeInfo, 1);
  if ( !result )
    sub_1C372B4(0);
  if ( !LODWORD(result->max_length) )
    sub_1C372BC(result);
  result->m_Items[0] = targetServant->fields.uniqueId;
  return result;
}


BattleServantData_o *TargetAggregator___BattleServantEnumerable_b__18_0(
        TargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args || (this = (TargetAggregator_o *)args->fields._battleData_k__BackingField) == 0 )
    sub_1C372B4(this);
  return BattleData__getServantData((BattleData_o *)this, x, 0);
}


bool TargetAggregator__get_IsOpponentTargetOnly(TargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator_o *v2; // x19
  bool IsActorPlayerSide; // w0
  struct TargetAggregator_Args_o *args; // x8
  bool v5; // w1
  struct System_Nullable_bool__o *v6; // x0
  System_Nullable_bool__o v7; // w0
  struct System_Nullable_bool__o v9; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4C46278 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_bool___ctor__);
    sub_1C37058(&Method_System_Nullable_bool__get_HasValue__);
    this = (TargetAggregator_o *)sub_1C37058(&Method_System_Nullable_bool__get_Value__);
    byte_4C46278 = 1;
  }
  if ( (unsigned __int8)*(_WORD *)&v2->fields.isOpponentTargetOnly )
  {
    IsActorPlayerSide = *(_WORD *)&v2->fields.isOpponentTargetOnly > 0xFFu;
  }
  else
  {
    args = v2->fields.args;
    if ( !args )
      sub_1C372B4(this);
    IsActorPlayerSide = Target__IsActorPlayerSide(
                          args->fields._battleData_k__BackingField,
                          args->fields._actorId_k__BackingField,
                          args->fields._taskActorType_k__BackingField,
                          0);
  }
  v5 = IsActorPlayerSide;
  v6 = &v9;
  v9 = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v6,
    v5,
    (const MethodInfo_38C5044 *)Method_System_Nullable_bool___ctor__);
  v7 = (System_Nullable_bool__o)((_WORD)v2 + 24);
  v2->fields.isOpponentTargetOnly = v9;
  return System_Nullable_bool___get_Value(v7, (const MethodInfo_38C5060 *)Method_System_Nullable_bool__get_Value__);
}


int32_t TargetAggregator__get_actorId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C372B4(this);
  return args->fields._actorId_k__BackingField;
}


BattleData_o *TargetAggregator__get_battleData(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C372B4(this);
  return args->fields._battleData_k__BackingField;
}


Target_BattleTargetArgs_o *TargetAggregator__get_battleTargetArgs(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C372B4(this);
  return args->fields._battleTargetArgs_k__BackingField;
}


int32_t TargetAggregator__get_ptTargetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C372B4(this);
  return args->fields._ptTargetId_k__BackingField;
}


int32_t TargetAggregator__get_targetId(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C372B4(this);
  return args->fields._targetId_k__BackingField;
}


int32_t TargetAggregator__get_taskActorType(TargetAggregator_o *this, const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C372B4(this);
  return args->fields._taskActorType_k__BackingField;
}


void TargetAggregator_Args___ctor(
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
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v14->fields._battleData_k__BackingField = battleData;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->fields._battleData_k__BackingField, (int32_t)battleData, v15, v16);
  v14->fields._battleTargetArgs_k__BackingField = battleTargetArgs;
  v14 = (TargetAggregator_Args_o *)((char *)v14 + 48);
  v14[-1].fields._ptTargetId_k__BackingField = actorId;
  *(&v14[-1].fields._ptTargetId_k__BackingField + 1) = targetId;
  LODWORD(v14[-1].fields._battleData_k__BackingField) = ptTargetId;
  LODWORD(v14[-1].fields._battleTargetArgs_k__BackingField) = taskActorType;
  sub_1C36FFC((CGThumbnailListItem_o *)v14, (int32_t)battleTargetArgs, v17, v18);
}


int32_t TargetAggregator_Args__get_actorId(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._actorId_k__BackingField;
}


BattleData_o *TargetAggregator_Args__get_battleData(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._battleData_k__BackingField;
}


Target_BattleTargetArgs_o *TargetAggregator_Args__get_battleTargetArgs(
        TargetAggregator_Args_o *this,
        const MethodInfo *method)
{
  return this->fields._battleTargetArgs_k__BackingField;
}


int32_t TargetAggregator_Args__get_ptTargetId(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._ptTargetId_k__BackingField;
}


int32_t TargetAggregator_Args__get_targetId(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._targetId_k__BackingField;
}


int32_t TargetAggregator_Args__get_taskActorType(TargetAggregator_Args_o *this, const MethodInfo *method)
{
  return this->fields._taskActorType_k__BackingField;
}


void TargetAggregator_Args__set_actorId(TargetAggregator_Args_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._actorId_k__BackingField = value;
}


void TargetAggregator_Args__set_battleData(
        TargetAggregator_Args_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._battleData_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._battleData_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void TargetAggregator_Args__set_ptTargetId(TargetAggregator_Args_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ptTargetId_k__BackingField = value;
}


void TargetAggregator_Args__set_targetId(TargetAggregator_Args_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._targetId_k__BackingField = value;
}


void TargetAggregator_Args__set_taskActorType(TargetAggregator_Args_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._taskActorType_k__BackingField = value;
}


void TargetAggregator___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4627C & 1) == 0 )
  {
    sub_1C37058(&TargetAggregator___c_TypeInfo);
    byte_4C4627C = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(TargetAggregator___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TargetAggregator___c_TypeInfo->static_fields->__9 = (struct TargetAggregator___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)TargetAggregator___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void TargetAggregator___c___ctor(TargetAggregator___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TargetAggregator___c___BattleServantEnumerable_b__18_1(
        TargetAggregator___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  return x != 0;
}