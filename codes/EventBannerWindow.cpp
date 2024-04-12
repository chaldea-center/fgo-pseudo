void __fastcall EventBannerWindow___cctor(const MethodInfo *method)
{
  if ( (byte_42B2660 & 1) == 0 )
  {
    sub_B52984(&EventBannerWindow_TypeInfo);
    byte_42B2660 = 1;
  }
  EventBannerWindow_TypeInfo->static_fields->OPEN_POSSIBLE_COUNT = 2;
  EventBannerWindow_TypeInfo->static_fields->SCROLL_ITEM_Y_INTERVAL = 150.0;
}


void __fastcall EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B265F & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
    byte_42B265F = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mScrollItems,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall EventBannerWindow__GetNowEventId(EventBannerWindow_o *this, const MethodInfo *method)
{
  EventBannerWindow_o *v2; // x19
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *mScrollItems; // x8
  int32_t size; // w20
  EventBannerWindow_c *v5; // x0

  v2 = this;
  if ( (byte_42B265C & 1) == 0 )
  {
    sub_B52984(&EventBannerWindow_TypeInfo);
    this = (EventBannerWindow_o *)sub_B52984(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__);
    byte_42B265C = 1;
  }
  mScrollItems = v2->fields.mScrollItems;
  if ( !mScrollItems )
    sub_B52A5C(this, method);
  size = mScrollItems->fields._size;
  v5 = EventBannerWindow_TypeInfo;
  if ( (BYTE3(EventBannerWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBannerWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow_TypeInfo);
    v5 = EventBannerWindow_TypeInfo;
  }
  if ( size >= v5->static_fields->OPEN_POSSIBLE_COUNT )
    return 0;
  else
    return v2->fields.mNowEventId;
}


void __fastcall EventBannerWindow__OnClickClose(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventBannerWindow___c_c *v4; // x0
  struct EventBannerWindow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v7; // x21
  struct EventBannerWindow___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42B265D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_EventBannerWindow___c__OnClickClose_b__13_0__);
    sub_B52984(&EventBannerWindow___c_TypeInfo);
    byte_42B265D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v4 = EventBannerWindow___c_TypeInfo;
  if ( (BYTE3(EventBannerWindow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBannerWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow___c_TypeInfo);
    v4 = EventBannerWindow___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v7, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0LL);
    v8 = EventBannerWindow___c_TypeInfo->static_fields;
    v8->__9__13_0 = _9__13_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !this )
    sub_B52A5C(v4, v3);
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0LL);
}


void __fastcall EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v4; // x1
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_B52A5C(0LL, v4);
  UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall EventBannerWindow__Setup(
        EventBannerWindow_o *this,
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *ev_end_time_infs,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *mScrollItems; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  int32_t size; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x25
  unsigned int v15; // w8
  unsigned int v16; // w28
  __int64 v17; // x8
  __int64 v18; // x8
  struct UnityEngine_GameObject_o *scrollItemPrefab; // x22
  UnityEngine_GameObject_o *v20; // x22
  const MethodInfo *v21; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x22
  UILabel_o *titleLabel; // x20
  UILabel_o *titleDetailLabel; // x19
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B265B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
    sub_B52984(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_5602/*"EVENT_BANNER_WINDOW_MESSAGE"*/);
    sub_B52984(&StringLiteral_5603/*"EVENT_BANNER_WINDOW_TITLE"*/);
    byte_42B265B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_46;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    mScrollItems,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v26,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    if ( !v6 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B52A5C(v6, v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26.fields.current, 0LL);
    if ( !gameObject )
      sub_B52A5C(0LL, v10);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v11, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
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
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__);
  this->fields.mNowEventId = 0;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mScrollItems )
    goto LABEL_46;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)mScrollItems,
                                                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ev_end_time_infs )
    goto LABEL_46;
  size = ev_end_time_infs->fields._size;
  if ( size >= 1 )
  {
    v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)mScrollItems;
    v14 = 4LL;
    v15 = ev_end_time_infs->fields._size;
    while ( 1 )
    {
      v16 = v14 - 4;
      if ( v15 <= (int)v14 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v17 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v14);
      if ( !v17 )
        break;
      if ( !v13 )
        break;
      mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(v13, *(_DWORD *)(v17 + 16), (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !mScrollItems )
        break;
      if ( LODWORD(mScrollItems[1].monitor) )
      {
        if ( ev_end_time_infs->fields._size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v18 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v14);
        if ( !v18 )
          break;
        scrollItemPrefab = this->fields.scrollItemPrefab;
        this->fields.mNowEventId = *(_DWORD *)(v18 + 16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v20 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)scrollItemPrefab,
                                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v20, (UnityEngine_Component_o *)this->fields.grid, 0LL);
        if ( !v20 )
          break;
        mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(v20, (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)mScrollItems;
        if ( ev_end_time_infs->fields._size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !mScrollItems )
          break;
        EventBannerWindowScrollItem__Setup(
          (EventBannerWindowScrollItem_o *)mScrollItems,
          *((TitleInfoControl_EventEndTimeInfo_o **)&ev_end_time_infs->fields._items->obj.klass + v14),
          v21);
        mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mScrollItems;
        if ( !mScrollItems )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mScrollItems,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__);
      }
      if ( (int)v14 - 3 >= size )
        goto LABEL_39;
      v15 = ev_end_time_infs->fields._size;
      ++v14;
    }
LABEL_46:
    sub_B52A5C(mScrollItems, ev_end_time_infs);
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
                                                                                                  (System_String_o *)StringLiteral_5603/*"EVENT_BANNER_WINDOW_TITLE"*/,
                                                                                                  0LL);
  if ( !titleLabel )
    goto LABEL_46;
  UILabel__set_text(titleLabel, (System_String_o *)mScrollItems, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)LocalizationManager__Get(
                                                                                                  (System_String_o *)StringLiteral_5602/*"EVENT_BANNER_WINDOW_MESSAGE"*/,
                                                                                                  0LL);
  if ( !titleDetailLabel )
    goto LABEL_46;
  UILabel__set_text(titleDetailLabel, (System_String_o *)mScrollItems, 0LL);
}


System_String_o *__fastcall EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  if ( (byte_42B265E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2776/*"BaseWindow/CloseBtn"*/);
    byte_42B265E = 1;
  }
  return (System_String_o *)StringLiteral_2776/*"BaseWindow/CloseBtn"*/;
}


void __fastcall EventBannerWindow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventBannerWindow___c_StaticFields *static_fields; // x0

  if ( (byte_42AD8A8 & 1) == 0 )
  {
    sub_B52984(&EventBannerWindow___c_TypeInfo);
    byte_42AD8A8 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventBannerWindow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventBannerWindow___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBannerWindow___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall EventBannerWindow___c___ctor(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBannerWindow___c___OnClickClose_b__13_0(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  ;
}