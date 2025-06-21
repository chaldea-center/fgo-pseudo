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

  if ( (byte_4B16A22 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index);
    byte_4B16A22 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1BCB254(standFigureCollectList, *(_QWORD *)&index);
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
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v35; // w22
  System_Collections_Generic_List_object__o *v36; // x24
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  int32_t v41; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v43; // x1
  UIStandFigureR_o *v44; // x27
  System_Collections_Generic_List_object__o *v45; // x25
  StandFigureCollect_o *v46; // x26
  __int64 v47; // x0
  __int64 v48; // x1
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  UIStandFigureR_o *RenderPrefab_39863448; // x0
  System_Collections_Generic_List_object__o *v54; // x19
  UIStandFigureR_o *v55; // x21
  StandFigureCollect_o *v56; // x20
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+30h] [xbp-80h] BYREF
  int32_t limitCount; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4B16A21 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v21);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v25);
    sub_1BCAFF8(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v26);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1BCAFF8(&StandFigureCollect_TypeInfo, v28);
    byte_4B16A21 = 1;
  }
  limitCount = 0;
  memset(&v62, 0, sizeof(v62));
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
    v31 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v31;
    sub_1BCAF9C(&this->fields.standFigureCollectList);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_40;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( isEventShop )
    v35 = 4;
  else
    v35 = 3;
  if ( !EntityListOrderBy
    || (v36 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_39863448 = StandFigureManager__CreateRenderPrefab_39863448(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v35,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL,
                              0LL);
    v54 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v55 = RenderPrefab_39863448;
    v56 = (StandFigureCollect_o *)sub_1BCB244(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v56, 0LL, v55, 0LL);
    if ( v54 )
    {
      items = v54->fields._items;
      v58 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v54->fields._version;
      if ( items )
      {
        size = v54->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v54,
            (Il2CppObject *)v56,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &items->obj.klass + size;
          v54->fields._size = size + 1;
          v60[4] = (Il2CppClass *)v56;
          sub_1BCAF9C(v60 + 4);
        }
        return;
      }
    }
LABEL_40:
    sub_1BCB254(Instance, v33);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    v36,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v62 = v61;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v62,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v62.fields._current;
    if ( !v62.fields._current )
      sub_1BCB254(v37, v38);
    klass_high = HIDWORD(v62.fields._current[2].klass);
    if ( klass_high >= 1 )
      v41 = klass_high + 10;
    else
      v41 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         (int32_t)v62.fields._current[2].klass,
                         v35,
                         face,
                         v41,
                         callbackFunc,
                         0,
                         -1,
                         0LL,
                         0LL);
    v44 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1BCB254(0LL, v43);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1BCAF9C(&PrefabForImageId->fields.svtMultiPortraitEntity);
    v45 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v46 = (StandFigureCollect_o *)sub_1BCB244(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v46, (SvtMultiPortraitEntity_o *)current, v44, 0LL);
    if ( !v45 )
      sub_1BCB254(v47, v48);
    v49 = v45->fields._items;
    v50 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v45->fields._version;
    if ( !v49 )
      sub_1BCB254(v47, v48);
    v51 = v45->fields._size;
    if ( (unsigned int)v51 >= v49->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v45,
        (Il2CppObject *)v46,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &v49->obj.klass + v51;
      v45->fields._size = v51 + 1;
      v52[4] = (Il2CppClass *)v46;
      sub_1BCAF9C(v52 + 4);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4B16A23 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_4B16A23 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1BCB254(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}