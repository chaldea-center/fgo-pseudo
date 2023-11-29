// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAiTargetCacher___ctor(
        WarBoardAiTargetCacher_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F8C2A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_TargetDetector___ctor__, *(_QWORD *)&forceId);
    sub_B16FFC(&System_Collections_Generic_List_TargetDetector__TypeInfo, v8);
    byte_40F8C2A = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_TargetDetector__TypeInfo,
                                                                                                 *(_QWORD *)&forceId,
                                                                                                 *(_QWORD *)&groupId,
                                                                                                 method,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_TargetDetector___ctor__);
  this->fields.targetDetectorList = (struct System_Collections_Generic_List_TargetDetector__o *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x20

  if ( (byte_40F8C2E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_TargetDetector___ctor__, objectArray);
    sub_B16FFC(&System_Action_TargetDetector__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v8);
    sub_B16FFC(&Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__, v9);
    sub_B16FFC(&WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, v10);
    byte_40F8C2E = 1;
  }
  v11 = sub_B170CC(WarBoardAiTargetCacher___c__DisplayClass14_0_TypeInfo, objectArray, method, v3, v4);
  WarBoardAiTargetCacher___c__DisplayClass14_0___ctor((WarBoardAiTargetCacher___c__DisplayClass14_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = objectArray,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)objectArray,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        targetDetectorList = this->fields.targetDetectorList,
        v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_TargetDetector__TypeInfo,
                                                                                     v19,
                                                                                     v20,
                                                                                     v21,
                                                                                     v22),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v23,
          (Il2CppObject *)v11,
          Method_WarBoardAiTargetCacher___c__DisplayClass14_0__AggregateTargetObject_b__0__,
          (const MethodInfo_24B7310 *)Method_System_Action_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)v23,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


void __fastcall WarBoardAiTargetCacher__ClearTargetObject(WarBoardAiTargetCacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  WarBoardAiTargetCacher___c_c *v11; // x0
  struct WarBoardAiTargetCacher___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__13_0; // x20
  Il2CppObject *v14; // x21
  struct WarBoardAiTargetCacher___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8C2D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_TargetDetector___ctor__, method);
    sub_B16FFC(&System_Action_TargetDetector__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_TargetDetector__ForEach__, v7);
    sub_B16FFC(&Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__, v8);
    sub_B16FFC(&WarBoardAiTargetCacher___c_TypeInfo, v9);
    byte_40F8C2D = 1;
  }
  targetDetectorList = this->fields.targetDetectorList;
  v11 = WarBoardAiTargetCacher___c_TypeInfo;
  if ( (BYTE3(WarBoardAiTargetCacher___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAiTargetCacher___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAiTargetCacher___c_TypeInfo);
    v11 = WarBoardAiTargetCacher___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_TargetDetector__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__13_0,
      v14,
      Method_WarBoardAiTargetCacher___c__ClearTargetObject_b__13_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_TargetDetector___ctor__);
    v15 = WarBoardAiTargetCacher___c_TypeInfo->static_fields;
    v15->__9__13_0 = (struct System_Action_TargetDetector__o *)_9__13_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !targetDetectorList )
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)targetDetectorList,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_TargetDetector__ForEach__);
}


TargetDetector_o *__fastcall WarBoardAiTargetCacher__GetDetectorByTrendKey(
        WarBoardAiTargetCacher_o *this,
        int64_t trendKey,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardAiTargetCacher___c__DisplayClass15_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F8C2F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_TargetDetector__Find__, trendKey);
    sub_B16FFC(&Method_System_Predicate_TargetDetector___ctor__, v7);
    sub_B16FFC(&System_Predicate_TargetDetector__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__, v9);
    sub_B16FFC(&WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo, v10);
    byte_40F8C2F = 1;
  }
  v11 = (WarBoardAiTargetCacher___c__DisplayClass15_0_o *)sub_B170CC(
                                                            WarBoardAiTargetCacher___c__DisplayClass15_0_TypeInfo,
                                                            trendKey,
                                                            method,
                                                            v3,
                                                            v4);
  WarBoardAiTargetCacher___c__DisplayClass15_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.trendKey = trendKey,
        targetDetectorList = this->fields.targetDetectorList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_TargetDetector__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_WarBoardAiTargetCacher___c__DisplayClass15_0__GetDetectorByTrendKey_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_TargetDetector___ctor__),
        !targetDetectorList) )
  {
    sub_B170D4();
  }
  return (TargetDetector_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                               (System_Predicate_T__o *)v17,
                               (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
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

  if ( (byte_40F8C2C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, trendKey);
    byte_40F8C2C = 1;
  }
  result = (IWarBoardObjectData_array *)WarBoardAiTargetCacher__GetDetectorByTrendKey(this, trendKey, method);
  if ( result )
  {
    result = (IWarBoardObjectData_array *)result->m_Items[1];
    if ( result )
      return (IWarBoardObjectData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)result,
                                            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  IndividualityTargetDetector_o *v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v27; // x21
  struct System_Collections_Generic_List_TargetDetector__o *targetDetectorList; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x8
  int32_t v36; // w9
  struct System_Collections_Generic_List_TargetDetector__o *v37; // x0

  if ( (byte_40F8C2B & 1) == 0 )
  {
    sub_B16FFC(&IndividualityTargetDetector_TypeInfo, trendKey);
    sub_B16FFC(&Method_System_Collections_Generic_List_TargetDetector__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_TargetDetector__Find__, v10);
    sub_B16FFC(&Method_System_Predicate_TargetDetector___ctor__, v11);
    sub_B16FFC(&System_Predicate_TargetDetector__TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__, v13);
    sub_B16FFC(&WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, v14);
    byte_40F8C2B = 1;
  }
  v15 = sub_B170CC(WarBoardAiTargetCacher___c__DisplayClass9_0_TypeInfo, trendKey, entity, *(_QWORD *)&teamCond, method);
  WarBoardAiTargetCacher___c__DisplayClass9_0___ctor((WarBoardAiTargetCacher___c__DisplayClass9_0_o *)v15, 0LL);
  v20 = (IndividualityTargetDetector_o *)sub_B170CC(IndividualityTargetDetector_TypeInfo, v16, v17, v18, v19);
  IndividualityTargetDetector___ctor(v20, entity, this, teamCond, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 16) = v20;
  v27 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v15 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  targetDetectorList = this->fields.targetDetectorList;
  v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_TargetDetector__TypeInfo,
                                                                   v29,
                                                                   v30,
                                                                   v31,
                                                                   v32);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v33,
    (Il2CppObject *)v15,
    Method_WarBoardAiTargetCacher___c__DisplayClass9_0__Register_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_TargetDetector___ctor__);
  if ( !targetDetectorList )
    goto LABEL_11;
  v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)targetDetectorList,
                                                                 (System_Predicate_T__o *)v33,
                                                                 (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_TargetDetector__Find__);
  if ( v34 )
    goto LABEL_9;
  v35 = *v27;
  v36 = this->fields.idGen + 1;
  this->fields.idGen = v36;
  if ( !v35 || (v35->fields.missionTargetId = v36, (v37 = this->fields.targetDetectorList) == 0LL) )
LABEL_11:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v37,
    *v27,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_TargetDetector__Add__);
  v34 = *v27;
LABEL_9:
  if ( !v34 )
    goto LABEL_11;
  TargetDetector__AddTrendKey((TargetDetector_o *)v34, trendKey, 0LL);
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7ABF & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAiTargetCacher___c_TypeInfo, v1);
    byte_40F7ABF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardAiTargetCacher___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAiTargetCacher___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
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
  System_Collections_Generic_HashSet_long__o *TrendKeyHashSet_k__BackingField; // x0

  if ( (byte_40F7AC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_long__Contains__, x);
    byte_40F7AC0 = 1;
  }
  if ( !x || (TrendKeyHashSet_k__BackingField = x->fields._TrendKeyHashSet_k__BackingField) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_HashSet_long___Contains(
           TrendKeyHashSet_k__BackingField,
           this->fields.trendKey,
           (const MethodInfo_21DCCF4 *)Method_System_Collections_Generic_HashSet_long__Contains__);
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
    sub_B170D4();
  return ((__int64 (__fastcall *)(TargetDetector_o *, struct IndividualityTargetDetector_o *, const char *))x->klass[1]._1.gc_desc)(
           x,
           this->fields.newDetector,
           x->klass[1]._1.name);
}