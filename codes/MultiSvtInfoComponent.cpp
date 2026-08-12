void MultiSvtInfoComponent___ctor(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *MultiSvtInfoComponent__GetSvtStandFigure(
        MultiSvtInfoComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *standFigureCollectList; // x0

  if ( (byte_596A6F6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_596A6F6 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0 )
  {
    sub_2213CDC(standFigureCollectList, *(_QWORD *)&index);
  }
  return (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3);
}


System_Collections_Generic_List_StandFigureCollect__o *MultiSvtInfoComponent__GetSvtStandFigureCollect(
        MultiSvtInfoComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.standFigureCollectList;
}


void MultiSvtInfoComponent__SetGuideSvtFace(MultiSvtInfoComponent_o *this, int32_t face, const MethodInfo *method)
{
  this->fields.currentSvtFace = face;
}


void MultiSvtInfoComponent__SetGuideSvtInfo(MultiSvtInfoComponent_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.currentSvtId = id;
}


int32_t MultiSvtInfoComponent__getBannerIdx(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentIdx;
}


int32_t MultiSvtInfoComponent__getGuideSvtFace(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentSvtFace;
}


int32_t MultiSvtInfoComponent__getGuideSvtInfo(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentSvtId;
}


int32_t MultiSvtInfoComponent__getMoveBannerIdx(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentMoveIdx;
}


// local variable allocation has failed, the output may be wrong!
void MultiSvtInfoComponent__setCurrentRewardInfo(
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
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
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UIStandFigureR_o *v45; // x27
  System_Collections_Generic_List_object__o *v46; // x25
  StandFigureCollect_o *v47; // x26
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  UIStandFigureR_o *RenderPrefab_47638192; // x0
  System_Collections_Generic_List_object__o *v61; // x19
  UIStandFigureR_o *v62; // x21
  StandFigureCollect_o *v63; // x20
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+30h] [xbp-80h] BYREF
  int32_t limitCount; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_596A6F5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_2213A60(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StandFigureCollect_TypeInfo);
    byte_596A6F5 = 1;
  }
  limitCount = 0;
  memset(&v75, 0, sizeof(v75));
  this->fields.currentIdx = idx;
  this->fields.currentMoveIdx = moveIdx;
  this->fields.currentSvtId = svtId;
  if ( isNpc )
    goto LABEL_7;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&svtLimitCnt);
  if ( !ImageLimitCount__TryGetRewardImageLimitCount(svtId, svtLimitCnt, &limitCount, 0) )
LABEL_7:
    limitCount = svtLimitCnt;
  p_standFigureCollectList = &this->fields.standFigureCollectList;
  standFigureCollectList = this->fields.standFigureCollectList;
  this->fields.currentSvtFace = face;
  if ( !standFigureCollectList )
  {
    v20 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v20;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.standFigureCollectList,
      (int32_t)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_39;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0);
  if ( isEventShop )
    v30 = 4;
  else
    v30 = 3;
  if ( !EntityListOrderBy
    || (v31 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_47638192 = StandFigureManager__CreateRenderPrefab_47638192(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v30,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0,
                              0);
    v61 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v62 = RenderPrefab_47638192;
    v63 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v63, 0, v62, 0);
    if ( v61 )
    {
      items = v61->fields._items;
      v71 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v61->fields._version;
      if ( items )
      {
        size = v61->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            (Il2CppObject *)v63,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &items->obj.klass + size;
          v61->fields._size = size + 1;
          v73[4] = (Il2CppClass *)v63;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 4), (int32_t)v63, v64, v65, v66, v67, v68, v69);
        }
        return;
      }
    }
LABEL_39:
    sub_2213CDC(Instance, v28);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    v31,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v75 = v74;
  v74.fields._list = 0;
  *(_QWORD *)&v74.fields._index = &v75;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v32 )
      break;
    current = v75.fields._current;
    if ( !v75.fields._current )
      sub_2213CDC(v32, v33);
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
                         0,
                         0);
    v45 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_2213CDC(0, v38);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v46 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v47 = (StandFigureCollect_o *)sub_2213CCC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v47, (SvtMultiPortraitEntity_o *)current, v45, 0);
    if ( !v46
      || (v56 = v46->fields._items,
          v57 = Method_System_Collections_Generic_List_StandFigureCollect__Add__,
          ++v46->fields._version,
          !v56) )
    {
      sub_2213CDC(v48, v49);
    }
    v58 = v46->fields._size;
    if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v46,
        (Il2CppObject *)v47,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v56->obj.klass + v58;
      v46->fields._size = v58 + 1;
      v59[4] = (Il2CppClass *)v47;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 4), (int32_t)v47, v50, v51, v52, v53, v54, v55);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void MultiSvtInfoComponent__setEnabledCollider(MultiSvtInfoComponent_o *this, bool isEnable, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_596A6F7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_596A6F7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_2213CDC(0, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
}