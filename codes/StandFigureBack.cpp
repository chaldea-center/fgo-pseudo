void StandFigureBack___cctor(const MethodInfo *method)
{
  struct StandFigureBack_StaticFields *static_fields; // x8

  if ( (byte_5937BFF & 1) == 0 )
  {
    sub_21FFC50(&StandFigureBack_TypeInfo);
    byte_5937BFF = 1;
  }
  static_fields = StandFigureBack_TypeInfo->static_fields;
  static_fields->COSTUME_IMAGE_CNT_START = 11;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
}


void StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937BFE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_5937BFE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.standFigureCollectList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureBack__CreatePrefab(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseStandFigure; // x20
  bool v8; // w0
  __int64 v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v14; // x21
  Il2CppObject *current; // x23
  UIStandFigureR_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UIStandFigureR_o *v24; // x24
  System_Collections_Generic_List_object__o *v25; // x21
  StandFigureCollect_o *v26; // x22
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  StandFigureCollect_o *v42; // x20
  const MethodInfo *v43; // x3
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5937BF2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StandFigureCollect_TypeInfo);
    byte_5937BF2 = 1;
  }
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  memset(&v55, 0, sizeof(v55));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&svtId);
  v8 = UnityEngine_Object__op_Inequality(baseStandFigure, 0, 0);
  v9 = 40;
  if ( v8 )
    v9 = 48;
  v10 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_28;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0);
  if ( !EntityListOrderBy
    || (v14 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v10, 0);
    v42 = (StandFigureCollect_o *)sub_21FFEBC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v42, 0, RenderPrefab, v43);
    if ( standFigureCollectList )
    {
      items = standFigureCollectList->fields._items;
      v51 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++standFigureCollectList->fields._version;
      if ( items )
      {
        size = standFigureCollectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            standFigureCollectList,
            (Il2CppObject *)v42,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &items->obj.klass + size;
          standFigureCollectList->fields._size = size + 1;
          v53[4] = (Il2CppClass *)v42;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v42, v44, v45, v46, v47, v48, v49);
        }
        goto LABEL_27;
      }
    }
LABEL_28:
    sub_21FFECC(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v14,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v55 = v54;
  v54.fields._list = 0;
  *(_QWORD *)&v54.fields._index = &v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = v55.fields._current;
    v16 = StandFigureManager__CreateRenderPrefab(v10, 0);
    v24 = v16;
    if ( !v16 )
      sub_21FFECC(0, v17);
    v16->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v16->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v25 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v26 = (StandFigureCollect_o *)sub_21FFEBC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v26, (SvtMultiPortraitEntity_o *)current, v24, v27);
    if ( !v25
      || (v36 = v25->fields._items,
          v37 = Method_System_Collections_Generic_List_StandFigureCollect__Add__,
          ++v25->fields._version,
          !v36) )
    {
      sub_21FFECC(v28, v29);
    }
    v38 = v25->fields._size;
    if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)v26,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v36->obj.klass + v38;
      v25->fields._size = v38 + 1;
      v39[4] = (Il2CppClass *)v26;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v26, v30, v31, v32, v33, v34, v35);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
LABEL_27:
  this->fields.isFirstLoading = 1;
}


void StandFigureBack__CreatedExRoomStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x23
  void *standFigureCollectList; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  UIStandFigureR_o *v30; // x24
  System_Action_o *v31; // x25

  if ( (byte_5937BF7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_21FFC50(&Method_StandFigureBack___c__DisplayClass29_0__CreatedExRoomStandFigure_b__0__);
    sub_21FFC50(&StandFigureBack___c__DisplayClass29_0_TypeInfo);
    byte_5937BF7 = 1;
  }
  v13 = sub_21FFEBC(StandFigureBack___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)callback, v22, v23, v24, v25, v26, v27);
  StandFigureBack__InitStandFigure(this, 0, v28);
  this->fields.isDispRequest = 0;
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v29);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   0,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v30 = (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3),
        v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v31,
          (Il2CppObject *)v13,
          Method_StandFigureBack___c__DisplayClass29_0__CreatedExRoomStandFigure_b__0__,
          0),
        !v30) )
  {
LABEL_8:
    sub_21FFECC(standFigureCollectList, v15);
  }
  UIStandFigureR__SetCharacter_50996840(v30, svtId, imageLimitCount, offsetKind, faceType, v31, 0);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureBack__CreatedStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        System_Action_o *callback,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  void *standFigureCollectList; // x0
  UIStandFigureR_o *v18; // x24
  System_Action_o *v19; // x25

  if ( (byte_5937BF6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_21FFC50(&Method_StandFigureBack_EndLoad__);
    byte_5937BF6 = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v18 = (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3),
        v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v19, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0),
        !v18) )
  {
    sub_21FFECC(standFigureCollectList, v16);
  }
  UIStandFigureR__SetCharacter_50996840(v18, svtId, imageLimitCount, offsetKind, faceType, v19, 0);
}


void StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *v5; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5937BF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BF0 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  memset(&v18, 0, sizeof(v18));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    v5 = this->fields.standFigureCollectList;
    if ( !v5 )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)v5,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v18 = v17;
    v17.fields._list = 0;
    *(_QWORD *)&v17.fields._index = &v18;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v18,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v6 )
        break;
      current = v18.fields._current;
      if ( !v18.fields._current )
        sub_21FFECC(v6, v7);
      monitor = (UIStandFigureR_o *)v18.fields._current[1].monitor;
      if ( !monitor )
        sub_21FFECC(0, v7);
      UIStandFigureR__Destroy(monitor, 0);
      v11 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v11 )
        sub_21FFECC(0, v10);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__DestroyImmediate_83246828(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v14 = this->fields.standFigureCollectList;
    if ( !v14 )
LABEL_20:
      sub_21FFECC(v5, v4);
    size = v14->fields._size;
    v16 = v14->fields._version + 1;
    v14->fields._size = 0;
    v14->fields._version = v16;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
  }
}


void StandFigureBack__EndClose(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_baseCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.baseCallbackFunc;
  v12 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0;
    sub_21FFBF4(p_baseCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void StandFigureBack__EndFadein(StandFigureBack_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.baseCallbackFunc;
  v9 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0;
    sub_21FFBF4(p_baseCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void StandFigureBack__EndFadeout(StandFigureBack_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.baseCallbackFunc;
  v9 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0;
    sub_21FFBF4(p_baseCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void StandFigureBack__EndLoad(StandFigureBack_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isFirstLoading )
    this->fields.isFirstLoading = 0;
  if ( this->fields.isDispRequest )
    StandFigureBack__Fadein(this, this->fields.baseCallbackFunc, v2);
}


void StandFigureBack__Fadein(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  _BOOL4 isFirstLoading; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v17; // x20
  StandFigureBack_c *v18; // x0
  __int64 v19; // x1
  TweenPosition_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_5937BFC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StandFigureBack_TypeInfo);
    sub_21FFC50(&StringLiteral_6246/*"EndFadein"*/);
    byte_5937BFC = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  isFirstLoading = this->fields.isFirstLoading;
  this->fields.isDispRequest = 1;
  if ( !isFirstLoading )
  {
    if ( !this->fields.isDisp )
    {
      this->fields.isDisp = 1;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
      {
        closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
        {
          v17 = this->fields.baseWindow;
          v18 = StandFigureBack_TypeInfo;
          if ( !*(&StandFigureBack_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo, v10);
            v18 = StandFigureBack_TypeInfo;
          }
          v20 = TweenPosition__Begin(v17, v18->static_fields->OPEN_TIME, this->fields.basePosition, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( v20 )
            {
              v20->fields.method = 3;
              v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              v20->fields.eventReceiver = v21;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v20->fields.eventReceiver,
                (int32_t)v21,
                v22,
                v23,
                v24,
                v25,
                v26,
                v27);
              v28 = StringLiteral_6246/*"EndFadein"*/;
              v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6246/*"EndFadein"*/;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v20->fields.callWhenFinished,
                v28,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
              return;
            }
LABEL_23:
            sub_21FFECC(gameObject, v13);
          }
          gameObject = this->fields.baseWindow;
          if ( !gameObject )
            goto LABEL_23;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
          if ( !gameObject )
            goto LABEL_23;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0);
        }
      }
    }
    StandFigureBack__EndFadein(this, v10);
  }
}


void StandFigureBack__Fadeout(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  _BOOL4 isDisp; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v16; // x20
  __int64 v17; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v21; // x20
  StandFigureBack_c *v22; // x0
  __int64 v23; // x1
  TweenPosition_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5937BFD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StandFigureBack_TypeInfo);
    sub_21FFC50(&StringLiteral_6247/*"EndFadeout"*/);
    byte_5937BFD = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  isDisp = this->fields.isDisp;
  this->fields.isDispRequest = 0;
  if ( isDisp )
  {
    this->fields.isDisp = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
    {
      closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
      {
        gameObject = this->fields.baseWindow;
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0);
        if ( !this->fields.closeTransform )
          goto LABEL_26;
        v16 = (UnityEngine_Transform_o *)gameObject;
        position = UnityEngine_Transform__get_position(this->fields.closeTransform, 0);
        if ( !v16 )
          goto LABEL_26;
        v40 = UnityEngine_Transform__InverseTransformPoint(v16, position, 0);
        x = v40.fields.x;
        y = v40.fields.y;
        z = v40.fields.z;
        v21 = this->fields.baseWindow;
        v22 = StandFigureBack_TypeInfo;
        if ( !*(&StandFigureBack_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo, v17);
          v22 = StandFigureBack_TypeInfo;
        }
        v41.fields.x = x;
        v41.fields.y = y;
        v41.fields.z = z;
        v24 = TweenPosition__Begin(v21, v22->static_fields->OPEN_TIME, v41, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v24 )
          {
            v24->fields.method = 3;
            v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            v24->fields.eventReceiver = v25;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v24->fields.eventReceiver,
              (int32_t)v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            v32 = StringLiteral_6247/*"EndFadeout"*/;
            v24->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6247/*"EndFadeout"*/;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v24->fields.callWhenFinished,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            return;
          }
LABEL_26:
          sub_21FFECC(gameObject, v10);
        }
        gameObject = this->fields.baseWindow;
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
        if ( !gameObject )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0);
      }
    }
  }
  StandFigureBack__EndClose(this, v10);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *StandFigureBack__GetSvtStandFigure(StandFigureBack_o *this, int32_t index, const MethodInfo *method)
{
  void *standFigureCollectList; // x0

  if ( (byte_5937BED & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_5937BED = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0 )
  {
    sub_21FFECC(standFigureCollectList, *(_QWORD *)&index);
  }
  return (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3);
}


System_Collections_Generic_List_StandFigureCollect__o *StandFigureBack__GetSvtStandFigureCollect(
        StandFigureBack_o *this,
        const MethodInfo *method)
{
  return this->fields.standFigureCollectList;
}


void StandFigureBack__Init(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Object_c *v7; // x0
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v11; // x8
  UnityEngine_Transform_o *v12; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937BEF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BEF = 1;
  }
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) && !this->fields.isBasePosition )
  {
    transform = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_22;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  }
  StandFigureBack__DestroyFigure(this, v4);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(transform, 0, 0);
  v7 = UnityEngine_Object_TypeInfo;
  *(_WORD *)&this->fields.isFirstLoading = 0;
  v8 = (UnityEngine_Object_o *)this->fields.baseWindow;
  this->fields.isDisp = 0;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, v6);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
    {
      transform = this->fields.baseWindow;
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
        v11 = this->fields.closeTransform;
        if ( v11 )
        {
          v12 = (UnityEngine_Transform_o *)transform;
          position = UnityEngine_Transform__get_position(v11, 0);
          if ( v12 )
          {
            UnityEngine_Transform__set_position(v12, position, 0);
            return;
          }
        }
      }
LABEL_22:
      sub_21FFECC(transform, v4);
    }
  }
}


void StandFigureBack__InitStandFigure(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  UnityEngine_Object_c *v15; // x0
  UnityEngine_Object_o *baseWindow; // x20
  __int64 v17; // x1
  UnityEngine_Object_c *v18; // x0
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v20; // x8
  UnityEngine_Transform_o *v21; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937BF1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937BF1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  StandFigureBack__DestroyFigure(this, v7);
  this->fields.baseCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseCallbackFunc,
    (int32_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v15 = UnityEngine_Object_TypeInfo;
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  this->fields.isDispRequest = 1;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, v14);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) && !this->fields.isBasePosition )
  {
    gameObject = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    v18 = UnityEngine_Object_TypeInfo;
    this->fields.basePosition.fields.x = localPosition.fields.x;
    this->fields.basePosition.fields.y = localPosition.fields.y;
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    this->fields.basePosition.fields.z = localPosition.fields.z;
    if ( !*(&v18->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v18, v17);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
    {
      gameObject = this->fields.baseWindow;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
        v20 = this->fields.closeTransform;
        if ( v20 )
        {
          v21 = (UnityEngine_Transform_o *)gameObject;
          position = UnityEngine_Transform__get_position(v20, 0);
          if ( v21 )
          {
            UnityEngine_Transform__set_position(v21, position, 0);
            return;
          }
        }
      }
LABEL_18:
      sub_21FFECC(gameObject, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *StandFigureBack__RobSvtStandFigure(StandFigureBack_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v6; // x8
  System_Collections_Generic_List_object__o *v7; // x19

  if ( (byte_5937BEE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_5937BEE = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                index,
                                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__),
        (v6 = this->fields.standFigureCollectList) == 0)
    || (v7 = standFigureCollectList,
        standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                                (System_Collections_Generic_List_object__o *)v6,
                                                                                (Il2CppObject *)standFigureCollectList,
                                                                                (const MethodInfo_445101C *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__),
        !v7) )
  {
    sub_21FFECC(standFigureCollectList, *(_QWORD *)&index);
  }
  return *(UIStandFigureR_o **)&v7->fields._size;
}


// local variable allocation has failed, the output may be wrong!
void StandFigureBack__SetEventRewardStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  int32_t v17; // w8
  void *standFigureCollectList; // x0
  UIStandFigureR_o *v19; // x22
  System_Action_o *v20; // x25
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppClass *v28; // x8
  UIStandFigureR_o *v29; // x0
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5937BF8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_21FFC50(&Method_StandFigureBack_EndLoad__);
    byte_5937BF8 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    v17 = System_Linq_Enumerable__Count_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
            (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( v17 < 2 )
    {
      if ( standFigureCollectList )
      {
        standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   0,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( standFigureCollectList )
        {
          v19 = (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3);
          v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(v20, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
          if ( v19 )
          {
            UIStandFigureR__SetCharacter_50996840(v19, svtId, imageLimitCount, offsetKind, faceType, v20, 0);
            return;
          }
        }
      }
LABEL_25:
      sub_21FFECC(standFigureCollectList, v16);
    }
    if ( !standFigureCollectList )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      (System_Collections_Generic_List_object__o *)standFigureCollectList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v34 = v33;
    v33.fields._list = 0;
    *(_QWORD *)&v33.fields._index = &v34;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v21 )
        break;
      current = v34.fields._current;
      if ( !v34.fields._current )
        sub_21FFECC(v21, v22);
      klass = v34.fields._current[1].klass;
      if ( !klass )
        sub_21FFECC(v21, v22);
      monitor = (UIStandFigureR_o *)v34.fields._current[1].monitor;
      if ( !monitor )
        sub_21FFECC(0, v22);
      v26 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              0,
              0,
              0,
              0,
              0);
      v28 = current[1].klass;
      if ( !v28 )
        sub_21FFECC(v26, v27);
      v29 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v29 )
        sub_21FFECC(0, v27);
      UIStandFigureR__SetDepth(
        v29,
        (HIDWORD(v28->_1.byval_arg.data) & ~(SHIDWORD(v28->_1.byval_arg.data) >> 31)) + depth,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v30 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v30, v31);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0);
  }
}


void StandFigureBack__SetFaceType(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0

  if ( (byte_5937BF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_5937BF3 = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      if ( standFigureCollectList->fields._size < index )
        return;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              standFigureCollectList,
                                                                              index,
                                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( standFigureCollectList )
      {
        standFigureCollectList = *(System_Collections_Generic_List_object__o **)&standFigureCollectList->fields._size;
        if ( standFigureCollectList )
        {
          UIStandFigureR__SetFace((UIStandFigureR_o *)standFigureCollectList, faceType, fadeTime, 0);
          return;
        }
      }
    }
    sub_21FFECC(standFigureCollectList, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void StandFigureBack__SetFaceTypeAll(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UIStandFigureR_o *v10; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5937BF4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_5937BF4 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  memset(&v11, 0, sizeof(v11));
  if ( !standFigureCollectList )
    sub_21FFECC(0, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)standFigureCollectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_21FFECC(v8, v9);
    v10 = *(UIStandFigureR_o **)((char *)&v11.fields._current->klass + (unsigned __int64)off_18);
    if ( !v10 )
      sub_21FFECC(0, v9);
    UIStandFigureR__SetFace(v10, faceType, fadeTime, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureBack__SetFaceTypeAndForm(
        StandFigureBack_o *this,
        int32_t faceType,
        int32_t formId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UIStandFigureR_o *v10; // x0
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5937BF5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_5937BF5 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  memset(&v13, 0, sizeof(v13));
  if ( !standFigureCollectList )
    sub_21FFECC(0, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)standFigureCollectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v13.fields._current )
      sub_21FFECC(v8, v9);
    v10 = *(UIStandFigureR_o **)((char *)&v13.fields._current->klass + (unsigned __int64)off_18);
    if ( !v10 )
      sub_21FFECC(0, v9);
    UIStandFigureR__SetFace_51005772(v10, faceType, formId, 0, 0.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureBack__SetMyRoomStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t formId,
        int32_t depth,
        System_Action_o *callback,
        bool isPhotoWithMaster,
        bool isSoloPhoto,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  bool v18; // w26
  const MethodInfo *v19; // x3
  System_Action_o *baseCallbackFunc; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v21; // x0
  const MethodInfo_3832C14 *v22; // x1
  __int64 v23; // x1
  int32_t v24; // w8
  System_Collections_Generic_List_object__o *Item; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x26
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppClass *v33; // x8
  UIStandFigureR_o *v34; // x0
  const MethodInfo *v35; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_5937BF9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_21FFC50(&Method_StandFigureBack_EndLoad__);
    byte_5937BF9 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  memset(&v40, 0, sizeof(v40));
  if ( standFigureCollectList )
    v18 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v18 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v19);
  if ( v18 )
  {
    baseCallbackFunc = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  v21 = this->fields.standFigureCollectList;
  v22 = (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___;
  this->fields.isFirstLoading = v18;
  if ( System_Linq_Enumerable__Any_object_((System_Collections_Generic_IEnumerable_TSource__o *)v21, v22) )
  {
    v24 = System_Linq_Enumerable__Count_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
            (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    Item = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( v24 < 2 )
    {
      if ( Item )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              0,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( Item )
        {
          Item = *(System_Collections_Generic_List_object__o **)&Item->fields._size;
          if ( Item )
          {
            UIStandFigureR__SetCharacter_50996836(
              (UIStandFigureR_o *)Item,
              svtId,
              imageLimitCount,
              offsetKind,
              faceType,
              formId,
              baseCallbackFunc,
              0);
            return;
          }
        }
      }
LABEL_31:
      sub_21FFECC(Item, v23);
    }
    if ( !Item )
      goto LABEL_31;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v39,
      Item,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v40 = v39;
    v39.fields._list = 0;
    *(_QWORD *)&v39.fields._index = &v40;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v40,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v26 )
        break;
      current = v40.fields._current;
      if ( !v40.fields._current )
        sub_21FFECC(v26, v27);
      klass = v40.fields._current[1].klass;
      if ( !klass )
        sub_21FFECC(v26, v27);
      monitor = (UIStandFigureR_o *)v40.fields._current[1].monitor;
      if ( !monitor )
        sub_21FFECC(0, v27);
      v31 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              formId,
              0,
              isPhotoWithMaster,
              isSoloPhoto,
              0);
      v33 = current[1].klass;
      if ( !v33 )
        sub_21FFECC(v31, v32);
      v34 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v34 )
        sub_21FFECC(0, v32);
      UIStandFigureR__SetDepth(
        v34,
        (HIDWORD(v33->_1.byval_arg.data) & ~(SHIDWORD(v33->_1.byval_arg.data) >> 31)) + depth,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v40,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v35);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void StandFigureBack__SetMyRoomStandFigureForImageId(
        StandFigureBack_o *this,
        int32_t imageId,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  bool v13; // w24
  bool v14; // w25
  const MethodInfo *v15; // x3
  System_Action_o *baseCallbackFunc; // x24
  System_Collections_ICollection_o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *Item; // x0

  if ( (byte_5937BFA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_21FFC50(&Method_StandFigureBack_EndLoad__);
    byte_5937BFA = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v13 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v13 = 1;
  v14 = v13;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&offsetKind);
  StandFigureBack__CreatePrefab(this, 0, 0, v15);
  if ( v13 )
  {
    baseCallbackFunc = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  v17 = (System_Collections_ICollection_o *)this->fields.standFigureCollectList;
  this->fields.isFirstLoading = v14;
  if ( BasicHelper__IsNullOrEmpty(v17, 0) )
  {
    ActionExtensions__Call(callback, 0);
  }
  else
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( !Item
      || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                0,
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
      || (Item = *(System_Collections_Generic_List_object__o **)&Item->fields._size) == 0 )
    {
      sub_21FFECC(Item, v18);
    }
    UIStandFigureR__SetCharacterForImageId(
      (UIStandFigureR_o *)Item,
      imageId,
      offsetKind,
      faceType,
      0,
      baseCallbackFunc,
      0,
      0,
      0);
  }
}


System_Collections_IEnumerator_o *StandFigureBack__WaitForLoadAllAssetBundle(
        StandFigureBack_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5937BFB & 1) == 0 )
  {
    sub_21FFC50(&StandFigureBack__WaitForLoadAllAssetBundle_d__33_TypeInfo);
    byte_5937BFB = 1;
  }
  v5 = sub_21FFEBC(StandFigureBack__WaitForLoadAllAssetBundle_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


bool StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


bool StandFigureBack__get_IsDisp(StandFigureBack_o *this, const MethodInfo *method)
{
  return this->fields.isDispRequest;
}


void StandFigureBack__WaitForLoadAllAssetBundle_d__33___ctor(
        StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool StandFigureBack__WaitForLoadAllAssetBundle_d__33__MoveNext(
        StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *this,
        const MethodInfo *method)
{
  StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *v2; // x19
  int32_t _1__state; // w8
  struct StandFigureBack_o *_4__this; // x23
  _BOOL8 v5; // x0
  __int64 v6; // x1
  void *monitor; // x8
  UnityEngine_Behaviour_o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *standFigureCollectList; // x20
  StandFigureBack___c_c *v11; // x0
  struct StandFigureBack___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__33_0; // x21
  Il2CppObject *v14; // x22
  struct StandFigureBack___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  _BOOL8 v34; // x0
  __int64 v35; // x1
  void *v36; // x8
  UnityEngine_Behaviour_o *v37; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_5937C02 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&System_Func_StandFigureCollect__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_21FFC50(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__33_0__);
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *)sub_21FFC50(&StandFigureBack___c_TypeInfo);
    byte_5937C02 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  memset(&v41, 0, sizeof(v41));
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_41;
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *)_4__this->fields.standFigureCollectList;
    if ( !this )
      goto LABEL_41;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v41 = v40;
    v40.fields._list = 0;
    *(_QWORD *)&v40.fields._index = &v41;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v41,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v5 )
        break;
      if ( !v41.fields._current )
        sub_21FFECC(v5, v6);
      monitor = v41.fields._current[1].monitor;
      if ( !monitor )
        sub_21FFECC(v5, v6);
      v8 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 4);
      if ( !v8 )
        sub_21FFECC(0, v6);
      UnityEngine_Behaviour__set_enabled(v8, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v41,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v11 = StandFigureBack___c_TypeInfo;
    if ( !*(&StandFigureBack___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo, v9);
      v11 = StandFigureBack___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__33_0 = (System_Func_object__bool__o *)static_fields->__9__33_0;
    if ( !_9__33_0 )
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v11, v9);
        static_fields = StandFigureBack___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__33_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_StandFigureCollect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__33_0,
        v14,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__33_0__,
        0);
      v15 = StandFigureBack___c_TypeInfo->static_fields;
      v15->__9__33_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__33_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__33_0, (int32_t)_9__33_0, v16, v17, v18, v19, v20, v21);
    }
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *)System_Linq_Enumerable__Where_object_(
                                                                   standFigureCollectList,
                                                                   (System_Func_TSource__bool__o *)_9__33_0,
                                                                   (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !v2 )
      goto LABEL_41;
    v2->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)this;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v2->fields._assetRendered_5__2,
      (int32_t)this,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
LABEL_22:
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *)System_Linq_Enumerable__Count_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._assetRendered_5__2,
                                                                   (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( _4__this )
    {
      if ( (_DWORD)this != System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                             (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
      {
        v2->fields.__2__current = 0;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_21FFBF4(p__2__current, 0, v28, v29, v30, v31, v32, v33);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return result;
      }
      this = (StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *)_4__this->fields.standFigureCollectList;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v40,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
        v41 = v40;
        v40.fields._list = 0;
        *(_QWORD *)&v40.fields._index = &v41;
        while ( 1 )
        {
          v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v41,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
          if ( !v34 )
            break;
          if ( !v41.fields._current )
            sub_21FFECC(v34, v35);
          v36 = v41.fields._current[1].monitor;
          if ( !v36 )
            sub_21FFECC(v34, v35);
          v37 = (UnityEngine_Behaviour_o *)*((_QWORD *)v36 + 4);
          if ( !v37 )
            sub_21FFECC(0, v35);
          UnityEngine_Behaviour__set_enabled(v37, 1, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v41,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
        ActionExtensions__Call(v2->fields.action, 0);
        return 0;
      }
    }
LABEL_41:
    sub_21FFECC(this, method);
  }
  return 0;
}


Il2CppObject *StandFigureBack__WaitForLoadAllAssetBundle_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn StandFigureBack__WaitForLoadAllAssetBundle_d__33__System_Collections_IEnumerator_Reset(
        StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__33_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *StandFigureBack__WaitForLoadAllAssetBundle_d__33__System_Collections_IEnumerator_get_Current(
        StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void StandFigureBack__WaitForLoadAllAssetBundle_d__33__System_IDisposable_Dispose(
        StandFigureBack__WaitForLoadAllAssetBundle_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void StandFigureBack___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5937C00 & 1) == 0 )
  {
    sub_21FFC50(&StandFigureBack___c_TypeInfo);
    byte_5937C00 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(StandFigureBack___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StandFigureBack___c_TypeInfo->static_fields->__9 = (struct StandFigureBack___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)StandFigureBack___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void StandFigureBack___c___ctor(StandFigureBack___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool StandFigureBack___c___WaitForLoadAllAssetBundle_b__33_0(
        StandFigureBack___c_o *this,
        StandFigureCollect_o *x,
        const MethodInfo *method)
{
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_5937C01 & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937C01 = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0 )
  {
    sub_21FFECC(this, x);
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(StandFigureBack___c_o *, Il2CppMethodPointer, const MethodInfo *))this->klass[1].vtable._2_GetHashCode.method)(
                                 this,
                                 this->klass[1].vtable._3_ToString.methodPtr,
                                 method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  return UnityEngine_Object__op_Inequality(v6, 0, 0);
}


void StandFigureBack___c__DisplayClass29_0___ctor(
        StandFigureBack___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StandFigureBack___c__DisplayClass29_0___CreatedExRoomStandFigure_b__0(
        StandFigureBack___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  struct StandFigureBack_o *_4__this; // x9
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  callback = this->fields.callback;
  _4__this->fields.isFirstLoading = 0;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}