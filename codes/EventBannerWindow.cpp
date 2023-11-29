void __fastcall EventBannerWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC523 & 1) == 0 )
  {
    sub_B16FFC(&EventBannerWindow_TypeInfo, v1);
    byte_40FC523 = 1;
  }
  EventBannerWindow_TypeInfo->static_fields->OPEN_POSSIBLE_COUNT = 2;
  EventBannerWindow_TypeInfo->static_fields->SCROLL_ITEM_Y_INTERVAL = 150.0;
}


void __fastcall EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FC522 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo, v7);
    byte_40FC522 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mScrollItems,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall EventBannerWindow__GetNowEventId(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *mScrollItems; // x8
  int32_t size; // w20
  EventBannerWindow_c *v6; // x0

  if ( (byte_40FC51F & 1) == 0 )
  {
    sub_B16FFC(&EventBannerWindow_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__, v3);
    byte_40FC51F = 1;
  }
  mScrollItems = this->fields.mScrollItems;
  if ( !mScrollItems )
    sub_B170D4();
  size = mScrollItems->fields._size;
  v6 = EventBannerWindow_TypeInfo;
  if ( (BYTE3(EventBannerWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBannerWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow_TypeInfo);
    v6 = EventBannerWindow_TypeInfo;
  }
  if ( size >= v6->static_fields->OPEN_POSSIBLE_COUNT )
    return 0;
  else
    return this->fields.mNowEventId;
}


void __fastcall EventBannerWindow__OnClickClose(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  EventBannerWindow___c_c *v10; // x0
  struct EventBannerWindow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v13; // x21
  struct EventBannerWindow___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FC520 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_EventBannerWindow___c__OnClickClose_b__13_0__, v4);
    sub_B16FFC(&EventBannerWindow___c_TypeInfo, v5);
    byte_40FC520 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v10 = EventBannerWindow___c_TypeInfo;
  if ( (BYTE3(EventBannerWindow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBannerWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow___c_TypeInfo);
    v10 = EventBannerWindow___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(_9__13_0, v13, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0LL);
    v14 = EventBannerWindow___c_TypeInfo->static_fields;
    v14->__9__13_0 = _9__13_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v14->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !this )
    sub_B170D4();
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0LL);
}


void __fastcall EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_B170D4();
  UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall EventBannerWindow__Setup(
        EventBannerWindow_o *this,
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *ev_end_time_infs,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *mScrollItems; // x0
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v24; // x21
  UnityEngine_Component_o *grid; // x0
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *v27; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t size; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  __int64 v32; // x25
  unsigned int v33; // w8
  unsigned int v34; // w28
  __int64 v35; // x8
  WarEntity_o *Entity; // x0
  __int64 v37; // x8
  struct UnityEngine_GameObject_o *scrollItemPrefab; // x22
  UnityEngine_GameObject_o *v39; // x22
  EventBannerWindowScrollItem_o *Component_srcLineSprite; // x0
  const MethodInfo *v41; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x22
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *v43; // x0
  struct UIGrid_o *v44; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v46; // x0
  UILabel_o *titleDetailLabel; // x19
  System_String_o *v48; // x0
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FC51E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, ev_end_time_infs);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&StringLiteral_5545, v19);
    sub_B16FFC(&StringLiteral_5546, v20);
    byte_40FC51E = 1;
  }
  memset(&v50, 0, sizeof(v50));
  mScrollItems = this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_46;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mScrollItems,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v50 = v49;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__) )
  {
    current = v50.fields.current;
    if ( !v50.fields.current )
      sub_B170D4();
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50.fields.current, 0LL);
    if ( !gameObject )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v24, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_46;
  transform = UnityEngine_Component__get_transform(grid, 0LL);
  if ( !transform )
    goto LABEL_46;
  UnityEngine_Transform__DetachChildren(transform, 0LL);
  v27 = this->fields.mScrollItems;
  if ( !v27 )
    goto LABEL_46;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v27,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__);
  this->fields.mNowEventId = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ev_end_time_infs )
    goto LABEL_46;
  size = ev_end_time_infs->fields._size;
  if ( size >= 1 )
  {
    v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v32 = 4LL;
    v33 = ev_end_time_infs->fields._size;
    while ( 1 )
    {
      v34 = v32 - 4;
      if ( v33 <= (int)v32 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v35 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v32);
      if ( !v35 )
        break;
      if ( !v31 )
        break;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v31,
                 *(_DWORD *)(v35 + 16),
                 (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Entity )
        break;
      if ( Entity->fields.bannerId )
      {
        if ( ev_end_time_infs->fields._size <= v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v37 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v32);
        if ( !v37 )
          break;
        scrollItemPrefab = this->fields.scrollItemPrefab;
        this->fields.mNowEventId = *(_DWORD *)(v37 + 16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v39 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)scrollItemPrefab,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v39, (UnityEngine_Component_o *)this->fields.grid, 0LL);
        if ( !v39 )
          break;
        Component_srcLineSprite = (EventBannerWindowScrollItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v39,
                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
        if ( ev_end_time_infs->fields._size <= v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !Component_srcLineSprite )
          break;
        EventBannerWindowScrollItem__Setup(
          Component_srcLineSprite,
          *((TitleInfoControl_EventEndTimeInfo_o **)&ev_end_time_infs->fields._items->obj.klass + v32),
          v41);
        v43 = this->fields.mScrollItems;
        if ( !v43 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v43,
          v42,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__);
      }
      if ( (int)v32 - 3 >= size )
        goto LABEL_39;
      v33 = ev_end_time_infs->fields._size;
      ++v32;
    }
LABEL_46:
    sub_B170D4();
  }
LABEL_39:
  v44 = this->fields.grid;
  if ( !v44 )
    goto LABEL_46;
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v44->klass->vtable._8_Reposition.method)(
    v44,
    v44->klass->vtable._9_ResetPosition.methodPtr);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5546, 0LL);
  if ( !titleLabel )
    goto LABEL_46;
  UILabel__set_text(titleLabel, v46, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_5545, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_46;
  UILabel__set_text(titleDetailLabel, v48, 0LL);
}


System_String_o *__fastcall EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  if ( (byte_40FC521 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2732, method);
    byte_40FC521 = 1;
  }
  return (System_String_o *)StringLiteral_2732;
}


void __fastcall EventBannerWindow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B8E & 1) == 0 )
  {
    sub_B16FFC(&EventBannerWindow___c_TypeInfo, v1);
    byte_40F8B8E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventBannerWindow___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventBannerWindow___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventBannerWindow___c___ctor(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBannerWindow___c___OnClickClose_b__13_0(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  ;
}