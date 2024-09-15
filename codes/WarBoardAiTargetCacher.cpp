// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAiTargetCacher___ctor(
        WarBoardAiTargetCacher_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A2BBA2 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_TargetDetector___ctor__, *(_QWORD *)&forceId);
    sub_1B761C0(&System_Collections_Generic_List_TargetDetector__TypeInfo, v7);
    byte_4A2BBA2 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_TargetDetector__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v8;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ForceId_k__BackingField = forceId;
  this->fields._GroupId_k__BackingField = groupId;
}


void __fastcall WarBoardAiTargetCacher__AggregateTargetObject(
        WarBoardAiTargetCacher_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Action_object__o *v14; // x20

  if ( (byte_4A2BBA6 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TargetDetector__TypeInfo, objectArray);
    sub_1B761C0(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v5);
    sub_1B761C0(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__, v6);
    sub_1B761C0(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, v7);
    byte_4A2BBA6 = 1;
  }
  v8 = sub_1B7640C(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = objectArray,
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)objectArray, v11, v12),
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v14 = (System_Action_object__o *)sub_1B7640C(System_Action_TargetDetector__TypeInfo),
        System_Action_object____ctor(
          v14,
          (Il2CppObject *)v8,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          0LL),
        !targetDetectorList) )
  {
    sub_1B7641C(v9, v10);
  }
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)v14,
    (const MethodInfo_34D8014 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void __fastcall WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WarBoardAiTargetCacher___c_c *v6; // x0
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Action_object__o *_9__13_0; // x20
  Il2CppObject *v9; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A2BBA5 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TargetDetector__TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v3);
    sub_1B761C0(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, v4);
    sub_1B761C0(&WarBoardAiTargetCacher___c_TypeInfo, v5);
    byte_4A2BBA5 = 1;
  }
  v6 = WarBoardAiTargetCacher___c_TypeInfo;
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  if ( !WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo);
    v6 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  _9__13_0 = (System_Action_object__o *)v6->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = WarBoardAiTargetCacher___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__13_0 = (System_Action_object__o *)sub_1B7640C(System_Action_TargetDetector__TypeInfo);
    System_Action_object____ctor(_9__13_0, v9, Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, 0LL);
    static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v11, v12);
  }
  if ( !targetDetectorList )
    sub_1B7641C(v6, method);
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_34D8014 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


TargetDetector_o *__fastcall WarBoardAiTargetCacher__GetDetectorByTrendKey(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4A2BBA7 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_TargetDetector__Find__, trendKey);
    sub_1B761C0(&System_Predicate_TargetDetector__TypeInfo, v5);
    sub_1B761C0(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__, v6);
    sub_1B761C0(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo, v7);
    byte_4A2BBA7 = 1;
  }
  v8 = (Il2CppObject *)sub_1B7640C(WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8
    || (v8[1].klass = (Il2CppClass *)trendKey,
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v12 = (System_Predicate_object__o *)sub_1B7640C(System_Predicate_TargetDetector__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          v8,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          0LL),
        !targetDetectorList) )
  {
    sub_1B7641C(v9, v10);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_object___Find(
                               targetDetectorList,
                               (System_Predicate_T__o *)v12,
                               (const MethodInfo_34D7C3C *)Method_System_Collections_Generic_List_TargetDetector__Find__);
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

  if ( (byte_4A2BBA4 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, trendKey);
    byte_4A2BBA4 = 1;
  }
  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( DetectorByTrendKey
    && (TargetObjectHashSet_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)DetectorByTrendKey->fields._TargetObjectHashSet_k__BackingField) != 0LL )
  {
    return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_object_(
                                          TargetObjectHashSet_k__BackingField,
                                          (const MethodInfo_2E9AEA4 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  IndividualityTargetDetector_o *v15; // x24
  const MethodInfo *v16; // x4
  System_Collections_Generic_List_object__o *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o **v21; // x21
  System_Collections_Generic_List_object__o *targetDetectorList; // x22
  System_Predicate_object__o *v23; // x24
  const MethodInfo *v24; // x2
  int32_t v25; // w3
  int32_t v26; // w8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8

  if ( (byte_4A2BBA3 & 1) == 0 )
  {
    sub_1B761C0(&IndividualityTargetDetector_TypeInfo, trendKey);
    sub_1B761C0(&Method_System_Collections_Generic_List_TargetDetector__Add__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_TargetDetector__Find__, v10);
    sub_1B761C0(&System_Predicate_TargetDetector__TypeInfo, v11);
    sub_1B761C0(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__, v12);
    sub_1B761C0(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, v13);
    byte_4A2BBA3 = 1;
  }
  v14 = sub_1B7640C(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  v15 = (IndividualityTargetDetector_o *)sub_1B7640C(IndividualityTargetDetector_TypeInfo);
  IndividualityTargetDetector___ctor(v15, entity, this, teamCond, v16);
  if ( !v14 )
    goto LABEL_15;
  *(_QWORD *)(v14 + 16) = v15;
  v21 = (System_Collections_Generic_List_object__o **)(v14 + 16);
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v15, v19, v20);
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  v23 = (System_Predicate_object__o *)sub_1B7640C(System_Predicate_TargetDetector__TypeInfo);
  System_Predicate_object____ctor(
    v23,
    (Il2CppObject *)v14,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    0LL);
  if ( !targetDetectorList )
    goto LABEL_15;
  v17 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Find(
                                                       targetDetectorList,
                                                       (System_Predicate_T__o *)v23,
                                                       (const MethodInfo_34D7C3C *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v17 )
    goto LABEL_13;
  v18 = *v21;
  v26 = this->fields.idGen + 1;
  this->fields.idGen = v26;
  if ( !v18
    || (LODWORD(v18->fields._items) = v26,
        (v17 = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList) == 0LL)
    || (items = v17->fields._items,
        v28 = Method_System_Collections_Generic_List_TargetDetector__Add__,
        ++v17->fields._version,
        !items) )
  {
LABEL_15:
    sub_1B7641C(v17, v18);
  }
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v18;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v18, (int32_t)v24, v25);
  }
  v17 = *v21;
LABEL_13:
  if ( !v17 )
    goto LABEL_15;
  TargetDetector__AddTrendKey((TargetDetector_o *)v17, trendKey, v24);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2BBA8 & 1) == 0 )
  {
    sub_1B761C0(&WarBoardAiTargetCacher___c_TypeInfo, v1);
    byte_4A2BBA8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(WarBoardAiTargetCacher___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAiTargetCacher___c_TypeInfo->static_fields->__9 = (struct WarBoardAiTargetCacher___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)WarBoardAiTargetCacher___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B7641C(this, 0LL);
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
    sub_1B7641C(this, 0LL);
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
  if ( (byte_4A2BBA9 & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_1B761C0(
                                                               &Method_System_Collections_Generic_HashSet_long__Contains__,
                                                               x);
    byte_4A2BBA9 = 1;
  }
  if ( !x
    || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0LL )
  {
    sub_1B7641C(this, x);
  }
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v4->fields.trendKey,
           (const MethodInfo_33944F4 *)Method_System_Collections_Generic_HashSet_long__Contains__);
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
    sub_1B7641C(this, 0LL);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, const char *))x->klass[1]._1.gc_desc)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.name);
}