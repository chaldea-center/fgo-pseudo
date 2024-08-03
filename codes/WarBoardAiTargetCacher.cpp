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

  if ( (byte_49FA098 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_TargetDetector___ctor__, *(_QWORD *)&forceId);
    sub_1B640C8(&System_Collections_Generic_List_TargetDetector__TypeInfo, v7);
    byte_49FA098 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_TargetDetector__TypeInfo,
                                                      *(_QWORD *)&forceId,
                                                      *(_QWORD *)&groupId);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v8, v9, v10);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_object__o *v15; // x20

  if ( (byte_49FA09C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TargetDetector__TypeInfo, objectArray);
    sub_1B640C8(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v5);
    sub_1B640C8(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__, v6);
    sub_1B640C8(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, v7);
    byte_49FA09C = 1;
  }
  v8 = sub_1B64314(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, objectArray, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = objectArray,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)objectArray, v10, v11),
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v15 = (System_Action_object__o *)sub_1B64314(System_Action_TargetDetector__TypeInfo, v13, v14),
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v8,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          0LL),
        !targetDetectorList) )
  {
    sub_1B64324(v9);
  }
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)v15,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void __fastcall WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardAiTargetCacher___c_c *v7; // x0
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Action_object__o *_9__13_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FA09B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TargetDetector__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v4);
    sub_1B640C8(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, v5);
    sub_1B640C8(&WarBoardAiTargetCacher___c_TypeInfo, v6);
    byte_49FA09B = 1;
  }
  v7 = WarBoardAiTargetCacher___c_TypeInfo;
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  if ( !WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo);
    v7 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  _9__13_0 = (System_Action_object__o *)v7->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardAiTargetCacher___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__13_0 = (System_Action_object__o *)sub_1B64314(System_Action_TargetDetector__TypeInfo, method, v2);
    System_Action_object____ctor(_9__13_0, v10, Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, 0LL);
    static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v12, v13);
  }
  if ( !targetDetectorList )
    sub_1B64324(v7);
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FA09D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_TargetDetector__Find__, trendKey);
    sub_1B640C8(&System_Predicate_TargetDetector__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__, v6);
    sub_1B640C8(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo, v7);
    byte_49FA09D = 1;
  }
  v8 = (Il2CppObject *)sub_1B64314(WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo, trendKey, method);
  System_Object___ctor(v8, 0LL);
  if ( !v8
    || (v8[1].klass = (Il2CppClass *)trendKey,
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_TargetDetector__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          v8,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          0LL),
        !targetDetectorList) )
  {
    sub_1B64324(v9);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_object___Find(
                               targetDetectorList,
                               (System_Predicate_T__o *)v13,
                               (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_TargetDetector__Find__);
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

  if ( (byte_49FA09A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, trendKey);
    byte_49FA09A = 1;
  }
  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( DetectorByTrendKey
    && (TargetObjectHashSet_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)DetectorByTrendKey->fields._TargetObjectHashSet_k__BackingField) != 0LL )
  {
    return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_object_(
                                          TargetObjectHashSet_k__BackingField,
                                          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
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
  __int64 v15; // x1
  __int64 v16; // x2
  IndividualityTargetDetector_o *v17; // x24
  const MethodInfo *v18; // x4
  System_Collections_Generic_List_object__o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o **v22; // x21
  System_Collections_Generic_List_object__o *targetDetectorList; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Predicate_object__o *v26; // x24
  const MethodInfo *v27; // x2
  int32_t v28; // w3
  System_Collections_Generic_List_object__o *v29; // x1
  int32_t v30; // w8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8

  if ( (byte_49FA099 & 1) == 0 )
  {
    sub_1B640C8(&IndividualityTargetDetector_TypeInfo, trendKey);
    sub_1B640C8(&Method_System_Collections_Generic_List_TargetDetector__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_TargetDetector__Find__, v10);
    sub_1B640C8(&System_Predicate_TargetDetector__TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__, v12);
    sub_1B640C8(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, v13);
    byte_49FA099 = 1;
  }
  v14 = sub_1B64314(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, trendKey, entity);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  v17 = (IndividualityTargetDetector_o *)sub_1B64314(IndividualityTargetDetector_TypeInfo, v15, v16);
  IndividualityTargetDetector___ctor(v17, entity, this, teamCond, v18);
  if ( !v14 )
    goto LABEL_15;
  *(_QWORD *)(v14 + 16) = v17;
  v22 = (System_Collections_Generic_List_object__o **)(v14 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v17, v20, v21);
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  v26 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_TargetDetector__TypeInfo, v24, v25);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    0LL);
  if ( !targetDetectorList )
    goto LABEL_15;
  v19 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Find(
                                                       targetDetectorList,
                                                       (System_Predicate_T__o *)v26,
                                                       (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v19 )
    goto LABEL_13;
  v29 = *v22;
  v30 = this->fields.idGen + 1;
  this->fields.idGen = v30;
  if ( !v29
    || (LODWORD(v29->fields._items) = v30,
        (v19 = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList) == 0LL)
    || (items = v19->fields._items,
        v32 = Method_System_Collections_Generic_List_TargetDetector__Add__,
        ++v19->fields._version,
        !items) )
  {
LABEL_15:
    sub_1B64324(v19);
  }
  size = v19->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      (Il2CppObject *)v29,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v29;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v29, (int32_t)v27, v28);
  }
  v19 = *v22;
LABEL_13:
  if ( !v19 )
    goto LABEL_15;
  TargetDetector__AddTrendKey((TargetDetector_o *)v19, trendKey, v27);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA09E & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAiTargetCacher___c_TypeInfo, v1);
    byte_49FA09E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardAiTargetCacher___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardAiTargetCacher___c_TypeInfo->static_fields->__9 = (struct WarBoardAiTargetCacher___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardAiTargetCacher___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49FA09F & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_1B640C8(
                                                               &Method_System_Collections_Generic_HashSet_long__Contains__,
                                                               x);
    byte_49FA09F = 1;
  }
  if ( !x
    || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0LL )
  {
    sub_1B64324(this);
  }
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v4->fields.trendKey,
           (const MethodInfo_33683A8 *)Method_System_Collections_Generic_HashSet_long__Contains__);
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
    sub_1B64324(this);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, const char *))x->klass[1]._1.gc_desc)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.name);
}