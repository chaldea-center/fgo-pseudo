// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAiTargetCacher___ctor(
        WarBoardAiTargetCacher_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B13DE1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_TargetDetector___ctor__,
      *(_QWORD *)&forceId,
      *(_QWORD *)&groupId);
    sub_1BCA7E0(&System_Collections_Generic_List_TargetDetector__TypeInfo, v7, v8);
    byte_4B13DE1 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_TargetDetector__TypeInfo,
                                                      *(_QWORD *)&forceId,
                                                      *(_QWORD *)&groupId,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ForceId_k__BackingField = forceId;
  this->fields._GroupId_k__BackingField = groupId;
}


void __fastcall WarBoardAiTargetCacher__AggregateTargetObject(
        WarBoardAiTargetCacher_o *this,
        IWarBoardObjectData_array *objectArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_object__o *v25; // x20

  if ( (byte_4B13DE5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TargetDetector__TypeInfo, objectArray, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v6, v7);
    sub_1BCA7E0(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, v10, v11);
    byte_4B13DE5 = 1;
  }
  v12 = sub_1BCAA2C(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, objectArray, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = objectArray,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)objectArray, v15, v16, v17, v18, v19, v20),
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v25 = (System_Action_object__o *)sub_1BCAA2C(System_Action_TargetDetector__TypeInfo, v22, v23, v24),
        System_Action_object____ctor(
          v25,
          (Il2CppObject *)v12,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          0LL),
        !targetDetectorList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)v25,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void __fastcall WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  WarBoardAiTargetCacher___c_c *v11; // x0
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Action_object__o *_9__13_0; // x20
  Il2CppObject *v14; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B13DE4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TargetDetector__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, v7, v8);
    sub_1BCA7E0(&WarBoardAiTargetCacher___c_TypeInfo, v9, v10);
    byte_4B13DE4 = 1;
  }
  v11 = WarBoardAiTargetCacher___c_TypeInfo;
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  if ( !WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo, method);
    v11 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  _9__13_0 = (System_Action_object__o *)v11->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = WarBoardAiTargetCacher___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__13_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_TargetDetector__TypeInfo, method, v2, v3);
    System_Action_object____ctor(_9__13_0, v14, Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, 0LL);
    static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !targetDetectorList )
    sub_1BCAA3C(v11, method);
  System_Collections_Generic_List_object___ForEach(
    targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


TargetDetector_o *__fastcall WarBoardAiTargetCacher__GetDetectorByTrendKey(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *targetDetectorList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B13DE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TargetDetector__Find__, trendKey, method);
    sub_1BCA7E0(&System_Predicate_TargetDetector__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo, v10, v11);
    byte_4B13DE6 = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo, trendKey, method, v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12
    || (v12[1].klass = (Il2CppClass *)trendKey,
        targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_TargetDetector__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          v12,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          0LL),
        !targetDetectorList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_object___Find(
                               targetDetectorList,
                               (System_Predicate_T__o *)v18,
                               (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
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

  if ( (byte_4B13DE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, trendKey, method);
    byte_4B13DE3 = 1;
  }
  DetectorByTrendKey = WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( DetectorByTrendKey
    && (TargetObjectHashSet_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)DetectorByTrendKey->fields._TargetObjectHashSet_k__BackingField) != 0LL )
  {
    return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_object_(
                                          TargetObjectHashSet_k__BackingField,
                                          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAiTargetCacher__Register(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        WarBoardActionTrendConditionEntity_o *entity,
        int32_t teamCond,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  IndividualityTargetDetector_o *v23; // x24
  const MethodInfo *v24; // x4
  System_Collections_Generic_List_object__o *v25; // x0
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t *v33; // x21
  System_Collections_Generic_List_object__o *targetDetectorList; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Predicate_object__o *v38; // x24
  const MethodInfo *v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int32_t v45; // w8
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x8

  if ( (byte_4B13DE2 & 1) == 0 )
  {
    sub_1BCA7E0(&IndividualityTargetDetector_TypeInfo, trendKey, entity);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TargetDetector__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TargetDetector__Find__, v11, v12);
    sub_1BCA7E0(&System_Predicate_TargetDetector__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__, v15, v16);
    sub_1BCA7E0(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, v17, v18);
    byte_4B13DE2 = 1;
  }
  v19 = sub_1BCAA2C(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, trendKey, entity, *(_QWORD *)&teamCond);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  v23 = (IndividualityTargetDetector_o *)sub_1BCAA2C(IndividualityTargetDetector_TypeInfo, v20, v21, v22);
  IndividualityTargetDetector___ctor(v23, entity, this, teamCond, v24);
  if ( !v19 )
    goto LABEL_15;
  *(_QWORD *)(v19 + 16) = v23;
  v33 = (int64_t *)(v19 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)v23, v27, v28, v29, v30, v31, v32);
  targetDetectorList = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList;
  v38 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_TargetDetector__TypeInfo, v35, v36, v37);
  System_Predicate_object____ctor(
    v38,
    (Il2CppObject *)v19,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    0LL);
  if ( !targetDetectorList )
    goto LABEL_15;
  v25 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Find(
                                                       targetDetectorList,
                                                       (System_Predicate_T__o *)v38,
                                                       (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v25 )
    goto LABEL_13;
  v26 = *v33;
  v45 = this->fields.idGen + 1;
  this->fields.idGen = v45;
  if ( !v26
    || (*(_DWORD *)(v26 + 16) = v45,
        (v25 = (System_Collections_Generic_List_object__o *)this->fields.targetDetectorList) == 0LL)
    || (items = v25->fields._items,
        v47 = Method_System_Collections_Generic_List_TargetDetector__Add__,
        ++v25->fields._version,
        !items) )
  {
LABEL_15:
    sub_1BCAA3C(v25, v26);
  }
  size = v25->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      (Il2CppObject *)v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    v25->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), v26, (int64_t)v39, v40, v41, v42, v43, v44);
  }
  v25 = (System_Collections_Generic_List_object__o *)*v33;
LABEL_13:
  if ( !v25 )
    goto LABEL_15;
  TargetDetector__AddTrendKey((TargetDetector_o *)v25, trendKey, v39);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13DE7 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAiTargetCacher___c_TypeInfo, v1, v2);
    byte_4B13DE7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardAiTargetCacher___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardAiTargetCacher___c_TypeInfo->static_fields->__9 = (struct WarBoardAiTargetCacher___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardAiTargetCacher___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B13DE8 & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_1BCA7E0(
                                                               &Method_System_Collections_Generic_HashSet_long__Contains__,
                                                               x,
                                                               method);
    byte_4B13DE8 = 1;
  }
  if ( !x
    || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0LL )
  {
    sub_1BCAA3C(this, x);
  }
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v4->fields.trendKey,
           (const MethodInfo_34595A0 *)Method_System_Collections_Generic_HashSet_long__Contains__);
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
    sub_1BCAA3C(this, 0LL);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, const char *))x->klass[1]._1.gc_desc)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.name);
}