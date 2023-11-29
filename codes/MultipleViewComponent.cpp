void __fastcall MultipleViewComponent___ctor(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MyRoomControl_c *v10; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_long__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  System_Collections_Generic_IEnumerable_T__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_int__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_40F7DF5 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&long___TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor___66737392, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B16FFC(&MyRoomControl_TypeInfo, v9);
    byte_40F7DF5 = 1;
  }
  v10 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v10 = MyRoomControl_TypeInfo;
  }
  v11 = (System_Collections_Generic_IEnumerable_T__o *)sub_B17014(
                                                         long___TypeInfo,
                                                         (unsigned int)v10->static_fields->MULTIPLE_VIEW_SELECTED_MAX,
                                                         v2);
  v16 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v12,
                                                     v13,
                                                     v14,
                                                     v15);
  System_Collections_Generic_List_long____ctor_49371452(
    v16,
    v11,
    (const MethodInfo_2F1593C *)Method_System_Collections_Generic_List_long___ctor___66737392);
  this->fields.listSelectedUsrSvtId = v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listSelectedUsrSvtId,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = (System_Collections_Generic_IEnumerable_T__o *)sub_B17014(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX,
                                                         v23);
  v29 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v25,
                                                    v26,
                                                    v27,
                                                    v28);
  System_Collections_Generic_List_int____ctor_49346956(
    v29,
    v24,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  this->fields.listSelectedImageLimitCount = v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listSelectedImageLimitCount,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  MultipleViewComponent_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_40F7DE5 & 1) == 0 )
  {
    sub_B16FFC(&Method_MultipleViewComponent_EndCancelButton__, callback);
    sub_B16FFC(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v10);
    byte_40F7DE5 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                         MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                         v11,
                                                         v12,
                                                         v13,
                                                         v14);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    0LL);
  MultipleViewComponent__StatusRequest(this, v15, v16);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CommonUI_o *Instance; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x20

  if ( (byte_40F7DEA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v9);
    sub_B16FFC(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_40F7DEA = 1;
  }
  v11 = sub_B170CC(
          MultipleViewComponent___c__DisplayClass40_0_TypeInfo,
          isDecide,
          isNeedSort,
          *(_QWORD *)&questId,
          method);
  MultipleViewComponent___c__DisplayClass40_0___ctor((MultipleViewComponent___c__DisplayClass40_0_o *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 24),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v11,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseServantStatusDialog(Instance, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__EndCancelButton(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  MultipleViewListViewManager_CallbackFunc_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *cancelCallback; // x0

  if ( (byte_40F7DE6 & 1) == 0 )
  {
    sub_B16FFC(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_B16FFC(&Method_MultipleViewComponent_OnClickServant__, v5);
    byte_40F7DE6 = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          v7 = this->fields.multipleViewManager,
          v12 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                                v8,
                                                                v9,
                                                                v10,
                                                                v11),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_B170D4();
    }
    MultipleViewListViewManager__SetMode(v7, 2, v12, 0LL);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isRequest);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  MultipleViewListViewManager_o *v5; // x0

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          (v5 = this->fields.multipleViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    MultipleViewListViewManager__SetMode_28754328(v5, 2, 0LL);
  }
  MultipleViewComponent__SetModeTabKind(this, 2, method);
}


void __fastcall MultipleViewComponent__EndClickTabLock(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v5; // x0

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          (v5 = this->fields.multipleViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    MultipleViewListViewManager__SetMode_28754328(v5, 2, 0LL);
  }
  MultipleViewComponent__SetModeTabKind(this, 1, method);
}


void __fastcall MultipleViewComponent__EndClickTabNormal(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v5; // x0

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          (v5 = this->fields.multipleViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    MultipleViewListViewManager__SetMode_28754328(v5, 2, 0LL);
  }
  MultipleViewComponent__SetModeTabKind(this, 0, method);
}


void __fastcall MultipleViewComponent__EndClickTabPush(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v5; // x0

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          (v5 = this->fields.multipleViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    MultipleViewListViewManager__SetMode_28754328(v5, 2, 0LL);
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
    sub_B16F98(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  MultipleViewListViewManager_o *v6; // x0
  MultipleViewListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  MultipleViewListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_40F7DE9 & 1) == 0 )
  {
    sub_B16FFC(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_MultipleViewComponent_OnClickServant__, v4);
    byte_40F7DE9 = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, 0LL),
        (v6 = this->fields.multipleViewManager) == 0LL)
    || (MultipleViewListViewManager__ModifyItem(v6, this->fields.usrSvtId, 0LL),
        v7 = this->fields.multipleViewManager,
        v12 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                              v8,
                                                              v9,
                                                              v10,
                                                              v11),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v7) )
  {
    sub_B170D4();
  }
  MultipleViewListViewManager__SetMode(v7, 2, v12, 0LL);
}


int32_t __fastcall MultipleViewComponent__GetCurrentSelectIndex(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  __int64 v5; // x20
  int size; // w8

  if ( (byte_40F7DF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    byte_40F7DF3 = 1;
  }
  listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_10:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    size = listSelectedUsrSvtId->fields._size;
    if ( (int)v5 >= size )
      break;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( listSelectedUsrSvtId->fields._items->m_Items[v5] < 1 )
      return v5;
    listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
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

  if ( (byte_40F7DE3 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9204, v2);
    byte_40F7DE3 = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9204,
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

  if ( (byte_40F7DF4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_7006, v3);
    sub_B16FFC(&StringLiteral_7007, v4);
    byte_40F7DF4 = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( (CurrentSelectIndex & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = (System_String_o *)StringLiteral_7007;
  }
  else
  {
    v5 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0LL);
    v6 = System_String__Concat_43743732((System_String_o *)StringLiteral_7006, v5, 0LL);
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
  System_String_o *TitleMessage; // x0
  const MethodInfo *v7; // x2

  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__DestroyList(multipleViewManager, 0LL),
        infoLb = this->fields.infoLb,
        this->fields.state = 0,
        TitleMessage = MultipleViewComponent__GetTitleMessage(this, v5),
        !infoLb) )
  {
    sub_B170D4();
  }
  UILabel__set_text(infoLb, TitleMessage, 0LL);
  MultipleViewComponent__SetModeTabKind(this, 0, v7);
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
  __int64 v7; // x3
  __int64 v8; // x4
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40F7DED & 1) == 0 )
  {
    sub_B16FFC(&Method_MultipleViewComponent_EndClickTabChoice__, method);
    sub_B16FFC(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F7DED = 1;
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
        v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                               MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                               v5,
                                                               v6,
                                                               v7,
                                                               v8);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                             MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                             v5,
                                                             v6,
                                                             v7,
                                                             v8);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v12, v13);
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
  System_Collections_Generic_List_long__o *v11; // x0
  MyRoomControl_o *myRoomControl; // x20
  System_Int64_array *v13; // x0
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v15; // x19
  System_Int32_array *v16; // x0

  if ( (byte_40F7DF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F7DF2 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(v7, listSelectedUsrSvtId->fields._items->m_Items[size - 1], v8);
      v11 = this->fields.listSelectedUsrSvtId;
      if ( !v11
        || (myRoomControl = this->fields.myRoomControl,
            v13 = System_Collections_Generic_List_long___ToArray(
                    v11,
                    (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0LL)
        || (v15 = v13,
            v16 = System_Collections_Generic_List_int___ToArray(
                    listSelectedImageLimitCount,
                    (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_21:
        sub_B170D4();
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v15, v16, 0LL);
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
  __int64 v7; // x3
  __int64 v8; // x4
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40F7DEC & 1) == 0 )
  {
    sub_B16FFC(&Method_MultipleViewComponent_EndClickTabLock__, method);
    sub_B16FFC(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F7DEC = 1;
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
        v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                               MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                               v5,
                                                               v6,
                                                               v7,
                                                               v8);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                             MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                             v5,
                                                             v6,
                                                             v7,
                                                             v8);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v12, v13);
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
  __int64 v7; // x3
  __int64 v8; // x4
  MultipleViewComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40F7DEB & 1) == 0 )
  {
    sub_B16FFC(&Method_MultipleViewComponent_EndClickTabNormal__, method);
    sub_B16FFC(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F7DEB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                          MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6,
                                                          v7,
                                                          v8);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v9, v10);
  }
}


void __fastcall MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  MultipleViewComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40F7DEE & 1) == 0 )
  {
    sub_B16FFC(&Method_MultipleViewComponent_EndClickTabPush__, method);
    sub_B16FFC(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F7DEE = 1;
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
    v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                          MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6,
                                                          v7,
                                                          v8);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v9, v10);
  }
}


void __fastcall MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40F7DF1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7DF1 = 1;
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
      sub_B170D4();
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, 0LL);
    MultipleViewComponent__UpdateScaleChangeIconSprite(this, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__OnClickServant(
        MultipleViewComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v41; // x1
  __int64 v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  MultipleViewListViewManager_o *multipleViewManager; // x0
  System_Int32_array **Item; // x1
  MultipleViewListViewItem_o **v57; // x21
  __int64 v58; // x8
  __int128 v59; // q1
  int32_t tabModeKind; // w8
  int32_t v61; // w0
  WebViewManager_o *Instance; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v68; // x20
  ServantStatusDialog_ResultDelegate_o *v69; // x22
  MultipleViewListViewItem_o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  MultipleViewListViewManager_o *v75; // x20
  MultipleViewListViewManager_CallbackFunc_o *v76; // x21
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  const MethodInfo *v81; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v83; // x22
  int32_t Index; // w0
  const MethodInfo *v85; // x1
  int32_t v86; // w21
  System_Collections_Generic_List_long__o *v87; // x0
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x0
  System_Collections_Generic_List_long__o *v89; // x0
  MultipleViewListViewManager_o *v90; // x20
  System_Int64_array *v91; // x0
  const MethodInfo *v92; // x1
  UILabel_o *infoLb; // x20
  System_String_o *TitleMessage; // x0
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v96; // x2
  int64_t pushUserSvtId; // x22
  struct UserServantEntity_o *v98; // x8
  __int128 v99; // q0
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  __int64 v104; // x21
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  const MethodInfo *v111; // x1
  int32_t CurrentSelectIndex; // w0
  __int64 v113; // x8
  __int64 v114; // x8
  __int64 v115; // x8
  __int128 v116; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v118; // x20
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  System_Action_bool__int__o *v123; // x22
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x25
  WarQuestSelectionMaster_o *v126; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v127; // x22
  __int64 v128; // x23
  __int64 v129; // x24
  int32_t v130; // w0
  ServantEntity_o *v131; // x26
  System_String_o *v132; // x22
  System_String_o *v133; // x23
  __int64 v134; // x2
  System_Object_array *v135; // x24
  int32_t Rarity; // w27
  System_String_o *RarityType; // x0
  __int64 v138; // x1
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x27
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Int32_array **v151; // x27
  int32_t v152; // w0
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Int32_array **v158; // x25
  UserServantEntity_o *v159; // x0
  int32_t v160; // w0
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **v166; // x25
  ServantEntity_o *servantEntity; // x0
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x25
  MultipleViewListViewItem_o *v174; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v175; // x9
  ServantEntity_o *v176; // x21
  int32_t v177; // w0
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  System_Int32_array **v183; // x21
  System_String_o *v184; // x21
  System_String_o *v185; // x23
  System_String_o *v186; // x24
  CommonUI_o *v187; // x25
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x3
  __int64 v191; // x4
  CommonConfirmDialog_ClickDelegate_o *v192; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v193; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v194; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v195; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v196; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v197; // 0:x0.16

  if ( (byte_40F7DE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__int___ctor__, *(_QWORD *)&kind);
    sub_B16FFC(&System_Action_bool__int__TypeInfo, v8);
    sub_B16FFC(&BalanceConfig_TypeInfo, v9);
    sub_B16FFC(&MultipleViewListViewManager_CallbackFunc_TypeInfo, v10);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__FindIndex__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__set_Item__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__set_Item__, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&Method_MultipleViewComponent_CloseSvtDetail__, v22);
    sub_B16FFC(&Method_MultipleViewComponent_OnClickServant__, v23);
    sub_B16FFC(&object___TypeInfo, v24);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_B16FFC(&Method_System_Predicate_long___ctor__, v27);
    sub_B16FFC(&System_Predicate_long__TypeInfo, v28);
    sub_B16FFC(&Rarity_TypeInfo, v29);
    sub_B16FFC(&ServantStatusDialog_ResultDelegate_TypeInfo, v30);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31);
    sub_B16FFC(&SoundManager_TypeInfo, v32);
    sub_B16FFC(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__, v33);
    sub_B16FFC(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__, v34);
    sub_B16FFC(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo, v35);
    sub_B16FFC(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__, v36);
    sub_B16FFC(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v37);
    sub_B16FFC(&StringLiteral_11946, v38);
    sub_B16FFC(&StringLiteral_11944, v39);
    sub_B16FFC(&StringLiteral_11945, v40);
    sub_B16FFC(&StringLiteral_11947, v41);
    byte_40F7DE7 = 1;
  }
  v42 = sub_B170CC(MultipleViewComponent___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n, method, v4);
  MultipleViewComponent___c__DisplayClass37_0___ctor((MultipleViewComponent___c__DisplayClass37_0_o *)v42, 0LL);
  if ( !v42 )
    goto LABEL_132;
  *(_QWORD *)(v42 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v42 + 16), (System_Int32_array **)this, v43, v44, v45, v46, v47, v48);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_132;
    Item = (System_Int32_array **)MultipleViewListViewManager__GetItem(multipleViewManager, n, 0LL);
  }
  *(_QWORD *)(v42 + 24) = Item;
  v57 = (MultipleViewListViewItem_o **)(v42 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v42 + 24), Item, v49, v50, v51, v52, v53, v54);
  if ( !*(_QWORD *)(v42 + 24) )
    goto LABEL_132;
  v58 = *(_QWORD *)(*(_QWORD *)(v42 + 24) + 112LL);
  if ( !v58 )
    goto LABEL_132;
  v59 = *(_OWORD *)(v58 + 32);
  *(_OWORD *)&v196.fields.currentCryptoKey = *(_OWORD *)(v58 + 16);
  *(_OWORD *)&v196.fields.fakeValue = v59;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v195 = v196;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v195, 0LL);
  if ( kind == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v57 )
    {
      userSvtEntity = (*v57)->fields.userSvtEntity;
      v68 = (CommonUI_o *)Instance;
      v69 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v63,
                                                      v64,
                                                      v65,
                                                      v66);
      ServantStatusDialog_ResultDelegate___ctor(
        v69,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0LL);
      if ( v68 )
      {
        CommonUI__OpenServantStatusDialog_18248808(v68, 0, userSvtEntity, v69, 0LL);
        return;
      }
    }
    goto LABEL_132;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v57 )
      goto LABEL_132;
    MultipleViewListViewItem__SwapChoice(*v57, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v61 = 0;
    goto LABEL_39;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v57 )
      goto LABEL_132;
    MultipleViewListViewItem__SwapLock(*v57, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v61 = 11;
    goto LABEL_39;
  }
  v70 = *v57;
  if ( !*v57 )
    goto LABEL_132;
  if ( tabModeKind != 3 )
  {
    if ( !MultipleViewListViewItem__get_IsCanNotSelect(v70, 0LL) )
    {
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      v83 = (System_Predicate_long__o *)sub_B170CC(System_Predicate_long__TypeInfo, v77, v78, v79, v80);
      System_Predicate_long____ctor(
        v83,
        (Il2CppObject *)v42,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        (const MethodInfo_2B0A168 *)Method_System_Predicate_long___ctor__);
      if ( !listSelectedUsrSvtId )
        goto LABEL_132;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v83,
                (const MethodInfo_2F16F14 *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v86 = Index;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        v87 = this->fields.listSelectedUsrSvtId;
        if ( !v87 )
          goto LABEL_132;
        System_Collections_Generic_List_long___set_Item(
          v87,
          v86,
          0LL,
          (const MethodInfo_2F16160 *)Method_System_Collections_Generic_List_long__set_Item__);
        listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount;
        if ( !listSelectedImageLimitCount )
          goto LABEL_132;
        System_Collections_Generic_List_int___set_Item(
          listSelectedImageLimitCount,
          v86,
          0,
          (const MethodInfo_2F101B0 *)Method_System_Collections_Generic_List_int__set_Item__);
        v89 = this->fields.listSelectedUsrSvtId;
        if ( !v89 )
          goto LABEL_132;
        v90 = this->fields.multipleViewManager;
        v91 = System_Collections_Generic_List_long___ToArray(
                v89,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v90 )
          goto LABEL_132;
        MultipleViewListViewManager__ModifyItem_28751320(v90, v91, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v92);
        goto LABEL_58;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v85) & 0x80000000) == 0 )
      {
        v104 = sub_B170CC(MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v100, v101, v102, v103);
        MultipleViewComponent___c__DisplayClass37_1___ctor((MultipleViewComponent___c__DisplayClass37_1_o *)v104, 0LL);
        if ( v104 )
        {
          *(_QWORD *)(v104 + 24) = v42;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v104 + 24),
            (System_Int32_array **)v42,
            v105,
            v106,
            v107,
            v108,
            v109,
            v110);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, v111);
          v113 = *(_QWORD *)(v104 + 24);
          *(_DWORD *)(v104 + 16) = CurrentSelectIndex;
          if ( v113 )
          {
            v114 = *(_QWORD *)(v113 + 24);
            if ( v114 )
            {
              v115 = *(_QWORD *)(v114 + 112);
              if ( v115 )
              {
                v116 = *(_OWORD *)(v115 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v196.fields.currentCryptoKey = *(_OWORD *)(v115 + 16);
                *(_OWORD *)&v196.fields.fakeValue = v116;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v193 = v196;
                v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v193, 0LL);
                v123 = (System_Action_bool__int__o *)sub_B170CC(
                                                       System_Action_bool__int__TypeInfo,
                                                       v119,
                                                       v120,
                                                       v121,
                                                       v122);
                System_Action_bool__int____ctor(
                  v123,
                  (Il2CppObject *)v104,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  (const MethodInfo_24C2A14 *)Method_System_Action_bool__int___ctor__);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v118, v123, *(_DWORD *)(v104 + 16), 0LL);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_132;
      }
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
LABEL_58:
    infoLb = this->fields.infoLb;
    TitleMessage = MultipleViewComponent__GetTitleMessage(this, v81);
    if ( infoLb )
    {
      UILabel__set_text(infoLb, TitleMessage, 0LL);
      goto LABEL_40;
    }
    goto LABEL_132;
  }
  if ( MultipleViewListViewItem__get_IsEventJoin(v70, 0LL) )
    goto LABEL_137;
  if ( !*v57 )
    goto LABEL_132;
  if ( MultipleViewListViewItem__get_IsHerioneReave(*v57, 0LL) )
  {
LABEL_137:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v61 = 2;
LABEL_39:
    SoundManager__playSystemSe(v61, 0LL);
    goto LABEL_40;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_132;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  if ( !pushUserSvtId )
  {
LABEL_71:
    MultipleViewComponent__PushRequest(this, *v57, v96);
    goto LABEL_40;
  }
  if ( !*v57 )
    goto LABEL_132;
  v98 = (*v57)->fields.userSvtEntity;
  if ( !v98 )
    goto LABEL_132;
  v99 = *(_OWORD *)&v98->fields.id.fields.fakeValue;
  *(_OWORD *)&v196.fields.currentCryptoKey = *(_OWORD *)&v98->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v196.fields.fakeValue = v99;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v194 = v196;
  if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v194, 0LL) )
    goto LABEL_71;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_132;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             Master_WarQuestSelectionMaster,
             pushUserSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v126 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_132;
  v127 = (DataMasterBase_WarMaster__WarEntity__int__o *)v126;
  v129 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v128 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v197.fields.currentCryptoKey = v129;
  *(_QWORD *)&v197.fields.fakeValue = v128;
  v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v197, 0LL);
  if ( !v127 )
    goto LABEL_132;
  v131 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v127,
                              v130,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v132 = LocalizationManager__Get((System_String_o *)StringLiteral_11947, 0LL);
  v133 = LocalizationManager__Get((System_String_o *)StringLiteral_11946, 0LL);
  v135 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v134);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = Rarity__getRarityType(Rarity, 0LL);
  if ( !v135 )
LABEL_132:
    sub_B170D4();
  v145 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v135->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_134;
  }
  if ( !v135->max_length )
    goto LABEL_133;
  v135->m_Items[0] = (Il2CppObject *)v145;
  sub_B16F98((BattleServantConfConponent_o *)v135->m_Items, v145, v139, v140, v141, v142, v143, v144);
  if ( !v131 )
    goto LABEL_132;
  RarityType = ServantEntity__getClassName(v131, 0LL);
  v151 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v135->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_134;
  }
  if ( v135->max_length <= 1 )
    goto LABEL_133;
  v135->m_Items[1] = (Il2CppObject *)v151;
  sub_B16F98((BattleServantConfConponent_o *)&v135->m_Items[1], v151, v139, v146, v147, v148, v149, v150);
  v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
  RarityType = ServantEntity__getName(v131, v152, -1, 0LL);
  v158 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v135->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_134;
  }
  if ( v135->max_length <= 2 )
    goto LABEL_133;
  v135->m_Items[2] = (Il2CppObject *)v158;
  sub_B16F98((BattleServantConfConponent_o *)&v135->m_Items[2], v158, v139, v153, v154, v155, v156, v157);
  if ( !*v57 )
    goto LABEL_132;
  v159 = (*v57)->fields.userSvtEntity;
  if ( !v159 )
    goto LABEL_132;
  v160 = UserServantEntity__getRarity(v159, 0LL);
  RarityType = Rarity__getRarityType(v160, 0LL);
  v166 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v135->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_134;
  }
  if ( v135->max_length <= 3 )
    goto LABEL_133;
  v135->m_Items[3] = (Il2CppObject *)v166;
  sub_B16F98((BattleServantConfConponent_o *)&v135->m_Items[3], v166, v139, v161, v162, v163, v164, v165);
  if ( !*v57 )
    goto LABEL_132;
  servantEntity = (*v57)->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_132;
  RarityType = ServantEntity__getClassName(servantEntity, 0LL);
  v173 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v135->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_134;
  }
  if ( v135->max_length <= 4 )
    goto LABEL_133;
  v135->m_Items[4] = (Il2CppObject *)v173;
  sub_B16F98((BattleServantConfConponent_o *)&v135->m_Items[4], v173, v139, v168, v169, v170, v171, v172);
  v174 = *v57;
  if ( !*v57 )
    goto LABEL_132;
  v175 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v174->fields.userSvtEntity;
  if ( !v175 )
    goto LABEL_132;
  v176 = v174->fields.servantEntity;
  v177 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v175[6], 0LL);
  if ( !v176 )
    goto LABEL_132;
  RarityType = ServantEntity__getName(v176, v177, -1, 0LL);
  v183 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v135->obj.klass->_1.element_class);
    if ( !RarityType )
    {
LABEL_134:
      sub_B170F4(RarityType);
      sub_B170A0();
    }
  }
  if ( v135->max_length <= 5 )
  {
LABEL_133:
    sub_B17100(RarityType, v138, v139);
    sub_B170A0();
  }
  v135->m_Items[5] = (Il2CppObject *)v183;
  sub_B16F98((BattleServantConfConponent_o *)&v135->m_Items[5], v183, v139, v178, v179, v180, v181, v182);
  v184 = System_String__Format_43822456(v133, v135, 0LL);
  v185 = LocalizationManager__Get((System_String_o *)StringLiteral_11945, 0LL);
  v186 = LocalizationManager__Get((System_String_o *)StringLiteral_11944, 0LL);
  v187 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v192 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v188,
                                                  v189,
                                                  v190,
                                                  v191);
  CommonConfirmDialog_ClickDelegate___ctor(
    v192,
    (Il2CppObject *)v42,
    Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__,
    0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v187 )
    goto LABEL_132;
  CommonUI__OpenConfirmDialog_18236860(
    v187,
    v132,
    v184,
    v185,
    v186,
    v192,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_40:
  v75 = this->fields.multipleViewManager;
  v76 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B170CC(
                                                        MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                        v71,
                                                        v72,
                                                        v73,
                                                        v74);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v76,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !v75 )
    goto LABEL_132;
  MultipleViewListViewManager__SetMode(v75, 2, v76, 0LL);
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x2
  System_Collections_Generic_IEnumerable_T__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_int__o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *v49; // x20
  bool IsActiveBgTxt; // w0
  MultipleViewComponent_o *v51; // x0
  const MethodInfo *v52; // x1
  int64_t LatestSelectedUsrSvtId; // x0
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v55; // x20
  System_Int64_array *v56; // x0
  const MethodInfo *v57; // x1
  MultipleViewListViewManager_o *v58; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  MultipleViewListViewManager_CallbackFunc_o *v63; // x21
  const MethodInfo *v64; // x1

  if ( (byte_40F7DE2 & 1) == 0 )
  {
    sub_B16FFC(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isResetSelected);
    sub_B16FFC(&int___TypeInfo, v5);
    sub_B16FFC(&long___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor___66737392, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B16FFC(&Method_MultipleViewComponent_OnClickServant__, v12);
    sub_B16FFC(&MyRoomControl_TypeInfo, v13);
    byte_40F7DE2 = 1;
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
    v15 = (System_Collections_Generic_IEnumerable_T__o *)sub_B17014(
                                                           long___TypeInfo,
                                                           (unsigned int)v14->static_fields->MULTIPLE_VIEW_SELECTED_MAX,
                                                           method);
    v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18,
                                                       v19);
    System_Collections_Generic_List_long____ctor_49371452(
      v20,
      v15,
      (const MethodInfo_2F1593C *)Method_System_Collections_Generic_List_long___ctor___66737392);
    this->fields.listSelectedUsrSvtId = v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.listSelectedUsrSvtId,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v28 = (System_Collections_Generic_IEnumerable_T__o *)sub_B17014(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX,
                                                           v27);
    v33 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v29,
                                                      v30,
                                                      v31,
                                                      v32);
    System_Collections_Generic_List_int____ctor_49346956(
      v33,
      v28,
      (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
    this->fields.listSelectedImageLimitCount = v33;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.listSelectedImageLimitCount,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v41, v42, v43, v44, v45, v46);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 60, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_16;
  v49 = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v49 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v49, IsActiveBgTxt, 0LL);
  LatestSelectedUsrSvtId = MultipleViewComponent__GetLatestSelectedUsrSvtId(v51, v52);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_16;
  multipleViewManager = this->fields.multipleViewManager;
  v55 = LatestSelectedUsrSvtId;
  v56 = System_Collections_Generic_List_long___ToArray(
          this->fields.listSelectedUsrSvtId,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v55, v56, 0LL),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v57),
        v58 = this->fields.multipleViewManager,
        v63 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                              v59,
                                                              v60,
                                                              v61,
                                                              v62),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v63,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v58) )
  {
LABEL_16:
    sub_B170D4();
  }
  MultipleViewListViewManager__SetMode(v58, 2, v63, 0LL);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v64);
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
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v14; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v17; // x21
  int64_t userId; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  int32_t v21; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CommonUI_o *Instance; // x0
  __int128 v24; // q1
  UserServantEntity_Fields *p_fields; // x24
  int64_t pushUserSvtId; // x8
  int64_t v27; // x0
  __int128 v28; // q0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  NetworkManager_ResultCallbackFunc_o *v33; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v35; // q0
  CardFavoriteRequest_o *v36; // x20
  int32_t v37; // w27
  int32_t v38; // w28
  int32_t v39; // w21
  bool IsLock; // w23
  bool IsChoice; // w0
  bool v42; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v46; // w0
  __int64 v47; // x8
  int32_t randomSettingSupport; // w19
  int32_t limitCountSupport; // w0
  int32_t v50; // [xsp+50h] [xbp-110h]
  int32_t v51; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v53; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v55; // [xsp+70h] [xbp-F0h]
  int64_t v56; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_40F7DE8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_MultipleViewComponent_EndePushRequest__, v6);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40F7DE8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_23;
  v14 = SelfUserGame;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v14 || !userSvtEntity )
    goto LABEL_23;
  v17 = (UserServantCollectionMaster_o *)Master_WarQuestSelectionMaster;
  userId = v14->fields.userId;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v20;
  *(_QWORD *)&v61.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
  if ( !v17 )
    goto LABEL_23;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, userId, v21, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag(Instance, 0, 0LL);
  v24 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  pushUserSvtId = v14->fields.pushUserSvtId;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v24;
  v56 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v59 = v60;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
  v28 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  favoriteUserSvtId = v14->fields.favoriteUserSvtId;
  v55 = v27;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v28;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v58, 0LL);
  v33 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v29,
                                                 v30,
                                                 v31,
                                                 v32);
  NetworkManager_ResultCallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v33,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v36 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v35;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v57, 0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.imageLimitCount, 0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.dispLimitCount, 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.iconLimitCount, 0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_23;
  v42 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v47 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v62.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v46;
  *(_QWORD *)&v62.fields.currentCryptoKey = v47;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
  if ( !v36 )
LABEL_23:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v36,
    targetUsrSVtId,
    v51,
    v50,
    v37,
    v38,
    v39,
    favoriteUserSvtId == v53,
    IsLock,
    v42,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v56 != v55,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__SetConfirmButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  UIButtonColor_o *v3; // x20
  int v4; // s0
  struct UIButtonColor_o *v8; // x0
  struct UIButtonColor_o *v9; // x0
  UIButtonColor_c *klass; // x8
  UIButtonColor_o *confirmBtnColor; // x20
  int v12; // s0
  struct UIButtonColor_o *v16; // x0
  struct UIButtonColor_o *v17; // x0

  if ( !this->fields.tabModeKind && (MultipleViewComponent__GetCurrentSelectIndex(this, method) & 0x80000000) != 0 )
  {
    confirmBtnColor = this->fields.confirmBtnColor;
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( confirmBtnColor )
    {
      UIButtonColor__set_defaultColor(confirmBtnColor, *(UnityEngine_Color_o *)&v12, 0LL);
      v16 = this->fields.confirmBtnColor;
      if ( v16 )
      {
        ((void (__fastcall *)(struct UIButtonColor_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._5_set_isEnabled.method)(
          v16,
          1LL,
          v16->klass->vtable._6_OnInit.methodPtr);
        v17 = this->fields.confirmBtnColor;
        if ( v17 )
        {
          klass = v17->klass;
          goto LABEL_7;
        }
      }
    }
LABEL_12:
    sub_B170D4();
  }
  v3 = this->fields.confirmBtnColor;
  *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_grey(0LL);
  if ( !v3 )
    goto LABEL_12;
  UIButtonColor__set_defaultColor(v3, *(UnityEngine_Color_o *)&v4, 0LL);
  v8 = this->fields.confirmBtnColor;
  if ( !v8 )
    goto LABEL_12;
  ((void (__fastcall *)(struct UIButtonColor_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._5_set_isEnabled.method)(
    v8,
    0LL,
    v8->klass->vtable._6_OnInit.methodPtr);
  v9 = this->fields.confirmBtnColor;
  if ( !v9 )
    goto LABEL_12;
  klass = v9->klass;
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
  if ( (byte_40F7DE4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9204, usrSvtId);
    byte_40F7DE4 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9204, v3, 0LL);
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
  UnityEngine_Collider_o *normalTabBoxCollider; // x0
  UISprite_o *normalTabSprite; // x0
  System_String_o **v19; // x8
  UnityEngine_Behaviour_o *lockTabButton; // x0
  UnityEngine_Collider_o *lockTabBoxCollider; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v23; // x8
  UnityEngine_Behaviour_o *choiceTabButton; // x0
  UnityEngine_Collider_o *choiceTabBoxCollider; // x0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v27; // x8
  UnityEngine_Behaviour_o *pushTabButton; // x0
  UnityEngine_Collider_o *pushTabBoxCollider; // x0
  UISprite_o *pushTabSprite; // x0
  System_String_o **v31; // x8
  const MethodInfo *v32; // x1
  UILabel_o *infoLb; // x21
  System_String_o *TitleMessage; // x0
  struct MultipleViewListViewManager_o *multipleViewManager; // x8
  MultipleViewListViewManager_o **p_multipleViewManager; // x21
  UILabel_o *v37; // x21
  __int64 *v38; // x8
  System_String_o *v39; // x0
  struct MultipleViewListViewManager_o *v40; // x8
  const MethodInfo *v41; // x1

  if ( (byte_40F7DEF & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&StringLiteral_11701, v5);
    sub_B16FFC(&StringLiteral_17071, v6);
    sub_B16FFC(&StringLiteral_17072, v7);
    sub_B16FFC(&StringLiteral_17057, v8);
    sub_B16FFC(&StringLiteral_17060, v9);
    sub_B16FFC(&StringLiteral_11699, v10);
    sub_B16FFC(&StringLiteral_11700, v11);
    sub_B16FFC(&StringLiteral_17073, v12);
    sub_B16FFC(&StringLiteral_17074, v13);
    sub_B16FFC(&StringLiteral_17059, v14);
    sub_B16FFC(&StringLiteral_17058, v15);
    byte_40F7DEF = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    normalTabBoxCollider = (UnityEngine_Collider_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabBoxCollider )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled(normalTabBoxCollider, this->fields.tabModeKind != 0, 0LL);
    normalTabSprite = this->fields.normalTabSprite;
    if ( !normalTabSprite )
      goto LABEL_51;
    v19 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17074 : &StringLiteral_17073);
    UISprite__set_spriteName(normalTabSprite, *v19, 0LL);
    lockTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(lockTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabBoxCollider = (UnityEngine_Collider_o *)this->fields.lockTabBoxCollider;
    if ( !lockTabBoxCollider )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled(lockTabBoxCollider, this->fields.tabModeKind != 1, 0LL);
    lockTabSprite = this->fields.lockTabSprite;
    if ( !lockTabSprite )
      goto LABEL_51;
    v23 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17059 : &StringLiteral_17060);
    UISprite__set_spriteName(lockTabSprite, *v23, 0LL);
    choiceTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(choiceTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabBoxCollider = (UnityEngine_Collider_o *)this->fields.choiceTabBoxCollider;
    if ( !choiceTabBoxCollider )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled(choiceTabBoxCollider, this->fields.tabModeKind != 2, 0LL);
    choiceTabSprite = this->fields.choiceTabSprite;
    if ( !choiceTabSprite )
      goto LABEL_51;
    v27 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17057 : &StringLiteral_17058);
    UISprite__set_spriteName(choiceTabSprite, *v27, 0LL);
    pushTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !pushTabButton
      || (UnityEngine_Behaviour__set_enabled(pushTabButton, this->fields.tabModeKind != 3, 0LL),
          (pushTabBoxCollider = (UnityEngine_Collider_o *)this->fields.pushTabBoxCollider) == 0LL)
      || (UnityEngine_Collider__set_enabled(pushTabBoxCollider, this->fields.tabModeKind != 3, 0LL),
          (pushTabSprite = this->fields.pushTabSprite) == 0LL) )
    {
LABEL_51:
      sub_B170D4();
    }
    if ( this->fields.tabModeKind == 3 )
      v31 = (System_String_o **)&StringLiteral_17071;
    else
      v31 = (System_String_o **)&StringLiteral_17072;
    UISprite__set_spriteName(pushTabSprite, *v31, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        TitleMessage = MultipleViewComponent__GetTitleMessage(this, v32);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, TitleMessage, 0LL);
        p_multipleViewManager = &this->fields.multipleViewManager;
        multipleViewManager = this->fields.multipleViewManager;
        if ( !multipleViewManager )
          goto LABEL_51;
        multipleViewManager->fields.isCanNotLongPush = 0;
        goto LABEL_48;
      case 1:
        v37 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v38 = &StringLiteral_11700;
        goto LABEL_44;
      case 2:
        v37 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v38 = &StringLiteral_11699;
        goto LABEL_44;
      case 3:
        v37 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v38 = &StringLiteral_11701;
LABEL_44:
        v39 = LocalizationManager__Get((System_String_o *)*v38, 0LL);
        if ( !v37 )
          goto LABEL_51;
        UILabel__set_text(v37, v39, 0LL);
        p_multipleViewManager = &this->fields.multipleViewManager;
        v40 = this->fields.multipleViewManager;
        if ( !v40 )
          goto LABEL_51;
        v40->fields.isCanNotLongPush = 1;
LABEL_48:
        if ( !*p_multipleViewManager )
          goto LABEL_51;
        MultipleViewListViewManager__UpdateDisplayState(*p_multipleViewManager, modeKind == 3, 0LL);
        if ( !*p_multipleViewManager )
          goto LABEL_51;
        MultipleViewListViewManager__SetMode_28754328(*p_multipleViewManager, 2, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v41);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t tabModeKind; // w8
  MultipleViewListViewManager_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v22; // x2
  System_Int64_array *v23; // x1
  bool v24; // w4
  bool v25; // w5
  MultipleViewListViewManager_o *multipleViewManager; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  NetworkManager_ResultCallbackFunc_o *v37; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40F7DF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_MultipleViewComponent_EndStatusSync__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_40F7DF0 = 1;
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v37 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v33,
                                                     v34,
                                                     v35,
                                                     v36);
      NetworkManager_ResultCallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v37,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unchoiceList;
        v23 = choiceList;
        v25 = 1;
        v24 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B170D4();
    }
  }
  else if ( tabModeKind == 1 )
  {
    v9 = this->fields.multipleViewManager;
    if ( !v9 )
      goto LABEL_23;
    if ( MultipleViewListViewManager__GetSwapLockList(v9, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
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
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v20,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unlockList;
        v23 = lockList;
        v24 = 1;
        v25 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v23, v22, 0, v24, v25, 0LL);
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
  System_String_o *ScaleButtonSpriteName; // x0

  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        ScaleButtonSpriteName = MultipleViewListViewManager__GetScaleButtonSpriteName(multipleViewManager, 0LL),
        !scaleChangeTabSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
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
  sub_B16F98(
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
  if ( (byte_40F8647 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F8647 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  MultipleViewComponent_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  MultipleViewComponent_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
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
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F8643 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__, v6);
    byte_40F8643 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_18237824(v12, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
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
    sub_B170D4();
  MultipleViewComponent__PushRequest(_4__this, this->fields.item, 0LL);
}


bool __fastcall MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__2(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct MultipleViewListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_40F8644 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, id);
    byte_40F8644 = 1;
  }
  item = this->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_B170D4();
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v9, 0LL) == id;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct MultipleViewComponent___c__DisplayClass37_0_o *CS___8__locals1; // x9
  struct MultipleViewComponent_o *_4__this; // x8
  struct MultipleViewListViewItem_o *item; // x9
  struct UserServantEntity_o *userSvtEntity; // x9
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  __int128 v18; // q1
  int32_t selectIndex; // w22
  int64_t v20; // x0
  struct MultipleViewComponent___c__DisplayClass37_0_o *v21; // x8
  struct MultipleViewComponent_o *v22; // x8
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x0
  struct MultipleViewComponent___c__DisplayClass37_0_o *v24; // x8
  struct MultipleViewComponent_o *v25; // x8
  System_Collections_Generic_List_long__o *v26; // x0
  MultipleViewListViewManager_o *multipleViewManager; // x20
  System_Int64_array *v28; // x0
  struct MultipleViewComponent___c__DisplayClass37_0_o *v29; // x8
  MultipleViewComponent_o *v30; // x0
  struct MultipleViewComponent___c__DisplayClass37_0_o *v31; // x8
  struct MultipleViewComponent_o *v32; // x22
  MultipleViewListViewManager_o *v33; // x20
  __int64 v34; // x21
  __int64 v35; // x9
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct MultipleViewComponent___c__DisplayClass37_0_o *v42; // x8
  MultipleViewComponent_o *v43; // x0
  UILabel_o *infoLb; // x19
  System_String_o *TitleMessage; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-40h]

  if ( (byte_40F8645 & 1) == 0 )
  {
    sub_B16FFC(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__set_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__set_Item__, v10);
    sub_B16FFC(&Method_MultipleViewComponent_OnClickServant__, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_40F8645 = 1;
  }
  if ( result )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
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
    v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    selectIndex = this->fields.selectIndex;
    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v47.fields.fakeValue = v18;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v46 = v47;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v46, 0LL);
    if ( !listSelectedUsrSvtId )
      goto LABEL_29;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      v20,
      (const MethodInfo_2F16160 *)Method_System_Collections_Generic_List_long__set_Item__);
    v21 = this->fields.CS___8__locals1;
    if ( !v21 )
      goto LABEL_29;
    v22 = v21->fields.__4__this;
    if ( !v22 )
      goto LABEL_29;
    listSelectedImageLimitCount = v22->fields.listSelectedImageLimitCount;
    if ( !listSelectedImageLimitCount )
      goto LABEL_29;
    System_Collections_Generic_List_int___set_Item(
      listSelectedImageLimitCount,
      this->fields.selectIndex,
      imageLimitCount,
      (const MethodInfo_2F101B0 *)Method_System_Collections_Generic_List_int__set_Item__);
    v24 = this->fields.CS___8__locals1;
    if ( !v24
      || (v25 = v24->fields.__4__this) == 0LL
      || (v26 = v25->fields.listSelectedUsrSvtId) == 0LL
      || (multipleViewManager = v25->fields.multipleViewManager,
          v28 = System_Collections_Generic_List_long___ToArray(
                  v26,
                  (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_28751320(multipleViewManager, v28, 0LL),
          (v29 = this->fields.CS___8__locals1) == 0LL)
      || (v30 = v29->fields.__4__this) == 0LL )
    {
LABEL_29:
      sub_B170D4();
    }
    MultipleViewComponent__SetConfirmButton(v30, 0LL);
  }
  v31 = this->fields.CS___8__locals1;
  if ( !v31 )
    goto LABEL_29;
  v32 = v31->fields.__4__this;
  if ( !v32 )
    goto LABEL_29;
  v33 = v32->fields.multipleViewManager;
  v34 = sub_B170CC(MultipleViewListViewManager_CallbackFunc_TypeInfo, result, *(_QWORD *)&imageLimitCount, method, v4);
  v35 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v34 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v34 + 16) = v35;
  *(_QWORD *)(v34 + 32) = v32;
  sub_B16F98((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v32, v36, v37, v38, v39, v40, v41);
  if ( !v33 )
    goto LABEL_29;
  MultipleViewListViewManager__SetMode(v33, 2, (MultipleViewListViewManager_CallbackFunc_o *)v34, 0LL);
  v42 = this->fields.CS___8__locals1;
  if ( !v42 )
    goto LABEL_29;
  v43 = v42->fields.__4__this;
  if ( !v43 )
    goto LABEL_29;
  infoLb = v43->fields.infoLb;
  TitleMessage = MultipleViewComponent__GetTitleMessage(v43, 0LL);
  if ( !infoLb )
    goto LABEL_29;
  UILabel__set_text(infoLb, TitleMessage, 0LL);
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
  struct MultipleViewComponent_o *_4__this; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct MultipleViewComponent_o *v8; // x8
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct MultipleViewComponent_o *v14; // x8
  ListViewManager_o *multipleViewManager; // x0
  struct MultipleViewComponent_o *v16; // x20
  MultipleViewListViewManager_o *v17; // x19
  __int64 v18; // x21
  __int64 v19; // x9
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F8646 & 1) == 0 )
  {
    sub_B16FFC(&MultipleViewListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_MultipleViewComponent_OnClickServant__, v3);
    sub_B16FFC(&StringLiteral_3034, v4);
    byte_40F8646 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    MultipleViewComponent__Init(_4__this, 0LL);
    v6 = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( v6 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        v8 = this->fields.__4__this;
        if ( v8 )
        {
          myRoomFsm = v8->fields.myRoomFsm;
          if ( myRoomFsm )
          {
            PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3034, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
  if ( !_4__this->fields.multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_18;
    multipleViewManager = (ListViewManager_o *)v14->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_18;
    ListViewManager__SortItem(multipleViewManager, -1, 0, -1, 0LL);
  }
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_18;
  v17 = v16->fields.multipleViewManager;
  v18 = sub_B170CC(MultipleViewListViewManager_CallbackFunc_TypeInfo, v10, v11, v12, v13);
  v19 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v18 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = v16;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v16, v20, v21, v22, v23, v24, v25);
  if ( !v17 )
    goto LABEL_18;
  MultipleViewListViewManager__SetMode(v17, 2, (MultipleViewListViewManager_CallbackFunc_o *)v18, 0LL);
}