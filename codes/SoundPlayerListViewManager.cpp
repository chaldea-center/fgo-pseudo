void __fastcall SoundPlayerListViewManager___ctor(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_49B67B0 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_5784/*"Effect/Soundplayer"*/, method);
    byte_49B67B0 = 1;
  }
  v5 = StringLiteral_5784/*"Effect/Soundplayer"*/;
  this->fields.EFFECT_ASSET_PATH_NAME = (struct System_String_o *)StringLiteral_5784/*"Effect/Soundplayer"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.EFFECT_ASSET_PATH_NAME, v5, v2, v3);
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall SoundPlayerListViewManager__CompareBgmEntity(
        SoundPlayerListViewManager_o *this,
        BgmEntity_o *a,
        BgmEntity_o *b,
        const MethodInfo *method)
{
  int32_t priority; // w8
  int32_t v5; // w9

  if ( !a || !b )
    sub_1B4D1EC(this, a);
  priority = a->fields.priority;
  v5 = b->fields.priority;
  if ( priority > v5 )
    return 1;
  if ( priority >= v5 )
    return 0;
  return -1;
}


void __fastcall SoundPlayerListViewManager__CreateList(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct UnityEngine_GameObject_o **p_playEffect; // x20
  UnityEngine_Object_o *playEffect; // x21
  const MethodInfo *v17; // x2
  Il2CppObject *EffetData; // x21
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  UnityEngine_GameObject_o *Instance; // x0
  int *v24; // x21
  __int64 v25; // x0
  int32_t klass; // w26
  System_Object_array *v27; // x21
  System_Comparison_T__o *v28; // x22
  _BOOL8 isRelease; // x0
  int32_t v30; // w22
  il2cpp_array_size_t v31; // w28
  Il2CppClass **v32; // x23
  BgmEntity_o **v33; // x23
  UnityEngine_GameObject_o *v34; // t1
  BgmEntity_o *v35; // x24
  __int64 v36; // x23
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct UnityEngine_GameObject_o *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 klass_low; // x10
  __int64 v46; // x8
  SoundPlayerListViewItem_o *v47; // x0
  int32_t max_length; // w1
  SoundPlayerListViewItem_o *v49; // x21
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct UnityEngine_GameObject_o *v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8

  if ( (byte_49B67A6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Sort_BgmEntity___, method);
    sub_1B4CF90(&System_Comparison_BgmEntity__TypeInfo, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_BgmMaster___, v6);
    sub_1B4CF90(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys_BgmEntity___, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&SoundPlayerListViewItem_TypeInfo, v12);
    sub_1B4CF90(&Method_SoundPlayerListViewManager_CompareBgmEntity__, v13);
    sub_1B4CF90(&StringLiteral_18544/*"ef_soundplay"*/, v14);
    byte_49B67A6 = 1;
  }
  p_playEffect = &this->fields.playEffect;
  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playEffect, 0, v2, v3);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(playEffect, 0LL, 0LL) )
  {
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  this,
                                  (System_String_o *)StringLiteral_18544/*"ef_soundplay"*/,
                                  v17);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__Instantiate_object_(
            EffetData,
            (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *p_playEffect = (struct UnityEngine_GameObject_o *)v19;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playEffect, (int32_t)v19, v20, v21);
    Instance = *p_playEffect;
    if ( !*p_playEffect )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(Instance, 0, 0LL);
    GameObjectExtensions__SafeSetParent(this->fields.playEffect, (UnityEngine_Component_o *)this, 0LL);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_36;
  v24 = (int *)Instance;
  v25 = sub_1B4D0C4(*((_QWORD *)&Instance->klass->vtable._1_Finalize.methodPtr
                    + 2
                    * *((unsigned __int16 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys_BgmEntity___ + 40)));
  Instance = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(int *, __int64))(v25 + 8))(v24, v25);
  if ( !Instance )
    goto LABEL_36;
  klass = (int32_t)Instance[1].klass;
  this->fields.playSoundMax = klass;
  v27 = (System_Object_array *)Instance;
  v28 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_BgmEntity__TypeInfo);
  System_Comparison_object____ctor(v28, (Il2CppObject *)this, Method_SoundPlayerListViewManager_CompareBgmEntity__, 0LL);
  System_Array__Sort_object__49088784(v27, v28, (const MethodInfo_2ED0910 *)Method_System_Array_Sort_BgmEntity___);
  if ( klass >= 1 )
  {
    v30 = 0;
    v31 = 0;
    do
    {
      if ( v31 >= v27->max_length )
LABEL_37:
        sub_1B4D1F4(isRelease, v22);
      v32 = &v27->obj.klass + (int)v31;
      v34 = (UnityEngine_GameObject_o *)v32[4];
      v33 = (BgmEntity_o **)(v32 + 4);
      Instance = v34;
      if ( !v34 )
        goto LABEL_36;
      isRelease = BgmEntity__isRelease((BgmEntity_o *)Instance, 0LL);
      if ( isRelease )
      {
        if ( v31 >= v27->max_length )
          goto LABEL_37;
        v35 = *v33;
        v36 = sub_1B4D1DC(SoundPlayerListViewItem_TypeInfo);
        SoundPlayerListViewItem___ctor((SoundPlayerListViewItem_o *)v36, v30, v35, v37);
        if ( !v36 )
          goto LABEL_36;
        v40 = *p_playEffect;
        *(_QWORD *)(v36 + 128) = *p_playEffect;
        sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 128), (int32_t)v40, v38, v39);
        Instance = (UnityEngine_GameObject_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_36;
        v43 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance[1].klass);
        if ( !v43 )
          goto LABEL_36;
        klass_low = SLODWORD(Instance[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v43 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v36,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = v43 + 8 * klass_low;
          LODWORD(Instance[1].klass) = klass_low + 1;
          *(_QWORD *)(v46 + 32) = v36;
          sub_1B4CF34((CGThumbnailListItem_o *)(v46 + 32), v36, v41, v42);
        }
        ++v30;
        if ( !*(_DWORD *)(v36 + 136) )
          ++this->fields.canPlaySoundNum;
      }
      else
      {
        --this->fields.playSoundMax;
      }
    }
    while ( klass != ++v31 );
  }
  v47 = (SoundPlayerListViewItem_o *)sub_1B4D1DC(SoundPlayerListViewItem_TypeInfo);
  max_length = v27->max_length;
  v49 = v47;
  SoundPlayerListViewItem___ctor(v47, max_length, 0LL, v50);
  if ( !v49
    || (v53 = *p_playEffect,
        v49->fields._playEffect_k__BackingField = *p_playEffect,
        sub_1B4CF34((CGThumbnailListItem_o *)&v49->fields._playEffect_k__BackingField, (int32_t)v53, v51, v52),
        (Instance = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL)
    || (v56 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v57 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++HIDWORD(Instance[1].klass),
        !v56) )
  {
LABEL_36:
    sub_1B4D1EC(Instance, v22);
  }
  v58 = SLODWORD(Instance[1].klass);
  if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v49,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = v56 + 8 * v58;
    LODWORD(Instance[1].klass) = v58 + 1;
    *(_QWORD *)(v59 + 32) = v49;
    sub_1B4CF34((CGThumbnailListItem_o *)(v59 + 32), (int32_t)v49, v54, v55);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SoundPlayerListViewItem_o *__fastcall SoundPlayerListViewManager__GetItem(
        SoundPlayerListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SoundPlayerListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49B67AC & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B4CF90(&SoundPlayerListViewItem_TypeInfo, v6);
    byte_49B67AC = 1;
  }
  result = (SoundPlayerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    if ( result->fields.sortIndex <= index )
      return 0LL;
    result = (SoundPlayerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !result )
      return result;
    methodPtr_low = LOBYTE(SoundPlayerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SoundPlayerListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != SoundPlayerListViewItem_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


void __fastcall SoundPlayerListViewManager__OnClickListView(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall SoundPlayerListViewManager__OnMoveEnd(SoundPlayerListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_49B67AF & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B67AF = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B4D1EC(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewManager__RequestListObject(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49B67AD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__, v11);
    sub_1B4CF90(&Method_SoundPlayerListViewManager_OnMoveEnd__, v12);
    sub_1B4CF90(&StringLiteral_9737/*"OnMoveEnd"*/, v13);
    byte_49B67AD = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B4D1EC(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9737/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B4D1EC(v19, v20);
      SoundPlayerListViewObject__Init_31937196((SoundPlayerListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewManager__RequestListObject_31936168(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49B67AE & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__, v9);
    sub_1B4CF90(&Method_SoundPlayerListViewManager_OnMoveEnd__, v10);
    sub_1B4CF90(&StringLiteral_9737/*"OnMoveEnd"*/, v11);
    byte_49B67AE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B4D1EC(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9737/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B4D1EC(v17, v18);
      SoundPlayerListViewObject__Init_31937280((SoundPlayerListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


void __fastcall SoundPlayerListViewManager__SetMode(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        SoundPlayerListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  SoundPlayerListViewManager__SetMode_31936020(this, mode, v6);
}


void __fastcall SoundPlayerListViewManager__SetMode_31936020(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    SoundPlayerListViewManager__RequestListObject_31936168(this, mode + 1, v5);
}


void __fastcall SoundPlayerListViewManager__SetMode_31936116(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  SoundPlayerListViewManager__SetMode_31936020(this, mode, v6);
}


void __fastcall SoundPlayerListViewManager__SetObjectItem(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_49B67AB & 1) == 0 )
  {
    this = (SoundPlayerListViewManager_o *)sub_1B4CF90(&SoundPlayerListViewObject_TypeInfo, obj);
    byte_49B67AB = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SoundPlayerListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SoundPlayerListViewObject_TypeInfo )
  {
    sub_1B4D1EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SoundPlayerListViewObject__Init_31935708((SoundPlayerListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall SoundPlayerListViewManager__addCanPlaySoundNum(
        SoundPlayerListViewManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.canPlaySoundNum += value;
}


void __fastcall SoundPlayerListViewManager__add_callbackFunc(
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

  if ( (byte_49B67A0 & 1) == 0 )
  {
    sub_1B4CF90(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, value);
    byte_49B67A0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SoundPlayerListViewManager_CallbackFunc_c *)v7->klass != SoundPlayerListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B8724C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1B4D4AC(v7);
  SoundPlayerListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SoundPlayerListViewManager__add_callbackFunc2(
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

  if ( (byte_49B67A2 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49B67A2 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1B8724C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1B4D4AC(v7);
  SoundPlayerListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall SoundPlayerListViewManager__endloadEffect(
        SoundPlayerListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( data )
  {
    this->fields.effectAssetData = data;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.effectAssetData, (int32_t)data, (int32_t)method, v3);
  }
}


int32_t __fastcall SoundPlayerListViewManager__getCanPlaySoundNum(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.canPlaySoundNum;
}


UnityEngine_GameObject_o *__fastcall SoundPlayerListViewManager__getEffetData(
        SoundPlayerListViewManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_49B67AA & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, name);
    byte_49B67AA = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.effectAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49169892(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  return result;
}


int32_t __fastcall SoundPlayerListViewManager__getPlaySoundMax(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.playSoundMax;
}


System_Collections_Generic_List_SoundPlayerListViewObject__o *__fastcall SoundPlayerListViewManager__get_ClippingObjectList(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49B67A5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49B67A5 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B4D1EC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B4D1EC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B4D1EC(0LL, v18);
      Item = (ListViewItem_o *)SoundPlayerListViewObject__GetItem((SoundPlayerListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1B4D1EC(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41341816((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B4D1EC(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B4D1EC(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B4D1EC(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B4D1EC(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v11;
}


System_Collections_Generic_List_SoundPlayerListViewObject__o *__fastcall SoundPlayerListViewManager__get_ObjectList(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49B67A4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    byte_49B67A4 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B4D1EC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B4D1EC(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B4D1EC(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B4D1EC(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v11;
}


void __fastcall SoundPlayerListViewManager__init(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playEffect, 0, v2, v3);
}


void __fastcall SoundPlayerListViewManager__loadSoundPlayerEffect(
        SoundPlayerListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v16; // x20

  if ( (byte_49B67A8 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, callback);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B4CF90(&Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__, v6);
    sub_1B4CF90(&SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo, v7);
    byte_49B67A8 = 1;
  }
  v8 = sub_1B4D1DC(SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 24), (int32_t)callback, v13, v14);
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v8,
    Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EFFECT_ASSET_PATH_NAME, v16, 1, 0LL);
}


void __fastcall SoundPlayerListViewManager__onClickCheckListView(
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
  this->fields.callbackFunc = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B4D1EC(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SoundPlayerListViewManager__onClickSelectListView(
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
  this->fields.callbackFunc = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B4D1EC(v6, v7);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SoundPlayerListViewManager__releaseSoundPlayerEffect(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *playEffect; // x20
  UnityEngine_Object_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19

  if ( (byte_49B67A9 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B67A9 = 1;
  }
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playEffect, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.playEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(v5, 0LL);
    this->fields.playEffect = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playEffect, 0, v6, v7);
  }
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(EFFECT_ASSET_PATH_NAME, 0LL);
}


void __fastcall SoundPlayerListViewManager__remove_callbackFunc(
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

  if ( (byte_49B67A1 & 1) == 0 )
  {
    sub_1B4CF90(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, value);
    byte_49B67A1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SoundPlayerListViewManager_CallbackFunc_c *)v7->klass != SoundPlayerListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B8724C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1B4D4AC(v7);
  SoundPlayerListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall SoundPlayerListViewManager__remove_callbackFunc2(
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

  if ( (byte_49B67A3 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, value);
    byte_49B67A3 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1B8724C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1B4D4AC(v7);
  SoundPlayerListViewManager__get_ObjectList(v10, v11);
}


void __fastcall SoundPlayerListViewManager__setUiApplyAllItem(
        SoundPlayerListViewManager_o *this,
        System_Collections_Generic_List_int__o *isNewList,
        System_String_o *playSoundName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w24
  int32_t v12; // w22
  SoundPlayerListViewItem_o *v13; // x23
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x29

  if ( (byte_49B67A7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, isNewList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1B4CF90(&SoundPlayerListViewItem_TypeInfo, v9);
    byte_49B67A7 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v12,
                                                                (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      v13 = (SoundPlayerListViewItem_o *)itemList;
      methodPtr_low = LOBYTE(SoundPlayerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (SoundPlayerListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != SoundPlayerListViewItem_TypeInfo )
      {
        break;
      }
      syncRoot = itemList[2].fields._syncRoot;
      if ( syncRoot )
      {
        if ( !isNewList )
          break;
        if ( System_Collections_Generic_List_int___Contains(
               isNewList,
               (int32_t)syncRoot[1].klass,
               (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v13->fields._isNew_k__BackingField = 0;
        }
        if ( !System_String__IsNullOrEmpty(playSoundName, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)syncRoot[1].monitor;
          if ( !itemList )
            break;
          if ( System_String__Equals_61128772((System_String_o *)itemList, playSoundName, 0LL) )
            v13->fields._isPlaySound_k__BackingField = 1;
        }
        SoundPlayerListViewItem__applyUi(v13, (const MethodInfo *)isNewList);
      }
      if ( size == ++v12 )
        return;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_1B4D1EC(itemList, isNewList);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewManager_CallbackFunc___ctor(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1995ED8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1995E80;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SoundPlayerListViewManager_CallbackFunc__BeginInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_49B67B1 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B4CF90(&SoundPlayerListViewManager_ResultKind_TypeInfo, v9);
    byte_49B67B1 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             SoundPlayerListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v14, callback, object);
}


void __fastcall SoundPlayerListViewManager_CallbackFunc__EndInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall SoundPlayerListViewManager_CallbackFunc__Invoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall SoundPlayerListViewManager___c__DisplayClass24_0___ctor(
        SoundPlayerListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerListViewManager___c__DisplayClass24_0___loadSoundPlayerEffect_b__0(
        SoundPlayerListViewManager___c__DisplayClass24_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SoundPlayerListViewManager_o *_4__this; // x8
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(this, data);
  if ( data )
  {
    _4__this->fields.effectAssetData = data;
    sub_1B4CF34((CGThumbnailListItem_o *)&_4__this->fields.effectAssetData, (int32_t)data, (int32_t)method, v3);
  }
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}