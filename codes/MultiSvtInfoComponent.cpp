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

  if ( (byte_4B1A190 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index, method);
    byte_4B1A190 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(standFigureCollectList, *(_QWORD *)&index);
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o **p_standFigureCollectList; // x23
  System_Collections_Generic_List_object__o *v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *Instance; // x0
  __int64 v50; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v52; // w22
  System_Collections_Generic_List_object__o *v53; // x24
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  int32_t v58; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UIStandFigureR_o *v67; // x27
  System_Collections_Generic_List_object__o *v68; // x25
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  StandFigureCollect_o *v72; // x26
  __int64 v73; // x0
  __int64 v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  UIStandFigureR_o *RenderPrefab_38693360; // x0
  System_Collections_Generic_List_object__o *v86; // x19
  UIStandFigureR_o *v87; // x21
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  StandFigureCollect_o *v91; // x20
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  Il2CppClass **v101; // x0
  System_Collections_Generic_List_Enumerator_object__o v102; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+30h] [xbp-80h] BYREF
  int32_t limitCount; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4B1A18F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId, *(_QWORD *)&svtLimitCnt);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v24, v25);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    sub_1BCA7E0(&StandFigureCollect_TypeInfo, v38, v39);
    byte_4B1A18F = 1;
  }
  limitCount = 0;
  memset(&v103, 0, sizeof(v103));
  this->fields.currentIdx = idx;
  this->fields.currentMoveIdx = moveIdx;
  this->fields.currentSvtId = svtId;
  if ( isNpc )
    goto LABEL_7;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
  if ( !ImageLimitCount__TryGetRewardImageLimitCount(svtId, svtLimitCnt, &limitCount, 0LL) )
LABEL_7:
    limitCount = svtLimitCnt;
  p_standFigureCollectList = &this->fields.standFigureCollectList;
  standFigureCollectList = this->fields.standFigureCollectList;
  this->fields.currentSvtFace = face;
  if ( !standFigureCollectList )
  {
    v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                         *(_QWORD *)&svtId,
                                                         *(_QWORD *)&svtLimitCnt,
                                                         *(_QWORD *)&face);
    System_Collections_Generic_List_object____ctor(
      v42,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v42;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.standFigureCollectList,
      (int64_t)v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_40;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( isEventShop )
    v52 = 4;
  else
    v52 = 3;
  if ( !EntityListOrderBy
    || (v53 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_38693360 = StandFigureManager__CreateRenderPrefab_38693360(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v52,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL);
    v86 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v87 = RenderPrefab_38693360;
    v91 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v88, v89, v90);
    StandFigureCollect___ctor(v91, 0LL, v87, 0LL);
    if ( v86 )
    {
      items = v86->fields._items;
      v99 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v86->fields._version;
      if ( items )
      {
        size = v86->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v86,
            (Il2CppObject *)v91,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = &items->obj.klass + size;
          v86->fields._size = size + 1;
          v101[4] = (Il2CppClass *)v91;
          sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 4), (int64_t)v91, v92, v93, v94, v95, v96, v97);
        }
        return;
      }
    }
LABEL_40:
    sub_1BCAA3C(Instance, v50);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v102,
    v53,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v103 = v102;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v103,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v54 )
      break;
    current = v103.fields._current;
    if ( !v103.fields._current )
      sub_1BCAA3C(v54, v55);
    klass_high = HIDWORD(v103.fields._current[2].klass);
    if ( klass_high >= 1 )
      v58 = klass_high + 10;
    else
      v58 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         (int32_t)v103.fields._current[2].klass,
                         v52,
                         face,
                         v58,
                         callbackFunc,
                         0,
                         -1,
                         0LL);
    v67 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1BCAA3C(0LL, v60);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    v68 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v72 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v69, v70, v71);
    StandFigureCollect___ctor(v72, (SvtMultiPortraitEntity_o *)current, v67, 0LL);
    if ( !v68 )
      sub_1BCAA3C(v73, v74);
    v81 = v68->fields._items;
    v82 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v68->fields._version;
    if ( !v81 )
      sub_1BCAA3C(v73, v74);
    v83 = v68->fields._size;
    if ( (unsigned int)v83 >= v81->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v68,
        (Il2CppObject *)v72,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = &v81->obj.klass + v83;
      v68->fields._size = v83 + 1;
      v84[4] = (Il2CppClass *)v72;
      sub_1BCA784((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)v72, v75, v76, v77, v78, v79, v80);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v103,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4B1A191 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable, method);
    byte_4B1A191 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1BCAA3C(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}