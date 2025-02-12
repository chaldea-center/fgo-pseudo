void __fastcall SoundPlayerListViewManager___ctor(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BC3493 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_5998/*"Effect/Soundplayer"*/, method);
    byte_4BC3493 = 1;
  }
  this->fields.EFFECT_ASSET_PATH_NAME = (struct System_String_o *)StringLiteral_5998/*"Effect/Soundplayer"*/;
  sub_1C1AB78(&this->fields.EFFECT_ASSET_PATH_NAME);
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
    sub_1C1AE30(this, a);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_o **p_playEffect; // x20
  UnityEngine_Object_o *playEffect; // x21
  const MethodInfo *v15; // x2
  Il2CppObject *EffetData; // x21
  __int64 v17; // x1
  UnityEngine_GameObject_o *Instance; // x0
  int *v19; // x21
  __int64 v20; // x0
  int32_t klass; // w26
  System_Object_array *v22; // x21
  System_Comparison_T__o *v23; // x22
  __int64 isRelease; // x0
  int32_t v25; // w22
  il2cpp_array_size_t v26; // w28
  Il2CppClass **v27; // x23
  BgmEntity_o **v28; // x23
  UnityEngine_GameObject_o *v29; // t1
  BgmEntity_o *v30; // x24
  SoundPlayerListViewItem_o *v31; // x23
  const MethodInfo *v32; // x3
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 klass_low; // x10
  __int64 v36; // x8
  SoundPlayerListViewItem_o *v37; // x0
  int32_t max_length; // w1
  Il2CppObject *v39; // x21
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8

  if ( (byte_4BC3489 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Sort_BgmEntity___, method);
    sub_1C1ABD4(&System_Comparison_BgmEntity__TypeInfo, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_BgmMaster___, v4);
    sub_1C1ABD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys_BgmEntity___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C1ABD4(&SoundPlayerListViewItem_TypeInfo, v10);
    sub_1C1ABD4(&Method_SoundPlayerListViewManager_CompareBgmEntity__, v11);
    sub_1C1ABD4(&StringLiteral_19164/*"ef_soundplay"*/, v12);
    byte_4BC3489 = 1;
  }
  p_playEffect = &this->fields.playEffect;
  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_1C1AB78(&this->fields.playEffect);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(playEffect, 0LL, 0LL) )
  {
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  this,
                                  (System_String_o *)StringLiteral_19164/*"ef_soundplay"*/,
                                  v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    *p_playEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         EffetData,
                                                         (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C1AB78(&this->fields.playEffect);
    Instance = *p_playEffect;
    if ( !*p_playEffect )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(Instance, 0, 0LL);
    GameObjectExtensions__SafeSetParent(this->fields.playEffect, (UnityEngine_Component_o *)this, 0LL);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_36;
  v19 = (int *)Instance;
  v20 = sub_1C1AD08(*((_QWORD *)&Instance->klass->vtable._1_Finalize.methodPtr
                    + 2
                    * *((unsigned __int16 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys_BgmEntity___ + 40)));
  Instance = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(int *, __int64))(v20 + 8))(v19, v20);
  if ( !Instance )
    goto LABEL_36;
  klass = (int32_t)Instance[1].klass;
  this->fields.playSoundMax = klass;
  v22 = (System_Object_array *)Instance;
  v23 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_BgmEntity__TypeInfo);
  System_Comparison_object____ctor(v23, (Il2CppObject *)this, Method_SoundPlayerListViewManager_CompareBgmEntity__, 0LL);
  System_Array__Sort_object__49729232(v22, v23, (const MethodInfo_2F6CED0 *)Method_System_Array_Sort_BgmEntity___);
  if ( klass >= 1 )
  {
    v25 = 0;
    v26 = 0;
    do
    {
      if ( v26 >= v22->max_length )
LABEL_37:
        sub_1C1AE38(isRelease, v17);
      v27 = &v22->obj.klass + (int)v26;
      v29 = (UnityEngine_GameObject_o *)v27[4];
      v28 = (BgmEntity_o **)(v27 + 4);
      Instance = v29;
      if ( !v29 )
        goto LABEL_36;
      isRelease = BgmEntity__isRelease((BgmEntity_o *)Instance, 0LL);
      if ( (isRelease & 1) != 0 )
      {
        if ( v26 >= v22->max_length )
          goto LABEL_37;
        v30 = *v28;
        v31 = (SoundPlayerListViewItem_o *)sub_1C1AE20(SoundPlayerListViewItem_TypeInfo);
        SoundPlayerListViewItem___ctor(v31, v25, v30, v32);
        if ( !v31 )
          goto LABEL_36;
        v31->fields._playEffect_k__BackingField = *p_playEffect;
        sub_1C1AB78(&v31->fields._playEffect_k__BackingField);
        Instance = (UnityEngine_GameObject_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_36;
        v33 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance[1].klass);
        if ( !v33 )
          goto LABEL_36;
        klass_low = SLODWORD(Instance[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v33 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v31,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = v33 + 8 * klass_low;
          LODWORD(Instance[1].klass) = klass_low + 1;
          *(_QWORD *)(v36 + 32) = v31;
          isRelease = sub_1C1AB78(v36 + 32);
        }
        ++v25;
        if ( !v31->fields.openType )
          ++this->fields.canPlaySoundNum;
      }
      else
      {
        --this->fields.playSoundMax;
      }
    }
    while ( klass != ++v26 );
  }
  v37 = (SoundPlayerListViewItem_o *)sub_1C1AE20(SoundPlayerListViewItem_TypeInfo);
  max_length = v22->max_length;
  v39 = (Il2CppObject *)v37;
  SoundPlayerListViewItem___ctor(v37, max_length, 0LL, v40);
  if ( !v39
    || (v39[8].klass = (Il2CppClass *)*p_playEffect,
        sub_1C1AB78(&v39[8]),
        (Instance = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL)
    || (v41 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v42 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++HIDWORD(Instance[1].klass),
        !v41) )
  {
LABEL_36:
    sub_1C1AE30(Instance, v17);
  }
  v43 = SLODWORD(Instance[1].klass);
  if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      v39,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = v41 + 8 * v43;
    LODWORD(Instance[1].klass) = v43 + 1;
    *(_QWORD *)(v44 + 32) = v39;
    sub_1C1AB78(v44 + 32);
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

  if ( (byte_4BC348F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C1ABD4(&SoundPlayerListViewItem_TypeInfo, v6);
    byte_4BC348F = 1;
  }
  result = (SoundPlayerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    if ( result->fields.sortIndex <= index )
      return 0LL;
    result = (SoundPlayerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4BC3492 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC3492 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C1AE30(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C1AB78(&this->fields.callbackFunc2);
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

  if ( (byte_4BC3490 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__, v11);
    sub_1C1ABD4(&Method_SoundPlayerListViewManager_OnMoveEnd__, v12);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v13);
    byte_4BC3490 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v19, v20);
      SoundPlayerListViewObject__Init_32673944((SoundPlayerListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewManager__RequestListObject_32672916(
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

  if ( (byte_4BC3491 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__, v9);
    sub_1C1ABD4(&Method_SoundPlayerListViewManager_OnMoveEnd__, v10);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v11);
    byte_4BC3491 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v17, v18);
      SoundPlayerListViewObject__Init_32674028((SoundPlayerListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
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
  sub_1C1AB78(&this->fields.callbackFunc);
  SoundPlayerListViewManager__SetMode_32672768(this, mode, v6);
}


void __fastcall SoundPlayerListViewManager__SetMode_32672768(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    SoundPlayerListViewManager__RequestListObject_32672916(this, mode + 1, v5);
}


void __fastcall SoundPlayerListViewManager__SetMode_32672864(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C1AB78(&this->fields.callbackFunc2);
  SoundPlayerListViewManager__SetMode_32672768(this, mode, v6);
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
  if ( (byte_4BC348E & 1) == 0 )
  {
    this = (SoundPlayerListViewManager_o *)sub_1C1ABD4(&SoundPlayerListViewObject_TypeInfo, obj);
    byte_4BC348E = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SoundPlayerListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SoundPlayerListViewObject_TypeInfo )
  {
    sub_1C1AE30(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SoundPlayerListViewObject__Init_32672456((SoundPlayerListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4BC3483 & 1) == 0 )
  {
    sub_1C1ABD4(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC3483 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1C1B0F0(v7);
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

  if ( (byte_4BC3485 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC3485 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1C1B0F0(v7);
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
    sub_1C1AB78(&this->fields.effectAssetData);
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

  if ( (byte_4BC348D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, name);
    byte_4BC348D = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.effectAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49812820(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
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
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC3488 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC3488 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C1AE30(0LL, v18);
      Item = (ListViewItem_o *)SoundPlayerListViewObject__GetItem((SoundPlayerListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1C1AE30(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_41959744((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1C1AE30(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C1AE30(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C1AE30(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C1AE30(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1C1AB78(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC3487 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC3487 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1C1AE30(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C1AE30(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C1AB78(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v11;
}


void __fastcall SoundPlayerListViewManager__init(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_1C1AB78(&this->fields.playEffect);
}


void __fastcall SoundPlayerListViewManager__loadSoundPlayerEffect(
        SoundPlayerListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v12; // x20

  if ( (byte_4BC348B & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, callback);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1C1ABD4(&Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__, v6);
    sub_1C1ABD4(&SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo, v7);
    byte_4BC348B = 1;
  }
  v8 = (Il2CppObject *)sub_1C1AE20(SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C1AE30(v9, v10);
  v8[1].klass = (Il2CppClass *)this;
  sub_1C1AB78(&v8[1]);
  v8[1].monitor = callback;
  sub_1C1AB78(&v8[1].monitor);
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    v8,
    Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EFFECT_ASSET_PATH_NAME, v12, 1, 0LL);
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
  v5 = sub_1C1AB78(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C1AE30(v5, v6);
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
  v5 = sub_1C1AB78(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C1AE30(v5, v6);
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
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19

  if ( (byte_4BC348C & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BC348C = 1;
  }
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playEffect, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.playEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v5, 0LL);
    this->fields.playEffect = 0LL;
    sub_1C1AB78(&this->fields.playEffect);
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

  if ( (byte_4BC3484 & 1) == 0 )
  {
    sub_1C1ABD4(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC3484 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1C1B0F0(v7);
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

  if ( (byte_4BC3486 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC3486 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1C1B0F0(v7);
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

  if ( (byte_4BC348A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Contains__, isNewList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_1C1ABD4(&SoundPlayerListViewItem_TypeInfo, v9);
    byte_4BC348A = 1;
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
                                                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
               (const MethodInfo_361FBE4 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v13->fields._isNew_k__BackingField = 0;
        }
        if ( !System_String__IsNullOrEmpty(playSoundName, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)syncRoot[1].monitor;
          if ( !itemList )
            break;
          if ( System_String__Equals_63048684((System_String_o *)itemList, playSoundName, 0LL) )
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
    sub_1C1AE30(itemList, isNewList);
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
  sub_1C1AB78(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A55C78;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A55C20;
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
  if ( (byte_4BC3494 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&SoundPlayerListViewManager_ResultKind_TypeInfo, v9);
    byte_4BC3494 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             SoundPlayerListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v14, callback, object);
}


void __fastcall SoundPlayerListViewManager_CallbackFunc__EndInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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
    sub_1C1AE30(this, data);
  if ( data )
  {
    _4__this->fields.effectAssetData = data;
    sub_1C1AB78(&_4__this->fields.effectAssetData);
  }
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}