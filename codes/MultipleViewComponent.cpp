void __fastcall MultipleViewComponent___ctor(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  System_Collections_Generic_List_long__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  System_Collections_Generic_List_int__o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_438A452 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor___69397496);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&MyRoomControl_TypeInfo);
    byte_438A452 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  v4 = (System_Collections_Generic_IEnumerable_T__o *)sub_B775DC(
                                                        long___TypeInfo,
                                                        (unsigned int)v3->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v5 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_51294772(
    v5,
    v4,
    (const MethodInfo_30EB234 *)Method_System_Collections_Generic_List_long___ctor___69397496);
  this->fields.listSelectedUsrSvtId = v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.listSelectedUsrSvtId,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_IEnumerable_T__o *)sub_B775DC(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v13 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51270276(
    v13,
    v12,
    (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.listSelectedImageLimitCount = v13;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.listSelectedImageLimitCount,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_438A442 & 1) == 0 )
  {
    sub_B775C4(&Method_MultipleViewComponent_EndCancelButton__);
    sub_B775C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_438A442 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B77694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    0LL);
  MultipleViewComponent__StatusRequest(this, v10, v11);
}


void __fastcall MultipleViewComponent__CloseSvtDetail(
        MultipleViewComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_438A447 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__);
    sub_B775C4(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
    byte_438A447 = 1;
  }
  v8 = sub_B77694(MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
  MultipleViewComponent___c__DisplayClass40_0___ctor((MultipleViewComponent___c__DisplayClass40_0_o *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_B77560((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B7769C(v9, v10);
  }
  CommonUI__CloseServantStatusDialog(Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__EndCancelButton(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v6; // x20
  MultipleViewListViewManager_CallbackFunc_o *v7; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_438A443 & 1) == 0 )
  {
    sub_B775C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_MultipleViewComponent_OnClickServant__);
    byte_438A443 = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          v6 = this->fields.multipleViewManager,
          v7 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B77694(MultipleViewListViewManager_CallbackFunc_TypeInfo),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            0LL),
          !v6) )
    {
LABEL_11:
      sub_B7769C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode(v6, 2, v7, 0LL);
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
      sub_B7769C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_27196876(multipleViewManager, 2, 0LL);
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
      sub_B7769C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_27196876(multipleViewManager, 2, 0LL);
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
      sub_B7769C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_27196876(multipleViewManager, 2, 0LL);
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
      sub_B7769C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_27196876(multipleViewManager, 2, 0LL);
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
    sub_B77560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MultipleViewComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall MultipleViewComponent__EndePushRequest(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v5; // x20
  MultipleViewListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_438A446 & 1) == 0 )
  {
    sub_B775C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_MultipleViewComponent_OnClickServant__);
    byte_438A446 = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, 0LL),
        (multipleViewManager = this->fields.multipleViewManager) == 0LL)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, 0LL),
        v5 = this->fields.multipleViewManager,
        v6 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B77694(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v5) )
  {
    sub_B7769C(multipleViewManager, result);
  }
  MultipleViewListViewManager__SetMode(v5, 2, v6, 0LL);
}


int32_t __fastcall MultipleViewComponent__GetCurrentSelectIndex(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  MultipleViewComponent_o *v2; // x19
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  __int64 v4; // x20
  int size; // w8

  v2 = this;
  if ( (byte_438A450 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    this = (MultipleViewComponent_o *)sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    byte_438A450 = 1;
  }
  listSelectedUsrSvtId = v2->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_10:
    sub_B7769C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    size = listSelectedUsrSvtId->fields._size;
    if ( (int)v4 >= size )
      break;
    if ( size <= (unsigned int)v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( listSelectedUsrSvtId->fields._items->m_Items[v4] < 1 )
      return v4;
    listSelectedUsrSvtId = v2->fields.listSelectedUsrSvtId;
    ++v4;
    if ( !listSelectedUsrSvtId )
      goto LABEL_10;
  }
  LODWORD(v4) = -1;
  return v4;
}


int64_t __fastcall MultipleViewComponent__GetLatestSelectedUsrSvtId(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v4; // x0
  int64_t result; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_438A440 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_9401/*"MultipleViewSelectedUsrSvtId"*/);
    byte_438A440 = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9401/*"MultipleViewSelectedUsrSvtId"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  v4 = -1LL;
  if ( !IsNullOrEmpty )
  {
    result = -1LL;
    if ( System_Int64__TryParse(String, &result, 0LL) )
      return result;
    else
      return -1LL;
  }
  return v4;
}


System_String_o *__fastcall MultipleViewComponent__GetTitleMessage(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t CurrentSelectIndex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438A451 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_7188/*"HEADER_MSG_MULTIPLE_SERVANT_"*/);
    sub_B775C4(&StringLiteral_7189/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/);
    byte_438A451 = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( (CurrentSelectIndex & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = (System_String_o *)StringLiteral_7189/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v3 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0LL);
    v4 = System_String__Concat_44901936((System_String_o *)StringLiteral_7188/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v3, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = v4;
  }
  return LocalizationManager__Get(v5, 0LL);
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
    sub_B7769C(multipleViewManager, method);
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
  const MethodInfo *v3; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_438A44A & 1) == 0 )
  {
    sub_B775C4(&Method_MultipleViewComponent_EndClickTabChoice__);
    sub_B775C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A44A = 1;
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
        v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B77694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B77694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v7, v8);
    }
    MultipleViewComponent__SetModeTabKind(this, 2, v3);
  }
}


void __fastcall MultipleViewComponent__OnClickDecide(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MultipleViewComponent_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x20
  int32_t size; // w8
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v10; // x19

  if ( (byte_438A44F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A44F = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(v3, listSelectedUsrSvtId->fields._items->m_Items[size - 1], v5);
      v3 = (MultipleViewComponent_o *)this->fields.listSelectedUsrSvtId;
      if ( !v3
        || (myRoomControl = this->fields.myRoomControl,
            v3 = (MultipleViewComponent_o *)System_Collections_Generic_List_long___ToArray(
                                              (System_Collections_Generic_List_long__o *)v3,
                                              (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0LL)
        || (v10 = (System_Int64_array *)v3,
            v3 = (MultipleViewComponent_o *)System_Collections_Generic_List_int___ToArray(
                                              listSelectedImageLimitCount,
                                              (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_21:
        sub_B7769C(v3, v4);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v10, (System_Int32_array *)v3, 0LL);
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
  const MethodInfo *v3; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_438A449 & 1) == 0 )
  {
    sub_B775C4(&Method_MultipleViewComponent_EndClickTabLock__);
    sub_B775C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A449 = 1;
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
        v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B77694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          0LL);
        MultipleViewComponent__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B77694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        0LL);
      MultipleViewComponent__StatusRequest(this, v7, v8);
    }
    MultipleViewComponent__SetModeTabKind(this, 1, v3);
  }
}


void __fastcall MultipleViewComponent__OnClickNormalTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MultipleViewComponent_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438A448 & 1) == 0 )
  {
    sub_B775C4(&Method_MultipleViewComponent_EndClickTabNormal__);
    sub_B775C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A448 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B77694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v3, v4);
  }
}


void __fastcall MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MultipleViewComponent_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438A44B & 1) == 0 )
  {
    sub_B775C4(&Method_MultipleViewComponent_EndClickTabPush__);
    sub_B775C4(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A44B = 1;
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
    v3 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_B77694(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      0LL);
    MultipleViewComponent__StatusRequest(this, v3, v4);
  }
}


void __fastcall MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438A44E & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A44E = 1;
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
      sub_B7769C(0LL, v3);
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, 0LL);
    MultipleViewComponent__UpdateScaleChangeIconSprite(this, v5);
  }
}


void __fastcall MultipleViewComponent__OnClickServant(
        MultipleViewComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x20
  MultipleViewListViewManager_o *multipleViewManager; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **Item; // x1
  MultipleViewListViewItem_o **v23; // x21
  __int64 v24; // x8
  __int128 v25; // q1
  int32_t tabModeKind; // w8
  int32_t v27; // w0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v29; // x20
  ServantStatusDialog_ResultDelegate_o *v30; // x22
  MultipleViewListViewManager_o *v31; // x20
  MultipleViewListViewManager_CallbackFunc_o *v32; // x21
  const MethodInfo *v33; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v35; // x22
  int32_t Index; // w0
  const MethodInfo *v37; // x1
  int32_t v38; // w21
  MultipleViewListViewManager_o *v39; // x20
  const MethodInfo *v40; // x1
  UILabel_o *infoLb; // x20
  const MethodInfo *v42; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *v44; // x8
  __int128 v45; // q0
  __int64 v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x1
  __int64 v54; // x8
  __int64 v55; // x8
  __int64 v56; // x8
  __int128 v57; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v59; // x20
  System_Action_bool__int__o *v60; // x22
  UserServantEntity_o *Entity; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x22
  __int64 v63; // x23
  __int64 v64; // x24
  ServantEntity_o *v65; // x26
  System_String_o *v66; // x22
  System_String_o *v67; // x23
  System_Object_array *v68; // x24
  int32_t Rarity; // w27
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x27
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x27
  int32_t v84; // w0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x25
  int32_t v92; // w0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x25
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x25
  MultipleViewListViewItem_o *v107; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v108; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x21
  System_String_o *v117; // x21
  System_String_o *v118; // x23
  System_String_o *v119; // x24
  CommonUI_o *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v121; // x26
  __int64 v122; // x0
  __int64 v123; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16

  if ( (byte_438A444 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool__int___ctor__);
    sub_B775C4(&System_Action_bool__int__TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_MultipleViewComponent_CloseSvtDetail__);
    sub_B775C4(&Method_MultipleViewComponent_OnClickServant__);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_System_Predicate_long___ctor__);
    sub_B775C4(&System_Predicate_long__TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__);
    sub_B775C4(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__);
    sub_B775C4(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
    sub_B775C4(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__);
    sub_B775C4(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
    sub_B775C4(&StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_438A444 = 1;
  }
  v7 = sub_B77694(MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
  MultipleViewComponent___c__DisplayClass37_0___ctor((MultipleViewComponent___c__DisplayClass37_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_132;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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
  *(_QWORD *)(v7 + 24) = Item;
  v23 = (MultipleViewListViewItem_o **)(v7 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), Item, v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_132;
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 112LL);
  if ( !v24 )
    goto LABEL_132;
  v25 = *(_OWORD *)(v24 + 32);
  *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
  *(_OWORD *)&v127.fields.fakeValue = v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v126 = v127;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v126, 0LL);
  if ( kind == 1 )
  {
    multipleViewManager = (MultipleViewListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      userSvtEntity = (*v23)->fields.userSvtEntity;
      v29 = (CommonUI_o *)multipleViewManager;
      v30 = (ServantStatusDialog_ResultDelegate_o *)sub_B77694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v30,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0LL);
      if ( v29 )
      {
        CommonUI__OpenServantStatusDialog_18067360(v29, 0, userSvtEntity, v30, 0, 0LL);
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
    multipleViewManager = (MultipleViewListViewManager_o *)*v23;
    if ( !*v23 )
      goto LABEL_132;
    MultipleViewListViewItem__SwapChoice((MultipleViewListViewItem_o *)multipleViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v27 = 0;
    goto LABEL_39;
  }
  if ( tabModeKind == 1 )
  {
    multipleViewManager = (MultipleViewListViewManager_o *)*v23;
    if ( !*v23 )
      goto LABEL_132;
    MultipleViewListViewItem__SwapLock((MultipleViewListViewItem_o *)multipleViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v27 = 11;
    goto LABEL_39;
  }
  multipleViewManager = (MultipleViewListViewManager_o *)*v23;
  if ( !*v23 )
    goto LABEL_132;
  if ( tabModeKind != 3 )
  {
    if ( !MultipleViewListViewItem__get_IsCanNotSelect((MultipleViewListViewItem_o *)multipleViewManager, 0LL) )
    {
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      v35 = (System_Predicate_long__o *)sub_B77694(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v35,
        (Il2CppObject *)v7,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        (const MethodInfo_2C313F0 *)Method_System_Predicate_long___ctor__);
      if ( !listSelectedUsrSvtId )
        goto LABEL_132;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v35,
                (const MethodInfo_30EC80C *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v38 = Index;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        multipleViewManager = (MultipleViewListViewManager_o *)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_132;
        System_Collections_Generic_List_long___set_Item(
          (System_Collections_Generic_List_long__o *)multipleViewManager,
          v38,
          0LL,
          (const MethodInfo_30EBA58 *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (MultipleViewListViewManager_o *)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_132;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v38,
          0,
          (const MethodInfo_30E5AA8 *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (MultipleViewListViewManager_o *)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_132;
        v39 = this->fields.multipleViewManager;
        multipleViewManager = (MultipleViewListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                 (System_Collections_Generic_List_long__o *)multipleViewManager,
                                                                 (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v39 )
          goto LABEL_132;
        MultipleViewListViewManager__ModifyItem_27193868(v39, (System_Int64_array *)multipleViewManager, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v40);
        goto LABEL_58;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v37) & 0x80000000) == 0 )
      {
        v46 = sub_B77694(MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
        MultipleViewComponent___c__DisplayClass37_1___ctor((MultipleViewComponent___c__DisplayClass37_1_o *)v46, 0LL);
        if ( v46 )
        {
          *(_QWORD *)(v46 + 24) = v7;
          sub_B77560(
            (BattleServantConfConponent_o *)(v46 + 24),
            (System_Int32_array **)v7,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          multipleViewManager = (MultipleViewListViewManager_o *)MultipleViewComponent__GetCurrentSelectIndex(this, v53);
          v54 = *(_QWORD *)(v46 + 24);
          *(_DWORD *)(v46 + 16) = (_DWORD)multipleViewManager;
          if ( v54 )
          {
            v55 = *(_QWORD *)(v54 + 24);
            if ( v55 )
            {
              v56 = *(_QWORD *)(v55 + 112);
              if ( v56 )
              {
                v57 = *(_OWORD *)(v56 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)(v56 + 16);
                *(_OWORD *)&v127.fields.fakeValue = v57;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v124 = v127;
                v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v124, 0LL);
                v60 = (System_Action_bool__int__o *)sub_B77694(System_Action_bool__int__TypeInfo);
                System_Action_bool__int____ctor(
                  v60,
                  (Il2CppObject *)v46,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  (const MethodInfo_26AC5D0 *)Method_System_Action_bool__int___ctor__);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v59, v60, *(_DWORD *)(v46 + 16), 0LL);
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
    multipleViewManager = (MultipleViewListViewManager_o *)MultipleViewComponent__GetTitleMessage(this, v33);
    if ( infoLb )
    {
      UILabel__set_text(infoLb, (System_String_o *)multipleViewManager, 0LL);
      goto LABEL_40;
    }
    goto LABEL_132;
  }
  if ( MultipleViewListViewItem__get_IsEventJoin((MultipleViewListViewItem_o *)multipleViewManager, 0LL) )
    goto LABEL_137;
  multipleViewManager = (MultipleViewListViewManager_o *)*v23;
  if ( !*v23 )
    goto LABEL_132;
  if ( MultipleViewListViewItem__get_IsHerioneReave((MultipleViewListViewItem_o *)multipleViewManager, 0LL) )
  {
LABEL_137:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v27 = 2;
LABEL_39:
    SoundManager__playSystemSe(v27, 0LL);
    goto LABEL_40;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  multipleViewManager = (MultipleViewListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !multipleViewManager )
    goto LABEL_132;
  dropList = (int64_t)multipleViewManager->fields.dropList;
  if ( !dropList )
  {
LABEL_71:
    MultipleViewComponent__PushRequest(this, *v23, v42);
    goto LABEL_40;
  }
  if ( !*v23 )
    goto LABEL_132;
  v44 = (*v23)->fields.userSvtEntity;
  if ( !v44 )
    goto LABEL_132;
  v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
  *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v127.fields.fakeValue = v45;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v125 = v127;
  if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v125, 0LL) )
    goto LABEL_71;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  multipleViewManager = (MultipleViewListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_132;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)multipleViewManager,
             dropList,
             (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (MultipleViewListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_132;
  v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)multipleViewManager;
  v64 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v128.fields.currentCryptoKey = v64;
  *(_QWORD *)&v128.fields.fakeValue = v63;
  multipleViewManager = (MultipleViewListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                           v128,
                                                           0LL);
  if ( !v62 )
    goto LABEL_132;
  v65 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v62,
                             (int32_t)multipleViewManager,
                             (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v68 = (System_Object_array *)sub_B775DC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  multipleViewManager = (MultipleViewListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v68 )
LABEL_132:
    sub_B7769C(multipleViewManager, v9);
  v76 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = (MultipleViewListViewManager_o *)sub_B77684(
                                                             multipleViewManager,
                                                             v68->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_134;
  }
  if ( !v68->max_length )
    goto LABEL_133;
  v68->m_Items[0] = (Il2CppObject *)v76;
  sub_B77560((BattleServantConfConponent_o *)v68->m_Items, v76, v70, v71, v72, v73, v74, v75);
  if ( !v65 )
    goto LABEL_132;
  multipleViewManager = (MultipleViewListViewManager_o *)ServantEntity__getClassName(v65, 0LL);
  v83 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = (MultipleViewListViewManager_o *)sub_B77684(
                                                             multipleViewManager,
                                                             v68->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_134;
  }
  if ( v68->max_length <= 1 )
    goto LABEL_133;
  v68->m_Items[1] = (Il2CppObject *)v83;
  sub_B77560((BattleServantConfConponent_o *)&v68->m_Items[1], v83, v77, v78, v79, v80, v81, v82);
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(Entity->fields.limitCount, 0LL);
  multipleViewManager = (MultipleViewListViewManager_o *)ServantEntity__getName(v65, v84, -1, 0LL);
  v91 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = (MultipleViewListViewManager_o *)sub_B77684(
                                                             multipleViewManager,
                                                             v68->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_134;
  }
  if ( v68->max_length <= 2 )
    goto LABEL_133;
  v68->m_Items[2] = (Il2CppObject *)v91;
  sub_B77560((BattleServantConfConponent_o *)&v68->m_Items[2], v91, v85, v86, v87, v88, v89, v90);
  if ( !*v23 )
    goto LABEL_132;
  multipleViewManager = (MultipleViewListViewManager_o *)(*v23)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_132;
  v92 = UserServantEntity__getRarity((UserServantEntity_o *)multipleViewManager, 0LL);
  multipleViewManager = (MultipleViewListViewManager_o *)Rarity__getRarityType(v92, 0LL);
  v99 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = (MultipleViewListViewManager_o *)sub_B77684(
                                                             multipleViewManager,
                                                             v68->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_134;
  }
  if ( v68->max_length <= 3 )
    goto LABEL_133;
  v68->m_Items[3] = (Il2CppObject *)v99;
  sub_B77560((BattleServantConfConponent_o *)&v68->m_Items[3], v99, v93, v94, v95, v96, v97, v98);
  if ( !*v23 )
    goto LABEL_132;
  multipleViewManager = (MultipleViewListViewManager_o *)(*v23)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_132;
  multipleViewManager = (MultipleViewListViewManager_o *)ServantEntity__getClassName(
                                                           (ServantEntity_o *)multipleViewManager,
                                                           0LL);
  v106 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = (MultipleViewListViewManager_o *)sub_B77684(
                                                             multipleViewManager,
                                                             v68->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_134;
  }
  if ( v68->max_length <= 4 )
    goto LABEL_133;
  v68->m_Items[4] = (Il2CppObject *)v106;
  sub_B77560((BattleServantConfConponent_o *)&v68->m_Items[4], v106, v100, v101, v102, v103, v104, v105);
  v107 = *v23;
  if ( !*v23 )
    goto LABEL_132;
  v108 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v107->fields.userSvtEntity;
  if ( !v108 )
    goto LABEL_132;
  servantEntity = v107->fields.servantEntity;
  multipleViewManager = (MultipleViewListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                           v108[6],
                                                           0LL);
  if ( !servantEntity )
    goto LABEL_132;
  multipleViewManager = (MultipleViewListViewManager_o *)ServantEntity__getName(
                                                           servantEntity,
                                                           (int32_t)multipleViewManager,
                                                           -1,
                                                           0LL);
  v116 = (System_Int32_array **)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = (MultipleViewListViewManager_o *)sub_B77684(
                                                             multipleViewManager,
                                                             v68->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_134:
      v123 = sub_B776BC(multipleViewManager);
      sub_B77668(v123, 0LL);
    }
  }
  if ( v68->max_length <= 5 )
  {
LABEL_133:
    v122 = sub_B776C8(multipleViewManager);
    sub_B77668(v122, 0LL);
  }
  v68->m_Items[5] = (Il2CppObject *)v116;
  sub_B77560((BattleServantConfConponent_o *)&v68->m_Items[5], v116, v110, v111, v112, v113, v114, v115);
  v117 = System_String__Format_44980660(v67, v68, 0LL);
  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v119 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v121 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v121,
    (Il2CppObject *)v7,
    Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__,
    0LL);
  multipleViewManager = (MultipleViewListViewManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_132;
  CommonUI__OpenConfirmDialog_18055364(
    Instance,
    v66,
    v117,
    v118,
    v119,
    v121,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_40:
  v31 = this->fields.multipleViewManager;
  v32 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B77694(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !v31 )
    goto LABEL_132;
  MultipleViewListViewManager__SetMode(v31, 2, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__Open(
        MultipleViewComponent_o *this,
        bool isResetSelected,
        const MethodInfo *method)
{
  MyRoomControl_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *v6; // x20
  System_Collections_Generic_List_long__o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_IEnumerable_T__o *v14; // x21
  System_Collections_Generic_List_int__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int64_t gameObject; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_GameObject_o *v30; // x20
  MultipleViewComponent_o *v31; // x0
  const MethodInfo *v32; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v34; // x20
  const MethodInfo *v35; // x1
  MultipleViewListViewManager_o *v36; // x20
  MultipleViewListViewManager_CallbackFunc_o *v37; // x21
  const MethodInfo *v38; // x1

  if ( (byte_438A43F & 1) == 0 )
  {
    sub_B775C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor___69397496);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&Method_MultipleViewComponent_OnClickServant__);
    sub_B775C4(&MyRoomControl_TypeInfo);
    byte_438A43F = 1;
  }
  if ( isResetSelected )
  {
    v5 = MyRoomControl_TypeInfo;
    if ( (BYTE3(MyRoomControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v5 = MyRoomControl_TypeInfo;
    }
    v6 = (System_Collections_Generic_IEnumerable_T__o *)sub_B775DC(
                                                          long___TypeInfo,
                                                          (unsigned int)v5->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_51294772(
      v7,
      v6,
      (const MethodInfo_30EB234 *)Method_System_Collections_Generic_List_long___ctor___69397496);
    this->fields.listSelectedUsrSvtId = v7;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.listSelectedUsrSvtId,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = (System_Collections_Generic_IEnumerable_T__o *)sub_B775DC(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v15 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_51270276(
      v15,
      v14,
      (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.listSelectedImageLimitCount = v15;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.listSelectedImageLimitCount,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v24, v25, v26, v27, v28, v29);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__changeTitleInfo_18674844((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v30 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v30, gameObject & 1, 0LL);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v31, v32);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_16;
  multipleViewManager = this->fields.multipleViewManager;
  v34 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v34, (System_Int64_array *)gameObject, 0LL),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v35),
        v36 = this->fields.multipleViewManager,
        v37 = (MultipleViewListViewManager_CallbackFunc_o *)sub_B77694(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v37,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v36) )
  {
LABEL_16:
    sub_B7769C(gameObject, v23);
  }
  MultipleViewListViewManager__SetMode(v36, 2, v37, 0LL);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v38);
}


void __fastcall MultipleViewComponent__PushRequest(
        MultipleViewComponent_o *this,
        MultipleViewListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CommonUI_o *limitCountSupport; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q1
  UserServantEntity_Fields *p_fields; // x24
  struct UnityEngine_Transform_o *baseMount; // x8
  int64_t v17; // x0
  __int128 v18; // q0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v21; // q0
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w21
  bool IsLock; // w23
  char v27; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t v34; // [xsp+50h] [xbp-110h]
  int32_t v35; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct SoundInfo_o *soundInfo; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct UnityEngine_Transform_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_438A445 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_MultipleViewComponent_EndePushRequest__);
    sub_B775C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A445 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_23;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_23;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v45, 0LL);
  if ( !v9 )
    goto LABEL_23;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  baseMount = v7->fields.baseMount;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = baseMount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v43, 0LL);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v7->fields.soundInfo;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(userSvtEntity->fields.imageLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(userSvtEntity->fields.dispLimitCount, 0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(userSvtEntity->fields.iconLimitCount, 0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_23;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v46, 0LL);
  if ( !v22 )
LABEL_23:
    sub_B7769C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    v35,
    v34,
    v23,
    v24,
    v25,
    soundInfo == (struct SoundInfo_o *)v37,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct UnityEngine_Transform_o *)v39,
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
    sub_B7769C(v4, v5);
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
  if ( (byte_438A441 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9401/*"MultipleViewSelectedUsrSvtId"*/);
    byte_438A441 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9401/*"MultipleViewSelectedUsrSvtId"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__SetModeTabKind(
        MultipleViewComponent_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v6; // x8
  System_String_o **v7; // x8
  System_String_o **v8; // x8
  __int64 *v9; // x8
  UILabel_o *infoLb; // x21
  struct MultipleViewListViewManager_o *multipleViewManager; // x8
  struct MultipleViewListViewManager_o **p_multipleViewManager; // x21
  UILabel_o *v13; // x21
  __int64 *v14; // x8
  struct MultipleViewListViewManager_o *v15; // x8
  const MethodInfo *v16; // x1

  if ( (byte_438A44C & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B775C4(&StringLiteral_17477/*"button_push_reg"*/);
    sub_B775C4(&StringLiteral_17478/*"button_push_unreg"*/);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438A44C = 1;
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
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17480/*"button_select_unreg"*/ : &StringLiteral_17479/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0LL);
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
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17465/*"button_alllock_reg"*/ : &StringLiteral_17466/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0LL);
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
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17463/*"button_allchoice_reg"*/ : &StringLiteral_17464/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0LL);
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
      sub_B7769C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17477/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17478/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0LL);
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
        v13 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = &StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_44;
      case 2:
        v13 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = &StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_44;
      case 3:
        v13 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v14 = &StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_44:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v14, 0LL);
        if ( !v13 )
          goto LABEL_51;
        UILabel__set_text(v13, (System_String_o *)normalTabButton, 0LL);
        p_multipleViewManager = &this->fields.multipleViewManager;
        v15 = this->fields.multipleViewManager;
        if ( !v15 )
          goto LABEL_51;
        v15->fields.isCanNotLongPush = 1;
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
        MultipleViewListViewManager__SetMode_27196876((MultipleViewListViewManager_o *)normalTabButton, 2, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v16);
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
  int32_t tabModeKind; // w8
  MultipleViewListViewManager_o *multipleViewManager; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x2
  System_Int64_array *v15; // x1
  bool v16; // w4
  bool v17; // w5
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_438A44D & 1) == 0 )
  {
    sub_B775C4(&Method_MultipleViewComponent_EndStatusSync__);
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438A44D = 1;
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
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v24,
                                                               (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v14 = unchoiceList;
        v15 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B7769C(multipleViewManager, callback);
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
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                               (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
                                                                 0LL),
        !scaleChangeTabSprite) )
  {
    sub_B7769C(multipleViewManager, method);
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_438C14D & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438C14D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
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


void __fastcall MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__0(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438C149 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__);
    byte_438C149 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18056328(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B7769C(Instance, v6);
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
    sub_B7769C(0LL, method);
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
  if ( (byte_438C14A & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438C14A = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_B7769C(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v9, 0LL) == id;
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
  struct MultipleViewComponent___c__DisplayClass37_0_o *v19; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v20; // x8
  struct MultipleViewComponent_o *v21; // x22
  MultipleViewListViewManager_o *v22; // x20
  __int64 v23; // x21
  __int64 v24; // x9
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct MultipleViewComponent___c__DisplayClass37_0_o *v31; // x8
  UILabel_o *v32; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_438C14B & 1) == 0 )
  {
    sub_B775C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_B775C4(&Method_MultipleViewComponent_OnClickServant__);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438C14B = 1;
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
    v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    selectIndex = v6->fields.selectIndex;
    *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v34.fields.fakeValue = v12;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v33 = v34;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                              &v33,
                                                              0LL);
    if ( !listSelectedUsrSvtId )
      goto LABEL_29;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_30EBA58 *)Method_System_Collections_Generic_List_long__set_Item__);
    v14 = v6->fields.CS___8__locals1;
    if ( !v14 )
      goto LABEL_29;
    v15 = v14->fields.__4__this;
    if ( !v15 )
      goto LABEL_29;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)v15->fields.listSelectedImageLimitCount;
    if ( !this )
      goto LABEL_29;
    System_Collections_Generic_List_int___set_Item(
      (System_Collections_Generic_List_int__o *)this,
      v6->fields.selectIndex,
      imageLimitCount,
      (const MethodInfo_30E5AA8 *)Method_System_Collections_Generic_List_int__set_Item__);
    v16 = v6->fields.CS___8__locals1;
    if ( !v16
      || (v17 = v16->fields.__4__this) == 0LL
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v17->fields.listSelectedUsrSvtId) == 0LL
      || (multipleViewManager = v17->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_27193868(multipleViewManager, (System_Int64_array *)this, 0LL),
          (v19 = v6->fields.CS___8__locals1) == 0LL)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v19->fields.__4__this) == 0LL )
    {
LABEL_29:
      sub_B7769C(this, result);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, 0LL);
  }
  v20 = v6->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_29;
  v21 = v20->fields.__4__this;
  if ( !v21 )
    goto LABEL_29;
  v22 = v21->fields.multipleViewManager;
  v23 = sub_B77694(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  v24 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v23 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v23 + 16) = v24;
  *(_QWORD *)(v23 + 32) = v21;
  sub_B77560((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)v21, v25, v26, v27, v28, v29, v30);
  if ( !v22 )
    goto LABEL_29;
  MultipleViewListViewManager__SetMode(v22, 2, (MultipleViewListViewManager_CallbackFunc_o *)v23, 0LL);
  v31 = v6->fields.CS___8__locals1;
  if ( !v31 )
    goto LABEL_29;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)v31->fields.__4__this;
  if ( !this )
    goto LABEL_29;
  v32 = *(UILabel_o **)&this[1].fields.selectIndex;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)MultipleViewComponent__GetTitleMessage(
                                                            (MultipleViewComponent_o *)this,
                                                            0LL);
  if ( !v32 )
    goto LABEL_29;
  UILabel__set_text(v32, (System_String_o *)this, 0LL);
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
  MultipleViewComponent_o *_4__this; // x0
  struct MultipleViewComponent_o *v4; // x8
  struct MultipleViewComponent_o *v5; // x8
  struct MultipleViewComponent_o *v6; // x20
  MultipleViewListViewManager_o *multipleViewManager; // x19
  __int64 v8; // x21
  __int64 v9; // x9
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_438C14C & 1) == 0 )
  {
    sub_B775C4(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_MultipleViewComponent_OnClickServant__);
    sub_B775C4(&StringLiteral_3161/*"CLICK_BACK"*/);
    byte_438C14C = 1;
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
        v4 = this->fields.__4__this;
        if ( v4 )
        {
          _4__this = (MultipleViewComponent_o *)v4->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3161/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B7769C(_4__this, method);
  }
  if ( !_4__this->fields.multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_18;
    _4__this = (MultipleViewComponent_o *)v5->fields.multipleViewManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_18;
  multipleViewManager = v6->fields.multipleViewManager;
  v8 = sub_B77694(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  v9 = *(_QWORD *)Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v8 + 40) = Method_MultipleViewComponent_OnClickServant__;
  *(_QWORD *)(v8 + 16) = v9;
  *(_QWORD *)(v8 + 32) = v6;
  sub_B77560((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)v6, v10, v11, v12, v13, v14, v15);
  if ( !multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__SetMode(multipleViewManager, 2, (MultipleViewListViewManager_CallbackFunc_o *)v8, 0LL);
}