void SoundPlayerListViewManager___ctor(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596BD0E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6142/*"Effect/Soundplayer"*/);
    byte_596BD0E = 1;
  }
  v9 = StringLiteral_6142/*"Effect/Soundplayer"*/;
  this->fields.EFFECT_ASSET_PATH_NAME = (struct System_String_o *)StringLiteral_6142/*"Effect/Soundplayer"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.EFFECT_ASSET_PATH_NAME, v9, v2, v3, v4, v5, v6, v7);
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
  bool v6; // cc
  int32_t v7; // w8

  if ( !a || !b )
    sub_2213CDC(this, a);
  priority = a->fields.priority;
  v5 = b->fields.priority;
  v6 = priority <= v5;
  if ( priority >= v5 )
    v7 = 0;
  else
    v7 = -1;
  if ( v6 )
    return v7;
  else
    return 1;
}


void SoundPlayerListViewManager__CreateList(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *playEffect; // x20
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *EffetData; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  UnityEngine_GameObject_o *Instance; // x0
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_GameObject_c *klass; // x26
  System_Comparison_BgmEntity__c *v27; // x0
  System_Comparison_T__o *v28; // x21
  _BOOL8 isRelease; // x0
  __int64 v30; // x27
  int32_t v31; // w21
  void **p_monitor; // x29
  BgmEntity_o *v33; // x23
  __int64 v34; // x22
  const MethodInfo *v35; // x3
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct UnityEngine_GameObject_o *v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v50; // x9
  __int64 klass_low; // x10
  intptr_t v52; // x8
  SoundPlayerListViewItem_o *v53; // x0
  int32_t v54; // w1
  SoundPlayerListViewItem_o *v55; // x20
  const MethodInfo *v56; // x3
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  struct UnityEngine_GameObject_o *v63; // x1
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  intptr_t v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  intptr_t v73; // x8

  if ( (byte_596BD04 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_BgmEntity___);
    sub_2213A60(&System_Comparison_BgmEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SoundPlayerListViewItem_TypeInfo);
    sub_2213A60(&Method_SoundPlayerListViewManager_CompareBgmEntity__);
    sub_2213A60(&StringLiteral_19727/*"ef_soundplay"*/);
    byte_596BD04 = 1;
  }
  *(_QWORD *)&this->fields.canPlaySoundNum = 0;
  this->fields.playEffect = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playEffect, 0, v2, v3, v4, v5, v6, v7);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Equality(playEffect, 0, 0) )
  {
    EffetData = (Il2CppObject *)SoundPlayerListViewManager__getEffetData(
                                  this,
                                  (System_String_o *)StringLiteral_19727/*"ef_soundplay"*/,
                                  v12);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    v16 = UnityEngine_Object__Instantiate_object_(
            EffetData,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.playEffect = (struct UnityEngine_GameObject_o *)v16;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.playEffect,
      (int32_t)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    Instance = this->fields.playEffect;
    if ( !Instance )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive(Instance, 0, 0);
    GameObjectExtensions__SafeSetParent(this->fields.playEffect, (UnityEngine_Component_o *)this, 0);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___getEntitys(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           (const MethodInfo_3F0FEAC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
  if ( !Instance )
    goto LABEL_36;
  v25 = Instance;
  klass = Instance[1].klass;
  v27 = System_Comparison_BgmEntity__TypeInfo;
  this->fields.playSoundMax = (int)klass;
  v28 = (System_Comparison_T__o *)sub_2213CCC(v27);
  System_Comparison_object____ctor(v28, (Il2CppObject *)this, Method_SoundPlayerListViewManager_CompareBgmEntity__, 0);
  System_Array__Sort_object__58432120(
    (System_Object_array *)v25,
    v28,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_BgmEntity___);
  if ( (int)klass >= 1 )
  {
    v30 = 0;
    v31 = 0;
    p_monitor = &v25[1].monitor;
    do
    {
      if ( (unsigned int)v30 >= LODWORD(v25[1].klass) )
LABEL_37:
        sub_2213CE4(isRelease);
      Instance = (UnityEngine_GameObject_o *)p_monitor[v30];
      if ( !Instance )
        goto LABEL_36;
      isRelease = BgmEntity__isRelease((BgmEntity_o *)Instance, 0);
      if ( isRelease )
      {
        if ( (unsigned int)v30 >= LODWORD(v25[1].klass) )
          goto LABEL_37;
        v33 = (BgmEntity_o *)p_monitor[v30];
        v34 = sub_2213CCC(SoundPlayerListViewItem_TypeInfo);
        SoundPlayerListViewItem___ctor((SoundPlayerListViewItem_o *)v34, v31, v33, v35);
        if ( !v34 )
          goto LABEL_36;
        v42 = this->fields.playEffect;
        *(_QWORD *)(v34 + 136) = v42;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 136), (int32_t)v42, v36, v37, v38, v39, v40, v41);
        Instance = (UnityEngine_GameObject_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_36;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v50 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance[1].klass);
        if ( !m_CachedPtr )
          goto LABEL_36;
        klass_low = SLODWORD(Instance[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v34,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = m_CachedPtr + 8 * klass_low;
          LODWORD(Instance[1].klass) = klass_low + 1;
          *(_QWORD *)(v52 + 32) = v34;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 32), v34, v43, v44, v45, v46, v47, v48);
        }
        ++v31;
        if ( !*(_DWORD *)(v34 + 144) )
          ++this->fields.canPlaySoundNum;
      }
      else
      {
        --this->fields.playSoundMax;
      }
    }
    while ( (_DWORD)klass != (_DWORD)++v30 );
  }
  v53 = (SoundPlayerListViewItem_o *)sub_2213CCC(SoundPlayerListViewItem_TypeInfo);
  v54 = (int32_t)v25[1].klass;
  v55 = v53;
  SoundPlayerListViewItem___ctor(v53, v54, 0, v56);
  if ( !v55
    || (v63 = this->fields.playEffect,
        v55->fields._playEffect_k__BackingField = v63,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v55->fields._playEffect_k__BackingField,
          (int32_t)v63,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62),
        (Instance = (UnityEngine_GameObject_o *)this->fields.itemList) == 0)
    || (v70 = Instance->fields.m_CachedPtr,
        v71 = Method_System_Collections_Generic_List_ListViewItem__Add__,
        ++HIDWORD(Instance[1].klass),
        !v70) )
  {
LABEL_36:
    sub_2213CDC(Instance, v23);
  }
  v72 = SLODWORD(Instance[1].klass);
  if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v55,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v73 = v70 + 8 * v72;
    LODWORD(Instance[1].klass) = v72 + 1;
    *(_QWORD *)(v73 + 32) = v55;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 32), (int32_t)v55, v64, v65, v66, v67, v68, v69);
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

  if ( (byte_596BD0A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&SoundPlayerListViewItem_TypeInfo);
    byte_596BD0A = 1;
  }
  result = (SoundPlayerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    if ( result->fields.sortIndex <= index )
      return 0;
    result = (SoundPlayerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596BD0D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD0D = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BD0B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__);
    sub_2213A60(&Method_SoundPlayerListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BD0B = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      SoundPlayerListViewObject__Init_40647680((SoundPlayerListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewManager__RequestListObject_40646676(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BD0C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__);
    sub_2213A60(&Method_SoundPlayerListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BD0C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)SoundPlayerListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      SoundPlayerListViewObject__Init_40647764((SoundPlayerListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


void SoundPlayerListViewManager__SetMode(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        SoundPlayerListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SoundPlayerListViewManager__SetMode_40646528(this, mode, v10);
}


void SoundPlayerListViewManager__SetMode_40646528(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    SoundPlayerListViewManager__RequestListObject_40646676(this, mode + 1, v5);
}


void SoundPlayerListViewManager__SetMode_40646624(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  SoundPlayerListViewManager__SetMode_40646528(this, mode, v10);
}


void SoundPlayerListViewManager__SetObjectItem(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596BD09 & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewObject_TypeInfo);
    byte_596BD09 = 1;
  }
  if ( obj
    && (naturalAligment = SoundPlayerListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SoundPlayerListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == SoundPlayerListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  SoundPlayerListViewObject__Init_40646216((SoundPlayerListViewObject_o *)v7, v8, (const MethodInfo *)item);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerListViewManager_o *v11; // x0
  SoundPlayerListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BCFE & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    byte_596BCFE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SoundPlayerListViewManager_CallbackFunc_c *)v6->klass != SoundPlayerListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewManager_o *)sub_221405C(v6, SoundPlayerListViewManager_CallbackFunc_TypeInfo, v7, v8);
  SoundPlayerListViewManager__remove_callbackFunc(v11, v12, v13);
}


void SoundPlayerListViewManager__add_callbackFunc2(
        SoundPlayerListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BD00 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BD00 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  SoundPlayerListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void SoundPlayerListViewManager__endloadEffect(
        SoundPlayerListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( data )
  {
    this->fields.effectAssetData = data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectAssetData,
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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

  if ( (byte_596BD08 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    byte_596BD08 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.effectAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58532980(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596BD03 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD03 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)SoundPlayerListViewObject__GetItem((SoundPlayerListViewObject_o *)Component_object, v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v3;
}


System_Collections_Generic_List_SoundPlayerListViewObject__o *SoundPlayerListViewManager__get_ObjectList(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596BD02 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD02 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v3;
}


void SoundPlayerListViewManager__init(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  *(_QWORD *)&this->fields.canPlaySoundNum = 0;
  this->fields.playEffect = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playEffect, 0, v2, v3, v4, v5, v6, v7);
}


void SoundPlayerListViewManager__loadSoundPlayerEffect(
        SoundPlayerListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2

  if ( (byte_596BD06 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__);
    sub_2213A60(&SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo);
    byte_596BD06 = 1;
  }
  v5 = sub_2213CCC(SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22, v23);
  AssetManager__loadAssetStorage(EFFECT_ASSET_PATH_NAME, v21, 1, 0, 0);
}


void SoundPlayerListViewManager__onClickCheckListView(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      callbackFunc->fields.method);
  }
}


void SoundPlayerListViewManager__releaseSoundPlayerEffect(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *playEffect; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19

  if ( (byte_596BD07 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD07 = 1;
  }
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(playEffect, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.playEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(v7, 0);
    this->fields.playEffect = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playEffect, 0, v8, v9, v10, v11, v12, v13);
  }
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
  AssetManager__releaseAssetStorage(EFFECT_ASSET_PATH_NAME, 0);
}


void SoundPlayerListViewManager__remove_callbackFunc(
        SoundPlayerListViewManager_o *this,
        SoundPlayerListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BCFF & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    byte_596BCFF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SoundPlayerListViewManager_CallbackFunc_c *)v6->klass != SoundPlayerListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewManager_o *)sub_221405C(v6, SoundPlayerListViewManager_CallbackFunc_TypeInfo, v7, v8);
  SoundPlayerListViewManager__add_callbackFunc2(v11, v12, v13);
}


void SoundPlayerListViewManager__remove_callbackFunc2(
        SoundPlayerListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596BD01 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BD01 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  SoundPlayerListViewManager__get_ObjectList(v11, v12);
}


void SoundPlayerListViewManager__setUiApplyAllItem(
        SoundPlayerListViewManager_o *this,
        System_Collections_Generic_List_int__o *isNewList,
        System_String_o *playSoundName,
        const MethodInfo *method)
{
  SoundPlayerListViewManager_o *v6; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w24
  int32_t v9; // w22
  SoundPlayerListViewItem_o *v10; // x23
  __int64 naturalAligment; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x29

  v6 = this;
  if ( (byte_596BD05 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (SoundPlayerListViewManager_o *)sub_2213A60(&SoundPlayerListViewItem_TypeInfo);
    byte_596BD05 = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
    goto LABEL_21;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      this = (SoundPlayerListViewManager_o *)v6->fields.itemList;
      if ( !this )
        break;
      this = (SoundPlayerListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)this,
                                               v9,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      v10 = (SoundPlayerListViewItem_o *)this;
      naturalAligment = SoundPlayerListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (SoundPlayerListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != SoundPlayerListViewItem_TypeInfo )
      {
        break;
      }
      dragParentObject = this->fields.dragParentObject;
      if ( dragParentObject )
      {
        if ( !isNewList )
          break;
        if ( System_Collections_Generic_List_int___Contains(
               isNewList,
               dragParentObject->fields.m_CachedPtr,
               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v10->fields._isNew_k__BackingField = 0;
        }
        if ( !System_String__IsNullOrEmpty(playSoundName, 0) )
        {
          this = (SoundPlayerListViewManager_o *)dragParentObject[1].klass;
          if ( !this )
            break;
          if ( System_String__Equals_75686512((System_String_o *)this, playSoundName, 0) )
            v10->fields._isPlaySound_k__BackingField = 1;
        }
        SoundPlayerListViewItem__applyUi(v10, (const MethodInfo *)isNewList);
      }
      if ( size == ++v9 )
        return;
    }
LABEL_21:
    sub_2213CDC(this, isNewList);
  }
}


void SoundPlayerListViewManager_CallbackFunc___ctor(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2003920;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_20038C8;
}


System_IAsyncResult_o *SoundPlayerListViewManager_CallbackFunc__BeginInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_596BD0F & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewManager_ResultKind_TypeInfo);
    byte_596BD0F = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(SoundPlayerListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void SoundPlayerListViewManager_CallbackFunc__EndInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SoundPlayerListViewManager_o *_4__this; // x8
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, data);
  if ( data )
  {
    _4__this->fields.effectAssetData = data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.effectAssetData,
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}