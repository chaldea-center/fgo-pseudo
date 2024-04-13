void __fastcall EventBannerWindow___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB87F & 1) == 0 )
  {
    sub_B5D5C4(&EventBannerWindow_TypeInfo, v1, v2, v3);
    byte_42EB87F = 1;
  }
  EventBannerWindow_TypeInfo->static_fields->OPEN_POSSIBLE_COUNT = 2;
  EventBannerWindow_TypeInfo->static_fields->SCROLL_ITEM_Y_INTERVAL = 150.0;
}


void __fastcall EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EB87E & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo, v8, v9, v10);
    byte_42EB87E = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mScrollItems,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall EventBannerWindow__GetNowEventId(EventBannerWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventBannerWindow_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *mScrollItems; // x8
  int32_t size; // w20
  EventBannerWindow_c *v10; // x0

  v4 = this;
  if ( (byte_42EB87B & 1) == 0 )
  {
    sub_B5D5C4(&EventBannerWindow_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventBannerWindow_o *)sub_B5D5C4(
                                    &Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__,
                                    v5,
                                    v6,
                                    v7);
    byte_42EB87B = 1;
  }
  mScrollItems = v4->fields.mScrollItems;
  if ( !mScrollItems )
    sub_B5D69C(this, method);
  size = mScrollItems->fields._size;
  v10 = EventBannerWindow_TypeInfo;
  if ( (BYTE3(EventBannerWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBannerWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow_TypeInfo);
    v10 = EventBannerWindow_TypeInfo;
  }
  if ( size >= v10->static_fields->OPEN_POSSIBLE_COUNT )
    return 0;
  else
    return v4->fields.mNowEventId;
}


void __fastcall EventBannerWindow__OnClickClose(EventBannerWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  EventBannerWindow___c_c *v15; // x0
  struct EventBannerWindow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v18; // x21
  struct EventBannerWindow___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42EB87C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventBannerWindow___c__OnClickClose_b__13_0__, v8, v9, v10);
    sub_B5D5C4(&EventBannerWindow___c_TypeInfo, v11, v12, v13);
    byte_42EB87C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v15 = EventBannerWindow___c_TypeInfo;
  if ( (BYTE3(EventBannerWindow___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBannerWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow___c_TypeInfo);
    v15 = EventBannerWindow___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v18, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0LL);
    v19 = EventBannerWindow___c_TypeInfo->static_fields;
    v19->__9__13_0 = _9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v19->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !this )
    sub_B5D69C(v15, v14);
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0LL);
}


void __fastcall EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v4; // x1
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_B5D69C(0LL, v4);
  UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall EventBannerWindow__Setup(
        EventBannerWindow_o *this,
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *ev_end_time_infs,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *mScrollItems; // x0
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v59; // x1
  UnityEngine_Object_o *v60; // x21
  int32_t size; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x21
  __int64 v63; // x25
  unsigned int v64; // w8
  unsigned int v65; // w28
  __int64 v66; // x8
  __int64 v67; // x8
  struct UnityEngine_GameObject_o *scrollItemPrefab; // x22
  UnityEngine_GameObject_o *v69; // x22
  const MethodInfo *v70; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v71; // x22
  UILabel_o *titleLabel; // x20
  UILabel_o *titleDetailLabel; // x19
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EB87A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)ev_end_time_infs, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__, v33, v34, v35);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_5637/*"EVENT_BANNER_WINDOW_MESSAGE"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_5638/*"EVENT_BANNER_WINDOW_TITLE"*/, v51, v52, v53);
    byte_42EB87A = 1;
  }
  memset(&v75, 0, sizeof(v75));
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_46;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v74,
    mScrollItems,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v75 = v74;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v75,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    if ( !v55 )
      break;
    current = v75.fields.current;
    if ( !v75.fields.current )
      sub_B5D69C(v55, v56);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v75.fields.current, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v59);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v60 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v60, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v75,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
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
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__);
  this->fields.mNowEventId = 0;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mScrollItems )
    goto LABEL_46;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)mScrollItems,
                                                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ev_end_time_infs )
    goto LABEL_46;
  size = ev_end_time_infs->fields._size;
  if ( size >= 1 )
  {
    v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)mScrollItems;
    v63 = 4LL;
    v64 = ev_end_time_infs->fields._size;
    while ( 1 )
    {
      v65 = v63 - 4;
      if ( v64 <= (int)v63 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v66 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v63);
      if ( !v66 )
        break;
      if ( !v62 )
        break;
      mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(v62, *(_DWORD *)(v66 + 16), (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !mScrollItems )
        break;
      if ( LODWORD(mScrollItems[1].monitor) )
      {
        if ( ev_end_time_infs->fields._size <= v65 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v67 = *((_QWORD *)&ev_end_time_infs->fields._items->obj.klass + v63);
        if ( !v67 )
          break;
        scrollItemPrefab = this->fields.scrollItemPrefab;
        this->fields.mNowEventId = *(_DWORD *)(v67 + 16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v69 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)scrollItemPrefab,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v69, (UnityEngine_Component_o *)this->fields.grid, 0LL);
        if ( !v69 )
          break;
        mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(v69, (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        v71 = (EventMissionProgressRequest_Argument_ProgressData_o *)mScrollItems;
        if ( ev_end_time_infs->fields._size <= v65 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !mScrollItems )
          break;
        EventBannerWindowScrollItem__Setup(
          (EventBannerWindowScrollItem_o *)mScrollItems,
          *((TitleInfoControl_EventEndTimeInfo_o **)&ev_end_time_infs->fields._items->obj.klass + v63),
          v70);
        mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mScrollItems;
        if ( !mScrollItems )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mScrollItems,
          v71,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__);
      }
      if ( (int)v63 - 3 >= size )
        goto LABEL_39;
      v64 = ev_end_time_infs->fields._size;
      ++v63;
    }
LABEL_46:
    sub_B5D69C(mScrollItems, ev_end_time_infs);
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
                                                                                                  (System_String_o *)StringLiteral_5638/*"EVENT_BANNER_WINDOW_TITLE"*/,
                                                                                                  0LL);
  if ( !titleLabel )
    goto LABEL_46;
  UILabel__set_text(titleLabel, (System_String_o *)mScrollItems, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  mScrollItems = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)LocalizationManager__Get(
                                                                                                  (System_String_o *)StringLiteral_5637/*"EVENT_BANNER_WINDOW_MESSAGE"*/,
                                                                                                  0LL);
  if ( !titleDetailLabel )
    goto LABEL_46;
  UILabel__set_text(titleDetailLabel, (System_String_o *)mScrollItems, 0LL);
}


System_String_o *__fastcall EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB87D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2798/*"BaseWindow/CloseBtn"*/, (_DWORD)method, v2, v3);
    byte_42EB87D = 1;
  }
  return (System_String_o *)StringLiteral_2798/*"BaseWindow/CloseBtn"*/;
}


void __fastcall EventBannerWindow___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventBannerWindow___c_StaticFields *static_fields; // x0

  if ( (byte_42E64E6 & 1) == 0 )
  {
    sub_B5D5C4(&EventBannerWindow___c_TypeInfo, v1, v2, v3);
    byte_42E64E6 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventBannerWindow___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventBannerWindow___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBannerWindow___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventBannerWindow___c___ctor(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBannerWindow___c___OnClickClose_b__13_0(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  ;
}