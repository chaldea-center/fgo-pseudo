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

  if ( (byte_4A5EFA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4A5EFA0 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1B8880C(standFigureCollectList, *(_QWORD *)&index);
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
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v26; // w22
  System_Collections_Generic_List_object__o *v27; // x24
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  int32_t v32; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  UIStandFigureR_o *v37; // x27
  System_Collections_Generic_List_object__o *v38; // x25
  StandFigureCollect_o *v39; // x26
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  UIStandFigureR_o *RenderPrefab_37977456; // x0
  System_Collections_Generic_List_object__o *v49; // x19
  UIStandFigureR_o *v50; // x21
  StandFigureCollect_o *v51; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+30h] [xbp-80h] BYREF
  int32_t limitCount; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4A5EF9F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StandFigureCollect_TypeInfo);
    byte_4A5EF9F = 1;
  }
  limitCount = 0;
  memset(&v59, 0, sizeof(v59));
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
    v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.standFigureCollectList, (int32_t)v20, v21, v22);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_40;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( isEventShop )
    v26 = 4;
  else
    v26 = 3;
  if ( !EntityListOrderBy
    || (v27 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_37977456 = StandFigureManager__CreateRenderPrefab_37977456(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v26,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL);
    v49 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v50 = RenderPrefab_37977456;
    v51 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v51, 0LL, v50, 0LL);
    if ( v49 )
    {
      items = v49->fields._items;
      v55 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v49->fields._version;
      if ( items )
      {
        size = v49->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v49,
            (Il2CppObject *)v51,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + size;
          v49->fields._size = size + 1;
          v57[4] = (Il2CppClass *)v51;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v51, v52, v53);
        }
        return;
      }
    }
LABEL_40:
    sub_1B8880C(Instance, v24);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v27,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v28 )
      break;
    current = v59.fields._current;
    if ( !v59.fields._current )
      sub_1B8880C(v28, v29);
    klass_high = HIDWORD(v59.fields._current[2].klass);
    if ( klass_high >= 1 )
      v32 = klass_high + 10;
    else
      v32 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         (int32_t)v59.fields._current[2].klass,
                         v26,
                         face,
                         v32,
                         callbackFunc,
                         0,
                         -1,
                         0LL);
    v37 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B8880C(0LL, v34);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v35,
      v36);
    v38 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v39 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v39, (SvtMultiPortraitEntity_o *)current, v37, 0LL);
    if ( !v38 )
      sub_1B8880C(v40, v41);
    v44 = v38->fields._items;
    v45 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v38->fields._version;
    if ( !v44 )
      sub_1B8880C(v40, v41);
    v46 = v38->fields._size;
    if ( (unsigned int)v46 >= v44->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v38,
        (Il2CppObject *)v39,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &v44->obj.klass + v46;
      v38->fields._size = v46 + 1;
      v47[4] = (Il2CppClass *)v39;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v39, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4A5EFA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4A5EFA1 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1B8880C(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}