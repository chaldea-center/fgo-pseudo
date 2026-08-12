void EventBannerWindow___cctor(const MethodInfo *method)
{
  if ( (byte_596CEEB & 1) == 0 )
  {
    sub_2213A60(&EventBannerWindow_TypeInfo);
    byte_596CEEB = 1;
  }
  *EventBannerWindow_TypeInfo->static_fields = (struct EventBannerWindow_StaticFields)0x4316000000000002LL;
}


void EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596CEEA & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
    byte_596CEEA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mScrollItems, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10, v11);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t EventBannerWindow__GetNowEventId(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventBannerWindow_o *v3; // x19
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *mScrollItems; // x8
  int32_t size; // w20
  EventBannerWindow_c *v6; // x0

  v3 = this;
  if ( (byte_596CEE7 & 1) == 0 )
  {
    sub_2213A60(&EventBannerWindow_TypeInfo);
    this = (EventBannerWindow_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__);
    byte_596CEE7 = 1;
  }
  mScrollItems = v3->fields.mScrollItems;
  if ( !mScrollItems )
    sub_2213CDC(this, method);
  size = mScrollItems->fields._size;
  v6 = EventBannerWindow_TypeInfo;
  if ( !*(&EventBannerWindow_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow_TypeInfo, method, v2);
    v6 = EventBannerWindow_TypeInfo;
  }
  if ( size >= v6->static_fields->OPEN_POSSIBLE_COUNT )
    return 0;
  else
    return v3->fields.mNowEventId;
}


void EventBannerWindow__OnClickClose(EventBannerWindow_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  EventBannerWindow___c_c *v7; // x0
  struct EventBannerWindow___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v10; // x21
  struct EventBannerWindow___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596CEE8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventBannerWindow_OnClickClose__);
    sub_2213A60(&Method_EventBannerWindow___c__OnClickClose_b__13_0__);
    sub_2213A60(&EventBannerWindow___c_TypeInfo);
    byte_596CEE8 = 1;
  }
  v3 = Method_EventBannerWindow_OnClickClose__;
  if ( (*((_BYTE *)Method_EventBannerWindow_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventBannerWindow_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v7 = EventBannerWindow___c_TypeInfo;
  if ( !*(&EventBannerWindow___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow___c_TypeInfo, v5, v6);
    v7 = EventBannerWindow___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v10, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0);
    v11 = EventBannerWindow___c_TypeInfo->static_fields;
    v11->__9__13_0 = _9__13_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__13_0, (int32_t)_9__13_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !this )
    sub_2213CDC(v7, v5);
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0);
}


void EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v4; // x1
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_2213CDC(0, v4);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x21
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  const MethodInfo_47A29F8 *v17; // x0
  int32_t v18; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  int32_t v20; // w22
  __int64 v21; // x2
  int32_t items; // w8
  UnityEngine_Object_c *v23; // x0
  Il2CppObject *scrollItemPrefab; // x23
  Il2CppObject *v25; // x23
  Il2CppObject *Component_object; // x23
  const MethodInfo *v27; // x2
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *titleDetailLabel; // x19
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596CEE6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_5728/*"EVENT_BANNER_WINDOW_MESSAGE"*/);
    sub_2213A60(&StringLiteral_5729/*"EVENT_BANNER_WINDOW_TITLE"*/);
    byte_596CEE6 = 1;
  }
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.mScrollItems;
  memset(&v43, 0, sizeof(v43));
  if ( !mScrollItems )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    mScrollItems,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v43 = v42;
  v42.fields._list = 0;
  *(_QWORD *)&v42.fields._index = &v43;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v43,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    if ( !v6 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_2213CDC(v6, v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v43.fields._current, 0);
    if ( !gameObject )
      sub_2213CDC(0, v10);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    UnityEngine_Object__Destroy_83459800(v13, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.grid;
  if ( !mScrollItems )
    goto LABEL_41;
  mScrollItems = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)mScrollItems,
                                                                0);
  if ( !mScrollItems )
    goto LABEL_41;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)mScrollItems, 0);
  v14 = this->fields.mScrollItems;
  if ( !v14 )
    goto LABEL_41;
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
  v17 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.mNowEventId = 0;
  mScrollItems = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance(v17);
  if ( !mScrollItems )
    goto LABEL_41;
  mScrollItems = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)mScrollItems,
                                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ev_end_time_infs )
    goto LABEL_41;
  v18 = ev_end_time_infs->fields._size;
  if ( v18 >= 1 )
  {
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)mScrollItems;
    v20 = 0;
    while ( 1 )
    {
      mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                    v20,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
      if ( !mScrollItems )
        break;
      if ( !v19 )
        break;
      mScrollItems = (System_Collections_Generic_List_object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    v19,
                                                                    (int32_t)mScrollItems->fields._items,
                                                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !mScrollItems )
        break;
      if ( LODWORD(mScrollItems[1].monitor) )
      {
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v20,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
        if ( !mScrollItems )
          break;
        items = (int32_t)mScrollItems->fields._items;
        v23 = UnityEngine_Object_TypeInfo;
        scrollItemPrefab = (Il2CppObject *)this->fields.scrollItemPrefab;
        this->fields.mNowEventId = items;
        if ( !*(&v23->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v23, ev_end_time_infs, v21);
        v25 = UnityEngine_Object__Instantiate_object_(
                scrollItemPrefab,
                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v25,
          (UnityEngine_Component_o *)this->fields.grid,
          0);
        if ( !v25 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v25,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v20,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
        if ( !Component_object )
          break;
        EventBannerWindowScrollItem__Setup(
          (EventBannerWindowScrollItem_o *)Component_object,
          (TitleInfoControl_EventEndTimeInfo_o *)mScrollItems,
          v27);
        mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.mScrollItems;
        if ( !mScrollItems )
          break;
        v34 = mScrollItems->fields._items;
        v35 = Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__;
        ++mScrollItems->fields._version;
        if ( !v34 )
          break;
        v36 = mScrollItems->fields._size;
        if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mScrollItems,
            Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = (__int64)v34 + 8 * v36;
          mScrollItems->fields._size = v36 + 1;
          *(_QWORD *)(v37 + 32) = Component_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v37 + 32),
            (int32_t)Component_object,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
        }
      }
      if ( v18 == ++v20 )
        goto LABEL_35;
    }
LABEL_41:
    sub_2213CDC(mScrollItems, ev_end_time_infs);
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
  mScrollItems = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5729/*"EVENT_BANNER_WINDOW_TITLE"*/,
                                                                0);
  if ( !titleLabel )
    goto LABEL_41;
  UILabel__set_text(titleLabel, (System_String_o *)mScrollItems, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  mScrollItems = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5728/*"EVENT_BANNER_WINDOW_MESSAGE"*/,
                                                                0);
  if ( !titleDetailLabel )
    goto LABEL_41;
  UILabel__set_text(titleDetailLabel, (System_String_o *)mScrollItems, 0);
}


System_String_o *EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  if ( (byte_596CEE9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3197/*"BaseWindow/CloseBtn"*/);
    byte_596CEE9 = 1;
  }
  return (System_String_o *)StringLiteral_3197/*"BaseWindow/CloseBtn"*/;
}


void EventBannerWindow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CEEC & 1) == 0 )
  {
    sub_2213A60(&EventBannerWindow___c_TypeInfo);
    byte_596CEEC = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventBannerWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventBannerWindow___c_TypeInfo->static_fields->__9 = (struct EventBannerWindow___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventBannerWindow___c_TypeInfo->static_fields,
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