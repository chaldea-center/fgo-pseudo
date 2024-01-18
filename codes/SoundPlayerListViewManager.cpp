void __fastcall SoundPlayerListViewManager___ctor(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_41876FF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5849/*"Effect/Soundplayer"*/, method);
    byte_41876FF = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_5849/*"Effect/Soundplayer"*/;
  this->fields.EFFECT_ASSET_PATH_NAME = (struct System_String_o *)StringLiteral_5849/*"Effect/Soundplayer"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.EFFECT_ASSET_PATH_NAME, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B2C434(this, a);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct UnityEngine_GameObject_o **p_playEffect; // x20
  UnityEngine_Object_o *playEffect; // x21
  const MethodInfo *v22; // x2
  UnityEngine_GameObject_o *EffetData; // x21
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  BattleBuffData_BuffData_o *Instance; // x0
  int32_t count; // w25
  BattleBuffData_BuffData_array *v34; // x21
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v35; // x22
  _BOOL8 isRelease; // x0
  __int64 v37; // x26
  int32_t v38; // w22
  BattleBuffData_BuffData_o **m_Items; // x28
  BgmEntity_o *v40; // x24
  __int64 v41; // x23
  const MethodInfo *v42; // x3
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  SoundPlayerListViewItem_o *v50; // x0
  int32_t max_length; // w1
  SoundPlayerListViewItem_o *v52; // x21
  const MethodInfo *v53; // x3
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  __int64 v61; // x0

  if ( (byte_41876F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_BgmEntity___, method);
    sub_B2C35C(&Method_System_Comparison_BgmEntity___ctor__, v9);
    sub_B2C35C(&System_Comparison_BgmEntity__TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_BgmEntity___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&SoundPlayerListViewItem_TypeInfo, v17);
    sub_B2C35C(&Method_SoundPlayerListViewManager_CompareBgmEntity__, v18);
    sub_B2C35C(&StringLiteral_18208/*"ef_soundplay"*/, v19);
    byte_41876F5 = 1;
  }
  p_playEffect = &this->fields.playEffect;
  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playEffect, 0LL, v2, v3, v4, v5, v6, v7);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(playEffect, 0LL, 0LL) )
  {
    EffetData = SoundPlayerListViewManager__getEffetData(this, (System_String_o *)StringLiteral_18208/*"ef_soundplay"*/, v22);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)EffetData,
                                   (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *p_playEffect = (struct UnityEngine_GameObject_o *)v24;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playEffect, v24, v25, v26, v27, v28, v29, v30);
    Instance = (BattleBuffData_BuffData_o *)*p_playEffect;
    if ( !*p_playEffect )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    GameObjectExtensions__SafeSetParent(this->fields.playEffect, (UnityEngine_Component_o *)this, 0LL);
  }
  Instance = (BattleBuffData_BuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (BattleBuffData_BuffData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (BattleBuffData_BuffData_o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                            (DataMasterBase_o *)Instance,
                                            (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_BgmEntity___);
  if ( !Instance )
    goto LABEL_30;
  count = Instance->fields.count;
  v34 = (BattleBuffData_BuffData_array *)Instance;
  this->fields.playSoundMax = count;
  v35 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BgmEntity__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v35,
    (Il2CppObject *)this,
    Method_SoundPlayerListViewManager_CompareBgmEntity__,
    (const MethodInfo_25D8DF8 *)Method_System_Comparison_BgmEntity___ctor__);
  System_Array__Sort_BattleBuffData_BuffData_(
    v34,
    (System_Comparison_T__o *)v35,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_BgmEntity___);
  if ( count >= 1 )
  {
    v37 = 0LL;
    v38 = 0;
    m_Items = v34->m_Items;
    do
    {
      if ( (unsigned int)v37 >= v34->max_length )
      {
LABEL_31:
        v61 = sub_B2C460(isRelease);
        sub_B2C400(v61, 0LL);
      }
      Instance = m_Items[v37];
      if ( !Instance )
        goto LABEL_30;
      isRelease = BgmEntity__isRelease((BgmEntity_o *)Instance, 0LL);
      if ( isRelease )
      {
        if ( (unsigned int)v37 >= v34->max_length )
          goto LABEL_31;
        v40 = (BgmEntity_o *)m_Items[v37];
        v41 = sub_B2C42C(SoundPlayerListViewItem_TypeInfo);
        SoundPlayerListViewItem___ctor((SoundPlayerListViewItem_o *)v41, v38, v40, v42);
        if ( !v41 )
          goto LABEL_30;
        v49 = (System_Int32_array **)*p_playEffect;
        *(_QWORD *)(v41 + 128) = *p_playEffect;
        sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 128), v49, v43, v44, v45, v46, v47, v48);
        Instance = (BattleBuffData_BuffData_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_30;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v38;
        if ( !*(_DWORD *)(v41 + 136) )
          ++this->fields.canPlaySoundNum;
      }
      else
      {
        --this->fields.playSoundMax;
      }
    }
    while ( (int)++v37 < count );
  }
  v50 = (SoundPlayerListViewItem_o *)sub_B2C42C(SoundPlayerListViewItem_TypeInfo);
  max_length = v34->max_length;
  v52 = v50;
  SoundPlayerListViewItem___ctor(v50, max_length, 0LL, v53);
  if ( !v52
    || (v60 = (System_Int32_array **)*p_playEffect,
        v52->fields._playEffect_k__BackingField = *p_playEffect,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v52->fields._playEffect_k__BackingField,
          v60,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59),
        (Instance = (BattleBuffData_BuffData_o *)this->fields.itemList) == 0LL) )
  {
LABEL_30:
    sub_B2C434(Instance, v31);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int32_t size; // w8
  ListViewItem_o *v9; // x8
  __int64 v10; // x11

  if ( (byte_41876FB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&SoundPlayerListViewItem_TypeInfo, v6);
    byte_41876FB = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  size = itemList->fields._size;
  if ( size <= index )
    return 0LL;
  if ( size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v9 = itemList->fields._items->m_Items[index];
  if ( !v9 )
    return 0LL;
  v10 = *(&SoundPlayerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10 )
    return 0LL;
  if ( (SoundPlayerListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] == SoundPlayerListViewItem_TypeInfo )
    return (SoundPlayerListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_41876FE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41876FE = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41876FC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_SoundPlayerListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_41876FC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SoundPlayerListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SoundPlayerListViewObject__Init(
        (SoundPlayerListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewManager__RequestListObject_24834284(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41876FD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_SoundPlayerListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_41876FD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SoundPlayerListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_SoundPlayerListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      SoundPlayerListViewObject__Init(
        (SoundPlayerListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewObject__Dispose__);
  }
}


void __fastcall SoundPlayerListViewManager__SetMode(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        SoundPlayerListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SoundPlayerListViewManager__SetMode_24834100(this, mode, v10);
}


void __fastcall SoundPlayerListViewManager__SetMode_24834100(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  switch ( mode )
  {
    case 3:
      v6 = 4;
      break;
    case 2:
      v6 = 3;
      break;
    case 1:
      v6 = 2;
      break;
    default:
      return;
  }
  SoundPlayerListViewManager__RequestListObject_24834284(this, v6, v5);
}


void __fastcall SoundPlayerListViewManager__SetMode_24834228(
        SoundPlayerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  SoundPlayerListViewManager__SetMode_24834100(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewManager__SetObjectItem(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_41876FA & 1) == 0 )
  {
    this = (SoundPlayerListViewManager_o *)sub_B2C35C(&SoundPlayerListViewObject_TypeInfo, obj);
    byte_41876FA = 1;
  }
  if ( !obj
    || (v6 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (SoundPlayerListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != SoundPlayerListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  SoundPlayerListViewObject__Init((SoundPlayerListViewObject_o *)obj, v13, 0LL, v9, *(UnityEngine_Vector3_o *)&v10, v8);
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

  if ( (byte_41876EF & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, value);
    byte_41876EF = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_41876F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41876F1 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_B2C728(v7);
  SoundPlayerListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall SoundPlayerListViewManager__endloadEffect(
        SoundPlayerListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( data )
  {
    this->fields.effectAssetData = data;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.effectAssetData,
      (System_Int32_array **)data,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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

  if ( (byte_41876F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, name);
    byte_41876F9 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.effectAssetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  SoundPlayerListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_41876F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41876F4 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (SoundPlayerListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)current,
                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)SoundPlayerListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_41876F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41876F3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SoundPlayerListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SoundPlayerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SoundPlayerListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SoundPlayerListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_SoundPlayerListViewObject__o *)v11;
}


void __fastcall SoundPlayerListViewManager__init(SoundPlayerListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  *(_QWORD *)&this->fields.canPlaySoundNum = 0LL;
  this->fields.playEffect = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playEffect, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x20

  if ( (byte_41876F7 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, callback);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__, v6);
    sub_B2C35C(&SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo, v7);
    byte_41876F7 = 1;
  }
  v8 = sub_B2C42C(SoundPlayerListViewManager___c__DisplayClass24_0_TypeInfo);
  SoundPlayerListViewManager___c__DisplayClass24_0___ctor((SoundPlayerListViewManager___c__DisplayClass24_0_o *)v8, 0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_SoundPlayerListViewManager___c__DisplayClass24_0__loadSoundPlayerEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EFFECT_ASSET_PATH_NAME, v24, 1, 0LL);
}


void __fastcall SoundPlayerListViewManager__onClickCheckListView(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B2C434(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SoundPlayerListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall SoundPlayerListViewManager__onClickSelectListView(
        SoundPlayerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SoundPlayerListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B2C434(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    SoundPlayerListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall SoundPlayerListViewManager__releaseSoundPlayerEffect(
        SoundPlayerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *playEffect; // x20
  UnityEngine_Object_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_o *EFFECT_ASSET_PATH_NAME; // x19

  if ( (byte_41876F8 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41876F8 = 1;
  }
  playEffect = (UnityEngine_Object_o *)this->fields.playEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playEffect, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.playEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v5, 0LL);
    this->fields.playEffect = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playEffect, 0LL, v6, v7, v8, v9, v10, v11);
  }
  EFFECT_ASSET_PATH_NAME = this->fields.EFFECT_ASSET_PATH_NAME;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_41876F0 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewManager_CallbackFunc_TypeInfo, value);
    byte_41876F0 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_41876F2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41876F2 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (SoundPlayerListViewManager_o *)sub_B2C728(v7);
  SoundPlayerListViewManager__get_ObjectList(v10, v11);
}


void __fastcall SoundPlayerListViewManager__setUiApplyAllItem(
        SoundPlayerListViewManager_o *this,
        System_Collections_Generic_List_int__o *isNewList,
        System_String_o *playSoundName,
        const MethodInfo *method)
{
  SoundPlayerListViewManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x22
  signed __int64 size; // x23
  unsigned __int64 v12; // x24
  SoundPlayerListViewItem_o *v13; // x22
  __int64 v14; // x10
  struct BgmEntity_o *bgmEntity; // x28

  v6 = this;
  if ( (byte_41876F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, isNewList);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    this = (SoundPlayerListViewManager_o *)sub_B2C35C(&SoundPlayerListViewItem_TypeInfo, v9);
    byte_41876F6 = 1;
  }
  itemList = v6->fields.itemList;
  if ( !itemList )
    goto LABEL_22;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v13 = (SoundPlayerListViewItem_o *)itemList->fields._items->m_Items[v12];
      if ( !v13 )
        break;
      v14 = *(&SoundPlayerListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (SoundPlayerListViewItem_c *)v13->klass->_2.typeHierarchy[v14 - 1] != SoundPlayerListViewItem_TypeInfo )
      {
        break;
      }
      bgmEntity = v13->fields.bgmEntity;
      if ( bgmEntity )
      {
        if ( !isNewList )
          break;
        if ( System_Collections_Generic_List_int___Contains(
               isNewList,
               bgmEntity->fields.id,
               (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v13->fields._isNew_k__BackingField = 0;
        }
        if ( !System_String__IsNullOrEmpty(playSoundName, 0LL) )
        {
          this = (SoundPlayerListViewManager_o *)bgmEntity->fields.fileName;
          if ( !this )
            break;
          if ( System_String__Equals_44292872((System_String_o *)this, playSoundName, 0LL) )
            v13->fields._isPlaySound_k__BackingField = 1;
        }
        SoundPlayerListViewItem__applyUi(v13, (const MethodInfo *)isNewList);
      }
      if ( (__int64)++v12 >= size )
        return;
      itemList = v6->fields.itemList;
    }
    while ( itemList );
LABEL_22:
    sub_B2C434(this, isNewList);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_418475B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&SoundPlayerListViewManager_ResultKind_TypeInfo, v9);
    byte_418475B = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(SoundPlayerListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall SoundPlayerListViewManager_CallbackFunc__EndInvoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewManager_CallbackFunc__Invoke(
        SoundPlayerListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  SoundPlayerListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  SoundPlayerListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  SoundPlayerListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SoundPlayerListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
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
  SoundPlayerListViewManager_o *_4__this; // x0
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, data);
  SoundPlayerListViewManager__endloadEffect(_4__this, data, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}