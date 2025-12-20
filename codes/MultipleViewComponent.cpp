void MultipleViewComponent___ctor(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  System_Collections_Generic_List_long__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  System_Collections_Generic_List_int__o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D27A22 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor___78995512);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor___78995296);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&MyRoomControl_TypeInfo);
    byte_4D27A22 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  v4 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C94140(
                                                        long___TypeInfo,
                                                        (unsigned int)v3->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v5 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_59057980(
    v5,
    v4,
    (const MethodInfo_385273C *)Method_System_Collections_Generic_List_long___ctor___78995512);
  this->fields.listSelectedUsrSvtId = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.listSelectedUsrSvtId, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C94140(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_59037412(
    v13,
    v12,
    (const MethodInfo_384D6E4 *)Method_System_Collections_Generic_List_int___ctor___78995296);
  this->fields.listSelectedImageLimitCount = v13;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.listSelectedImageLimitCount,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultipleViewComponent__CancelMultipleViewWindow(
        MultipleViewComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4D27A12 & 1) == 0 )
  {
    sub_1C94098(&Method_MultipleViewComponent_EndCancelButton__);
    sub_1C94098(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4D27A12 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cancelCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C942E4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    v11);
  MultipleViewComponent__StatusRequest(this, v10, v12);
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
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4D27A17 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__);
    sub_1C94098(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
    byte_4D27A17 = 1;
  }
  v8 = sub_1C942E4(MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0),
        !Instance) )
  {
    sub_1C942F0(v9, v10);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__EndCancelButton(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  struct MultipleViewListViewManager_o *v6; // x20
  MultipleViewListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4D27A13 & 1) == 0 )
  {
    sub_1C94098(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_MultipleViewComponent_OnClickServant__);
    byte_4D27A13 = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          v6 = this->fields.multipleViewManager,
          v7 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C942E4(MultipleViewListViewManager_CallbackFunc_TypeInfo),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            v8),
          !v6) )
    {
LABEL_11:
      sub_1C942F0(multipleViewManager, isRequest);
    }
    v6->fields.callbackFunc = v7;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    MultipleViewListViewManager__SetMode_34044248(v6, 2, v15);
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


// local variable allocation has failed, the output may be wrong!
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
      sub_1C942F0(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_34044248(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C942F0(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_34044248(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C942F0(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_34044248(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C942F0(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_34044248(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 3, method);
}


void MultipleViewComponent__EndStatusSync(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_requedstCallback; // x0
  struct MultipleViewComponent_RequestCallbackFunc_o *v9; // x19
  struct MultipleViewComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0;
    sub_1C9403C(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4D27A16 & 1) == 0 )
  {
    sub_1C94098(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_MultipleViewComponent_OnClickServant__);
    byte_4D27A16 = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, method),
        (multipleViewManager = this->fields.multipleViewManager) == 0)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, v5),
        v6 = this->fields.multipleViewManager,
        v7 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C942E4(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          v8),
        !v6) )
  {
    sub_1C942F0(multipleViewManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  MultipleViewListViewManager__SetMode_34044248(v6, 2, v15);
}


int32_t MultipleViewComponent__GetCurrentSelectIndex(MultipleViewComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  int32_t v4; // w20

  if ( (byte_4D27A20 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Item__);
    byte_4D27A20 = 1;
  }
  listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_8:
    sub_1C942F0(listSelectedUsrSvtId, method);
  v4 = 0;
  while ( v4 < listSelectedUsrSvtId->fields._size )
  {
    if ( System_Collections_Generic_List_long___get_Item(
           listSelectedUsrSvtId,
           v4,
           (const MethodInfo_3852B78 *)Method_System_Collections_Generic_List_long__get_Item__) < 1 )
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

  if ( (byte_4D27A10 & 1) == 0 )
  {
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_9220/*"MultipleViewSelectedUsrSvtId"*/);
    byte_4D27A10 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9220/*"MultipleViewSelectedUsrSvtId"*/,
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

  if ( (byte_4D27A21 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_7217/*"HEADER_MSG_MULTIPLE_SERVANT_"*/);
    sub_1C94098(&StringLiteral_7218/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/);
    byte_4D27A21 = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( CurrentSelectIndex < 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = (System_String_o *)StringLiteral_7218/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v3 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0);
    v4 = System_String__Concat_64417744((System_String_o *)StringLiteral_7217/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v3, 0);
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
    sub_1C942F0(multipleViewManager, method);
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

  if ( (byte_4D27A1A & 1) == 0 )
  {
    sub_1C94098(&Method_MultipleViewComponent_EndClickTabChoice__);
    sub_1C94098(&Method_MultipleViewComponent_OnClickChoiceTabButton__);
    sub_1C94098(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4D27A1A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C942E4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          v8);
        MultipleViewComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C942E4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
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
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  MultipleViewComponent_o *Item; // x0
  const MethodInfo *v10; // x2
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v13; // x19
  const MethodInfo *v14; // x3

  if ( (byte_4D27A1F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C94098(&Method_MultipleViewComponent_OnClickDecide__);
    byte_4D27A1F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.tabModeKind && MultipleViewComponent__GetCurrentSelectIndex(this, method) < 0 )
    {
      v5 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      this->fields.state = 4;
      if ( !listSelectedUsrSvtId )
        goto LABEL_17;
      Item = (MultipleViewComponent_o *)System_Collections_Generic_List_long___get_Item(
                                          listSelectedUsrSvtId,
                                          listSelectedUsrSvtId->fields._size - 1,
                                          (const MethodInfo_3852B78 *)Method_System_Collections_Generic_List_long__get_Item__);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(Item, (int64_t)Item, v10);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      if ( !listSelectedUsrSvtId
        || (myRoomControl = this->fields.myRoomControl,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                                listSelectedUsrSvtId,
                                                                                (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0)
        || (v13 = (System_Int64_array *)listSelectedUsrSvtId,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_int___ToArray(
                                                                                listSelectedImageLimitCount,
                                                                                (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_17:
        sub_1C942F0(listSelectedUsrSvtId, v7);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v13, (System_Int32_array *)listSelectedUsrSvtId, v14);
    }
    else
    {
      v3 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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

  if ( (byte_4D27A19 & 1) == 0 )
  {
    sub_1C94098(&Method_MultipleViewComponent_EndClickTabLock__);
    sub_1C94098(&Method_MultipleViewComponent_OnClickLockTabButton__);
    sub_1C94098(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4D27A19 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C942E4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          v8);
        MultipleViewComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C942E4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D27A18 & 1) == 0 )
  {
    sub_1C94098(&Method_MultipleViewComponent_EndClickTabNormal__);
    sub_1C94098(&Method_MultipleViewComponent_OnClickNormalTabButton__);
    sub_1C94098(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4D27A18 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C942E4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D27A1B & 1) == 0 )
  {
    sub_1C94098(&Method_MultipleViewComponent_EndClickTabPush__);
    sub_1C94098(&Method_MultipleViewComponent_OnClickPushTabButton__);
    sub_1C94098(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_4D27A1B = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_MultipleViewComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1C942E4(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D27A1E & 1) == 0 )
  {
    sub_1C94098(&Method_MultipleViewComponent_OnClickScaleChange__);
    byte_4D27A1E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      sub_1C942F0(0, v5);
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
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  MultipleViewListViewItem_o *Item; // x1
  MultipleViewListViewItem_o **v23; // x21
  __int64 v24; // x8
  __int128 v25; // q1
  int32_t tabModeKind; // w8
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int32_t v29; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v31; // x20
  ServantStatusDialog_ResultDelegate_o *v32; // x22
  _QWORD *v33; // x0
  _QWORD *v34; // x0
  struct MultipleViewListViewManager_o *v35; // x20
  MultipleViewListViewManager_CallbackFunc_o *v36; // x21
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  const MethodInfo *v44; // x2
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v49; // x22
  int32_t Index; // w0
  const MethodInfo *v51; // x1
  int32_t v52; // w21
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  MultipleViewListViewManager_o *v55; // x20
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x1
  UILabel_o *infoLb; // x20
  _QWORD *v59; // x0
  System_Reflection_MethodBase_o *v60; // x0
  const MethodInfo *v61; // x2
  int64_t v62; // x22
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q0
  __int64 v65; // x21
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  const MethodInfo *v74; // x1
  __int64 v75; // x8
  __int64 v76; // x8
  __int64 v77; // x8
  __int128 v78; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v80; // x20
  System_Action_bool__int__o *v81; // x22
  const MethodInfo *v82; // x5
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v87; // x27
  __int64 v88; // x28
  ServantOverwriteStatus_o *OverwriteStatus; // x26
  System_String_o *v90; // x22
  System_String_o *v91; // x23
  System_Object_array *v92; // x24
  int32_t v93; // w28
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  Il2CppObject *v100; // x28
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  Il2CppObject *v107; // x28
  int32_t v108; // w0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  Il2CppObject *v115; // x25
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  Il2CppObject *v122; // x25
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  Il2CppObject *v129; // x25
  MultipleViewListViewItem_o *v130; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v131; // x9
  ServantEntity_o *servantEntity; // x21
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  Il2CppObject *v139; // x21
  System_String_o *v140; // x21
  System_String_o *v141; // x23
  System_String_o *v142; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v144; // x26
  __int64 v145; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16

  if ( (byte_4D27A14 & 1) == 0 )
  {
    sub_1C94098(&System_Action_bool__int__TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_MultipleViewComponent_CloseSvtDetail__);
    sub_1C94098(&Method_MultipleViewComponent_OnClickServant__);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&System_Predicate_long__TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__);
    sub_1C94098(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__);
    sub_1C94098(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
    sub_1C94098(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__);
    sub_1C94098(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
    sub_1C94098(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C94098(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4D27A14 = 1;
  }
  v7 = sub_1C942E4(MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_120;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( n < 0 )
  {
    Item = 0;
  }
  else
  {
    multipleViewManager = (__int64)this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_120;
    Item = MultipleViewListViewManager__GetItem((MultipleViewListViewManager_o *)multipleViewManager, n, v16);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v23 = (MultipleViewListViewItem_o **)(v7 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_120;
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 120LL);
  if ( !v24 )
    goto LABEL_120;
  v25 = *(_OWORD *)(v24 + 32);
  *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
  *(_OWORD *)&v149.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v148 = v149;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v148, 0);
  this->fields.usrSvtId = multipleViewManager;
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      userSvtEntity = (*v23)->fields.userSvtEntity;
      v31 = (CommonUI_o *)multipleViewManager;
      v32 = (ServantStatusDialog_ResultDelegate_o *)sub_1C942E4(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v32,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0);
      if ( v31 )
      {
        CommonUI__OpenServantStatusDialog_31594296(v31, 0, userSvtEntity, v32, 0, 0, 0);
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
    if ( !*v23 )
      goto LABEL_120;
    (*v23)->fields.isSwapChoice ^= 1u;
    v33 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickServant__);
    v28 = (System_Reflection_MethodBase_o *)sub_1C9407C(v33, v33[4]);
    v29 = 0;
    goto LABEL_36;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v23 )
      goto LABEL_120;
    (*v23)->fields.isSwapLock ^= 1u;
    v27 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickServant__);
    v28 = (System_Reflection_MethodBase_o *)sub_1C9407C(v27, v27[4]);
    v29 = 11;
    goto LABEL_36;
  }
  multipleViewManager = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_120;
  if ( tabModeKind != 3 )
  {
    if ( !MultipleViewListViewItem__get_IsCanNotSelect((MultipleViewListViewItem_o *)multipleViewManager, v9) )
    {
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      v49 = (System_Predicate_long__o *)sub_1C942E4(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v49,
        (Il2CppObject *)v7,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        0);
      if ( !listSelectedUsrSvtId )
        goto LABEL_120;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v49,
                (const MethodInfo_385369C *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v52 = Index;
        v53 = Method_MultipleViewComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
          v53 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickServant__);
        v54 = (System_Reflection_MethodBase_o *)sub_1C9407C(v53, v53[4]);
        OverwriteAssetSoundName__PlaySystemSe(v54, 1, 0, 0);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_120;
        System_Collections_Generic_List_long___set_Item(
          (System_Collections_Generic_List_long__o *)multipleViewManager,
          v52,
          0,
          (const MethodInfo_3852BCC *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_120;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v52,
          0,
          (const MethodInfo_384DB74 *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_120;
        v55 = this->fields.multipleViewManager;
        multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                         (System_Collections_Generic_List_long__o *)multipleViewManager,
                                         (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v55 )
          goto LABEL_120;
        MultipleViewListViewManager__ModifyItem_34040324(v55, (System_Int64_array *)multipleViewManager, v56);
        MultipleViewComponent__SetConfirmButton(this, v57);
        goto LABEL_53;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v51) & 0x80000000) == 0 )
      {
        v65 = sub_1C942E4(MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v65, 0);
        if ( v65 )
        {
          *(_QWORD *)(v65 + 24) = v7;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v65 + 24), v7, v66, v67, v68, v69, v70, v71);
          v72 = Method_MultipleViewComponent_OnClickServant__;
          if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
            v72 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickServant__);
          v73 = (System_Reflection_MethodBase_o *)sub_1C9407C(v72, v72[4]);
          OverwriteAssetSoundName__PlaySystemSe(v73, 0, 0, 0);
          multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v74);
          v75 = *(_QWORD *)(v65 + 24);
          *(_DWORD *)(v65 + 16) = multipleViewManager;
          if ( v75 )
          {
            v76 = *(_QWORD *)(v75 + 24);
            if ( v76 )
            {
              v77 = *(_QWORD *)(v76 + 120);
              if ( v77 )
              {
                v78 = *(_OWORD *)(v77 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)(v77 + 16);
                *(_OWORD *)&v149.fields.fakeValue = v78;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v146 = v149;
                v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v146, 0);
                v81 = (System_Action_bool__int__o *)sub_1C942E4(System_Action_bool__int__TypeInfo);
                System_Action_bool__int____ctor(
                  v81,
                  (Il2CppObject *)v65,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  0);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v80, v81, *(_DWORD *)(v65 + 16), v82);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_120;
      }
    }
    v45 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickServant__);
    v46 = (System_Reflection_MethodBase_o *)sub_1C9407C(v45, v45[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0, 0);
LABEL_53:
    infoLb = this->fields.infoLb;
    multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v47);
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
      v34 = Method_MultipleViewComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickServant__);
      v28 = (System_Reflection_MethodBase_o *)sub_1C9407C(v34, v34[4]);
      v29 = 2;
LABEL_36:
      OverwriteAssetSoundName__PlaySystemSe(v28, v29, 0, 0);
      goto LABEL_37;
    }
    multipleViewManager = (__int64)*v23;
    if ( !*v23 )
      goto LABEL_120;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave((MultipleViewListViewItem_o *)multipleViewManager, v9) )
    goto LABEL_33;
  v59 = Method_MultipleViewComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
    v59 = (_QWORD *)sub_1C940B0(Method_MultipleViewComponent_OnClickServant__);
  v60 = (System_Reflection_MethodBase_o *)sub_1C9407C(v59, v59[4]);
  OverwriteAssetSoundName__PlaySystemSe(v60, 0, 0, 0);
  multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !multipleViewManager )
    goto LABEL_120;
  v62 = *(_QWORD *)(multipleViewManager + 128);
  if ( !v62 )
  {
LABEL_64:
    MultipleViewComponent__PushRequest(this, *v23, v61);
    goto LABEL_37;
  }
  if ( !*v23 )
    goto LABEL_120;
  v63 = (*v23)->fields.userSvtEntity;
  if ( !v63 )
    goto LABEL_120;
  v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
  *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v149.fields.fakeValue = v64;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v147 = v149;
  if ( v62 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v147, 0) )
    goto LABEL_64;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_120;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager,
             v62,
             (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_120;
  v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v150.fields.currentCryptoKey = klass;
  *(_QWORD *)&v150.fields.fakeValue = monitor;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v150, 0);
  if ( !v84 )
    goto LABEL_120;
  v87 = DataMasterBase_object__object__int___GetEntity(
          v84,
          multipleViewManager,
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  multipleViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Entity, 0, 0);
  if ( !*v23 )
    goto LABEL_120;
  v88 = multipleViewManager;
  multipleViewManager = (__int64)(*v23)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_120;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)multipleViewManager, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  multipleViewManager = sub_1C94140(object___TypeInfo, 6);
  if ( !v88 )
    goto LABEL_120;
  v92 = (System_Object_array *)multipleViewManager;
  v93 = *(_DWORD *)(v88 + 24);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  multipleViewManager = (__int64)Rarity__getRarityType(v93, 0);
  if ( !v92 )
LABEL_120:
    sub_1C942F0(multipleViewManager, v9);
  v100 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C941D4(multipleViewManager, v92->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( !LODWORD(v92->max_length) )
    goto LABEL_121;
  v92->m_Items[0] = v100;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v92->m_Items, (int32_t)v100, v94, v95, v96, v97, v98, v99);
  if ( !v87 )
    goto LABEL_120;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v87, 0);
  v107 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C941D4(multipleViewManager, v92->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( LODWORD(v92->max_length) <= 1 )
    goto LABEL_121;
  v92->m_Items[1] = v107;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v92->m_Items[1], (int32_t)v107, v101, v102, v103, v104, v105, v106);
  v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
           0);
  multipleViewManager = (__int64)ServantEntity__getName((ServantEntity_o *)v87, v108, -1, 1, 0);
  v115 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C941D4(multipleViewManager, v92->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( LODWORD(v92->max_length) <= 2 )
    goto LABEL_121;
  v92->m_Items[2] = v115;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v92->m_Items[2], (int32_t)v115, v109, v110, v111, v112, v113, v114);
  if ( !OverwriteStatus )
    goto LABEL_120;
  multipleViewManager = (__int64)Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0);
  v122 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C941D4(multipleViewManager, v92->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( LODWORD(v92->max_length) <= 3 )
    goto LABEL_121;
  v92->m_Items[3] = v122;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v92->m_Items[3], (int32_t)v122, v116, v117, v118, v119, v120, v121);
  if ( !*v23 )
    goto LABEL_120;
  multipleViewManager = (__int64)(*v23)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_120;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0);
  v129 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C941D4(multipleViewManager, v92->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_122;
  }
  if ( LODWORD(v92->max_length) <= 4 )
    goto LABEL_121;
  v92->m_Items[4] = v129;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v92->m_Items[4], (int32_t)v129, v123, v124, v125, v126, v127, v128);
  v130 = *v23;
  if ( !*v23 )
    goto LABEL_120;
  v131 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v130->fields.userSvtEntity;
  if ( !v131 )
    goto LABEL_120;
  servantEntity = v130->fields.servantEntity;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v131[6], 0);
  if ( !servantEntity )
    goto LABEL_120;
  multipleViewManager = (__int64)ServantEntity__getName(servantEntity, multipleViewManager, -1, 1, 0);
  v139 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1C941D4(multipleViewManager, v92->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_122:
      v145 = sub_1C94314();
      sub_1C941C0(v145, 0);
    }
  }
  if ( LODWORD(v92->max_length) <= 5 )
LABEL_121:
    sub_1C942F8(multipleViewManager);
  v92->m_Items[5] = v139;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v92->m_Items[5], (int32_t)v139, v133, v134, v135, v136, v137, v138);
  v140 = System_String__Format_64459188(v91, v92, 0);
  v141 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v142 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v144 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v144,
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
  CommonUI__OpenConfirmDialog_31583464(
    (CommonUI_o *)Instance,
    v90,
    v140,
    v141,
    v142,
    v144,
    *(_DWORD *)(*(_QWORD *)(multipleViewManager + 184) + 516LL),
    *(_DWORD *)(*(_QWORD *)(multipleViewManager + 184) + 528LL),
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
  v35 = this->fields.multipleViewManager;
  v36 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C942E4(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v36,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    v37);
  if ( !v35 )
    goto LABEL_120;
  v35->fields.callbackFunc = v36;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v35->fields.callbackFunc, (int32_t)v36, v38, v39, v40, v41, v42, v43);
  MultipleViewListViewManager__SetMode_34044248(v35, 2, v44);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__Open(MultipleViewComponent_o *this, bool isResetSelected, const MethodInfo *method)
{
  MyRoomControl_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *v6; // x20
  System_Collections_Generic_List_long__o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  System_Collections_Generic_List_int__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int64_t gameObject; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_GameObject_o *v30; // x20
  MultipleViewComponent_o *v31; // x0
  const MethodInfo *v32; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v34; // x20
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x1
  struct MultipleViewListViewManager_o *v37; // x20
  MultipleViewListViewManager_CallbackFunc_o *v38; // x21
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x1

  if ( (byte_4D27A0F & 1) == 0 )
  {
    sub_1C94098(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor___78995512);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor___78995296);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&Method_MultipleViewComponent_OnClickServant__);
    sub_1C94098(&MyRoomControl_TypeInfo);
    byte_4D27A0F = 1;
  }
  if ( isResetSelected )
  {
    v5 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v5 = MyRoomControl_TypeInfo;
    }
    v6 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C94140(
                                                          long___TypeInfo,
                                                          (unsigned int)v5->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v7 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_59057980(
      v7,
      v6,
      (const MethodInfo_385273C *)Method_System_Collections_Generic_List_long___ctor___78995512);
    this->fields.listSelectedUsrSvtId = v7;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.listSelectedUsrSvtId,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = (System_Collections_Generic_IEnumerable_T__o *)sub_1C94140(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v15 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_59037412(
      v15,
      v14,
      (const MethodInfo_384D6E4 *)Method_System_Collections_Generic_List_int___ctor___78995296);
    this->fields.listSelectedImageLimitCount = v15;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.listSelectedImageLimitCount,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.cancelCallback = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.cancelCallback, 0, v24, v25, v26, v27, v28, v29);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_15;
  TitleInfoControl__changeTitleInfo_40661784((TitleInfoControl_o *)gameObject, 1, 63, 0, 0);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_15;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = BgTxtManager__IsActiveBgTxt(0);
  if ( !v30 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v30, gameObject & 1, 0);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v31, v32);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_15;
  multipleViewManager = this->fields.multipleViewManager;
  v34 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v34, (System_Int64_array *)gameObject, v35),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v36),
        v37 = this->fields.multipleViewManager,
        v38 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C942E4(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v38,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          v39),
        !v37) )
  {
LABEL_15:
    sub_1C942F0(gameObject, v23);
  }
  v37->fields.callbackFunc = v38;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v37->fields.callbackFunc, (int32_t)v38, v40, v41, v42, v43, v44, v45);
  MultipleViewListViewManager__SetMode_34044248(v37, 2, v46);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v47);
}


void MultipleViewComponent__PushRequest(
        MultipleViewComponent_o *this,
        MultipleViewListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CommonUI_o *limitCountSupport; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t m_CachedPtr; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct FadeInfo_o *fadeInfo; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v17; // x0
  __int128 v18; // q1
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  __int128 v21; // q1
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w26
  int32_t v24; // w27
  int32_t v25; // w28
  int32_t v26; // w29
  bool IsLock; // w21
  char v28; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct SoundInfo_o *soundInfo; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct FadeInfo_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4D27A15 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_MultipleViewComponent_EndePushRequest__);
    sub_1C94098(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D27A15 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_19;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_19;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v45, 0);
  if ( !v9 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  fadeInfo = v7->fields.fadeInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = fadeInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v43, 0);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v7->fields.soundInfo;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v19, (Il2CppObject *)this, Method_MultipleViewComponent_EndePushRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userSvtEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userSvtEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v46, 0);
  if ( !v22 )
LABEL_19:
    sub_1C942F0(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    soundInfo == (struct SoundInfo_o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct FadeInfo_o *)v39,
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
    sub_1C942F0(confirmBtnColor, method);
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
  if ( (byte_4D27A11 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9220/*"MultipleViewSelectedUsrSvtId"*/);
    byte_4D27A11 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9220/*"MultipleViewSelectedUsrSvtId"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__SetModeTabKind(MultipleViewComponent_o *this, int32_t modeKind, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v6; // x8
  System_String_o **v7; // x8
  System_String_o **v8; // x8
  __int64 *v9; // x8
  const MethodInfo *v10; // x2
  UILabel_o *infoLb; // x21
  char v12; // w8
  UILabel_o *v13; // x21
  __int64 *v14; // x8
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1

  if ( (byte_4D27A1C & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11705/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C94098(&StringLiteral_17742/*"button_push_reg"*/);
    sub_1C94098(&StringLiteral_17743/*"button_push_unreg"*/);
    sub_1C94098(&StringLiteral_17728/*"button_allchoice_reg"*/);
    sub_1C94098(&StringLiteral_17731/*"button_alllock_unreg"*/);
    sub_1C94098(&StringLiteral_11703/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C94098(&StringLiteral_11704/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C94098(&StringLiteral_17744/*"button_select_reg"*/);
    sub_1C94098(&StringLiteral_17745/*"button_select_unreg"*/);
    sub_1C94098(&StringLiteral_17730/*"button_alllock_reg"*/);
    sub_1C94098(&StringLiteral_17729/*"button_allchoice_unreg"*/);
    byte_4D27A1C = 1;
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
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17745/*"button_select_unreg"*/ : &StringLiteral_17744/*"button_select_reg"*/);
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
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17730/*"button_alllock_reg"*/ : &StringLiteral_17731/*"button_alllock_unreg"*/);
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
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17728/*"button_allchoice_reg"*/ : &StringLiteral_17729/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0) )
    {
LABEL_49:
      sub_1C942F0(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17742/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17743/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        normalTabButton = (UnityEngine_Behaviour_o *)MultipleViewComponent__GetTitleMessage(
                                                       this,
                                                       *(const MethodInfo **)&modeKind);
        if ( !infoLb )
          goto LABEL_49;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        v12 = 0;
        goto LABEL_46;
      case 1:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11704/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_43;
      case 2:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11703/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_43;
      case 3:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11705/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_43:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v14, 0);
        if ( !v13 )
          goto LABEL_49;
        UILabel__set_text(v13, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        v12 = 1;
LABEL_46:
        BYTE4(normalTabButton[15].fields.m_CachedPtr) = v12;
LABEL_47:
        MultipleViewListViewManager__UpdateDisplayState(
          (MultipleViewListViewManager_o *)normalTabButton,
          modeKind == 3,
          v10);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        MultipleViewListViewManager__SetMode_34044248((MultipleViewListViewManager_o *)normalTabButton, 2, v15);
        MultipleViewComponent__SetConfirmButton(this, v16);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  System_Int64_array *v26; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D27A1D & 1) == 0 )
  {
    sub_1C94098(&Method_MultipleViewComponent_EndStatusSync__);
    sub_1C94098(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D27A1D = 1;
  }
  unlockList = 0;
  lockList = 0;
  v26 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapChoiceList(multipleViewManager, &choiceList, &v26, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v25,
                                                               (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v16 = v26;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C942F0(multipleViewManager, callback);
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
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v14,
                                                               (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v15, v16, 0, v17, v18, 0);
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
    sub_1C942F0(multipleViewManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)multipleViewManager, 0);
}


void MultipleViewComponent_RequestCallbackFunc___ctor(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC1A5C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC1A14;
}


System_IAsyncResult_o *MultipleViewComponent_RequestCallbackFunc__BeginInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4D27A23 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D27A23 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D27A24 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__);
    byte_4D27A24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31583752(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C942F0(Instance, v6);
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
    sub_1C942F0(this, method);
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
  if ( (byte_4D27A25 & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D27A25 = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0 )
    sub_1C942F0(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v9, 0) == id;
}


void MultipleViewComponent___c__DisplayClass37_1___ctor(
        MultipleViewComponent___c__DisplayClass37_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  struct MultipleViewComponent___c__DisplayClass37_0_o *v20; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v21; // x8
  Il2CppObject *v22; // x21
  Il2CppClass *klass; // x20
  MultipleViewListViewManager_CallbackFunc_o *v24; // x22
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x2
  struct MultipleViewComponent___c__DisplayClass37_0_o *v33; // x8
  UILabel_o *v34; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4D27A26 & 1) == 0 )
  {
    sub_1C94098(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_1C94098(&Method_MultipleViewComponent_OnClickServant__);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D27A26 = 1;
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
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v35 = v36;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                                              &v35,
                                                              0);
    if ( !listSelectedUsrSvtId )
      goto LABEL_28;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_3852BCC *)Method_System_Collections_Generic_List_long__set_Item__);
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
      (const MethodInfo_384DB74 *)Method_System_Collections_Generic_List_int__set_Item__);
    v16 = v6->fields.CS___8__locals1;
    if ( !v16
      || (v17 = v16->fields.__4__this) == 0
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v17->fields.listSelectedUsrSvtId) == 0
      || (multipleViewManager = v17->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_34040324(multipleViewManager, (System_Int64_array *)this, v19),
          (v20 = v6->fields.CS___8__locals1) == 0)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v20->fields.__4__this) == 0 )
    {
LABEL_28:
      sub_1C942F0(this, result);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, (const MethodInfo *)result);
  }
  v21 = v6->fields.CS___8__locals1;
  if ( !v21 )
    goto LABEL_28;
  v22 = (Il2CppObject *)v21->fields.__4__this;
  if ( !v22 )
    goto LABEL_28;
  klass = v22[4].klass;
  v24 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C942E4(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v24,
    v22,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    v25);
  if ( !klass )
    goto LABEL_28;
  klass->vtable[4].method = (const MethodInfo *)v24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&klass->vtable[4].method, (int32_t)v24, v26, v27, v28, v29, v30, v31);
  MultipleViewListViewManager__SetMode_34044248((MultipleViewListViewManager_o *)klass, 2, v32);
  v33 = v6->fields.CS___8__locals1;
  if ( !v33 )
    goto LABEL_28;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)v33->fields.__4__this;
  if ( !this )
    goto LABEL_28;
  v34 = (UILabel_o *)this[1].fields.CS___8__locals1;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)MultipleViewComponent__GetTitleMessage(
                                                            (MultipleViewComponent_o *)this,
                                                            (const MethodInfo *)result);
  if ( !v34 )
    goto LABEL_28;
  UILabel__set_text(v34, (System_String_o *)this, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4D27A27 & 1) == 0 )
  {
    sub_1C94098(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_MultipleViewComponent_OnClickServant__);
    sub_1C94098(&StringLiteral_3441/*"CLICK_BACK"*/);
    byte_4D27A27 = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3441/*"CLICK_BACK"*/, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1C942F0(_4__this, method);
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
  v9 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1C942E4(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(v9, v7, (intptr_t)Method_MultipleViewComponent_OnClickServant__, v10);
  if ( !klass )
    goto LABEL_18;
  klass->vtable[4].method = (const MethodInfo *)v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&klass->vtable[4].method, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  MultipleViewListViewManager__SetMode_34044248((MultipleViewListViewManager_o *)klass, 2, v17);
}