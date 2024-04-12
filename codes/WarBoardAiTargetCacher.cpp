void __fastcall WarBoardAiTargetCacher___ctor(
        WarBoardAiTargetCacher_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42AE0A6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_TargetDetector___ctor__);
    sub_B52984(&System_Collections_Generic_List_TargetDetector__TypeInfo);
    byte_42AE0A6 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_TargetDetector__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v7;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x20

  if ( (byte_42AE0AA & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_TargetDetector___ctor__);
    sub_B52984(&System_Action_TargetDetector__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_TargetDetector__ForEach__);
    sub_B52984(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__);
    sub_B52984(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
    byte_42AE0AA = 1;
  }
  v5 = sub_B52A54(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
  WarBoardAiTargetCacher___c__DisplayClass14_0___ctor((WarBoardAiTargetCacher___c__DisplayClass14_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = objectArray,
        sub_B52920(
          (BattleServantConfConponent_o *)(v5 + 16),
          (System_Int32_array **)objectArray,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        targetDetectorList = this->fields.targetDetectorList,
        v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_TargetDetector__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          (const MethodInfo_2627780 *)Method_System_Action_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B52A5C(v6, v7);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)v15,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void __fastcall WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  WarBoardAiTargetCacher___c_c *v4; // x0
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__13_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42AE0A9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_TargetDetector___ctor__);
    sub_B52984(&System_Action_TargetDetector__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_TargetDetector__ForEach__);
    sub_B52984(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__);
    sub_B52984(&WarBoardAiTargetCacher___c_TypeInfo);
    byte_42AE0A9 = 1;
  }
  targetDetectorList = this->fields.targetDetectorList;
  v4 = WarBoardAiTargetCacher___c_TypeInfo;
  if ( (BYTE3(WarBoardAiTargetCacher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo);
    v4 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_TargetDetector__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__13_0,
      v7,
      Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__,
      (const MethodInfo_2627780 *)Method_System_Action_TargetDetector___ctor__);
    v8 = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    v8->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !targetDetectorList )
    sub_B52A5C(v4, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


TargetDetector_o *__fastcall WarBoardAiTargetCacher__GetDetectorByTrendKey(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  WarBoardAiTargetCacher___c__DisplayClass15_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42AE0AB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_TargetDetector__Find__);
    sub_B52984(&Method_System_Predicate_TargetDetector___ctor__);
    sub_B52984(&System_Predicate_TargetDetector__TypeInfo);
    sub_B52984(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__);
    sub_B52984(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
    byte_42AE0AB = 1;
  }
  v5 = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_B52A54(WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
  WarBoardAiTargetCacher___c__DisplayClass15_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.trendKey = trendKey,
        targetDetectorList = this->fields.targetDetectorList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_TargetDetector__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B52A5C(v6, v7);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                               (System_Predicate_T__o *)v9,
                               (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
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

  if ( (byte_42AE0A8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
    byte_42AE0A8 = 1;
  }
  result = (IWarBoardObjectData_array *)WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( result )
  {
    result = (IWarBoardObjectData_array *)result->m_Items[1];
    if ( result )
      return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)result,
                                            (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
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
  __int64 v9; // x23
  IndividualityTargetDetector_o *v10; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v19; // x21
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x8
  int32_t v23; // w9

  if ( (byte_42AE0A7 & 1) == 0 )
  {
    sub_B52984(&IndividualityTargetDetector_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_TargetDetector__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_TargetDetector__Find__);
    sub_B52984(&Method_System_Predicate_TargetDetector___ctor__);
    sub_B52984(&System_Predicate_TargetDetector__TypeInfo);
    sub_B52984(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__);
    sub_B52984(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
    byte_42AE0A7 = 1;
  }
  v9 = sub_B52A54(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
  WarBoardAiTargetCacher___c__DisplayClass9_0___ctor((WarBoardAiTargetCacher___c__DisplayClass9_0_o *)v9, 0LL);
  v10 = (IndividualityTargetDetector_o *)sub_B52A54(IndividualityTargetDetector_TypeInfo);
  IndividualityTargetDetector___ctor(v10, entity, this, teamCond, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = v10;
  v19 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v9 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)v10, v13, v14, v15, v16, v17, v18);
  targetDetectorList = this->fields.targetDetectorList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_TargetDetector__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_TargetDetector___ctor__);
  if ( !targetDetectorList )
    goto LABEL_11;
  v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                                                                 (System_Predicate_T__o *)v21,
                                                                 (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v11 )
    goto LABEL_9;
  v22 = *v19;
  v23 = this->fields.idGen + 1;
  this->fields.idGen = v23;
  if ( !v22
    || (v22->fields.missionTargetId = v23,
        (v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetDetectorList) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(v11, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v11,
    *v19,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_TargetDetector__Add__);
  v11 = *v19;
LABEL_9:
  if ( !v11 )
    goto LABEL_11;
  TargetDetector__AddTrendKey((TargetDetector_o *)v11, trendKey, 0LL);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE5FC & 1) == 0 )
  {
    sub_B52984(&WarBoardAiTargetCacher___c_TypeInfo);
    byte_42AE5FC = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardAiTargetCacher___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAiTargetCacher___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42AE5FD & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_B52984(&Method_System_Collections_Generic_HashSet_long__Contains__);
    byte_42AE5FD = 1;
  }
  if ( !x
    || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0LL )
  {
    sub_B52A5C(this, x);
  }
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v4->fields.trendKey,
           (const MethodInfo_24DE3BC *)Method_System_Collections_Generic_HashSet_long__Contains__);
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
    sub_B52A5C(this, 0LL);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, const char *))x->klass[1]._1.gc_desc)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.name);
}