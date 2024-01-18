void __fastcall EventBannerWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A1F2 & 1) == 0 )
  {
    sub_B2C35C(&EventBannerWindow_TypeInfo, v1);
    byte_418A1F2 = 1;
  }
  EventBannerWindow_TypeInfo->static_fields->OPEN_POSSIBLE_COUNT = 2;
  EventBannerWindow_TypeInfo->static_fields->SCROLL_ITEM_Y_INTERVAL = 150.0;
}


void __fastcall EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A1F1 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo, v4);
    byte_418A1F1 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mScrollItems,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  if ( (byte_418A1EE & 1) == 0 )
  {
    sub_B2C35C(&EventBannerWindow_TypeInfo, method);
    this = (EventBannerWindow_o *)sub_B2C35C(
                                    &Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__,
                                    v3);
    byte_418A1EE = 1;
  }
  mScrollItems = v2->fields.mScrollItems;
  if ( !mScrollItems )
    sub_B2C434(this, method);
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
  EventBannerWindow___c_c *v7; // x0
  struct EventBannerWindow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v10; // x21
  struct EventBannerWindow___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_418A1EF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_EventBannerWindow___c__OnClickClose_b__13_0__, v4);
    sub_B2C35C(&EventBannerWindow___c_TypeInfo, v5);
    byte_418A1EF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v7 = EventBannerWindow___c_TypeInfo;
  if ( (BYTE3(EventBannerWindow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBannerWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow___c_TypeInfo);
    v7 = EventBannerWindow___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v10, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0LL);
    v11 = EventBannerWindow___c_TypeInfo->static_fields;
    v11->__9__13_0 = _9__13_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v11->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !this )
    sub_B2C434(v7, v6);
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0LL);
}


void __fastcall EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v4; // x1
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_B2C434(0LL, v4);
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
  __int64 v23; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x21
  int32_t size; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x21
  __int64 v30; // x25
  unsigned int v31; // w8
  unsigned int v32; // w28
  __int64 v33; // x8
  __int64 v34; // x8
  struct UnityEngine_GameObject_o *scrollItemPrefab; // x22
  UnityEngine_GameObject_o *v36; // x22
  const MethodInfo *v37; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x22
  UILabel_o *titleLabel; // x20
  UILabel_o *titleDetailLabel; // x19
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418A1ED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, ev_end_time_infs);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&StringLiteral_5560/*"EVENT_BANNER_WINDOW_MESSAGE"*/, v19);
    sub_B2C35C(&StringLiteral_5561/*"EVENT_BANNER_WINDOW_TITLE"*/, v20);
    byte_418A1ED = 1;
  }
  memset(&v42, 0, sizeof(v42));
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_46;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    mScrollItems,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    if ( !v22 )
      break;
    current = v42.fields.current;
    if ( !v42.fields.current )
      sub_B2C434(v22, v23);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42.fields.current, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v26);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v27, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
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
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__);
  this->fields.mNowEventId = 0;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mScrollItems )
    goto LABEL_46;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)mScrollItems,
                                                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ev_end_time_infs )
    goto LABEL_46;
  size = ev_end_time_infs->fields._size;
  if ( size >= 1 )
  {
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)mScrollItems;
    v30 = 4LL;
    v31 = ev_end_time_infs->fields._size;
    while ( 1 )
    {
      v32 = v30 - 4;
      if ( v31 <= (int)v30 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v33 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v30);
      if ( !v33 )
        break;
      if ( !v29 )
        break;
      mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(v29, *(_DWORD *)(v33 + 16), (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !mScrollItems )
        break;
      if ( LODWORD(mScrollItems[1].monitor) )
      {
        if ( ev_end_time_infs->fields._size <= v32 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v34 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v30);
        if ( !v34 )
          break;
        scrollItemPrefab = this->fields.scrollItemPrefab;
        this->fields.mNowEventId = *(_DWORD *)(v34 + 16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v36 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)scrollItemPrefab,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v36, (UnityEngine_Component_o *)this->fields.grid, 0LL);
        if ( !v36 )
          break;
        mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(v36, (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)mScrollItems;
        if ( ev_end_time_infs->fields._size <= v32 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !mScrollItems )
          break;
        EventBannerWindowScrollItem__Setup(
          (EventBannerWindowScrollItem_o *)mScrollItems,
          *((TitleInfoControl_EventEndTimeInfo_o **)&ev_end_time_infs->fields._items->obj.klass + v30),
          v37);
        mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mScrollItems;
        if ( !mScrollItems )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mScrollItems,
          v38,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__);
      }
      if ( (int)v30 - 3 >= size )
        goto LABEL_39;
      v31 = ev_end_time_infs->fields._size;
      ++v30;
    }
LABEL_46:
    sub_B2C434(mScrollItems, ev_end_time_infs);
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
                                                                                                  (System_String_o *)StringLiteral_5561/*"EVENT_BANNER_WINDOW_TITLE"*/,
                                                                                                  0LL);
  if ( !titleLabel )
    goto LABEL_46;
  UILabel__set_text(titleLabel, (System_String_o *)mScrollItems, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)LocalizationManager__Get(
                                                                                                  (System_String_o *)StringLiteral_5560/*"EVENT_BANNER_WINDOW_MESSAGE"*/,
                                                                                                  0LL);
  if ( !titleDetailLabel )
    goto LABEL_46;
  UILabel__set_text(titleDetailLabel, (System_String_o *)mScrollItems, 0LL);
}


System_String_o *__fastcall EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  if ( (byte_418A1F0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2744/*"BaseWindow/CloseBtn"*/, method);
    byte_418A1F0 = 1;
  }
  return (System_String_o *)StringLiteral_2744/*"BaseWindow/CloseBtn"*/;
}


void __fastcall EventBannerWindow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventBannerWindow___c_StaticFields *static_fields; // x0

  if ( (byte_4184AB3 & 1) == 0 )
  {
    sub_B2C35C(&EventBannerWindow___c_TypeInfo, v1);
    byte_4184AB3 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventBannerWindow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventBannerWindow___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBannerWindow___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EventBannerWindow___c___ctor(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBannerWindow___c___OnClickClose_b__13_0(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  ;
}