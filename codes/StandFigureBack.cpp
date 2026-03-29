void StandFigureBack___cctor(const MethodInfo *method)
{
  struct StandFigureBack_StaticFields *static_fields; // x8

  if ( (byte_4D2FFAA & 1) == 0 )
  {
    sub_1C93AD4(&StandFigureBack_TypeInfo);
    byte_4D2FFAA = 1;
  }
  static_fields = StandFigureBack_TypeInfo->static_fields;
  static_fields->COSTUME_IMAGE_CNT_START = 11;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
}


void StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2FFA9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4D2FFA9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.standFigureCollectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UIStandFigureR_o *v24; // x24
  System_Collections_Generic_List_object__o *v25; // x21
  StandFigureCollect_o *v26; // x22
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  StandFigureCollect_o *v42; // x20
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2FF9E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StandFigureCollect_TypeInfo);
    byte_4D2FF9E = 1;
  }
  memset(&v55, 0, sizeof(v55));
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(baseStandFigure, 0, 0);
  v9 = 40;
  if ( v8 )
    v9 = 48;
  v10 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
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
           (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v10, 0);
    v42 = (StandFigureCollect_o *)sub_1C93D20(StandFigureCollect_TypeInfo);
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
            *(const MethodInfo_387999C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &items->obj.klass + size;
          standFigureCollectList->fields._size = size + 1;
          v53[4] = (Il2CppClass *)v42;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v53 + 4), (int32_t)v42, v44, v45, v46, v47, v48, v49);
        }
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1C93D2C(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v14,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v55 = v54;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = v55.fields._current;
    v16 = StandFigureManager__CreateRenderPrefab(v10, 0);
    v24 = v16;
    if ( !v16 )
      sub_1C93D2C(0, v17);
    v16->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v16->fields.svtMultiPortraitEntity,
      (int32_t)current,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v25 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v26 = (StandFigureCollect_o *)sub_1C93D20(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v26, (SvtMultiPortraitEntity_o *)current, v24, v27);
    if ( !v25 )
      sub_1C93D2C(v28, v29);
    v36 = v25->fields._items;
    v37 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v25->fields._version;
    if ( !v36 )
      sub_1C93D2C(v28, v29);
    v38 = v25->fields._size;
    if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)v26,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v36->obj.klass + v38;
      v25->fields._size = v38 + 1;
      v39[4] = (Il2CppClass *)v26;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v26, v30, v31, v32, v33, v34, v35);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
LABEL_28:
  this->fields.isFirstLoading = 1;
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

  if ( (byte_4D2FFA2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C93AD4(&Method_StandFigureBack_EndLoad__);
    byte_4D2FFA2 = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v18 = (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3),
        v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v19, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0),
        !v18) )
  {
    sub_1C93D2C(standFigureCollectList, v16);
  }
  UIStandFigureR__SetCharacter_44740112(v18, svtId, imageLimitCount, offsetKind, faceType, v19, 0);
}


void StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D2FF9C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FF9C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)standFigureCollectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v16,
             (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v5 )
        break;
      current = v16.fields._current;
      if ( !v16.fields._current )
        sub_1C93D2C(v5, v6);
      monitor = (UIStandFigureR_o *)v16.fields._current[1].monitor;
      if ( !monitor )
        sub_1C93D2C(0, v6);
      UIStandFigureR__Destroy(monitor, 0);
      v10 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v10 )
        sub_1C93D2C(0, v9);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v10, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_72120096(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v12 = this->fields.standFigureCollectList;
    if ( !v12 )
LABEL_20:
      sub_1C93D2C(standFigureCollectList, v3);
    size = v12->fields._size;
    v14 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0);
  }
}


void StandFigureBack__EndClose(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_baseCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.baseCallbackFunc;
  v12 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0;
    sub_1C93A78(p_baseCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void StandFigureBack__EndFadein(StandFigureBack_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.baseCallbackFunc;
  v9 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0;
    sub_1C93A78(p_baseCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void StandFigureBack__EndFadeout(StandFigureBack_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.baseCallbackFunc;
  v9 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0;
    sub_1C93A78(p_baseCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  _BOOL4 isFirstLoading; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v16; // x20
  StandFigureBack_c *v17; // x0
  TweenPosition_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4D2FFA7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StandFigureBack_TypeInfo);
    sub_1C93AD4(&StringLiteral_6030/*"EndFadein"*/);
    byte_4D2FFA7 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
      {
        closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
        {
          v16 = this->fields.baseWindow;
          v17 = StandFigureBack_TypeInfo;
          if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
            v17 = StandFigureBack_TypeInfo;
          }
          v18 = TweenPosition__Begin(v16, v17->static_fields->OPEN_TIME, this->fields.basePosition, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( v18 )
            {
              v18->fields.method = 3;
              v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              v18->fields.eventReceiver = v19;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v18->fields.eventReceiver,
                (int32_t)v19,
                v20,
                v21,
                v22,
                v23,
                v24,
                v25);
              v26 = StringLiteral_6030/*"EndFadein"*/;
              v18->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6030/*"EndFadein"*/;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v18->fields.callWhenFinished,
                v26,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
              return;
            }
LABEL_23:
            sub_1C93D2C(gameObject, v13);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  _BOOL4 isDisp; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x20
  StandFigureBack_c *v17; // x0
  TweenPosition_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Vector3_o v33; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2FFA8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StandFigureBack_TypeInfo);
    sub_1C93AD4(&StringLiteral_6031/*"EndFadeout"*/);
    byte_4D2FFA8 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
    {
      closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v15 = (UnityEngine_Transform_o *)gameObject;
        position = UnityEngine_Transform__get_position(this->fields.closeTransform, 0);
        if ( !v15 )
          goto LABEL_26;
        v33 = UnityEngine_Transform__InverseTransformPoint(v15, position, 0);
        v16 = this->fields.baseWindow;
        v17 = StandFigureBack_TypeInfo;
        if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
          v17 = StandFigureBack_TypeInfo;
        }
        v18 = TweenPosition__Begin(v16, v17->static_fields->OPEN_TIME, v33, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v18 )
          {
            v18->fields.method = 3;
            v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            v18->fields.eventReceiver = v19;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v18->fields.eventReceiver,
              (int32_t)v19,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
            v26 = StringLiteral_6031/*"EndFadeout"*/;
            v18->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6031/*"EndFadeout"*/;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->fields.callWhenFinished, v26, v27, v28, v29, v30, v31, v32);
            return;
          }
LABEL_26:
          sub_1C93D2C(gameObject, v10);
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

  if ( (byte_4D2FF99 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4D2FF99 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0 )
  {
    sub_1C93D2C(standFigureCollectList, *(_QWORD *)&index);
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
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v8; // x8
  UnityEngine_Transform_o *v9; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2FF9B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FF9B = 1;
  }
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  *(_WORD *)&this->fields.isFirstLoading = 0;
  this->fields.isDisp = 0;
  v6 = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
    {
      transform = this->fields.baseWindow;
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
        v8 = this->fields.closeTransform;
        if ( v8 )
        {
          v9 = (UnityEngine_Transform_o *)transform;
          position = UnityEngine_Transform__get_position(v8, 0);
          if ( v9 )
          {
            UnityEngine_Transform__set_position(v9, position, 0);
            return;
          }
        }
      }
LABEL_22:
      sub_1C93D2C(transform, v4);
    }
  }
}


void StandFigureBack__InitStandFigure(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v16; // x8
  UnityEngine_Transform_o *v17; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2FF9D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FF9D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  StandFigureBack__DestroyFigure(this, v7);
  this->fields.baseCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseCallbackFunc,
    (int32_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.isDispRequest = 1;
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) && !this->fields.isBasePosition )
  {
    gameObject = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
    {
      gameObject = this->fields.baseWindow;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
        v16 = this->fields.closeTransform;
        if ( v16 )
        {
          v17 = (UnityEngine_Transform_o *)gameObject;
          position = UnityEngine_Transform__get_position(v16, 0);
          if ( v17 )
          {
            UnityEngine_Transform__set_position(v17, position, 0);
            return;
          }
        }
      }
LABEL_18:
      sub_1C93D2C(gameObject, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *StandFigureBack__RobSvtStandFigure(StandFigureBack_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v6; // x8
  System_Collections_Generic_List_object__o *v7; // x19

  if ( (byte_4D2FF9A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4D2FF9A = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                index,
                                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__),
        (v6 = this->fields.standFigureCollectList) == 0)
    || (v7 = standFigureCollectList,
        standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                                (System_Collections_Generic_List_object__o *)v6,
                                                                                (Il2CppObject *)standFigureCollectList,
                                                                                (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__),
        !v7) )
  {
    sub_1C93D2C(standFigureCollectList, *(_QWORD *)&index);
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
  Il2CppObject *Item; // x0
  __int64 v17; // x1
  UIStandFigureR_o *monitor; // x22
  System_Action_o *v19; // x25
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppClass *v27; // x8
  UIStandFigureR_o *v28; // x0
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2FFA3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C93AD4(&Method_StandFigureBack_EndLoad__);
    byte_4D2FFA3 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                             (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_24;
    if ( (int)Item < 2 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
               0,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        monitor = (UIStandFigureR_o *)Item[1].monitor;
        v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
        if ( monitor )
        {
          UIStandFigureR__SetCharacter_44740112(monitor, svtId, imageLimitCount, offsetKind, faceType, v19, 0);
          return;
        }
      }
LABEL_24:
      sub_1C93D2C(Item, v17);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v20 )
        break;
      current = v33.fields._current;
      if ( !v33.fields._current )
        sub_1C93D2C(v20, v21);
      klass = v33.fields._current[1].klass;
      if ( !klass )
        sub_1C93D2C(v20, v21);
      v24 = (UIStandFigureR_o *)v33.fields._current[1].monitor;
      if ( !v24 )
        sub_1C93D2C(0, v21);
      v25 = UIStandFigureR__SetCharacterForImageId(
              v24,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              0,
              0,
              0,
              0,
              0);
      v27 = current[1].klass;
      if ( !v27 )
        sub_1C93D2C(v25, v26);
      v28 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v28 )
        sub_1C93D2C(0, v26);
      UIStandFigureR__SetDepth(
        v28,
        (HIDWORD(v27->_1.byval_arg.data) & ~(SHIDWORD(v27->_1.byval_arg.data) >> 31)) + depth,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v29, v30);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0);
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

  if ( (byte_4D2FF9F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4D2FF9F = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      if ( standFigureCollectList->fields._size < index )
        return;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              standFigureCollectList,
                                                                              index,
                                                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
    sub_1C93D2C(standFigureCollectList, v9);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2FFA0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_4D2FFA0 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1C93D2C(0, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)standFigureCollectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1C93D2C(v8, v9);
    v10 = *(UIStandFigureR_o **)((char *)&v11.fields._current->klass + (unsigned __int64)&off_18);
    if ( !v10 )
      sub_1C93D2C(0, v9);
    UIStandFigureR__SetFace(v10, faceType, fadeTime, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2FFA1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_4D2FFA1 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1C93D2C(0, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)standFigureCollectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1C93D2C(v8, v9);
    v10 = *(UIStandFigureR_o **)((char *)&v11.fields._current->klass + (unsigned __int64)&off_18);
    if ( !v10 )
      sub_1C93D2C(0, v9);
    UIStandFigureR__SetFace_44751792(v10, faceType, formId, 0, 0.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  int v20; // w28
  const MethodInfo *v21; // x3
  System_Action_o *baseCallbackFunc; // x20
  UIStandFigureR_o *Item; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x28
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppClass *v32; // x8
  UIStandFigureR_o *v33; // x0
  const MethodInfo *v34; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2FFA4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C93AD4(&Method_StandFigureBack_EndLoad__);
    byte_4D2FFA4 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v20 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v20 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v21);
  if ( v20 )
  {
    baseCallbackFunc = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v20;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                 (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_30;
    if ( (int)Item < 2 )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
                                   0,
                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetCharacter_44740108(
            Item,
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
LABEL_30:
      sub_1C93D2C(Item, v24);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v37 = v36;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v25 )
        break;
      current = v37.fields._current;
      if ( !v37.fields._current )
        sub_1C93D2C(v25, v26);
      klass = v37.fields._current[1].klass;
      if ( !klass )
        sub_1C93D2C(v25, v26);
      monitor = (UIStandFigureR_o *)v37.fields._current[1].monitor;
      if ( !monitor )
        sub_1C93D2C(0, v26);
      v30 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              formId,
              0,
              isPhotoWithMaster,
              isSoloPhoto,
              0);
      v32 = current[1].klass;
      if ( !v32 )
        sub_1C93D2C(v30, v31);
      v33 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v33 )
        sub_1C93D2C(0, v31);
      UIStandFigureR__SetDepth(
        v33,
        (HIDWORD(v32->_1.byval_arg.data) & ~(SHIDWORD(v32->_1.byval_arg.data) >> 31)) + depth,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v34);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0);
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

  if ( (byte_4D2FFA5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C93AD4(&Method_StandFigureBack_EndLoad__);
    byte_4D2FFA5 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v13 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v13 = 1;
  v14 = v13;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&offsetKind);
  StandFigureBack__CreatePrefab(this, 0, 0, v15);
  if ( v13 )
  {
    baseCallbackFunc = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
      || (Item = *(System_Collections_Generic_List_object__o **)&Item->fields._size) == 0 )
    {
      sub_1C93D2C(Item, v18);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2FFA6 & 1) == 0 )
  {
    sub_1C93AD4(&StandFigureBack__WaitForLoadAllAssetBundle_d__32_TypeInfo);
    byte_4D2FFA6 = 1;
  }
  v5 = sub_1C93D20(StandFigureBack__WaitForLoadAllAssetBundle_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


bool StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


bool StandFigureBack__get_IsDisp(StandFigureBack_o *this, const MethodInfo *method)
{
  return this->fields.isDispRequest;
}


void StandFigureBack__WaitForLoadAllAssetBundle_d__32___ctor(
        StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool StandFigureBack__WaitForLoadAllAssetBundle_d__32__MoveNext(
        StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *this,
        const MethodInfo *method)
{
  StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *v2; // x19
  int32_t _1__state; // w8
  struct StandFigureBack_o *_4__this; // x23
  _BOOL8 v5; // x0
  __int64 v6; // x1
  void *monitor; // x8
  UnityEngine_Behaviour_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *standFigureCollectList; // x20
  StandFigureBack___c_c *v10; // x0
  System_Func_object__bool__o *_9__32_0; // x21
  Il2CppObject *v12; // x22
  struct StandFigureBack___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  _BOOL8 v32; // x0
  __int64 v33; // x1
  void *v34; // x8
  UnityEngine_Behaviour_o *v35; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4D2FFAD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C93AD4(&System_Func_StandFigureCollect__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C93AD4(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__32_0__);
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *)sub_1C93AD4(&StandFigureBack___c_TypeInfo);
    byte_4D2FFAD = 1;
  }
  memset(&v39, 0, sizeof(v39));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
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
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *)_4__this->fields.standFigureCollectList;
    if ( !this )
      goto LABEL_41;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v39 = v38;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v39,
             (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v5 )
        break;
      if ( !v39.fields._current )
        sub_1C93D2C(v5, v6);
      monitor = v39.fields._current[1].monitor;
      if ( !monitor )
        sub_1C93D2C(v5, v6);
      v8 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 4);
      if ( !v8 )
        sub_1C93D2C(0, v6);
      UnityEngine_Behaviour__set_enabled(v8, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v10 = StandFigureBack___c_TypeInfo;
    if ( !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo);
      v10 = StandFigureBack___c_TypeInfo;
    }
    _9__32_0 = (System_Func_object__bool__o *)v10->static_fields->__9__32_0;
    if ( !_9__32_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = StandFigureBack___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__32_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_StandFigureCollect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__32_0,
        v12,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__32_0__,
        0);
      static_fields = StandFigureBack___c_TypeInfo->static_fields;
      static_fields->__9__32_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__32_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__32_0,
        (int32_t)_9__32_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *)System_Linq_Enumerable__Where_object_(
                                                                   standFigureCollectList,
                                                                   (System_Func_TSource__bool__o *)_9__32_0,
                                                                   (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !v2 )
      goto LABEL_41;
    v2->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)this;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v2->fields._assetRendered_5__2,
      (int32_t)this,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
LABEL_22:
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *)System_Linq_Enumerable__Count_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._assetRendered_5__2,
                                                                   (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( _4__this )
    {
      if ( (_DWORD)this != System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                             (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
      {
        v2->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C93A78(p__2__current, 0, v26, v27, v28, v29, v30, v31);
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return 1;
      }
      this = (StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *)_4__this->fields.standFigureCollectList;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v38,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
        v39 = v38;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v39,
                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
          if ( !v32 )
            break;
          if ( !v39.fields._current )
            sub_1C93D2C(v32, v33);
          v34 = v39.fields._current[1].monitor;
          if ( !v34 )
            sub_1C93D2C(v32, v33);
          v35 = (UnityEngine_Behaviour_o *)*((_QWORD *)v34 + 4);
          if ( !v35 )
            sub_1C93D2C(0, v33);
          UnityEngine_Behaviour__set_enabled(v35, 1, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v39,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
        ActionExtensions__Call(v2->fields.action, 0);
        return 0;
      }
    }
LABEL_41:
    sub_1C93D2C(this, method);
  }
  return 0;
}


Il2CppObject *StandFigureBack__WaitForLoadAllAssetBundle_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn StandFigureBack__WaitForLoadAllAssetBundle_d__32__System_Collections_IEnumerator_Reset(
        StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__32_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *StandFigureBack__WaitForLoadAllAssetBundle_d__32__System_Collections_IEnumerator_get_Current(
        StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void StandFigureBack__WaitForLoadAllAssetBundle_d__32__System_IDisposable_Dispose(
        StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *this,
        const MethodInfo *method)
{
  ;
}


void StandFigureBack___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FFAB & 1) == 0 )
  {
    sub_1C93AD4(&StandFigureBack___c_TypeInfo);
    byte_4D2FFAB = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(StandFigureBack___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StandFigureBack___c_TypeInfo->static_fields->__9 = (struct StandFigureBack___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)StandFigureBack___c_TypeInfo->static_fields,
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


bool StandFigureBack___c___WaitForLoadAllAssetBundle_b__32_0(
        StandFigureBack___c_o *this,
        StandFigureCollect_o *x,
        const MethodInfo *method)
{
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4D2FFAC & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FFAC = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0 )
  {
    sub_1C93D2C(this, x);
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(StandFigureBack___c_o *, Il2CppMethodPointer, const MethodInfo *))this->klass[1].vtable._2_GetHashCode.method)(
                                 this,
                                 this->klass[1].vtable._3_ToString.methodPtr,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v5, 0, 0);
}