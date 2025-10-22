void EventBannerWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4C53669 & 1) == 0 )
  {
    sub_1C3E564(&EventBannerWindow_TypeInfo);
    byte_4C53669 = 1;
  }
  *EventBannerWindow_TypeInfo->static_fields = (struct EventBannerWindow_StaticFields)0x4316000000000002LL;
}


void EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C53668 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
    byte_4C53668 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mScrollItems, (int32_t)v3, v4, v5);
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
  if ( (byte_4C53665 & 1) == 0 )
  {
    sub_1C3E564(&EventBannerWindow_TypeInfo);
    this = (EventBannerWindow_o *)sub_1C3E564(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__);
    byte_4C53665 = 1;
  }
  mScrollItems = v2->fields.mScrollItems;
  if ( !mScrollItems )
    sub_1C3E7C0(this, method);
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
  const MethodInfo *v11; // x3

  if ( (byte_4C53666 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EventBannerWindow_OnClickClose__);
    sub_1C3E564(&Method_EventBannerWindow___c__OnClickClose_b__13_0__);
    sub_1C3E564(&EventBannerWindow___c_TypeInfo);
    byte_4C53666 = 1;
  }
  v3 = Method_EventBannerWindow_OnClickClose__;
  if ( (*((_BYTE *)Method_EventBannerWindow_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_EventBannerWindow_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
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
    _9__13_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v8, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0);
    static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v10, v11);
  }
  if ( !this )
    sub_1C3E7C0(v6, v5);
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0);
}


void EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v4; // x1
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1C3E7C0(0, v4);
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
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  UILabel_o *titleLabel; // x20
  UILabel_o *titleDetailLabel; // x19
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C53664 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_5528/*"EVENT_BANNER_WINDOW_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_5529/*"EVENT_BANNER_WINDOW_TITLE"*/);
    byte_4C53664 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    mScrollItems,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v31,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    if ( !v6 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C3E7C0(v6, v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31.fields._current, 0);
    if ( !gameObject )
      sub_1C3E7C0(0, v10);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v11, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
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
  mScrollItems = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mScrollItems )
    goto LABEL_41;
  mScrollItems = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)mScrollItems,
                                                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
      if ( !mScrollItems )
        break;
      if ( !v16 )
        break;
      mScrollItems = (System_Collections_Generic_List_object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    v16,
                                                                    (int32_t)mScrollItems->fields._items,
                                                                    (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !mScrollItems )
        break;
      if ( LODWORD(mScrollItems[1].monitor) )
      {
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v17,
                                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
        if ( !mScrollItems )
          break;
        scrollItemPrefab = (Il2CppObject *)this->fields.scrollItemPrefab;
        this->fields.mNowEventId = (int32_t)mScrollItems->fields._items;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v19 = UnityEngine_Object__Instantiate_object_(
                scrollItemPrefab,
                (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v19,
          (UnityEngine_Component_o *)this->fields.grid,
          0);
        if ( !v19 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v19,
                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v17,
                                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
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
        v25 = Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__;
        ++mScrollItems->fields._version;
        if ( !items )
          break;
        v26 = mScrollItems->fields._size;
        if ( (unsigned int)v26 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mScrollItems,
            Component_object,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = (__int64)items + 8 * v26;
          mScrollItems->fields._size = v26 + 1;
          *(_QWORD *)(v27 + 32) = Component_object;
          sub_1C3E508((CGThumbnailListItem_o *)(v27 + 32), (int32_t)Component_object, v22, v23);
        }
      }
      if ( v15 == ++v17 )
        goto LABEL_35;
    }
LABEL_41:
    sub_1C3E7C0(mScrollItems, ev_end_time_infs);
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
                                                                (System_String_o *)StringLiteral_5529/*"EVENT_BANNER_WINDOW_TITLE"*/,
                                                                0);
  if ( !titleLabel )
    goto LABEL_41;
  UILabel__set_text(titleLabel, (System_String_o *)mScrollItems, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  mScrollItems = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5528/*"EVENT_BANNER_WINDOW_MESSAGE"*/,
                                                                0);
  if ( !titleDetailLabel )
    goto LABEL_41;
  UILabel__set_text(titleDetailLabel, (System_String_o *)mScrollItems, 0);
}


System_String_o *EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C53667 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3075/*"BaseWindow/CloseBtn"*/);
    byte_4C53667 = 1;
  }
  return (System_String_o *)StringLiteral_3075/*"BaseWindow/CloseBtn"*/;
}


void EventBannerWindow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5366A & 1) == 0 )
  {
    sub_1C3E564(&EventBannerWindow___c_TypeInfo);
    byte_4C5366A = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(EventBannerWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventBannerWindow___c_TypeInfo->static_fields->__9 = (struct EventBannerWindow___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)EventBannerWindow___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventBannerWindow___c___ctor(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBannerWindow___c___OnClickClose_b__13_0(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  ;
}