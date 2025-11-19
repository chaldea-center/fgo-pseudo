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

  if ( (byte_4CB06A1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4CB06A1 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0 )
  {
    sub_1C6BC60(standFigureCollectList, *(_QWORD *)&index);
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
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v24; // w22
  System_Collections_Generic_List_object__o *v25; // x24
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  int32_t v30; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v32; // x1
  UIStandFigureR_o *v33; // x27
  System_Collections_Generic_List_object__o *v34; // x25
  StandFigureCollect_o *v35; // x26
  __int64 v36; // x0
  __int64 v37; // x1
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  UIStandFigureR_o *RenderPrefab_40907224; // x0
  System_Collections_Generic_List_object__o *v43; // x19
  UIStandFigureR_o *v44; // x21
  StandFigureCollect_o *v45; // x20
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+30h] [xbp-80h] BYREF
  int32_t limitCount; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4CB06A0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StandFigureCollect_TypeInfo);
    byte_4CB06A0 = 1;
  }
  limitCount = 0;
  memset(&v51, 0, sizeof(v51));
  this->fields.currentIdx = idx;
  this->fields.currentMoveIdx = moveIdx;
  this->fields.currentSvtId = svtId;
  if ( isNpc )
    goto LABEL_7;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  if ( !ImageLimitCount__TryGetRewardImageLimitCount(svtId, svtLimitCnt, &limitCount, 0) )
LABEL_7:
    limitCount = svtLimitCnt;
  p_standFigureCollectList = &this->fields.standFigureCollectList;
  standFigureCollectList = this->fields.standFigureCollectList;
  this->fields.currentSvtFace = face;
  if ( !standFigureCollectList )
  {
    v20 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v20;
    sub_1C6B9AC(&this->fields.standFigureCollectList, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_40;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0);
  if ( isEventShop )
    v24 = 4;
  else
    v24 = 3;
  if ( !EntityListOrderBy
    || (v25 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_40907224 = StandFigureManager__CreateRenderPrefab_40907224(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v24,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0,
                              0);
    v43 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v44 = RenderPrefab_40907224;
    v45 = (StandFigureCollect_o *)sub_1C6BC54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v45, 0, v44, 0);
    if ( v43 )
    {
      items = v43->fields._items;
      v47 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v43->fields._version;
      if ( items )
      {
        size = v43->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v43,
            (Il2CppObject *)v45,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          v43->fields._size = size + 1;
          v49[4] = (Il2CppClass *)v45;
          sub_1C6B9AC(v49 + 4, v45);
        }
        return;
      }
    }
LABEL_40:
    sub_1C6BC60(Instance, v22);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    v25,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v26 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1C6BC60(v26, v27);
    klass_high = HIDWORD(v51.fields._current[2].klass);
    if ( klass_high >= 1 )
      v30 = klass_high + 10;
    else
      v30 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         (int32_t)v51.fields._current[2].klass,
                         v24,
                         face,
                         v30,
                         callbackFunc,
                         0,
                         -1,
                         0,
                         0);
    v33 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C6BC60(0, v32);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1C6B9AC(&PrefabForImageId->fields.svtMultiPortraitEntity, current);
    v34 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v35 = (StandFigureCollect_o *)sub_1C6BC54(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v35, (SvtMultiPortraitEntity_o *)current, v33, 0);
    if ( !v34 )
      sub_1C6BC60(v36, v37);
    v38 = v34->fields._items;
    v39 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v34->fields._version;
    if ( !v38 )
      sub_1C6BC60(v36, v37);
    v40 = v34->fields._size;
    if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        (Il2CppObject *)v35,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &v38->obj.klass + v40;
      v34->fields._size = v40 + 1;
      v41[4] = (Il2CppClass *)v35;
      sub_1C6B9AC(v41 + 4, v35);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void MultiSvtInfoComponent__setEnabledCollider(MultiSvtInfoComponent_o *this, bool isEnable, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4CB06A2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4CB06A2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C6BC60(0, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
}