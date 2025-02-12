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

  if ( (byte_4BCBB1F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index);
    byte_4BCBB1F = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1C1AE30(standFigureCollectList, *(_QWORD *)&index);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o **p_standFigureCollectList; // x23
  System_Collections_Generic_List_object__o *v31; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *Instance; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v41; // w22
  System_Collections_Generic_List_object__o *v42; // x24
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  int32_t v47; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  UIStandFigureR_o *v56; // x27
  System_Collections_Generic_List_object__o *v57; // x25
  StandFigureCollect_o *v58; // x26
  __int64 v59; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  UIStandFigureR_o *RenderPrefab_39177300; // x0
  System_Collections_Generic_List_object__o *v72; // x19
  UIStandFigureR_o *v73; // x21
  StandFigureCollect_o *v74; // x20
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+30h] [xbp-80h] BYREF
  int32_t limitCount; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4BCBB1E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v21);
    sub_1C1ABD4(&ImageLimitCount_TypeInfo, v22);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v23);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v25);
    sub_1C1ABD4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v26);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1C1ABD4(&StandFigureCollect_TypeInfo, v28);
    byte_4BCBB1E = 1;
  }
  limitCount = 0;
  memset(&v86, 0, sizeof(v86));
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
    v31 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v31;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.standFigureCollectList,
      (int64_t)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_40;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( isEventShop )
    v41 = 4;
  else
    v41 = 3;
  if ( !EntityListOrderBy
    || (v42 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_39177300 = StandFigureManager__CreateRenderPrefab_39177300(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v41,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL,
                              0LL);
    v72 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v73 = RenderPrefab_39177300;
    v74 = (StandFigureCollect_o *)sub_1C1AE20(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v74, 0LL, v73, 0LL);
    if ( v72 )
    {
      items = v72->fields._items;
      v82 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v72->fields._version;
      if ( items )
      {
        size = v72->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v72,
            (Il2CppObject *)v74,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
        }
        else
        {
          v84 = &items->obj.klass + size;
          v72->fields._size = size + 1;
          v84[4] = (Il2CppClass *)v74;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)v74, v75, v76, v77, v78, v79, v80);
        }
        return;
      }
    }
LABEL_40:
    sub_1C1AE30(Instance, v39);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    v42,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v86 = v85;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v86,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v43 )
      break;
    current = v86.fields._current;
    if ( !v86.fields._current )
      sub_1C1AE30(v43, v44);
    klass_high = HIDWORD(v86.fields._current[2].klass);
    if ( klass_high >= 1 )
      v47 = klass_high + 10;
    else
      v47 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         (int32_t)v86.fields._current[2].klass,
                         v41,
                         face,
                         v47,
                         callbackFunc,
                         0,
                         -1,
                         0LL,
                         0LL);
    v56 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C1AE30(0LL, v49);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v57 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v58 = (StandFigureCollect_o *)sub_1C1AE20(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v58, (SvtMultiPortraitEntity_o *)current, v56, 0LL);
    if ( !v57 )
      sub_1C1AE30(v59, v60);
    v67 = v57->fields._items;
    v68 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v57->fields._version;
    if ( !v67 )
      sub_1C1AE30(v59, v60);
    v69 = v57->fields._size;
    if ( (unsigned int)v69 >= v67->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v57,
        (Il2CppObject *)v58,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v67->obj.klass + v69;
      v57->fields._size = v69 + 1;
      v70[4] = (Il2CppClass *)v58;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)v58, v61, v62, v63, v64, v65, v66);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v86,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4BCBB20 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_4BCBB20 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C1AE30(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}