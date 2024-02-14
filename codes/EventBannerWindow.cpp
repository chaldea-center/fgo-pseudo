void __fastcall EventBannerWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4216E38 & 1) == 0 )
  {
    sub_B0D8A4(&EventBannerWindow_TypeInfo, v1);
    byte_4216E38 = 1;
  }
  EventBannerWindow_TypeInfo->static_fields->OPEN_POSSIBLE_COUNT = 2;
  EventBannerWindow_TypeInfo->static_fields->SCROLL_ITEM_Y_INTERVAL = 150.0;
}


void __fastcall EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4216E37 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo, v5);
    byte_4216E37 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mScrollItems,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall EventBannerWindow__GetNowEventId(EventBannerWindow_o *this, const MethodInfo *method)
{
  EventBannerWindow_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *mScrollItems; // x8
  int32_t size; // w20
  EventBannerWindow_c *v6; // x0

  v2 = this;
  if ( (byte_4216E34 & 1) == 0 )
  {
    sub_B0D8A4(&EventBannerWindow_TypeInfo, method);
    this = (EventBannerWindow_o *)sub_B0D8A4(
                                    &Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__,
                                    v3);
    byte_4216E34 = 1;
  }
  mScrollItems = v2->fields.mScrollItems;
  if ( !mScrollItems )
    sub_B0D97C(this);
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
    return v2->fields.mNowEventId;
}


void __fastcall EventBannerWindow__OnClickClose(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  EventBannerWindow___c_c *v8; // x0
  struct EventBannerWindow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v11; // x21
  struct EventBannerWindow___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4216E35 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_EventBannerWindow___c__OnClickClose_b__13_0__, v4);
    sub_B0D8A4(&EventBannerWindow___c_TypeInfo, v5);
    byte_4216E35 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v8 = EventBannerWindow___c_TypeInfo;
  if ( (BYTE3(EventBannerWindow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBannerWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow___c_TypeInfo);
    v8 = EventBannerWindow___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(_9__13_0, v11, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0LL);
    v12 = EventBannerWindow___c_TypeInfo->static_fields;
    v12->__9__13_0 = _9__13_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v12->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !this )
    sub_B0D97C(v8);
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0LL);
}


void __fastcall EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_B0D97C(0LL);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *mScrollItems; // x0
  _BOOL8 v22; // x0
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v25; // x21
  int32_t size; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x21
  __int64 v28; // x25
  unsigned int v29; // w8
  unsigned int v30; // w28
  __int64 v31; // x8
  __int64 v32; // x8
  struct UnityEngine_GameObject_o *scrollItemPrefab; // x22
  UnityEngine_GameObject_o *v34; // x22
  const MethodInfo *v35; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x22
  UILabel_o *titleLabel; // x20
  UILabel_o *titleDetailLabel; // x19
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4216E33 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, ev_end_time_infs);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&StringLiteral_5576/*"EVENT_BANNER_WINDOW_MESSAGE"*/, v19);
    sub_B0D8A4(&StringLiteral_5577/*"EVENT_BANNER_WINDOW_TITLE"*/, v20);
    byte_4216E33 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_46;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    mScrollItems,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    if ( !v22 )
      break;
    current = v40.fields.current;
    if ( !v40.fields.current )
      sub_B0D97C(v22);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40.fields.current, 0LL);
    if ( !gameObject )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v25, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.grid;
  if ( !mScrollItems )
    goto LABEL_46;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_transform(
                                                                                                  (UnityEngine_Component_o *)mScrollItems,
                                                                                                  0LL);
  if ( !mScrollItems )
    goto LABEL_46;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)mScrollItems, 0LL);
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_46;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mScrollItems,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__);
  this->fields.mNowEventId = 0;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mScrollItems )
    goto LABEL_46;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)mScrollItems,
                                                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ev_end_time_infs )
    goto LABEL_46;
  size = ev_end_time_infs->fields._size;
  if ( size >= 1 )
  {
    v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)mScrollItems;
    v28 = 4LL;
    v29 = ev_end_time_infs->fields._size;
    while ( 1 )
    {
      v30 = v28 - 4;
      if ( v29 <= (int)v28 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v31 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v28);
      if ( !v31 )
        break;
      if ( !v27 )
        break;
      mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(v27, *(_DWORD *)(v31 + 16), (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !mScrollItems )
        break;
      if ( LODWORD(mScrollItems[1].monitor) )
      {
        if ( ev_end_time_infs->fields._size <= v30 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v32 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v28);
        if ( !v32 )
          break;
        scrollItemPrefab = this->fields.scrollItemPrefab;
        this->fields.mNowEventId = *(_DWORD *)(v32 + 16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v34 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)scrollItemPrefab,
                                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v34, (UnityEngine_Component_o *)this->fields.grid, 0LL);
        if ( !v34 )
          break;
        mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(v34, (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)mScrollItems;
        if ( ev_end_time_infs->fields._size <= v30 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !mScrollItems )
          break;
        EventBannerWindowScrollItem__Setup(
          (EventBannerWindowScrollItem_o *)mScrollItems,
          *((TitleInfoControl_EventEndTimeInfo_o **)&ev_end_time_infs->fields._items->obj.klass + v28),
          v35);
        mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mScrollItems;
        if ( !mScrollItems )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mScrollItems,
          v36,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__);
      }
      if ( (int)v28 - 3 >= size )
        goto LABEL_39;
      v29 = ev_end_time_infs->fields._size;
      ++v28;
    }
LABEL_46:
    sub_B0D97C(mScrollItems);
  }
LABEL_39:
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.grid;
  if ( !mScrollItems )
    goto LABEL_46;
  ((void (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, Il2CppMethodPointer))mScrollItems->klass->vtable._8_unknown.method)(
    mScrollItems,
    mScrollItems->klass->vtable._9_unknown.methodPtr);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)LocalizationManager__Get(
                                                                                                  (System_String_o *)StringLiteral_5577/*"EVENT_BANNER_WINDOW_TITLE"*/,
                                                                                                  0LL);
  if ( !titleLabel )
    goto LABEL_46;
  UILabel__set_text(titleLabel, (System_String_o *)mScrollItems, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)LocalizationManager__Get(
                                                                                                  (System_String_o *)StringLiteral_5576/*"EVENT_BANNER_WINDOW_MESSAGE"*/,
                                                                                                  0LL);
  if ( !titleDetailLabel )
    goto LABEL_46;
  UILabel__set_text(titleDetailLabel, (System_String_o *)mScrollItems, 0LL);
}


System_String_o *__fastcall EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4216E36 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2755/*"BaseWindow/CloseBtn"*/, method);
    byte_4216E36 = 1;
  }
  return (System_String_o *)StringLiteral_2755/*"BaseWindow/CloseBtn"*/;
}


void __fastcall EventBannerWindow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventBannerWindow___c_StaticFields *static_fields; // x0

  if ( (byte_4211B12 & 1) == 0 )
  {
    sub_B0D8A4(&EventBannerWindow___c_TypeInfo, v1);
    byte_4211B12 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventBannerWindow___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventBannerWindow___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBannerWindow___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventBannerWindow___c___ctor(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBannerWindow___c___OnClickClose_b__13_0(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  ;
}