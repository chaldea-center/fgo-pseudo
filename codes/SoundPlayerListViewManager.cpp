void __fastcall SoundPlayerListViewManager___ctor(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1

  if ( (byte_4B11CAC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5964/*"Effect/Soundplayer"*/, method, v2);
    byte_4B11CAC = 1;
  }
  v4 = StringLiteral_5964/*"Effect/Soundplayer"*/;
  this->fields.EFFECT_ASSET_PATH_NAME = (struct System_String_o *)StringLiteral_5964/*"Effect/Soundplayer"*/;
  sub_1BCA784(&this->fields.EFFECT_ASSET_PATH_NAME, v4);
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
    sub_1BCAA3C(this, a);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct UnityEngine_GameObject_o **p_playEffect; // x20
  __int64 v25; // x1
  UnityEngine_Object_o *playEffect; // x21
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  Il2CppObject *EffetData; // x21
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  int32_t klass; // w26
  System_Object_array *v36; // x21
  System_Comparison_T__o *v37; // x22
  __int64 isRelease; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  int32_t v41; // w22
  il2cpp_array_size_t v42; // w28
  Il2CppClass **v43; // x23
  BgmEntity_o **v44; // x23
  UnityEngine_GameObject_o *v45; // t1
  BgmEntity_o *v46; // x24
  SoundPlayerListViewItem_o *v47; // x23
  const MethodInfo *v48; // x3
  struct UnityEngine_GameObject_o *v49; // x1
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 klass_low; // x10
  __int64 v53; // x8
  SoundPlayerListViewItem_o *v54; // x0
  int32_t max_length; // w1
  Il2CppObject *v56; // x21
  const MethodInfo *v57; // x3
  struct UnityEngine_GameObject_o *v58; // x1
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8

  if ( (byte_4B11CA2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_BgmEntity___, method, v2);
    sub_1BCA7E0(&System_Comparison_BgmEntity__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_BgmEntity___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&SoundPlayerListViewItem_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SoundPlayerListViewManager_CompareBgmEntity__, v20, v21);
    sub_1BCA7E0(&StringLiteral_19049/*"ef_soundplay"*/, v22, v23);
    byte_4B11CA2 = 1;
  }
  p_playEffect = &this->fields.playEffect;
  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_1BCA784(&this->fields.playEffect, 0LL);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Equality(playEffect, 0LL, 0LL) )
  {
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  this,
                                  (System_String_o *)StringLiteral_19049/*"ef_soundplay"*/,
                                  v27);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    v30 = UnityEngine_Object__Instantiate_object_(
            EffetData,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *p_playEffect = (struct UnityEngine_GameObject_o *)v30;
    sub_1BCA784(&this->fields.playEffect, v30);
    Instance = *p_playEffect;
    if ( !*p_playEffect )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(Instance, 0, 0LL);
    GameObjectExtensions__SafeSetParent(this->fields.playEffect, (UnityEngine_Component_o *)this, 0LL);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataMasterBase__getEntitys_object_(
                                           (DataMasterBase_o *)Instance,
                                           (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_BgmEntity___);
  if ( !Instance )
    goto LABEL_36;
  klass = (int32_t)Instance[1].klass;
  this->fields.playSoundMax = klass;
  v36 = (System_Object_array *)Instance;
  v37 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_BgmEntity__TypeInfo, v31, v33, v34);
  System_Comparison_object____ctor(v37, (Il2CppObject *)this, Method_SoundPlayerListViewManager_CompareBgmEntity__, 0LL);
  System_Array__Sort_object__49153980(v36, v37, (const MethodInfo_2EE07BC *)Method_System_Array_Sort_BgmEntity___);
  if ( klass >= 1 )
  {
    v41 = 0;
    v42 = 0;
    do
    {
      if ( v42 >= v36->max_length )
LABEL_37:
        sub_1BCAA44(isRelease, v31);
      v43 = &v36->obj.klass + (int)v42;
      v45 = (UnityEngine_GameObject_o *)v43[4];
      v44 = (BgmEntity_o **)(v43 + 4);
      Instance = v45;
      if ( !v45 )
        goto LABEL_36;
      isRelease = BgmEntity__isRelease((BgmEntity_o *)Instance, 0LL);
      if ( (isRelease & 1) != 0 )
      {
        if ( v42 >= v36->max_length )
          goto LABEL_37;
        v46 = *v44;
        v47 = (SoundPlayerListViewItem_o *)sub_1BCAA2C(SoundPlayerListViewItem_TypeInfo, v31, v39, v40);
        SoundPlayerListViewItem___ctor(v47, v41, v46, v48);
        if ( !v47 )
          goto LABEL_36;
        v49 = *p_playEffect;
        v47->fields._playEffect_k__BackingField = *p_playEffect;
        sub_1BCA784(&v47->fields._playEffect_k__BackingField, v49);
        Instance = (UnityEngine_GameObject_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_36;
        v50 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance[1].klass);
        if ( !v50 )
          goto LABEL_36;
        klass_low = SLODWORD(Instance[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v50 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v47,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = v50 + 8 * klass_low;
          LODWORD(Instance[1].klass) = klass_low + 1;
          *(_QWORD *)(v53 + 32) = v47;
          isRelease = sub_1BCA784(v53 + 32, v47);
        }
        ++v41;
        if ( !v47->fields.openType )
          ++this->fields.canPlaySoundNum;
      }
      else
      {
        --this->fields.playSoundMax;
      }
    }
    while ( klass != ++v42 );
  }
  v54 = (SoundPlayerListViewItem_o *)sub_1BCAA2C(SoundPlayerListViewItem_TypeInfo, v31, v39, v40);
  max_length = v36->max_length;
  v56 = (Il2CppObject *)v54;
  SoundPlayerListViewItem___ctor(v54, max_length, 0LL, v57);
  if ( !v56
    || (v58 = *p_playEffect,
        v56[8].klass = (Il2CppClass *)*p_playEffect,
        sub_1BCA784(&v56[8], v58),
        (Instance = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL)
    || (v59 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v60 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++HIDWORD(Instance[1].klass),
        !v59) )
  {
LABEL_36:
    sub_1BCAA3C(Instance, v31);
  }
  v61 = SLODWORD(Instance[1].klass);
  if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      v56,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = v59 + 8 * v61;
    LODWORD(Instance[1].klass) = v61 + 1;
    *(_QWORD *)(v62 + 32) = v56;
    sub_1BCA784(v62 + 32, v56);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SoundPlayerListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B11CA8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&SoundPlayerListViewItem_TypeInfo, v7, v8);
    byte_4B11CA8 = 1;
  }
  result = (SoundPlayerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    if ( result->fields.sortIndex <= index )
      return 0LL;
    result = (SoundPlayerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B11CAB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11CAB = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784(&this->fields.callbackFunc2, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11CA9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_SoundPlayerListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B11CA9 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      SoundPlayerListViewObject__Init_32310016((SoundPlayerListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewManager__RequestListObject_32308988(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11CAA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_SoundPlayerListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B11CAA = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      SoundPlayerListViewObject__Init_32310100((SoundPlayerListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
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
  sub_1BCA784(&this->fields.callbackFunc, callback);
  SoundPlayerListViewManager__SetMode_32308840(this, mode, v6);
}


void __fastcall SoundPlayerListViewManager__SetMode_32308840(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    SoundPlayerListViewManager__RequestListObject_32308988(this, mode + 1, v5);
}


void __fastcall SoundPlayerListViewManager__SetMode_32308936(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  SoundPlayerListViewManager__SetMode_32308840(this, mode, v6);
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
  if ( (byte_4B11CA7 & 1) == 0 )
  {
    this = (SoundPlayerListViewManager_o *)sub_1BCA7E0(&SoundPlayerListViewObject_TypeInfo, obj, item);
    byte_4B11CA7 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SoundPlayerListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SoundPlayerListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SoundPlayerListViewObject__Init_32308528((SoundPlayerListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4B11C9C & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11C9C = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B11C9E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11C9E = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1BCACFC(v7);
  SoundPlayerListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall SoundPlayerListViewManager__endloadEffect(
        SoundPlayerListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( data )
  {
    this->fields.effectAssetData = data;
    sub_1BCA784(&this->fields.effectAssetData, data);
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

  if ( (byte_4B11CA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, name, method);
    byte_4B11CA6 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.effectAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49237568(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B11CA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11CA1 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)SoundPlayerListViewObject__GetItem((SoundPlayerListViewObject_o *)Component_object, v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v33, v34);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v30;
        sub_1BCA784(v38 + 4, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v21;
}


System_Collections_Generic_List_SoundPlayerListViewObject__o *__fastcall SoundPlayerListViewManager__get_ObjectList(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B11CA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11CA0 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCA784(v33 + 4, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v21;
}


void __fastcall SoundPlayerListViewManager__init(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_1BCA784(&this->fields.playEffect, 0LL);
}


void __fastcall SoundPlayerListViewManager__loadSoundPlayerEffect(
        SoundPlayerListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  AssetLoader_LoadEndDataHandler_o *v19; // x20
  __int64 v20; // x1

  if ( (byte_4B11CA4 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__, v8, v9);
    sub_1BCA7E0(&SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo, v10, v11);
    byte_4B11CA4 = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo, callback, method, v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v12[1], this);
  v12[1].monitor = callback;
  sub_1BCA784(&v12[1].monitor, callback);
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17, v18);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    v12,
    Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
  AssetManager__loadAssetStorage(EFFECT_ASSET_PATH_NAME, v19, 1, 0LL);
}


void __fastcall SoundPlayerListViewManager__onClickCheckListView(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  struct SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *playEffect; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x21
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19

  if ( (byte_4B11CA5 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11CA5 = 1;
  }
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(playEffect, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)this->fields.playEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(v8, 0LL);
    this->fields.playEffect = 0LL;
    sub_1BCA784(&this->fields.playEffect, 0LL);
  }
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
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

  if ( (byte_4B11C9D & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11C9D = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B11C9F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11C9F = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1BCACFC(v7);
  SoundPlayerListViewManager__get_ObjectList(v10, v11);
}


void __fastcall SoundPlayerListViewManager__setUiApplyAllItem(
        SoundPlayerListViewManager_o *this,
        System_Collections_Generic_List_int__o *isNewList,
        System_String_o *playSoundName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w24
  int32_t v15; // w22
  SoundPlayerListViewItem_o *v16; // x23
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x29

  if ( (byte_4B11CA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, isNewList, playSoundName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&SoundPlayerListViewItem_TypeInfo, v11, v12);
    byte_4B11CA3 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v15 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v15,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      v16 = (SoundPlayerListViewItem_o *)itemList;
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
               (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v16->fields._isNew_k__BackingField = 0;
        }
        if ( !System_String__IsNullOrEmpty(playSoundName, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)syncRoot[1].monitor;
          if ( !itemList )
            break;
          if ( System_String__Equals_62409536((System_String_o *)itemList, playSoundName, 0LL) )
            v16->fields._isPlaySound_k__BackingField = 1;
        }
        SoundPlayerListViewItem__applyUi(v16, (const MethodInfo *)isNewList);
      }
      if ( size == ++v15 )
        return;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_1BCAA3C(itemList, isNewList);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A06914;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A068BC;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B11CAD & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&SoundPlayerListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B11CAD = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(SoundPlayerListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall SoundPlayerListViewManager_CallbackFunc__EndInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  struct SoundPlayerListViewManager_o *_4__this; // x8
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, data);
  if ( data )
  {
    _4__this->fields.effectAssetData = data;
    sub_1BCA784(&_4__this->fields.effectAssetData, data);
  }
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}