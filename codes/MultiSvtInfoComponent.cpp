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

  if ( (byte_4A001B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index);
    byte_4A001B4 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1B64324(standFigureCollectList);
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
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v36; // w22
  System_Collections_Generic_List_object__o *v37; // x24
  _BOOL8 v38; // x0
  Il2CppObject *current; // x24
  int klass_high; // w8
  int32_t v41; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  UIStandFigureR_o *v45; // x27
  System_Collections_Generic_List_object__o *v46; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  StandFigureCollect_o *v49; // x26
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  UIStandFigureR_o *RenderPrefab_37607928; // x0
  System_Collections_Generic_List_object__o *v58; // x19
  UIStandFigureR_o *v59; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  StandFigureCollect_o *v62; // x20
  int32_t v63; // w2
  int32_t v64; // w3
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+30h] [xbp-80h] BYREF
  int32_t limitCount; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4A001B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v21);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v25);
    sub_1B640C8(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B640C8(&StandFigureCollect_TypeInfo, v28);
    byte_4A001B3 = 1;
  }
  limitCount = 0;
  memset(&v70, 0, sizeof(v70));
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
    v31 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                         *(_QWORD *)&svtId,
                                                         *(_QWORD *)&svtLimitCnt);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.standFigureCollectList, (int32_t)v31, v32, v33);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_40;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( isEventShop )
    v36 = 4;
  else
    v36 = 3;
  if ( !EntityListOrderBy
    || (v37 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_37607928 = StandFigureManager__CreateRenderPrefab_37607928(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v36,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL);
    v58 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v59 = RenderPrefab_37607928;
    v62 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v60, v61);
    StandFigureCollect___ctor(v62, 0LL, v59, 0LL);
    if ( v58 )
    {
      items = v58->fields._items;
      v66 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v58->fields._version;
      if ( items )
      {
        size = v58->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v58,
            (Il2CppObject *)v62,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &items->obj.klass + size;
          v58->fields._size = size + 1;
          v68[4] = (Il2CppClass *)v62;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v62, v63, v64);
        }
        return;
      }
    }
LABEL_40:
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    v37,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v70 = v69;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v38 )
      break;
    current = v70.fields._current;
    if ( !v70.fields._current )
      sub_1B64324(v38);
    klass_high = HIDWORD(v70.fields._current[2].klass);
    if ( klass_high >= 1 )
      v41 = klass_high + 10;
    else
      v41 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         (int32_t)v70.fields._current[2].klass,
                         v36,
                         face,
                         v41,
                         callbackFunc,
                         0,
                         -1,
                         0LL);
    v45 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B64324(0LL);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v43,
      v44);
    v46 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v49 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v47, v48);
    StandFigureCollect___ctor(v49, (SvtMultiPortraitEntity_o *)current, v45, 0LL);
    if ( !v46 )
      sub_1B64324(v50);
    v53 = v46->fields._items;
    v54 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v46->fields._version;
    if ( !v53 )
      sub_1B64324(v50);
    v55 = v46->fields._size;
    if ( (unsigned int)v55 >= v53->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v46,
        (Il2CppObject *)v49,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v53->obj.klass + v55;
      v46->fields._size = v55 + 1;
      v56[4] = (Il2CppClass *)v49;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v49, v51, v52);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0

  if ( (byte_4A001B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_4A001B5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1B64324(0LL);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}