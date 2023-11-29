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
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x20
  StandFigureCollect_o *v6; // x8

  if ( (byte_40F7DE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index);
    byte_40F7DE0 = 1;
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
  int32_t RewardImageLimitCount; // w20
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  BattleServantConfConponent_o *p_standFigureCollectList; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  WebViewManager_o *Instance; // x0
  SvtMultiPortraitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v39; // w23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v40; // x25
  System_Int32_array **current; // x25
  int klass; // w8
  int32_t v43; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UIStandFigureR_o *v51; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x27
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  StandFigureCollect_o *v57; // x28
  UIStandFigureR_o *RenderPrefab_26843068; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v59; // x19
  UIStandFigureR_o *v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  StandFigureCollect_o *v65; // x20
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+50h] [xbp-70h] BYREF

  RewardImageLimitCount = svtLimitCnt;
  if ( (byte_40F7DDF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v19);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v23);
    sub_B16FFC(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&StandFigureCollect_TypeInfo, v26);
    byte_40F7DDF = 1;
  }
  memset(&v69, 0, sizeof(v69));
  this->fields.currentIdx = idx;
  this->fields.currentMoveIdx = moveIdx;
  this->fields.currentSvtId = svtId;
  if ( !isNpc )
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    RewardImageLimitCount = ImageLimitCount__GetRewardImageLimitCount(svtId, RewardImageLimitCount, 0LL);
  }
  p_standFigureCollectList = (BattleServantConfConponent_o *)&this->fields.standFigureCollectList;
  standFigureCollectList = this->fields.standFigureCollectList;
  this->fields.currentSvtFace = face;
  if ( !standFigureCollectList )
  {
    v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                    *(_QWORD *)&svtId,
                                                                                                    *(_QWORD *)&svtLimitCnt,
                                                                                                    *(_QWORD *)&face,
                                                                                                    *(_QWORD *)&idx);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v29,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    p_standFigureCollectList->klass = (BattleServantConfConponent_c *)v29;
    sub_B16F98(p_standFigureCollectList, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (SvtMultiPortraitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        MasterData_WarQuestSelectionMaster,
                        svtId,
                        RewardImageLimitCount,
                        0LL);
  if ( isEventShop )
    v39 = 4;
  else
    v39 = 3;
  if ( !EntityListOrderBy
    || (v40 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_26843068 = StandFigureManager__CreateRenderPrefab_26843068(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              RewardImageLimitCount,
                              v39,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL);
    v59 = this->fields.standFigureCollectList;
    v60 = RenderPrefab_26843068;
    v65 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v61, v62, v63, v64);
    StandFigureCollect___ctor(v65, 0LL, v60, 0LL);
    if ( v59 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v59,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_33:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v68,
    v40,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v69 = v68;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v69,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = (System_Int32_array **)v69.fields.current;
    if ( !v69.fields.current )
      sub_B170D4();
    klass = (int)v69.fields.current[2].klass;
    if ( klass >= 1 )
      v43 = klass + 10;
    else
      v43 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         HIDWORD(v69.fields.current[1].monitor),
                         v39,
                         face,
                         v43,
                         callbackFunc,
                         0,
                         -1,
                         0LL);
    v51 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B170D4();
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_B16F98(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      current,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_standFigureCollectList->klass;
    v57 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v53, v54, v55, v56);
    StandFigureCollect___ctor(v57, (SvtMultiPortraitEntity_o *)current, v51, 0LL);
    if ( !v52 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v52,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v69,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *Component_WebViewObject; // x0

  if ( (byte_40F7DE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_40F7DE1 = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(Component_WebViewObject, isEnable, 0LL);
}