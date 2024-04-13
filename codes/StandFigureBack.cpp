void __fastcall StandFigureBack___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E92E4 & 1) == 0 )
  {
    sub_B5D5C4(&StandFigureBack_TypeInfo, v1, v2, v3);
    byte_42E92E4 = 1;
  }
  StandFigureBack_TypeInfo->static_fields->COSTUME_IMAGE_CNT_START = 11;
  StandFigureBack_TypeInfo->static_fields->OPEN_TIME = 0.3;
  StandFigureBack_TypeInfo->static_fields->CLOSE_TIME = 0.3;
}


void __fastcall StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E92E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v5, v6, v7);
    byte_42E92E3 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.standFigureCollectList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall StandFigureBack__CreatePrefab(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  UnityEngine_Object_o *baseStandFigure; // x20
  bool v35; // w0
  __int64 v36; // x8
  UnityEngine_GameObject_o *v37; // x20
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  const MethodInfo *v41; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v42; // x21
  const MethodInfo *v43; // x1
  System_Int32_array **current; // x21
  UIStandFigureR_o *v45; // x0
  __int64 v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UIStandFigureR_o *v53; // x22
  struct System_Collections_Generic_List_StandFigureCollect__o *v54; // x23
  StandFigureCollect_o *v55; // x24
  const MethodInfo *v56; // x3
  __int64 v57; // x0
  __int64 v58; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  StandFigureCollect_o *v61; // x20
  const MethodInfo *v62; // x3
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E92D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, svtId, limitCount, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&StandFigureCollect_TypeInfo, v31, v32, v33);
    byte_42E92D9 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v35 = UnityEngine_Object__op_Inequality(baseStandFigure, 0LL, 0LL);
  v36 = 32LL;
  if ( v35 )
    v36 = 40LL;
  v37 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_23;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0LL);
  if ( !EntityListOrderBy
    || (v42 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v37, v41);
    v61 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v61, 0LL, RenderPrefab, v62);
    if ( standFigureCollectList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)standFigureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      goto LABEL_22;
    }
LABEL_23:
    sub_B5D69C(Instance, v39);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v63,
    v42,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v64 = v63;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v64,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = (System_Int32_array **)v64.fields.current;
    v45 = StandFigureManager__CreateRenderPrefab(v37, v43);
    v53 = v45;
    if ( !v45 )
      sub_B5D69C(0LL, v46);
    v45->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v45->fields.svtMultiPortraitEntity,
      current,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    v54 = this->fields.standFigureCollectList;
    v55 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v55, (SvtMultiPortraitEntity_o *)current, v53, v56);
    if ( !v54 )
      sub_B5D69C(v57, v58);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v54,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v64,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  const MethodInfo *v21; // x3
  __int64 v22; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x25
  StandFigureCollect_o *v25; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x24
  System_Action_o *v27; // x25

  if ( (byte_42E92DD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, svtId, imageLimitCount, *(_QWORD *)&offsetKind);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v15, v16, v17);
    sub_B5D5C4(&Method_StandFigureBack_EndLoad__, v18, v19, v20);
    byte_42E92DD = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v21);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v25 = standFigureCollectList->fields._items->m_Items[index];
  if ( !v25
    || (standFigure_k__BackingField = v25->fields._standFigure_k__BackingField,
        v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v27, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL),
        !standFigure_k__BackingField) )
  {
LABEL_9:
    sub_B5D69C(v22, v23);
  }
  UIStandFigureR__SetCharacter_40971044(
    standFigure_k__BackingField,
    svtId,
    imageLimitCount,
    offsetKind,
    faceType,
    v27,
    0LL);
}


void __fastcall StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  __int64 v29; // x1
  UnityEngine_Component_o *v30; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E92D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E92D7 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v25 )
        break;
      current = v33.fields.current;
      if ( !v33.fields.current )
        sub_B5D69C(v25, v26);
      monitor = (UIStandFigureR_o *)v33.fields.current[1].monitor;
      if ( !monitor )
        sub_B5D69C(0LL, v26);
      UIStandFigureR__Destroy(monitor, 0LL);
      v30 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v30 )
        sub_B5D69C(0LL, v29);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v30, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v33,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
LABEL_20:
      sub_B5D69C(standFigureCollectList, v23);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)standFigureCollectList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc;
  v12 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_B5D560(p_baseCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B5D560(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  const MethodInfo *v16; // x1
  _BOOL4 isFirstLoading; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v22; // x20
  StandFigureBack_c *v23; // x0
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

  if ( (byte_42E92E1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&StandFigureBack_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_6037/*"EndFadein"*/, v13, v14, v15);
    byte_42E92E1 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_B5D560(
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
          v22 = this->fields.baseWindow;
          v23 = StandFigureBack_TypeInfo;
          if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !StandFigureBack_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
            v23 = StandFigureBack_TypeInfo;
          }
          v24 = TweenPosition__Begin(v22, v23->static_fields->OPEN_TIME, this->fields.basePosition, 0LL);
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
              sub_B5D560((BattleServantConfConponent_o *)&v24->fields.eventReceiver, v25, v26, v27, v28, v29, v30, v31);
              v32 = (System_Int32_array **)StringLiteral_6037/*"EndFadein"*/;
              v24->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6037/*"EndFadein"*/;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v24->fields.callWhenFinished,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38);
              return;
            }
LABEL_27:
            sub_B5D69C(gameObject, v19);
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
    StandFigureBack__EndFadein(this, v16);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  const MethodInfo *v16; // x1
  _BOOL4 isDisp; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  UnityEngine_GameObject_o *v25; // x20
  float x; // s8
  float y; // s9
  StandFigureBack_c *v28; // x0
  float z; // s10
  TweenPosition_o *v30; // x20
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42E92E2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&StandFigureBack_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_6038/*"EndFadeout"*/, v13, v14, v15);
    byte_42E92E2 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_B5D560(
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
        v21 = (UnityEngine_Transform_o *)gameObject;
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(this->fields.closeTransform, 0LL);
        if ( !v21 )
          goto LABEL_30;
        v45 = UnityEngine_Transform__InverseTransformPoint(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
        v25 = this->fields.baseWindow;
        x = v45.fields.x;
        y = v45.fields.y;
        v28 = StandFigureBack_TypeInfo;
        z = v45.fields.z;
        if ( (BYTE3(StandFigureBack_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !StandFigureBack_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
          v28 = StandFigureBack_TypeInfo;
        }
        v46.fields.x = x;
        v46.fields.y = y;
        v46.fields.z = z;
        v30 = TweenPosition__Begin(v25, v28->static_fields->OPEN_TIME, v46, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v30,
                                                   0LL,
                                                   0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v30 )
          {
            v30->fields.style = 3;
            v31 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v30->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v31;
            sub_B5D560((BattleServantConfConponent_o *)&v30->fields.eventReceiver, v31, v32, v33, v34, v35, v36, v37);
            v38 = (System_Int32_array **)StringLiteral_6038/*"EndFadeout"*/;
            v30->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6038/*"EndFadeout"*/;
            sub_B5D560((BattleServantConfConponent_o *)&v30->fields.callWhenFinished, v38, v39, v40, v41, v42, v43, v44);
            return;
          }
LABEL_30:
          sub_B5D69C(gameObject, v16);
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
  StandFigureBack__EndClose(this, v16);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__GetSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  StandFigureBack_o *v5; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v7; // x8

  v5 = this;
  if ( (byte_42E92D4 & 1) == 0 )
  {
    this = (StandFigureBack_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                  index,
                                  (_DWORD)method,
                                  v3);
    byte_42E92D4 = 1;
  }
  standFigureCollectList = v5->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_8;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v7 = standFigureCollectList->fields._items->m_Items[index];
  if ( !v7 )
LABEL_8:
    sub_B5D69C(this, *(_QWORD *)&index);
  return v7->fields._standFigure_k__BackingField;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v10; // x8
  UnityEngine_Transform_o *v11; // x19
  int v12; // s0

  if ( (byte_42E92D6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E92D6 = 1;
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
  StandFigureBack__DestroyFigure(this, v6);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(transform, 0, 0LL);
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
      transform = this->fields.baseWindow;
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        v10 = this->fields.closeTransform;
        if ( v10 )
        {
          v11 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(v10, 0LL);
          if ( v11 )
          {
            UnityEngine_Transform__set_position(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
            return;
          }
        }
      }
LABEL_25:
      sub_B5D69C(transform, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__InitStandFigure(
        StandFigureBack_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v17; // x8
  UnityEngine_Transform_o *v18; // x19
  int v19; // s0

  if ( (byte_42E92D8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E92D8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  StandFigureBack__DestroyFigure(this, v8);
  this->fields.baseCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseCallbackFunc,
    (System_Int32_array **)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
        v17 = this->fields.closeTransform;
        if ( v17 )
        {
          v18 = (UnityEngine_Transform_o *)gameObject;
          *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(v17, 0LL);
          if ( v18 )
          {
            UnityEngine_Transform__set_position(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_B5D69C(gameObject, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__RobSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  StandFigureBack_o *v5; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v10; // x19

  v5 = this;
  if ( (byte_42E92D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__, index, (_DWORD)method, v3);
    this = (StandFigureBack_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                  v6,
                                  v7,
                                  v8);
    byte_42E92D5 = 1;
  }
  standFigureCollectList = v5->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_9;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = standFigureCollectList->fields._items->m_Items[index];
  this = (StandFigureBack_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v5->fields.standFigureCollectList,
                                (WarBoardManager_TaskList_o *)v10,
                                (const MethodInfo_305896C *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__);
  if ( !v10 )
LABEL_9:
    sub_B5D69C(this, *(_QWORD *)&index);
  return v10->fields._standFigure_k__BackingField;
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  const MethodInfo *v39; // x3
  __int64 v40; // x0
  __int64 v41; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x25
  StandFigureCollect_o *v43; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x22
  System_Action_o *v45; // x25
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppClass *v53; // x8
  UIStandFigureR_o *v54; // x0
  System_Action_o *v55; // x20
  const MethodInfo *v56; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E92DE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, svtId, imageLimitCount, *(_QWORD *)&offsetKind);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v33, v34, v35);
    sub_B5D5C4(&Method_StandFigureBack_EndLoad__, v36, v37, v38);
    byte_42E92DE = 1;
  }
  memset(&v59, 0, sizeof(v59));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v39);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    v40 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
            (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_26;
    if ( (int)v40 < 2 )
    {
      if ( !standFigureCollectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = standFigureCollectList->fields._items->m_Items[0];
      if ( v43 )
      {
        standFigure_k__BackingField = v43->fields._standFigure_k__BackingField;
        v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v45, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetCharacter_40971044(
            standFigure_k__BackingField,
            svtId,
            imageLimitCount,
            offsetKind,
            faceType,
            v45,
            0LL);
          return;
        }
      }
LABEL_26:
      sub_B5D69C(v40, v41);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v58,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.standFigureCollectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v59 = v58;
    while ( 1 )
    {
      v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v59,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v46 )
        break;
      current = v59.fields.current;
      if ( !v59.fields.current )
        sub_B5D69C(v46, v47);
      klass = v59.fields.current[1].klass;
      if ( !klass )
        sub_B5D69C(v46, v47);
      monitor = (UIStandFigureR_o *)v59.fields.current[1].monitor;
      if ( !monitor )
        sub_B5D69C(0LL, v47);
      v51 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              HIDWORD(klass->_1.namespaze),
              offsetKind,
              faceType,
              0,
              0LL,
              0,
              0LL);
      v53 = current[1].klass;
      if ( !v53 )
        sub_B5D69C(v51, v52);
      v54 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v54 )
        sub_B5D69C(0LL, v52);
      UIStandFigureR__SetDepth(
        v54,
        ((__int64)v53->_1.byval_arg.data & ~(SLODWORD(v53->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v59,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v55 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v55, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v55, v56);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


void __fastcall StandFigureBack__SetFaceType(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        int32_t index,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x21
  int32_t size; // w8
  StandFigureCollect_o *v19; // x8

  if ( (byte_42E92DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, faceType, index, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v12, v13, v14);
    byte_42E92DA = 1;
  }
  standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                                      (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  if ( ((unsigned __int8)standFigure_k__BackingField & 1) != 0 )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      size = standFigureCollectList->fields._size;
      if ( size < index )
        return;
      if ( size <= (unsigned int)index )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v19 = standFigureCollectList->fields._items->m_Items[index];
      if ( v19 )
      {
        standFigure_k__BackingField = v19->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetFace(standFigure_k__BackingField, faceType, fadeTime, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(standFigure_k__BackingField, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAll(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E92DB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__,
      faceType,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v14, v15, v16);
    byte_42E92DB = 1;
  }
  memset(&v21, 0, sizeof(v21));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B5D69C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v18 )
      break;
    if ( !v21.fields.current )
      sub_B5D69C(v18, v19);
    monitor = (UIStandFigureR_o *)v21.fields.current[1].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v19);
    UIStandFigureR__SetFace(monitor, faceType, fadeTime, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAndForm(
        StandFigureBack_o *this,
        int32_t faceType,
        int32_t formId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E92DC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__,
      faceType,
      formId,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v13, v14, v15);
    byte_42E92DC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_B5D69C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)standFigureCollectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v17 )
      break;
    if ( !v20.fields.current )
      sub_B5D69C(v17, v18);
    monitor = (UIStandFigureR_o *)v20.fields.current[1].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v18);
    UIStandFigureR__SetFace_40975992(monitor, faceType, formId, 0LL, 0.0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  int v43; // w27
  const MethodInfo *v44; // x3
  System_Action_o *baseCallbackFunc; // x20
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  __int64 v47; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *v48; // x27
  StandFigureCollect_o *v49; // x8
  _BOOL8 v50; // x0
  __int64 v51; // x1
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppClass *v57; // x8
  UIStandFigureR_o *v58; // x0
  const MethodInfo *v59; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E92DF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, svtId, imageLimitCount, *(_QWORD *)&offsetKind);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v36, v37, v38);
    sub_B5D5C4(&Method_StandFigureBack_EndLoad__, v39, v40, v41);
    byte_42E92DF = 1;
  }
  memset(&v62, 0, sizeof(v62));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v43 = !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v43 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v44);
  if ( v43 )
  {
    baseCallbackFunc = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v43;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigure_k__BackingField = (UIStandFigureR_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                                        (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    v48 = this->fields.standFigureCollectList;
    if ( !v48 )
      goto LABEL_32;
    if ( (int)standFigure_k__BackingField < 2 )
    {
      if ( !v48->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v49 = v48->fields._items->m_Items[0];
      if ( v49 )
      {
        standFigure_k__BackingField = v49->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetCharacter_40971040(
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
      sub_B5D69C(standFigure_k__BackingField, v47);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v61,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.standFigureCollectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v62 = v61;
    while ( 1 )
    {
      v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v62,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v50 )
        break;
      current = v62.fields.current;
      if ( !v62.fields.current )
        sub_B5D69C(v50, v51);
      klass = v62.fields.current[1].klass;
      if ( !klass )
        sub_B5D69C(v50, v51);
      monitor = (UIStandFigureR_o *)v62.fields.current[1].monitor;
      if ( !monitor )
        sub_B5D69C(0LL, v51);
      v55 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              HIDWORD(klass->_1.namespaze),
              offsetKind,
              faceType,
              formId,
              0LL,
              isPhotoWithMaster,
              0LL);
      v57 = current[1].klass;
      if ( !v57 )
        sub_B5D69C(v55, v56);
      v58 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v58 )
        sub_B5D69C(0LL, v56);
      UIStandFigureR__SetDepth(
        v58,
        ((__int64)v57->_1.byval_arg.data & ~(SLODWORD(v57->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v62,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v59);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall StandFigureBack__WaitForLoadAllAssetBundle(
        StandFigureBack_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E92E0 & 1) == 0 )
  {
    sub_B5D5C4(&StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    byte_42E92E0 = 1;
  }
  v6 = sub_B5D694(StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo);
  StandFigureBack__WaitForLoadAllAssetBundle_d__31___ctor(
    (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = action;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)action, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


bool __fastcall StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int32_t _1__state; // w8
  struct StandFigureBack_o *_4__this; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *standFigureCollectList; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  void *monitor; // x8
  UnityEngine_Behaviour_o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_assetRendered_5__2; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  StandFigureBack___c_c *v41; // x0
  struct StandFigureBack___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__31_0; // x21
  Il2CppObject *v44; // x22
  struct StandFigureBack___c_StaticFields *v45; // x0
  _BOOL8 v46; // x0
  __int64 v47; // x1
  void *v48; // x8
  UnityEngine_Behaviour_o *v49; // x0
  Il2CppObject **p__2__current; // x19
  int v51; // w20
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-78h] BYREF
  int v54[2]; // [xsp+20h] [xbp-60h]
  int v55; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42E644A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_StandFigureCollect___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_StandFigureCollect__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_StandFigureCollect__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__, v26, v27, v28);
    sub_B5D5C4(&StandFigureBack___c_TypeInfo, v29, v30, v31);
    byte_42E644A = 1;
  }
  memset(&v56, 0, sizeof(v56));
  v55 = 0;
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
      &v53,
      standFigureCollectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v56 = v53;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v56,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v35 )
        break;
      if ( !v56.fields.current )
        sub_B5D69C(v35, v36);
      monitor = v56.fields.current[1].monitor;
      if ( !monitor )
        sub_B5D69C(v35, v36);
      v38 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 3);
      if ( !v38 )
        sub_B5D69C(0LL, v36);
      UnityEngine_Behaviour__set_enabled(v38, 0, 0LL);
    }
    v54[0] = 95;
    v55 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v56,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v55 = 0;
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v41 = StandFigureBack___c_TypeInfo;
    if ( (BYTE3(StandFigureBack___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo);
      v41 = StandFigureBack___c_TypeInfo;
    }
    static_fields = v41->static_fields;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        static_fields = StandFigureBack___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_StandFigureCollect__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__31_0,
        v44,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_StandFigureCollect__bool___ctor__);
      v45 = StandFigureBack___c_TypeInfo->static_fields;
      v45->__9__31_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__31_0;
      sub_B5D560(&v45->__9__31_0);
    }
    standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(v40, (System_Func_TSource__bool__o *)_9__31_0, (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !this )
      goto LABEL_45;
    this->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)standFigureCollectList;
    p_assetRendered_5__2 = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields._assetRendered_5__2;
    sub_B5D560(&this->fields._assetRendered_5__2);
  }
  standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(*p_assetRendered_5__2, (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( !_4__this )
    goto LABEL_45;
  if ( (_DWORD)standFigureCollectList != System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                                           (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B5D560(p__2__current);
    LOBYTE(standFigureCollectList) = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return (char)standFigureCollectList;
  }
  standFigureCollectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
LABEL_45:
    sub_B5D69C(standFigureCollectList, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    standFigureCollectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v56 = v53;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v46 )
      break;
    if ( !v56.fields.current )
      sub_B5D69C(v46, v47);
    v48 = v56.fields.current[1].monitor;
    if ( !v48 )
      sub_B5D69C(v46, v47);
    v49 = (UnityEngine_Behaviour_o *)*((_QWORD *)v48 + 3);
    if ( !v49 )
      sub_B5D69C(0LL, v47);
    UnityEngine_Behaviour__set_enabled(v49, 1, 0LL);
  }
  v54[0] = 254;
  v51 = ++v55;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( v51 && v54[v51 - 1] == 254 )
    v55 = v51 - 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__31_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct StandFigureBack___c_StaticFields *static_fields; // x0

  if ( (byte_42E6448 & 1) == 0 )
  {
    sub_B5D5C4(&StandFigureBack___c_TypeInfo, v1, v2, v3);
    byte_42E6448 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(StandFigureBack___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = StandFigureBack___c_TypeInfo->static_fields;
  static_fields->__9 = (struct StandFigureBack___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8
  UnityEngine_Object_o *v6; // x19

  if ( (byte_42E6449 & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E6449 = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0LL
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0LL )
  {
    sub_B5D69C(this, x);
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(StandFigureBack___c_o *, void *, const MethodInfo *))this->klass[1].vtable._3_ToString.method)(
                                 this,
                                 this->klass[2]._1.image,
                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
}