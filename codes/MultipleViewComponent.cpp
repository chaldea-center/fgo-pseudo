void __fastcall MultipleViewComponent___ctor(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MyRoomControl_c *v9; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x20
  System_Collections_Generic_List_long__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  System_Collections_Generic_List_int__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_49B63CB & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&long___TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long___ctor___75443856, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor___75443648, v5);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B4CF90(&MyRoomControl_TypeInfo, v8);
    byte_49B63CB = 1;
  }
  v9 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v9 = MyRoomControl_TypeInfo;
  }
  v10 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B4D038(
                                                         long___TypeInfo,
                                                         (unsigned int)v9->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v11 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_55999204(
    v11,
    v10,
    (const MethodInfo_3567AE4 *)Method_System_Collections_Generic_List_long___ctor___75443856);
  this->fields.listSelectedUsrSvtId = v11;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listSelectedUsrSvtId, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B4D038(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v15 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55978636(
    v15,
    v14,
    (const MethodInfo_3562A8C *)Method_System_Collections_Generic_List_int___ctor___75443648);
  this->fields.listSelectedImageLimitCount = v15;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listSelectedImageLimitCount, (int32_t)v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MultipleViewComponent__CancelMultipleViewWindow(
        MultipleViewComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B63BB & 1) == 0 )
  {
    sub_1B4CF90(&Method_MultipleViewComponent_EndCancelButton__, callback);
    sub_1B4CF90(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v6);
    byte_49B63BB = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.cancelCallback, (int32_t)callback, (int32_t)method, v3);
  v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B4D1DC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    v8);
  MultipleViewComponent__StatusRequest(this, v7, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__CloseSvtDetail(
        MultipleViewComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v17; // x20

  if ( (byte_49B63C0 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B4CF90(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v9);
    sub_1B4CF90(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_49B63C0 = 1;
  }
  v11 = sub_1B4D1DC(MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v17 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v11,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B4D1EC(v12, v13);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__EndCancelButton(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  struct MultipleViewListViewManager_o *v7; // x20
  MultipleViewListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_49B63BC & 1) == 0 )
  {
    sub_1B4CF90(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickServant__, v5);
    byte_49B63BC = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          v7 = this->fields.multipleViewManager,
          v8 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B4D1DC(MultipleViewListViewManager_CallbackFunc_TypeInfo),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            v9),
          !v7) )
    {
LABEL_11:
      sub_1B4D1EC(multipleViewManager, isRequest);
    }
    v7->fields.callbackFunc = v8;
    sub_1B4CF34((CGThumbnailListItem_o *)&v7->fields.callbackFunc, (int32_t)v8, v10, v11);
    MultipleViewListViewManager__SetMode_31499236(v7, 2, v12);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isRequest);
  multipleViewManager = (MultipleViewListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !multipleViewManager )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)multipleViewManager, 0, 0LL);
  cancelCallback = this->fields.cancelCallback;
  if ( cancelCallback )
    ActionExtensions__Call(cancelCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__EndClickTabChoice(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          (multipleViewManager = this->fields.multipleViewManager) == 0LL) )
    {
      sub_1B4D1EC(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31499236(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__EndClickTabLock(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          (multipleViewManager = this->fields.multipleViewManager) == 0LL) )
    {
      sub_1B4D1EC(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31499236(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__EndClickTabNormal(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          (multipleViewManager = this->fields.multipleViewManager) == 0LL) )
    {
      sub_1B4D1EC(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31499236(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__EndClickTabPush(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          (multipleViewManager = this->fields.multipleViewManager) == 0LL) )
    {
      sub_1B4D1EC(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31499236(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 3, method);
}


void __fastcall MultipleViewComponent__EndStatusSync(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_requedstCallback; // x0
  struct MultipleViewComponent_RequestCallbackFunc_o *v5; // x19
  struct MultipleViewComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (CGThumbnailListItem_o *)&this->fields.requedstCallback;
  v5 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_1B4CF34(p_requedstCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      1LL,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall MultipleViewComponent__EndePushRequest(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v6; // x2
  struct MultipleViewListViewManager_o *v7; // x20
  MultipleViewListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49B63BF & 1) == 0 )
  {
    sub_1B4CF90(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickServant__, v4);
    byte_49B63BF = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, method),
        (multipleViewManager = this->fields.multipleViewManager) == 0LL)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, v6),
        v7 = this->fields.multipleViewManager,
        v8 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B4D1DC(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          v9),
        !v7) )
  {
    sub_1B4D1EC(multipleViewManager, result);
  }
  v7->fields.callbackFunc = v8;
  sub_1B4CF34((CGThumbnailListItem_o *)&v7->fields.callbackFunc, (int32_t)v8, v10, v11);
  MultipleViewListViewManager__SetMode_31499236(v7, 2, v12);
}


int32_t __fastcall MultipleViewComponent__GetCurrentSelectIndex(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  int32_t v5; // w20

  if ( (byte_49B63C9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    byte_49B63C9 = 1;
  }
  listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_8:
    sub_1B4D1EC(listSelectedUsrSvtId, method);
  v5 = 0;
  while ( v5 < listSelectedUsrSvtId->fields._size )
  {
    if ( System_Collections_Generic_List_long___get_Item(
           listSelectedUsrSvtId,
           v5,
           (const MethodInfo_3567F20 *)Method_System_Collections_Generic_List_long__get_Item__) < 1 )
      return v5;
    listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
    ++v5;
    if ( !listSelectedUsrSvtId )
      goto LABEL_8;
  }
  return -1;
}


int64_t __fastcall MultipleViewComponent__GetLatestSelectedUsrSvtId(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v5; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B63B9 & 1) == 0 )
  {
    sub_1B4CF90(&string_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_9001/*"MultipleViewSelectedUsrSvtId"*/, v2);
    byte_49B63B9 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9001/*"MultipleViewSelectedUsrSvtId"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  v5 = -1LL;
  if ( !IsNullOrEmpty )
  {
    result = -1LL;
    if ( System_Int64__TryParse(String, &result, 0LL) )
      return result;
    else
      return -1LL;
  }
  return v5;
}


System_String_o *__fastcall MultipleViewComponent__GetTitleMessage(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  System_String_o *v6; // x19
  System_String_o *v7; // x0
  int32_t CurrentSelectIndex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_49B63CA & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_7022/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v3);
    sub_1B4CF90(&StringLiteral_7023/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, v4);
    byte_49B63CA = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( (CurrentSelectIndex & 0x80000000) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = (System_String_o *)StringLiteral_7023/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v5 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0LL);
    v6 = System_String__Concat_61093468((System_String_o *)StringLiteral_7022/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v5, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = v6;
  }
  return LocalizationManager__Get(v7, 0LL);
}


void __fastcall MultipleViewComponent__Init(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__DestroyList(multipleViewManager, method),
        infoLb = this->fields.infoLb,
        this->fields.state = 0,
        multipleViewManager = (MultipleViewListViewManager_o *)MultipleViewComponent__GetTitleMessage(this, v5),
        !infoLb) )
  {
    sub_1B4D1EC(multipleViewManager, method);
  }
  UILabel__set_text(infoLb, (System_String_o *)multipleViewManager, 0LL);
  MultipleViewComponent__SetModeTabKind(this, 0, v6);
}


bool __fastcall MultipleViewComponent__IsEnableAddSelectSvt(MultipleViewComponent_o *this, const MethodInfo *method)
{
  return MultipleViewComponent__GetCurrentSelectIndex(this, method) >= 0;
}


void __fastcall MultipleViewComponent__OnClickChoiceTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_49B63C3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_MultipleViewComponent_EndClickTabChoice__, method);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickChoiceTabButton__, v3);
    sub_1B4CF90(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49B63C3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MultipleViewComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B4D1DC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          v10);
        MultipleViewComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B4D1DC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        v13);
      MultipleViewComponent__StatusRequest(this, v12, v14);
    }
    MultipleViewComponent__SetModeTabKind(this, 2, v7);
  }
}


void __fastcall MultipleViewComponent__OnClickDecide(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  MultipleViewComponent_o *Item; // x0
  const MethodInfo *v14; // x2
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v17; // x19
  const MethodInfo *v18; // x3

  if ( (byte_49B63C8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__get_Count__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__get_Item__, v5);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickDecide__, v6);
    byte_49B63C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.tabModeKind && (MultipleViewComponent__GetCurrentSelectIndex(this, method) & 0x80000000) != 0 )
    {
      v9 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickDecide__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0, 0LL);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      this->fields.state = 4;
      if ( !listSelectedUsrSvtId )
        goto LABEL_17;
      Item = (MultipleViewComponent_o *)System_Collections_Generic_List_long___get_Item(
                                          listSelectedUsrSvtId,
                                          listSelectedUsrSvtId->fields._size - 1,
                                          (const MethodInfo_3567F20 *)Method_System_Collections_Generic_List_long__get_Item__);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(Item, (int64_t)Item, v14);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      if ( !listSelectedUsrSvtId
        || (myRoomControl = this->fields.myRoomControl,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                                listSelectedUsrSvtId,
                                                                                (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0LL)
        || (v17 = (System_Int64_array *)listSelectedUsrSvtId,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_int___ToArray(
                                                                                listSelectedImageLimitCount,
                                                                                (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_17:
        sub_1B4D1EC(listSelectedUsrSvtId, v11);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v17, (System_Int32_array *)listSelectedUsrSvtId, v18);
    }
    else
    {
      v7 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickDecide__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
    }
  }
}


void __fastcall MultipleViewComponent__OnClickLockTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_49B63C2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_MultipleViewComponent_EndClickTabLock__, method);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickLockTabButton__, v3);
    sub_1B4CF90(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49B63C2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MultipleViewComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B4D1DC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          v10);
        MultipleViewComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B4D1DC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        v13);
      MultipleViewComponent__StatusRequest(this, v12, v14);
    }
    MultipleViewComponent__SetModeTabKind(this, 1, v7);
  }
}


void __fastcall MultipleViewComponent__OnClickNormalTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B63C1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_MultipleViewComponent_EndClickTabNormal__, method);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickNormalTabButton__, v3);
    sub_1B4CF90(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49B63C1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MultipleViewComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B4D1DC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      v8);
    MultipleViewComponent__StatusRequest(this, v7, v9);
  }
}


void __fastcall MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B63C4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_MultipleViewComponent_EndClickTabPush__, method);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickPushTabButton__, v3);
    sub_1B4CF90(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49B63C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_MultipleViewComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B4D1DC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      v8);
    MultipleViewComponent__StatusRequest(this, v7, v9);
  }
}


void __fastcall MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49B63C7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickScaleChange__, method);
    byte_49B63C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      sub_1B4D1EC(0LL, v5);
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, v5);
    MultipleViewComponent__UpdateScaleChangeIconSprite(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__OnClickServant(
        MultipleViewComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x20
  __int64 multipleViewManager; // x0
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x3
  MultipleViewListViewItem_o *Item; // x1
  MultipleViewListViewItem_o **v46; // x21
  __int64 v47; // x8
  __int128 v48; // q1
  int32_t tabModeKind; // w8
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  int32_t v52; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v54; // x20
  ServantStatusDialog_ResultDelegate_o *v55; // x22
  _QWORD *v56; // x0
  _QWORD *v57; // x0
  struct MultipleViewListViewManager_o *v58; // x20
  MultipleViewListViewManager_CallbackFunc_o *v59; // x21
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x2
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  const MethodInfo *v66; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v68; // x22
  int32_t Index; // w0
  const MethodInfo *v70; // x1
  int32_t v71; // w21
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  MultipleViewListViewManager_o *v74; // x20
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x1
  UILabel_o *infoLb; // x20
  _QWORD *v78; // x0
  System_Reflection_MethodBase_o *v79; // x0
  const MethodInfo *v80; // x2
  int64_t v81; // x22
  struct UserServantEntity_o *v82; // x8
  __int128 v83; // q0
  __int64 v84; // x21
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  _QWORD *v87; // x0
  System_Reflection_MethodBase_o *v88; // x0
  const MethodInfo *v89; // x1
  __int64 v90; // x8
  __int64 v91; // x8
  __int64 v92; // x8
  __int128 v93; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v95; // x20
  System_Action_bool__int__o *v96; // x22
  const MethodInfo *v97; // x5
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v99; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v102; // x26
  System_String_o *v103; // x22
  System_String_o *v104; // x23
  System_Object_array *v105; // x24
  int32_t Rarity; // w27
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  Il2CppObject *v109; // x27
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  Il2CppObject *v112; // x27
  int32_t v113; // w0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  Il2CppObject *v116; // x25
  int32_t v117; // w0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  Il2CppObject *v120; // x25
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  Il2CppObject *v123; // x25
  MultipleViewListViewItem_o *v124; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v125; // x9
  ServantEntity_o *servantEntity; // x21
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  Il2CppObject *v129; // x21
  System_String_o *v130; // x21
  System_String_o *v131; // x23
  System_String_o *v132; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v134; // x26
  __int64 v135; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  if ( (byte_49B63BD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_bool__int__TypeInfo, *(_QWORD *)&kind);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v7);
    sub_1B4CF90(&MultipleViewListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B4CF90(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1B4CF90(&DataManager_TypeInfo, v12);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__FindIndex__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__set_Item__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__set_Item__, v18);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v19);
    sub_1B4CF90(&Method_MultipleViewComponent_CloseSvtDetail__, v20);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickServant__, v21);
    sub_1B4CF90(&object___TypeInfo, v22);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1B4CF90(&System_Predicate_long__TypeInfo, v25);
    sub_1B4CF90(&Rarity_TypeInfo, v26);
    sub_1B4CF90(&ServantStatusDialog_ResultDelegate_TypeInfo, v27);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28);
    sub_1B4CF90(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__, v29);
    sub_1B4CF90(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__, v30);
    sub_1B4CF90(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo, v31);
    sub_1B4CF90(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__, v32);
    sub_1B4CF90(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v33);
    sub_1B4CF90(&StringLiteral_11679/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v34);
    sub_1B4CF90(&StringLiteral_11677/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v35);
    sub_1B4CF90(&StringLiteral_11678/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v36);
    sub_1B4CF90(&StringLiteral_11680/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v37);
    byte_49B63BD = 1;
  }
  v38 = sub_1B4D1DC(MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_118;
  *(_QWORD *)(v38 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 16), (int32_t)this, v41, v42);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    multipleViewManager = (__int64)this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_118;
    Item = MultipleViewListViewManager__GetItem((MultipleViewListViewManager_o *)multipleViewManager, n, v43);
  }
  *(_QWORD *)(v38 + 24) = Item;
  v46 = (MultipleViewListViewItem_o **)(v38 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 24), (int32_t)Item, (int32_t)v43, v44);
  if ( !*(_QWORD *)(v38 + 24) )
    goto LABEL_118;
  v47 = *(_QWORD *)(*(_QWORD *)(v38 + 24) + 112LL);
  if ( !v47 )
    goto LABEL_118;
  v48 = *(_OWORD *)(v47 + 32);
  *(_OWORD *)&v139.fields.currentCryptoKey = *(_OWORD *)(v47 + 16);
  *(_OWORD *)&v139.fields.fakeValue = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v138 = v139;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v138, 0LL);
  this->fields.usrSvtId = multipleViewManager;
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v46 )
    {
      userSvtEntity = (*v46)->fields.userSvtEntity;
      v54 = (CommonUI_o *)multipleViewManager;
      v55 = (ServantStatusDialog_ResultDelegate_o *)sub_1B4D1DC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v55,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0LL);
      if ( v54 )
      {
        CommonUI__OpenServantStatusDialog_30259088(v54, 0, userSvtEntity, v55, 0, 0LL);
        return;
      }
    }
    goto LABEL_118;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v46 )
      goto LABEL_118;
    (*v46)->fields.isSwapChoice ^= 1u;
    v56 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v56 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickServant__);
    v51 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v56, v56[4]);
    v52 = 0;
    goto LABEL_36;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v46 )
      goto LABEL_118;
    (*v46)->fields.isSwapLock ^= 1u;
    v50 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v50 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickServant__);
    v51 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v50, v50[4]);
    v52 = 11;
    goto LABEL_36;
  }
  multipleViewManager = (__int64)*v46;
  if ( !*v46 )
    goto LABEL_118;
  if ( tabModeKind != 3 )
  {
    if ( !MultipleViewListViewItem__get_IsCanNotSelect((MultipleViewListViewItem_o *)multipleViewManager, v40) )
    {
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      v68 = (System_Predicate_long__o *)sub_1B4D1DC(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v68,
        (Il2CppObject *)v38,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        0LL);
      if ( !listSelectedUsrSvtId )
        goto LABEL_118;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v68,
                (const MethodInfo_3568A44 *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v71 = Index;
        v72 = Method_MultipleViewComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
          v72 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickServant__);
        v73 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v72, v72[4]);
        OverwriteAssetSoundName__PlaySystemSe(v73, 1, 0, 0LL);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_118;
        System_Collections_Generic_List_long___set_Item(
          (System_Collections_Generic_List_long__o *)multipleViewManager,
          v71,
          0LL,
          (const MethodInfo_3567F74 *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_118;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v71,
          0,
          (const MethodInfo_3562F1C *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_118;
        v74 = this->fields.multipleViewManager;
        multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                         (System_Collections_Generic_List_long__o *)multipleViewManager,
                                         (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v74 )
          goto LABEL_118;
        MultipleViewListViewManager__ModifyItem_31495312(v74, (System_Int64_array *)multipleViewManager, v75);
        MultipleViewComponent__SetConfirmButton(this, v76);
        goto LABEL_53;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v70) & 0x80000000) == 0 )
      {
        v84 = sub_1B4D1DC(MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v84, 0LL);
        if ( v84 )
        {
          *(_QWORD *)(v84 + 24) = v38;
          sub_1B4CF34((CGThumbnailListItem_o *)(v84 + 24), v38, v85, v86);
          v87 = Method_MultipleViewComponent_OnClickServant__;
          if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
            v87 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickServant__);
          v88 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v87, v87[4]);
          OverwriteAssetSoundName__PlaySystemSe(v88, 0, 0, 0LL);
          multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v89);
          v90 = *(_QWORD *)(v84 + 24);
          *(_DWORD *)(v84 + 16) = multipleViewManager;
          if ( v90 )
          {
            v91 = *(_QWORD *)(v90 + 24);
            if ( v91 )
            {
              v92 = *(_QWORD *)(v91 + 112);
              if ( v92 )
              {
                v93 = *(_OWORD *)(v92 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v139.fields.currentCryptoKey = *(_OWORD *)(v92 + 16);
                *(_OWORD *)&v139.fields.fakeValue = v93;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v136 = v139;
                v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v136, 0LL);
                v96 = (System_Action_bool__int__o *)sub_1B4D1DC(System_Action_bool__int__TypeInfo);
                System_Action_bool__int____ctor(
                  v96,
                  (Il2CppObject *)v84,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  0LL);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v95, v96, *(_DWORD *)(v84 + 16), v97);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_118;
      }
    }
    v64 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v64 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickServant__);
    v65 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v64, v64[4]);
    OverwriteAssetSoundName__PlaySystemSe(v65, 2, 0, 0LL);
LABEL_53:
    infoLb = this->fields.infoLb;
    multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v66);
    if ( infoLb )
    {
      UILabel__set_text(infoLb, (System_String_o *)multipleViewManager, 0LL);
      goto LABEL_37;
    }
    goto LABEL_118;
  }
  if ( *(_QWORD *)(multipleViewManager + 112) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(multipleViewManager + 112), 0LL) )
    {
LABEL_33:
      v57 = Method_MultipleViewComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
        v57 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickServant__);
      v51 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v57, v57[4]);
      v52 = 2;
LABEL_36:
      OverwriteAssetSoundName__PlaySystemSe(v51, v52, 0, 0LL);
      goto LABEL_37;
    }
    multipleViewManager = (__int64)*v46;
    if ( !*v46 )
      goto LABEL_118;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave((MultipleViewListViewItem_o *)multipleViewManager, v40) )
    goto LABEL_33;
  v78 = Method_MultipleViewComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
    v78 = (_QWORD *)sub_1B4CFA8(Method_MultipleViewComponent_OnClickServant__);
  v79 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v78, v78[4]);
  OverwriteAssetSoundName__PlaySystemSe(v79, 0, 0, 0LL);
  multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !multipleViewManager )
    goto LABEL_118;
  v81 = *(_QWORD *)(multipleViewManager + 120);
  if ( !v81 )
  {
LABEL_64:
    MultipleViewComponent__PushRequest(this, *v46, v80);
    goto LABEL_37;
  }
  if ( !*v46 )
    goto LABEL_118;
  v82 = (*v46)->fields.userSvtEntity;
  if ( !v82 )
    goto LABEL_118;
  v83 = *(_OWORD *)&v82->fields.id.fields.fakeValue;
  *(_OWORD *)&v139.fields.currentCryptoKey = *(_OWORD *)&v82->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v139.fields.fakeValue = v83;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v137 = v139;
  if ( v81 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v137, 0LL) )
    goto LABEL_64;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_118;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager,
             v81,
             (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_118;
  v99 = (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v140.fields.currentCryptoKey = klass;
  *(_QWORD *)&v140.fields.fakeValue = monitor;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v140, 0LL);
  if ( !v99 )
    goto LABEL_118;
  v102 = DataMasterBase_object__object__int___GetEntity(
           v99,
           multipleViewManager,
           (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v103 = LocalizationManager__Get((System_String_o *)StringLiteral_11680/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_11679/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v105 = (System_Object_array *)sub_1B4D038(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  multipleViewManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v105 )
LABEL_118:
    sub_1B4D1EC(multipleViewManager, v40);
  v109 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B4D0CC(multipleViewManager, v105->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_120;
  }
  if ( !v105->max_length )
    goto LABEL_119;
  v105->m_Items[0] = v109;
  sub_1B4CF34((CGThumbnailListItem_o *)v105->m_Items, (int32_t)v109, v107, v108);
  if ( !v102 )
    goto LABEL_118;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v102, 0LL);
  v112 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B4D0CC(multipleViewManager, v105->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_120;
  }
  if ( v105->max_length <= 1 )
    goto LABEL_119;
  v105->m_Items[1] = v112;
  sub_1B4CF34((CGThumbnailListItem_o *)&v105->m_Items[1], (int32_t)v112, v110, v111);
  v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
           0LL);
  multipleViewManager = (__int64)ServantEntity__getName((ServantEntity_o *)v102, v113, -1, 1, 0LL);
  v116 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B4D0CC(multipleViewManager, v105->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_120;
  }
  if ( v105->max_length <= 2 )
    goto LABEL_119;
  v105->m_Items[2] = v116;
  sub_1B4CF34((CGThumbnailListItem_o *)&v105->m_Items[2], (int32_t)v116, v114, v115);
  if ( !*v46 )
    goto LABEL_118;
  multipleViewManager = (__int64)(*v46)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_118;
  v117 = UserServantEntity__getRarity((UserServantEntity_o *)multipleViewManager, 0LL);
  multipleViewManager = (__int64)Rarity__getRarityType(v117, 0LL);
  v120 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B4D0CC(multipleViewManager, v105->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_120;
  }
  if ( v105->max_length <= 3 )
    goto LABEL_119;
  v105->m_Items[3] = v120;
  sub_1B4CF34((CGThumbnailListItem_o *)&v105->m_Items[3], (int32_t)v120, v118, v119);
  if ( !*v46 )
    goto LABEL_118;
  multipleViewManager = (__int64)(*v46)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_118;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0LL);
  v123 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B4D0CC(multipleViewManager, v105->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_120;
  }
  if ( v105->max_length <= 4 )
    goto LABEL_119;
  v105->m_Items[4] = v123;
  sub_1B4CF34((CGThumbnailListItem_o *)&v105->m_Items[4], (int32_t)v123, v121, v122);
  v124 = *v46;
  if ( !*v46 )
    goto LABEL_118;
  v125 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v124->fields.userSvtEntity;
  if ( !v125 )
    goto LABEL_118;
  servantEntity = v124->fields.servantEntity;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v125[6], 0LL);
  if ( !servantEntity )
    goto LABEL_118;
  multipleViewManager = (__int64)ServantEntity__getName(servantEntity, multipleViewManager, -1, 1, 0LL);
  v129 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B4D0CC(multipleViewManager, v105->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_120:
      v135 = sub_1B4D210();
      sub_1B4D0B8(v135, 0LL);
    }
  }
  if ( v105->max_length <= 5 )
LABEL_119:
    sub_1B4D1F4(multipleViewManager, v40);
  v105->m_Items[5] = v129;
  sub_1B4CF34((CGThumbnailListItem_o *)&v105->m_Items[5], (int32_t)v129, v127, v128);
  v130 = System_String__Format_61134896(v104, v105, 0LL);
  v131 = LocalizationManager__Get((System_String_o *)StringLiteral_11678/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v132 = LocalizationManager__Get((System_String_o *)StringLiteral_11677/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v134 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v134,
    (Il2CppObject *)v38,
    Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__,
    0LL);
  multipleViewManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    multipleViewManager = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_118;
  CommonUI__OpenConfirmDialog_30248496(
    (CommonUI_o *)Instance,
    v103,
    v130,
    v131,
    v132,
    v134,
    *(_DWORD *)(*(_QWORD *)(multipleViewManager + 184) + 488LL),
    *(_DWORD *)(*(_QWORD *)(multipleViewManager + 184) + 500LL),
    15.0,
    700,
    0,
    480,
    -162.5,
    0,
    0,
    240,
    0,
    0LL);
LABEL_37:
  v58 = this->fields.multipleViewManager;
  v59 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B4D1DC(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v59,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    v60);
  if ( !v58 )
    goto LABEL_118;
  v58->fields.callbackFunc = v59;
  sub_1B4CF34((CGThumbnailListItem_o *)&v58->fields.callbackFunc, (int32_t)v59, v61, v62);
  MultipleViewListViewManager__SetMode_31499236(v58, 2, v63);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__Open(
        MultipleViewComponent_o *this,
        bool isResetSelected,
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
  MyRoomControl_c *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x20
  System_Collections_Generic_List_long__o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_T__o *v19; // x20
  System_Collections_Generic_List_int__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int64_t gameObject; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_GameObject_o *v27; // x20
  MultipleViewComponent_o *v28; // x0
  const MethodInfo *v29; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v31; // x20
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  struct MultipleViewListViewManager_o *v34; // x20
  MultipleViewListViewManager_CallbackFunc_o *v35; // x21
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1

  if ( (byte_49B63B8 & 1) == 0 )
  {
    sub_1B4CF90(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isResetSelected);
    sub_1B4CF90(&int___TypeInfo, v5);
    sub_1B4CF90(&long___TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long___ctor___75443856, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor___75443648, v9);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B4CF90(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickServant__, v12);
    sub_1B4CF90(&MyRoomControl_TypeInfo, v13);
    byte_49B63B8 = 1;
  }
  if ( isResetSelected )
  {
    v14 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v14 = MyRoomControl_TypeInfo;
    }
    v15 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B4D038(
                                                           long___TypeInfo,
                                                           (unsigned int)v14->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v16 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_55999204(
      v16,
      v15,
      (const MethodInfo_3567AE4 *)Method_System_Collections_Generic_List_long___ctor___75443856);
    this->fields.listSelectedUsrSvtId = v16;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listSelectedUsrSvtId, (int32_t)v16, v17, v18);
    v19 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B4D038(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v20 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55978636(
      v20,
      v19,
      (const MethodInfo_3562A8C *)Method_System_Collections_Generic_List_int___ctor___75443648);
    this->fields.listSelectedImageLimitCount = v20;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listSelectedImageLimitCount, (int32_t)v20, v21, v22);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.cancelCallback, 0, v25, v26);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_15;
  TitleInfoControl__changeTitleInfo_37679628((TitleInfoControl_o *)gameObject, 1, 61, 0, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_15;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v27 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v27, gameObject & 1, 0LL);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v28, v29);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_15;
  multipleViewManager = this->fields.multipleViewManager;
  v31 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v31, (System_Int64_array *)gameObject, v32),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v33),
        v34 = this->fields.multipleViewManager,
        v35 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B4D1DC(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v35,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          v36),
        !v34) )
  {
LABEL_15:
    sub_1B4D1EC(gameObject, v24);
  }
  v34->fields.callbackFunc = v35;
  sub_1B4CF34((CGThumbnailListItem_o *)&v34->fields.callbackFunc, (int32_t)v35, v37, v38);
  MultipleViewListViewManager__SetMode_31499236(v34, 2, v39);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v40);
}


void __fastcall MultipleViewComponent__PushRequest(
        MultipleViewComponent_o *this,
        MultipleViewListViewItem_o *selectItem,
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
  CommonUI_o *limitCountSupport; // x0
  __int64 v14; // x1
  CommonUI_o *v15; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct SoundInfo_o *soundInfo; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct AssetsInfo_o *assetsInfo; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct SoundInfo_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_49B63BE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_MultipleViewComponent_EndePushRequest__, v6);
    sub_1B4CF90(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7);
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49B63BE = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_19;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v53, 0LL);
  if ( !v17 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v15->fields.soundInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = soundInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v15->fields.assetsInfo;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndePushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v54, 0LL);
  if ( !v30 )
LABEL_19:
    sub_1B4D1EC(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    assetsInfo == (struct AssetsInfo_o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct SoundInfo_o *)v47,
    0LL);
}


void __fastcall MultipleViewComponent__SetConfirmButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  UIButtonColor_o *confirmBtnColor; // x0
  UIButtonColor_c *klass; // x8
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !this->fields.tabModeKind && (MultipleViewComponent__GetCurrentSelectIndex(this, method) & 0x80000000) != 0 )
  {
    confirmBtnColor = this->fields.confirmBtnColor;
    if ( confirmBtnColor )
    {
      v6.fields.r = 1.0;
      v6.fields.g = 1.0;
      v6.fields.b = 1.0;
      v6.fields.a = 1.0;
      UIButtonColor__set_defaultColor(confirmBtnColor, v6, 0LL);
      confirmBtnColor = this->fields.confirmBtnColor;
      if ( confirmBtnColor )
      {
        ((void (__fastcall *)(UIButtonColor_o *, __int64, Il2CppMethodPointer))confirmBtnColor->klass->vtable._5_set_isEnabled.method)(
          confirmBtnColor,
          1LL,
          confirmBtnColor->klass->vtable._6_OnInit.methodPtr);
        confirmBtnColor = this->fields.confirmBtnColor;
        if ( confirmBtnColor )
        {
          klass = confirmBtnColor->klass;
          goto LABEL_7;
        }
      }
    }
LABEL_12:
    sub_1B4D1EC(confirmBtnColor, method);
  }
  confirmBtnColor = this->fields.confirmBtnColor;
  if ( !confirmBtnColor )
    goto LABEL_12;
  v5.fields.r = 0.5;
  v5.fields.g = 0.5;
  v5.fields.b = 0.5;
  v5.fields.a = 1.0;
  UIButtonColor__set_defaultColor(confirmBtnColor, v5, 0LL);
  confirmBtnColor = this->fields.confirmBtnColor;
  if ( !confirmBtnColor )
    goto LABEL_12;
  ((void (__fastcall *)(UIButtonColor_o *, _QWORD, Il2CppMethodPointer))confirmBtnColor->klass->vtable._5_set_isEnabled.method)(
    confirmBtnColor,
    0LL,
    confirmBtnColor->klass->vtable._6_OnInit.methodPtr);
  confirmBtnColor = this->fields.confirmBtnColor;
  if ( !confirmBtnColor )
    goto LABEL_12;
  klass = confirmBtnColor->klass;
LABEL_7:
  ((void (*)(void))klass->vtable._14_SetState.method)();
}


void __fastcall MultipleViewComponent__SetLatestSelectedUsrSvtId(
        MultipleViewComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = usrSvtId;
  if ( (byte_49B63BA & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9001/*"MultipleViewSelectedUsrSvtId"*/, usrSvtId);
    byte_49B63BA = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9001/*"MultipleViewSelectedUsrSvtId"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__SetModeTabKind(
        MultipleViewComponent_o *this,
        int32_t modeKind,
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
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  System_String_o **v19; // x8
  __int64 *v20; // x8
  const MethodInfo *v21; // x2
  UILabel_o *infoLb; // x21
  char v23; // w8
  UILabel_o *v24; // x21
  __int64 *v25; // x8
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1

  if ( (byte_49B63C5 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B4CF90(&StringLiteral_11393/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1B4CF90(&StringLiteral_17351/*"button_push_reg"*/, v6);
    sub_1B4CF90(&StringLiteral_17352/*"button_push_unreg"*/, v7);
    sub_1B4CF90(&StringLiteral_17337/*"button_allchoice_reg"*/, v8);
    sub_1B4CF90(&StringLiteral_17340/*"button_alllock_unreg"*/, v9);
    sub_1B4CF90(&StringLiteral_11391/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_1B4CF90(&StringLiteral_11392/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_1B4CF90(&StringLiteral_17353/*"button_select_reg"*/, v12);
    sub_1B4CF90(&StringLiteral_17354/*"button_select_unreg"*/, v13);
    sub_1B4CF90(&StringLiteral_17339/*"button_alllock_reg"*/, v14);
    sub_1B4CF90(&StringLiteral_17338/*"button_allchoice_unreg"*/, v15);
    byte_49B63C5 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_49;
    v17 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17354/*"button_select_unreg"*/ : &StringLiteral_17353/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v17, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_49;
    v18 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17339/*"button_alllock_reg"*/ : &StringLiteral_17340/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v18, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_49;
    v19 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17337/*"button_allchoice_reg"*/ : &StringLiteral_17338/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v19, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0LL)
      || (UnityEngine_Collider__set_enabled(
            (UnityEngine_Collider_o *)normalTabButton,
            this->fields.tabModeKind != 3,
            0LL),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0LL) )
    {
LABEL_49:
      sub_1B4D1EC(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v20 = &StringLiteral_17351/*"button_push_reg"*/;
    else
      v20 = &StringLiteral_17352/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v20, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        normalTabButton = (UnityEngine_Behaviour_o *)MultipleViewComponent__GetTitleMessage(
                                                       this,
                                                       *(const MethodInfo **)&modeKind);
        if ( !infoLb )
          goto LABEL_49;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        v23 = 0;
        goto LABEL_46;
      case 1:
        v24 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_11392/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_43;
      case 2:
        v24 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_11391/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_43;
      case 3:
        v24 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_11393/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_43:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v25, 0LL);
        if ( !v24 )
          goto LABEL_49;
        UILabel__set_text(v24, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        v23 = 1;
LABEL_46:
        *((_BYTE *)&normalTabButton[15].fields + 4) = v23;
LABEL_47:
        MultipleViewListViewManager__UpdateDisplayState(
          (MultipleViewListViewManager_o *)normalTabButton,
          modeKind == 3,
          v21);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        MultipleViewListViewManager__SetMode_31499236((MultipleViewListViewManager_o *)normalTabButton, 2, v26);
        MultipleViewComponent__SetConfirmButton(this, v27);
        break;
      default:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        goto LABEL_47;
    }
  }
}


void __fastcall MultipleViewComponent__StatusRequest(
        MultipleViewComponent_o *this,
        MultipleViewComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t tabModeKind; // w8
  MultipleViewListViewManager_o *multipleViewManager; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int64_array *v21; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49B63C6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_MultipleViewComponent_EndStatusSync__, callback);
    sub_1B4CF90(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_49B63C6 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v21 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapChoiceList(multipleViewManager, &choiceList, &v21, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v18, v19);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v20,
                                                               (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v15 = v21;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B4D1EC(multipleViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapLockList(multipleViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v11, v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v13,
                                                               (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v15 = unlockList;
        v14 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v14, v15, 0, v16, v17, 0LL);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall MultipleViewComponent__UpdateScaleChangeIconSprite(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        multipleViewManager = (MultipleViewListViewManager_o *)MultipleViewListViewManager__GetScaleButtonSpriteName(
                                                                 multipleViewManager,
                                                                 method),
        !scaleChangeTabSprite) )
  {
    sub_1B4D1EC(multipleViewManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)multipleViewManager, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent_RequestCallbackFunc___ctor(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1995980;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1995938;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MultipleViewComponent_RequestCallbackFunc__BeginInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_49B63CC & 1) == 0 )
  {
    sub_1B4CF90(&bool_TypeInfo, isRequest);
    byte_49B63CC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__Invoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MultipleViewComponent___c__DisplayClass37_0___ctor(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__0(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49B63CD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__, v6);
    byte_49B63CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30248724(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B4D1EC(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__1(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B4D1EC(this, method);
  MultipleViewComponent__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


bool __fastcall MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__2(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  MultipleViewComponent___c__DisplayClass37_0_o *v4; // x20
  struct MultipleViewListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_49B63CE & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_1B4CF90(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              id);
    byte_49B63CE = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_1B4D1EC(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v9, 0LL) == id;
}


void __fastcall MultipleViewComponent___c__DisplayClass37_1___ctor(
        MultipleViewComponent___c__DisplayClass37_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent___c__DisplayClass37_1___OnClickServant_b__3(
        MultipleViewComponent___c__DisplayClass37_1_o *this,
        bool result,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  MultipleViewComponent___c__DisplayClass37_1_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct MultipleViewComponent___c__DisplayClass37_0_o *CS___8__locals1; // x9
  struct MultipleViewComponent_o *_4__this; // x8
  struct MultipleViewListViewItem_o *item; // x9
  struct UserServantEntity_o *userSvtEntity; // x9
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  __int128 v17; // q1
  int32_t selectIndex; // w22
  struct MultipleViewComponent___c__DisplayClass37_0_o *v19; // x8
  struct MultipleViewComponent_o *v20; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v21; // x8
  struct MultipleViewComponent_o *v22; // x8
  MultipleViewListViewManager_o *multipleViewManager; // x20
  const MethodInfo *v24; // x2
  struct MultipleViewComponent___c__DisplayClass37_0_o *v25; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v26; // x8
  Il2CppObject *v27; // x21
  Il2CppClass *klass; // x20
  MultipleViewListViewManager_CallbackFunc_o *v29; // x22
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  struct MultipleViewComponent___c__DisplayClass37_0_o *v34; // x8
  UILabel_o *v35; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_49B63CF & 1) == 0 )
  {
    sub_1B4CF90(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__set_Item__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__set_Item__, v9);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickServant__, v10);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_1B4CF90(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              v11);
    byte_49B63CF = 1;
  }
  if ( result )
  {
    CS___8__locals1 = v6->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_28;
    _4__this = CS___8__locals1->fields.__4__this;
    if ( !_4__this )
      goto LABEL_28;
    item = CS___8__locals1->fields.item;
    if ( !item )
      goto LABEL_28;
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_28;
    listSelectedUsrSvtId = _4__this->fields.listSelectedUsrSvtId;
    v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    selectIndex = v6->fields.selectIndex;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v36 = v37;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(
                                                              &v36,
                                                              0LL);
    if ( !listSelectedUsrSvtId )
      goto LABEL_28;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_3567F74 *)Method_System_Collections_Generic_List_long__set_Item__);
    v19 = v6->fields.CS___8__locals1;
    if ( !v19 )
      goto LABEL_28;
    v20 = v19->fields.__4__this;
    if ( !v20 )
      goto LABEL_28;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)v20->fields.listSelectedImageLimitCount;
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_List_int___set_Item(
      (System_Collections_Generic_List_int__o *)this,
      v6->fields.selectIndex,
      imageLimitCount,
      (const MethodInfo_3562F1C *)Method_System_Collections_Generic_List_int__set_Item__);
    v21 = v6->fields.CS___8__locals1;
    if ( !v21
      || (v22 = v21->fields.__4__this) == 0LL
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v22->fields.listSelectedUsrSvtId) == 0LL
      || (multipleViewManager = v22->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_31495312(multipleViewManager, (System_Int64_array *)this, v24),
          (v25 = v6->fields.CS___8__locals1) == 0LL)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v25->fields.__4__this) == 0LL )
    {
LABEL_28:
      sub_1B4D1EC(this, result);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, (const MethodInfo *)result);
  }
  v26 = v6->fields.CS___8__locals1;
  if ( !v26 )
    goto LABEL_28;
  v27 = (Il2CppObject *)v26->fields.__4__this;
  if ( !v27 )
    goto LABEL_28;
  klass = v27[4].klass;
  v29 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B4D1DC(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v29,
    v27,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    v30);
  if ( !klass )
    goto LABEL_28;
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)v29;
  sub_1B4CF34((CGThumbnailListItem_o *)&klass->vtable[5], (int32_t)v29, v31, v32);
  MultipleViewListViewManager__SetMode_31499236((MultipleViewListViewManager_o *)klass, 2, v33);
  v34 = v6->fields.CS___8__locals1;
  if ( !v34 )
    goto LABEL_28;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)v34->fields.__4__this;
  if ( !this )
    goto LABEL_28;
  v35 = (UILabel_o *)this[1].fields.CS___8__locals1;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)MultipleViewComponent__GetTitleMessage(
                                                            (MultipleViewComponent_o *)this,
                                                            (const MethodInfo *)result);
  if ( !v35 )
    goto LABEL_28;
  UILabel__set_text(v35, (System_String_o *)this, 0LL);
}


void __fastcall MultipleViewComponent___c__DisplayClass40_0___ctor(
        MultipleViewComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MultipleViewComponent___c__DisplayClass40_0___CloseSvtDetail_b__0(
        MultipleViewComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  MultipleViewComponent_o *_4__this; // x0
  struct MultipleViewComponent_o *v7; // x8
  struct MultipleViewComponent_o *v8; // x8
  Il2CppObject *v9; // x20
  Il2CppClass *klass; // x19
  MultipleViewListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49B63D0 & 1) == 0 )
  {
    sub_1B4CF90(&MultipleViewListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_MultipleViewComponent_OnClickServant__, v4);
    sub_1B4CF90(&StringLiteral_3421/*"CLICK_BACK"*/, v5);
    byte_49B63D0 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    MultipleViewComponent__Init(_4__this, method);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = (MultipleViewComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)_4__this,
                                              0LL);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
        v7 = this->fields.__4__this;
        if ( v7 )
        {
          _4__this = (MultipleViewComponent_o *)v7->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3421/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1B4D1EC(_4__this, method);
  }
  if ( !_4__this->fields.multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_18;
    _4__this = (MultipleViewComponent_o *)v8->fields.multipleViewManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v9 = (Il2CppObject *)this->fields.__4__this;
  if ( !v9 )
    goto LABEL_18;
  klass = v9[4].klass;
  v11 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B4D1DC(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(v11, v9, (intptr_t)Method_MultipleViewComponent_OnClickServant__, v12);
  if ( !klass )
    goto LABEL_18;
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)v11;
  sub_1B4CF34((CGThumbnailListItem_o *)&klass->vtable[5], (int32_t)v11, v13, v14);
  MultipleViewListViewManager__SetMode_31499236((MultipleViewListViewManager_o *)klass, 2, v15);
}