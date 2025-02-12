void __fastcall EventBannerWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BC45B0 & 1) == 0 )
  {
    sub_1C1ABD4(&EventBannerWindow_TypeInfo, v1);
    byte_4BC45B0 = 1;
  }
  *EventBannerWindow_TypeInfo->static_fields = (struct EventBannerWindow_StaticFields)0x4316000000000002LL;
}


void __fastcall EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BC45AF & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo, v4);
    byte_4BC45AF = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v5;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.mScrollItems, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  if ( (byte_4BC45AC & 1) == 0 )
  {
    sub_1C1ABD4(&EventBannerWindow_TypeInfo, method);
    this = (EventBannerWindow_o *)sub_1C1ABD4(
                                    &Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__,
                                    v3);
    byte_4BC45AC = 1;
  }
  mScrollItems = v2->fields.mScrollItems;
  if ( !mScrollItems )
    sub_1C1AE30(this, method);
  size = mScrollItems->fields._size;
  v6 = EventBannerWindow_TypeInfo;
  if ( !EventBannerWindow_TypeInfo->_2.cctor_finished )
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  EventBannerWindow___c_c *v9; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v11; // x21
  struct EventBannerWindow___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BC45AD & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_EventBannerWindow_OnClickClose__, v3);
    sub_1C1ABD4(&Method_EventBannerWindow___c__OnClickClose_b__13_0__, v4);
    sub_1C1ABD4(&EventBannerWindow___c_TypeInfo, v5);
    byte_4BC45AD = 1;
  }
  v6 = Method_EventBannerWindow_OnClickClose__;
  if ( (*((_BYTE *)Method_EventBannerWindow_OnClickClose__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C1ABEC(Method_EventBannerWindow_OnClickClose__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
  v9 = EventBannerWindow___c_TypeInfo;
  if ( !EventBannerWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow___c_TypeInfo);
    v9 = EventBannerWindow___c_TypeInfo;
  }
  _9__13_0 = v9->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventBannerWindow___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v11, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0LL);
    static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !this )
    sub_1C1AE30(v9, v8);
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0LL);
}


void __fastcall EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v4; // x1
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1C1AE30(0LL, v4);
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
  System_Collections_Generic_List_object__o *mScrollItems; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x21
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *v28; // x8
  int32_t size; // w2
  int v30; // w9
  int32_t v31; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x21
  int32_t v33; // w22
  Il2CppObject *scrollItemPrefab; // x23
  Il2CppObject *v35; // x23
  Il2CppObject *Component_object; // x23
  const MethodInfo *v37; // x2
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  UILabel_o *titleLabel; // x20
  UILabel_o *titleDetailLabel; // x19
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BC45AB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, ev_end_time_infs);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__, v14);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v15);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C1ABD4(&StringLiteral_5658/*"EVENT_BANNER_WINDOW_MESSAGE"*/, v19);
    sub_1C1ABD4(&StringLiteral_5659/*"EVENT_BANNER_WINDOW_TITLE"*/, v20);
    byte_4BC45AB = 1;
  }
  memset(&v51, 0, sizeof(v51));
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    mScrollItems,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    if ( !v22 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1C1AE30(v22, v23);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v51.fields._current, 0LL);
    if ( !gameObject )
      sub_1C1AE30(0LL, v26);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v27, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.grid;
  if ( !mScrollItems )
    goto LABEL_41;
  mScrollItems = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)mScrollItems,
                                                                0LL);
  if ( !mScrollItems )
    goto LABEL_41;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)mScrollItems, 0LL);
  v28 = this->fields.mScrollItems;
  if ( !v28 )
    goto LABEL_41;
  size = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, size, 0LL);
  this->fields.mNowEventId = 0;
  mScrollItems = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mScrollItems )
    goto LABEL_41;
  mScrollItems = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)mScrollItems,
                                                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ev_end_time_infs )
    goto LABEL_41;
  v31 = ev_end_time_infs->fields._size;
  if ( v31 >= 1 )
  {
    v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)mScrollItems;
    v33 = 0;
    while ( 1 )
    {
      mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                    v33,
                                                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
      if ( !mScrollItems )
        break;
      if ( !v32 )
        break;
      mScrollItems = (System_Collections_Generic_List_object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    v32,
                                                                    (int32_t)mScrollItems->fields._items,
                                                                    (const MethodInfo_3248678 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !mScrollItems )
        break;
      if ( LODWORD(mScrollItems[1].monitor) )
      {
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v33,
                                                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
        if ( !mScrollItems )
          break;
        scrollItemPrefab = (Il2CppObject *)this->fields.scrollItemPrefab;
        this->fields.mNowEventId = (int32_t)mScrollItems->fields._items;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v35 = UnityEngine_Object__Instantiate_object_(
                scrollItemPrefab,
                (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v35,
          (UnityEngine_Component_o *)this->fields.grid,
          0LL);
        if ( !v35 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v35,
                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v33,
                                                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
        if ( !Component_object )
          break;
        EventBannerWindowScrollItem__Setup(
          (EventBannerWindowScrollItem_o *)Component_object,
          (TitleInfoControl_EventEndTimeInfo_o *)mScrollItems,
          v37);
        mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.mScrollItems;
        if ( !mScrollItems )
          break;
        items = mScrollItems->fields._items;
        v45 = Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__;
        ++mScrollItems->fields._version;
        if ( !items )
          break;
        v46 = mScrollItems->fields._size;
        if ( (unsigned int)v46 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mScrollItems,
            Component_object,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = (__int64)items + 8 * v46;
          mScrollItems->fields._size = v46 + 1;
          *(_QWORD *)(v47 + 32) = Component_object;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v47 + 32), (int64_t)Component_object, v38, v39, v40, v41, v42, v43);
        }
      }
      if ( v31 == ++v33 )
        goto LABEL_35;
    }
LABEL_41:
    sub_1C1AE30(mScrollItems, ev_end_time_infs);
  }
LABEL_35:
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.grid;
  if ( !mScrollItems )
    goto LABEL_41;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))mScrollItems->klass->vtable._8_unknown.method)(
    mScrollItems,
    mScrollItems->klass->vtable._9_unknown.methodPtr);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mScrollItems = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5659/*"EVENT_BANNER_WINDOW_TITLE"*/,
                                                                0LL);
  if ( !titleLabel )
    goto LABEL_41;
  UILabel__set_text(titleLabel, (System_String_o *)mScrollItems, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  mScrollItems = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5658/*"EVENT_BANNER_WINDOW_MESSAGE"*/,
                                                                0LL);
  if ( !titleDetailLabel )
    goto LABEL_41;
  UILabel__set_text(titleDetailLabel, (System_String_o *)mScrollItems, 0LL);
}


System_String_o *__fastcall EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4BC45AE & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3235/*"BaseWindow/CloseBtn"*/, method);
    byte_4BC45AE = 1;
  }
  return (System_String_o *)StringLiteral_3235/*"BaseWindow/CloseBtn"*/;
}


void __fastcall EventBannerWindow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC45B1 & 1) == 0 )
  {
    sub_1C1ABD4(&EventBannerWindow___c_TypeInfo, v1);
    byte_4BC45B1 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(EventBannerWindow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventBannerWindow___c_TypeInfo->static_fields->__9 = (struct EventBannerWindow___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)EventBannerWindow___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EventBannerWindow___c___ctor(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBannerWindow___c___OnClickClose_b__13_0(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  ;
}