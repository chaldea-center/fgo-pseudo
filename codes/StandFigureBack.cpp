void __fastcall StandFigureBack___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FAE4C & 1) == 0 )
  {
    sub_B16FFC(&StandFigureBack_TypeInfo, v1);
    byte_40FAE4C = 1;
  }
  StandFigureBack_TypeInfo->static_fields->COSTUME_IMAGE_CNT_START = 11;
  StandFigureBack_TypeInfo->static_fields->OPEN_TIME = 0.3;
  StandFigureBack_TypeInfo->static_fields->CLOSE_TIME = 0.3;
}


void __fastcall StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FAE4B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v6);
    byte_40FAE4B = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.standFigureCollectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  WebViewManager_o *Instance; // x0
  SvtMultiPortraitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v24; // x21
  const MethodInfo *v25; // x1
  System_Int32_array **current; // x21
  UIStandFigureR_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UIStandFigureR_o *v34; // x22
  struct System_Collections_Generic_List_StandFigureCollect__o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  StandFigureCollect_o *v40; // x24
  const MethodInfo *v41; // x3
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  StandFigureCollect_o *v48; // x20
  const MethodInfo *v49; // x3
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FAE41 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StandFigureCollect_TypeInfo, v15);
    byte_40FAE41 = 1;
  }
  memset(&v51, 0, sizeof(v51));
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (SvtMultiPortraitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        MasterData_WarQuestSelectionMaster,
                        svtId,
                        limitCount,
                        0LL);
  if ( !EntityListOrderBy
    || (v24 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v19, v23);
    v48 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v44, v45, v46, v47);
    StandFigureCollect___ctor(v48, 0LL, RenderPrefab, v49);
    if ( standFigureCollectList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)standFigureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      goto LABEL_22;
    }
LABEL_23:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    v24,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v51 = v50;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = (System_Int32_array **)v51.fields.current;
    v27 = StandFigureManager__CreateRenderPrefab(v19, v25);
    v34 = v27;
    if ( !v27 )
      sub_B170D4();
    v27->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->fields.svtMultiPortraitEntity,
      current,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v35 = this->fields.standFigureCollectList;
    v40 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v36, v37, v38, v39);
    StandFigureCollect___ctor(v40, (SvtMultiPortraitEntity_o *)current, v34, v41);
    if ( !v35 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x25
  StandFigureCollect_o *v23; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x24
  System_Action_o *v25; // x25

  if ( (byte_40FAE45 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v15);
    sub_B16FFC(&Method_StandFigureBack_EndLoad__, v16);
    byte_40FAE45 = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v17);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v23 = standFigureCollectList->fields._items->m_Items[index];
  if ( !v23
    || (standFigure_k__BackingField = v23->fields._standFigure_k__BackingField,
        v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21),
        System_Action___ctor(v25, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL),
        !standFigure_k__BackingField) )
  {
LABEL_9:
    sub_B170D4();
  }
  UIStandFigureR__SetCharacter_40881948(
    standFigure_k__BackingField,
    svtId,
    imageLimitCount,
    offsetKind,
    faceType,
    v25,
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
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v14; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FAE3F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FAE3F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v16 = v15;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
    {
      current = v16.fields.current;
      if ( !v16.fields.current )
        sub_B170D4();
      monitor = (UIStandFigureR_o *)v16.fields.current[1].monitor;
      if ( !monitor )
        sub_B170D4();
      UIStandFigureR__Destroy(monitor, 0LL);
      v12 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v12 )
        sub_B170D4();
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v14 = this->fields.standFigureCollectList;
    if ( !v14 )
LABEL_20:
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v14,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc;
  v11 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_B16F98(p_baseCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
    sub_B16F98(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B16F98(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_40FAE49 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callback);
    sub_B16FFC(&StandFigureBack_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_5941, v11);
    byte_40FAE49 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_B16F98(
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
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
          {
            if ( v19 )
            {
              v19->fields.style = 3;
              v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v19->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v20;
              sub_B16F98((BattleServantConfConponent_o *)&v19->fields.eventReceiver, v20, v21, v22, v23, v24, v25, v26);
              v27 = (System_Int32_array **)StringLiteral_5941;
              v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5941;
              sub_B16F98(
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
            sub_B170D4();
          }
          v34 = this->fields.baseWindow;
          if ( !v34 )
            goto LABEL_27;
          transform = UnityEngine_GameObject__get_transform(v34, 0LL);
          if ( !transform )
            goto LABEL_27;
          UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL);
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
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0
  UnityEngine_GameObject_o *v24; // x20
  float x; // s8
  float y; // s9
  StandFigureBack_c *v27; // x0
  float z; // s10
  TweenPosition_o *v29; // x20
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Transform_o *v45; // x0
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40FAE4A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callback);
    sub_B16FFC(&StandFigureBack_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_5942, v11);
    byte_40FAE4A = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_B16F98(
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
        v17 = this->fields.baseWindow;
        if ( !v17 )
          goto LABEL_30;
        transform = UnityEngine_GameObject__get_transform(v17, 0LL);
        if ( !transform )
          goto LABEL_30;
        parent = UnityEngine_Transform__get_parent(transform, 0LL);
        if ( !this->fields.closeTransform )
          goto LABEL_30;
        v20 = parent;
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(this->fields.closeTransform, 0LL);
        if ( !v20 )
          goto LABEL_30;
        v46 = UnityEngine_Transform__InverseTransformPoint(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
        v24 = this->fields.baseWindow;
        x = v46.fields.x;
        y = v46.fields.y;
        v27 = StandFigureBack_TypeInfo;
        z = v46.fields.z;
        if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !StandFigureBack_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
          v27 = StandFigureBack_TypeInfo;
        }
        v47.fields.x = x;
        v47.fields.y = y;
        v47.fields.z = z;
        v29 = TweenPosition__Begin(v24, v27->static_fields->OPEN_TIME, v47, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
        {
          if ( v29 )
          {
            v29->fields.style = 3;
            v30 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v29->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v30;
            sub_B16F98((BattleServantConfConponent_o *)&v29->fields.eventReceiver, v30, v31, v32, v33, v34, v35, v36);
            v37 = (System_Int32_array **)StringLiteral_5942;
            v29->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5942;
            sub_B16F98((BattleServantConfConponent_o *)&v29->fields.callWhenFinished, v37, v38, v39, v40, v41, v42, v43);
            return;
          }
LABEL_30:
          sub_B170D4();
        }
        v44 = this->fields.baseWindow;
        if ( !v44 )
          goto LABEL_30;
        v45 = UnityEngine_GameObject__get_transform(v44, 0LL);
        if ( !v45 )
          goto LABEL_30;
        UnityEngine_Transform__set_localPosition(v45, this->fields.basePosition, 0LL);
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
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v6; // x8

  if ( (byte_40FAE3C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index);
    byte_40FAE3C = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_8;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v6 = standFigureCollectList->fields._items->m_Items[index];
  if ( !v6 )
LABEL_8:
    sub_B170D4();
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
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Transform_o *v12; // x8
  UnityEngine_Transform_o *v13; // x19
  int v14; // s0

  if ( (byte_40FAE3E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAE3E = 1;
  }
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) && !this->fields.isBasePosition )
  {
    v5 = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !v5 )
      goto LABEL_25;
    transform = UnityEngine_GameObject__get_transform(v5, 0LL);
    if ( !transform )
      goto LABEL_25;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  }
  StandFigureBack__DestroyFigure(this, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  *(_WORD *)&this->fields.isFirstLoading = 0;
  this->fields.isDisp = 0;
  v8 = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
    {
      v10 = this->fields.baseWindow;
      if ( v10 )
      {
        v11 = UnityEngine_GameObject__get_transform(v10, 0LL);
        v12 = this->fields.closeTransform;
        if ( v12 )
        {
          v13 = v11;
          *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position(v12, 0LL);
          if ( v13 )
          {
            UnityEngine_Transform__set_position(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
            return;
          }
        }
      }
LABEL_25:
      sub_B170D4();
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
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x8
  UnityEngine_Transform_o *v20; // x19
  int v21; // s0

  if ( (byte_40FAE40 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callback);
    byte_40FAE40 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  StandFigureBack__DestroyFigure(this, v6);
  this->fields.baseCallbackFunc = callback;
  sub_B16F98(
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
    v14 = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !v14 )
      goto LABEL_20;
    transform = UnityEngine_GameObject__get_transform(v14, 0LL);
    if ( !transform )
      goto LABEL_20;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
    {
      v17 = this->fields.baseWindow;
      if ( v17 )
      {
        v18 = UnityEngine_GameObject__get_transform(v17, 0LL);
        v19 = this->fields.closeTransform;
        if ( v19 )
        {
          v20 = v18;
          *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(v19, 0LL);
          if ( v20 )
          {
            UnityEngine_Transform__set_position(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__RobSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v7; // x19

  if ( (byte_40FAE3D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v5);
    byte_40FAE3D = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = standFigureCollectList->fields._items->m_Items[index];
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.standFigureCollectList,
    (WarBoardManager_TaskList_o *)v7,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__);
  if ( !v7 )
LABEL_9:
    sub_B170D4();
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
  int32_t v24; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x25
  StandFigureCollect_o *v30; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x22
  System_Action_o *v32; // x25
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  Il2CppClass *v36; // x8
  UIStandFigureR_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Action_o *v42; // x20
  const MethodInfo *v43; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FAE46 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v21);
    sub_B16FFC(&Method_StandFigureBack_EndLoad__, v22);
    byte_40FAE46 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v23);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    v24 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
            (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_26;
    if ( v24 < 2 )
    {
      if ( !standFigureCollectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = standFigureCollectList->fields._items->m_Items[0];
      if ( v30 )
      {
        standFigure_k__BackingField = v30->fields._standFigure_k__BackingField;
        v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
        System_Action___ctor(v32, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetCharacter_40881948(
            standFigure_k__BackingField,
            svtId,
            imageLimitCount,
            offsetKind,
            faceType,
            v32,
            0LL);
          return;
        }
      }
LABEL_26:
      sub_B170D4();
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v45,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.standFigureCollectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v46 = v45;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v46,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
    {
      current = v46.fields.current;
      if ( !v46.fields.current )
        sub_B170D4();
      klass = v46.fields.current[1].klass;
      if ( !klass )
        sub_B170D4();
      monitor = (UIStandFigureR_o *)v46.fields.current[1].monitor;
      if ( !monitor )
        sub_B170D4();
      UIStandFigureR__SetCharacterForImageId(monitor, HIDWORD(klass->_1.namespaze), offsetKind, faceType, 0, 0LL, 0LL);
      v36 = current[1].klass;
      if ( !v36 )
        sub_B170D4();
      v37 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v37 )
        sub_B170D4();
      UIStandFigureR__SetDepth(
        v37,
        ((__int64)v36->_1.byval_arg.data & ~(SLODWORD(v36->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v46,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v42 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v38, v39, v40, v41);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v42, v43);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
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
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  int32_t size; // w8
  StandFigureCollect_o *v13; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x0

  if ( (byte_40FAE42 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v10);
    byte_40FAE42 = 1;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      size = standFigureCollectList->fields._size;
      if ( size < index )
        return;
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
    sub_B170D4();
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
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FAE43 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, *(_QWORD *)&faceType);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    byte_40FAE43 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B170D4();
    monitor = (UIStandFigureR_o *)v12.fields.current[1].monitor;
    if ( !monitor )
      sub_B170D4();
    UIStandFigureR__SetFace(monitor, faceType, fadeTime, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FAE44 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, *(_QWORD *)&faceType);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    byte_40FAE44 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B170D4();
    monitor = (UIStandFigureR_o *)v12.fields.current[1].monitor;
    if ( !monitor )
      sub_B170D4();
    UIStandFigureR__SetFace_40887852(monitor, faceType, formId, 0LL, 0.0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_o *baseCallbackFunc; // x20
  int32_t v33; // w0
  struct System_Collections_Generic_List_StandFigureCollect__o *v34; // x27
  StandFigureCollect_o *v35; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  Il2CppClass *v40; // x8
  UIStandFigureR_o *v41; // x0
  const MethodInfo *v42; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FAE47 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v23);
    sub_B16FFC(&Method_StandFigureBack_EndLoad__, v24);
    byte_40FAE47 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v26 = !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v26 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v27);
  if ( v26 )
  {
    baseCallbackFunc = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v26;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    v33 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
            (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    v34 = this->fields.standFigureCollectList;
    if ( !v34 )
      goto LABEL_32;
    if ( v33 < 2 )
    {
      if ( !v34->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v35 = v34->fields._items->m_Items[0];
      if ( v35 )
      {
        standFigure_k__BackingField = v35->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetCharacter_40881944(
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
      sub_B170D4();
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v44,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.standFigureCollectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v45,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
    {
      current = v45.fields.current;
      if ( !v45.fields.current )
        sub_B170D4();
      klass = v45.fields.current[1].klass;
      if ( !klass )
        sub_B170D4();
      monitor = (UIStandFigureR_o *)v45.fields.current[1].monitor;
      if ( !monitor )
        sub_B170D4();
      UIStandFigureR__SetCharacterForImageId(
        monitor,
        HIDWORD(klass->_1.namespaze),
        offsetKind,
        faceType,
        formId,
        0LL,
        0LL);
      v40 = current[1].klass;
      if ( !v40 )
        sub_B170D4();
      v41 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v41 )
        sub_B170D4();
      UIStandFigureR__SetDepth(
        v41,
        ((__int64)v40->_1.byval_arg.data & ~(SLODWORD(v40->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v45,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v42);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall StandFigureBack__WaitForLoadAllAssetBundle(
        StandFigureBack_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FAE48 & 1) == 0 )
  {
    sub_B16FFC(&StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, action);
    byte_40FAE48 = 1;
  }
  v7 = sub_B170CC(StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, action, method, v3, v4);
  StandFigureBack__WaitForLoadAllAssetBundle_d__31___ctor(
    (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = action;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


bool __fastcall StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  bool result; // w0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *standFigureCollectList; // x0
  void *monitor; // x8
  UnityEngine_Behaviour_o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_assetRendered_5__2; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  StandFigureBack___c_c *v24; // x0
  struct StandFigureBack___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__31_0; // x21
  Il2CppObject *v27; // x22
  struct StandFigureBack___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t v42; // w0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v49; // x0
  void *v50; // x8
  UnityEngine_Behaviour_o *v51; // x0
  Il2CppObject **p__2__current; // x19
  int v53; // w20
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-78h] BYREF
  int v55[2]; // [xsp+20h] [xbp-60h]
  int v56; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40F7A63 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_StandFigureCollect___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v6);
    sub_B16FFC(&Method_System_Func_StandFigureCollect__bool___ctor__, v7);
    sub_B16FFC(&System_Func_StandFigureCollect__bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    sub_B16FFC(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__, v10);
    sub_B16FFC(&StandFigureBack___c_TypeInfo, v11);
    byte_40F7A63 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v56 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_assetRendered_5__2 = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields._assetRendered_5__2;
    this->fields.__1__state = -1;
  }
  else
  {
    result = 0;
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_45;
    standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_45;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v54,
      standFigureCollectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v57 = v54;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v57,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
    {
      if ( !v57.fields.current )
        sub_B170D4();
      monitor = v57.fields.current[1].monitor;
      if ( !monitor )
        sub_B170D4();
      v17 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 3);
      if ( !v17 )
        sub_B170D4();
      UnityEngine_Behaviour__set_enabled(v17, 0, 0LL);
    }
    v55[0] = 95;
    v56 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v57,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v56 = 0;
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v24 = StandFigureBack___c_TypeInfo;
    if ( (BYTE3(StandFigureBack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo);
      v24 = StandFigureBack___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = StandFigureBack___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_StandFigureCollect__bool__TypeInfo,
                                                                                      v19,
                                                                                      v20,
                                                                                      v21,
                                                                                      v22);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__31_0,
        v27,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_StandFigureCollect__bool___ctor__);
      v28 = StandFigureBack___c_TypeInfo->static_fields;
      v28->__9__31_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__31_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v28->__9__31_0,
        (System_Int32_array **)_9__31_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    v35 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v23,
            (System_Func_TSource__bool__o *)_9__31_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !this )
LABEL_45:
      sub_B170D4();
    this->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)v35;
    p_assetRendered_5__2 = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields._assetRendered_5__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._assetRendered_5__2,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          *p_assetRendered_5__2,
          (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( !_4__this )
    goto LABEL_45;
  if ( v42 != System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v43, v44, v45, v46, v47, v48);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  v49 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.standFigureCollectList;
  if ( !v49 )
    goto LABEL_45;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v54,
    v49,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v57 = v54;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    if ( !v57.fields.current )
      sub_B170D4();
    v50 = v57.fields.current[1].monitor;
    if ( !v50 )
      sub_B170D4();
    v51 = (UnityEngine_Behaviour_o *)*((_QWORD *)v50 + 3);
    if ( !v51 )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(v51, 1, 0LL);
  }
  v55[0] = 254;
  v53 = ++v56;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( v53 && v55[v53 - 1] == 254 )
    v56 = v53 - 1;
  ActionExtensions__Call(this->fields.action, 0LL);
  return 0;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__31_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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

  if ( (byte_40F7A61 & 1) == 0 )
  {
    sub_B16FFC(&StandFigureBack___c_TypeInfo, v1);
    byte_40F7A61 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(StandFigureBack___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)StandFigureBack___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  struct UITexture_o *bodyTexture; // x0
  UnityEngine_Object_o *v6; // x19

  if ( (byte_40F7A62 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40F7A62 = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0LL
    || (bodyTexture = standFigure_k__BackingField->fields.bodyTexture) == 0LL )
  {
    sub_B170D4();
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer, const MethodInfo *))bodyTexture->klass->vtable._26_get_mainTexture.method)(
                                 bodyTexture,
                                 bodyTexture->klass->vtable._27_set_mainTexture.methodPtr,
                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
}