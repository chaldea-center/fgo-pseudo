// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAiTargetCacher___ctor(
        WarBoardAiTargetCacher_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_41867BC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_TargetDetector___ctor__, *(_QWORD *)&forceId);
    sub_B2C35C(&System_Collections_Generic_List_TargetDetector__TypeInfo, v7);
    byte_41867BC = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_TargetDetector__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v8;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x20

  if ( (byte_41867C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_TargetDetector___ctor__, objectArray);
    sub_B2C35C(&System_Action_TargetDetector__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v6);
    sub_B2C35C(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__, v7);
    sub_B2C35C(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, v8);
    byte_41867C0 = 1;
  }
  v9 = sub_B2C42C(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
  WarBoardAiTargetCacher___c__DisplayClass14_0___ctor((WarBoardAiTargetCacher___c__DisplayClass14_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = objectArray,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)objectArray,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        targetDetectorList = this->fields.targetDetectorList,
        v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_TargetDetector__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v19,
          (Il2CppObject *)v9,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B2C434(v10, v11);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)v19,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void __fastcall WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  WarBoardAiTargetCacher___c_c *v8; // x0
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__13_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41867BF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_TargetDetector___ctor__, method);
    sub_B2C35C(&System_Action_TargetDetector__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v4);
    sub_B2C35C(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, v5);
    sub_B2C35C(&WarBoardAiTargetCacher___c_TypeInfo, v6);
    byte_41867BF = 1;
  }
  targetDetectorList = this->fields.targetDetectorList;
  v8 = WarBoardAiTargetCacher___c_TypeInfo;
  if ( (BYTE3(WarBoardAiTargetCacher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo);
    v8 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_TargetDetector__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__13_0,
      v11,
      Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_TargetDetector___ctor__);
    v12 = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    v12->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !targetDetectorList )
    sub_B2C434(v8, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


TargetDetector_o *__fastcall WarBoardAiTargetCacher__GetDetectorByTrendKey(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardAiTargetCacher___c__DisplayClass15_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_41867C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_TargetDetector__Find__, trendKey);
    sub_B2C35C(&Method_System_Predicate_TargetDetector___ctor__, v5);
    sub_B2C35C(&System_Predicate_TargetDetector__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__, v7);
    sub_B2C35C(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo, v8);
    byte_41867C1 = 1;
  }
  v9 = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_B2C42C(WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
  WarBoardAiTargetCacher___c__DisplayClass15_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.trendKey = trendKey,
        targetDetectorList = this->fields.targetDetectorList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_TargetDetector__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B2C434(v10, v11);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                               (System_Predicate_T__o *)v13,
                               (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
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
  IWarBoardObjectData_array *result; // x0

  if ( (byte_41867BE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, trendKey);
    byte_41867BE = 1;
  }
  result = (IWarBoardObjectData_array *)WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( result )
  {
    result = (IWarBoardObjectData_array *)result->m_Items[1];
    if ( result )
      return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)result,
                                            (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
  }
  return result;
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
  __int64 v14; // x1
  __int64 v15; // x23
  IndividualityTargetDetector_o *v16; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v25; // x21
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x8
  int32_t v29; // w9

  if ( (byte_41867BD & 1) == 0 )
  {
    sub_B2C35C(&IndividualityTargetDetector_TypeInfo, trendKey);
    sub_B2C35C(&Method_System_Collections_Generic_List_TargetDetector__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_TargetDetector__Find__, v10);
    sub_B2C35C(&Method_System_Predicate_TargetDetector___ctor__, v11);
    sub_B2C35C(&System_Predicate_TargetDetector__TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__, v13);
    sub_B2C35C(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, v14);
    byte_41867BD = 1;
  }
  v15 = sub_B2C42C(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
  WarBoardAiTargetCacher___c__DisplayClass9_0___ctor((WarBoardAiTargetCacher___c__DisplayClass9_0_o *)v15, 0LL);
  v16 = (IndividualityTargetDetector_o *)sub_B2C42C(IndividualityTargetDetector_TypeInfo);
  IndividualityTargetDetector___ctor(v16, entity, this, teamCond, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 16) = v16;
  v25 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v15 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)v16, v19, v20, v21, v22, v23, v24);
  targetDetectorList = this->fields.targetDetectorList;
  v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_TargetDetector__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v27,
    (Il2CppObject *)v15,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_TargetDetector___ctor__);
  if ( !targetDetectorList )
    goto LABEL_11;
  v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                                                                 (System_Predicate_T__o *)v27,
                                                                 (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v17 )
    goto LABEL_9;
  v28 = *v25;
  v29 = this->fields.idGen + 1;
  this->fields.idGen = v29;
  if ( !v28
    || (v28->fields.missionTargetId = v29,
        (v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetDetectorList) == 0LL) )
  {
LABEL_11:
    sub_B2C434(v17, v18);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v17,
    *v25,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_TargetDetector__Add__);
  v17 = *v25;
LABEL_9:
  if ( !v17 )
    goto LABEL_11;
  TargetDetector__AddTrendKey((TargetDetector_o *)v17, trendKey, 0LL);
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
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x0

  if ( (byte_418571D & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAiTargetCacher___c_TypeInfo, v1);
    byte_418571D = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardAiTargetCacher___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAiTargetCacher___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  TargetDetector__ClearTargetObject(x, 0LL);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_418571E & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_B2C35C(
                                                               &Method_System_Collections_Generic_HashSet_long__Contains__,
                                                               x);
    byte_418571E = 1;
  }
  if ( !x
    || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0LL )
  {
    sub_B2C434(this, x);
  }
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v4->fields.trendKey,
           (const MethodInfo_2D89DF4 *)Method_System_Collections_Generic_HashSet_long__Contains__);
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
    sub_B2C434(this, 0LL);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, const char *))x->klass[1]._1.gc_desc)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.name);
}