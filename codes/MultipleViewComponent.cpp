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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Collections_Generic_List_int__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4185C17 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&long___TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor___67311576, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B2C35C(&MyRoomControl_TypeInfo, v8);
    byte_4185C17 = 1;
  }
  v9 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v9 = MyRoomControl_TypeInfo;
  }
  v10 = (System_Collections_Generic_IEnumerable_T__o *)sub_B2C374(
                                                         long___TypeInfo,
                                                         (unsigned int)v9->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v11 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_49726532(
    v11,
    v10,
    (const MethodInfo_2F6C444 *)Method_System_Collections_Generic_List_long___ctor___67311576);
  this->fields.listSelectedUsrSvtId = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listSelectedUsrSvtId,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)sub_B2C374(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v19,
    v18,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  this->fields.listSelectedImageLimitCount = v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listSelectedImageLimitCount,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MultipleViewComponent__CancelMultipleViewWindow(
        MultipleViewComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  MultipleViewComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4185C07 & 1) == 0 )
  {
    sub_B2C35C(&Method_MultipleViewComponent_EndCancelButton__, callback);
    sub_B2C35C(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v10);
    byte_4185C07 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B2C42C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    0LL);
  MultipleViewComponent__StatusRequest(this, v11, v12);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v21; // x20

  if ( (byte_4185C0C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v9);
    sub_B2C35C(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_4185C0C = 1;
  }
  v11 = sub_B2C42C(MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
  MultipleViewComponent___c__DisplayClass40_0___ctor((MultipleViewComponent___c__DisplayClass40_0_o *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v11 + 24),
          (System_Int32_array **)this,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v11,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v12, v13);
  }
  CommonUI__CloseServantStatusDialog(Instance, v21, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4185C08 & 1) == 0 )
  {
    sub_B2C35C(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_B2C35C(&Method_MultipleViewComponent_OnClickServant__, v5);
    byte_4185C08 = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, method),
          v7 = this->fields.multipleViewManager,
          v8 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B2C42C(MultipleViewListViewManager_CallbackFunc_TypeInfo),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_B2C434(multipleViewManager, isRequest);
    }
    v7->fields.callbackFunc = v8;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    MultipleViewListViewManager__SetMode_21370756(v7, 2, v15);
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
      sub_B2C434(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_21370756(multipleViewManager, 2, v5);
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
      sub_B2C434(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_21370756(multipleViewManager, 2, v5);
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
      sub_B2C434(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_21370756(multipleViewManager, 2, v5);
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
      sub_B2C434(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_21370756(multipleViewManager, 2, v5);
  }
  MultipleViewComponent__SetModeTabKind(this, 3, method);
}


void __fastcall MultipleViewComponent__EndStatusSync(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_requedstCallback; // x0
  MultipleViewComponent_RequestCallbackFunc_o *v9; // x19
  struct MultipleViewComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (BattleServantConfConponent_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_B2C2F8(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MultipleViewComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4185C0B & 1) == 0 )
  {
    sub_B2C35C(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_MultipleViewComponent_OnClickServant__, v4);
    byte_4185C0B = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, method),
        (multipleViewManager = this->fields.multipleViewManager) == 0LL)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, v6),
        v7 = this->fields.multipleViewManager,
        v8 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B2C42C(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v7) )
  {
    sub_B2C434(multipleViewManager, result);
  }
  v7->fields.callbackFunc = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  MultipleViewListViewManager__SetMode_21370756(v7, 2, v15);
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
  if ( (byte_4185C15 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, method);
    this = (MultipleViewComponent_o *)sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    byte_4185C15 = 1;
  }
  listSelectedUsrSvtId = v2->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_10:
    sub_B2C434(this, method);
  v5 = 0LL;
  while ( 1 )
  {
    size = listSelectedUsrSvtId->fields._size;
    if ( (int)v5 >= size )
      break;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_4185C05 & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9234/*"MultipleViewSelectedUsrSvtId"*/, v2);
    byte_4185C05 = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9234/*"MultipleViewSelectedUsrSvtId"*/,
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

  if ( (byte_4185C16 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_7034/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v3);
    sub_B2C35C(&StringLiteral_7035/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, v4);
    byte_4185C16 = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( (CurrentSelectIndex & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = (System_String_o *)StringLiteral_7035/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v5 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0LL);
    v6 = System_String__Concat_44305532((System_String_o *)StringLiteral_7034/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v5, 0LL);
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
    sub_B2C434(multipleViewManager, method);
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
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4185C0F & 1) == 0 )
  {
    sub_B2C35C(&Method_MultipleViewComponent_EndClickTabChoice__, method);
    sub_B2C35C(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185C0F = 1;
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
        v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B2C42C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B2C42C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v9, v10);
    }
    MultipleViewComponent__SetModeTabKind(this, 2, v5);
  }
}


void __fastcall MultipleViewComponent__OnClickDecide(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MultipleViewComponent_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x20
  int32_t size; // w8
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v14; // x19
  const MethodInfo *v15; // x3

  if ( (byte_4185C14 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4185C14 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(v7, listSelectedUsrSvtId->fields._items->m_Items[size - 1], v9);
      v7 = (MultipleViewComponent_o *)this->fields.listSelectedUsrSvtId;
      if ( !v7
        || (myRoomControl = this->fields.myRoomControl,
            v7 = (MultipleViewComponent_o *)System_Collections_Generic_List_long___ToArray(
                                              (System_Collections_Generic_List_long__o *)v7,
                                              (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0LL)
        || (v14 = (System_Int64_array *)v7,
            v7 = (MultipleViewComponent_o *)System_Collections_Generic_List_int___ToArray(
                                              listSelectedImageLimitCount,
                                              (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_21:
        sub_B2C434(v7, v8);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v14, (System_Int32_array *)v7, v15);
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
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4185C0E & 1) == 0 )
  {
    sub_B2C35C(&Method_MultipleViewComponent_EndClickTabLock__, method);
    sub_B2C35C(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185C0E = 1;
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
        v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B2C42C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B2C42C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v9, v10);
    }
    MultipleViewComponent__SetModeTabKind(this, 1, v5);
  }
}


void __fastcall MultipleViewComponent__OnClickNormalTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MultipleViewComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4185C0D & 1) == 0 )
  {
    sub_B2C35C(&Method_MultipleViewComponent_EndClickTabNormal__, method);
    sub_B2C35C(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185C0D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B2C42C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v5, v6);
  }
}


void __fastcall MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MultipleViewComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4185C10 & 1) == 0 )
  {
    sub_B2C35C(&Method_MultipleViewComponent_EndClickTabPush__, method);
    sub_B2C35C(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185C10 = 1;
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
    v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B2C42C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v5, v6);
  }
}


void __fastcall MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4185C13 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185C13 = 1;
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
      sub_B2C434(0LL, v3);
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
  __int64 v41; // x20
  __int64 multipleViewManager; // x0
  const MethodInfo *v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  MethodInfo *v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **Item; // x1
  MultipleViewListViewItem_o **v57; // x21
  __int64 v58; // x8
  __int128 v59; // q1
  int32_t tabModeKind; // w8
  int32_t v61; // w0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v63; // x20
  ServantStatusDialog_ResultDelegate_o *v64; // x22
  struct MultipleViewListViewManager_o *v65; // x20
  MultipleViewListViewManager_CallbackFunc_o *v66; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v76; // x22
  int32_t Index; // w0
  const MethodInfo *v78; // x1
  int32_t v79; // w21
  MultipleViewListViewManager_o *v80; // x20
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x1
  UILabel_o *infoLb; // x20
  const MethodInfo *v84; // x2
  int64_t v85; // x22
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q0
  __int64 v88; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  const MethodInfo *v95; // x1
  __int64 v96; // x8
  __int64 v97; // x8
  __int64 v98; // x8
  __int128 v99; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v101; // x20
  System_Action_bool__int__o *v102; // x22
  const MethodInfo *v103; // x5
  UserServantEntity_o *Entity; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v105; // x22
  __int64 v106; // x23
  __int64 v107; // x24
  ServantEntity_o *v108; // x26
  System_String_o *v109; // x22
  System_String_o *v110; // x23
  System_Object_array *v111; // x24
  int32_t Rarity; // w27
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x27
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x27
  int32_t v127; // w0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x25
  int32_t v135; // w0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x25
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array **v149; // x25
  MultipleViewListViewItem_o *v150; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v151; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x21
  System_String_o *v160; // x21
  System_String_o *v161; // x23
  System_String_o *v162; // x24
  CommonUI_o *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v164; // x26
  __int64 v165; // x0
  __int64 v166; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16

  if ( (byte_4185C09 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__int___ctor__, *(_QWORD *)&kind);
    sub_B2C35C(&System_Action_bool__int__TypeInfo, v7);
    sub_B2C35C(&BalanceConfig_TypeInfo, v8);
    sub_B2C35C(&MultipleViewListViewManager_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__FindIndex__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__set_Item__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__set_Item__, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&Method_MultipleViewComponent_CloseSvtDetail__, v21);
    sub_B2C35C(&Method_MultipleViewComponent_OnClickServant__, v22);
    sub_B2C35C(&object___TypeInfo, v23);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
    sub_B2C35C(&Method_System_Predicate_long___ctor__, v26);
    sub_B2C35C(&System_Predicate_long__TypeInfo, v27);
    sub_B2C35C(&Rarity_TypeInfo, v28);
    sub_B2C35C(&ServantStatusDialog_ResultDelegate_TypeInfo, v29);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30);
    sub_B2C35C(&SoundManager_TypeInfo, v31);
    sub_B2C35C(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__, v32);
    sub_B2C35C(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__, v33);
    sub_B2C35C(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo, v34);
    sub_B2C35C(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__, v35);
    sub_B2C35C(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v36);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v37);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v38);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v39);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v40);
    byte_4185C09 = 1;
  }
  v41 = sub_B2C42C(MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
  MultipleViewComponent___c__DisplayClass37_0___ctor((MultipleViewComponent___c__DisplayClass37_0_o *)v41, 0LL);
  if ( !v41 )
    goto LABEL_133;
  *(_QWORD *)(v41 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 16), (System_Int32_array **)this, v44, v45, v46, v47, v48, v49);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    multipleViewManager = (__int64)this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_133;
    Item = (System_Int32_array **)MultipleViewListViewManager__GetItem(
                                    (MultipleViewListViewManager_o *)multipleViewManager,
                                    n,
                                    v50);
  }
  *(_QWORD *)(v41 + 24) = Item;
  v57 = (MultipleViewListViewItem_o **)(v41 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 24), Item, (System_String_array **)v50, v51, v52, v53, v54, v55);
  if ( !*(_QWORD *)(v41 + 24) )
    goto LABEL_133;
  v58 = *(_QWORD *)(*(_QWORD *)(v41 + 24) + 112LL);
  if ( !v58 )
    goto LABEL_133;
  v59 = *(_OWORD *)(v58 + 32);
  *(_OWORD *)&v170.fields.currentCryptoKey = *(_OWORD *)(v58 + 16);
  *(_OWORD *)&v170.fields.fakeValue = v59;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v169 = v170;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v169, 0LL);
  this->fields.usrSvtId = multipleViewManager;
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v57 )
    {
      userSvtEntity = (*v57)->fields.userSvtEntity;
      v63 = (CommonUI_o *)multipleViewManager;
      v64 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v64,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0LL);
      if ( v63 )
      {
        CommonUI__OpenServantStatusDialog_17982572(v63, 0, userSvtEntity, v64, 0LL);
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
    if ( !*v57 )
      goto LABEL_133;
    (*v57)->fields.isSwapChoice ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v61 = 0;
    goto LABEL_40;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v57 )
      goto LABEL_133;
    (*v57)->fields.isSwapLock ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v61 = 11;
    goto LABEL_40;
  }
  multipleViewManager = (__int64)*v57;
  if ( !*v57 )
    goto LABEL_133;
  if ( tabModeKind != 3 )
  {
    if ( !MultipleViewListViewItem__get_IsCanNotSelect((MultipleViewListViewItem_o *)multipleViewManager, v43) )
    {
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      v76 = (System_Predicate_long__o *)sub_B2C42C(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v76,
        (Il2CppObject *)v41,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        (const MethodInfo_2951B48 *)Method_System_Predicate_long___ctor__);
      if ( !listSelectedUsrSvtId )
        goto LABEL_133;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v76,
                (const MethodInfo_2F6DA1C *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v79 = Index;
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
          v79,
          0LL,
          (const MethodInfo_2F6CC68 *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_133;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v79,
          0,
          (const MethodInfo_2F66CB8 *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_133;
        v80 = this->fields.multipleViewManager;
        multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                         (System_Collections_Generic_List_long__o *)multipleViewManager,
                                         (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v80 )
          goto LABEL_133;
        MultipleViewListViewManager__ModifyItem_21366916(v80, (System_Int64_array *)multipleViewManager, v81);
        MultipleViewComponent__SetConfirmButton(this, v82);
        goto LABEL_59;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v78) & 0x80000000) == 0 )
      {
        v88 = sub_B2C42C(MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
        MultipleViewComponent___c__DisplayClass37_1___ctor((MultipleViewComponent___c__DisplayClass37_1_o *)v88, 0LL);
        if ( v88 )
        {
          *(_QWORD *)(v88 + 24) = v41;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v88 + 24),
            (System_Int32_array **)v41,
            v89,
            v90,
            v91,
            v92,
            v93,
            v94);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v95);
          v96 = *(_QWORD *)(v88 + 24);
          *(_DWORD *)(v88 + 16) = multipleViewManager;
          if ( v96 )
          {
            v97 = *(_QWORD *)(v96 + 24);
            if ( v97 )
            {
              v98 = *(_QWORD *)(v97 + 112);
              if ( v98 )
              {
                v99 = *(_OWORD *)(v98 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v170.fields.currentCryptoKey = *(_OWORD *)(v98 + 16);
                *(_OWORD *)&v170.fields.fakeValue = v99;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v167 = v170;
                v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v167, 0LL);
                v102 = (System_Action_bool__int__o *)sub_B2C42C(System_Action_bool__int__TypeInfo);
                System_Action_bool__int____ctor(
                  v102,
                  (Il2CppObject *)v88,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  (const MethodInfo_24C7840 *)Method_System_Action_bool__int___ctor__);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v101, v102, *(_DWORD *)(v88 + 16), v103);
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
    multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v74);
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
    multipleViewManager = (__int64)*v57;
    if ( !*v57 )
      goto LABEL_133;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave((MultipleViewListViewItem_o *)multipleViewManager, v43) )
  {
LABEL_36:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v61 = 2;
LABEL_40:
    SoundManager__playSystemSe(v61, 0LL);
    goto LABEL_41;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !multipleViewManager )
    goto LABEL_133;
  v85 = *(_QWORD *)(multipleViewManager + 120);
  if ( !v85 )
  {
LABEL_72:
    MultipleViewComponent__PushRequest(this, *v57, v84);
    goto LABEL_41;
  }
  if ( !*v57 )
    goto LABEL_133;
  v86 = (*v57)->fields.userSvtEntity;
  if ( !v86 )
    goto LABEL_133;
  v87 = *(_OWORD *)&v86->fields.id.fields.fakeValue;
  *(_OWORD *)&v170.fields.currentCryptoKey = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v170.fields.fakeValue = v87;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v168 = v170;
  if ( v85 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v168, 0LL) )
    goto LABEL_72;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  multipleViewManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_133;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)multipleViewManager,
             v85,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_133;
  v105 = (DataMasterBase_WarMaster__WarEntity__int__o *)multipleViewManager;
  v107 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v106 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v171.fields.currentCryptoKey = v107;
  *(_QWORD *)&v171.fields.fakeValue = v106;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v171, 0LL);
  if ( !v105 )
    goto LABEL_133;
  v108 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v105,
                              multipleViewManager,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v110 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v111 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  multipleViewManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v111 )
LABEL_133:
    sub_B2C434(multipleViewManager, v43);
  v119 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B2C41C(multipleViewManager, v111->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( !v111->max_length )
    goto LABEL_134;
  v111->m_Items[0] = (Il2CppObject *)v119;
  sub_B2C2F8((BattleServantConfConponent_o *)v111->m_Items, v119, v113, v114, v115, v116, v117, v118);
  if ( !v108 )
    goto LABEL_133;
  multipleViewManager = (__int64)ServantEntity__getClassName(v108, 0LL);
  v126 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B2C41C(multipleViewManager, v111->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v111->max_length <= 1 )
    goto LABEL_134;
  v111->m_Items[1] = (Il2CppObject *)v126;
  sub_B2C2F8((BattleServantConfConponent_o *)&v111->m_Items[1], v126, v120, v121, v122, v123, v124, v125);
  v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.limitCount, 0LL);
  multipleViewManager = (__int64)ServantEntity__getName(v108, v127, -1, 0LL);
  v134 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B2C41C(multipleViewManager, v111->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v111->max_length <= 2 )
    goto LABEL_134;
  v111->m_Items[2] = (Il2CppObject *)v134;
  sub_B2C2F8((BattleServantConfConponent_o *)&v111->m_Items[2], v134, v128, v129, v130, v131, v132, v133);
  if ( !*v57 )
    goto LABEL_133;
  multipleViewManager = (__int64)(*v57)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_133;
  v135 = UserServantEntity__getRarity((UserServantEntity_o *)multipleViewManager, 0LL);
  multipleViewManager = (__int64)Rarity__getRarityType(v135, 0LL);
  v142 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B2C41C(multipleViewManager, v111->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v111->max_length <= 3 )
    goto LABEL_134;
  v111->m_Items[3] = (Il2CppObject *)v142;
  sub_B2C2F8((BattleServantConfConponent_o *)&v111->m_Items[3], v142, v136, v137, v138, v139, v140, v141);
  if ( !*v57 )
    goto LABEL_133;
  multipleViewManager = (__int64)(*v57)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_133;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0LL);
  v149 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B2C41C(multipleViewManager, v111->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v111->max_length <= 4 )
    goto LABEL_134;
  v111->m_Items[4] = (Il2CppObject *)v149;
  sub_B2C2F8((BattleServantConfConponent_o *)&v111->m_Items[4], v149, v143, v144, v145, v146, v147, v148);
  v150 = *v57;
  if ( !*v57 )
    goto LABEL_133;
  v151 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v150->fields.userSvtEntity;
  if ( !v151 )
    goto LABEL_133;
  servantEntity = v150->fields.servantEntity;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v151[6], 0LL);
  if ( !servantEntity )
    goto LABEL_133;
  multipleViewManager = (__int64)ServantEntity__getName(servantEntity, multipleViewManager, -1, 0LL);
  v159 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B2C41C(multipleViewManager, v111->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_135:
      v166 = sub_B2C454();
      sub_B2C400(v166, 0LL);
    }
  }
  if ( v111->max_length <= 5 )
  {
LABEL_134:
    v165 = sub_B2C460(multipleViewManager);
    sub_B2C400(v165, 0LL);
  }
  v111->m_Items[5] = (Il2CppObject *)v159;
  sub_B2C2F8((BattleServantConfConponent_o *)&v111->m_Items[5], v159, v153, v154, v155, v156, v157, v158);
  v160 = System_String__Format_44384256(v110, v111, 0LL);
  v161 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v162 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v164 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v164,
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
  CommonUI__OpenConfirmDialog_17970624(
    Instance,
    v109,
    v160,
    v161,
    v162,
    v164,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_41:
  v65 = this->fields.multipleViewManager;
  v66 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B2C42C(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v66,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !v65 )
    goto LABEL_133;
  v65->fields.callbackFunc = v66;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v65->fields.callbackFunc,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  MultipleViewListViewManager__SetMode_21370756(v65, 2, v73);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_T__o *v23; // x21
  System_Collections_Generic_List_int__o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int64_t gameObject; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_GameObject_o *v39; // x20
  MultipleViewComponent_o *v40; // x0
  const MethodInfo *v41; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v43; // x20
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x1
  struct MultipleViewListViewManager_o *v46; // x20
  MultipleViewListViewManager_CallbackFunc_o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x1

  if ( (byte_4185C04 & 1) == 0 )
  {
    sub_B2C35C(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isResetSelected);
    sub_B2C35C(&int___TypeInfo, v5);
    sub_B2C35C(&long___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor___67311576, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&Method_MultipleViewComponent_OnClickServant__, v12);
    sub_B2C35C(&MyRoomControl_TypeInfo, v13);
    byte_4185C04 = 1;
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
    v15 = (System_Collections_Generic_IEnumerable_T__o *)sub_B2C374(
                                                           long___TypeInfo,
                                                           (unsigned int)v14->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v16 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_49726532(
      v16,
      v15,
      (const MethodInfo_2F6C444 *)Method_System_Collections_Generic_List_long___ctor___67311576);
    this->fields.listSelectedUsrSvtId = v16;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.listSelectedUsrSvtId,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v23 = (System_Collections_Generic_IEnumerable_T__o *)sub_B2C374(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v24 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_49702036(
      v24,
      v23,
      (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
    this->fields.listSelectedImageLimitCount = v24;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.listSelectedImageLimitCount,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v33, v34, v35, v36, v37, v38);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v39 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v39, gameObject & 1, 0LL);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v40, v41);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_16;
  multipleViewManager = this->fields.multipleViewManager;
  v43 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v43, (System_Int64_array *)gameObject, v44),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v45),
        v46 = this->fields.multipleViewManager,
        v47 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B2C42C(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v47,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v46) )
  {
LABEL_16:
    sub_B2C434(gameObject, v32);
  }
  v46->fields.callbackFunc = v47;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v46->fields.callbackFunc,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  MultipleViewListViewManager__SetMode_21370756(v46, 2, v54);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v55);
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
  __int128 v22; // q1
  UserServantEntity_Fields *p_fields; // x24
  struct UnityEngine_Transform_o *baseMount; // x8
  int64_t v25; // x0
  __int128 v26; // q0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v29; // q0
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w27
  int32_t v32; // w28
  int32_t v33; // w21
  bool IsLock; // w23
  char v35; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t randomSettingSupport; // w19
  int32_t v42; // [xsp+50h] [xbp-110h]
  int32_t v43; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct SoundInfo_o *soundInfo; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct UnityEngine_Transform_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4185C0A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_MultipleViewComponent_EndePushRequest__, v6);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4185C0A = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_23;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_23;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
  if ( !v17 )
    goto LABEL_23;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  baseMount = v15->fields.baseMount;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = baseMount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v15->fields.soundInfo;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.imageLimitCount, 0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.dispLimitCount, 0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.iconLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_23;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v39;
  *(_QWORD *)&v54.fields.currentCryptoKey = v40;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v30 )
LABEL_23:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    v43,
    v42,
    v31,
    v32,
    v33,
    soundInfo == (struct SoundInfo_o *)v45,
    IsLock,
    v35 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct UnityEngine_Transform_o *)v47,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__SetConfirmButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  UIButtonColor_o *v3; // x20
  struct UIButtonColor_o *v4; // x0
  __int64 v5; // x1
  int v6; // s0
  UIButtonColor_c *klass; // x8
  UIButtonColor_o *confirmBtnColor; // x20
  int v12; // s0

  if ( !this->fields.tabModeKind && (MultipleViewComponent__GetCurrentSelectIndex(this, method) & 0x80000000) != 0 )
  {
    confirmBtnColor = this->fields.confirmBtnColor;
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( confirmBtnColor )
    {
      UIButtonColor__set_defaultColor(confirmBtnColor, *(UnityEngine_Color_o *)&v12, 0LL);
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
    sub_B2C434(v4, v5);
  }
  v3 = this->fields.confirmBtnColor;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_grey(0LL);
  if ( !v3 )
    goto LABEL_12;
  UIButtonColor__set_defaultColor(v3, *(UnityEngine_Color_o *)&v6, 0LL);
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
  if ( (byte_4185C06 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9234/*"MultipleViewSelectedUsrSvtId"*/, usrSvtId);
    byte_4185C06 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9234/*"MultipleViewSelectedUsrSvtId"*/, v3, 0LL);
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
  System_String_o **v20; // x8
  const MethodInfo *v21; // x2
  UILabel_o *infoLb; // x21
  struct MultipleViewListViewManager_o *multipleViewManager; // x8
  struct MultipleViewListViewManager_o **p_multipleViewManager; // x21
  UILabel_o *v25; // x21
  __int64 *v26; // x8
  struct MultipleViewListViewManager_o *v27; // x8
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1

  if ( (byte_4185C11 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, v6);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v7);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v8);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v9);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v12);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v13);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v14);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v15);
    byte_4185C11 = 1;
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
    v17 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17140/*"button_select_unreg"*/ : &StringLiteral_17139/*"button_select_reg"*/);
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
    v18 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17125/*"button_alllock_reg"*/ : &StringLiteral_17126/*"button_alllock_unreg"*/);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17123/*"button_allchoice_reg"*/ : &StringLiteral_17124/*"button_allchoice_unreg"*/);
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
      sub_B2C434(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v20 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
    else
      v20 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v20, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        normalTabButton = (UnityEngine_Behaviour_o *)MultipleViewComponent__GetTitleMessage(
                                                       this,
                                                       *(const MethodInfo **)&modeKind);
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
        v25 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = &StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_44;
      case 2:
        v25 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = &StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_44;
      case 3:
        v25 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = &StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_44:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v26, 0LL);
        if ( !v25 )
          goto LABEL_51;
        UILabel__set_text(v25, (System_String_o *)normalTabButton, 0LL);
        p_multipleViewManager = &this->fields.multipleViewManager;
        v27 = this->fields.multipleViewManager;
        if ( !v27 )
          goto LABEL_51;
        v27->fields.isCanNotLongPush = 1;
LABEL_48:
        normalTabButton = (UnityEngine_Behaviour_o *)*p_multipleViewManager;
        if ( !*p_multipleViewManager )
          goto LABEL_51;
        MultipleViewListViewManager__UpdateDisplayState(
          (MultipleViewListViewManager_o *)normalTabButton,
          modeKind == 3,
          v21);
        normalTabButton = (UnityEngine_Behaviour_o *)*p_multipleViewManager;
        if ( !*p_multipleViewManager )
          goto LABEL_51;
        MultipleViewListViewManager__SetMode_21370756((MultipleViewListViewManager_o *)normalTabButton, 2, v28);
        MultipleViewComponent__SetConfirmButton(this, v29);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // x2
  System_Int64_array *v19; // x1
  bool v20; // w4
  bool v21; // w5
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4185C12 & 1) == 0 )
  {
    sub_B2C35C(&Method_MultipleViewComponent_EndStatusSync__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4185C12 = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v28,
                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v18 = unchoiceList;
        v19 = choiceList;
        v21 = 1;
        v20 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B2C434(multipleViewManager, callback);
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v17,
                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v18 = unlockList;
        v19 = lockList;
        v20 = 1;
        v21 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v19, v18, 0, v20, v21, 0LL);
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
    sub_B2C434(multipleViewManager, method);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4185D51 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_4185D51 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  MultipleViewComponent_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  MultipleViewComponent_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
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
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4185D4D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__, v6);
    byte_4185D4D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(Instance, v8);
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
    sub_B2C434(0LL, method);
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
  if ( (byte_4185D4E & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_B2C35C(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              id);
    byte_4185D4E = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_B2C434(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v9, 0LL) == id;
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct MultipleViewComponent___c__DisplayClass37_0_o *v36; // x8
  UILabel_o *v37; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_4185D4F & 1) == 0 )
  {
    sub_B2C35C(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__set_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__set_Item__, v9);
    sub_B2C35C(&Method_MultipleViewComponent_OnClickServant__, v10);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_B2C35C(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              v11);
    byte_4185D4F = 1;
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
    *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v39.fields.fakeValue = v17;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v38 = v39;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                              &v38,
                                                              0LL);
    if ( !listSelectedUsrSvtId )
      goto LABEL_29;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_2F6CC68 *)Method_System_Collections_Generic_List_long__set_Item__);
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
      (const MethodInfo_2F66CB8 *)Method_System_Collections_Generic_List_int__set_Item__);
    v21 = v6->fields.CS___8__locals1;
    if ( !v21
      || (v22 = v21->fields.__4__this) == 0LL
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v22->fields.listSelectedUsrSvtId) == 0LL
      || (multipleViewManager = v22->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_21366916(multipleViewManager, (System_Int64_array *)this, 0LL),
          (v24 = v6->fields.CS___8__locals1) == 0LL)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v24->fields.__4__this) == 0LL )
    {
LABEL_29:
      sub_B2C434(this, result);
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
  v28 = sub_B2C42C(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  v29 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v28 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v28 + 16) = v29;
  *(_QWORD *)(v28 + 32) = v26;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)v26, v30, v31, v32, v33, v34, v35);
  if ( !v27 )
    goto LABEL_29;
  MultipleViewListViewManager__SetMode(v27, 2, (MultipleViewListViewManager_CallbackFunc_o *)v28, 0LL);
  v36 = v6->fields.CS___8__locals1;
  if ( !v36 )
    goto LABEL_29;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)v36->fields.__4__this;
  if ( !this )
    goto LABEL_29;
  v37 = *(UILabel_o **)&this[1].fields.selectIndex;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)MultipleViewComponent__GetTitleMessage(
                                                            (MultipleViewComponent_o *)this,
                                                            0LL);
  if ( !v37 )
    goto LABEL_29;
  UILabel__set_text(v37, (System_String_o *)this, 0LL);
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
  struct MultipleViewComponent_o *v7; // x8
  struct MultipleViewComponent_o *v8; // x20
  MultipleViewListViewManager_o *multipleViewManager; // x19
  __int64 v10; // x21
  __int64 v11; // x9
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4185D50 & 1) == 0 )
  {
    sub_B2C35C(&MultipleViewListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_MultipleViewComponent_OnClickServant__, v3);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v4);
    byte_4185D50 = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B2C434(_4__this, method);
  }
  if ( !_4__this->fields.multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_18;
    _4__this = (MultipleViewComponent_o *)v7->fields.multipleViewManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_18;
  multipleViewManager = v8->fields.multipleViewManager;
  v10 = sub_B2C42C(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  v11 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v10 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 32) = v8;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)v8, v12, v13, v14, v15, v16, v17);
  if ( !multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__SetMode(multipleViewManager, 2, (MultipleViewListViewManager_CallbackFunc_o *)v10, 0LL);
}