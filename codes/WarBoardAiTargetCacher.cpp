void WarBoardAiTargetCacher___ctor(
        WarBoardAiTargetCacher_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C409A5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_TargetDetector___ctor__);
    sub_1C37058(&System_Collections_Generic_List_TargetDetector__TypeInfo);
    byte_4C409A5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_TargetDetector__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ForceId_k__BackingField = forceId;
  this->fields._GroupId_k__BackingField = groupId;
}


void WarBoardAiTargetCacher__AggregateTargetObject(
        WarBoardAiTargetCacher_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Action_object__o *v10; // x20

  if ( (byte_4C409A9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TargetDetector__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_TargetDetector__ForEach__);
    sub_1C37058(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__);
    sub_1C37058(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
    byte_4C409A9 = 1;
  }
  v5 = sub_1C372A4(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = objectArray,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)objectArray, v7, v8),
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v10 = (System_Action_object__o *)sub_1C372A4(System_Action_TargetDetector__TypeInfo),
        System_Action_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          0),
        !targetDetectorList) )
  {
    sub_1C372B4(v6);
  }
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)v10,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  WarBoardAiTargetCacher___c_c *v3; // x0
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Action_object__o *_9__13_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C409A8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TargetDetector__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_TargetDetector__ForEach__);
    sub_1C37058(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__);
    sub_1C37058(&WarBoardAiTargetCacher___c_TypeInfo);
    byte_4C409A8 = 1;
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
    _9__13_0 = (System_Action_object__o *)sub_1C372A4(System_Action_TargetDetector__TypeInfo);
    System_Action_object____ctor(_9__13_0, v6, Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, 0);
    static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v8, v9);
  }
  if ( !targetDetectorList )
    sub_1C372B4(v3);
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


TargetDetector_o *WarBoardAiTargetCacher__GetDetectorByTrendKey(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C409AA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_TargetDetector__Find__);
    sub_1C37058(&System_Predicate_TargetDetector__TypeInfo);
    sub_1C37058(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__);
    sub_1C37058(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
    byte_4C409AA = 1;
  }
  v5 = (Il2CppObject *)sub_1C372A4(WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5
    || (v5[1].klass = (Il2CppClass *)trendKey,
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v8 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_TargetDetector__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          v5,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          0),
        !targetDetectorList) )
  {
    sub_1C372B4(v6);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_object___Find(
                               targetDetectorList,
                               (System_Predicate_T__o *)v8,
                               (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_TargetDetector__Find__);
}


int32_t WarBoardAiTargetCacher__GetTargetDetectorId(
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


IWarBoardObjectData_array *WarBoardAiTargetCacher__GetTargetObjectsByTrendId(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  TargetDetector_o *DetectorByTrendKey; // x0
  System_Collections_Generic_IEnumerable_TSource__o *TargetObjectHashSet_k__BackingField; // x0

  if ( (byte_4C409A7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    byte_4C409A7 = 1;
  }
  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( DetectorByTrendKey
    && (TargetObjectHashSet_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)DetectorByTrendKey->fields._TargetObjectHashSet_k__BackingField) != 0 )
  {
    return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_object_(
                                          TargetObjectHashSet_k__BackingField,
                                          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
  }
  else
  {
    return 0;
  }
}


bool WarBoardAiTargetCacher__IsRegisteredTrendId(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  return WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method) != 0;
}


void WarBoardAiTargetCacher__Register(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o **v15; // x21
  System_Collections_Generic_List_object__o *targetDetectorList; // x22
  System_Predicate_object__o *v17; // x24
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x1
  int32_t v21; // w8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4C409A6 & 1) == 0 )
  {
    sub_1C37058(&IndividualityTargetDetector_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_TargetDetector__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_TargetDetector__Find__);
    sub_1C37058(&System_Predicate_TargetDetector__TypeInfo);
    sub_1C37058(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__);
    sub_1C37058(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
    byte_4C409A6 = 1;
  }
  v9 = sub_1C372A4(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  v10 = (IndividualityTargetDetector_o *)sub_1C372A4(IndividualityTargetDetector_TypeInfo);
  IndividualityTargetDetector___ctor(v10, entity, this, teamCond, v11);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = v10;
  v15 = (System_Collections_Generic_List_object__o **)(v9 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v10, v13, v14);
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  v17 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_TargetDetector__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    0);
  if ( !targetDetectorList )
    goto LABEL_15;
  v12 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Find(
                                                       targetDetectorList,
                                                       (System_Predicate_T__o *)v17,
                                                       (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v12 )
    goto LABEL_13;
  v20 = *v15;
  v21 = this->fields.idGen + 1;
  this->fields.idGen = v21;
  if ( !v20
    || (LODWORD(v20->fields._items) = v21,
        (v12 = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList) == 0)
    || (items = v12->fields._items,
        v23 = Method_System_Collections_Generic_List_TargetDetector__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_15:
    sub_1C372B4(v12);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v20,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v20;
    sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v20, (int32_t)v18, v19);
  }
  v12 = *v15;
LABEL_13:
  if ( !v12 )
    goto LABEL_15;
  TargetDetector__AddTrendKey((TargetDetector_o *)v12, trendKey, v18);
}


int32_t WarBoardAiTargetCacher__get_ForceId(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  return this->fields._ForceId_k__BackingField;
}


int32_t WarBoardAiTargetCacher__get_GroupId(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField;
}


void WarBoardAiTargetCacher___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C409AB & 1) == 0 )
  {
    sub_1C37058(&WarBoardAiTargetCacher___c_TypeInfo);
    byte_4C409AB = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardAiTargetCacher___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAiTargetCacher___c_TypeInfo->static_fields->__9 = (struct WarBoardAiTargetCacher___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardAiTargetCacher___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardAiTargetCacher___c___ctor(WarBoardAiTargetCacher___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAiTargetCacher___c___ClearTargetObject_b__13_0(
        WarBoardAiTargetCacher___c_o *this,
        TargetDetector_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  TargetDetector__ClearTargetObject(x, (const MethodInfo *)x);
}


void WarBoardAiTargetCacher___c__DisplayClass14_0___ctor(
        WarBoardAiTargetCacher___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardAiTargetCacher___c__DisplayClass14_0___AggregateTargetObject_b__0(
        WarBoardAiTargetCacher___c__DisplayClass14_0_o *this,
        TargetDetector_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ((void (__fastcall *)(TargetDetector_o *, struct IWarBoardObjectData_array *, const char *))x->klass[1]._1.name)(
    x,
    this->fields.objectArray,
    x->klass[1]._1.namespaze);
}


void WarBoardAiTargetCacher___c__DisplayClass15_0___ctor(
        WarBoardAiTargetCacher___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAiTargetCacher___c__DisplayClass15_0___GetDetectorByTrendKey_b__0(
        WarBoardAiTargetCacher___c__DisplayClass15_0_o *this,
        TargetDetector_o *x,
        const MethodInfo *method)
{
  WarBoardAiTargetCacher___c__DisplayClass15_0_o *v4; // x19

  v4 = this;
  if ( (byte_4C409AC & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_long__Contains__);
    byte_4C409AC = 1;
  }
  if ( !x || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0 )
    sub_1C372B4(this);
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v4->fields.trendKey,
           (const MethodInfo_3658668 *)Method_System_Collections_Generic_HashSet_long__Contains__);
}


void WarBoardAiTargetCacher___c__DisplayClass9_0___ctor(
        WarBoardAiTargetCacher___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAiTargetCacher___c__DisplayClass9_0___Register_b__0(
        WarBoardAiTargetCacher___c__DisplayClass9_0_o *this,
        TargetDetector_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, void *))x->klass[1]._1.image)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.gc_desc);
}