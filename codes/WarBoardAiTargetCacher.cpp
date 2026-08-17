void WarBoardAiTargetCacher___ctor(
        WarBoardAiTargetCacher_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596E10F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_TargetDetector___ctor__);
    sub_2213A60(&System_Collections_Generic_List_TargetDetector__TypeInfo);
    byte_596E10F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_TargetDetector__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Action_object__o *v15; // x20

  if ( (byte_596E113 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TargetDetector__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_TargetDetector__ForEach__);
    sub_2213A60(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__);
    sub_2213A60(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
    byte_596E113 = 1;
  }
  v5 = sub_2213CCC(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = objectArray,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)objectArray, v8, v9, v10, v11, v12, v13),
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v15 = (System_Action_object__o *)sub_2213CCC(System_Action_TargetDetector__TypeInfo),
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          0),
        !targetDetectorList) )
  {
    sub_2213CDC(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)v15,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAiTargetCacher___c_c *v4; // x0
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__13_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596E112 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TargetDetector__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_TargetDetector__ForEach__);
    sub_2213A60(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__);
    sub_2213A60(&WarBoardAiTargetCacher___c_TypeInfo);
    byte_596E112 = 1;
  }
  v4 = WarBoardAiTargetCacher___c_TypeInfo;
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  if ( !*(&WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo, method, v2);
    v4 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__13_0 = (System_Action_object__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_object__o *)sub_2213CCC(System_Action_TargetDetector__TypeInfo);
    System_Action_object____ctor(_9__13_0, v8, Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, 0);
    v9 = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    v9->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__13_0, (int32_t)_9__13_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !targetDetectorList )
    sub_2213CDC(v4, method);
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


TargetDetector_o *WarBoardAiTargetCacher__GetDetectorByTrendKey(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *targetDetectorList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_596E114 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_TargetDetector__Find__);
    sub_2213A60(&System_Predicate_TargetDetector__TypeInfo);
    sub_2213A60(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__);
    sub_2213A60(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
    byte_596E114 = 1;
  }
  v5 = (Il2CppObject *)sub_2213CCC(WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5
    || (targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v5[1].klass = (Il2CppClass *)trendKey,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_TargetDetector__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          v5,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          0),
        !targetDetectorList) )
  {
    sub_2213CDC(v6, v7);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_object___Find(
                               targetDetectorList,
                               (System_Predicate_T__o *)v9,
                               (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
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

  if ( (byte_596E111 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    byte_596E111 = 1;
  }
  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( DetectorByTrendKey
    && (TargetObjectHashSet_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)DetectorByTrendKey->fields._TargetObjectHashSet_k__BackingField) != 0 )
  {
    return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_object_(
                                          TargetObjectHashSet_k__BackingField,
                                          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
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
  System_Collections_Generic_List_object__o *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_object__o **v20; // x21
  System_Collections_Generic_List_object__o *targetDetectorList; // x22
  System_Predicate_object__o *v22; // x24
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8

  if ( (byte_596E110 & 1) == 0 )
  {
    sub_2213A60(&IndividualityTargetDetector_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_TargetDetector__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_TargetDetector__Find__);
    sub_2213A60(&System_Predicate_TargetDetector__TypeInfo);
    sub_2213A60(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__);
    sub_2213A60(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
    byte_596E110 = 1;
  }
  v9 = sub_2213CCC(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  v10 = (IndividualityTargetDetector_o *)sub_2213CCC(IndividualityTargetDetector_TypeInfo);
  IndividualityTargetDetector___ctor(v10, entity, this, teamCond, v11);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = v10;
  v20 = (System_Collections_Generic_List_object__o **)(v9 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)v10, v14, v15, v16, v17, v18, v19);
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  v22 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_TargetDetector__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)v9,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    0);
  if ( !targetDetectorList )
    goto LABEL_14;
  v12 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Find(
                                                       targetDetectorList,
                                                       (System_Predicate_T__o *)v22,
                                                       (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( !v12 )
  {
    v13 = *v20;
    v29 = this->fields.idGen + 1;
    this->fields.idGen = v29;
    if ( !v13 )
      goto LABEL_14;
    v12 = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
    LODWORD(v13->fields._items) = v29;
    if ( !v12 )
      goto LABEL_14;
    items = v12->fields._items;
    v31 = Method_System_Collections_Generic_List_TargetDetector__Add__;
    ++v12->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v12->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)v13,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v13, v23, v24, v25, v26, v27, v28);
    }
    v12 = *v20;
    if ( !*v20 )
LABEL_14:
      sub_2213CDC(v12, v13);
  }
  TargetDetector__AddTrendKey((TargetDetector_o *)v12, trendKey, (const MethodInfo *)v23);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E115 & 1) == 0 )
  {
    sub_2213A60(&WarBoardAiTargetCacher___c_TypeInfo);
    byte_596E115 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardAiTargetCacher___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAiTargetCacher___c_TypeInfo->static_fields->__9 = (struct WarBoardAiTargetCacher___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardAiTargetCacher___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
  if ( (byte_596E116 & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_long__Contains__);
    byte_596E116 = 1;
  }
  if ( !x || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0 )
    sub_2213CDC(this, x);
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v4->fields.trendKey,
           (const MethodInfo_42B889C *)Method_System_Collections_Generic_HashSet_long__Contains__);
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
    sub_2213CDC(this, 0);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, void *))x->klass[1]._1.image)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.gc_desc);
}