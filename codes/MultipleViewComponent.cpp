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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_long__o *v13; // x21
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_int__o *v17; // x21

  if ( (byte_4212400 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&long___TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor___67885136, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v8);
    byte_4212400 = 1;
  }
  v9 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v9 = MyRoomControl_TypeInfo;
  }
  v10 = (System_Collections_Generic_IEnumerable_T__o *)sub_B0D8BC(
                                                         long___TypeInfo,
                                                         (unsigned int)v9->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v13 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v11, v12);
  System_Collections_Generic_List_long____ctor_50025292(
    v13,
    v10,
    (const MethodInfo_2FB534C *)Method_System_Collections_Generic_List_long___ctor___67885136);
  this->fields.listSelectedUsrSvtId = v13;
  sub_B0D840(&this->fields.listSelectedUsrSvtId, v13);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)sub_B0D8BC(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v17 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v15, v16);
  System_Collections_Generic_List_int____ctor_50000796(
    v17,
    v14,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  this->fields.listSelectedImageLimitCount = v17;
  sub_B0D840(&this->fields.listSelectedImageLimitCount, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MultipleViewComponent__CancelMultipleViewWindow(
        MultipleViewComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42123F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MultipleViewComponent_EndCancelButton__, callback);
    sub_B0D8A4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v5);
    byte_42123F0 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B0D840(&this->fields.cancelCallback, callback);
  v8 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                        MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                        v6,
                                                        v7);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    0LL);
  MultipleViewComponent__StatusRequest(this, v8, v9);
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
  MultipleViewComponent___c__DisplayClass40_0_o *v11; // x22
  __int64 v12; // x0
  CommonUI_o *Instance; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20

  if ( (byte_42123F5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v9);
    sub_B0D8A4(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_42123F5 = 1;
  }
  v11 = (MultipleViewComponent___c__DisplayClass40_0_o *)sub_B0D974(
                                                           MultipleViewComponent___c__DisplayClass40_0_TypeInfo,
                                                           isDecide,
                                                           isNeedSort);
  MultipleViewComponent___c__DisplayClass40_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.questId = questId,
        v11->fields.__4__this = this,
        sub_B0D840(&v11->fields.__4__this, this),
        v11->fields.isNeedSort = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v11,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v12);
  }
  CommonUI__CloseServantStatusDialog(Instance, v16, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  MultipleViewListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_42123F1 & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_B0D8A4(&Method_MultipleViewComponent_OnClickServant__, v5);
    byte_42123F1 = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          v7 = this->fields.multipleViewManager,
          v10 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                                v8,
                                                                v9),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_B0D97C(multipleViewManager);
    }
    v7->fields.callbackFunc = v10;
    sub_B0D840(&v7->fields.callbackFunc, v10);
    MultipleViewListViewManager__SetMode_20252560(v7, 2, v11);
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
      sub_B0D97C(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_20252560(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 2, method);
}


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
      sub_B0D97C(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_20252560(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 1, method);
}


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
      sub_B0D97C(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_20252560(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 0, method);
}


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
      sub_B0D97C(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_20252560(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 3, method);
}


void __fastcall MultipleViewComponent__EndStatusSync(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct MultipleViewComponent_RequestCallbackFunc_o **p_requedstCallback; // x0
  MultipleViewComponent_RequestCallbackFunc_o *v4; // x19
  struct MultipleViewComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = &this->fields.requedstCallback;
  v4 = requedstCallback;
  if ( requedstCallback )
  {
    *p_requedstCallback = 0LL;
    sub_B0D840(p_requedstCallback, 0LL);
    MultipleViewComponent_RequestCallbackFunc__Invoke(v4, 1, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  MultipleViewListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_42123F4 & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_B0D8A4(&Method_MultipleViewComponent_OnClickServant__, v4);
    byte_42123F4 = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, method),
        (multipleViewManager = this->fields.multipleViewManager) == 0LL)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, v6),
        v7 = this->fields.multipleViewManager,
        v10 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                              v8,
                                                              v9),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v7) )
  {
    sub_B0D97C(multipleViewManager);
  }
  v7->fields.callbackFunc = v10;
  sub_B0D840(&v7->fields.callbackFunc, v10);
  MultipleViewListViewManager__SetMode_20252560(v7, 2, v11);
}


int32_t __fastcall MultipleViewComponent__GetCurrentSelectIndex(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  MultipleViewComponent_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  __int64 v5; // x20
  int size; // w8

  v2 = this;
  if ( (byte_42123FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, method);
    this = (MultipleViewComponent_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    byte_42123FE = 1;
  }
  listSelectedUsrSvtId = v2->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_10:
    sub_B0D97C(this);
  v5 = 0LL;
  while ( 1 )
  {
    size = listSelectedUsrSvtId->fields._size;
    if ( (int)v5 >= size )
      break;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( listSelectedUsrSvtId->fields._items->m_Items[v5] < 1 )
      return v5;
    listSelectedUsrSvtId = v2->fields.listSelectedUsrSvtId;
    ++v5;
    if ( !listSelectedUsrSvtId )
      goto LABEL_10;
  }
  LODWORD(v5) = -1;
  return v5;
}


int64_t __fastcall MultipleViewComponent__GetLatestSelectedUsrSvtId(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v5; // x0
  int64_t result; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_42123EE & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9257/*"MultipleViewSelectedUsrSvtId"*/, v2);
    byte_42123EE = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9257/*"MultipleViewSelectedUsrSvtId"*/,
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

  if ( (byte_42123FF & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_7054/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v3);
    sub_B0D8A4(&StringLiteral_7055/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, v4);
    byte_42123FF = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( (CurrentSelectIndex & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = (System_String_o *)StringLiteral_7055/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v5 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0LL);
    v6 = System_String__Concat_43849904((System_String_o *)StringLiteral_7054/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v5, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
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
    sub_B0D97C(multipleViewManager);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_42123F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MultipleViewComponent_EndClickTabChoice__, method);
    sub_B0D8A4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42123F8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v8 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                              MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                              v5,
                                                              v6);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v8, v9);
        return;
      }
      v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                             MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                             v5,
                                                             v6);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v10, v11);
    }
    MultipleViewComponent__SetModeTabKind(this, 2, v6);
  }
}


void __fastcall MultipleViewComponent__OnClickDecide(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MultipleViewComponent_o *v7; // x0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x20
  int32_t size; // w8
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v13; // x19
  const MethodInfo *v14; // x3

  if ( (byte_42123FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_42123FD = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.tabModeKind && (MultipleViewComponent__GetCurrentSelectIndex(this, method) & 0x80000000) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      this->fields.state = 4;
      if ( !listSelectedUsrSvtId )
        goto LABEL_21;
      size = listSelectedUsrSvtId->fields._size;
      if ( !size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(v7, listSelectedUsrSvtId->fields._items->m_Items[size - 1], v8);
      v7 = (MultipleViewComponent_o *)this->fields.listSelectedUsrSvtId;
      if ( !v7
        || (myRoomControl = this->fields.myRoomControl,
            v7 = (MultipleViewComponent_o *)System_Collections_Generic_List_long___ToArray(
                                              (System_Collections_Generic_List_long__o *)v7,
                                              (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0LL)
        || (v13 = (System_Int64_array *)v7,
            v7 = (MultipleViewComponent_o *)System_Collections_Generic_List_int___ToArray(
                                              listSelectedImageLimitCount,
                                              (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_21:
        sub_B0D97C(v7);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v13, (System_Int32_array *)v7, v14);
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
  }
}


void __fastcall MultipleViewComponent__OnClickLockTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_42123F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MultipleViewComponent_EndClickTabLock__, method);
    sub_B0D8A4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42123F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v8 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                              MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                              v5,
                                                              v6);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v8, v9);
        return;
      }
      v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                             MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                             v5,
                                                             v6);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v10, v11);
    }
    MultipleViewComponent__SetModeTabKind(this, 1, v6);
  }
}


void __fastcall MultipleViewComponent__OnClickNormalTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_42123F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MultipleViewComponent_EndClickTabNormal__, method);
    sub_B0D8A4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42123F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                          MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v7, v8);
  }
}


void __fastcall MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_42123F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MultipleViewComponent_EndClickTabPush__, method);
    sub_B0D8A4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42123F9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                          MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v7, v8);
  }
}


void __fastcall MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42123FC & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42123FC = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      sub_B0D97C(0LL);
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, v3);
    MultipleViewComponent__UpdateScaleChangeIconSprite(this, v5);
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
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  MultipleViewComponent___c__DisplayClass37_0_o *v41; // x20
  __int64 multipleViewManager; // x0
  const MethodInfo *v43; // x2
  MultipleViewListViewItem_o *Item; // x1
  MultipleViewListViewItem_o **p_item; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v47; // q1
  const MethodInfo *v48; // x1
  int32_t tabModeKind; // w8
  int32_t v50; // w0
  __int64 v51; // x1
  __int64 v52; // x2
  UserServantEntity_o *v53; // x21
  CommonUI_o *v54; // x20
  ServantStatusDialog_ResultDelegate_o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  struct MultipleViewListViewManager_o *v58; // x20
  MultipleViewListViewManager_CallbackFunc_o *v59; // x21
  const MethodInfo *v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  const MethodInfo *v63; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v65; // x22
  int32_t Index; // w0
  const MethodInfo *v67; // x1
  int32_t v68; // w21
  MultipleViewListViewManager_o *v69; // x20
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x1
  UILabel_o *infoLb; // x20
  const MethodInfo *v73; // x2
  int64_t v74; // x22
  struct UserServantEntity_o *v75; // x8
  __int128 v76; // q0
  __int64 v77; // x1
  __int64 v78; // x2
  MultipleViewComponent___c__DisplayClass37_1_o *v79; // x21
  const MethodInfo *v80; // x1
  struct MultipleViewComponent___c__DisplayClass37_0_o *CS___8__locals1; // x8
  struct MultipleViewListViewItem_o *v82; // x8
  struct UserServantEntity_o *v83; // x8
  __int128 v84; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v86; // x20
  __int64 v87; // x1
  __int64 v88; // x2
  System_Action_bool__int__o *v89; // x22
  const MethodInfo *v90; // x5
  UserServantEntity_o *Entity; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v92; // x22
  __int64 v93; // x23
  __int64 v94; // x24
  ServantEntity_o *v95; // x26
  System_String_o *v96; // x22
  System_String_o *v97; // x23
  System_Object_array *v98; // x24
  int32_t Rarity; // w27
  Il2CppObject *v100; // x27
  Il2CppObject *v101; // x27
  int32_t v102; // w0
  Il2CppObject *v103; // x25
  int32_t v104; // w0
  Il2CppObject *v105; // x25
  Il2CppObject *v106; // x25
  MultipleViewListViewItem_o *v107; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v108; // x9
  ServantEntity_o *servantEntity; // x21
  Il2CppObject *v110; // x21
  System_String_o *v111; // x21
  System_String_o *v112; // x23
  System_String_o *v113; // x24
  CommonUI_o *Instance; // x25
  __int64 v115; // x1
  __int64 v116; // x2
  CommonConfirmDialog_ClickDelegate_o *v117; // x26
  __int64 v118; // x0
  __int64 v119; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  if ( (byte_42123F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__int___ctor__, *(_QWORD *)&kind);
    sub_B0D8A4(&System_Action_bool__int__TypeInfo, v7);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v8);
    sub_B0D8A4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__FindIndex__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__set_Item__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__set_Item__, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&Method_MultipleViewComponent_CloseSvtDetail__, v21);
    sub_B0D8A4(&Method_MultipleViewComponent_OnClickServant__, v22);
    sub_B0D8A4(&object___TypeInfo, v23);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
    sub_B0D8A4(&Method_System_Predicate_long___ctor__, v26);
    sub_B0D8A4(&System_Predicate_long__TypeInfo, v27);
    sub_B0D8A4(&Rarity_TypeInfo, v28);
    sub_B0D8A4(&ServantStatusDialog_ResultDelegate_TypeInfo, v29);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30);
    sub_B0D8A4(&SoundManager_TypeInfo, v31);
    sub_B0D8A4(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__, v32);
    sub_B0D8A4(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__, v33);
    sub_B0D8A4(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo, v34);
    sub_B0D8A4(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__, v35);
    sub_B0D8A4(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v36);
    sub_B0D8A4(&StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v37);
    sub_B0D8A4(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v38);
    sub_B0D8A4(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v39);
    sub_B0D8A4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v40);
    byte_42123F2 = 1;
  }
  v41 = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_B0D974(
                                                           MultipleViewComponent___c__DisplayClass37_0_TypeInfo,
                                                           *(_QWORD *)&kind,
                                                           *(_QWORD *)&n);
  MultipleViewComponent___c__DisplayClass37_0___ctor(v41, 0LL);
  if ( !v41 )
    goto LABEL_133;
  v41->fields.__4__this = this;
  sub_B0D840(&v41->fields, this);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    multipleViewManager = (__int64)this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_133;
    Item = MultipleViewListViewManager__GetItem((MultipleViewListViewManager_o *)multipleViewManager, n, v43);
  }
  v41->fields.item = Item;
  p_item = &v41->fields.item;
  sub_B0D840(&v41->fields.item, Item);
  if ( !v41->fields.item )
    goto LABEL_133;
  userSvtEntity = v41->fields.item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_133;
  v47 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v123.fields.fakeValue = v47;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v122 = v123;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v122, 0LL);
  this->fields.usrSvtId = multipleViewManager;
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_item )
    {
      v53 = (*p_item)->fields.userSvtEntity;
      v54 = (CommonUI_o *)multipleViewManager;
      v55 = (ServantStatusDialog_ResultDelegate_o *)sub_B0D974(ServantStatusDialog_ResultDelegate_TypeInfo, v51, v52);
      ServantStatusDialog_ResultDelegate___ctor(
        v55,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0LL);
      if ( v54 )
      {
        CommonUI__OpenServantStatusDialog_17028192(v54, 0, v53, v55, 0, 0LL);
        return;
      }
    }
    goto LABEL_133;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*p_item )
      goto LABEL_133;
    (*p_item)->fields.isSwapChoice ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v50 = 0;
    goto LABEL_40;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*p_item )
      goto LABEL_133;
    (*p_item)->fields.isSwapLock ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v50 = 11;
    goto LABEL_40;
  }
  multipleViewManager = (__int64)*p_item;
  if ( !*p_item )
    goto LABEL_133;
  if ( tabModeKind != 3 )
  {
    if ( !MultipleViewListViewItem__get_IsCanNotSelect((MultipleViewListViewItem_o *)multipleViewManager, v48) )
    {
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      v65 = (System_Predicate_long__o *)sub_B0D974(System_Predicate_long__TypeInfo, v61, v62);
      System_Predicate_long____ctor(
        v65,
        (Il2CppObject *)v41,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        (const MethodInfo_2AF6D94 *)Method_System_Predicate_long___ctor__);
      if ( !listSelectedUsrSvtId )
        goto LABEL_133;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v65,
                (const MethodInfo_2FB6924 *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v68 = Index;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_133;
        System_Collections_Generic_List_long___set_Item(
          (System_Collections_Generic_List_long__o *)multipleViewManager,
          v68,
          0LL,
          (const MethodInfo_2FB5B70 *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_133;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v68,
          0,
          (const MethodInfo_2FAFBC0 *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_133;
        v69 = this->fields.multipleViewManager;
        multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                         (System_Collections_Generic_List_long__o *)multipleViewManager,
                                         (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v69 )
          goto LABEL_133;
        MultipleViewListViewManager__ModifyItem_20248720(v69, (System_Int64_array *)multipleViewManager, v70);
        MultipleViewComponent__SetConfirmButton(this, v71);
        goto LABEL_59;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v67) & 0x80000000) == 0 )
      {
        v79 = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_B0D974(
                                                                 MultipleViewComponent___c__DisplayClass37_1_TypeInfo,
                                                                 v77,
                                                                 v78);
        MultipleViewComponent___c__DisplayClass37_1___ctor(v79, 0LL);
        if ( v79 )
        {
          v79->fields.CS___8__locals1 = v41;
          sub_B0D840(&v79->fields.CS___8__locals1, v41);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v80);
          CS___8__locals1 = v79->fields.CS___8__locals1;
          v79->fields.selectIndex = multipleViewManager;
          if ( CS___8__locals1 )
          {
            v82 = CS___8__locals1->fields.item;
            if ( v82 )
            {
              v83 = v82->fields.userSvtEntity;
              if ( v83 )
              {
                v84 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v123.fields.fakeValue = v84;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v120 = v123;
                v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v120, 0LL);
                v89 = (System_Action_bool__int__o *)sub_B0D974(System_Action_bool__int__TypeInfo, v87, v88);
                System_Action_bool__int____ctor(
                  v89,
                  (Il2CppObject *)v79,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  (const MethodInfo_247A7A4 *)Method_System_Action_bool__int___ctor__);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v86, v89, v79->fields.selectIndex, v90);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_133;
      }
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
LABEL_59:
    infoLb = this->fields.infoLb;
    multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v63);
    if ( infoLb )
    {
      UILabel__set_text(infoLb, (System_String_o *)multipleViewManager, 0LL);
      goto LABEL_41;
    }
    goto LABEL_133;
  }
  if ( *(_QWORD *)(multipleViewManager + 112) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(multipleViewManager + 112), 0LL) )
      goto LABEL_36;
    multipleViewManager = (__int64)*p_item;
    if ( !*p_item )
      goto LABEL_133;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave((MultipleViewListViewItem_o *)multipleViewManager, v48) )
  {
LABEL_36:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v50 = 2;
LABEL_40:
    SoundManager__playSystemSe(v50, 0LL);
    goto LABEL_41;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !multipleViewManager )
    goto LABEL_133;
  v74 = *(_QWORD *)(multipleViewManager + 120);
  if ( !v74 )
  {
LABEL_72:
    MultipleViewComponent__PushRequest(this, *p_item, v73);
    goto LABEL_41;
  }
  if ( !*p_item )
    goto LABEL_133;
  v75 = (*p_item)->fields.userSvtEntity;
  if ( !v75 )
    goto LABEL_133;
  v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
  *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v123.fields.fakeValue = v76;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v121 = v123;
  if ( v74 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v121, 0LL) )
    goto LABEL_72;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  multipleViewManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_133;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)multipleViewManager,
             v74,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_133;
  v92 = (DataMasterBase_WarMaster__WarEntity__int__o *)multipleViewManager;
  v94 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v93 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v124.fields.currentCryptoKey = v94;
  *(_QWORD *)&v124.fields.fakeValue = v93;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v124, 0LL);
  if ( !v92 )
    goto LABEL_133;
  v95 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v92,
                             multipleViewManager,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v98 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  multipleViewManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v98 )
LABEL_133:
    sub_B0D97C(multipleViewManager);
  v100 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B0D964(multipleViewManager, v98->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( !v98->max_length )
    goto LABEL_134;
  v98->m_Items[0] = v100;
  sub_B0D840(v98->m_Items, v100);
  if ( !v95 )
    goto LABEL_133;
  multipleViewManager = (__int64)ServantEntity__getClassName(v95, 0LL);
  v101 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B0D964(multipleViewManager, v98->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v98->max_length <= 1 )
    goto LABEL_134;
  v98->m_Items[1] = v101;
  sub_B0D840(&v98->m_Items[1], v101);
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(Entity->fields.limitCount, 0LL);
  multipleViewManager = (__int64)ServantEntity__getName(v95, v102, -1, 0LL);
  v103 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B0D964(multipleViewManager, v98->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v98->max_length <= 2 )
    goto LABEL_134;
  v98->m_Items[2] = v103;
  sub_B0D840(&v98->m_Items[2], v103);
  if ( !*p_item )
    goto LABEL_133;
  multipleViewManager = (__int64)(*p_item)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_133;
  v104 = UserServantEntity__getRarity((UserServantEntity_o *)multipleViewManager, 0LL);
  multipleViewManager = (__int64)Rarity__getRarityType(v104, 0LL);
  v105 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B0D964(multipleViewManager, v98->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v98->max_length <= 3 )
    goto LABEL_134;
  v98->m_Items[3] = v105;
  sub_B0D840(&v98->m_Items[3], v105);
  if ( !*p_item )
    goto LABEL_133;
  multipleViewManager = (__int64)(*p_item)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_133;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0LL);
  v106 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B0D964(multipleViewManager, v98->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v98->max_length <= 4 )
    goto LABEL_134;
  v98->m_Items[4] = v106;
  sub_B0D840(&v98->m_Items[4], v106);
  v107 = *p_item;
  if ( !*p_item )
    goto LABEL_133;
  v108 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v107->fields.userSvtEntity;
  if ( !v108 )
    goto LABEL_133;
  servantEntity = v107->fields.servantEntity;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v108[6], 0LL);
  if ( !servantEntity )
    goto LABEL_133;
  multipleViewManager = (__int64)ServantEntity__getName(servantEntity, multipleViewManager, -1, 0LL);
  v110 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B0D964(multipleViewManager, v98->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_135:
      v119 = sub_B0D99C();
      sub_B0D948(v119, 0LL);
    }
  }
  if ( v98->max_length <= 5 )
  {
LABEL_134:
    v118 = sub_B0D9A8(multipleViewManager);
    sub_B0D948(v118, 0LL);
  }
  v98->m_Items[5] = v110;
  sub_B0D840(&v98->m_Items[5], v110);
  v111 = System_String__Format_43928628(v97, v98, 0LL);
  v112 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v117 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v115, v116);
  CommonConfirmDialog_ClickDelegate___ctor(
    v117,
    (Il2CppObject *)v41,
    Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__,
    0LL);
  multipleViewManager = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_133;
  CommonUI__OpenConfirmDialog_17016196(
    Instance,
    v96,
    v111,
    v112,
    v113,
    v117,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_41:
  v58 = this->fields.multipleViewManager;
  v59 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B0D974(
                                                        MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                        v56,
                                                        v57);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v59,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !v58 )
    goto LABEL_133;
  v58->fields.callbackFunc = v59;
  sub_B0D840(&v58->fields.callbackFunc, v59);
  MultipleViewListViewManager__SetMode_20252560(v58, 2, v60);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x21
  System_Collections_Generic_IEnumerable_T__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x22
  int64_t gameObject; // x0
  UnityEngine_GameObject_o *v24; // x20
  MultipleViewComponent_o *v25; // x0
  const MethodInfo *v26; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v28; // x20
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  struct MultipleViewListViewManager_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  MultipleViewListViewManager_CallbackFunc_o *v34; // x21
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1

  if ( (byte_42123ED & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isResetSelected);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&long___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor___67885136, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&Method_MultipleViewComponent_OnClickServant__, v12);
    sub_B0D8A4(&MyRoomControl_TypeInfo, v13);
    byte_42123ED = 1;
  }
  if ( isResetSelected )
  {
    v14 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v14 = MyRoomControl_TypeInfo;
    }
    v15 = (System_Collections_Generic_IEnumerable_T__o *)sub_B0D8BC(
                                                           long___TypeInfo,
                                                           (unsigned int)v14->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v18 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v16,
                                                       v17);
    System_Collections_Generic_List_long____ctor_50025292(
      v18,
      v15,
      (const MethodInfo_2FB534C *)Method_System_Collections_Generic_List_long___ctor___67885136);
    this->fields.listSelectedUsrSvtId = v18;
    sub_B0D840(&this->fields.listSelectedUsrSvtId, v18);
    v19 = (System_Collections_Generic_IEnumerable_T__o *)sub_B0D8BC(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v22 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v20, v21);
    System_Collections_Generic_List_int____ctor_50000796(
      v22,
      v19,
      (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
    this->fields.listSelectedImageLimitCount = v22;
    sub_B0D840(&this->fields.listSelectedImageLimitCount, v22);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B0D840(&this->fields.cancelCallback, 0LL);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v24 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v24, gameObject & 1, 0LL);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v25, v26);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_16;
  multipleViewManager = this->fields.multipleViewManager;
  v28 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v28, (System_Int64_array *)gameObject, v29),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v30),
        v31 = this->fields.multipleViewManager,
        v34 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                              v32,
                                                              v33),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v34,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v31) )
  {
LABEL_16:
    sub_B0D97C(gameObject);
  }
  v31->fields.callbackFunc = v34;
  sub_B0D840(&v31->fields.callbackFunc, v34);
  MultipleViewListViewManager__SetMode_20252560(v31, 2, v35);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v36);
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
  CommonUI_o *v14; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q1
  UserServantEntity_Fields *p_fields; // x24
  struct UnityEngine_Transform_o *baseMount; // x8
  int64_t v24; // x0
  __int128 v25; // q0
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v30; // q0
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w21
  bool IsLock; // w23
  char v36; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t v43; // [xsp+50h] [xbp-110h]
  int32_t v44; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct SoundInfo_o *soundInfo; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct UnityEngine_Transform_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_42123F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_MultipleViewComponent_EndePushRequest__, v6);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_42123F3 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_23;
  v14 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v14 || !userSvtEntity )
    goto LABEL_23;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
  if ( !v16 )
    goto LABEL_23;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  baseMount = v14->fields.baseMount;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = baseMount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v52, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v14->fields.soundInfo;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v28,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v50, 0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.imageLimitCount, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_23;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v55.fields.currentCryptoKey = v41;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
  if ( !v31 )
LABEL_23:
    sub_B0D97C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    v44,
    v43,
    v32,
    v33,
    v34,
    soundInfo == (struct SoundInfo_o *)v46,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct UnityEngine_Transform_o *)v48,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__SetConfirmButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  UIButtonColor_o *v3; // x20
  struct UIButtonColor_o *v4; // x0
  int v5; // s0
  UIButtonColor_c *klass; // x8
  UIButtonColor_o *confirmBtnColor; // x20
  int v11; // s0

  if ( !this->fields.tabModeKind && (MultipleViewComponent__GetCurrentSelectIndex(this, method) & 0x80000000) != 0 )
  {
    confirmBtnColor = this->fields.confirmBtnColor;
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( confirmBtnColor )
    {
      UIButtonColor__set_defaultColor(confirmBtnColor, *(UnityEngine_Color_o *)&v11, 0LL);
      v4 = this->fields.confirmBtnColor;
      if ( v4 )
      {
        ((void (__fastcall *)(struct UIButtonColor_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._5_set_isEnabled.method)(
          v4,
          1LL,
          v4->klass->vtable._6_OnInit.methodPtr);
        v4 = this->fields.confirmBtnColor;
        if ( v4 )
        {
          klass = v4->klass;
          goto LABEL_7;
        }
      }
    }
LABEL_12:
    sub_B0D97C(v4);
  }
  v3 = this->fields.confirmBtnColor;
  *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_grey(0LL);
  if ( !v3 )
    goto LABEL_12;
  UIButtonColor__set_defaultColor(v3, *(UnityEngine_Color_o *)&v5, 0LL);
  v4 = this->fields.confirmBtnColor;
  if ( !v4 )
    goto LABEL_12;
  ((void (__fastcall *)(struct UIButtonColor_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._5_set_isEnabled.method)(
    v4,
    0LL,
    v4->klass->vtable._6_OnInit.methodPtr);
  v4 = this->fields.confirmBtnColor;
  if ( !v4 )
    goto LABEL_12;
  klass = v4->klass;
LABEL_7:
  ((void (*)(void))klass->vtable._14_SetState.method)();
}


void __fastcall MultipleViewComponent__SetLatestSelectedUsrSvtId(
        MultipleViewComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = usrSvtId;
  if ( (byte_42123EF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9257/*"MultipleViewSelectedUsrSvtId"*/, usrSvtId);
    byte_42123EF = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9257/*"MultipleViewSelectedUsrSvtId"*/, v3, 0LL);
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
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UILabel_o *infoLb; // x21
  struct MultipleViewListViewManager_o *multipleViewManager; // x8
  struct MultipleViewListViewManager_o **p_multipleViewManager; // x21
  UILabel_o *v26; // x21
  __int64 *v27; // x8
  struct MultipleViewListViewManager_o *v28; // x8
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1

  if ( (byte_42123FA & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B0D8A4(&StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_B0D8A4(&StringLiteral_17189/*"button_push_reg"*/, v6);
    sub_B0D8A4(&StringLiteral_17190/*"button_push_unreg"*/, v7);
    sub_B0D8A4(&StringLiteral_17175/*"button_allchoice_reg"*/, v8);
    sub_B0D8A4(&StringLiteral_17178/*"button_alllock_unreg"*/, v9);
    sub_B0D8A4(&StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_B0D8A4(&StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_B0D8A4(&StringLiteral_17191/*"button_select_reg"*/, v12);
    sub_B0D8A4(&StringLiteral_17192/*"button_select_unreg"*/, v13);
    sub_B0D8A4(&StringLiteral_17177/*"button_alllock_reg"*/, v14);
    sub_B0D8A4(&StringLiteral_17176/*"button_allchoice_unreg"*/, v15);
    byte_42123FA = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v17 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17192/*"button_select_unreg"*/ : &StringLiteral_17191/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v17, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v18 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17177/*"button_alllock_reg"*/ : &StringLiteral_17178/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v18, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v19 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17175/*"button_allchoice_reg"*/ : &StringLiteral_17176/*"button_allchoice_unreg"*/);
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
LABEL_51:
      sub_B0D97C(normalTabButton);
    }
    if ( this->fields.tabModeKind == 3 )
      v20 = &StringLiteral_17189/*"button_push_reg"*/;
    else
      v20 = &StringLiteral_17190/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v20, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        normalTabButton = (UnityEngine_Behaviour_o *)MultipleViewComponent__GetTitleMessage(this, v21);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        p_multipleViewManager = &this->fields.multipleViewManager;
        multipleViewManager = this->fields.multipleViewManager;
        if ( !multipleViewManager )
          goto LABEL_51;
        multipleViewManager->fields.isCanNotLongPush = 0;
        goto LABEL_48;
      case 1:
        v26 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = &StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_44;
      case 2:
        v26 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = &StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_44;
      case 3:
        v26 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = &StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_44:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
        if ( !v26 )
          goto LABEL_51;
        UILabel__set_text(v26, (System_String_o *)normalTabButton, 0LL);
        p_multipleViewManager = &this->fields.multipleViewManager;
        v28 = this->fields.multipleViewManager;
        if ( !v28 )
          goto LABEL_51;
        v28->fields.isCanNotLongPush = 1;
LABEL_48:
        normalTabButton = (UnityEngine_Behaviour_o *)*p_multipleViewManager;
        if ( !*p_multipleViewManager )
          goto LABEL_51;
        MultipleViewListViewManager__UpdateDisplayState(
          (MultipleViewListViewManager_o *)normalTabButton,
          modeKind == 3,
          v22);
        normalTabButton = (UnityEngine_Behaviour_o *)*p_multipleViewManager;
        if ( !*p_multipleViewManager )
          goto LABEL_51;
        MultipleViewListViewManager__SetMode_20252560((MultipleViewListViewManager_o *)normalTabButton, 2, v29);
        MultipleViewComponent__SetConfirmButton(this, v30);
        break;
      default:
        p_multipleViewManager = &this->fields.multipleViewManager;
        goto LABEL_48;
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
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x2
  System_Int64_array *v15; // x1
  bool v16; // w4
  bool v17; // w5
  __int64 v18; // x1
  __int64 v19; // x2
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42123FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_MultipleViewComponent_EndStatusSync__, callback);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_42123FB = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_23;
    if ( MultipleViewListViewManager__GetSwapChoiceList(multipleViewManager, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B0D840(&this->fields.requedstCallback, callback);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v20,
                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v14 = unchoiceList;
        v15 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B0D97C(multipleViewManager);
    }
  }
  else if ( tabModeKind == 1 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_23;
    if ( MultipleViewListViewManager__GetSwapLockList(multipleViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B0D840(&this->fields.requedstCallback, callback);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v13,
                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v14 = unlockList;
        v15 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v15, v14, 0, v16, v17, 0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    MultipleViewComponent_RequestCallbackFunc__Invoke(callback, 0, 0LL);
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
    sub_B0D97C(multipleViewManager);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MultipleViewComponent_RequestCallbackFunc__BeginInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_4212752 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isRequest);
    byte_4212752 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent_RequestCallbackFunc__Invoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  MultipleViewComponent_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  MultipleViewComponent_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  MultipleViewComponent_RequestCallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (MultipleViewComponent_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
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
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_421274E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__, v6);
    byte_421274E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B0D840(&this->fields.__9__1, _9__1);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_17017160(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(Instance);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__1(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  MultipleViewComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  MultipleViewComponent__PushRequest(_4__this, this->fields.item, 0LL);
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
  if ( (byte_421274F & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_B0D8A4(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              id);
    byte_421274F = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_B0D97C(this);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v9, 0LL) == id;
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
  struct MultipleViewComponent___c__DisplayClass37_0_o *v24; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v25; // x8
  struct MultipleViewComponent_o *v26; // x22
  MultipleViewListViewManager_o *v27; // x20
  __int64 v28; // x21
  __int64 v29; // x9
  struct MultipleViewComponent___c__DisplayClass37_0_o *v30; // x8
  UILabel_o *v31; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_4212750 & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__set_Item__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__set_Item__, v9);
    sub_B0D8A4(&Method_MultipleViewComponent_OnClickServant__, v10);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_B0D8A4(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              v11);
    byte_4212750 = 1;
  }
  if ( result )
  {
    CS___8__locals1 = v6->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_29;
    _4__this = CS___8__locals1->fields.__4__this;
    if ( !_4__this )
      goto LABEL_29;
    item = CS___8__locals1->fields.item;
    if ( !item )
      goto LABEL_29;
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    listSelectedUsrSvtId = _4__this->fields.listSelectedUsrSvtId;
    v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    selectIndex = v6->fields.selectIndex;
    *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v33.fields.fakeValue = v17;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v32 = v33;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                              &v32,
                                                              0LL);
    if ( !listSelectedUsrSvtId )
      goto LABEL_29;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_2FB5B70 *)Method_System_Collections_Generic_List_long__set_Item__);
    v19 = v6->fields.CS___8__locals1;
    if ( !v19 )
      goto LABEL_29;
    v20 = v19->fields.__4__this;
    if ( !v20 )
      goto LABEL_29;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)v20->fields.listSelectedImageLimitCount;
    if ( !this )
      goto LABEL_29;
    System_Collections_Generic_List_int___set_Item(
      (System_Collections_Generic_List_int__o *)this,
      v6->fields.selectIndex,
      imageLimitCount,
      (const MethodInfo_2FAFBC0 *)Method_System_Collections_Generic_List_int__set_Item__);
    v21 = v6->fields.CS___8__locals1;
    if ( !v21
      || (v22 = v21->fields.__4__this) == 0LL
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v22->fields.listSelectedUsrSvtId) == 0LL
      || (multipleViewManager = v22->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_20248720(multipleViewManager, (System_Int64_array *)this, 0LL),
          (v24 = v6->fields.CS___8__locals1) == 0LL)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v24->fields.__4__this) == 0LL )
    {
LABEL_29:
      sub_B0D97C(this);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, 0LL);
  }
  v25 = v6->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_29;
  v26 = v25->fields.__4__this;
  if ( !v26 )
    goto LABEL_29;
  v27 = v26->fields.multipleViewManager;
  v28 = sub_B0D974(MultipleViewListViewManager_CallbackFunc_TypeInfo, result, *(_QWORD *)&imageLimitCount);
  v29 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v28 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v28 + 16) = v29;
  *(_QWORD *)(v28 + 32) = v26;
  sub_B0D840(v28 + 32, v26);
  if ( !v27 )
    goto LABEL_29;
  MultipleViewListViewManager__SetMode(v27, 2, (MultipleViewListViewManager_CallbackFunc_o *)v28, 0LL);
  v30 = v6->fields.CS___8__locals1;
  if ( !v30 )
    goto LABEL_29;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)v30->fields.__4__this;
  if ( !this )
    goto LABEL_29;
  v31 = *(UILabel_o **)&this[1].fields.selectIndex;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)MultipleViewComponent__GetTitleMessage(
                                                            (MultipleViewComponent_o *)this,
                                                            0LL);
  if ( !v31 )
    goto LABEL_29;
  UILabel__set_text(v31, (System_String_o *)this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  MultipleViewComponent_o *_4__this; // x0
  struct MultipleViewComponent_o *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  struct MultipleViewComponent_o *v9; // x8
  struct MultipleViewComponent_o *v10; // x20
  MultipleViewListViewManager_o *multipleViewManager; // x19
  __int64 v12; // x21
  __int64 v13; // x9

  if ( (byte_4212751 & 1) == 0 )
  {
    sub_B0D8A4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_MultipleViewComponent_OnClickServant__, v3);
    sub_B0D8A4(&StringLiteral_3055/*"CLICK_BACK"*/, v4);
    byte_4212751 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    MultipleViewComponent__Init(_4__this, 0LL);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = (MultipleViewComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)_4__this,
                                              0LL);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
        v6 = this->fields.__4__this;
        if ( v6 )
        {
          _4__this = (MultipleViewComponent_o *)v6->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3055/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B0D97C(_4__this);
  }
  if ( !_4__this->fields.multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_18;
    _4__this = (MultipleViewComponent_o *)v9->fields.multipleViewManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_18;
  multipleViewManager = v10->fields.multipleViewManager;
  v12 = sub_B0D974(MultipleViewListViewManager_CallbackFunc_TypeInfo, v7, v8);
  v13 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v12 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v12 + 16) = v13;
  *(_QWORD *)(v12 + 32) = v10;
  sub_B0D840(v12 + 32, v10);
  if ( !multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__SetMode(multipleViewManager, 2, (MultipleViewListViewManager_CallbackFunc_o *)v12, 0LL);
}