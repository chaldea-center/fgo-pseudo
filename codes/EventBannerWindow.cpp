void EventBannerWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4CEAE70 & 1) == 0 )
  {
    sub_1C7BAE8(&EventBannerWindow_TypeInfo);
    byte_4CEAE70 = 1;
  }
  *EventBannerWindow_TypeInfo->static_fields = (struct EventBannerWindow_StaticFields)0x4316000000000002LL;
}


void EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEAE6F & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
    byte_4CEAE6F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mScrollItems, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t EventBannerWindow__GetNowEventId(EventBannerWindow_o *this, const MethodInfo *method)
{
  EventBannerWindow_o *v2; // x19
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *mScrollItems; // x8
  int32_t size; // w20
  EventBannerWindow_c *v5; // x0

  v2 = this;
  if ( (byte_4CEAE6C & 1) == 0 )
  {
    sub_1C7BAE8(&EventBannerWindow_TypeInfo);
    this = (EventBannerWindow_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__);
    byte_4CEAE6C = 1;
  }
  mScrollItems = v2->fields.mScrollItems;
  if ( !mScrollItems )
    sub_1C7BD40(this, method);
  size = mScrollItems->fields._size;
  v5 = EventBannerWindow_TypeInfo;
  if ( !EventBannerWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow_TypeInfo);
    v5 = EventBannerWindow_TypeInfo;
  }
  if ( size >= v5->static_fields->OPEN_POSSIBLE_COUNT )
    return 0;
  else
    return v2->fields.mNowEventId;
}


void EventBannerWindow__OnClickClose(EventBannerWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  EventBannerWindow___c_c *v6; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v8; // x21
  struct EventBannerWindow___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CEAE6D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventBannerWindow_OnClickClose__);
    sub_1C7BAE8(&Method_EventBannerWindow___c__OnClickClose_b__13_0__);
    sub_1C7BAE8(&EventBannerWindow___c_TypeInfo);
    byte_4CEAE6D = 1;
  }
  v3 = Method_EventBannerWindow_OnClickClose__;
  if ( (*((_BYTE *)Method_EventBannerWindow_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventBannerWindow_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v6 = EventBannerWindow___c_TypeInfo;
  if ( !EventBannerWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow___c_TypeInfo);
    v6 = EventBannerWindow___c_TypeInfo;
  }
  _9__13_0 = v6->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventBannerWindow___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v8, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0);
    static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0,
      (int32_t)_9__13_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !this )
    sub_1C7BD40(v6, v5);
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0);
}


void EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v4; // x1
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1C7BD40(0, v4);
  UIScrollView__ResetPosition(scrollView, 0);
}


void EventBannerWindow__Setup(
        EventBannerWindow_o *this,
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *ev_end_time_infs,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mScrollItems; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  int32_t v15; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  int32_t v17; // w22
  Il2CppObject *scrollItemPrefab; // x23
  Il2CppObject *v19; // x23
  Il2CppObject *Component_object; // x23
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  UILabel_o *titleLabel; // x20
  UILabel_o *titleDetailLabel; // x19
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEAE6B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_5535/*"EVENT_BANNER_WINDOW_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_5536/*"EVENT_BANNER_WINDOW_TITLE"*/);
    byte_4CEAE6B = 1;
  }
  memset(&v35, 0, sizeof(v35));
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    mScrollItems,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v35,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    if ( !v6 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1C7BD40(v6, v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35.fields._current, 0);
    if ( !gameObject )
      sub_1C7BD40(0, v10);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v11, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.grid;
  if ( !mScrollItems )
    goto LABEL_41;
  mScrollItems = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)mScrollItems,
                                                                0);
  if ( !mScrollItems )
    goto LABEL_41;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)mScrollItems, 0);
  v12 = this->fields.mScrollItems;
  if ( !v12 )
    goto LABEL_41;
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0);
  this->fields.mNowEventId = 0;
  mScrollItems = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mScrollItems )
    goto LABEL_41;
  mScrollItems = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)mScrollItems,
                                                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ev_end_time_infs )
    goto LABEL_41;
  v15 = ev_end_time_infs->fields._size;
  if ( v15 >= 1 )
  {
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)mScrollItems;
    v17 = 0;
    while ( 1 )
    {
      mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                    v17,
                                                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
      if ( !mScrollItems )
        break;
      if ( !v16 )
        break;
      mScrollItems = (System_Collections_Generic_List_object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    v16,
                                                                    (int32_t)mScrollItems->fields._items,
                                                                    (const MethodInfo_342E2FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !mScrollItems )
        break;
      if ( LODWORD(mScrollItems[1].monitor) )
      {
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v17,
                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
        if ( !mScrollItems )
          break;
        scrollItemPrefab = (Il2CppObject *)this->fields.scrollItemPrefab;
        this->fields.mNowEventId = (int32_t)mScrollItems->fields._items;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v19 = UnityEngine_Object__Instantiate_object_(
                scrollItemPrefab,
                (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v19,
          (UnityEngine_Component_o *)this->fields.grid,
          0);
        if ( !v19 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v19,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v17,
                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
        if ( !Component_object )
          break;
        EventBannerWindowScrollItem__Setup(
          (EventBannerWindowScrollItem_o *)Component_object,
          (TitleInfoControl_EventEndTimeInfo_o *)mScrollItems,
          v21);
        mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.mScrollItems;
        if ( !mScrollItems )
          break;
        items = mScrollItems->fields._items;
        v29 = Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__;
        ++mScrollItems->fields._version;
        if ( !items )
          break;
        v30 = mScrollItems->fields._size;
        if ( (unsigned int)v30 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mScrollItems,
            Component_object,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = (__int64)items + 8 * v30;
          mScrollItems->fields._size = v30 + 1;
          *(_QWORD *)(v31 + 32) = Component_object;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)(v31 + 32),
            (int32_t)Component_object,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
        }
      }
      if ( v15 == ++v17 )
        goto LABEL_35;
    }
LABEL_41:
    sub_1C7BD40(mScrollItems, ev_end_time_infs);
  }
LABEL_35:
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.grid;
  if ( !mScrollItems )
    goto LABEL_41;
  ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))mScrollItems->klass->vtable._8_unknown.methodPtr)(
    mScrollItems,
    mScrollItems->klass->vtable._8_unknown.method);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mScrollItems = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5536/*"EVENT_BANNER_WINDOW_TITLE"*/,
                                                                0);
  if ( !titleLabel )
    goto LABEL_41;
  UILabel__set_text(titleLabel, (System_String_o *)mScrollItems, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  mScrollItems = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5535/*"EVENT_BANNER_WINDOW_MESSAGE"*/,
                                                                0);
  if ( !titleDetailLabel )
    goto LABEL_41;
  UILabel__set_text(titleDetailLabel, (System_String_o *)mScrollItems, 0);
}


System_String_o *EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4CEAE6E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3076/*"BaseWindow/CloseBtn"*/);
    byte_4CEAE6E = 1;
  }
  return (System_String_o *)StringLiteral_3076/*"BaseWindow/CloseBtn"*/;
}


void EventBannerWindow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEAE71 & 1) == 0 )
  {
    sub_1C7BAE8(&EventBannerWindow___c_TypeInfo);
    byte_4CEAE71 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(EventBannerWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventBannerWindow___c_TypeInfo->static_fields->__9 = (struct EventBannerWindow___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventBannerWindow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventBannerWindow___c___ctor(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBannerWindow___c___OnClickClose_b__13_0(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  ;
}