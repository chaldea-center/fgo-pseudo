void StandFigureBack___cctor(const MethodInfo *method)
{
  struct StandFigureBack_StaticFields *static_fields; // x8

  if ( (byte_4C36F73 & 1) == 0 )
  {
    sub_1C32C20(&StandFigureBack_TypeInfo);
    byte_4C36F73 = 1;
  }
  static_fields = StandFigureBack_TypeInfo->static_fields;
  static_fields->COSTUME_IMAGE_CNT_START = 11;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
}


void StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C36F72 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4C36F72 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.standFigureCollectList, (int32_t)v3, v4, v5);
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
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v13; // x21
  Il2CppObject *current; // x23
  UIStandFigureR_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UIStandFigureR_o *v18; // x24
  System_Collections_Generic_List_object__o *v19; // x21
  StandFigureCollect_o *v20; // x22
  const MethodInfo *v21; // x3
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  StandFigureCollect_o *v31; // x20
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C36F67 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StandFigureCollect_TypeInfo);
    byte_4C36F67 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(baseStandFigure, 0, 0);
  v9 = 40;
  if ( v8 )
    v9 = 48;
  v10 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0);
  if ( !EntityListOrderBy
    || (v13 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v10, 0);
    v31 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v31, 0, RenderPrefab, v32);
    if ( standFigureCollectList )
    {
      items = standFigureCollectList->fields._items;
      v36 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++standFigureCollectList->fields._version;
      if ( items )
      {
        size = standFigureCollectList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            standFigureCollectList,
            (Il2CppObject *)v31,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          standFigureCollectList->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v31;
          sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v31, v33, v34);
        }
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1C32E7C(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    v13,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = v40.fields._current;
    v15 = StandFigureManager__CreateRenderPrefab(v10, 0);
    v18 = v15;
    if ( !v15 )
      sub_1C32E7C(0);
    v15->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1C32BC4((CGThumbnailListItem_o *)&v15->fields.svtMultiPortraitEntity, (int32_t)current, v16, v17);
    v19 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v20 = (StandFigureCollect_o *)sub_1C32E6C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v20, (SvtMultiPortraitEntity_o *)current, v18, v21);
    if ( !v19 )
      sub_1C32E7C(v22);
    v25 = v19->fields._items;
    v26 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v19->fields._version;
    if ( !v25 )
      sub_1C32E7C(v22);
    v27 = v19->fields._size;
    if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        (Il2CppObject *)v20,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v28 = &v25->obj.klass + v27;
      v19->fields._size = v27 + 1;
      v28[4] = (Il2CppClass *)v20;
      sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v20, v23, v24);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  void *standFigureCollectList; // x0
  UIStandFigureR_o *v17; // x24
  System_Action_o *v18; // x25

  if ( (byte_4C36F6B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C32C20(&Method_StandFigureBack_EndLoad__);
    byte_4C36F6B = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
    || (v17 = (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3),
        v18 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(v18, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0),
        !v17) )
  {
    sub_1C32E7C(standFigureCollectList);
  }
  UIStandFigureR__SetCharacter_43951456(v17, svtId, imageLimitCount, offsetKind, faceType, v18, 0);
}


void StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C36F65 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36F65 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)standFigureCollectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v4 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current )
        sub_1C32E7C(v4);
      monitor = (UIStandFigureR_o *)v13.fields._current[1].monitor;
      if ( !monitor )
        sub_1C32E7C(0);
      UIStandFigureR__Destroy(monitor, 0);
      v7 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v7 )
        sub_1C32E7C(0);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71223828(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v9 = this->fields.standFigureCollectList;
    if ( !v9 )
LABEL_20:
      sub_1C32E7C(standFigureCollectList);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  }
}


void StandFigureBack__EndClose(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_baseCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (CGThumbnailListItem_o *)&this->fields.baseCallbackFunc;
  v7 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0;
    sub_1C32BC4(p_baseCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method);
  }
}


void StandFigureBack__EndFadein(StandFigureBack_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (CGThumbnailListItem_o *)&this->fields.baseCallbackFunc;
  v5 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0;
    sub_1C32BC4(p_baseCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void StandFigureBack__EndFadeout(StandFigureBack_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (CGThumbnailListItem_o *)&this->fields.baseCallbackFunc;
  v5 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0;
    sub_1C32BC4(p_baseCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
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
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  _BOOL4 isFirstLoading; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v11; // x20
  StandFigureBack_c *v12; // x0
  TweenPosition_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C36F70 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StandFigureBack_TypeInfo);
    sub_1C32C20(&StringLiteral_6003/*"EndFadein"*/);
    byte_4C36F70 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseCallbackFunc, (int32_t)callback, (int32_t)method, v3);
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
          v11 = this->fields.baseWindow;
          v12 = StandFigureBack_TypeInfo;
          if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
            v12 = StandFigureBack_TypeInfo;
          }
          v13 = TweenPosition__Begin(v11, v12->static_fields->OPEN_TIME, this->fields.basePosition, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( v13 )
            {
              v13->fields.method = 3;
              v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              v13->fields.eventReceiver = v14;
              sub_1C32BC4((CGThumbnailListItem_o *)&v13->fields.eventReceiver, (int32_t)v14, v15, v16);
              v17 = StringLiteral_6003/*"EndFadein"*/;
              v13->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6003/*"EndFadein"*/;
              sub_1C32BC4((CGThumbnailListItem_o *)&v13->fields.callWhenFinished, v17, v18, v19);
              return;
            }
LABEL_23:
            sub_1C32E7C(gameObject);
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
    StandFigureBack__EndFadein(this, v6);
  }
}


void StandFigureBack__Fadeout(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  _BOOL4 isDisp; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x20
  float x; // s8
  float y; // s9
  StandFigureBack_c *v15; // x0
  float z; // s10
  TweenPosition_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C36F71 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StandFigureBack_TypeInfo);
    sub_1C32C20(&StringLiteral_6004/*"EndFadeout"*/);
    byte_4C36F71 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseCallbackFunc, (int32_t)callback, (int32_t)method, v3);
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
        v11 = (UnityEngine_Transform_o *)gameObject;
        position = UnityEngine_Transform__get_position(this->fields.closeTransform, 0);
        if ( !v11 )
          goto LABEL_26;
        v25 = UnityEngine_Transform__InverseTransformPoint(v11, position, 0);
        v12 = this->fields.baseWindow;
        x = v25.fields.x;
        y = v25.fields.y;
        v15 = StandFigureBack_TypeInfo;
        z = v25.fields.z;
        if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
          v15 = StandFigureBack_TypeInfo;
        }
        v26.fields.x = x;
        v26.fields.y = y;
        v26.fields.z = z;
        v17 = TweenPosition__Begin(v12, v15->static_fields->OPEN_TIME, v26, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v17 )
          {
            v17->fields.method = 3;
            v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            v17->fields.eventReceiver = v18;
            sub_1C32BC4((CGThumbnailListItem_o *)&v17->fields.eventReceiver, (int32_t)v18, v19, v20);
            v21 = StringLiteral_6004/*"EndFadeout"*/;
            v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6004/*"EndFadeout"*/;
            sub_1C32BC4((CGThumbnailListItem_o *)&v17->fields.callWhenFinished, v21, v22, v23);
            return;
          }
LABEL_26:
          sub_1C32E7C(gameObject);
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
  StandFigureBack__EndClose(this, v6);
}


UIStandFigureR_o *StandFigureBack__GetSvtStandFigure(StandFigureBack_o *this, int32_t index, const MethodInfo *method)
{
  void *standFigureCollectList; // x0

  if ( (byte_4C36F62 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C36F62 = 1;
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

  if ( (byte_4C36F64 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36F64 = 1;
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
      sub_1C32E7C(transform);
    }
  }
}


void StandFigureBack__InitStandFigure(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v11; // x8
  UnityEngine_Transform_o *v12; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C36F66 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36F66 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  StandFigureBack__DestroyFigure(this, v6);
  this->fields.baseCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseCallbackFunc, (int32_t)callback, v7, v8);
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
        v11 = this->fields.closeTransform;
        if ( v11 )
        {
          v12 = (UnityEngine_Transform_o *)gameObject;
          position = UnityEngine_Transform__get_position(v11, 0);
          if ( v12 )
          {
            UnityEngine_Transform__set_position(v12, position, 0);
            return;
          }
        }
      }
LABEL_18:
      sub_1C32E7C(gameObject);
    }
  }
}


UIStandFigureR_o *StandFigureBack__RobSvtStandFigure(StandFigureBack_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v6; // x8
  System_Collections_Generic_List_object__o *v7; // x19

  if ( (byte_4C36F63 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C36F63 = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                index,
                                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__),
        (v6 = this->fields.standFigureCollectList) == 0)
    || (v7 = standFigureCollectList,
        standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                                (System_Collections_Generic_List_object__o *)v6,
                                                                                (Il2CppObject *)standFigureCollectList,
                                                                                (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__),
        !v7) )
  {
    sub_1C32E7C(standFigureCollectList);
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
  UIStandFigureR_o *monitor; // x22
  System_Action_o *v18; // x25
  _BOOL8 v19; // x0
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *v22; // x0
  _BOOL8 v23; // x0
  Il2CppClass *v24; // x8
  UIStandFigureR_o *v25; // x0
  System_Action_o *v26; // x20
  const MethodInfo *v27; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C36F6C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C32C20(&Method_StandFigureBack_EndLoad__);
    byte_4C36F6C = 1;
  }
  memset(&v30, 0, sizeof(v30));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                             (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_24;
    if ( (int)Item < 2 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
               0,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        monitor = (UIStandFigureR_o *)Item[1].monitor;
        v18 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
        if ( monitor )
        {
          UIStandFigureR__SetCharacter_43951456(monitor, svtId, imageLimitCount, offsetKind, faceType, v18, 0);
          return;
        }
      }
LABEL_24:
      sub_1C32E7C(Item);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v30 = v29;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v19 )
        break;
      current = v30.fields._current;
      if ( !v30.fields._current )
        sub_1C32E7C(v19);
      klass = v30.fields._current[1].klass;
      if ( !klass )
        sub_1C32E7C(v19);
      v22 = (UIStandFigureR_o *)v30.fields._current[1].monitor;
      if ( !v22 )
        sub_1C32E7C(0);
      v23 = UIStandFigureR__SetCharacterForImageId(
              v22,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              0,
              0,
              0,
              0);
      v24 = current[1].klass;
      if ( !v24 )
        sub_1C32E7C(v23);
      v25 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v25 )
        sub_1C32E7C(0);
      UIStandFigureR__SetDepth(
        v25,
        (HIDWORD(v24->_1.byval_arg.data) & ~(SHIDWORD(v24->_1.byval_arg.data) >> 31)) + depth,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v26 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v26, v27);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0);
  }
}


void StandFigureBack__SetFaceType(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0

  if ( (byte_4C36F68 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4C36F68 = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      if ( standFigureCollectList->fields._size < index )
        return;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              standFigureCollectList,
                                                                              index,
                                                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
    sub_1C32E7C(standFigureCollectList);
  }
}


void StandFigureBack__SetFaceTypeAll(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v8; // x0
  UIStandFigureR_o *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C36F69 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_4C36F69 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)standFigureCollectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields._current )
      sub_1C32E7C(v8);
    v9 = *(UIStandFigureR_o **)((char *)&v10.fields._current->klass + (unsigned __int64)&off_18);
    if ( !v9 )
      sub_1C32E7C(0);
    UIStandFigureR__SetFace(v9, faceType, fadeTime, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


void StandFigureBack__SetFaceTypeAndForm(
        StandFigureBack_o *this,
        int32_t faceType,
        int32_t formId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  _BOOL8 v8; // x0
  UIStandFigureR_o *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C36F6A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_4C36F6A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)standFigureCollectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields._current )
      sub_1C32E7C(v8);
    v9 = *(UIStandFigureR_o **)((char *)&v10.fields._current->klass + (unsigned __int64)&off_18);
    if ( !v9 )
      sub_1C32E7C(0);
    UIStandFigureR__SetFace_43959868(v9, faceType, formId, 0, 0.0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  int v19; // w28
  const MethodInfo *v20; // x3
  System_Action_o *baseCallbackFunc; // x20
  UIStandFigureR_o *Item; // x0
  _BOOL8 v23; // x0
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v27; // x0
  Il2CppClass *v28; // x8
  UIStandFigureR_o *v29; // x0
  const MethodInfo *v30; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C36F6D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C32C20(&Method_StandFigureBack_EndLoad__);
    byte_4C36F6D = 1;
  }
  memset(&v33, 0, sizeof(v33));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v19 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v19 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v20);
  if ( v19 )
  {
    baseCallbackFunc = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v19;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                 (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_30;
    if ( (int)Item < 2 )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
                                   0,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetCharacter_43951452(
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
      sub_1C32E7C(Item);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v23 )
        break;
      current = v33.fields._current;
      if ( !v33.fields._current )
        sub_1C32E7C(v23);
      klass = v33.fields._current[1].klass;
      if ( !klass )
        sub_1C32E7C(v23);
      monitor = (UIStandFigureR_o *)v33.fields._current[1].monitor;
      if ( !monitor )
        sub_1C32E7C(0);
      v27 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              formId,
              0,
              isPhotoWithMaster,
              0);
      v28 = current[1].klass;
      if ( !v28 )
        sub_1C32E7C(v27);
      v29 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v29 )
        sub_1C32E7C(0);
      UIStandFigureR__SetDepth(
        v29,
        (HIDWORD(v28->_1.byval_arg.data) & ~(SHIDWORD(v28->_1.byval_arg.data) >> 31)) + depth,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v30);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0);
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
  System_Collections_Generic_List_object__o *Item; // x0

  if ( (byte_4C36F6E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1C32C20(&Method_StandFigureBack_EndLoad__);
    byte_4C36F6E = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v13 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v13 = 1;
  v14 = v13;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&offsetKind);
  StandFigureBack__CreatePrefab(this, 0, 0, v15);
  if ( v13 )
  {
    baseCallbackFunc = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0
      || (Item = *(System_Collections_Generic_List_object__o **)&Item->fields._size) == 0 )
    {
      sub_1C32E7C(Item);
    }
    UIStandFigureR__SetCharacterForImageId(
      (UIStandFigureR_o *)Item,
      imageId,
      offsetKind,
      faceType,
      0,
      baseCallbackFunc,
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
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C36F6F & 1) == 0 )
  {
    sub_1C32C20(&StandFigureBack__WaitForLoadAllAssetBundle_d__32_TypeInfo);
    byte_4C36F6F = 1;
  }
  v5 = sub_1C32E6C(StandFigureBack__WaitForLoadAllAssetBundle_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


bool StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
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
  void *monitor; // x8
  UnityEngine_Behaviour_o *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *standFigureCollectList; // x20
  StandFigureBack___c_c *v9; // x0
  System_Func_object__bool__o *_9__32_0; // x21
  Il2CppObject *v11; // x22
  struct StandFigureBack___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  _BOOL8 v19; // x0
  void *v20; // x8
  UnityEngine_Behaviour_o *v21; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4C36F76 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1C32C20(&System_Func_StandFigureCollect__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1C32C20(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__32_0__);
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *)sub_1C32C20(&StandFigureBack___c_TypeInfo);
    byte_4C36F76 = 1;
  }
  memset(&v25, 0, sizeof(v25));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v25 = v24;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v25,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v5 )
        break;
      if ( !v25.fields._current )
        sub_1C32E7C(v5);
      monitor = v25.fields._current[1].monitor;
      if ( !monitor )
        sub_1C32E7C(v5);
      v7 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 4);
      if ( !v7 )
        sub_1C32E7C(0);
      UnityEngine_Behaviour__set_enabled(v7, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v9 = StandFigureBack___c_TypeInfo;
    if ( !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo);
      v9 = StandFigureBack___c_TypeInfo;
    }
    _9__32_0 = (System_Func_object__bool__o *)v9->static_fields->__9__32_0;
    if ( !_9__32_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = StandFigureBack___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__32_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_StandFigureCollect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__32_0,
        v11,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__32_0__,
        0);
      static_fields = StandFigureBack___c_TypeInfo->static_fields;
      static_fields->__9__32_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__32_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v13, v14);
    }
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *)System_Linq_Enumerable__Where_object_(
                                                                   standFigureCollectList,
                                                                   (System_Func_TSource__bool__o *)_9__32_0,
                                                                   (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !v2 )
      goto LABEL_41;
    v2->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)this;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._assetRendered_5__2, (int32_t)this, v15, v16);
LABEL_22:
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *)System_Linq_Enumerable__Count_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._assetRendered_5__2,
                                                                   (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( _4__this )
    {
      if ( (_DWORD)this != System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                             (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
      {
        v2->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C32BC4(p__2__current, 0, v17, v18);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      this = (StandFigureBack__WaitForLoadAllAssetBundle_d__32_o *)_4__this->fields.standFigureCollectList;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v24,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
        v25 = v24;
        while ( 1 )
        {
          v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
          if ( !v19 )
            break;
          if ( !v25.fields._current )
            sub_1C32E7C(v19);
          v20 = v25.fields._current[1].monitor;
          if ( !v20 )
            sub_1C32E7C(v19);
          v21 = (UnityEngine_Behaviour_o *)*((_QWORD *)v20 + 4);
          if ( !v21 )
            sub_1C32E7C(0);
          UnityEngine_Behaviour__set_enabled(v21, 1, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v25,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
        ActionExtensions__Call(v2->fields.action, 0);
        return 0;
      }
    }
LABEL_41:
    sub_1C32E7C(this);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__32_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C36F74 & 1) == 0 )
  {
    sub_1C32C20(&StandFigureBack___c_TypeInfo);
    byte_4C36F74 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(StandFigureBack___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StandFigureBack___c_TypeInfo->static_fields->__9 = (struct StandFigureBack___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)StandFigureBack___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C36F75 & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36F75 = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0 )
  {
    sub_1C32E7C(this);
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(StandFigureBack___c_o *, Il2CppMethodPointer, const MethodInfo *))this->klass[1].vtable._2_GetHashCode.method)(
                                 this,
                                 this->klass[1].vtable._3_ToString.methodPtr,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v5, 0, 0);
}