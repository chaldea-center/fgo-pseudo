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

  if ( (byte_4212B62 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_TargetDetector___ctor__, *(_QWORD *)&forceId);
    sub_B0D8A4(&System_Collections_Generic_List_TargetDetector__TypeInfo, v7);
    byte_4212B62 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_TargetDetector__TypeInfo,
                                                                                                 *(_QWORD *)&forceId,
                                                                                                 *(_QWORD *)&groupId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v8;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v20; // x20

  if ( (byte_4212B66 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_TargetDetector___ctor__, objectArray);
    sub_B0D8A4(&System_Action_TargetDetector__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v6);
    sub_B0D8A4(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__, v7);
    sub_B0D8A4(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, v8);
    byte_4212B66 = 1;
  }
  v9 = sub_B0D974(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, objectArray, method);
  WarBoardAiTargetCacher___c__DisplayClass14_0___ctor((WarBoardAiTargetCacher___c__DisplayClass14_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = objectArray,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)objectArray,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        targetDetectorList = this->fields.targetDetectorList,
        v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_TargetDetector__TypeInfo,
                                                                                     v18,
                                                                                     v19),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v20,
          (Il2CppObject *)v9,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          (const MethodInfo_246EA3C *)Method_System_Action_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B0D97C(v10);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)v20,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void __fastcall WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  WarBoardAiTargetCacher___c_c *v9; // x0
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__13_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4212B65 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_TargetDetector___ctor__, method);
    sub_B0D8A4(&System_Action_TargetDetector__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v5);
    sub_B0D8A4(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, v6);
    sub_B0D8A4(&WarBoardAiTargetCacher___c_TypeInfo, v7);
    byte_4212B65 = 1;
  }
  targetDetectorList = this->fields.targetDetectorList;
  v9 = WarBoardAiTargetCacher___c_TypeInfo;
  if ( (BYTE3(WarBoardAiTargetCacher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo);
    v9 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_TargetDetector__TypeInfo,
                                                                                      method,
                                                                                      v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__13_0,
      v12,
      Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_TargetDetector___ctor__);
    v13 = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    v13->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !targetDetectorList )
    sub_B0D97C(v9);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4212B67 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_TargetDetector__Find__, trendKey);
    sub_B0D8A4(&Method_System_Predicate_TargetDetector___ctor__, v5);
    sub_B0D8A4(&System_Predicate_TargetDetector__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__, v7);
    sub_B0D8A4(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo, v8);
    byte_4212B67 = 1;
  }
  v9 = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_B0D974(
                                                           WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo,
                                                           trendKey,
                                                           method);
  WarBoardAiTargetCacher___c__DisplayClass15_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.trendKey = trendKey,
        targetDetectorList = this->fields.targetDetectorList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_TargetDetector__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B0D97C(v10);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                               (System_Predicate_T__o *)v14,
                               (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
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

  if ( (byte_4212B64 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, trendKey);
    byte_4212B64 = 1;
  }
  result = (IWarBoardObjectData_array *)WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( result )
  {
    result = (IWarBoardObjectData_array *)result->m_Items[1];
    if ( result )
      return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)result,
                                            (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
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
  __int64 v16; // x1
  __int64 v17; // x2
  IndividualityTargetDetector_o *v18; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v26; // x21
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x8
  int32_t v32; // w9

  if ( (byte_4212B63 & 1) == 0 )
  {
    sub_B0D8A4(&IndividualityTargetDetector_TypeInfo, trendKey);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TargetDetector__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TargetDetector__Find__, v10);
    sub_B0D8A4(&Method_System_Predicate_TargetDetector___ctor__, v11);
    sub_B0D8A4(&System_Predicate_TargetDetector__TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__, v13);
    sub_B0D8A4(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, v14);
    byte_4212B63 = 1;
  }
  v15 = sub_B0D974(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, trendKey, entity);
  WarBoardAiTargetCacher___c__DisplayClass9_0___ctor((WarBoardAiTargetCacher___c__DisplayClass9_0_o *)v15, 0LL);
  v18 = (IndividualityTargetDetector_o *)sub_B0D974(IndividualityTargetDetector_TypeInfo, v16, v17);
  IndividualityTargetDetector___ctor(v18, entity, this, teamCond, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 16) = v18;
  v26 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v15 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
  targetDetectorList = this->fields.targetDetectorList;
  v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_TargetDetector__TypeInfo,
                                                                   v28,
                                                                   v29);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v30,
    (Il2CppObject *)v15,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_TargetDetector___ctor__);
  if ( !targetDetectorList )
    goto LABEL_11;
  v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                                                                 (System_Predicate_T__o *)v30,
                                                                 (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v19 )
    goto LABEL_9;
  v31 = *v26;
  v32 = this->fields.idGen + 1;
  this->fields.idGen = v32;
  if ( !v31
    || (v31->fields.missionTargetId = v32,
        (v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetDetectorList) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(v19);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19,
    *v26,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_TargetDetector__Add__);
  v19 = *v26;
LABEL_9:
  if ( !v19 )
    goto LABEL_11;
  TargetDetector__AddTrendKey((TargetDetector_o *)v19, trendKey, 0LL);
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
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x0

  if ( (byte_4212694 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAiTargetCacher___c_TypeInfo, v1);
    byte_4212694 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardAiTargetCacher___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAiTargetCacher___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_4212695 & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_B0D8A4(
                                                               &Method_System_Collections_Generic_HashSet_long__Contains__,
                                                               x);
    byte_4212695 = 1;
  }
  if ( !x
    || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0LL )
  {
    sub_B0D97C(this);
  }
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v4->fields.trendKey,
           (const MethodInfo_2C79D70 *)Method_System_Collections_Generic_HashSet_long__Contains__);
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
    sub_B0D97C(this);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, const char *))x->klass[1]._1.gc_desc)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.name);
}