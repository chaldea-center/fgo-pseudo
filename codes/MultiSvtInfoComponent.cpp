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
  if ( (byte_42123EB & 1) == 0 )
  {
    this = (MultiSvtInfoComponent_o *)sub_B0D8A4(
                                        &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                        *(_QWORD *)&index);
    byte_42123EB = 1;
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
  struct System_Collections_Generic_List_StandFigureCollect__o **p_standFigureCollectList; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v32; // w22
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v33; // x24
  _BOOL8 v34; // x0
  Il2CppObject *current; // x24
  int klass; // w8
  int32_t v37; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  UIStandFigureR_o *v39; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x26
  __int64 v41; // x1
  __int64 v42; // x2
  StandFigureCollect_o *v43; // x27
  __int64 v44; // x0
  UIStandFigureR_o *RenderPrefab_25972252; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v46; // x19
  UIStandFigureR_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  StandFigureCollect_o *v50; // x20
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+40h] [xbp-70h] BYREF
  int32_t limitCount; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_42123EA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v19);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&StandFigureCollect_TypeInfo, v26);
    byte_42123EA = 1;
  }
  limitCount = 0;
  memset(&v54, 0, sizeof(v54));
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
  p_standFigureCollectList = &this->fields.standFigureCollectList;
  standFigureCollectList = this->fields.standFigureCollectList;
  this->fields.currentSvtFace = face;
  if ( !standFigureCollectList )
  {
    v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                    *(_QWORD *)&svtId,
                                                                                                    *(_QWORD *)&svtLimitCnt);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v29,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v29;
    sub_B0D840(p_standFigureCollectList, v29);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_34;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0LL);
  if ( isEventShop )
    v32 = 4;
  else
    v32 = 3;
  if ( !EntityListOrderBy
    || (v33 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_25972252 = StandFigureManager__CreateRenderPrefab_25972252(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v32,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL);
    v46 = this->fields.standFigureCollectList;
    v47 = RenderPrefab_25972252;
    v50 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v48, v49);
    StandFigureCollect___ctor(v50, 0LL, v47, 0LL);
    if ( v46 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v46,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_34:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    v33,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v34 )
      break;
    current = v54.fields.current;
    if ( !v54.fields.current )
      sub_B0D97C(v34);
    klass = (int)v54.fields.current[2].klass;
    if ( klass >= 1 )
      v37 = klass + 10;
    else
      v37 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         HIDWORD(v54.fields.current[1].monitor),
                         v32,
                         face,
                         v37,
                         callbackFunc,
                         0,
                         -1,
                         0LL);
    v39 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B0D97C(0LL);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_B0D840(&PrefabForImageId->fields.svtMultiPortraitEntity, current);
    v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_standFigureCollectList;
    v43 = (StandFigureCollect_o *)sub_B0D974(StandFigureCollect_TypeInfo, v41, v42);
    StandFigureCollect___ctor(v43, (SvtMultiPortraitEntity_o *)current, v39, 0LL);
    if ( !v40 )
      sub_B0D97C(v44);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v40,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *Component_WebViewObject; // x0

  if ( (byte_42123EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_42123EC = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    sub_B0D97C(0LL);
  UnityEngine_Collider__set_enabled(Component_WebViewObject, isEnable, 0LL);
}