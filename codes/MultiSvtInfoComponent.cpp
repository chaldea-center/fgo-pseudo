void __fastcall MultiSvtInfoComponent___ctor(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall MultiSvtInfoComponent__GetSvtStandFigure(
        MultiSvtInfoComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MultiSvtInfoComponent_o *v5; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v7; // x8

  v5 = this;
  if ( (byte_42E74C2 & 1) == 0 )
  {
    this = (MultiSvtInfoComponent_o *)sub_B5D5C4(
                                        &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                        index,
                                        (_DWORD)method,
                                        v3);
    byte_42E74C2 = 1;
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


System_Collections_Generic_List_StandFigureCollect__o *__fastcall MultiSvtInfoComponent__GetSvtStandFigureCollect(
        MultiSvtInfoComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.standFigureCollectList;
}


void __fastcall MultiSvtInfoComponent__SetGuideSvtFace(
        MultiSvtInfoComponent_o *this,
        int32_t face,
        const MethodInfo *method)
{
  this->fields.currentSvtFace = face;
}


void __fastcall MultiSvtInfoComponent__SetGuideSvtInfo(
        MultiSvtInfoComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.currentSvtId = id;
}


int32_t __fastcall MultiSvtInfoComponent__getBannerIdx(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentIdx;
}


int32_t __fastcall MultiSvtInfoComponent__getGuideSvtFace(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentSvtFace;
}


int32_t __fastcall MultiSvtInfoComponent__getGuideSvtInfo(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentSvtId;
}


int32_t __fastcall MultiSvtInfoComponent__getMoveBannerIdx(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentMoveIdx;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultiSvtInfoComponent__setCurrentRewardInfo(
        MultiSvtInfoComponent_o *this,
        int32_t svtId,
        int32_t svtLimitCnt,
        int32_t face,
        int32_t idx,
        int32_t moveIdx,
        bool isEventShop,
        bool isNpc,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
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
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  BattleServantConfConponent_o *p_standFigureCollectList; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  DataManager_o *Instance; // x0
  __int64 v59; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v61; // w22
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v62; // x24
  _BOOL8 v63; // x0
  __int64 v64; // x1
  System_Int32_array **current; // x24
  int klass; // w8
  int32_t v67; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UIStandFigureR_o *v76; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x26
  StandFigureCollect_o *v78; // x27
  __int64 v79; // x0
  __int64 v80; // x1
  UIStandFigureR_o *RenderPrefab_26229964; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v82; // x19
  UIStandFigureR_o *v83; // x21
  StandFigureCollect_o *v84; // x20
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+40h] [xbp-70h] BYREF
  int32_t limitCount; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_42E74C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, svtId, svtLimitCnt, *(_QWORD *)&face);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v25, v26, v27);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v37, v38, v39);
    sub_B5D5C4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44, v45);
    sub_B5D5C4(&StandFigureCollect_TypeInfo, v46, v47, v48);
    byte_42E74C1 = 1;
  }
  limitCount = 0;
  memset(&v88, 0, sizeof(v88));
  this->fields.currentIdx = idx;
  this->fields.currentMoveIdx = moveIdx;
  this->fields.currentSvtId = svtId;
  if ( isNpc )
    goto LABEL_8;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  if ( !ImageLimitCount__TryGetRewardImageLimitCount(svtId, svtLimitCnt, &limitCount, 0LL) )
LABEL_8:
    limitCount = svtLimitCnt;
  p_standFigureCollectList = (BattleServantConfConponent_o *)&this->fields.standFigureCollectList;
  standFigureCollectList = this->fields.standFigureCollectList;
  this->fields.currentSvtFace = face;
  if ( !standFigureCollectList )
  {
    v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v51,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    p_standFigureCollectList->klass = (BattleServantConfConponent_c *)v51;
    sub_B5D560(p_standFigureCollectList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_34;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0LL);
  if ( isEventShop )
    v61 = 4;
  else
    v61 = 3;
  if ( !EntityListOrderBy
    || (v62 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_26229964 = StandFigureManager__CreateRenderPrefab_26229964(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v61,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL);
    v82 = this->fields.standFigureCollectList;
    v83 = RenderPrefab_26229964;
    v84 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v84, 0LL, v83, 0LL);
    if ( v82 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v82,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_34:
    sub_B5D69C(Instance, v59);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v87,
    v62,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v88,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v63 )
      break;
    current = (System_Int32_array **)v88.fields.current;
    if ( !v88.fields.current )
      sub_B5D69C(v63, v64);
    klass = (int)v88.fields.current[2].klass;
    if ( klass >= 1 )
      v67 = klass + 10;
    else
      v67 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         HIDWORD(v88.fields.current[1].monitor),
                         v61,
                         face,
                         v67,
                         callbackFunc,
                         0,
                         -1,
                         0LL);
    v76 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B5D69C(0LL, v69);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_B5D560(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      current,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_standFigureCollectList->klass;
    v78 = (StandFigureCollect_o *)sub_B5D694(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v78, (SvtMultiPortraitEntity_o *)current, v76, 0LL);
    if ( !v77 )
      sub_B5D69C(v79, v80);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v77,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v88,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v7; // x1

  if ( (byte_42E74C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable, (_DWORD)method, v3);
    byte_42E74C3 = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    sub_B5D69C(0LL, v7);
  UnityEngine_Collider__set_enabled(Component_WebViewObject, isEnable, 0LL);
}