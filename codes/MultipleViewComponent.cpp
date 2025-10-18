void MultipleViewComponent___ctor(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  System_Collections_Generic_List_long__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  System_Collections_Generic_List_int__o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3E2F5 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor___78056184);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E2F5 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  v4 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C37100(
                                                        long___TypeInfo,
                                                        (unsigned int)v3->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v5 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_58239276(
    v5,
    v4,
    (const MethodInfo_378A92C *)Method_System_Collections_Generic_List_long___ctor___78056184);
  this->fields.listSelectedUsrSvtId = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.listSelectedUsrSvtId, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C37100(
                                                        int___TypeInfo,
                                                        (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58218708(
    v9,
    v8,
    (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
  this->fields.listSelectedImageLimitCount = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.listSelectedImageLimitCount, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultipleViewComponent__CancelMultipleViewWindow(
        MultipleViewComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MultipleViewComponent_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C3E2E5 & 1) == 0 )
  {
    sub_1C37058(&Method_MultipleViewComponent_EndCancelButton__);
    sub_1C37058(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4C3E2E5 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cancelCallback, (int32_t)callback, (int32_t)method, v3);
  v6 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C372A4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    v7);
  MultipleViewComponent__StatusRequest(this, v6, v8);
}


void MultipleViewComponent__CloseSvtDetail(
        MultipleViewComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v13; // x20

  if ( (byte_4C3E2EA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__);
    sub_1C37058(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
    byte_4C3E2EA = 1;
  }
  v8 = sub_1C372A4(MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v8,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0),
        !Instance) )
  {
    sub_1C372B4(v9);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__EndCancelButton(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  struct MultipleViewListViewManager_o *v6; // x20
  MultipleViewListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4C3E2E6 & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_MultipleViewComponent_OnClickServant__);
    byte_4C3E2E6 = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          v6 = this->fields.multipleViewManager,
          v7 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C372A4(MultipleViewListViewManager_CallbackFunc_TypeInfo),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            v8),
          !v6) )
    {
LABEL_11:
      sub_1C372B4(multipleViewManager);
    }
    v6->fields.callbackFunc = v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10);
    MultipleViewListViewManager__SetMode_33453316(v6, 2, v11);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isRequest);
  multipleViewManager = (MultipleViewListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
  if ( !multipleViewManager )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)multipleViewManager, 0, 0);
  cancelCallback = this->fields.cancelCallback;
  if ( cancelCallback )
    ActionExtensions__Call(cancelCallback, 0);
}


void MultipleViewComponent__EndClickTabChoice(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          (multipleViewManager = this->fields.multipleViewManager) == 0) )
    {
      sub_1C372B4(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_33453316(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 2, method);
}


void MultipleViewComponent__EndClickTabLock(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          (multipleViewManager = this->fields.multipleViewManager) == 0) )
    {
      sub_1C372B4(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_33453316(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 1, method);
}


void MultipleViewComponent__EndClickTabNormal(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          (multipleViewManager = this->fields.multipleViewManager) == 0) )
    {
      sub_1C372B4(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_33453316(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 0, method);
}


void MultipleViewComponent__EndClickTabPush(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          (multipleViewManager = this->fields.multipleViewManager) == 0) )
    {
      sub_1C372B4(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_33453316(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 3, method);
}


void MultipleViewComponent__EndStatusSync(
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
    p_requedstCallback->klass = 0;
    sub_1C36FFC(p_requedstCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      1,
      v5->fields.method);
  }
}


void MultipleViewComponent__EndePushRequest(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x2
  struct MultipleViewListViewManager_o *v6; // x20
  MultipleViewListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C3E2E9 & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_MultipleViewComponent_OnClickServant__);
    byte_4C3E2E9 = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, method),
        (multipleViewManager = this->fields.multipleViewManager) == 0)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, v5),
        v6 = this->fields.multipleViewManager,
        v7 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C372A4(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          v8),
        !v6) )
  {
    sub_1C372B4(multipleViewManager);
  }
  v6->fields.callbackFunc = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10);
  MultipleViewListViewManager__SetMode_33453316(v6, 2, v11);
}


int32_t MultipleViewComponent__GetCurrentSelectIndex(MultipleViewComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  int32_t v4; // w20

  if ( (byte_4C3E2F3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Item__);
    byte_4C3E2F3 = 1;
  }
  listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_8:
    sub_1C372B4(listSelectedUsrSvtId);
  v4 = 0;
  while ( v4 < listSelectedUsrSvtId->fields._size )
  {
    if ( System_Collections_Generic_List_long___get_Item(
           listSelectedUsrSvtId,
           v4,
           (const MethodInfo_378AD68 *)Method_System_Collections_Generic_List_long__get_Item__) < 1 )
      return v4;
    listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
    ++v4;
    if ( !listSelectedUsrSvtId )
      goto LABEL_8;
  }
  return -1;
}


int64_t MultipleViewComponent__GetLatestSelectedUsrSvtId(MultipleViewComponent_o *this, const MethodInfo *method)
{
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v4; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3E2E3 & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_9199/*"MultipleViewSelectedUsrSvtId"*/);
    byte_4C3E2E3 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9199/*"MultipleViewSelectedUsrSvtId"*/,
             string_TypeInfo->static_fields->Empty,
             0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  v4 = -1;
  if ( !IsNullOrEmpty )
  {
    result = -1;
    if ( System_Int64__TryParse(String, &result, 0) )
      return result;
    else
      return -1;
  }
  return v4;
}


System_String_o *MultipleViewComponent__GetTitleMessage(MultipleViewComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t CurrentSelectIndex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C3E2F4 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_7205/*"HEADER_MSG_MULTIPLE_SERVANT_"*/);
    sub_1C37058(&StringLiteral_7206/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/);
    byte_4C3E2F4 = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( CurrentSelectIndex < 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = (System_String_o *)StringLiteral_7206/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v3 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0);
    v4 = System_String__Concat_63561656((System_String_o *)StringLiteral_7205/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v3, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = v4;
  }
  return LocalizationManager__Get(v5, 0);
}


void MultipleViewComponent__Init(MultipleViewComponent_o *this, const MethodInfo *method)
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
    sub_1C372B4(multipleViewManager);
  }
  UILabel__set_text(infoLb, (System_String_o *)multipleViewManager, 0);
  MultipleViewComponent__SetModeTabKind(this, 0, v6);
}


bool MultipleViewComponent__IsEnableAddSelectSvt(MultipleViewComponent_o *this, const MethodInfo *method)
{
  return MultipleViewComponent__GetCurrentSelectIndex(this, method) >= 0;
}


void MultipleViewComponent__OnClickChoiceTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C3E2ED & 1) == 0 )
  {
    sub_1C37058(&Method_MultipleViewComponent_EndClickTabChoice__);
    sub_1C37058(&Method_MultipleViewComponent_OnClickChoiceTabButton__);
    sub_1C37058(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4C3E2ED = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C372A4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          v8);
        MultipleViewComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C372A4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        v11);
      MultipleViewComponent__StatusRequest(this, v10, v12);
    }
    MultipleViewComponent__SetModeTabKind(this, 2, v5);
  }
}


void MultipleViewComponent__OnClickDecide(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  MultipleViewComponent_o *Item; // x0
  const MethodInfo *v9; // x2
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v12; // x19
  const MethodInfo *v13; // x3

  if ( (byte_4C3E2F2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C37058(&Method_MultipleViewComponent_OnClickDecide__);
    byte_4C3E2F2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.tabModeKind && MultipleViewComponent__GetCurrentSelectIndex(this, method) < 0 )
    {
      v5 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      this->fields.state = 4;
      if ( !listSelectedUsrSvtId )
        goto LABEL_17;
      Item = (MultipleViewComponent_o *)System_Collections_Generic_List_long___get_Item(
                                          listSelectedUsrSvtId,
                                          listSelectedUsrSvtId->fields._size - 1,
                                          (const MethodInfo_378AD68 *)Method_System_Collections_Generic_List_long__get_Item__);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(Item, (int64_t)Item, v9);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      if ( !listSelectedUsrSvtId
        || (myRoomControl = this->fields.myRoomControl,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                                listSelectedUsrSvtId,
                                                                                (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0)
        || (v12 = (System_Int64_array *)listSelectedUsrSvtId,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_int___ToArray(
                                                                                listSelectedImageLimitCount,
                                                                                (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_17:
        sub_1C372B4(listSelectedUsrSvtId);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v12, (System_Int32_array *)listSelectedUsrSvtId, v13);
    }
    else
    {
      v3 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
    }
  }
}


void MultipleViewComponent__OnClickLockTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C3E2EC & 1) == 0 )
  {
    sub_1C37058(&Method_MultipleViewComponent_EndClickTabLock__);
    sub_1C37058(&Method_MultipleViewComponent_OnClickLockTabButton__);
    sub_1C37058(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4C3E2EC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C372A4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          v8);
        MultipleViewComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C372A4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        v11);
      MultipleViewComponent__StatusRequest(this, v10, v12);
    }
    MultipleViewComponent__SetModeTabKind(this, 1, v5);
  }
}


void MultipleViewComponent__OnClickNormalTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MultipleViewComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4C3E2EB & 1) == 0 )
  {
    sub_1C37058(&Method_MultipleViewComponent_EndClickTabNormal__);
    sub_1C37058(&Method_MultipleViewComponent_OnClickNormalTabButton__);
    sub_1C37058(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4C3E2EB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C372A4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      v6);
    MultipleViewComponent__StatusRequest(this, v5, v7);
  }
}


void MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MultipleViewComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4C3E2EE & 1) == 0 )
  {
    sub_1C37058(&Method_MultipleViewComponent_EndClickTabPush__);
    sub_1C37058(&Method_MultipleViewComponent_OnClickPushTabButton__);
    sub_1C37058(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4C3E2EE = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_MultipleViewComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C372A4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      v6);
    MultipleViewComponent__StatusRequest(this, v5, v7);
  }
}


void MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C3E2F1 & 1) == 0 )
  {
    sub_1C37058(&Method_MultipleViewComponent_OnClickScaleChange__);
    byte_4C3E2F1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      sub_1C372B4(0);
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, v5);
    MultipleViewComponent__UpdateScaleChangeIconSprite(this, v7);
  }
}


void MultipleViewComponent__OnClickServant(
        MultipleViewComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 multipleViewManager; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  MultipleViewListViewItem_o *Item; // x1
  MultipleViewListViewItem_o **v14; // x21
  __int64 v15; // x8
  __int128 v16; // q1
  const MethodInfo *v17; // x1
  int32_t tabModeKind; // w8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  int32_t v21; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v23; // x20
  ServantStatusDialog_ResultDelegate_o *v24; // x22
  _QWORD *v25; // x0
  _QWORD *v26; // x0
  struct MultipleViewListViewManager_o *v27; // x20
  MultipleViewListViewManager_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v37; // x22
  int32_t Index; // w0
  const MethodInfo *v39; // x1
  int32_t v40; // w21
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  MultipleViewListViewManager_o *v43; // x20
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  UILabel_o *infoLb; // x20
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  const MethodInfo *v49; // x2
  int64_t v50; // x22
  struct UserServantEntity_o *v51; // x8
  __int128 v52; // q0
  __int64 v53; // x21
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  const MethodInfo *v58; // x1
  __int64 v59; // x8
  __int64 v60; // x8
  __int64 v61; // x8
  __int128 v62; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v64; // x20
  System_Action_bool__int__o *v65; // x22
  const MethodInfo *v66; // x5
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v71; // x27
  __int64 v72; // x28
  ServantOverwriteStatus_o *OverwriteStatus; // x26
  System_String_o *v74; // x22
  System_String_o *v75; // x23
  System_Object_array *v76; // x24
  int32_t v77; // w28
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x28
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  Il2CppObject *v83; // x28
  int32_t v84; // w0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  Il2CppObject *v87; // x25
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  Il2CppObject *v90; // x25
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  Il2CppObject *v93; // x25
  MultipleViewListViewItem_o *v94; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v95; // x9
  ServantEntity_o *servantEntity; // x21
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  Il2CppObject *v99; // x21
  System_String_o *v100; // x21
  System_String_o *v101; // x23
  System_String_o *v102; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v104; // x26
  __int64 v105; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_4C3E2E7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__int__TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MultipleViewComponent_CloseSvtDetail__);
    sub_1C37058(&Method_MultipleViewComponent_OnClickServant__);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&System_Predicate_long__TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__);
    sub_1C37058(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__);
    sub_1C37058(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
    sub_1C37058(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__);
    sub_1C37058(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
    sub_1C37058(&StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C37058(&StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_11951/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C3E2E7 = 1;
  }
  v7 = sub_1C372A4(MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_120;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  if ( n < 0 )
  {
    Item = 0;
  }
  else
  {
    multipleViewManager = (__int64)this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_120;
    Item = MultipleViewListViewManager__GetItem((MultipleViewListViewManager_o *)multipleViewManager, n, v11);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v14 = (MultipleViewListViewItem_o **)(v7 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v11, v12);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_120;
  v15 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 120LL);
  if ( !v15 )
    goto LABEL_120;
  v16 = *(_OWORD *)(v15 + 32);
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
  *(_OWORD *)&v109.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v108 = v109;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v108, 0);
  this->fields.usrSvtId = multipleViewManager;
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v14 )
    {
      userSvtEntity = (*v14)->fields.userSvtEntity;
      v23 = (CommonUI_o *)multipleViewManager;
      v24 = (ServantStatusDialog_ResultDelegate_o *)sub_1C372A4(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v24,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0);
      if ( v23 )
      {
        CommonUI__OpenServantStatusDialog_31219088(v23, 0, userSvtEntity, v24, 0, 0, 0);
        return;
      }
    }
    goto LABEL_120;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v14 )
      goto LABEL_120;
    (*v14)->fields.isSwapChoice ^= 1u;
    v25 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickServant__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C3703C(v25, v25[4]);
    v21 = 0;
    goto LABEL_36;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v14 )
      goto LABEL_120;
    (*v14)->fields.isSwapLock ^= 1u;
    v19 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickServant__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C3703C(v19, v19[4]);
    v21 = 11;
    goto LABEL_36;
  }
  multipleViewManager = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_120;
  if ( tabModeKind != 3 )
  {
    if ( !MultipleViewListViewItem__get_IsCanNotSelect((MultipleViewListViewItem_o *)multipleViewManager, v17) )
    {
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      v37 = (System_Predicate_long__o *)sub_1C372A4(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v37,
        (Il2CppObject *)v7,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        0);
      if ( !listSelectedUsrSvtId )
        goto LABEL_120;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v37,
                (const MethodInfo_378B88C *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v40 = Index;
        v41 = Method_MultipleViewComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
          v41 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickServant__);
        v42 = (System_Reflection_MethodBase_o *)sub_1C3703C(v41, v41[4]);
        OverwriteAssetSoundName__PlaySystemSe(v42, 1, 0, 0);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_120;
        System_Collections_Generic_List_long___set_Item(
          (System_Collections_Generic_List_long__o *)multipleViewManager,
          v40,
          0,
          (const MethodInfo_378ADBC *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_120;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v40,
          0,
          (const MethodInfo_3785D64 *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_120;
        v43 = this->fields.multipleViewManager;
        multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                         (System_Collections_Generic_List_long__o *)multipleViewManager,
                                         (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v43 )
          goto LABEL_120;
        MultipleViewListViewManager__ModifyItem_33449392(v43, (System_Int64_array *)multipleViewManager, v44);
        MultipleViewComponent__SetConfirmButton(this, v45);
        goto LABEL_53;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v39) & 0x80000000) == 0 )
      {
        v53 = sub_1C372A4(MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v53, 0);
        if ( v53 )
        {
          *(_QWORD *)(v53 + 24) = v7;
          sub_1C36FFC((CGThumbnailListItem_o *)(v53 + 24), v7, v54, v55);
          v56 = Method_MultipleViewComponent_OnClickServant__;
          if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
            v56 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickServant__);
          v57 = (System_Reflection_MethodBase_o *)sub_1C3703C(v56, v56[4]);
          OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0);
          multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v58);
          v59 = *(_QWORD *)(v53 + 24);
          *(_DWORD *)(v53 + 16) = multipleViewManager;
          if ( v59 )
          {
            v60 = *(_QWORD *)(v59 + 24);
            if ( v60 )
            {
              v61 = *(_QWORD *)(v60 + 120);
              if ( v61 )
              {
                v62 = *(_OWORD *)(v61 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(v61 + 16);
                *(_OWORD *)&v109.fields.fakeValue = v62;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v106 = v109;
                v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v106, 0);
                v65 = (System_Action_bool__int__o *)sub_1C372A4(System_Action_bool__int__TypeInfo);
                System_Action_bool__int____ctor(
                  v65,
                  (Il2CppObject *)v53,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  0);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v64, v65, *(_DWORD *)(v53 + 16), v66);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_120;
      }
    }
    v33 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickServant__);
    v34 = (System_Reflection_MethodBase_o *)sub_1C3703C(v33, v33[4]);
    OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0, 0);
LABEL_53:
    infoLb = this->fields.infoLb;
    multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v35);
    if ( infoLb )
    {
      UILabel__set_text(infoLb, (System_String_o *)multipleViewManager, 0);
      goto LABEL_37;
    }
    goto LABEL_120;
  }
  if ( *(_QWORD *)(multipleViewManager + 120) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(multipleViewManager + 120), 0) )
    {
LABEL_33:
      v26 = Method_MultipleViewComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickServant__);
      v20 = (System_Reflection_MethodBase_o *)sub_1C3703C(v26, v26[4]);
      v21 = 2;
LABEL_36:
      OverwriteAssetSoundName__PlaySystemSe(v20, v21, 0, 0);
      goto LABEL_37;
    }
    multipleViewManager = (__int64)*v14;
    if ( !*v14 )
      goto LABEL_120;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave((MultipleViewListViewItem_o *)multipleViewManager, v17) )
    goto LABEL_33;
  v47 = Method_MultipleViewComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
    v47 = (_QWORD *)sub_1C37070(Method_MultipleViewComponent_OnClickServant__);
  v48 = (System_Reflection_MethodBase_o *)sub_1C3703C(v47, v47[4]);
  OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0, 0);
  multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !multipleViewManager )
    goto LABEL_120;
  v50 = *(_QWORD *)(multipleViewManager + 128);
  if ( !v50 )
  {
LABEL_64:
    MultipleViewComponent__PushRequest(this, *v14, v49);
    goto LABEL_37;
  }
  if ( !*v14 )
    goto LABEL_120;
  v51 = (*v14)->fields.userSvtEntity;
  if ( !v51 )
    goto LABEL_120;
  v52 = *(_OWORD *)&v51->fields.id.fields.fakeValue;
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v51->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v52;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v107 = v109;
  if ( v50 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v107, 0) )
    goto LABEL_64;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_120;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager,
             v50,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_120;
  v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v110.fields.currentCryptoKey = klass;
  *(_QWORD *)&v110.fields.fakeValue = monitor;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v110, 0);
  if ( !v68 )
    goto LABEL_120;
  v71 = DataMasterBase_object__object__int___GetEntity(
          v68,
          multipleViewManager,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  multipleViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Entity, 0, 0);
  if ( !*v14 )
    goto LABEL_120;
  v72 = multipleViewManager;
  multipleViewManager = (__int64)(*v14)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_120;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)multipleViewManager, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11951/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  multipleViewManager = sub_1C37100(object___TypeInfo, 6);
  if ( !v72 )
    goto LABEL_120;
  v76 = (System_Object_array *)multipleViewManager;
  v77 = *(_DWORD *)(v72 + 24);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  multipleViewManager = (__int64)Rarity__getRarityType(v77, 0);
  if ( !v76 )
LABEL_120:
    sub_1C372B4(multipleViewManager);
  v80 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C37194(multipleViewManager, v76->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( !LODWORD(v76->max_length) )
    goto LABEL_121;
  v76->m_Items[0] = v80;
  sub_1C36FFC((CGThumbnailListItem_o *)v76->m_Items, (int32_t)v80, v78, v79);
  if ( !v71 )
    goto LABEL_120;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v71, 0);
  v83 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C37194(multipleViewManager, v76->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( LODWORD(v76->max_length) <= 1 )
    goto LABEL_121;
  v76->m_Items[1] = v83;
  sub_1C36FFC((CGThumbnailListItem_o *)&v76->m_Items[1], (int32_t)v83, v81, v82);
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
          0);
  multipleViewManager = (__int64)ServantEntity__getName((ServantEntity_o *)v71, v84, -1, 1, 0);
  v87 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C37194(multipleViewManager, v76->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( LODWORD(v76->max_length) <= 2 )
    goto LABEL_121;
  v76->m_Items[2] = v87;
  sub_1C36FFC((CGThumbnailListItem_o *)&v76->m_Items[2], (int32_t)v87, v85, v86);
  if ( !OverwriteStatus )
    goto LABEL_120;
  multipleViewManager = (__int64)Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0);
  v90 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C37194(multipleViewManager, v76->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( LODWORD(v76->max_length) <= 3 )
    goto LABEL_121;
  v76->m_Items[3] = v90;
  sub_1C36FFC((CGThumbnailListItem_o *)&v76->m_Items[3], (int32_t)v90, v88, v89);
  if ( !*v14 )
    goto LABEL_120;
  multipleViewManager = (__int64)(*v14)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_120;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0);
  v93 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C37194(multipleViewManager, v76->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( LODWORD(v76->max_length) <= 4 )
    goto LABEL_121;
  v76->m_Items[4] = v93;
  sub_1C36FFC((CGThumbnailListItem_o *)&v76->m_Items[4], (int32_t)v93, v91, v92);
  v94 = *v14;
  if ( !*v14 )
    goto LABEL_120;
  v95 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v94->fields.userSvtEntity;
  if ( !v95 )
    goto LABEL_120;
  servantEntity = v94->fields.servantEntity;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v95[6], 0);
  if ( !servantEntity )
    goto LABEL_120;
  multipleViewManager = (__int64)ServantEntity__getName(servantEntity, multipleViewManager, -1, 1, 0);
  v99 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C37194(multipleViewManager, v76->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_122:
      v105 = sub_1C372D8();
      sub_1C37180(v105, 0);
    }
  }
  if ( LODWORD(v76->max_length) <= 5 )
LABEL_121:
    sub_1C372BC(multipleViewManager);
  v76->m_Items[5] = v99;
  sub_1C36FFC((CGThumbnailListItem_o *)&v76->m_Items[5], (int32_t)v99, v97, v98);
  v100 = System_String__Format_63603084(v75, v76, 0);
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v104 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v104,
    (Il2CppObject *)v7,
    Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__,
    0);
  multipleViewManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    multipleViewManager = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_120;
  CommonUI__OpenConfirmDialog_31208316(
    (CommonUI_o *)Instance,
    v74,
    v100,
    v101,
    v102,
    v104,
    *(_DWORD *)(*(_QWORD *)(multipleViewManager + 184) + 512LL),
    *(_DWORD *)(*(_QWORD *)(multipleViewManager + 184) + 524LL),
    15.0,
    700,
    0,
    480,
    -162.5,
    0,
    0,
    240,
    0,
    0);
LABEL_37:
  v27 = this->fields.multipleViewManager;
  v28 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C372A4(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    v29);
  if ( !v27 )
    goto LABEL_120;
  v27->fields.callbackFunc = v28;
  sub_1C36FFC((CGThumbnailListItem_o *)&v27->fields.callbackFunc, (int32_t)v28, v30, v31);
  MultipleViewListViewManager__SetMode_33453316(v27, 2, v32);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__Open(MultipleViewComponent_o *this, bool isResetSelected, const MethodInfo *method)
{
  MyRoomControl_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *v6; // x20
  System_Collections_Generic_List_long__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_T__o *v10; // x20
  System_Collections_Generic_List_int__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int64_t gameObject; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *v17; // x20
  MultipleViewComponent_o *v18; // x0
  const MethodInfo *v19; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v21; // x20
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  struct MultipleViewListViewManager_o *v24; // x20
  MultipleViewListViewManager_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1

  if ( (byte_4C3E2E2 & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor___78056184);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&Method_MultipleViewComponent_OnClickServant__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E2E2 = 1;
  }
  if ( isResetSelected )
  {
    v5 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v5 = MyRoomControl_TypeInfo;
    }
    v6 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C37100(
                                                          long___TypeInfo,
                                                          (unsigned int)v5->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v7 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_58239276(
      v7,
      v6,
      (const MethodInfo_378A92C *)Method_System_Collections_Generic_List_long___ctor___78056184);
    this->fields.listSelectedUsrSvtId = v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.listSelectedUsrSvtId, (int32_t)v7, v8, v9);
    v10 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C37100(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v11 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58218708(
      v11,
      v10,
      (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
    this->fields.listSelectedImageLimitCount = v11;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.listSelectedImageLimitCount, (int32_t)v11, v12, v13);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.cancelCallback = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cancelCallback, 0, v15, v16);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_15;
  TitleInfoControl__changeTitleInfo_39845736((TitleInfoControl_o *)gameObject, 1, 63, 0, 0);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_15;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = BgTxtManager__IsActiveBgTxt(0);
  if ( !v17 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v17, gameObject & 1, 0);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v18, v19);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_15;
  multipleViewManager = this->fields.multipleViewManager;
  v21 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v21, (System_Int64_array *)gameObject, v22),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v23),
        v24 = this->fields.multipleViewManager,
        v25 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C372A4(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v25,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          v26),
        !v24) )
  {
LABEL_15:
    sub_1C372B4(gameObject);
  }
  v24->fields.callbackFunc = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->fields.callbackFunc, (int32_t)v25, v27, v28);
  MultipleViewListViewManager__SetMode_33453316(v24, 2, v29);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v30);
}


void MultipleViewComponent__PushRequest(
        MultipleViewComponent_o *this,
        MultipleViewListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CommonUI_o *limitCountSupport; // x0
  CommonUI_o *v6; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v8; // x21
  int64_t m_CachedPtr; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v13; // q0
  struct FadeInfo_o *fadeInfo; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v16; // x0
  __int128 v17; // q1
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  Il2CppObject *Request_object; // x0
  __int128 v20; // q1
  CardFavoriteRequest_o *v21; // x20
  int32_t v22; // w26
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w29
  bool IsLock; // w21
  char v27; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v36; // [xsp+60h] [xbp-100h]
  struct SoundInfo_o *soundInfo; // [xsp+68h] [xbp-F8h]
  int64_t v38; // [xsp+70h] [xbp-F0h]
  struct FadeInfo_o *v39; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4C3E2E8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_MultipleViewComponent_EndePushRequest__);
    sub_1C37058(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E2E8 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_19;
  v6 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v6 || !userSvtEntity )
    goto LABEL_19;
  v8 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v6->fields.m_CachedPtr;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v11;
  *(_QWORD *)&v44.fields.fakeValue = v10;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v44, 0);
  if ( !v8 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0);
  v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  fadeInfo = v6->fields.fadeInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v13;
  v39 = fadeInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v43;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v42, 0);
  v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v6->fields.soundInfo;
  v38 = v16;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v17;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v41, 0);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v18, (Il2CppObject *)this, Method_MultipleViewComponent_EndePushRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v18,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v21 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v20;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v40, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(userSvtEntity->fields.dispLimitCount, 0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(userSvtEntity->fields.iconLimitCount, 0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v32 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v45.fields.currentCryptoKey = v32;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v45, 0);
  if ( !v21 )
LABEL_19:
    sub_1C372B4(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v21,
    targetUsrSVtId,
    imageLimitCount,
    v22,
    v23,
    v24,
    v25,
    soundInfo == (struct SoundInfo_o *)v36,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v39 != (struct FadeInfo_o *)v38,
    0);
}


void MultipleViewComponent__SetConfirmButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  UIButtonColor_o *confirmBtnColor; // x0
  UIButtonColor_c *klass; // x8
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !this->fields.tabModeKind && MultipleViewComponent__GetCurrentSelectIndex(this, method) < 0 )
  {
    confirmBtnColor = this->fields.confirmBtnColor;
    if ( confirmBtnColor )
    {
      v6.fields.r = 1.0;
      v6.fields.g = 1.0;
      v6.fields.b = 1.0;
      v6.fields.a = 1.0;
      UIButtonColor__set_defaultColor(confirmBtnColor, v6, 0);
      confirmBtnColor = this->fields.confirmBtnColor;
      if ( confirmBtnColor )
      {
        ((void (__fastcall *)(UIButtonColor_o *, __int64, const MethodInfo *))confirmBtnColor->klass->vtable._5_set_isEnabled.methodPtr)(
          confirmBtnColor,
          1,
          confirmBtnColor->klass->vtable._5_set_isEnabled.method);
        confirmBtnColor = this->fields.confirmBtnColor;
        if ( confirmBtnColor )
        {
          klass = confirmBtnColor->klass;
          goto LABEL_7;
        }
      }
    }
LABEL_12:
    sub_1C372B4(confirmBtnColor);
  }
  confirmBtnColor = this->fields.confirmBtnColor;
  if ( !confirmBtnColor )
    goto LABEL_12;
  v5.fields.r = 0.5;
  v5.fields.g = 0.5;
  v5.fields.b = 0.5;
  v5.fields.a = 1.0;
  UIButtonColor__set_defaultColor(confirmBtnColor, v5, 0);
  confirmBtnColor = this->fields.confirmBtnColor;
  if ( !confirmBtnColor )
    goto LABEL_12;
  ((void (__fastcall *)(UIButtonColor_o *, _QWORD, const MethodInfo *))confirmBtnColor->klass->vtable._5_set_isEnabled.methodPtr)(
    confirmBtnColor,
    0,
    confirmBtnColor->klass->vtable._5_set_isEnabled.method);
  confirmBtnColor = this->fields.confirmBtnColor;
  if ( !confirmBtnColor )
    goto LABEL_12;
  klass = confirmBtnColor->klass;
LABEL_7:
  klass->vtable._14_SetState.methodPtr();
}


void MultipleViewComponent__SetLatestSelectedUsrSvtId(
        MultipleViewComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = usrSvtId;
  if ( (byte_4C3E2E4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9199/*"MultipleViewSelectedUsrSvtId"*/);
    byte_4C3E2E4 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9199/*"MultipleViewSelectedUsrSvtId"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MultipleViewComponent__SetModeTabKind(MultipleViewComponent_o *this, int32_t modeKind, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v6; // x8
  System_String_o **v7; // x8
  System_String_o **v8; // x8
  __int64 *v9; // x8
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  UILabel_o *infoLb; // x21
  char v13; // w8
  UILabel_o *v14; // x21
  __int64 *v15; // x8
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1

  if ( (byte_4C3E2EF & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C37058(&StringLiteral_17654/*"button_push_reg"*/);
    sub_1C37058(&StringLiteral_17655/*"button_push_unreg"*/);
    sub_1C37058(&StringLiteral_17640/*"button_allchoice_reg"*/);
    sub_1C37058(&StringLiteral_17643/*"button_alllock_unreg"*/);
    sub_1C37058(&StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C37058(&StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C37058(&StringLiteral_17656/*"button_select_reg"*/);
    sub_1C37058(&StringLiteral_17657/*"button_select_unreg"*/);
    sub_1C37058(&StringLiteral_17642/*"button_alllock_reg"*/);
    sub_1C37058(&StringLiteral_17641/*"button_allchoice_unreg"*/);
    byte_4C3E2EF = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_49;
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17657/*"button_select_unreg"*/ : &StringLiteral_17656/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_49;
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17642/*"button_alllock_reg"*/ : &StringLiteral_17643/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_49;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_49;
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17640/*"button_allchoice_reg"*/ : &StringLiteral_17641/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0) )
    {
LABEL_49:
      sub_1C372B4(normalTabButton);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17654/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17655/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        normalTabButton = (UnityEngine_Behaviour_o *)MultipleViewComponent__GetTitleMessage(this, v10);
        if ( !infoLb )
          goto LABEL_49;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        v13 = 0;
        goto LABEL_46;
      case 1:
        v14 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_43;
      case 2:
        v14 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_43;
      case 3:
        v14 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_43:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v15, 0);
        if ( !v14 )
          goto LABEL_49;
        UILabel__set_text(v14, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        v13 = 1;
LABEL_46:
        BYTE4(normalTabButton[15].fields.m_CachedPtr) = v13;
LABEL_47:
        MultipleViewListViewManager__UpdateDisplayState(
          (MultipleViewListViewManager_o *)normalTabButton,
          modeKind == 3,
          v11);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        MultipleViewListViewManager__SetMode_33453316((MultipleViewListViewManager_o *)normalTabButton, 2, v16);
        MultipleViewComponent__SetConfirmButton(this, v17);
        break;
      default:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        goto LABEL_47;
    }
  }
}


void MultipleViewComponent__StatusRequest(
        MultipleViewComponent_o *this,
        MultipleViewComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  MultipleViewListViewManager_o *multipleViewManager; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w4
  bool v14; // w5
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3E2F0 & 1) == 0 )
  {
    sub_1C37058(&Method_MultipleViewComponent_EndStatusSync__);
    sub_1C37058(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C3E2F0 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v18 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapChoiceList(multipleViewManager, &choiceList, &v18, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v15, v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v17,
                                                               (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v12 = v18;
        v11 = choiceList;
        v14 = 1;
        v13 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C372B4(multipleViewManager);
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v8, v9);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v10,
                                                               (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v12 = unlockList;
        v11 = lockList;
        v13 = 1;
        v14 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v11, v12, 0, v13, v14, 0);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void MultipleViewComponent__UpdateScaleChangeIconSprite(MultipleViewComponent_o *this, const MethodInfo *method)
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
    sub_1C372B4(multipleViewManager);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)multipleViewManager, 0);
}


void MultipleViewComponent_RequestCallbackFunc___ctor(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A74DBC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A74D74;
}


System_IAsyncResult_o *MultipleViewComponent_RequestCallbackFunc__BeginInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isRequest;
  if ( (byte_4C3E2F6 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3E2F6 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void MultipleViewComponent_RequestCallbackFunc__Invoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void MultipleViewComponent___c__DisplayClass37_0___ctor(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__0(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v6; // x20
  System_Action_o *_9__1; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3E2F7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__);
    byte_4C3E2F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
    }
    if ( v6 )
    {
      CommonUI__CloseConfirmDialog_31208544(v6, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(Instance);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__1(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  MultipleViewComponent__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


bool MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__2(
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
  if ( (byte_4C3E2F8 & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3E2F8 = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0 )
    sub_1C372B4(this);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v9, 0) == id;
}


void MultipleViewComponent___c__DisplayClass37_1___ctor(
        MultipleViewComponent___c__DisplayClass37_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MultipleViewComponent___c__DisplayClass37_1___OnClickServant_b__3(
        MultipleViewComponent___c__DisplayClass37_1_o *this,
        bool result,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  MultipleViewComponent___c__DisplayClass37_1_o *v6; // x19
  struct MultipleViewComponent___c__DisplayClass37_0_o *CS___8__locals1; // x9
  struct MultipleViewComponent_o *_4__this; // x8
  struct MultipleViewListViewItem_o *item; // x9
  struct UserServantEntity_o *userSvtEntity; // x9
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  __int128 v12; // q1
  int32_t selectIndex; // w22
  struct MultipleViewComponent___c__DisplayClass37_0_o *v14; // x8
  struct MultipleViewComponent_o *v15; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v16; // x8
  struct MultipleViewComponent_o *v17; // x8
  MultipleViewListViewManager_o *multipleViewManager; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  struct MultipleViewComponent___c__DisplayClass37_0_o *v21; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v22; // x8
  Il2CppObject *v23; // x21
  Il2CppClass *klass; // x20
  MultipleViewListViewManager_CallbackFunc_o *v25; // x22
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  struct MultipleViewComponent___c__DisplayClass37_0_o *v31; // x8
  UILabel_o *v32; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4C3E2F9 & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_1C37058(&Method_MultipleViewComponent_OnClickServant__);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3E2F9 = 1;
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
    v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    selectIndex = v6->fields.selectIndex;
    *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v34.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v33 = v34;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                              &v33,
                                                              0);
    if ( !listSelectedUsrSvtId )
      goto LABEL_28;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_378ADBC *)Method_System_Collections_Generic_List_long__set_Item__);
    v14 = v6->fields.CS___8__locals1;
    if ( !v14 )
      goto LABEL_28;
    v15 = v14->fields.__4__this;
    if ( !v15 )
      goto LABEL_28;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)v15->fields.listSelectedImageLimitCount;
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_List_int___set_Item(
      (System_Collections_Generic_List_int__o *)this,
      v6->fields.selectIndex,
      imageLimitCount,
      (const MethodInfo_3785D64 *)Method_System_Collections_Generic_List_int__set_Item__);
    v16 = v6->fields.CS___8__locals1;
    if ( !v16
      || (v17 = v16->fields.__4__this) == 0
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v17->fields.listSelectedUsrSvtId) == 0
      || (multipleViewManager = v17->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_33449392(multipleViewManager, (System_Int64_array *)this, v19),
          (v21 = v6->fields.CS___8__locals1) == 0)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v21->fields.__4__this) == 0 )
    {
LABEL_28:
      sub_1C372B4(this);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, v20);
  }
  v22 = v6->fields.CS___8__locals1;
  if ( !v22 )
    goto LABEL_28;
  v23 = (Il2CppObject *)v22->fields.__4__this;
  if ( !v23 )
    goto LABEL_28;
  klass = v23[4].klass;
  v25 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C372A4(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v25,
    v23,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    v26);
  if ( !klass )
    goto LABEL_28;
  klass->vtable[4].method = (const MethodInfo *)v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&klass->vtable[4].method, (int32_t)v25, v27, v28);
  MultipleViewListViewManager__SetMode_33453316((MultipleViewListViewManager_o *)klass, 2, v29);
  v31 = v6->fields.CS___8__locals1;
  if ( !v31 )
    goto LABEL_28;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)v31->fields.__4__this;
  if ( !this )
    goto LABEL_28;
  v32 = (UILabel_o *)this[1].fields.CS___8__locals1;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)MultipleViewComponent__GetTitleMessage(
                                                            (MultipleViewComponent_o *)this,
                                                            v30);
  if ( !v32 )
    goto LABEL_28;
  UILabel__set_text(v32, (System_String_o *)this, 0);
}


void MultipleViewComponent___c__DisplayClass40_0___ctor(
        MultipleViewComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MultipleViewComponent___c__DisplayClass40_0___CloseSvtDetail_b__0(
        MultipleViewComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *_4__this; // x0
  struct MultipleViewComponent_o *v5; // x8
  struct MultipleViewComponent_o *v6; // x8
  Il2CppObject *v7; // x20
  Il2CppClass *klass; // x19
  MultipleViewListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4C3E2FA & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_MultipleViewComponent_OnClickServant__);
    sub_1C37058(&StringLiteral_3437/*"CLICK_BACK"*/);
    byte_4C3E2FA = 1;
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
                                              0);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
        v5 = this->fields.__4__this;
        if ( v5 )
        {
          _4__this = (MultipleViewComponent_o *)v5->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3437/*"CLICK_BACK"*/, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1C372B4(_4__this);
  }
  if ( !_4__this->fields.multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_18;
    _4__this = (MultipleViewComponent_o *)v6->fields.multipleViewManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0);
  }
  v7 = (Il2CppObject *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_18;
  klass = v7[4].klass;
  v9 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C372A4(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(v9, v7, (intptr_t)Method_MultipleViewComponent_OnClickServant__, v10);
  if ( !klass )
    goto LABEL_18;
  klass->vtable[4].method = (const MethodInfo *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&klass->vtable[4].method, (int32_t)v9, v11, v12);
  MultipleViewListViewManager__SetMode_33453316((MultipleViewListViewManager_o *)klass, 2, v13);
}