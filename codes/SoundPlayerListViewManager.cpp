void __fastcall SoundPlayerListViewManager___ctor(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A56DCD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5851/*"Effect/Soundplayer"*/);
    byte_4A56DCD = 1;
  }
  v5 = StringLiteral_5851/*"Effect/Soundplayer"*/;
  this->fields.EFFECT_ASSET_PATH_NAME = (struct System_String_o *)StringLiteral_5851/*"Effect/Soundplayer"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.EFFECT_ASSET_PATH_NAME, v5, v2, v3);
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
    sub_1B8880C(this, a);
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
  int32_t v3; // w3
  struct UnityEngine_GameObject_o **p_playEffect; // x20
  UnityEngine_Object_o *playEffect; // x21
  const MethodInfo *v7; // x2
  Il2CppObject *EffetData; // x21
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  UnityEngine_GameObject_o *Instance; // x0
  int32_t klass; // w26
  System_Object_array *v15; // x21
  System_Comparison_T__o *v16; // x22
  _BOOL8 isRelease; // x0
  int32_t v18; // w22
  il2cpp_array_size_t v19; // w28
  Il2CppClass **v20; // x23
  BgmEntity_o **v21; // x23
  UnityEngine_GameObject_o *v22; // t1
  BgmEntity_o *v23; // x24
  __int64 v24; // x23
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  int32_t v27; // w3
  struct UnityEngine_GameObject_o *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 klass_low; // x10
  __int64 v34; // x8
  SoundPlayerListViewItem_o *v35; // x0
  int32_t max_length; // w1
  SoundPlayerListViewItem_o *v37; // x21
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  int32_t v40; // w3
  struct UnityEngine_GameObject_o *v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8

  if ( (byte_4A56DC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_BgmEntity___);
    sub_1B885B0(&System_Comparison_BgmEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_BgmEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SoundPlayerListViewItem_TypeInfo);
    sub_1B885B0(&Method_SoundPlayerListViewManager_CompareBgmEntity__);
    sub_1B885B0(&StringLiteral_18855/*"ef_soundplay"*/);
    byte_4A56DC3 = 1;
  }
  p_playEffect = &this->fields.playEffect;
  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playEffect, 0, v2, v3);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(playEffect, 0LL, 0LL) )
  {
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  this,
                                  (System_String_o *)StringLiteral_18855/*"ef_soundplay"*/,
                                  v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           EffetData,
           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *p_playEffect = (struct UnityEngine_GameObject_o *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playEffect, (int32_t)v9, v10, v11);
    Instance = *p_playEffect;
    if ( !*p_playEffect )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(Instance, 0, 0LL);
    GameObjectExtensions__SafeSetParent(this->fields.playEffect, (UnityEngine_Component_o *)this, 0LL);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataMasterBase__getEntitys_object_(
                                           (DataMasterBase_o *)Instance,
                                           (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_BgmEntity___);
  if ( !Instance )
    goto LABEL_36;
  klass = (int32_t)Instance[1].klass;
  this->fields.playSoundMax = klass;
  v15 = (System_Object_array *)Instance;
  v16 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BgmEntity__TypeInfo);
  System_Comparison_object____ctor(v16, (Il2CppObject *)this, Method_SoundPlayerListViewManager_CompareBgmEntity__, 0LL);
  System_Array__Sort_object__48551928(v15, v16, (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_BgmEntity___);
  if ( klass >= 1 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      if ( v19 >= v15->max_length )
LABEL_37:
        sub_1B88814(isRelease, v12);
      v20 = &v15->obj.klass + (int)v19;
      v22 = (UnityEngine_GameObject_o *)v20[4];
      v21 = (BgmEntity_o **)(v20 + 4);
      Instance = v22;
      if ( !v22 )
        goto LABEL_36;
      isRelease = BgmEntity__isRelease((BgmEntity_o *)Instance, 0LL);
      if ( isRelease )
      {
        if ( v19 >= v15->max_length )
          goto LABEL_37;
        v23 = *v21;
        v24 = sub_1B887FC(SoundPlayerListViewItem_TypeInfo);
        SoundPlayerListViewItem___ctor((SoundPlayerListViewItem_o *)v24, v18, v23, v25);
        if ( !v24 )
          goto LABEL_36;
        v28 = *p_playEffect;
        *(_QWORD *)(v24 + 128) = *p_playEffect;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 128), (int32_t)v28, v26, v27);
        Instance = (UnityEngine_GameObject_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_36;
        v31 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance[1].klass);
        if ( !v31 )
          goto LABEL_36;
        klass_low = SLODWORD(Instance[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v31 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v24,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = v31 + 8 * klass_low;
          LODWORD(Instance[1].klass) = klass_low + 1;
          *(_QWORD *)(v34 + 32) = v24;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 32), v24, v29, v30);
        }
        ++v18;
        if ( !*(_DWORD *)(v24 + 136) )
          ++this->fields.canPlaySoundNum;
      }
      else
      {
        --this->fields.playSoundMax;
      }
    }
    while ( klass != ++v19 );
  }
  v35 = (SoundPlayerListViewItem_o *)sub_1B887FC(SoundPlayerListViewItem_TypeInfo);
  max_length = v15->max_length;
  v37 = v35;
  SoundPlayerListViewItem___ctor(v35, max_length, 0LL, v38);
  if ( !v37
    || (v41 = *p_playEffect,
        v37->fields._playEffect_k__BackingField = *p_playEffect,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v37->fields._playEffect_k__BackingField,
          (int32_t)v41,
          v39,
          v40),
        (Instance = (UnityEngine_GameObject_o *)this->fields.itemList) == 0LL)
    || (v44 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v45 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++HIDWORD(Instance[1].klass),
        !v44) )
  {
LABEL_36:
    sub_1B8880C(Instance, v12);
  }
  v46 = SLODWORD(Instance[1].klass);
  if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v37,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = v44 + 8 * v46;
    LODWORD(Instance[1].klass) = v46 + 1;
    *(_QWORD *)(v47 + 32) = v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 32), (int32_t)v37, v42, v43);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


SoundPlayerListViewItem_o *__fastcall SoundPlayerListViewManager__GetItem(
        SoundPlayerListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  SoundPlayerListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A56DC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SoundPlayerListViewItem_TypeInfo);
    byte_4A56DC9 = 1;
  }
  result = (SoundPlayerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    if ( result->fields.sortIndex <= index )
      return 0LL;
    result = (SoundPlayerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A56DCC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56DCC = 1;
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
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A56DCA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__);
    sub_1B885B0(&Method_SoundPlayerListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56DCA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      SoundPlayerListViewObject__Init_31762904((SoundPlayerListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewManager__RequestListObject_31761876(
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

  if ( (byte_4A56DCB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__);
    sub_1B885B0(&Method_SoundPlayerListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56DCB = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      SoundPlayerListViewObject__Init_31762988((SoundPlayerListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SoundPlayerListViewManager__SetMode_31761728(this, mode, v6);
}


void __fastcall SoundPlayerListViewManager__SetMode_31761728(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    SoundPlayerListViewManager__RequestListObject_31761876(this, mode + 1, v5);
}


void __fastcall SoundPlayerListViewManager__SetMode_31761824(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  SoundPlayerListViewManager__SetMode_31761728(this, mode, v6);
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
  if ( (byte_4A56DC8 & 1) == 0 )
  {
    this = (SoundPlayerListViewManager_o *)sub_1B885B0(&SoundPlayerListViewObject_TypeInfo);
    byte_4A56DC8 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SoundPlayerListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SoundPlayerListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  SoundPlayerListViewObject__Init_31761416((SoundPlayerListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4A56DBD & 1) == 0 )
  {
    sub_1B885B0(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    byte_4A56DBD = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A56DBF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56DBF = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1B88ACC(v7);
  SoundPlayerListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall SoundPlayerListViewManager__endloadEffect(
        SoundPlayerListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3

  if ( data )
  {
    this->fields.effectAssetData = data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectAssetData, (int32_t)data, (int32_t)method, v3);
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

  if ( (byte_4A56DC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    byte_4A56DC7 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.effectAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48635516(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
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
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A56DC2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56DC2 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)SoundPlayerListViewObject__GetItem((SoundPlayerListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v3;
}


System_Collections_Generic_List_SoundPlayerListViewObject__o *__fastcall SoundPlayerListViewManager__get_ObjectList(
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
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A56DC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56DC1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v3;
}


void __fastcall SoundPlayerListViewManager__init(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playEffect, 0, v2, v3);
}


void __fastcall SoundPlayerListViewManager__loadSoundPlayerEffect(
        SoundPlayerListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v13; // x20

  if ( (byte_4A56DC5 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__);
    sub_1B885B0(&SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo);
    byte_4A56DC5 = 1;
  }
  v5 = sub_1B887FC(SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EFFECT_ASSET_PATH_NAME, v13, 1, 0LL);
}


void __fastcall SoundPlayerListViewManager__onClickCheckListView(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
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
  int32_t v3; // w3
  struct SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
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
  UnityEngine_Object_o *playEffect; // x20
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19

  if ( (byte_4A56DC6 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56DC6 = 1;
  }
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playEffect, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.playEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v4, 0LL);
    this->fields.playEffect = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playEffect, 0, v5, v6);
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

  if ( (byte_4A56DBE & 1) == 0 )
  {
    sub_1B885B0(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    byte_4A56DBE = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A56DC0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56DC0 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_1B88ACC(v7);
  SoundPlayerListViewManager__get_ObjectList(v10, v11);
}


void __fastcall SoundPlayerListViewManager__setUiApplyAllItem(
        SoundPlayerListViewManager_o *this,
        System_Collections_Generic_List_int__o *isNewList,
        System_String_o *playSoundName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w24
  int32_t v9; // w22
  SoundPlayerListViewItem_o *v10; // x23
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x29

  if ( (byte_4A56DC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&SoundPlayerListViewItem_TypeInfo);
    byte_4A56DC4 = 1;
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
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      v10 = (SoundPlayerListViewItem_o *)itemList;
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
               (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v10->fields._isNew_k__BackingField = 0;
        }
        if ( !System_String__IsNullOrEmpty(playSoundName, 0LL) )
        {
          itemList = (System_Collections_Generic_List_object__o *)syncRoot[1].monitor;
          if ( !itemList )
            break;
          if ( System_String__Equals_61715348((System_String_o *)itemList, playSoundName, 0LL) )
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
    sub_1B8880C(itemList, isNewList);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C8664;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C860C;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A56DCE & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&SoundPlayerListViewManager_ResultKind_TypeInfo);
    byte_4A56DCE = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             SoundPlayerListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall SoundPlayerListViewManager_CallbackFunc__EndInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  int32_t v3; // w3
  struct SoundPlayerListViewManager_o *_4__this; // x8
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, data);
  if ( data )
  {
    _4__this->fields.effectAssetData = data;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.effectAssetData,
      (int32_t)data,
      (int32_t)method,
      v3);
  }
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}