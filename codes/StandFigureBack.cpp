void __fastcall StandFigureBack___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4215390 & 1) == 0 )
  {
    sub_B0D8A4(&StandFigureBack_TypeInfo, v1);
    byte_4215390 = 1;
  }
  StandFigureBack_TypeInfo->static_fields->COSTUME_IMAGE_CNT_START = 11;
  StandFigureBack_TypeInfo->static_fields->OPEN_TIME = 0.3;
  StandFigureBack_TypeInfo->static_fields->CLOSE_TIME = 0.3;
}


void __fastcall StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421538F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v4);
    byte_421538F = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.standFigureCollectList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__CreatePrefab(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *baseStandFigure; // x20
  bool v17; // w0
  __int64 v18; // x8
  UnityEngine_GameObject_o *v19; // x20
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v23; // x21
  const MethodInfo *v24; // x1
  System_Int32_array **current; // x21
  UIStandFigureR_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UIStandFigureR_o *v33; // x22
  struct System_Collections_Generic_List_StandFigureCollect__o *v34; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  StandFigureCollect_o *v37; // x24
  const MethodInfo *v38; // x3
  __int64 v39; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  StandFigureCollect_o *v44; // x20
  const MethodInfo *v45; // x3
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4215385 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&StandFigureCollect_TypeInfo, v15);
    byte_4215385 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = UnityEngine_Object__op_Inequality(baseStandFigure, 0LL, 0LL);
  v18 = 32LL;
  if ( v17 )
    v18 = 40LL;
  v19 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v18);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_23;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0LL);
  if ( !EntityListOrderBy
    || (v23 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v19, v22);
    v44 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v42, v43);
    StandFigureCollect___ctor(v44, 0LL, RenderPrefab, v45);
    if ( standFigureCollectList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)standFigureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      goto LABEL_22;
    }
LABEL_23:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v46,
    v23,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = (System_Int32_array **)v47.fields.current;
    v26 = StandFigureManager__CreateRenderPrefab(v19, v24);
    v33 = v26;
    if ( !v26 )
      sub_B0D97C(0LL);
    v26->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v26->fields.svtMultiPortraitEntity,
      current,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v34 = this->fields.standFigureCollectList;
    v37 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v35, v36);
    StandFigureCollect___ctor(v37, (SvtMultiPortraitEntity_o *)current, v33, v38);
    if ( !v34 )
      sub_B0D97C(v39);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x25
  StandFigureCollect_o *v22; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x24
  System_Action_o *v24; // x25

  if ( (byte_4215389 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v15);
    sub_B0D8A4(&Method_StandFigureBack_EndLoad__, v16);
    byte_4215389 = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v17);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v22 = standFigureCollectList->fields._items->m_Items[index];
  if ( !v22
    || (standFigure_k__BackingField = v22->fields._standFigure_k__BackingField,
        v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20),
        System_Action___ctor(v24, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL),
        !standFigure_k__BackingField) )
  {
LABEL_9:
    sub_B0D97C(v18);
  }
  UIStandFigureR__SetCharacter_40550840(
    standFigure_k__BackingField,
    svtId,
    imageLimitCount,
    offsetKind,
    faceType,
    v24,
    0LL);
}


void __fastcall StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v10; // x0
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4215383 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4215383 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v10 )
        break;
      current = v16.fields.current;
      if ( !v16.fields.current )
        sub_B0D97C(v10);
      monitor = (UIStandFigureR_o *)v16.fields.current[1].monitor;
      if ( !monitor )
        sub_B0D97C(0LL);
      UIStandFigureR__Destroy(monitor, 0LL);
      v13 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v13 )
        sub_B0D97C(0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
LABEL_20:
      sub_B0D97C(standFigureCollectList);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)standFigureCollectList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
  }
}


void __fastcall StandFigureBack__EndClose(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_baseCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc;
  v11 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_B0D840(p_baseCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
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
    sub_B0D840(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  _BOOL4 isFirstLoading; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v17; // x20
  StandFigureBack_c *v18; // x0
  TweenPosition_o *v19; // x20
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_421538D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, callback);
    sub_B0D8A4(&StandFigureBack_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_5975/*"EndFadein"*/, v11);
    byte_421538D = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_B0D840(
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
          v17 = this->fields.baseWindow;
          v18 = StandFigureBack_TypeInfo;
          if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !StandFigureBack_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
            v18 = StandFigureBack_TypeInfo;
          }
          v19 = TweenPosition__Begin(v17, v18->static_fields->OPEN_TIME, this->fields.basePosition, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v19,
                                                     0LL,
                                                     0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( v19 )
            {
              v19->fields.style = 3;
              v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v19->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v20;
              sub_B0D840((BattleServantConfConponent_o *)&v19->fields.eventReceiver, v20, v21, v22, v23, v24, v25, v26);
              v27 = (System_Int32_array **)StringLiteral_5975/*"EndFadein"*/;
              v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5975/*"EndFadein"*/;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v19->fields.callWhenFinished,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32,
                v33);
              return;
            }
LABEL_27:
            sub_B0D97C(gameObject);
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
    StandFigureBack__EndFadein(this, v12);
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
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  _BOOL4 isDisp; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  UnityEngine_GameObject_o *v21; // x20
  float x; // s8
  float y; // s9
  StandFigureBack_c *v24; // x0
  float z; // s10
  TweenPosition_o *v26; // x20
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_421538E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, callback);
    sub_B0D8A4(&StandFigureBack_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_5976/*"EndFadeout"*/, v11);
    byte_421538E = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_B0D840(
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
        v17 = (UnityEngine_Transform_o *)gameObject;
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_position(this->fields.closeTransform, 0LL);
        if ( !v17 )
          goto LABEL_30;
        v41 = UnityEngine_Transform__InverseTransformPoint(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
        v21 = this->fields.baseWindow;
        x = v41.fields.x;
        y = v41.fields.y;
        v24 = StandFigureBack_TypeInfo;
        z = v41.fields.z;
        if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !StandFigureBack_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
          v24 = StandFigureBack_TypeInfo;
        }
        v42.fields.x = x;
        v42.fields.y = y;
        v42.fields.z = z;
        v26 = TweenPosition__Begin(v21, v24->static_fields->OPEN_TIME, v42, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v26,
                                                   0LL,
                                                   0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v26 )
          {
            v26->fields.style = 3;
            v27 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v26->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v27;
            sub_B0D840((BattleServantConfConponent_o *)&v26->fields.eventReceiver, v27, v28, v29, v30, v31, v32, v33);
            v34 = (System_Int32_array **)StringLiteral_5976/*"EndFadeout"*/;
            v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5976/*"EndFadeout"*/;
            sub_B0D840((BattleServantConfConponent_o *)&v26->fields.callWhenFinished, v34, v35, v36, v37, v38, v39, v40);
            return;
          }
LABEL_30:
          sub_B0D97C(gameObject);
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
  StandFigureBack__EndClose(this, v12);
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
  if ( (byte_4215380 & 1) == 0 )
  {
    this = (StandFigureBack_o *)sub_B0D8A4(
                                  &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                  *(_QWORD *)&index);
    byte_4215380 = 1;
  }
  standFigureCollectList = v4->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_8;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v6 = standFigureCollectList->fields._items->m_Items[index];
  if ( !v6 )
LABEL_8:
    sub_B0D97C(this);
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

  if ( (byte_4215382 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215382 = 1;
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
      sub_B0D97C(transform);
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
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v15; // x8
  UnityEngine_Transform_o *v16; // x19
  int v17; // s0

  if ( (byte_4215384 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, callback);
    byte_4215384 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  StandFigureBack__DestroyFigure(this, v6);
  this->fields.baseCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
        v15 = this->fields.closeTransform;
        if ( v15 )
        {
          v16 = (UnityEngine_Transform_o *)gameObject;
          *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position(v15, 0LL);
          if ( v16 )
          {
            UnityEngine_Transform__set_position(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_B0D97C(gameObject);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v7; // x19

  v4 = this;
  if ( (byte_4215381 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__, *(_QWORD *)&index);
    this = (StandFigureBack_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v5);
    byte_4215381 = 1;
  }
  standFigureCollectList = v4->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = standFigureCollectList->fields._items->m_Items[index];
  this = (StandFigureBack_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.standFigureCollectList,
                                (WarBoardManager_TaskList_o *)v7,
                                (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__);
  if ( !v7 )
LABEL_9:
    sub_B0D97C(this);
  return v7->fields._standFigure_k__BackingField;
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x25
  StandFigureCollect_o *v28; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x22
  System_Action_o *v30; // x25
  _BOOL8 v31; // x0
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v35; // x0
  Il2CppClass *v36; // x8
  UIStandFigureR_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x20
  const MethodInfo *v41; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_421538A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v15);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v21);
    sub_B0D8A4(&Method_StandFigureBack_EndLoad__, v22);
    byte_421538A = 1;
  }
  memset(&v44, 0, sizeof(v44));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v23);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    v24 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
            (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_26;
    if ( (int)v24 < 2 )
    {
      if ( !standFigureCollectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = standFigureCollectList->fields._items->m_Items[0];
      if ( v28 )
      {
        standFigure_k__BackingField = v28->fields._standFigure_k__BackingField;
        v30 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
        System_Action___ctor(v30, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetCharacter_40550840(
            standFigure_k__BackingField,
            svtId,
            imageLimitCount,
            offsetKind,
            faceType,
            v30,
            0LL);
          return;
        }
      }
LABEL_26:
      sub_B0D97C(v24);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v43,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.standFigureCollectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v44 = v43;
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v44,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v31 )
        break;
      current = v44.fields.current;
      if ( !v44.fields.current )
        sub_B0D97C(v31);
      klass = v44.fields.current[1].klass;
      if ( !klass )
        sub_B0D97C(v31);
      monitor = (UIStandFigureR_o *)v44.fields.current[1].monitor;
      if ( !monitor )
        sub_B0D97C(0LL);
      v35 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              HIDWORD(klass->_1.namespaze),
              offsetKind,
              faceType,
              0,
              0LL,
              0LL);
      v36 = current[1].klass;
      if ( !v36 )
        sub_B0D97C(v35);
      v37 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v37 )
        sub_B0D97C(0LL);
      UIStandFigureR__SetDepth(
        v37,
        ((__int64)v36->_1.byval_arg.data & ~(SLODWORD(v36->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v44,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v40, v41);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceType(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  int32_t size; // w8
  StandFigureCollect_o *v14; // x8

  if ( (byte_4215386 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v10);
    byte_4215386 = 1;
  }
  standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                                      (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  if ( ((unsigned __int8)standFigure_k__BackingField & 1) != 0 )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      size = standFigureCollectList->fields._size;
      if ( size < index )
        return;
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v14 = standFigureCollectList->fields._items->m_Items[index];
      if ( v14 )
      {
        standFigure_k__BackingField = v14->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetFace(standFigure_k__BackingField, faceType, fadeTime, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(standFigure_k__BackingField);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAll(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v11; // x0
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4215387 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, *(_QWORD *)&faceType);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    byte_4215387 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v11 )
      break;
    if ( !v13.fields.current )
      sub_B0D97C(v11);
    monitor = (UIStandFigureR_o *)v13.fields.current[1].monitor;
    if ( !monitor )
      sub_B0D97C(0LL);
    UIStandFigureR__SetFace(monitor, faceType, fadeTime, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAndForm(
        StandFigureBack_o *this,
        int32_t faceType,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v11; // x0
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4215388 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, *(_QWORD *)&faceType);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    byte_4215388 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v11 )
      break;
    if ( !v13.fields.current )
      sub_B0D97C(v11);
    monitor = (UIStandFigureR_o *)v13.fields.current[1].monitor;
    if ( !monitor )
      sub_B0D97C(0LL);
    UIStandFigureR__SetFace_40555568(monitor, faceType, formId, 0LL, 0.0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  int v26; // w27
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *baseCallbackFunc; // x20
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v32; // x27
  StandFigureCollect_o *v33; // x8
  _BOOL8 v34; // x0
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v38; // x0
  Il2CppClass *v39; // x8
  UIStandFigureR_o *v40; // x0
  const MethodInfo *v41; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_421538B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v23);
    sub_B0D8A4(&Method_StandFigureBack_EndLoad__, v24);
    byte_421538B = 1;
  }
  memset(&v44, 0, sizeof(v44));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v26 = !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v26 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v27);
  if ( v26 )
  {
    baseCallbackFunc = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v26;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                                        (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    v32 = this->fields.standFigureCollectList;
    if ( !v32 )
      goto LABEL_32;
    if ( (int)standFigure_k__BackingField < 2 )
    {
      if ( !v32->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v33 = v32->fields._items->m_Items[0];
      if ( v33 )
      {
        standFigure_k__BackingField = v33->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetCharacter_40550836(
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
      sub_B0D97C(standFigure_k__BackingField);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v43,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.standFigureCollectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v44 = v43;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v44,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v34 )
        break;
      current = v44.fields.current;
      if ( !v44.fields.current )
        sub_B0D97C(v34);
      klass = v44.fields.current[1].klass;
      if ( !klass )
        sub_B0D97C(v34);
      monitor = (UIStandFigureR_o *)v44.fields.current[1].monitor;
      if ( !monitor )
        sub_B0D97C(0LL);
      v38 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              HIDWORD(klass->_1.namespaze),
              offsetKind,
              faceType,
              formId,
              0LL,
              0LL);
      v39 = current[1].klass;
      if ( !v39 )
        sub_B0D97C(v38);
      v40 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v40 )
        sub_B0D97C(0LL);
      UIStandFigureR__SetDepth(
        v40,
        ((__int64)v39->_1.byval_arg.data & ~(SLODWORD(v39->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v44,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v41);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall StandFigureBack__WaitForLoadAllAssetBundle(
        StandFigureBack_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_421538C & 1) == 0 )
  {
    sub_B0D8A4(&StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, action);
    byte_421538C = 1;
  }
  v5 = sub_B0D974(StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, action, method);
  StandFigureBack__WaitForLoadAllAssetBundle_d__31___ctor(
    (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = action;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)action, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct StandFigureBack_o *_4__this; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *standFigureCollectList; // x0
  _BOOL8 v15; // x0
  void *monitor; // x8
  UnityEngine_Behaviour_o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_assetRendered_5__2; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  StandFigureBack___c_c *v22; // x0
  struct StandFigureBack___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__31_0; // x21
  Il2CppObject *v25; // x22
  struct StandFigureBack___c_StaticFields *v26; // x0
  _BOOL8 v27; // x0
  void *v28; // x8
  UnityEngine_Behaviour_o *v29; // x0
  Il2CppObject **p__2__current; // x19
  int v31; // w20
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-78h] BYREF
  int v34[2]; // [xsp+20h] [xbp-60h]
  int v35; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4211729 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_StandFigureCollect___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v6);
    sub_B0D8A4(&Method_System_Func_StandFigureCollect__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_StandFigureCollect__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    sub_B0D8A4(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__, v10);
    sub_B0D8A4(&StandFigureBack___c_TypeInfo, v11);
    byte_4211729 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
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
      &v33,
      standFigureCollectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v36 = v33;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v15 )
        break;
      if ( !v36.fields.current )
        sub_B0D97C(v15);
      monitor = v36.fields.current[1].monitor;
      if ( !monitor )
        sub_B0D97C(v15);
      v17 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 3);
      if ( !v17 )
        sub_B0D97C(0LL);
      UnityEngine_Behaviour__set_enabled(v17, 0, 0LL);
    }
    v34[0] = 95;
    v35 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v35 = 0;
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v22 = StandFigureBack___c_TypeInfo;
    if ( (BYTE3(StandFigureBack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo);
      v22 = StandFigureBack___c_TypeInfo;
    }
    static_fields = v22->static_fields;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = StandFigureBack___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_StandFigureCollect__bool__TypeInfo,
                                                                                      v19,
                                                                                      v20);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__31_0,
        v25,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_StandFigureCollect__bool___ctor__);
      v26 = StandFigureBack___c_TypeInfo->static_fields;
      v26->__9__31_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__31_0;
      sub_B0D840(&v26->__9__31_0, _9__31_0);
    }
    standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(v21, (System_Func_TSource__bool__o *)_9__31_0, (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !this )
      goto LABEL_45;
    this->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)standFigureCollectList;
    p_assetRendered_5__2 = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields._assetRendered_5__2;
    sub_B0D840(&this->fields._assetRendered_5__2, standFigureCollectList);
  }
  standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(*p_assetRendered_5__2, (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( !_4__this )
    goto LABEL_45;
  if ( (_DWORD)standFigureCollectList != System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                                           (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B0D840(p__2__current, 0LL);
    LOBYTE(standFigureCollectList) = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return (char)standFigureCollectList;
  }
  standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
LABEL_45:
    sub_B0D97C(standFigureCollectList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    standFigureCollectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v36 = v33;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v27 )
      break;
    if ( !v36.fields.current )
      sub_B0D97C(v27);
    v28 = v36.fields.current[1].monitor;
    if ( !v28 )
      sub_B0D97C(v27);
    v29 = (UnityEngine_Behaviour_o *)*((_QWORD *)v28 + 3);
    if ( !v29 )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(v29, 1, 0LL);
  }
  v34[0] = 254;
  v31 = ++v35;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( v31 && v34[v31 - 1] == 254 )
    v35 = v31 - 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__31_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct StandFigureBack___c_StaticFields *static_fields; // x0

  if ( (byte_4211727 & 1) == 0 )
  {
    sub_B0D8A4(&StandFigureBack___c_TypeInfo, v1);
    byte_4211727 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(StandFigureBack___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = StandFigureBack___c_TypeInfo->static_fields;
  static_fields->__9 = (struct StandFigureBack___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4211728 & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4211728 = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0LL
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0LL )
  {
    sub_B0D97C(this);
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