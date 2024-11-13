void __fastcall EventBannerWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12D6B & 1) == 0 )
  {
    sub_1BCA7E0(&EventBannerWindow_TypeInfo, v1, v2);
    byte_4B12D6B = 1;
  }
  *EventBannerWindow_TypeInfo->static_fields = (struct EventBannerWindow_StaticFields)0x4316000000000002LL;
}


void __fastcall EventBannerWindow___ctor(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1

  if ( (byte_4B12D6A & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo, v7, v8);
    byte_4B12D6A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventBannerWindowScrollItem__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem___ctor__);
  this->fields.mScrollItems = (struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mScrollItems, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v16);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall EventBannerWindow__GetNowEventId(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventBannerWindow_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *mScrollItems; // x8
  int32_t size; // w20
  EventBannerWindow_c *v8; // x0

  v3 = this;
  if ( (byte_4B12D67 & 1) == 0 )
  {
    sub_1BCA7E0(&EventBannerWindow_TypeInfo, method, v2);
    this = (EventBannerWindow_o *)sub_1BCA7E0(
                                    &Method_System_Collections_Generic_List_EventBannerWindowScrollItem__get_Count__,
                                    v4,
                                    v5);
    byte_4B12D67 = 1;
  }
  mScrollItems = v3->fields.mScrollItems;
  if ( !mScrollItems )
    sub_1BCAA3C(this, method);
  size = mScrollItems->fields._size;
  v8 = EventBannerWindow_TypeInfo;
  if ( !EventBannerWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow_TypeInfo, method);
    v8 = EventBannerWindow_TypeInfo;
  }
  if ( size >= v8->static_fields->OPEN_POSSIBLE_COUNT )
    return 0;
  else
    return v3->fields.mNowEventId;
}


void __fastcall EventBannerWindow__OnClickClose(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  EventBannerWindow___c_c *v15; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v17; // x21
  struct EventBannerWindow___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B12D68 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventBannerWindow_OnClickClose__, v4, v5);
    sub_1BCA7E0(&Method_EventBannerWindow___c__OnClickClose_b__13_0__, v6, v7);
    sub_1BCA7E0(&EventBannerWindow___c_TypeInfo, v8, v9);
    byte_4B12D68 = 1;
  }
  v10 = Method_EventBannerWindow_OnClickClose__;
  if ( (*((_BYTE *)Method_EventBannerWindow_OnClickClose__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_EventBannerWindow_OnClickClose__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
  v15 = EventBannerWindow___c_TypeInfo;
  if ( !EventBannerWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBannerWindow___c_TypeInfo, v12);
    v15 = EventBannerWindow___c_TypeInfo;
  }
  _9__13_0 = v15->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      v15 = EventBannerWindow___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(_9__13_0, v17, Method_EventBannerWindow___c__OnClickClose_b__13_0__, 0LL);
    static_fields = EventBannerWindow___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !this )
    sub_1BCAA3C(v15, v12);
  BaseDialog__Close((BaseDialog_o *)this, _9__13_0, 0LL);
}


void __fastcall EventBannerWindow__Open(EventBannerWindow_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v4; // x1
  UIScrollView_o *scrollView; // x0

  BaseDialog__Open((BaseDialog_o *)this, end_act, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    sub_1BCAA3C(0LL, v4);
  UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall EventBannerWindow__Setup(
        EventBannerWindow_o *this,
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *ev_end_time_infs,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_object__o *mScrollItems; // x0
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1
  __int64 v43; // x1
  UnityEngine_Object_o *v44; // x21
  struct System_Collections_Generic_List_EventBannerWindowScrollItem__o *v45; // x8
  int32_t size; // w2
  int v47; // w9
  int32_t v48; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x21
  int32_t v50; // w22
  Il2CppObject *scrollItemPrefab; // x23
  Il2CppObject *v52; // x23
  Il2CppObject *Component_object; // x23
  const MethodInfo *v54; // x2
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  __int64 v65; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *titleDetailLabel; // x19
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12D66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, ev_end_time_infs, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Clear__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&StringLiteral_5629/*"EVENT_BANNER_WINDOW_MESSAGE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_5630/*"EVENT_BANNER_WINDOW_TITLE"*/, v35, v36);
    byte_4B12D66 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.mScrollItems;
  if ( !mScrollItems )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    mScrollItems,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventBannerWindowScrollItem__GetEnumerator__);
  v69 = v68;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__MoveNext__);
    if ( !v38 )
      break;
    current = v69.fields._current;
    if ( !v69.fields._current )
      sub_1BCAA3C(v38, v39);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v69.fields._current, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v42);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    UnityEngine_Object__Destroy_70154244(v44, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventBannerWindowScrollItem__Dispose__);
  mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.grid;
  if ( !mScrollItems )
    goto LABEL_41;
  mScrollItems = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)mScrollItems,
                                                                0LL);
  if ( !mScrollItems )
    goto LABEL_41;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)mScrollItems, 0LL);
  v45 = this->fields.mScrollItems;
  if ( !v45 )
    goto LABEL_41;
  size = v45->fields._size;
  v47 = v45->fields._version + 1;
  v45->fields._size = 0;
  v45->fields._version = v47;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v45->fields._items, 0, size, 0LL);
  this->fields.mNowEventId = 0;
  mScrollItems = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mScrollItems )
    goto LABEL_41;
  mScrollItems = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)mScrollItems,
                                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ev_end_time_infs )
    goto LABEL_41;
  v48 = ev_end_time_infs->fields._size;
  if ( v48 >= 1 )
  {
    v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)mScrollItems;
    v50 = 0;
    while ( 1 )
    {
      mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                    v50,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
      if ( !mScrollItems )
        break;
      if ( !v49 )
        break;
      mScrollItems = (System_Collections_Generic_List_object__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    v49,
                                                                    (int32_t)mScrollItems->fields._items,
                                                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !mScrollItems )
        break;
      if ( LODWORD(mScrollItems[1].monitor) )
      {
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v50,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
        if ( !mScrollItems )
          break;
        scrollItemPrefab = (Il2CppObject *)this->fields.scrollItemPrefab;
        this->fields.mNowEventId = (int32_t)mScrollItems->fields._items;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ev_end_time_infs);
        v52 = UnityEngine_Object__Instantiate_object_(
                scrollItemPrefab,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(
          (UnityEngine_GameObject_o *)v52,
          (UnityEngine_Component_o *)this->fields.grid,
          0LL);
        if ( !v52 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v52,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventBannerWindowScrollItem___);
        mScrollItems = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)ev_end_time_infs,
                                                                      v50,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__get_Item__);
        if ( !Component_object )
          break;
        EventBannerWindowScrollItem__Setup(
          (EventBannerWindowScrollItem_o *)Component_object,
          (TitleInfoControl_EventEndTimeInfo_o *)mScrollItems,
          v54);
        mScrollItems = (System_Collections_Generic_List_object__o *)this->fields.mScrollItems;
        if ( !mScrollItems )
          break;
        items = mScrollItems->fields._items;
        v62 = Method_System_Collections_Generic_List_EventBannerWindowScrollItem__Add__;
        ++mScrollItems->fields._version;
        if ( !items )
          break;
        v63 = mScrollItems->fields._size;
        if ( (unsigned int)v63 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mScrollItems,
            Component_object,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = (__int64)items + 8 * v63;
          mScrollItems->fields._size = v63 + 1;
          *(_QWORD *)(v64 + 32) = Component_object;
          sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 32), (int64_t)Component_object, v55, v56, v57, v58, v59, v60);
        }
      }
      if ( v48 == ++v50 )
        goto LABEL_35;
    }
LABEL_41:
    sub_1BCAA3C(mScrollItems, ev_end_time_infs);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
  mScrollItems = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5630/*"EVENT_BANNER_WINDOW_TITLE"*/,
                                                                0LL);
  if ( !titleLabel )
    goto LABEL_41;
  UILabel__set_text(titleLabel, (System_String_o *)mScrollItems, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  mScrollItems = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_5629/*"EVENT_BANNER_WINDOW_MESSAGE"*/,
                                                                0LL);
  if ( !titleDetailLabel )
    goto LABEL_41;
  UILabel__set_text(titleDetailLabel, (System_String_o *)mScrollItems, 0LL);
}


System_String_o *__fastcall EventBannerWindow__get_closeBtnPath(EventBannerWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12D69 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3221/*"BaseWindow/CloseBtn"*/, method, v2);
    byte_4B12D69 = 1;
  }
  return (System_String_o *)StringLiteral_3221/*"BaseWindow/CloseBtn"*/;
}


void __fastcall EventBannerWindow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12D6C & 1) == 0 )
  {
    sub_1BCA7E0(&EventBannerWindow___c_TypeInfo, v1, v2);
    byte_4B12D6C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventBannerWindow___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventBannerWindow___c_TypeInfo->static_fields->__9 = (struct EventBannerWindow___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventBannerWindow___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventBannerWindow___c___ctor(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBannerWindow___c___OnClickClose_b__13_0(EventBannerWindow___c_o *this, const MethodInfo *method)
{
  ;
}