void __fastcall StandFigureBack___cctor(const MethodInfo *method)
{
  if ( (byte_435281C & 1) == 0 )
  {
    sub_B70694(&StandFigureBack_TypeInfo);
    byte_435281C = 1;
  }
  StandFigureBack_TypeInfo->static_fields->COSTUME_IMAGE_CNT_START = 11;
  StandFigureBack_TypeInfo->static_fields->OPEN_TIME = 0.3;
  StandFigureBack_TypeInfo->static_fields->CLOSE_TIME = 0.3;
}


void __fastcall StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_435281B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_B70694(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_435281B = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.standFigureCollectList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall StandFigureBack__CreatePrefab(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseStandFigure; // x20
  bool v8; // w0
  __int64 v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v15; // x21
  const MethodInfo *v16; // x1
  System_Int32_array **current; // x21
  UIStandFigureR_o *v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UIStandFigureR_o *v26; // x22
  struct System_Collections_Generic_List_StandFigureCollect__o *v27; // x23
  StandFigureCollect_o *v28; // x24
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  __int64 v31; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  StandFigureCollect_o *v34; // x20
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4352811 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StandFigureCollect_TypeInfo);
    byte_4352811 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(baseStandFigure, 0LL, 0LL);
  v9 = 32LL;
  if ( v8 )
    v9 = 40LL;
  v10 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v9);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_23;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0LL);
  if ( !EntityListOrderBy
    || (v15 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v10, v14);
    v34 = (StandFigureCollect_o *)sub_B70764(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v34, 0LL, RenderPrefab, v35);
    if ( standFigureCollectList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)standFigureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      goto LABEL_22;
    }
LABEL_23:
    sub_B7076C(Instance, v12);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    v15,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v37 = v36;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = (System_Int32_array **)v37.fields.current;
    v18 = StandFigureManager__CreateRenderPrefab(v10, v16);
    v26 = v18;
    if ( !v18 )
      sub_B7076C(0LL, v19);
    v18->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_B70630(
      (BattleServantConfConponent_o *)&v18->fields.svtMultiPortraitEntity,
      current,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v27 = this->fields.standFigureCollectList;
    v28 = (StandFigureCollect_o *)sub_B70764(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v28, (SvtMultiPortraitEntity_o *)current, v26, v29);
    if ( !v27 )
      sub_B7076C(v30, v31);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
LABEL_22:
  this->fields.isFirstLoading = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__CreatedStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        System_Action_o *callback,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x25
  StandFigureCollect_o *v19; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x24
  System_Action_o *v21; // x25

  if ( (byte_4352815 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_B70694(&Method_StandFigureBack_EndLoad__);
    byte_4352815 = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v19 = standFigureCollectList->fields._items->m_Items[index];
  if ( !v19
    || (standFigure_k__BackingField = v19->fields._standFigure_k__BackingField,
        v21 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v21, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL),
        !standFigure_k__BackingField) )
  {
LABEL_9:
    sub_B7076C(v16, v17);
  }
  UIStandFigureR__SetCharacter_40788852(
    standFigure_k__BackingField,
    svtId,
    imageLimitCount,
    offsetKind,
    faceType,
    v21,
    0LL);
}


void __fastcall StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_435280F & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435280F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v13,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v5 )
        break;
      current = v13.fields.current;
      if ( !v13.fields.current )
        sub_B7076C(v5, v6);
      monitor = (UIStandFigureR_o *)v13.fields.current[1].monitor;
      if ( !monitor )
        sub_B7076C(0LL, v6);
      UIStandFigureR__Destroy(monitor, 0LL);
      v10 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v10 )
        sub_B7076C(0LL, v9);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36067420(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
LABEL_20:
      sub_B7076C(standFigureCollectList, v3);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)standFigureCollectList,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
  }
}


void __fastcall StandFigureBack__EndClose(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_baseCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc;
  v12 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_B70630(p_baseCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall StandFigureBack__EndFadein(StandFigureBack_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_baseCallbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc;
  v9 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_B70630(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall StandFigureBack__EndFadeout(StandFigureBack_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_baseCallbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc;
  v9 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_B70630(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall StandFigureBack__EndLoad(StandFigureBack_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isFirstLoading )
    this->fields.isFirstLoading = 0;
  if ( this->fields.isDispRequest )
    StandFigureBack__Fadein(this, this->fields.baseCallbackFunc, v2);
}


void __fastcall StandFigureBack__Fadein(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  _BOOL4 isFirstLoading; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v16; // x20
  StandFigureBack_c *v17; // x0
  TweenPosition_o *v18; // x20
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4352819 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StandFigureBack_TypeInfo);
    sub_B70694(&StringLiteral_6050/*"EndFadein"*/);
    byte_4352819 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  isFirstLoading = this->fields.isFirstLoading;
  this->fields.isDispRequest = 1;
  if ( !isFirstLoading )
  {
    if ( !this->fields.isDisp )
    {
      this->fields.isDisp = 1;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) )
      {
        closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
        {
          v16 = this->fields.baseWindow;
          v17 = StandFigureBack_TypeInfo;
          if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !StandFigureBack_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
            v17 = StandFigureBack_TypeInfo;
          }
          v18 = TweenPosition__Begin(v16, v17->static_fields->OPEN_TIME, this->fields.basePosition, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v18,
                                                     0LL,
                                                     0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( v18 )
            {
              v18->fields.style = 3;
              v19 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v18->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v19;
              sub_B70630((BattleServantConfConponent_o *)&v18->fields.eventReceiver, v19, v20, v21, v22, v23, v24, v25);
              v26 = (System_Int32_array **)StringLiteral_6050/*"EndFadein"*/;
              v18->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6050/*"EndFadein"*/;
              sub_B70630(
                (BattleServantConfConponent_o *)&v18->fields.callWhenFinished,
                v26,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
              return;
            }
LABEL_27:
            sub_B7076C(gameObject, v13);
          }
          gameObject = this->fields.baseWindow;
          if ( !gameObject )
            goto LABEL_27;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_27;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)gameObject,
            this->fields.basePosition,
            0LL);
        }
      }
    }
    StandFigureBack__EndFadein(this, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__Fadeout(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  _BOOL4 isDisp; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0
  UnityEngine_GameObject_o *v19; // x20
  float x; // s8
  float y; // s9
  StandFigureBack_c *v22; // x0
  float z; // s10
  TweenPosition_o *v24; // x20
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_435281A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StandFigureBack_TypeInfo);
    sub_B70694(&StringLiteral_6051/*"EndFadeout"*/);
    byte_435281A = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  isDisp = this->fields.isDisp;
  this->fields.isDispRequest = 0;
  if ( isDisp )
  {
    this->fields.isDisp = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) )
    {
      closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
      {
        gameObject = this->fields.baseWindow;
        if ( !gameObject )
          goto LABEL_30;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_30;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL);
        if ( !this->fields.closeTransform )
          goto LABEL_30;
        v15 = (UnityEngine_Transform_o *)gameObject;
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position(this->fields.closeTransform, 0LL);
        if ( !v15 )
          goto LABEL_30;
        v39 = UnityEngine_Transform__InverseTransformPoint(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
        v19 = this->fields.baseWindow;
        x = v39.fields.x;
        y = v39.fields.y;
        v22 = StandFigureBack_TypeInfo;
        z = v39.fields.z;
        if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !StandFigureBack_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
          v22 = StandFigureBack_TypeInfo;
        }
        v40.fields.x = x;
        v40.fields.y = y;
        v40.fields.z = z;
        v24 = TweenPosition__Begin(v19, v22->static_fields->OPEN_TIME, v40, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v24,
                                                   0LL,
                                                   0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v24 )
          {
            v24->fields.style = 3;
            v25 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v24->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v25;
            sub_B70630((BattleServantConfConponent_o *)&v24->fields.eventReceiver, v25, v26, v27, v28, v29, v30, v31);
            v32 = (System_Int32_array **)StringLiteral_6051/*"EndFadeout"*/;
            v24->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6051/*"EndFadeout"*/;
            sub_B70630((BattleServantConfConponent_o *)&v24->fields.callWhenFinished, v32, v33, v34, v35, v36, v37, v38);
            return;
          }
LABEL_30:
          sub_B7076C(gameObject, v10);
        }
        gameObject = this->fields.baseWindow;
        if ( !gameObject )
          goto LABEL_30;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_30;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
      }
    }
  }
  StandFigureBack__EndClose(this, v10);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__GetSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  StandFigureBack_o *v4; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v6; // x8

  v4 = this;
  if ( (byte_435280C & 1) == 0 )
  {
    this = (StandFigureBack_o *)sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_435280C = 1;
  }
  standFigureCollectList = v4->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_8;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = standFigureCollectList->fields._items->m_Items[index];
  if ( !v6 )
LABEL_8:
    sub_B7076C(this, *(_QWORD *)&index);
  return v6->fields._standFigure_k__BackingField;
}


System_Collections_Generic_List_StandFigureCollect__o *__fastcall StandFigureBack__GetSvtStandFigureCollect(
        StandFigureBack_o *this,
        const MethodInfo *method)
{
  return this->fields.standFigureCollectList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__Init(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v8; // x8
  UnityEngine_Transform_o *v9; // x19
  int v10; // s0

  if ( (byte_435280E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435280E = 1;
  }
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) && !this->fields.isBasePosition )
  {
    transform = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !transform )
      goto LABEL_25;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_25;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  }
  StandFigureBack__DestroyFigure(this, v4);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  *(_WORD *)&this->fields.isFirstLoading = 0;
  this->fields.isDisp = 0;
  v6 = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
    {
      transform = this->fields.baseWindow;
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        v8 = this->fields.closeTransform;
        if ( v8 )
        {
          v9 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position(v8, 0LL);
          if ( v9 )
          {
            UnityEngine_Transform__set_position(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
            return;
          }
        }
      }
LABEL_25:
      sub_B7076C(transform, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__InitStandFigure(
        StandFigureBack_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v16; // x8
  UnityEngine_Transform_o *v17; // x19
  int v18; // s0

  if ( (byte_4352810 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352810 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  StandFigureBack__DestroyFigure(this, v7);
  this->fields.baseCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc,
    (System_Int32_array **)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.isDispRequest = 1;
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) && !this->fields.isBasePosition )
  {
    gameObject = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
    {
      gameObject = this->fields.baseWindow;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
        v16 = this->fields.closeTransform;
        if ( v16 )
        {
          v17 = (UnityEngine_Transform_o *)gameObject;
          *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_position(v16, 0LL);
          if ( v17 )
          {
            UnityEngine_Transform__set_position(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_B7076C(gameObject, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__RobSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  StandFigureBack_o *v4; // x21
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v6; // x19

  v4 = this;
  if ( (byte_435280D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__);
    this = (StandFigureBack_o *)sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_435280D = 1;
  }
  standFigureCollectList = v4->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = standFigureCollectList->fields._items->m_Items[index];
  this = (StandFigureBack_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.standFigureCollectList,
                                (WarBoardManager_TaskList_o *)v6,
                                (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__);
  if ( !v6 )
LABEL_9:
    sub_B7076C(this, *(_QWORD *)&index);
  return v6->fields._standFigure_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetEventRewardStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x25
  StandFigureCollect_o *v19; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x22
  System_Action_o *v21; // x25
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppClass *v29; // x8
  UIStandFigureR_o *v30; // x0
  System_Action_o *v31; // x20
  const MethodInfo *v32; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4352816 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_B70694(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_B70694(&Method_StandFigureBack_EndLoad__);
    byte_4352816 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    v16 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
            (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_26;
    if ( (int)v16 < 2 )
    {
      if ( !standFigureCollectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v19 = standFigureCollectList->fields._items->m_Items[0];
      if ( v19 )
      {
        standFigure_k__BackingField = v19->fields._standFigure_k__BackingField;
        v21 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(v21, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetCharacter_40788852(
            standFigure_k__BackingField,
            svtId,
            imageLimitCount,
            offsetKind,
            faceType,
            v21,
            0LL);
          return;
        }
      }
LABEL_26:
      sub_B7076C(v16, v17);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.standFigureCollectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v35 = v34;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v22 )
        break;
      current = v35.fields.current;
      if ( !v35.fields.current )
        sub_B7076C(v22, v23);
      klass = v35.fields.current[1].klass;
      if ( !klass )
        sub_B7076C(v22, v23);
      monitor = (UIStandFigureR_o *)v35.fields.current[1].monitor;
      if ( !monitor )
        sub_B7076C(0LL, v23);
      v27 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              HIDWORD(klass->_1.namespaze),
              offsetKind,
              faceType,
              0,
              0LL,
              0,
              0LL);
      v29 = current[1].klass;
      if ( !v29 )
        sub_B7076C(v27, v28);
      v30 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v30 )
        sub_B7076C(0LL, v28);
      UIStandFigureR__SetDepth(
        v30,
        ((__int64)v29->_1.byval_arg.data & ~(SLODWORD(v29->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v31, v32);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


void __fastcall StandFigureBack__SetFaceType(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        int32_t index,
        const MethodInfo *method)
{
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  int32_t size; // w8
  StandFigureCollect_o *v13; // x8

  if ( (byte_4352812 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4352812 = 1;
  }
  standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                                      (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  if ( ((unsigned __int8)standFigure_k__BackingField & 1) != 0 )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      size = standFigureCollectList->fields._size;
      if ( size < index )
        return;
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v13 = standFigureCollectList->fields._items->m_Items[index];
      if ( v13 )
      {
        standFigure_k__BackingField = v13->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetFace(standFigure_k__BackingField, faceType, fadeTime, 0LL);
          return;
        }
      }
    }
    sub_B7076C(standFigure_k__BackingField, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAll(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352813 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_4352813 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B7076C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields.current )
      sub_B7076C(v8, v9);
    monitor = (UIStandFigureR_o *)v11.fields.current[1].monitor;
    if ( !monitor )
      sub_B7076C(0LL, v9);
    UIStandFigureR__SetFace(monitor, faceType, fadeTime, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAndForm(
        StandFigureBack_o *this,
        int32_t faceType,
        int32_t formId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352814 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_4352814 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B7076C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields.current )
      sub_B7076C(v8, v9);
    monitor = (UIStandFigureR_o *)v11.fields.current[1].monitor;
    if ( !monitor )
      sub_B7076C(0LL, v9);
    UIStandFigureR__SetFace_40793900(monitor, faceType, formId, 0LL, 0.0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetMyRoomStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t formId,
        int32_t depth,
        System_Action_o *callback,
        bool isPhotoWithMaster,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  int v19; // w27
  const MethodInfo *v20; // x3
  System_Action_o *baseCallbackFunc; // x20
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *v24; // x27
  StandFigureCollect_o *v25; // x8
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppClass *v33; // x8
  UIStandFigureR_o *v34; // x0
  const MethodInfo *v35; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4352817 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_B70694(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_B70694(&Method_StandFigureBack_EndLoad__);
    byte_4352817 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v19 = !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v19 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v20);
  if ( v19 )
  {
    baseCallbackFunc = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v19;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                                        (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    v24 = this->fields.standFigureCollectList;
    if ( !v24 )
      goto LABEL_32;
    if ( (int)standFigure_k__BackingField < 2 )
    {
      if ( !v24->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v25 = v24->fields._items->m_Items[0];
      if ( v25 )
      {
        standFigure_k__BackingField = v25->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetCharacter_40788848(
            standFigure_k__BackingField,
            svtId,
            imageLimitCount,
            offsetKind,
            faceType,
            formId,
            baseCallbackFunc,
            0LL);
          return;
        }
      }
LABEL_32:
      sub_B7076C(standFigure_k__BackingField, v23);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.standFigureCollectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v38 = v37;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v26 )
        break;
      current = v38.fields.current;
      if ( !v38.fields.current )
        sub_B7076C(v26, v27);
      klass = v38.fields.current[1].klass;
      if ( !klass )
        sub_B7076C(v26, v27);
      monitor = (UIStandFigureR_o *)v38.fields.current[1].monitor;
      if ( !monitor )
        sub_B7076C(0LL, v27);
      v31 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              HIDWORD(klass->_1.namespaze),
              offsetKind,
              faceType,
              formId,
              0LL,
              isPhotoWithMaster,
              0LL);
      v33 = current[1].klass;
      if ( !v33 )
        sub_B7076C(v31, v32);
      v34 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v34 )
        sub_B7076C(0LL, v32);
      UIStandFigureR__SetDepth(
        v34,
        ((__int64)v33->_1.byval_arg.data & ~(SLODWORD(v33->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v35);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall StandFigureBack__WaitForLoadAllAssetBundle(
        StandFigureBack_o *this,
        System_Action_o *action,
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4352818 & 1) == 0 )
  {
    sub_B70694(&StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo);
    byte_4352818 = 1;
  }
  v5 = sub_B70764(StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo);
  StandFigureBack__WaitForLoadAllAssetBundle_d__31___ctor(
    (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


bool __fastcall StandFigureBack__get_IsDisp(StandFigureBack_o *this, const MethodInfo *method)
{
  return this->fields.isDispRequest;
}


void __fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31___ctor(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31__MoveNext(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct StandFigureBack_o *_4__this; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *standFigureCollectList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  void *monitor; // x8
  UnityEngine_Behaviour_o *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_assetRendered_5__2; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  StandFigureBack___c_c *v12; // x0
  struct StandFigureBack___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__31_0; // x21
  Il2CppObject *v15; // x22
  struct StandFigureBack___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _BOOL8 v35; // x0
  __int64 v36; // x1
  void *v37; // x8
  UnityEngine_Behaviour_o *v38; // x0
  Il2CppObject **p__2__current; // x19
  int v40; // w20
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-78h] BYREF
  int v43[2]; // [xsp+20h] [xbp-60h]
  int v44; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_434F901 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_B70694(&Method_System_Func_StandFigureCollect__bool___ctor__);
    sub_B70694(&System_Func_StandFigureCollect__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_B70694(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__);
    sub_B70694(&StandFigureBack___c_TypeInfo);
    byte_434F901 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_assetRendered_5__2 = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields._assetRendered_5__2;
    this->fields.__1__state = -1;
  }
  else
  {
    standFigureCollectList = 0LL;
    if ( _1__state )
      return (char)standFigureCollectList;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_45;
    standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_45;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v42,
      standFigureCollectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v45 = v42;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v45,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v6 )
        break;
      if ( !v45.fields.current )
        sub_B7076C(v6, v7);
      monitor = v45.fields.current[1].monitor;
      if ( !monitor )
        sub_B7076C(v6, v7);
      v9 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 3);
      if ( !v9 )
        sub_B7076C(0LL, v7);
      UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
    }
    v43[0] = 95;
    v44 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v45,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v44 = 0;
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v12 = StandFigureBack___c_TypeInfo;
    if ( (BYTE3(StandFigureBack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo);
      v12 = StandFigureBack___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = StandFigureBack___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_StandFigureCollect__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__31_0,
        v15,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__,
        (const MethodInfo_29AC578 *)Method_System_Func_StandFigureCollect__bool___ctor__);
      v16 = StandFigureBack___c_TypeInfo->static_fields;
      v16->__9__31_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__31_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v16->__9__31_0,
        (System_Int32_array **)_9__31_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(v11, (System_Func_TSource__bool__o *)_9__31_0, (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !this )
      goto LABEL_45;
    this->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)standFigureCollectList;
    p_assetRendered_5__2 = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields._assetRendered_5__2;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._assetRendered_5__2,
      (System_Int32_array **)standFigureCollectList,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(*p_assetRendered_5__2, (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( !_4__this )
    goto LABEL_45;
  if ( (_DWORD)standFigureCollectList != System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                                           (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B70630((BattleServantConfConponent_o *)p__2__current, 0LL, v29, v30, v31, v32, v33, v34);
    LOBYTE(standFigureCollectList) = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return (char)standFigureCollectList;
  }
  standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
LABEL_45:
    sub_B7076C(standFigureCollectList, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    standFigureCollectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v45 = v42;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v35 )
      break;
    if ( !v45.fields.current )
      sub_B7076C(v35, v36);
    v37 = v45.fields.current[1].monitor;
    if ( !v37 )
      sub_B7076C(v35, v36);
    v38 = (UnityEngine_Behaviour_o *)*((_QWORD *)v37 + 3);
    if ( !v38 )
      sub_B7076C(0LL, v36);
    UnityEngine_Behaviour__set_enabled(v38, 1, 0LL);
  }
  v43[0] = 254;
  v40 = ++v44;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( v40 && v43[v40 - 1] == 254 )
    v44 = v40 - 1;
  ActionExtensions__Call(this->fields.action, 0LL);
  LOBYTE(standFigureCollectList) = 0;
  return (char)standFigureCollectList;
}


Il2CppObject *__fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn StandFigureBack__WaitForLoadAllAssetBundle_d__31__System_Collections_IEnumerator_Reset(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__31_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31__System_Collections_IEnumerator_get_Current(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31__System_IDisposable_Dispose(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall StandFigureBack___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F8FF & 1) == 0 )
  {
    sub_B70694(&StandFigureBack___c_TypeInfo);
    byte_434F8FF = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(StandFigureBack___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)StandFigureBack___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall StandFigureBack___c___ctor(StandFigureBack___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall StandFigureBack___c___WaitForLoadAllAssetBundle_b__31_0(
        StandFigureBack___c_o *this,
        StandFigureCollect_o *x,
        const MethodInfo *method)
{
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8
  UnityEngine_Object_o *v5; // x19

  if ( (byte_434F900 & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F900 = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0LL
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0LL )
  {
    sub_B7076C(this, x);
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(StandFigureBack___c_o *, void *, const MethodInfo *))this->klass[1].vtable._3_ToString.method)(
                                 this,
                                 this->klass[2]._1.image,
                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
}