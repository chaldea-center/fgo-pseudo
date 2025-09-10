void SoundPlayerListViewManager___ctor(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C22A39 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5883/*"Effect/Soundplayer"*/);
    byte_4C22A39 = 1;
  }
  v5 = StringLiteral_5883/*"Effect/Soundplayer"*/;
  this->fields.EFFECT_ASSET_PATH_NAME = (struct System_String_o *)StringLiteral_5883/*"Effect/Soundplayer"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.EFFECT_ASSET_PATH_NAME, v5, v2, v3);
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


int32_t SoundPlayerListViewManager__CompareBgmEntity(
        SoundPlayerListViewManager_o *this,
        BgmEntity_o *a,
        BgmEntity_o *b,
        const MethodInfo *method)
{
  int32_t priority; // w8
  int32_t v5; // w9

  if ( !a || !b )
    sub_1C2D6EC(this, a);
  priority = a->fields.priority;
  v5 = b->fields.priority;
  if ( priority > v5 )
    return 1;
  if ( priority >= v5 )
    return 0;
  return -1;
}


void SoundPlayerListViewManager__CreateList(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UnityEngine_GameObject_o **p_playEffect; // x20
  UnityEngine_Object_o *playEffect; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *EffetData; // x21
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  UnityEngine_GameObject_o *Instance; // x0
  int32_t klass; // w26
  System_Object_array *v15; // x21
  System_Comparison_T__o *v16; // x22
  _BOOL8 isRelease; // x0
  __int64 v18; // x2
  int32_t v19; // w22
  unsigned int v20; // w28
  int *v21; // x23
  BgmEntity_o **v22; // x23
  UnityEngine_GameObject_o *v23; // t1
  BgmEntity_o *v24; // x24
  __int64 v25; // x23
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UnityEngine_GameObject_o *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v33; // x9
  __int64 klass_low; // x10
  intptr_t v35; // x8
  SoundPlayerListViewItem_o *v36; // x0
  int32_t max_length; // w1
  SoundPlayerListViewItem_o *v38; // x21
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct UnityEngine_GameObject_o *v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  intptr_t v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  intptr_t v48; // x8

  if ( (byte_4C22A2F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Sort_BgmEntity___);
    sub_1C2D490(&System_Comparison_BgmEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SoundPlayerListViewItem_TypeInfo);
    sub_1C2D490(&Method_SoundPlayerListViewManager_CompareBgmEntity__);
    sub_1C2D490(&StringLiteral_18849/*"ef_soundplay"*/);
    byte_4C22A2F = 1;
  }
  p_playEffect = &this->fields.playEffect;
  *(_QWORD *)&this->fields.canPlaySoundNum = 0;
  this->fields.playEffect = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playEffect, 0, v2, v3);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(playEffect, 0, 0) )
  {
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  this,
                                  (System_String_o *)StringLiteral_18849/*"ef_soundplay"*/,
                                  v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           EffetData,
           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *p_playEffect = (struct UnityEngine_GameObject_o *)v9;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playEffect, (int32_t)v9, v10, v11);
    Instance = *p_playEffect;
    if ( !*p_playEffect )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(Instance, 0, 0);
    GameObjectExtensions__SafeSetParent(this->fields.playEffect, (UnityEngine_Component_o *)this, 0);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___getEntitys(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           (const MethodInfo_338701C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
  if ( !Instance )
    goto LABEL_36;
  klass = (int32_t)Instance[1].klass;
  this->fields.playSoundMax = klass;
  v15 = (System_Object_array *)Instance;
  v16 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_BgmEntity__TypeInfo);
  System_Comparison_object____ctor(v16, (Il2CppObject *)this, Method_SoundPlayerListViewManager_CompareBgmEntity__, 0);
  System_Array__Sort_object__50966632(v15, v16, (const MethodInfo_309B068 *)Method_System_Array_Sort_BgmEntity___);
  if ( klass >= 1 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      if ( v20 >= LODWORD(v15->max_length) )
LABEL_37:
        sub_1C2D6F4(isRelease, v12, v18);
      v21 = (int *)(&v15->obj.klass + (int)v20);
      v23 = (UnityEngine_GameObject_o *)*((_QWORD *)v21 + 4);
      v22 = (BgmEntity_o **)(v21 + 8);
      Instance = v23;
      if ( !v23 )
        goto LABEL_36;
      isRelease = BgmEntity__isRelease((BgmEntity_o *)Instance, 0);
      if ( isRelease )
      {
        if ( v20 >= LODWORD(v15->max_length) )
          goto LABEL_37;
        v24 = *v22;
        v25 = sub_1C2D6DC(SoundPlayerListViewItem_TypeInfo);
        SoundPlayerListViewItem___ctor((SoundPlayerListViewItem_o *)v25, v19, v24, v26);
        if ( !v25 )
          goto LABEL_36;
        v29 = *p_playEffect;
        *(_QWORD *)(v25 + 136) = *p_playEffect;
        sub_1C2D434((CGThumbnailListItem_o *)(v25 + 136), (int32_t)v29, v27, v28);
        Instance = (UnityEngine_GameObject_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_36;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance[1].klass);
        if ( !m_CachedPtr )
          goto LABEL_36;
        klass_low = SLODWORD(Instance[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v25,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = m_CachedPtr + 8 * klass_low;
          LODWORD(Instance[1].klass) = klass_low + 1;
          *(_QWORD *)(v35 + 32) = v25;
          sub_1C2D434((CGThumbnailListItem_o *)(v35 + 32), v25, v30, v31);
        }
        ++v19;
        if ( !*(_DWORD *)(v25 + 144) )
          ++this->fields.canPlaySoundNum;
      }
      else
      {
        --this->fields.playSoundMax;
      }
    }
    while ( klass != ++v20 );
  }
  v36 = (SoundPlayerListViewItem_o *)sub_1C2D6DC(SoundPlayerListViewItem_TypeInfo);
  max_length = v15->max_length;
  v38 = v36;
  SoundPlayerListViewItem___ctor(v36, max_length, 0, v39);
  if ( !v38
    || (v42 = *p_playEffect,
        v38->fields._playEffect_k__BackingField = *p_playEffect,
        sub_1C2D434((CGThumbnailListItem_o *)&v38->fields._playEffect_k__BackingField, (int32_t)v42, v40, v41),
        (Instance = (UnityEngine_GameObject_o *)this->fields.itemList) == 0)
    || (v45 = Instance->fields.m_CachedPtr,
        v46 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++HIDWORD(Instance[1].klass),
        !v45) )
  {
LABEL_36:
    sub_1C2D6EC(Instance, v12);
  }
  v47 = SLODWORD(Instance[1].klass);
  if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v38,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = v45 + 8 * v47;
    LODWORD(Instance[1].klass) = v47 + 1;
    *(_QWORD *)(v48 + 32) = v38;
    sub_1C2D434((CGThumbnailListItem_o *)(v48 + 32), (int32_t)v38, v43, v44);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


SoundPlayerListViewItem_o *SoundPlayerListViewManager__GetItem(
        SoundPlayerListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SoundPlayerListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C22A35 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&SoundPlayerListViewItem_TypeInfo);
    byte_4C22A35 = 1;
  }
  result = (SoundPlayerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    if ( result->fields.sortIndex <= index )
      return 0;
    result = (SoundPlayerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !result )
      return result;
    naturalAligment = SoundPlayerListViewItem_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SoundPlayerListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != SoundPlayerListViewItem_TypeInfo )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void SoundPlayerListViewManager__OnClickListView(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void SoundPlayerListViewManager__OnMoveEnd(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C22A38 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22A38 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewManager__RequestListObject(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C22A36 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__);
    sub_1C2D490(&Method_SoundPlayerListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C22A36 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      SoundPlayerListViewObject__Init_33697004((SoundPlayerListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewManager__RequestListObject_33695976(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C22A37 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__);
    sub_1C2D490(&Method_SoundPlayerListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C22A37 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      SoundPlayerListViewObject__Init_33697088((SoundPlayerListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


void SoundPlayerListViewManager__SetMode(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        SoundPlayerListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  SoundPlayerListViewManager__SetMode_33695828(this, mode, v6);
}


void SoundPlayerListViewManager__SetMode_33695828(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    SoundPlayerListViewManager__RequestListObject_33695976(this, mode + 1, v5);
}


void SoundPlayerListViewManager__SetMode_33695924(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  SoundPlayerListViewManager__SetMode_33695828(this, mode, v6);
}


void SoundPlayerListViewManager__SetObjectItem(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C22A34 & 1) == 0 )
  {
    this = (SoundPlayerListViewManager_o *)sub_1C2D490(&SoundPlayerListViewObject_TypeInfo);
    byte_4C22A34 = 1;
  }
  if ( !obj
    || (naturalAligment = SoundPlayerListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SoundPlayerListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != SoundPlayerListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SoundPlayerListViewObject__Init_33695516((SoundPlayerListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void SoundPlayerListViewManager__addCanPlaySoundNum(
        SoundPlayerListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.canPlaySoundNum += value;
}


void SoundPlayerListViewManager__add_callbackFunc(
        SoundPlayerListViewManager_o *this,
        SoundPlayerListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SoundPlayerListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SoundPlayerListViewManager_o *v10; // x0
  SoundPlayerListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C22A29 & 1) == 0 )
  {
    sub_1C2D490(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    byte_4C22A29 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SoundPlayerListViewManager_CallbackFunc_c *)v7->klass != SoundPlayerListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1C2D9AC(v7);
  SoundPlayerListViewManager__remove_callbackFunc(v10, v11, v12);
}


void SoundPlayerListViewManager__add_callbackFunc2(
        SoundPlayerListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SoundPlayerListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C22A2B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C22A2B = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1C2D9AC(v7);
  SoundPlayerListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void SoundPlayerListViewManager__endloadEffect(
        SoundPlayerListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( data )
  {
    this->fields.effectAssetData = data;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effectAssetData, (int32_t)data, (int32_t)method, v3);
  }
}


int32_t SoundPlayerListViewManager__getCanPlaySoundNum(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.canPlaySoundNum;
}


UnityEngine_GameObject_o *SoundPlayerListViewManager__getEffetData(
        SoundPlayerListViewManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4C22A33 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    byte_4C22A33 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.effectAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  return result;
}


int32_t SoundPlayerListViewManager__getPlaySoundMax(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.playSoundMax;
}


System_Collections_Generic_List_SoundPlayerListViewObject__o *SoundPlayerListViewManager__get_ClippingObjectList(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C22A2E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22A2E = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)SoundPlayerListViewObject__GetItem((SoundPlayerListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v3;
}


System_Collections_Generic_List_SoundPlayerListViewObject__o *SoundPlayerListViewManager__get_ObjectList(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C22A2D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22A2D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v3;
}


void SoundPlayerListViewManager__init(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  *(_QWORD *)&this->fields.canPlaySoundNum = 0;
  this->fields.playEffect = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playEffect, 0, v2, v3);
}


void SoundPlayerListViewManager__loadSoundPlayerEffect(
        SoundPlayerListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v13; // x20

  if ( (byte_4C22A31 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__);
    sub_1C2D490(&SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo);
    byte_4C22A31 = 1;
  }
  v5 = sub_1C2D6DC(SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EFFECT_ASSET_PATH_NAME, v13, 1, 0);
}


void SoundPlayerListViewManager__onClickCheckListView(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C2D6EC(v6, v7);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      callbackFunc->fields.method);
  }
}


void SoundPlayerListViewManager__onClickSelectListView(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C2D6EC(v6, v7);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      callbackFunc->fields.method);
  }
}


void SoundPlayerListViewManager__releaseSoundPlayerEffect(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playEffect; // x20
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19

  if ( (byte_4C22A32 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22A32 = 1;
  }
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playEffect, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.playEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v4, 0);
    this->fields.playEffect = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.playEffect, 0, v5, v6);
  }
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(EFFECT_ASSET_PATH_NAME, 0);
}


void SoundPlayerListViewManager__remove_callbackFunc(
        SoundPlayerListViewManager_o *this,
        SoundPlayerListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SoundPlayerListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SoundPlayerListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C22A2A & 1) == 0 )
  {
    sub_1C2D490(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    byte_4C22A2A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SoundPlayerListViewManager_CallbackFunc_c *)v7->klass != SoundPlayerListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1C2D9AC(v7);
  SoundPlayerListViewManager__add_callbackFunc2(v10, v11, v12);
}


void SoundPlayerListViewManager__remove_callbackFunc2(
        SoundPlayerListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SoundPlayerListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C22A2C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C22A2C = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1C2D9AC(v7);
  SoundPlayerListViewManager__get_ObjectList(v10, v11);
}


void SoundPlayerListViewManager__setUiApplyAllItem(
        SoundPlayerListViewManager_o *this,
        System_Collections_Generic_List_int__o *isNewList,
        System_String_o *playSoundName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w24
  int32_t v9; // w22
  SoundPlayerListViewItem_o *v10; // x23
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *klass; // x29

  if ( (byte_4C22A30 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&SoundPlayerListViewItem_TypeInfo);
    byte_4C22A30 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      v10 = (SoundPlayerListViewItem_o *)itemList;
      naturalAligment = SoundPlayerListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SoundPlayerListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != SoundPlayerListViewItem_TypeInfo )
      {
        break;
      }
      klass = itemList[3].klass;
      if ( klass )
      {
        if ( !isNewList )
          break;
        if ( System_Collections_Generic_List_int___Contains(
               isNewList,
               (int32_t)klass->_1.name,
               (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v10->fields._isNew_k__BackingField = 0;
        }
        if ( !System_String__IsNullOrEmpty(playSoundName, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)klass->_1.namespaze;
          if ( !itemList )
            break;
          if ( System_String__Equals_63493168((System_String_o *)itemList, playSoundName, 0) )
            v10->fields._isPlaySound_k__BackingField = 1;
        }
        SoundPlayerListViewItem__applyUi(v10, (const MethodInfo *)isNewList);
      }
      if ( size == ++v9 )
        return;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_1C2D6EC(itemList, isNewList);
  }
}


void SoundPlayerListViewManager_CallbackFunc___ctor(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6B8BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6B864;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *SoundPlayerListViewManager_CallbackFunc__BeginInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4C22A3A & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&SoundPlayerListViewManager_ResultKind_TypeInfo);
    byte_4C22A3A = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             SoundPlayerListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void SoundPlayerListViewManager_CallbackFunc__EndInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void SoundPlayerListViewManager_CallbackFunc__Invoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void SoundPlayerListViewManager___c__DisplayClass24_0___ctor(
        SoundPlayerListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundPlayerListViewManager___c__DisplayClass24_0___loadSoundPlayerEffect_b__0(
        SoundPlayerListViewManager___c__DisplayClass24_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SoundPlayerListViewManager_o *_4__this; // x8
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, data);
  if ( data )
  {
    _4__this->fields.effectAssetData = data;
    sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.effectAssetData, (int32_t)data, (int32_t)method, v3);
  }
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}