void __fastcall WarBoardAiTargetCacher___ctor(
        WarBoardAiTargetCacher_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A58DB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_TargetDetector___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_TargetDetector__TypeInfo);
    byte_4A58DB0 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_TargetDetector__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ForceId_k__BackingField = forceId;
  this->fields._GroupId_k__BackingField = groupId;
}


void __fastcall WarBoardAiTargetCacher__AggregateTargetObject(
        WarBoardAiTargetCacher_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Action_object__o *v11; // x20

  if ( (byte_4A58DB4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TargetDetector__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_TargetDetector__ForEach__);
    sub_1B885B0(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__);
    sub_1B885B0(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
    byte_4A58DB4 = 1;
  }
  v5 = sub_1B887FC(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = objectArray,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)objectArray, v8, v9),
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v11 = (System_Action_object__o *)sub_1B887FC(System_Action_TargetDetector__TypeInfo),
        System_Action_object____ctor(
          v11,
          (Il2CppObject *)v5,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          0LL),
        !targetDetectorList) )
  {
    sub_1B8880C(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)v11,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void __fastcall WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  WarBoardAiTargetCacher___c_c *v3; // x0
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Action_object__o *_9__13_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A58DB3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TargetDetector__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_TargetDetector__ForEach__);
    sub_1B885B0(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__);
    sub_1B885B0(&WarBoardAiTargetCacher___c_TypeInfo);
    byte_4A58DB3 = 1;
  }
  v3 = WarBoardAiTargetCacher___c_TypeInfo;
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  if ( !WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo);
    v3 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  _9__13_0 = (System_Action_object__o *)v3->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardAiTargetCacher___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__13_0 = (System_Action_object__o *)sub_1B887FC(System_Action_TargetDetector__TypeInfo);
    System_Action_object____ctor(_9__13_0, v6, Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, 0LL);
    static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v8, v9);
  }
  if ( !targetDetectorList )
    sub_1B8880C(v3, method);
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


TargetDetector_o *__fastcall WarBoardAiTargetCacher__GetDetectorByTrendKey(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A58DB5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_TargetDetector__Find__);
    sub_1B885B0(&System_Predicate_TargetDetector__TypeInfo);
    sub_1B885B0(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__);
    sub_1B885B0(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
    byte_4A58DB5 = 1;
  }
  v5 = (Il2CppObject *)sub_1B887FC(WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5
    || (v5[1].klass = (Il2CppClass *)trendKey,
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_TargetDetector__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          v5,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          0LL),
        !targetDetectorList) )
  {
    sub_1B8880C(v6, v7);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_object___Find(
                               targetDetectorList,
                               (System_Predicate_T__o *)v9,
                               (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_TargetDetector__Find__);
}


int32_t __fastcall WarBoardAiTargetCacher__GetTargetDetectorId(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  TargetDetector_o *DetectorByTrendKey; // x0

  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( DetectorByTrendKey )
    LODWORD(DetectorByTrendKey) = DetectorByTrendKey->fields._Id_k__BackingField;
  return (int)DetectorByTrendKey;
}


IWarBoardObjectData_array *__fastcall WarBoardAiTargetCacher__GetTargetObjectsByTrendId(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  TargetDetector_o *DetectorByTrendKey; // x0
  System_Collections_Generic_IEnumerable_TSource__o *TargetObjectHashSet_k__BackingField; // x0

  if ( (byte_4A58DB2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    byte_4A58DB2 = 1;
  }
  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( DetectorByTrendKey
    && (TargetObjectHashSet_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)DetectorByTrendKey->fields._TargetObjectHashSet_k__BackingField) != 0LL )
  {
    return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_object_(
                                          TargetObjectHashSet_k__BackingField,
                                          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
  }
  else
  {
    return 0LL;
  }
}


bool __fastcall WarBoardAiTargetCacher__IsRegisteredTrendId(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  return WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method) != 0LL;
}


void __fastcall WarBoardAiTargetCacher__Register(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        WarBoardActionTrendConditionEntity_o *entity,
        int32_t teamCond,
        const MethodInfo *method)
{
  __int64 v9; // x23
  IndividualityTargetDetector_o *v10; // x24
  const MethodInfo *v11; // x4
  System_Collections_Generic_List_object__o *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o **v16; // x21
  System_Collections_Generic_List_object__o *targetDetectorList; // x22
  System_Predicate_object__o *v18; // x24
  const MethodInfo *v19; // x2
  int32_t v20; // w3
  int32_t v21; // w8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4A58DB1 & 1) == 0 )
  {
    sub_1B885B0(&IndividualityTargetDetector_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_TargetDetector__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TargetDetector__Find__);
    sub_1B885B0(&System_Predicate_TargetDetector__TypeInfo);
    sub_1B885B0(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__);
    sub_1B885B0(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
    byte_4A58DB1 = 1;
  }
  v9 = sub_1B887FC(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  v10 = (IndividualityTargetDetector_o *)sub_1B887FC(IndividualityTargetDetector_TypeInfo);
  IndividualityTargetDetector___ctor(v10, entity, this, teamCond, v11);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = v10;
  v16 = (System_Collections_Generic_List_object__o **)(v9 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v10, v14, v15);
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  v18 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_TargetDetector__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    0LL);
  if ( !targetDetectorList )
    goto LABEL_15;
  v12 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Find(
                                                       targetDetectorList,
                                                       (System_Predicate_T__o *)v18,
                                                       (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v12 )
    goto LABEL_13;
  v13 = *v16;
  v21 = this->fields.idGen + 1;
  this->fields.idGen = v21;
  if ( !v13
    || (LODWORD(v13->fields._items) = v21,
        (v12 = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList) == 0LL)
    || (items = v12->fields._items,
        v23 = Method_System_Collections_Generic_List_TargetDetector__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_15:
    sub_1B8880C(v12, v13);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v13,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v13, (int32_t)v19, v20);
  }
  v12 = *v16;
LABEL_13:
  if ( !v12 )
    goto LABEL_15;
  TargetDetector__AddTrendKey((TargetDetector_o *)v12, trendKey, v19);
}


int32_t __fastcall WarBoardAiTargetCacher__get_ForceId(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  return this->fields._ForceId_k__BackingField;
}


int32_t __fastcall WarBoardAiTargetCacher__get_GroupId(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField;
}


void __fastcall WarBoardAiTargetCacher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58DB6 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAiTargetCacher___c_TypeInfo);
    byte_4A58DB6 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardAiTargetCacher___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardAiTargetCacher___c_TypeInfo->static_fields->__9 = (struct WarBoardAiTargetCacher___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardAiTargetCacher___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall WarBoardAiTargetCacher___c___ctor(WarBoardAiTargetCacher___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAiTargetCacher___c___ClearTargetObject_b__13_0(
        WarBoardAiTargetCacher___c_o *this,
        TargetDetector_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  TargetDetector__ClearTargetObject(x, (const MethodInfo *)x);
}


void __fastcall WarBoardAiTargetCacher___c__DisplayClass14_0___ctor(
        WarBoardAiTargetCacher___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAiTargetCacher___c__DisplayClass14_0___AggregateTargetObject_b__0(
        WarBoardAiTargetCacher___c__DisplayClass14_0_o *this,
        TargetDetector_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(TargetDetector_o *, struct IWarBoardObjectData_array *, void *))x->klass[1]._1.namespaze)(
    x,
    this->fields.objectArray,
    x->klass[1]._1.byval_arg.data);
}


void __fastcall WarBoardAiTargetCacher___c__DisplayClass15_0___ctor(
        WarBoardAiTargetCacher___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAiTargetCacher___c__DisplayClass15_0___GetDetectorByTrendKey_b__0(
        WarBoardAiTargetCacher___c__DisplayClass15_0_o *this,
        TargetDetector_o *x,
        const MethodInfo *method)
{
  WarBoardAiTargetCacher___c__DisplayClass15_0_o *v4; // x19

  v4 = this;
  if ( (byte_4A58DB7 & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_long__Contains__);
    byte_4A58DB7 = 1;
  }
  if ( !x
    || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0LL )
  {
    sub_1B8880C(this, x);
  }
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v4->fields.trendKey,
           (const MethodInfo_33B775C *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void __fastcall WarBoardAiTargetCacher___c__DisplayClass9_0___ctor(
        WarBoardAiTargetCacher___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAiTargetCacher___c__DisplayClass9_0___Register_b__0(
        WarBoardAiTargetCacher___c__DisplayClass9_0_o *this,
        TargetDetector_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, const char *))x->klass[1]._1.gc_desc)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.name);
}