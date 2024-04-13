void __fastcall WarBoardAiTargetCacher___ctor(
        WarBoardAiTargetCacher_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E6932 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_TargetDetector___ctor__, forceId, groupId, method);
    sub_B5D5C4(&System_Collections_Generic_List_TargetDetector__TypeInfo, v7, v8, v9);
    byte_42E6932 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_TargetDetector__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v10;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v28; // x20

  if ( (byte_42E6936 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_TargetDetector___ctor__, (_DWORD)objectArray, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_TargetDetector__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, v15, v16, v17);
    byte_42E6936 = 1;
  }
  v18 = sub_B5D694(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo);
  WarBoardAiTargetCacher___c__DisplayClass14_0___ctor((WarBoardAiTargetCacher___c__DisplayClass14_0_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = objectArray,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)objectArray,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        targetDetectorList = this->fields.targetDetectorList,
        v28 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_TargetDetector__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v28,
          (Il2CppObject *)v18,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          (const MethodInfo_258B320 *)Method_System_Action_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B5D69C(v19, v20);
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)v28,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void __fastcall WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  WarBoardAiTargetCacher___c_c *v18; // x0
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__13_0; // x20
  Il2CppObject *v21; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E6935 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_TargetDetector___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TargetDetector__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, v11, v12, v13);
    sub_B5D5C4(&WarBoardAiTargetCacher___c_TypeInfo, v14, v15, v16);
    byte_42E6935 = 1;
  }
  targetDetectorList = this->fields.targetDetectorList;
  v18 = WarBoardAiTargetCacher___c_TypeInfo;
  if ( (BYTE3(WarBoardAiTargetCacher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo);
    v18 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_TargetDetector__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__13_0,
      v21,
      Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__,
      (const MethodInfo_258B320 *)Method_System_Action_TargetDetector___ctor__);
    v22 = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    v22->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !targetDetectorList )
    sub_B5D69C(v18, method);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


TargetDetector_o *__fastcall WarBoardAiTargetCacher__GetDetectorByTrendKey(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardAiTargetCacher___c__DisplayClass15_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E6937 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_TargetDetector__Find__, trendKey, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_TargetDetector___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_TargetDetector__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo, v15, v16, v17);
    byte_42E6937 = 1;
  }
  v18 = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_B5D694(WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo);
  WarBoardAiTargetCacher___c__DisplayClass15_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.trendKey = trendKey,
        targetDetectorList = this->fields.targetDetectorList,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_TargetDetector__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B5D69C(v19, v20);
  }
  return (TargetDetector_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                               (System_Predicate_T__o *)v22,
                               (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
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
  __int64 v3; // x3
  IWarBoardObjectData_array *result; // x0

  if ( (byte_42E6934 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, trendKey, (_DWORD)method, v3);
    byte_42E6934 = 1;
  }
  result = (IWarBoardObjectData_array *)WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( result )
  {
    result = (IWarBoardObjectData_array *)result->m_Items[1];
    if ( result )
      return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)result,
                                            (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAiTargetCacher__Register(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        WarBoardActionTrendConditionEntity_o *entity,
        int32_t teamCond,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x23
  IndividualityTargetDetector_o *v28; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v37; // x21
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x8
  int32_t v41; // w9

  if ( (byte_42E6933 & 1) == 0 )
  {
    sub_B5D5C4(&IndividualityTargetDetector_TypeInfo, trendKey, (_DWORD)entity, *(_QWORD *)&teamCond);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TargetDetector__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TargetDetector__Find__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_TargetDetector___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_TargetDetector__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__, v21, v22, v23);
    sub_B5D5C4(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, v24, v25, v26);
    byte_42E6933 = 1;
  }
  v27 = sub_B5D694(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo);
  WarBoardAiTargetCacher___c__DisplayClass9_0___ctor((WarBoardAiTargetCacher___c__DisplayClass9_0_o *)v27, 0LL);
  v28 = (IndividualityTargetDetector_o *)sub_B5D694(IndividualityTargetDetector_TypeInfo);
  IndividualityTargetDetector___ctor(v28, entity, this, teamCond, 0LL);
  if ( !v27 )
    goto LABEL_11;
  *(_QWORD *)(v27 + 16) = v28;
  v37 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v27 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)v28, v31, v32, v33, v34, v35, v36);
  targetDetectorList = this->fields.targetDetectorList;
  v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_TargetDetector__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v39,
    (Il2CppObject *)v27,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_TargetDetector___ctor__);
  if ( !targetDetectorList )
    goto LABEL_11;
  v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                                                                 (System_Predicate_T__o *)v39,
                                                                 (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v29 )
    goto LABEL_9;
  v40 = *v37;
  v41 = this->fields.idGen + 1;
  this->fields.idGen = v41;
  if ( !v40
    || (v40->fields.missionTargetId = v41,
        (v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.targetDetectorList) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(v29, v30);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
    *v37,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_TargetDetector__Add__);
  v29 = *v37;
LABEL_9:
  if ( !v29 )
    goto LABEL_11;
  TargetDetector__AddTrendKey((TargetDetector_o *)v29, trendKey, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7070 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAiTargetCacher___c_TypeInfo, v1, v2, v3);
    byte_42E7070 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardAiTargetCacher___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAiTargetCacher___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  WarBoardAiTargetCacher___c__DisplayClass15_0_o *v5; // x19

  v5 = this;
  if ( (byte_42E7071 & 1) == 0 )
  {
    this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_B5D5C4(
                                                               &Method_System_Collections_Generic_HashSet_long__Contains__,
                                                               (_DWORD)x,
                                                               (_DWORD)method,
                                                               v3);
    byte_42E7071 = 1;
  }
  if ( !x
    || (this = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)x->fields._TrendKeyHashSet_k__BackingField) == 0LL )
  {
    sub_B5D69C(this, x);
  }
  return System_Collections_Generic_HashSet_long___Contains(
           (System_Collections_Generic_HashSet_long__o *)this,
           v5->fields.trendKey,
           (const MethodInfo_25041EC *)Method_System_Collections_Generic_HashSet_long__Contains__);
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
    sub_B5D69C(this, 0LL);
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, const char *))x->klass[1]._1.gc_desc)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.name);
}