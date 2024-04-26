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
  MultiSvtInfoComponent_o *v4; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v6; // x8

  v4 = this;
  if ( (byte_4350D9A & 1) == 0 )
  {
    this = (MultiSvtInfoComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4350D9A = 1;
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
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  BattleServantConfConponent_o *p_standFigureCollectList; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v28; // w22
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v29; // x24
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_Int32_array **current; // x24
  int klass; // w8
  int32_t v34; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UIStandFigureR_o *v43; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x26
  StandFigureCollect_o *v45; // x27
  __int64 v46; // x0
  __int64 v47; // x1
  UIStandFigureR_o *RenderPrefab_26399528; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v49; // x19
  UIStandFigureR_o *v50; // x21
  StandFigureCollect_o *v51; // x20
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+40h] [xbp-70h] BYREF
  int32_t limitCount; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_4350D99 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_B70694(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StandFigureCollect_TypeInfo);
    byte_4350D99 = 1;
  }
  limitCount = 0;
  memset(&v55, 0, sizeof(v55));
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
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    p_standFigureCollectList->klass = (BattleServantConfConponent_c *)v18;
    sub_B70630(p_standFigureCollectList, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_34;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0LL);
  if ( isEventShop )
    v28 = 4;
  else
    v28 = 3;
  if ( !EntityListOrderBy
    || (v29 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_26399528 = StandFigureManager__CreateRenderPrefab_26399528(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v28,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL);
    v49 = this->fields.standFigureCollectList;
    v50 = RenderPrefab_26399528;
    v51 = (StandFigureCollect_o *)sub_B70764(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v51, 0LL, v50, 0LL);
    if ( v49 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v49,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_34:
    sub_B7076C(Instance, v26);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v54,
    v29,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v30 )
      break;
    current = (System_Int32_array **)v55.fields.current;
    if ( !v55.fields.current )
      sub_B7076C(v30, v31);
    klass = (int)v55.fields.current[2].klass;
    if ( klass >= 1 )
      v34 = klass + 10;
    else
      v34 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         HIDWORD(v55.fields.current[1].monitor),
                         v28,
                         face,
                         v34,
                         callbackFunc,
                         0,
                         -1,
                         0LL);
    v43 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B7076C(0LL, v36);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_B70630(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      current,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_standFigureCollectList->klass;
    v45 = (StandFigureCollect_o *)sub_B70764(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v45, (SvtMultiPortraitEntity_o *)current, v43, 0LL);
    if ( !v44 )
      sub_B7076C(v46, v47);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v44,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v6; // x1

  if ( (byte_4350D9B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4350D9B = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    sub_B7076C(0LL, v6);
  UnityEngine_Collider__set_enabled(Component_WebViewObject, isEnable, 0LL);
}