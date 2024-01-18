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
  if ( (byte_4185C02 & 1) == 0 )
  {
    this = (MultiSvtInfoComponent_o *)sub_B2C35C(
                                        &Method_System_Collections_Generic_List_StandFigureCollect__get_Item__,
                                        *(_QWORD *)&index);
    byte_4185C02 = 1;
  }
  standFigureCollectList = v4->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    goto LABEL_8;
  if ( standFigureCollectList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v6 = standFigureCollectList->fields._items->m_Items[index];
  if ( !v6 )
LABEL_8:
    sub_B2C434(this, *(_QWORD *)&index);
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
  BattleServantConfConponent_o *p_standFigureCollectList; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v39; // w22
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v40; // x24
  _BOOL8 v41; // x0
  __int64 v42; // x1
  System_Int32_array **current; // x24
  int klass; // w8
  int32_t v45; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UIStandFigureR_o *v54; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x26
  StandFigureCollect_o *v56; // x27
  __int64 v57; // x0
  __int64 v58; // x1
  UIStandFigureR_o *RenderPrefab_27085276; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v60; // x19
  UIStandFigureR_o *v61; // x21
  StandFigureCollect_o *v62; // x20
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+40h] [xbp-70h] BYREF
  int32_t limitCount; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_4185C01 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v19);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v23);
    sub_B2C35C(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&StandFigureCollect_TypeInfo, v26);
    byte_4185C01 = 1;
  }
  limitCount = 0;
  memset(&v66, 0, sizeof(v66));
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
    v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v29,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    p_standFigureCollectList->klass = (BattleServantConfConponent_c *)v29;
    sub_B2C2F8(p_standFigureCollectList, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_34;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0LL);
  if ( isEventShop )
    v39 = 4;
  else
    v39 = 3;
  if ( !EntityListOrderBy
    || (v40 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_27085276 = StandFigureManager__CreateRenderPrefab_27085276(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v39,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL);
    v60 = this->fields.standFigureCollectList;
    v61 = RenderPrefab_27085276;
    v62 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v62, 0LL, v61, 0LL);
    if ( v60 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v60,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
      return;
    }
LABEL_34:
    sub_B2C434(Instance, v37);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    v40,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v66 = v65;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v66,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v41 )
      break;
    current = (System_Int32_array **)v66.fields.current;
    if ( !v66.fields.current )
      sub_B2C434(v41, v42);
    klass = (int)v66.fields.current[2].klass;
    if ( klass >= 1 )
      v45 = klass + 10;
    else
      v45 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         HIDWORD(v66.fields.current[1].monitor),
                         v39,
                         face,
                         v45,
                         callbackFunc,
                         0,
                         -1,
                         0LL);
    v54 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B2C434(0LL, v47);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      current,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_standFigureCollectList->klass;
    v56 = (StandFigureCollect_o *)sub_B2C42C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v56, (SvtMultiPortraitEntity_o *)current, v54, 0LL);
    if ( !v55 )
      sub_B2C434(v57, v58);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v55,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v66,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v6; // x1

  if ( (byte_4185C03 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_4185C03 = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    sub_B2C434(0LL, v6);
  UnityEngine_Collider__set_enabled(Component_WebViewObject, isEnable, 0LL);
}