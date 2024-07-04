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

  if ( (byte_48E64AD & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index);
    byte_48E64AD = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1B00F28(standFigureCollectList, *(_QWORD *)&index);
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
  __int64 v35; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  int32_t v37; // w22
  System_Collections_Generic_List_object__o *v38; // x24
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  int32_t v43; // w4
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  UIStandFigureR_o *v48; // x27
  System_Collections_Generic_List_object__o *v49; // x25
  StandFigureCollect_o *v50; // x26
  __int64 v51; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  UIStandFigureR_o *RenderPrefab_36719384; // x0
  System_Collections_Generic_List_object__o *v60; // x19
  UIStandFigureR_o *v61; // x21
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

  if ( (byte_48E64AC & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v21);
    sub_1B00CCC(&ImageLimitCount_TypeInfo, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v24);
    sub_1B00CCC(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v25);
    sub_1B00CCC(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v26);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B00CCC(&StandFigureCollect_TypeInfo, v28);
    byte_48E64AC = 1;
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
    v31 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    *p_standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v31;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.standFigureCollectList, (int32_t)v31, v32, v33);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_40;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( isEventShop )
    v37 = 4;
  else
    v37 = 3;
  if ( !EntityListOrderBy
    || (v38 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2D6DE20 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    RenderPrefab_36719384 = StandFigureManager__CreateRenderPrefab_36719384(
                              this->fields.svtFigurePanel,
                              this->fields.currentSvtId,
                              limitCount,
                              v37,
                              face,
                              10,
                              callbackFunc,
                              0,
                              -1,
                              0LL);
    v60 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v61 = RenderPrefab_36719384;
    v62 = (StandFigureCollect_o *)sub_1B00F18(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v62, 0LL, v61, 0LL);
    if ( v60 )
    {
      items = v60->fields._items;
      v66 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v60->fields._version;
      if ( items )
      {
        size = v60->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v60,
            (Il2CppObject *)v62,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &items->obj.klass + size;
          v60->fields._size = size + 1;
          v68[4] = (Il2CppClass *)v62;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v62, v63, v64);
        }
        return;
      }
    }
LABEL_40:
    sub_1B00F28(Instance, v35);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    v38,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v70 = v69;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    if ( !v39 )
      break;
    current = v70.fields._current;
    if ( !v70.fields._current )
      sub_1B00F28(v39, v40);
    klass_high = HIDWORD(v70.fields._current[2].klass);
    if ( klass_high >= 1 )
      v43 = klass_high + 10;
    else
      v43 = 10;
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         this->fields.svtFigurePanel,
                         (int32_t)v70.fields._current[2].klass,
                         v37,
                         face,
                         v43,
                         callbackFunc,
                         0,
                         -1,
                         0LL);
    v48 = PrefabForImageId;
    if ( !PrefabForImageId )
      sub_1B00F28(0LL, v45);
    PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v46,
      v47);
    v49 = (System_Collections_Generic_List_object__o *)*p_standFigureCollectList;
    v50 = (StandFigureCollect_o *)sub_1B00F18(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v50, (SvtMultiPortraitEntity_o *)current, v48, 0LL);
    if ( !v49 )
      sub_1B00F28(v51, v52);
    v55 = v49->fields._items;
    v56 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v49->fields._version;
    if ( !v55 )
      sub_1B00F28(v51, v52);
    v57 = v49->fields._size;
    if ( (unsigned int)v57 >= v55->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        (Il2CppObject *)v50,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v49->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v50;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v50, v53, v54);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultiSvtInfoComponent__setEnabledCollider(
        MultiSvtInfoComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_48E64AE & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    byte_48E64AE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1B00F28(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
}