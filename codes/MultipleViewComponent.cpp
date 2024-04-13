void __fastcall MultipleViewComponent___ctor(MultipleViewComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  MyRoomControl_c *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x20
  System_Collections_Generic_List_long__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_T__o *v32; // x20
  System_Collections_Generic_List_int__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42E74D7 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&long___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor___68740392, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v20, v21, v22);
    byte_42E74D7 = 1;
  }
  v23 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v23 = MyRoomControl_TypeInfo;
  }
  v24 = (System_Collections_Generic_IEnumerable_T__o *)sub_B5D5DC(
                                                         long___TypeInfo,
                                                         (unsigned int)v23->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v25 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_50621476(
    v25,
    v24,
    (const MethodInfo_3046C24 *)Method_System_Collections_Generic_List_long___ctor___68740392);
  this->fields.listSelectedUsrSvtId = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listSelectedUsrSvtId,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_IEnumerable_T__o *)sub_B5D5DC(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v33 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v33,
    v32,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.listSelectedImageLimitCount = v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listSelectedImageLimitCount,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  MultipleViewComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42E74C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MultipleViewComponent_EndCancelButton__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v10, v11, v12);
    byte_42E74C7 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B5D694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    0LL);
  MultipleViewComponent__StatusRequest(this, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__CloseSvtDetail(
        MultipleViewComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  char v8; // w1
  char v9; // w2
  __int64 v10; // x3
  char v11; // w1
  char v12; // w2
  __int64 v13; // x3
  char v14; // w1
  char v15; // w2
  __int64 v16; // x3
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v27; // x20

  if ( (byte_42E74CC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v11, v12, v13);
    sub_B5D5C4(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo, v14, v15, v16);
    byte_42E74CC = 1;
  }
  v17 = sub_B5D694(MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
  MultipleViewComponent___c__DisplayClass40_0___ctor((MultipleViewComponent___c__DisplayClass40_0_o *)v17, 0LL);
  if ( !v17
    || (*(_DWORD *)(v17 + 16) = questId,
        *(_QWORD *)(v17 + 24) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v17 + 24),
          (System_Int32_array **)this,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        *(_BYTE *)(v17 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v17,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v18, v19);
  }
  CommonUI__CloseServantStatusDialog(Instance, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__EndCancelButton(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v10; // x20
  MultipleViewListViewManager_CallbackFunc_o *v11; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_42E74C8 & 1) == 0 )
  {
    sub_B5D5C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isRequest, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MultipleViewComponent_OnClickServant__, v6, v7, v8);
    byte_42E74C8 = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          v10 = this->fields.multipleViewManager,
          v11 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B5D694(MultipleViewListViewManager_CallbackFunc_TypeInfo),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            0LL),
          !v10) )
    {
LABEL_11:
      sub_B5D69C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode(v10, 2, v11, 0LL);
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

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          (multipleViewManager = this->fields.multipleViewManager) == 0LL) )
    {
      sub_B5D69C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_27588772(multipleViewManager, 2, 0LL);
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

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          (multipleViewManager = this->fields.multipleViewManager) == 0LL) )
    {
      sub_B5D69C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_27588772(multipleViewManager, 2, 0LL);
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

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          (multipleViewManager = this->fields.multipleViewManager) == 0LL) )
    {
      sub_B5D69C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_27588772(multipleViewManager, 2, 0LL);
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

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          (multipleViewManager = this->fields.multipleViewManager) == 0LL) )
    {
      sub_B5D69C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_27588772(multipleViewManager, 2, 0LL);
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
    sub_B5D560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MultipleViewComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall MultipleViewComponent__EndePushRequest(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v9; // x20
  MultipleViewListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42E74CB & 1) == 0 )
  {
    sub_B5D5C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MultipleViewComponent_OnClickServant__, v5, v6, v7);
    byte_42E74CB = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, 0LL),
        (multipleViewManager = this->fields.multipleViewManager) == 0LL)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, 0LL),
        v9 = this->fields.multipleViewManager,
        v10 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B5D694(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v9) )
  {
    sub_B5D69C(multipleViewManager, result);
  }
  MultipleViewListViewManager__SetMode(v9, 2, v10, 0LL);
}


int32_t __fastcall MultipleViewComponent__GetCurrentSelectIndex(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MultipleViewComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  __int64 v9; // x20
  int size; // w8

  v4 = this;
  if ( (byte_42E74D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, (_DWORD)method, v2, v3);
    this = (MultipleViewComponent_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v5, v6, v7);
    byte_42E74D5 = 1;
  }
  listSelectedUsrSvtId = v4->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_10:
    sub_B5D69C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    size = listSelectedUsrSvtId->fields._size;
    if ( (int)v9 >= size )
      break;
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( listSelectedUsrSvtId->fields._items->m_Items[v9] < 1 )
      return v9;
    listSelectedUsrSvtId = v4->fields.listSelectedUsrSvtId;
    ++v9;
    if ( !listSelectedUsrSvtId )
      goto LABEL_10;
  }
  LODWORD(v9) = -1;
  return v9;
}


int64_t __fastcall MultipleViewComponent__GetLatestSelectedUsrSvtId(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v9; // x0
  int64_t result; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_42E74C5 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9328/*"MultipleViewSelectedUsrSvtId"*/, v4, v5, v6);
    byte_42E74C5 = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9328/*"MultipleViewSelectedUsrSvtId"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  v9 = -1LL;
  if ( !IsNullOrEmpty )
  {
    result = -1LL;
    if ( System_Int64__TryParse(String, &result, 0LL) )
      return result;
    else
      return -1LL;
  }
  return v9;
}


System_String_o *__fastcall MultipleViewComponent__GetTitleMessage(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  int32_t CurrentSelectIndex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E74D6 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_7117/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_7118/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, v8, v9, v10);
    byte_42E74D6 = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( (CurrentSelectIndex & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = (System_String_o *)StringLiteral_7118/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v11 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0LL);
    v12 = System_String__Concat_44577788((System_String_o *)StringLiteral_7117/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v11, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = v12;
  }
  return LocalizationManager__Get(v13, 0LL);
}


void __fastcall MultipleViewComponent__Init(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__DestroyList(multipleViewManager, 0LL),
        infoLb = this->fields.infoLb,
        this->fields.state = 0,
        multipleViewManager = (MultipleViewListViewManager_o *)MultipleViewComponent__GetTitleMessage(this, v5),
        !infoLb) )
  {
    sub_B5D69C(multipleViewManager, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42E74CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_MultipleViewComponent_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E74CF = 1;
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
        v13 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B5D694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B5D694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v15, v16);
    }
    MultipleViewComponent__SetModeTabKind(this, 2, v11);
  }
}


void __fastcall MultipleViewComponent__OnClickDecide(MultipleViewComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  MultipleViewComponent_o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x20
  int32_t size; // w8
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v24; // x19

  if ( (byte_42E74D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E74D4 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(v17, listSelectedUsrSvtId->fields._items->m_Items[size - 1], v19);
      v17 = (MultipleViewComponent_o *)this->fields.listSelectedUsrSvtId;
      if ( !v17
        || (myRoomControl = this->fields.myRoomControl,
            v17 = (MultipleViewComponent_o *)System_Collections_Generic_List_long___ToArray(
                                               (System_Collections_Generic_List_long__o *)v17,
                                               (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0LL)
        || (v24 = (System_Int64_array *)v17,
            v17 = (MultipleViewComponent_o *)System_Collections_Generic_List_int___ToArray(
                                               listSelectedImageLimitCount,
                                               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_21:
        sub_B5D69C(v17, v18);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v24, (System_Int32_array *)v17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42E74CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_MultipleViewComponent_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E74CE = 1;
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
        v13 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B5D694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B5D694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v15, v16);
    }
    MultipleViewComponent__SetModeTabKind(this, 1, v11);
  }
}


void __fastcall MultipleViewComponent__OnClickNormalTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  MultipleViewComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E74CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_MultipleViewComponent_EndClickTabNormal__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E74CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B5D694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v11, v12);
  }
}


void __fastcall MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  MultipleViewComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E74D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MultipleViewComponent_EndClickTabPush__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E74D0 = 1;
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
    v11 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B5D694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v11, v12);
  }
}


void __fastcall MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E74D3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74D3 = 1;
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
      sub_B5D69C(0LL, v5);
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, 0LL);
    MultipleViewComponent__UpdateScaleChangeIconSprite(this, v7);
  }
}


void __fastcall MultipleViewComponent__OnClickServant(
        MultipleViewComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  __int64 v109; // x20
  __int64 multipleViewManager; // x0
  const MethodInfo *v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **Item; // x1
  MultipleViewListViewItem_o **v125; // x21
  __int64 v126; // x8
  __int128 v127; // q1
  int32_t tabModeKind; // w8
  int32_t v129; // w0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v131; // x20
  ServantStatusDialog_ResultDelegate_o *v132; // x22
  MultipleViewListViewManager_o *v133; // x20
  MultipleViewListViewManager_CallbackFunc_o *v134; // x21
  const MethodInfo *v135; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v137; // x22
  int32_t Index; // w0
  const MethodInfo *v139; // x1
  int32_t v140; // w21
  MultipleViewListViewManager_o *v141; // x20
  const MethodInfo *v142; // x1
  UILabel_o *infoLb; // x20
  const MethodInfo *v144; // x2
  int64_t v145; // x22
  struct UserServantEntity_o *v146; // x8
  __int128 v147; // q0
  __int64 v148; // x21
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  const MethodInfo *v155; // x1
  __int64 v156; // x8
  __int64 v157; // x8
  __int64 v158; // x8
  __int128 v159; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v161; // x20
  System_Action_bool__int__o *v162; // x22
  UserServantEntity_o *Entity; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v164; // x22
  __int64 v165; // x23
  __int64 v166; // x24
  ServantEntity_o *v167; // x26
  System_String_o *v168; // x22
  System_String_o *v169; // x23
  System_Object_array *v170; // x24
  int32_t Rarity; // w27
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x27
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  System_Int32_array **v185; // x27
  int32_t v186; // w0
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  System_Int32_array **v193; // x25
  int32_t v194; // w0
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  System_Int32_array **v201; // x25
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  System_Int32_array **v208; // x25
  MultipleViewListViewItem_o *v209; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v210; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  System_Int32_array **v218; // x21
  System_String_o *v219; // x21
  System_String_o *v220; // x23
  System_String_o *v221; // x24
  CommonUI_o *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v223; // x26
  __int64 v224; // x0
  __int64 v225; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v227; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v228; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v229; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // 0:x0.16

  if ( (byte_42E74C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__int___ctor__, kind, n, method);
    sub_B5D5C4(&System_Action_bool__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v22, v23, v24);
    sub_B5D5C4(&DataManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__FindIndex__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__set_Item__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__set_Item__, v43, v44, v45);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_MultipleViewComponent_CloseSvtDetail__, v49, v50, v51);
    sub_B5D5C4(&Method_MultipleViewComponent_OnClickServant__, v52, v53, v54);
    sub_B5D5C4(&object___TypeInfo, v55, v56, v57);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&Method_System_Predicate_long___ctor__, v64, v65, v66);
    sub_B5D5C4(&System_Predicate_long__TypeInfo, v67, v68, v69);
    sub_B5D5C4(&Rarity_TypeInfo, v70, v71, v72);
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, v73, v74, v75);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v76, v77, v78);
    sub_B5D5C4(&SoundManager_TypeInfo, v79, v80, v81);
    sub_B5D5C4(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__, v82, v83, v84);
    sub_B5D5C4(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__, v85, v86, v87);
    sub_B5D5C4(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo, v88, v89, v90);
    sub_B5D5C4(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__, v91, v92, v93);
    sub_B5D5C4(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v106, v107, v108);
    byte_42E74C9 = 1;
  }
  v109 = sub_B5D694(MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
  MultipleViewComponent___c__DisplayClass37_0___ctor((MultipleViewComponent___c__DisplayClass37_0_o *)v109, 0LL);
  if ( !v109 )
    goto LABEL_133;
  *(_QWORD *)(v109 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v109 + 16),
    (System_Int32_array **)this,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
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
                                    0LL);
  }
  *(_QWORD *)(v109 + 24) = Item;
  v125 = (MultipleViewListViewItem_o **)(v109 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v109 + 24), Item, v118, v119, v120, v121, v122, v123);
  if ( !*(_QWORD *)(v109 + 24) )
    goto LABEL_133;
  v126 = *(_QWORD *)(*(_QWORD *)(v109 + 24) + 112LL);
  if ( !v126 )
    goto LABEL_133;
  v127 = *(_OWORD *)(v126 + 32);
  *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)(v126 + 16);
  *(_OWORD *)&v229.fields.fakeValue = v127;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v228 = v229;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v228, 0LL);
  this->fields.usrSvtId = multipleViewManager;
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v125 )
    {
      userSvtEntity = (*v125)->fields.userSvtEntity;
      v131 = (CommonUI_o *)multipleViewManager;
      v132 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v132,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0LL);
      if ( v131 )
      {
        CommonUI__OpenServantStatusDialog_18213380(v131, 0, userSvtEntity, v132, 0, 0LL);
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
    if ( !*v125 )
      goto LABEL_133;
    (*v125)->fields.isSwapChoice ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v129 = 0;
    goto LABEL_40;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v125 )
      goto LABEL_133;
    (*v125)->fields.isSwapLock ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v129 = 11;
    goto LABEL_40;
  }
  multipleViewManager = (__int64)*v125;
  if ( !*v125 )
    goto LABEL_133;
  if ( tabModeKind != 3 )
  {
    if ( !MultipleViewListViewItem__get_IsCanNotSelect((MultipleViewListViewItem_o *)multipleViewManager, v111) )
    {
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      v137 = (System_Predicate_long__o *)sub_B5D694(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v137,
        (Il2CppObject *)v109,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        (const MethodInfo_2B92170 *)Method_System_Predicate_long___ctor__);
      if ( !listSelectedUsrSvtId )
        goto LABEL_133;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v137,
                (const MethodInfo_30481FC *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v140 = Index;
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
          v140,
          0LL,
          (const MethodInfo_3047448 *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_133;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v140,
          0,
          (const MethodInfo_30840CC *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_133;
        v141 = this->fields.multipleViewManager;
        multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                         (System_Collections_Generic_List_long__o *)multipleViewManager,
                                         (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v141 )
          goto LABEL_133;
        MultipleViewListViewManager__ModifyItem_27585756(v141, (System_Int64_array *)multipleViewManager, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v142);
        goto LABEL_59;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v139) & 0x80000000) == 0 )
      {
        v148 = sub_B5D694(MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
        MultipleViewComponent___c__DisplayClass37_1___ctor((MultipleViewComponent___c__DisplayClass37_1_o *)v148, 0LL);
        if ( v148 )
        {
          *(_QWORD *)(v148 + 24) = v109;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v148 + 24),
            (System_Int32_array **)v109,
            v149,
            v150,
            v151,
            v152,
            v153,
            v154);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v155);
          v156 = *(_QWORD *)(v148 + 24);
          *(_DWORD *)(v148 + 16) = multipleViewManager;
          if ( v156 )
          {
            v157 = *(_QWORD *)(v156 + 24);
            if ( v157 )
            {
              v158 = *(_QWORD *)(v157 + 112);
              if ( v158 )
              {
                v159 = *(_OWORD *)(v158 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)(v158 + 16);
                *(_OWORD *)&v229.fields.fakeValue = v159;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v226 = v229;
                v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v226, 0LL);
                v162 = (System_Action_bool__int__o *)sub_B5D694(System_Action_bool__int__TypeInfo);
                System_Action_bool__int____ctor(
                  v162,
                  (Il2CppObject *)v148,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  (const MethodInfo_2597088 *)Method_System_Action_bool__int___ctor__);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v161, v162, *(_DWORD *)(v148 + 16), 0LL);
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
    multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v135);
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
    multipleViewManager = (__int64)*v125;
    if ( !*v125 )
      goto LABEL_133;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave((MultipleViewListViewItem_o *)multipleViewManager, v111) )
  {
LABEL_36:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v129 = 2;
LABEL_40:
    SoundManager__playSystemSe(v129, 0LL);
    goto LABEL_41;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !multipleViewManager )
    goto LABEL_133;
  v145 = *(_QWORD *)(multipleViewManager + 120);
  if ( !v145 )
  {
LABEL_72:
    MultipleViewComponent__PushRequest(this, *v125, v144);
    goto LABEL_41;
  }
  if ( !*v125 )
    goto LABEL_133;
  v146 = (*v125)->fields.userSvtEntity;
  if ( !v146 )
    goto LABEL_133;
  v147 = *(_OWORD *)&v146->fields.id.fields.fakeValue;
  *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)&v146->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v229.fields.fakeValue = v147;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v227 = v229;
  if ( v145 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v227, 0LL) )
    goto LABEL_72;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  multipleViewManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_133;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)multipleViewManager,
             v145,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_133;
  v164 = (DataMasterBase_WarMaster__WarEntity__int__o *)multipleViewManager;
  v166 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v165 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v230.fields.currentCryptoKey = v166;
  *(_QWORD *)&v230.fields.fakeValue = v165;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v230, 0LL);
  if ( !v164 )
    goto LABEL_133;
  v167 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v164,
                              multipleViewManager,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v168 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v169 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v170 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  multipleViewManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v170 )
LABEL_133:
    sub_B5D69C(multipleViewManager, v111);
  v178 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B5D684(multipleViewManager, v170->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( !v170->max_length )
    goto LABEL_134;
  v170->m_Items[0] = (Il2CppObject *)v178;
  sub_B5D560((BattleServantConfConponent_o *)v170->m_Items, v178, v172, v173, v174, v175, v176, v177);
  if ( !v167 )
    goto LABEL_133;
  multipleViewManager = (__int64)ServantEntity__getClassName(v167, 0LL);
  v185 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B5D684(multipleViewManager, v170->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v170->max_length <= 1 )
    goto LABEL_134;
  v170->m_Items[1] = (Il2CppObject *)v185;
  sub_B5D560((BattleServantConfConponent_o *)&v170->m_Items[1], v185, v179, v180, v181, v182, v183, v184);
  v186 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.limitCount, 0LL);
  multipleViewManager = (__int64)ServantEntity__getName(v167, v186, -1, 0LL);
  v193 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B5D684(multipleViewManager, v170->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v170->max_length <= 2 )
    goto LABEL_134;
  v170->m_Items[2] = (Il2CppObject *)v193;
  sub_B5D560((BattleServantConfConponent_o *)&v170->m_Items[2], v193, v187, v188, v189, v190, v191, v192);
  if ( !*v125 )
    goto LABEL_133;
  multipleViewManager = (__int64)(*v125)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_133;
  v194 = UserServantEntity__getRarity((UserServantEntity_o *)multipleViewManager, 0LL);
  multipleViewManager = (__int64)Rarity__getRarityType(v194, 0LL);
  v201 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B5D684(multipleViewManager, v170->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v170->max_length <= 3 )
    goto LABEL_134;
  v170->m_Items[3] = (Il2CppObject *)v201;
  sub_B5D560((BattleServantConfConponent_o *)&v170->m_Items[3], v201, v195, v196, v197, v198, v199, v200);
  if ( !*v125 )
    goto LABEL_133;
  multipleViewManager = (__int64)(*v125)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_133;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0LL);
  v208 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B5D684(multipleViewManager, v170->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_135;
  }
  if ( v170->max_length <= 4 )
    goto LABEL_134;
  v170->m_Items[4] = (Il2CppObject *)v208;
  sub_B5D560((BattleServantConfConponent_o *)&v170->m_Items[4], v208, v202, v203, v204, v205, v206, v207);
  v209 = *v125;
  if ( !*v125 )
    goto LABEL_133;
  v210 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v209->fields.userSvtEntity;
  if ( !v210 )
    goto LABEL_133;
  servantEntity = v209->fields.servantEntity;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v210[6], 0LL);
  if ( !servantEntity )
    goto LABEL_133;
  multipleViewManager = (__int64)ServantEntity__getName(servantEntity, multipleViewManager, -1, 0LL);
  v218 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_B5D684(multipleViewManager, v170->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_135:
      v225 = sub_B5D6BC();
      sub_B5D668(v225, 0LL);
    }
  }
  if ( v170->max_length <= 5 )
  {
LABEL_134:
    v224 = sub_B5D6C8(multipleViewManager);
    sub_B5D668(v224, 0LL);
  }
  v170->m_Items[5] = (Il2CppObject *)v218;
  sub_B5D560((BattleServantConfConponent_o *)&v170->m_Items[5], v218, v212, v213, v214, v215, v216, v217);
  v219 = System_String__Format_44656512(v169, v170, 0LL);
  v220 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v221 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v223 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v223,
    (Il2CppObject *)v109,
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
  CommonUI__OpenConfirmDialog_18201384(
    Instance,
    v168,
    v219,
    v220,
    v221,
    v223,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_41:
  v133 = this->fields.multipleViewManager;
  v134 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B5D694(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v134,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !v133 )
    goto LABEL_133;
  MultipleViewListViewManager__SetMode(v133, 2, v134, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__Open(
        MultipleViewComponent_o *this,
        bool isResetSelected,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  MyRoomControl_c *v33; // x0
  System_Collections_Generic_IEnumerable_T__o *v34; // x20
  System_Collections_Generic_List_long__o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_T__o *v42; // x21
  System_Collections_Generic_List_int__o *v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int64_t gameObject; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_GameObject_o *v58; // x20
  MultipleViewComponent_o *v59; // x0
  const MethodInfo *v60; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v62; // x20
  const MethodInfo *v63; // x1
  MultipleViewListViewManager_o *v64; // x20
  MultipleViewListViewManager_CallbackFunc_o *v65; // x21
  const MethodInfo *v66; // x1

  if ( (byte_42E74C4 & 1) == 0 )
  {
    sub_B5D5C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isResetSelected, (_DWORD)method, v3);
    sub_B5D5C4(&int___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&long___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor___68740392, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_MultipleViewComponent_OnClickServant__, v27, v28, v29);
    sub_B5D5C4(&MyRoomControl_TypeInfo, v30, v31, v32);
    byte_42E74C4 = 1;
  }
  if ( isResetSelected )
  {
    v33 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v33 = MyRoomControl_TypeInfo;
    }
    v34 = (System_Collections_Generic_IEnumerable_T__o *)sub_B5D5DC(
                                                           long___TypeInfo,
                                                           (unsigned int)v33->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v35 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_50621476(
      v35,
      v34,
      (const MethodInfo_3046C24 *)Method_System_Collections_Generic_List_long___ctor___68740392);
    this->fields.listSelectedUsrSvtId = v35;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.listSelectedUsrSvtId,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    v42 = (System_Collections_Generic_IEnumerable_T__o *)sub_B5D5DC(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v43 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50870440(
      v43,
      v42,
      (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.listSelectedImageLimitCount = v43;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.listSelectedImageLimitCount,
      (System_Int32_array **)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v52, v53, v54, v55, v56, v57);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v58 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v58, gameObject & 1, 0LL);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v59, v60);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_16;
  multipleViewManager = this->fields.multipleViewManager;
  v62 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v62, (System_Int64_array *)gameObject, 0LL),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v63),
        v64 = this->fields.multipleViewManager,
        v65 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B5D694(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v65,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v64) )
  {
LABEL_16:
    sub_B5D69C(gameObject, v51);
  }
  MultipleViewListViewManager__SetMode(v64, 2, v65, 0LL);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v66);
}


void __fastcall MultipleViewComponent__PushRequest(
        MultipleViewComponent_o *this,
        MultipleViewListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  CommonUI_o *limitCountSupport; // x0
  __int64 v31; // x1
  CommonUI_o *v32; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x22
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v39; // q1
  UserServantEntity_Fields *p_fields; // x24
  struct UnityEngine_Transform_o *baseMount; // x8
  int64_t v42; // x0
  __int128 v43; // q0
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v46; // q0
  CardFavoriteRequest_o *v47; // x20
  int32_t v48; // w27
  int32_t v49; // w28
  int32_t v50; // w21
  bool IsLock; // w23
  char v52; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t randomSettingSupport; // w19
  int32_t v59; // [xsp+50h] [xbp-110h]
  int32_t v60; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v62; // [xsp+60h] [xbp-100h]
  struct SoundInfo_o *soundInfo; // [xsp+68h] [xbp-F8h]
  int64_t v64; // [xsp+70h] [xbp-F0h]
  struct UnityEngine_Transform_o *v65; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42E74CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_MultipleViewComponent_EndePushRequest__, v9, v10, v11);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42E74CA = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_23;
  v32 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v32 || !userSvtEntity )
    goto LABEL_23;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v32->fields.m_CachedPtr;
  v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v34 )
    goto LABEL_23;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  baseMount = v32->fields.baseMount;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = baseMount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v32->fields.soundInfo;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.imageLimitCount, 0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.dispLimitCount, 0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.iconLimitCount, 0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_23;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v56;
  *(_QWORD *)&v71.fields.currentCryptoKey = v57;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v47 )
LABEL_23:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v47,
    targetUsrSVtId,
    v60,
    v59,
    v48,
    v49,
    v50,
    soundInfo == (struct SoundInfo_o *)v62,
    IsLock,
    v52 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v65 != (struct UnityEngine_Transform_o *)v64,
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
    sub_B5D69C(v4, v5);
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
  __int64 v3; // x3
  System_String_o *v4; // x0
  int64_t v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = usrSvtId;
  if ( (byte_42E74C6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9328/*"MultipleViewSelectedUsrSvtId"*/, usrSvtId, (_DWORD)method, v3);
    byte_42E74C6 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v5, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9328/*"MultipleViewSelectedUsrSvtId"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__SetModeTabKind(
        MultipleViewComponent_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v40; // x8
  System_String_o **v41; // x8
  System_String_o **v42; // x8
  __int64 *v43; // x8
  UILabel_o *infoLb; // x21
  struct MultipleViewListViewManager_o *multipleViewManager; // x8
  struct MultipleViewListViewManager_o **p_multipleViewManager; // x21
  UILabel_o *v47; // x21
  __int64 *v48; // x8
  struct MultipleViewListViewManager_o *v49; // x8
  const MethodInfo *v50; // x1

  if ( (byte_42E74D1 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v36, v37, v38);
    byte_42E74D1 = 1;
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
    v40 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17350/*"button_select_unreg"*/ : &StringLiteral_17349/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v40, 0LL);
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
    v41 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17335/*"button_alllock_reg"*/ : &StringLiteral_17336/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v41, 0LL);
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
    v42 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17333/*"button_allchoice_reg"*/ : &StringLiteral_17334/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v42, 0LL);
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
      sub_B5D69C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v43 = &StringLiteral_17347/*"button_push_reg"*/;
    else
      v43 = &StringLiteral_17348/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v43, 0LL);
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
        v47 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_44;
      case 2:
        v47 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_44;
      case 3:
        v47 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = &StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_44:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
        if ( !v47 )
          goto LABEL_51;
        UILabel__set_text(v47, (System_String_o *)normalTabButton, 0LL);
        p_multipleViewManager = &this->fields.multipleViewManager;
        v49 = this->fields.multipleViewManager;
        if ( !v49 )
          goto LABEL_51;
        v49->fields.isCanNotLongPush = 1;
LABEL_48:
        normalTabButton = (UnityEngine_Behaviour_o *)*p_multipleViewManager;
        if ( !*p_multipleViewManager )
          goto LABEL_51;
        MultipleViewListViewManager__UpdateDisplayState(
          (MultipleViewListViewManager_o *)normalTabButton,
          modeKind == 3,
          0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)*p_multipleViewManager;
        if ( !*p_multipleViewManager )
          goto LABEL_51;
        MultipleViewListViewManager__SetMode_27588772((MultipleViewListViewManager_o *)normalTabButton, 2, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v50);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t tabModeKind; // w8
  MultipleViewListViewManager_o *multipleViewManager; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w4
  bool v27; // w5
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  NetworkManager_ResultCallbackFunc_o *v34; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42E74D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MultipleViewComponent_EndStatusSync__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E74D2 = 1;
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
    if ( MultipleViewListViewManager__GetSwapChoiceList(multipleViewManager, &choiceList, &unchoiceList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v34,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v34,
                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v24 = unchoiceList;
        v25 = choiceList;
        v27 = 1;
        v26 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B5D69C(multipleViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_23;
    if ( MultipleViewListViewManager__GetSwapLockList(multipleViewManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v23,
                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v24 = unlockList;
        v25 = lockList;
        v26 = 1;
        v27 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v25, v24, 0, v26, v27, 0LL);
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
                                                                 0LL),
        !scaleChangeTabSprite) )
  {
    sub_B5D69C(multipleViewManager, method);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5F7B & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E5F7B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent_RequestCallbackFunc__Invoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  MultipleViewComponent_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  MultipleViewComponent_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (MultipleViewComponent_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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


void __fastcall MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__0(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_42E5F77 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__, v9, v10, v11);
    byte_42E5F77 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18202348(v14, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(Instance, v13);
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
    sub_B5D69C(0LL, method);
  MultipleViewComponent__PushRequest(_4__this, this->fields.item, 0LL);
}


bool __fastcall MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__2(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MultipleViewComponent___c__DisplayClass37_0_o *v5; // x20
  struct MultipleViewListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v8; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42E5F78 & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_B5D5C4(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              id,
                                                              (_DWORD)method,
                                                              v3);
    byte_42E5F78 = 1;
  }
  item = v5->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_B5D69C(this, id);
  v8 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v10, 0LL) == id;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  struct MultipleViewComponent___c__DisplayClass37_0_o *CS___8__locals1; // x9
  struct MultipleViewComponent_o *_4__this; // x8
  struct MultipleViewListViewItem_o *item; // x9
  struct UserServantEntity_o *userSvtEntity; // x9
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  __int128 v27; // q1
  int32_t selectIndex; // w22
  struct MultipleViewComponent___c__DisplayClass37_0_o *v29; // x8
  struct MultipleViewComponent_o *v30; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v31; // x8
  struct MultipleViewComponent_o *v32; // x8
  MultipleViewListViewManager_o *multipleViewManager; // x20
  struct MultipleViewComponent___c__DisplayClass37_0_o *v34; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v35; // x8
  struct MultipleViewComponent_o *v36; // x22
  MultipleViewListViewManager_o *v37; // x20
  __int64 v38; // x21
  __int64 v39; // x9
  struct MultipleViewComponent___c__DisplayClass37_0_o *v40; // x8
  UILabel_o *v41; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_42E5F79 & 1) == 0 )
  {
    sub_B5D5C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result, imageLimitCount, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__set_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__set_Item__, v13, v14, v15);
    sub_B5D5C4(&Method_MultipleViewComponent_OnClickServant__, v16, v17, v18);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_B5D5C4(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              v19,
                                                              v20,
                                                              v21);
    byte_42E5F79 = 1;
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
    v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    selectIndex = v6->fields.selectIndex;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v43.fields.fakeValue = v27;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v42 = v43;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                              &v42,
                                                              0LL);
    if ( !listSelectedUsrSvtId )
      goto LABEL_29;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_3047448 *)Method_System_Collections_Generic_List_long__set_Item__);
    v29 = v6->fields.CS___8__locals1;
    if ( !v29 )
      goto LABEL_29;
    v30 = v29->fields.__4__this;
    if ( !v30 )
      goto LABEL_29;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)v30->fields.listSelectedImageLimitCount;
    if ( !this )
      goto LABEL_29;
    System_Collections_Generic_List_int___set_Item(
      (System_Collections_Generic_List_int__o *)this,
      v6->fields.selectIndex,
      imageLimitCount,
      (const MethodInfo_30840CC *)Method_System_Collections_Generic_List_int__set_Item__);
    v31 = v6->fields.CS___8__locals1;
    if ( !v31
      || (v32 = v31->fields.__4__this) == 0LL
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v32->fields.listSelectedUsrSvtId) == 0LL
      || (multipleViewManager = v32->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_27585756(multipleViewManager, (System_Int64_array *)this, 0LL),
          (v34 = v6->fields.CS___8__locals1) == 0LL)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v34->fields.__4__this) == 0LL )
    {
LABEL_29:
      sub_B5D69C(this, result);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, 0LL);
  }
  v35 = v6->fields.CS___8__locals1;
  if ( !v35 )
    goto LABEL_29;
  v36 = v35->fields.__4__this;
  if ( !v36 )
    goto LABEL_29;
  v37 = v36->fields.multipleViewManager;
  v38 = sub_B5D694(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  v39 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v38 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v38 + 16) = v39;
  *(_QWORD *)(v38 + 32) = v36;
  sub_B5D560(v38 + 32);
  if ( !v37 )
    goto LABEL_29;
  MultipleViewListViewManager__SetMode(v37, 2, (MultipleViewListViewManager_CallbackFunc_o *)v38, 0LL);
  v40 = v6->fields.CS___8__locals1;
  if ( !v40 )
    goto LABEL_29;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)v40->fields.__4__this;
  if ( !this )
    goto LABEL_29;
  v41 = *(UILabel_o **)&this[1].fields.selectIndex;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)MultipleViewComponent__GetTitleMessage(
                                                            (MultipleViewComponent_o *)this,
                                                            0LL);
  if ( !v41 )
    goto LABEL_29;
  UILabel__set_text(v41, (System_String_o *)this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  MultipleViewComponent_o *_4__this; // x0
  struct MultipleViewComponent_o *v12; // x8
  struct MultipleViewComponent_o *v13; // x8
  struct MultipleViewComponent_o *v14; // x20
  MultipleViewListViewManager_o *multipleViewManager; // x19
  __int64 v16; // x21
  __int64 v17; // x9

  if ( (byte_42E5F7A & 1) == 0 )
  {
    sub_B5D5C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MultipleViewComponent_OnClickServant__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, v8, v9, v10);
    byte_42E5F7A = 1;
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
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          _4__this = (MultipleViewComponent_o *)v12->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B5D69C(_4__this, method);
  }
  if ( !_4__this->fields.multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_18;
    _4__this = (MultipleViewComponent_o *)v13->fields.multipleViewManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_18;
  multipleViewManager = v14->fields.multipleViewManager;
  v16 = sub_B5D694(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  v17 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v16 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v16 + 16) = v17;
  *(_QWORD *)(v16 + 32) = v14;
  sub_B5D560(v16 + 32);
  if ( !multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__SetMode(multipleViewManager, 2, (MultipleViewListViewManager_CallbackFunc_o *)v16, 0LL);
}