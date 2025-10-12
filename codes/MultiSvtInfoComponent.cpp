void MultiSvtInfoComponent___ctor(MultiSvtInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


UIStandFigureR_o *MultiSvtInfoComponent__GetSvtStandFigure(
        MultiSvtInfoComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *standFigureCollectList; // x0

  if ( (byte_4C31DEF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C31DEF = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0 )
  {
    sub_1C32E7C(standFigureCollectList);
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
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v23; // w22
  System_Collections_Generic_List_object__o *v24; // x24
  _BOOL8 v25; // x0
  Il2CppObject *current; // x24
  int klass_high; // w8
  int32_t v28; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  UIStandFigureR_o *v30; // x27
  System_Collections_Generic_List_object__o *v31; // x25
  StandFigureCollect_o *v32; // x26
  __int64 v33; // x0
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  UIStandFigureR_o *RenderPrefab_40577020; // x0
  System_Collections_Generic_List_object__o *v39; // x19
  UIStandFigureR_o *v40; // x21
  StandFigureCollect_o *v41; // x20
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+30h] [xbp-80h] BYREF
  int32_t limitCount; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4C31DEE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StandFigureCollect_TypeInfo);
    byte_4C31DEE = 1;
  }
  limitCount = 0;
  memset(&v47, 0, sizeof(v47));
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
    v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v20;
    sub_1C32BC4(&this->fields.standFigureCollectList, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_40;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0);
  if ( isEventShop )
    v23 = 4;
  else
    v23 = 3;
  if ( !EntityListOrderBy
    || (v24 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_40577020 = StandFigureManager__CreateRenderPrefab_40577020(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v23,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0,
                              0);
    v39 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v40 = RenderPrefab_40577020;
    v41 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v41, 0, v40, 0);
    if ( v39 )
    {
      items = v39->fields._items;
      v43 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v39->fields._version;
      if ( items )
      {
        size = v39->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            (Il2CppObject *)v41,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v39->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v41;
          sub_1C32BC4(v45 + 4, v41);
        }
        return;
      }
    }
LABEL_40:
    sub_1C32E7C(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    v24,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v25 )
      break;
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_1C32E7C(v25);
    klass_high = HIDWORD(v47.fields._current[2].klass);
    if ( klass_high >= 1 )
      v28 = klass_high + 10;
    else
      v28 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         (int32_t)v47.fields._current[2].klass,
                         v23,
                         face,
                         v28,
                         callbackFunc,
                         0,
                         -1,
                         0,
                         0);
    v30 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1C32E7C(0);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1C32BC4(&PrefabForImageId->fields.svtMultiPortraitEntity, current);
    v31 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v32 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v32, (SvtMultiPortraitEntity_o *)current, v30, 0);
    if ( !v31 )
      sub_1C32E7C(v33);
    v34 = v31->fields._items;
    v35 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v31->fields._version;
    if ( !v34 )
      sub_1C32E7C(v33);
    v36 = v31->fields._size;
    if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)v32,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &v34->obj.klass + v36;
      v31->fields._size = v36 + 1;
      v37[4] = (Il2CppClass *)v32;
      sub_1C32BC4(v37 + 4, v32);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void MultiSvtInfoComponent__setEnabledCollider(MultiSvtInfoComponent_o *this, bool isEnable, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0

  if ( (byte_4C31DF0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C31DF0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C32E7C(0);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
}