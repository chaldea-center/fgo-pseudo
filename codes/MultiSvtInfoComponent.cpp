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
  void *standFigureCollectList; // x0

  if ( (byte_4BE05E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4BE05E1 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1C22094(standFigureCollectList, *(_QWORD *)&index);
  }
  return (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3);
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
  struct System_Collections_Generic_List_StandFigureCollect__o **p_standFigureCollectList; // x23
  System_Collections_Generic_List_object__o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Instance; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v30; // w22
  System_Collections_Generic_List_object__o *v31; // x24
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  int32_t v36; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UIStandFigureR_o *v45; // x27
  System_Collections_Generic_List_object__o *v46; // x25
  StandFigureCollect_o *v47; // x26
  __int64 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  UIStandFigureR_o *RenderPrefab_39223696; // x0
  System_Collections_Generic_List_object__o *v61; // x19
  UIStandFigureR_o *v62; // x21
  StandFigureCollect_o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+30h] [xbp-80h] BYREF
  int32_t limitCount; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4BE05E0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StandFigureCollect_TypeInfo);
    byte_4BE05E0 = 1;
  }
  limitCount = 0;
  memset(&v75, 0, sizeof(v75));
  this->fields.currentIdx = idx;
  this->fields.currentMoveIdx = moveIdx;
  this->fields.currentSvtId = svtId;
  if ( isNpc )
    goto LABEL_7;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  if ( !ImageLimitCount__TryGetRewardImageLimitCount(svtId, svtLimitCnt, &limitCount, 0LL) )
LABEL_7:
    limitCount = svtLimitCnt;
  p_standFigureCollectList = &this->fields.standFigureCollectList;
  standFigureCollectList = this->fields.standFigureCollectList;
  this->fields.currentSvtFace = face;
  if ( !standFigureCollectList )
  {
    v20 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v20;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.standFigureCollectList,
      (int64_t)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_40;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( isEventShop )
    v30 = 4;
  else
    v30 = 3;
  if ( !EntityListOrderBy
    || (v31 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_39223696 = StandFigureManager__CreateRenderPrefab_39223696(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v30,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL,
                              0LL);
    v61 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v62 = RenderPrefab_39223696;
    v63 = (StandFigureCollect_o *)sub_1C22084(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v63, 0LL, v62, 0LL);
    if ( v61 )
    {
      items = v61->fields._items;
      v71 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v61->fields._version;
      if ( items )
      {
        size = v61->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            (Il2CppObject *)v63,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &items->obj.klass + size;
          v61->fields._size = size + 1;
          v73[4] = (Il2CppClass *)v63;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v73 + 4), (int64_t)v63, v64, v65, v66, v67, v68, v69);
        }
        return;
      }
    }
LABEL_40:
    sub_1C22094(Instance, v28);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    v31,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v75 = v74;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v32 )
      break;
    current = v75.fields._current;
    if ( !v75.fields._current )
      sub_1C22094(v32, v33);
    klass_high = HIDWORD(v75.fields._current[2].klass);
    if ( klass_high >= 1 )
      v36 = klass_high + 10;
    else
      v36 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         (int32_t)v75.fields._current[2].klass,
                         v30,
                         face,
                         v36,
                         callbackFunc,
                         0,
                         -1,
                         0LL,
                         0LL);
    v45 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C22094(0LL, v38);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v46 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v47 = (StandFigureCollect_o *)sub_1C22084(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v47, (SvtMultiPortraitEntity_o *)current, v45, 0LL);
    if ( !v46 )
      sub_1C22094(v48, v49);
    v56 = v46->fields._items;
    v57 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v46->fields._version;
    if ( !v56 )
      sub_1C22094(v48, v49);
    v58 = v46->fields._size;
    if ( (unsigned int)v58 >= v56->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v46,
        (Il2CppObject *)v47,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v56->obj.klass + v58;
      v46->fields._size = v58 + 1;
      v59[4] = (Il2CppClass *)v47;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v47, v50, v51, v52, v53, v54, v55);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4BE05E2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4BE05E2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C22094(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}