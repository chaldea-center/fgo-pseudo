void __fastcall MultipleViewComponent___ctor(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  MyRoomControl_c *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_long__o *v21; // x21
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x21

  if ( (byte_4B1184D & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&long___TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor___76787640, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v12, v13);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v14, v15);
    byte_4B1184D = 1;
  }
  v16 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method);
    v16 = MyRoomControl_TypeInfo;
  }
  v17 = (System_Collections_Generic_IEnumerable_T__o *)sub_1BCA888(
                                                         long___TypeInfo,
                                                         (unsigned int)v16->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v21 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20);
  System_Collections_Generic_List_long____ctor_56137060(
    v21,
    v17,
    (const MethodInfo_3589564 *)Method_System_Collections_Generic_List_long___ctor___76787640);
  this->fields.listSelectedUsrSvtId = v21;
  sub_1BCA784(&this->fields.listSelectedUsrSvtId, v21);
  v22 = (System_Collections_Generic_IEnumerable_T__o *)sub_1BCA888(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v26 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25);
  System_Collections_Generic_List_int____ctor_56116492(
    v26,
    v22,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  this->fields.listSelectedImageLimitCount = v26;
  sub_1BCA784(&this->fields.listSelectedImageLimitCount, v26);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MultipleViewComponent__CancelMultipleViewWindow(
        MultipleViewComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4B1183D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MultipleViewComponent_EndCancelButton__, callback, method);
    sub_1BCA7E0(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v5, v6);
    byte_4B1183D = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1BCA784(&this->fields.cancelCallback, callback);
  v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                         v7,
                                                         v8,
                                                         v9);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    v11);
  MultipleViewComponent__StatusRequest(this, v10, v12);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  MultipleViewComponent___c__DisplayClass40_0_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Instance; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x20

  if ( (byte_4B11842 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v10, v11);
    sub_1BCA7E0(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo, v12, v13);
    byte_4B11842 = 1;
  }
  v14 = (MultipleViewComponent___c__DisplayClass40_0_o *)sub_1BCAA2C(
                                                           MultipleViewComponent___c__DisplayClass40_0_TypeInfo,
                                                           isDecide,
                                                           isNeedSort,
                                                           *(_QWORD *)&questId);
  MultipleViewComponent___c__DisplayClass40_0___ctor(v14, 0LL);
  if ( !v14
    || (v14->fields.questId = questId,
        v14->fields.__4__this = this,
        sub_1BCA784(&v14->fields.__4__this, this),
        v14->fields.isNeedSort = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v14,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v15, v16);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__EndCancelButton(
        MultipleViewComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  MultipleViewListViewManager_CallbackFunc_o *v12; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_4B1183E & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isRequest, method);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickServant__, v5, v6);
    byte_4B1183E = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          v8 = this->fields.multipleViewManager,
          v12 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                                v9,
                                                                v10,
                                                                v11),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            0LL),
          !v8) )
    {
LABEL_11:
      sub_1BCAA3C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode(v8, 2, v12, 0LL);
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
      sub_1BCAA3C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31836508(multipleViewManager, 2, 0LL);
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
      sub_1BCAA3C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31836508(multipleViewManager, 2, 0LL);
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
      sub_1BCAA3C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31836508(multipleViewManager, 2, 0LL);
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
      sub_1BCAA3C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31836508(multipleViewManager, 2, 0LL);
  }
  MultipleViewComponent__SetModeTabKind(this, 3, method);
}


void __fastcall MultipleViewComponent__EndStatusSync(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct MultipleViewComponent_RequestCallbackFunc_o **p_requedstCallback; // x0
  struct MultipleViewComponent_RequestCallbackFunc_o *v4; // x19
  struct MultipleViewComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = &this->fields.requedstCallback;
  v4 = requedstCallback;
  if ( requedstCallback )
  {
    *p_requedstCallback = 0LL;
    sub_1BCA784(p_requedstCallback, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      1LL,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall MultipleViewComponent__EndePushRequest(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  MultipleViewListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4B11841 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickServant__, v4, v5);
    byte_4B11841 = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, 0LL),
        (multipleViewManager = this->fields.multipleViewManager) == 0LL)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, 0LL),
        v7 = this->fields.multipleViewManager,
        v11 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                              v8,
                                                              v9,
                                                              v10),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v7) )
  {
    sub_1BCAA3C(multipleViewManager, result);
  }
  MultipleViewListViewManager__SetMode(v7, 2, v11, 0LL);
}


int32_t __fastcall MultipleViewComponent__GetCurrentSelectIndex(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  int32_t v7; // w20

  if ( (byte_4B1184B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v4, v5);
    byte_4B1184B = 1;
  }
  listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_8:
    sub_1BCAA3C(listSelectedUsrSvtId, method);
  v7 = 0;
  while ( v7 < listSelectedUsrSvtId->fields._size )
  {
    if ( System_Collections_Generic_List_long___get_Item(
           listSelectedUsrSvtId,
           v7,
           (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__) < 1 )
      return v7;
    listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
    ++v7;
    if ( !listSelectedUsrSvtId )
      goto LABEL_8;
  }
  return -1;
}


int64_t __fastcall MultipleViewComponent__GetLatestSelectedUsrSvtId(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v7; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1183B & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9304/*"MultipleViewSelectedUsrSvtId"*/, v3, v4);
    byte_4B1183B = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9304/*"MultipleViewSelectedUsrSvtId"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  v7 = -1LL;
  if ( !IsNullOrEmpty )
  {
    result = -1LL;
    if ( System_Int64__TryParse(String, &result, 0LL) )
      return result;
    else
      return -1LL;
  }
  return v7;
}


System_String_o *__fastcall MultipleViewComponent__GetTitleMessage(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  int32_t CurrentSelectIndex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B1184C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_7230/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_7231/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, v6, v7);
    byte_4B1184C = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( (CurrentSelectIndex & 0x80000000) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v12 = (System_String_o *)StringLiteral_7231/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v9 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0LL);
    v11 = System_String__Concat_62401220((System_String_o *)StringLiteral_7230/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v9, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    v12 = v11;
  }
  return LocalizationManager__Get(v12, 0LL);
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
    sub_1BCAA3C(multipleViewManager, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B11845 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MultipleViewComponent_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickChoiceTabButton__, v4, v5);
    sub_1BCA7E0(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11845 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_MultipleViewComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickChoiceTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v14 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                               MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                               v10,
                                                               v11,
                                                               v12);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          v15);
        MultipleViewComponent__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                             MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                             v10,
                                                             v11,
                                                             v12);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        v18);
      MultipleViewComponent__StatusRequest(this, v17, v19);
    }
    MultipleViewComponent__SetModeTabKind(this, 2, v11);
  }
}


void __fastcall MultipleViewComponent__OnClickDecide(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  MultipleViewComponent_o *Item; // x0
  const MethodInfo *v19; // x2
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v22; // x19

  if ( (byte_4B1184A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickDecide__, v10, v11);
    byte_4B1184A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.tabModeKind && (MultipleViewComponent__GetCurrentSelectIndex(this, method) & 0x80000000) != 0 )
    {
      v14 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickDecide__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0LL);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      this->fields.state = 4;
      if ( !listSelectedUsrSvtId )
        goto LABEL_17;
      Item = (MultipleViewComponent_o *)System_Collections_Generic_List_long___get_Item(
                                          listSelectedUsrSvtId,
                                          listSelectedUsrSvtId->fields._size - 1,
                                          (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(Item, (int64_t)Item, v19);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      if ( !listSelectedUsrSvtId
        || (myRoomControl = this->fields.myRoomControl,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                                listSelectedUsrSvtId,
                                                                                (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0LL)
        || (v22 = (System_Int64_array *)listSelectedUsrSvtId,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_int___ToArray(
                                                                                listSelectedImageLimitCount,
                                                                                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_17:
        sub_1BCAA3C(listSelectedUsrSvtId, v16);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v22, (System_Int32_array *)listSelectedUsrSvtId, 0LL);
    }
    else
    {
      v12 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickDecide__);
      v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
    }
  }
}


void __fastcall MultipleViewComponent__OnClickLockTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B11844 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MultipleViewComponent_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickLockTabButton__, v4, v5);
    sub_1BCA7E0(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11844 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_MultipleViewComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickLockTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v14 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                               MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                               v10,
                                                               v11,
                                                               v12);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          v15);
        MultipleViewComponent__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                             MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                             v10,
                                                             v11,
                                                             v12);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        v18);
      MultipleViewComponent__StatusRequest(this, v17, v19);
    }
    MultipleViewComponent__SetModeTabKind(this, 1, v11);
  }
}


void __fastcall MultipleViewComponent__OnClickNormalTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  MultipleViewComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B11843 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MultipleViewComponent_EndClickTabNormal__, method, v2);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickNormalTabButton__, v4, v5);
    sub_1BCA7E0(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11843 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_MultipleViewComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickNormalTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                           MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                           v10,
                                                           v11,
                                                           v12);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      v14);
    MultipleViewComponent__StatusRequest(this, v13, v15);
  }
}


void __fastcall MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  MultipleViewComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B11846 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MultipleViewComponent_EndClickTabPush__, method, v2);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickPushTabButton__, v4, v5);
    sub_1BCA7E0(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11846 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_MultipleViewComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickPushTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                           MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                           v10,
                                                           v11,
                                                           v12);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      v14);
    MultipleViewComponent__StatusRequest(this, v13, v15);
  }
}


void __fastcall MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B11849 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickScaleChange__, method, v2);
    byte_4B11849 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MultipleViewComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      sub_1BCAA3C(0LL, v6);
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, 0LL);
    MultipleViewComponent__UpdateScaleChangeIconSprite(this, v8);
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
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  Il2CppObject *v69; // x20
  __int64 multipleViewManager; // x0
  __int64 v71; // x1
  MultipleViewListViewItem_o *Item; // x1
  MultipleViewListViewItem_o **p_monitor; // x21
  __int64 v74; // x8
  __int128 v75; // q1
  int32_t tabModeKind; // w8
  _QWORD *v77; // x0
  System_Reflection_MethodBase_o *v78; // x0
  int32_t v79; // w1
  __int64 v80; // x2
  __int64 v81; // x3
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v83; // x20
  ServantStatusDialog_ResultDelegate_o *v84; // x22
  _QWORD *v85; // x0
  _QWORD *v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  MultipleViewListViewManager_o *v90; // x20
  MultipleViewListViewManager_CallbackFunc_o *v91; // x21
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  _QWORD *v95; // x0
  System_Reflection_MethodBase_o *v96; // x0
  const MethodInfo *v97; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v99; // x22
  int32_t Index; // w0
  const MethodInfo *v101; // x1
  int32_t v102; // w21
  _QWORD *v103; // x0
  System_Reflection_MethodBase_o *v104; // x0
  MultipleViewListViewManager_o *v105; // x20
  const MethodInfo *v106; // x1
  UILabel_o *infoLb; // x20
  _QWORD *v108; // x0
  System_Reflection_MethodBase_o *v109; // x0
  const MethodInfo *v110; // x2
  int64_t v111; // x22
  struct UserServantEntity_o *v112; // x8
  __int128 v113; // q0
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x21
  _QWORD *v119; // x0
  System_Reflection_MethodBase_o *v120; // x0
  const MethodInfo *v121; // x1
  __int64 v122; // x8
  __int64 v123; // x8
  __int64 v124; // x8
  __int128 v125; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v127; // x20
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x3
  System_Action_bool__int__o *v131; // x22
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v133; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v136; // x1
  Il2CppObject *v137; // x26
  System_String_o *v138; // x22
  System_String_o *v139; // x23
  System_Object_array *v140; // x24
  __int64 v141; // x1
  int32_t Rarity; // w27
  Il2CppObject *v143; // x27
  Il2CppObject *v144; // x27
  int32_t v145; // w0
  Il2CppObject *v146; // x25
  int32_t v147; // w0
  Il2CppObject *v148; // x25
  Il2CppObject *v149; // x25
  MultipleViewListViewItem_o *v150; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v151; // x9
  ServantEntity_o *servantEntity; // x21
  Il2CppObject *v153; // x21
  System_String_o *v154; // x21
  System_String_o *v155; // x23
  System_String_o *v156; // x24
  Il2CppObject *Instance; // x25
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  CommonConfirmDialog_ClickDelegate_o *v161; // x26
  __int64 v162; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16

  if ( (byte_4B1183F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__int__TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&MultipleViewListViewManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__FindIndex__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__set_Item__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__set_Item__, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_MultipleViewComponent_CloseSvtDetail__, v33, v34);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickServant__, v35, v36);
    sub_1BCA7E0(&object___TypeInfo, v37, v38);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41, v42);
    sub_1BCA7E0(&System_Predicate_long__TypeInfo, v43, v44);
    sub_1BCA7E0(&Rarity_TypeInfo, v45, v46);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v49, v50);
    sub_1BCA7E0(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__, v51, v52);
    sub_1BCA7E0(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__, v53, v54);
    sub_1BCA7E0(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo, v55, v56);
    sub_1BCA7E0(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__, v57, v58);
    sub_1BCA7E0(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v59, v60);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v67, v68);
    byte_4B1183F = 1;
  }
  v69 = (Il2CppObject *)sub_1BCAA2C(
                          MultipleViewComponent___c__DisplayClass37_0_TypeInfo,
                          *(_QWORD *)&kind,
                          *(_QWORD *)&n,
                          method);
  System_Object___ctor(v69, 0LL);
  if ( !v69 )
    goto LABEL_117;
  v69[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v69[1], this);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    multipleViewManager = (__int64)this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_117;
    Item = MultipleViewListViewManager__GetItem((MultipleViewListViewManager_o *)multipleViewManager, n, 0LL);
  }
  v69[1].monitor = Item;
  p_monitor = (MultipleViewListViewItem_o **)&v69[1].monitor;
  multipleViewManager = sub_1BCA784(&v69[1].monitor, Item);
  if ( !v69[1].monitor )
    goto LABEL_117;
  v74 = *((_QWORD *)v69[1].monitor + 14);
  if ( !v74 )
    goto LABEL_117;
  v75 = *(_OWORD *)(v74 + 32);
  *(_OWORD *)&v166.fields.currentCryptoKey = *(_OWORD *)(v74 + 16);
  *(_OWORD *)&v166.fields.fakeValue = v75;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v71);
  v165 = v166;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v165, 0LL);
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v83 = (CommonUI_o *)multipleViewManager;
      v84 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v71,
                                                      v80,
                                                      v81);
      ServantStatusDialog_ResultDelegate___ctor(
        v84,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0LL);
      if ( v83 )
      {
        CommonUI__OpenServantStatusDialog_30777260(v83, 0, userSvtEntity, v84, 0, 0LL);
        return;
      }
    }
    goto LABEL_117;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    multipleViewManager = (__int64)*p_monitor;
    if ( !*p_monitor )
      goto LABEL_117;
    MultipleViewListViewItem__SwapChoice((MultipleViewListViewItem_o *)multipleViewManager, 0LL);
    v85 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v85 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickServant__);
    v78 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v85, v85[4]);
    v79 = 0;
    goto LABEL_35;
  }
  if ( tabModeKind == 1 )
  {
    multipleViewManager = (__int64)*p_monitor;
    if ( !*p_monitor )
      goto LABEL_117;
    MultipleViewListViewItem__SwapLock((MultipleViewListViewItem_o *)multipleViewManager, 0LL);
    v77 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v77 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickServant__);
    v78 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v77, v77[4]);
    v79 = 11;
    goto LABEL_35;
  }
  multipleViewManager = (__int64)*p_monitor;
  if ( !*p_monitor )
    goto LABEL_117;
  if ( tabModeKind != 3 )
  {
    if ( !MultipleViewListViewItem__get_IsCanNotSelect((MultipleViewListViewItem_o *)multipleViewManager, 0LL) )
    {
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      v99 = (System_Predicate_long__o *)sub_1BCAA2C(System_Predicate_long__TypeInfo, v92, v93, v94);
      System_Predicate_long____ctor(
        v99,
        v69,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        0LL);
      if ( !listSelectedUsrSvtId )
        goto LABEL_117;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v99,
                (const MethodInfo_358A4C4 *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v102 = Index;
        v103 = Method_MultipleViewComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
          v103 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickServant__);
        v104 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v103, v103[4]);
        OverwriteAssetSoundName__PlaySystemSe(v104, 1, 0LL);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_117;
        System_Collections_Generic_List_long___set_Item(
          (System_Collections_Generic_List_long__o *)multipleViewManager,
          v102,
          0LL,
          (const MethodInfo_35899F4 *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_117;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v102,
          0,
          (const MethodInfo_358499C *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_117;
        v105 = this->fields.multipleViewManager;
        multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                         (System_Collections_Generic_List_long__o *)multipleViewManager,
                                         (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v105 )
          goto LABEL_117;
        MultipleViewListViewManager__ModifyItem_31834448(v105, (System_Int64_array *)multipleViewManager, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v106);
        goto LABEL_52;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v101) & 0x80000000) == 0 )
      {
        v118 = sub_1BCAA2C(MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v115, v116, v117);
        System_Object___ctor((Il2CppObject *)v118, 0LL);
        if ( v118 )
        {
          *(_QWORD *)(v118 + 24) = v69;
          sub_1BCA784(v118 + 24, v69);
          v119 = Method_MultipleViewComponent_OnClickServant__;
          if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
            v119 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickServant__);
          v120 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v119, v119[4]);
          OverwriteAssetSoundName__PlaySystemSe(v120, 0, 0LL);
          multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v121);
          v122 = *(_QWORD *)(v118 + 24);
          *(_DWORD *)(v118 + 16) = multipleViewManager;
          if ( v122 )
          {
            v123 = *(_QWORD *)(v122 + 24);
            if ( v123 )
            {
              v124 = *(_QWORD *)(v123 + 112);
              if ( v124 )
              {
                v125 = *(_OWORD *)(v124 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v166.fields.currentCryptoKey = *(_OWORD *)(v124 + 16);
                *(_OWORD *)&v166.fields.fakeValue = v125;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v71);
                v163 = v166;
                v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v163, 0LL);
                v131 = (System_Action_bool__int__o *)sub_1BCAA2C(System_Action_bool__int__TypeInfo, v128, v129, v130);
                System_Action_bool__int____ctor(
                  v131,
                  (Il2CppObject *)v118,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  0LL);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v127, v131, *(_DWORD *)(v118 + 16), 0LL);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_117;
      }
    }
    v95 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v95 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickServant__);
    v96 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v95, v95[4]);
    OverwriteAssetSoundName__PlaySystemSe(v96, 2, 0LL);
LABEL_52:
    infoLb = this->fields.infoLb;
    multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v97);
    if ( infoLb )
    {
      UILabel__set_text(infoLb, (System_String_o *)multipleViewManager, 0LL);
      goto LABEL_36;
    }
    goto LABEL_117;
  }
  if ( MultipleViewListViewItem__get_IsEventJoin((MultipleViewListViewItem_o *)multipleViewManager, 0LL) )
    goto LABEL_32;
  multipleViewManager = (__int64)*p_monitor;
  if ( !*p_monitor )
    goto LABEL_117;
  if ( MultipleViewListViewItem__get_IsHerioneReave((MultipleViewListViewItem_o *)multipleViewManager, 0LL) )
  {
LABEL_32:
    v86 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v86 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickServant__);
    v78 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v86, v86[4]);
    v79 = 2;
LABEL_35:
    OverwriteAssetSoundName__PlaySystemSe(v78, v79, 0LL);
    goto LABEL_36;
  }
  v108 = Method_MultipleViewComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
    v108 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewComponent_OnClickServant__);
  v109 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v108, v108[4]);
  OverwriteAssetSoundName__PlaySystemSe(v109, 0, 0LL);
  multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !multipleViewManager )
    goto LABEL_117;
  v111 = *(_QWORD *)(multipleViewManager + 120);
  if ( !v111 )
  {
LABEL_63:
    MultipleViewComponent__PushRequest(this, *p_monitor, v110);
    goto LABEL_36;
  }
  if ( !*p_monitor )
    goto LABEL_117;
  v112 = (*p_monitor)->fields.userSvtEntity;
  if ( !v112 )
    goto LABEL_117;
  v113 = *(_OWORD *)&v112->fields.id.fields.fakeValue;
  *(_OWORD *)&v166.fields.currentCryptoKey = *(_OWORD *)&v112->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v166.fields.fakeValue = v113;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v71);
  v164 = v166;
  if ( v111 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v164, 0LL) )
    goto LABEL_63;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v114);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_117;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager,
             v111,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_117;
  v133 = (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
  *(_QWORD *)&v167.fields.currentCryptoKey = klass;
  *(_QWORD *)&v167.fields.fakeValue = monitor;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v167, 0LL);
  if ( !v133 )
    goto LABEL_117;
  v137 = DataMasterBase_object__object__int___GetEntity(
           v133,
           multipleViewManager,
           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v136);
  v138 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v139 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v140 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v141);
  multipleViewManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v140 )
LABEL_117:
    sub_1BCAA3C(multipleViewManager, v71);
  v143 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1BCA91C(multipleViewManager, v140->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( !v140->max_length )
    goto LABEL_118;
  v140->m_Items[0] = v143;
  multipleViewManager = sub_1BCA784(v140->m_Items, v143);
  if ( !v137 )
    goto LABEL_117;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v137, 0LL);
  v144 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1BCA91C(multipleViewManager, v140->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v140->max_length <= 1 )
    goto LABEL_118;
  v140->m_Items[1] = v144;
  sub_1BCA784(&v140->m_Items[1], v144);
  v145 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
           0LL);
  multipleViewManager = (__int64)ServantEntity__getName((ServantEntity_o *)v137, v145, -1, 0LL);
  v146 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1BCA91C(multipleViewManager, v140->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v140->max_length <= 2 )
    goto LABEL_118;
  v140->m_Items[2] = v146;
  multipleViewManager = sub_1BCA784(&v140->m_Items[2], v146);
  if ( !*p_monitor )
    goto LABEL_117;
  multipleViewManager = (__int64)(*p_monitor)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_117;
  v147 = UserServantEntity__getRarity((UserServantEntity_o *)multipleViewManager, 0LL);
  multipleViewManager = (__int64)Rarity__getRarityType(v147, 0LL);
  v148 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1BCA91C(multipleViewManager, v140->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v140->max_length <= 3 )
    goto LABEL_118;
  v140->m_Items[3] = v148;
  multipleViewManager = sub_1BCA784(&v140->m_Items[3], v148);
  if ( !*p_monitor )
    goto LABEL_117;
  multipleViewManager = (__int64)(*p_monitor)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_117;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0LL);
  v149 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1BCA91C(multipleViewManager, v140->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v140->max_length <= 4 )
    goto LABEL_118;
  v140->m_Items[4] = v149;
  multipleViewManager = sub_1BCA784(&v140->m_Items[4], v149);
  v150 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_117;
  v151 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v150->fields.userSvtEntity;
  if ( !v151 )
    goto LABEL_117;
  servantEntity = v150->fields.servantEntity;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v151[6], 0LL);
  if ( !servantEntity )
    goto LABEL_117;
  multipleViewManager = (__int64)ServantEntity__getName(servantEntity, multipleViewManager, -1, 0LL);
  v153 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1BCA91C(multipleViewManager, v140->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_119:
      v162 = sub_1BCAA60();
      sub_1BCA908(v162, 0LL);
    }
  }
  if ( v140->max_length <= 5 )
LABEL_118:
    sub_1BCAA44(multipleViewManager, v71);
  v140->m_Items[5] = v153;
  sub_1BCA784(&v140->m_Items[5], v153);
  v154 = System_String__Format_62415728(v139, v140, 0LL);
  v155 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v156 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v161 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v158,
                                                  v159,
                                                  v160);
  CommonConfirmDialog_ClickDelegate___ctor(
    v161,
    v69,
    Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__,
    0LL);
  multipleViewManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v71);
  if ( !Instance )
    goto LABEL_117;
  CommonUI__OpenConfirmDialog_30766228(
    (CommonUI_o *)Instance,
    v138,
    v154,
    v155,
    v156,
    v161,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_36:
  v90 = this->fields.multipleViewManager;
  v91 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                        v87,
                                                        v88,
                                                        v89);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v91,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !v90 )
    goto LABEL_117;
  MultipleViewListViewManager__SetMode(v90, 2, v91, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__Open(
        MultipleViewComponent_o *this,
        bool isResetSelected,
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
  MyRoomControl_c *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_long__o *v28; // x21
  System_Collections_Generic_IEnumerable_T__o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_int__o *v33; // x21
  int64_t gameObject; // x0
  __int64 v35; // x1
  UnityEngine_GameObject_o *v36; // x20
  MultipleViewComponent_o *v37; // x0
  const MethodInfo *v38; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v40; // x20
  const MethodInfo *v41; // x1
  MultipleViewListViewManager_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  MultipleViewListViewManager_CallbackFunc_o *v46; // x21
  const MethodInfo *v47; // x1

  if ( (byte_4B1183A & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isResetSelected, method);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor___76787640, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickServant__, v19, v20);
    sub_1BCA7E0(&MyRoomControl_TypeInfo, v21, v22);
    byte_4B1183A = 1;
  }
  if ( isResetSelected )
  {
    v23 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, isResetSelected);
      v23 = MyRoomControl_TypeInfo;
    }
    v24 = (System_Collections_Generic_IEnumerable_T__o *)sub_1BCA888(
                                                           long___TypeInfo,
                                                           (unsigned int)v23->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v28 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27);
    System_Collections_Generic_List_long____ctor_56137060(
      v28,
      v24,
      (const MethodInfo_3589564 *)Method_System_Collections_Generic_List_long___ctor___76787640);
    this->fields.listSelectedUsrSvtId = v28;
    sub_1BCA784(&this->fields.listSelectedUsrSvtId, v28);
    v29 = (System_Collections_Generic_IEnumerable_T__o *)sub_1BCA888(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v33 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v30,
                                                      v31,
                                                      v32);
    System_Collections_Generic_List_int____ctor_56116492(
      v33,
      v29,
      (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
    this->fields.listSelectedImageLimitCount = v33;
    sub_1BCA784(&this->fields.listSelectedImageLimitCount, v33);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_1BCA784(&this->fields.cancelCallback, 0LL);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_15;
  TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)gameObject, 1, 61, 0, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_15;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v36 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v36, gameObject & 1, 0LL);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v37, v38);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_15;
  multipleViewManager = this->fields.multipleViewManager;
  v40 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v40, (System_Int64_array *)gameObject, 0LL),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v41),
        v42 = this->fields.multipleViewManager,
        v46 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                              v43,
                                                              v44,
                                                              v45),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v46,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v42) )
  {
LABEL_15:
    sub_1BCAA3C(gameObject, v35);
  }
  MultipleViewListViewManager__SetMode(v42, 2, v46, 0LL);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v47);
}


void __fastcall MultipleViewComponent__PushRequest(
        MultipleViewComponent_o *this,
        MultipleViewListViewItem_o *selectItem,
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
  CommonUI_o *limitCountSupport; // x0
  __int64 v22; // x1
  CommonUI_o *v23; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct SoundInfo_o *soundInfo; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct AssetsInfo_o *assetsInfo; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct SoundInfo_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B11840 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_MultipleViewComponent_EndePushRequest__, v7, v8);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    byte_4B11840 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v23 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v23 || !userSvtEntity )
    goto LABEL_19;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v23->fields.soundInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = soundInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v23->fields.assetsInfo;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndePushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.dispLimitCount, 0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.iconLimitCount, 0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_19:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    assetsInfo == (struct AssetsInfo_o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct SoundInfo_o *)v60,
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
    sub_1BCAA3C(confirmBtnColor, method);
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
  if ( (byte_4B1183C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9304/*"MultipleViewSelectedUsrSvtId"*/, usrSvtId, method);
    byte_4B1183C = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9304/*"MultipleViewSelectedUsrSvtId"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewComponent__SetModeTabKind(
        MultipleViewComponent_o *this,
        int32_t modeKind,
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
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v28; // x8
  System_String_o **v29; // x8
  System_String_o **v30; // x8
  __int64 *v31; // x8
  UILabel_o *infoLb; // x21
  char v33; // w8
  UILabel_o *v34; // x21
  __int64 *v35; // x8
  const MethodInfo *v36; // x1

  if ( (byte_4B11847 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v25, v26);
    byte_4B11847 = 1;
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
    v28 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17842/*"button_select_unreg"*/ : &StringLiteral_17841/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v28, 0LL);
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
    v29 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17827/*"button_alllock_reg"*/ : &StringLiteral_17828/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v29, 0LL);
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
    v30 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17825/*"button_allchoice_reg"*/ : &StringLiteral_17826/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v30, 0LL);
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
      sub_1BCAA3C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v31 = &StringLiteral_17839/*"button_push_reg"*/;
    else
      v31 = &StringLiteral_17840/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
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
        v33 = 0;
        goto LABEL_46;
      case 1:
        v34 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v35 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_43;
      case 2:
        v34 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v35 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_43;
      case 3:
        v34 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v35 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_43:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v35, 0LL);
        if ( !v34 )
          goto LABEL_49;
        UILabel__set_text(v34, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        v33 = 1;
LABEL_46:
        *((_BYTE *)&normalTabButton[15].fields + 4) = v33;
LABEL_47:
        MultipleViewListViewManager__UpdateDisplayState(
          (MultipleViewListViewManager_o *)normalTabButton,
          modeKind == 3,
          0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        MultipleViewListViewManager__SetMode_31836508((MultipleViewListViewManager_o *)normalTabButton, 2, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v36);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t tabModeKind; // w8
  MultipleViewListViewManager_o *multipleViewManager; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  __int64 v17; // x1
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w4
  bool v21; // w5
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  __int64 v26; // x1
  System_Int64_array *v27; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B11848 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MultipleViewComponent_EndStatusSync__, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B11848 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v27 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapChoiceList(multipleViewManager, &choiceList, &v27, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1BCA784(&this->fields.requedstCallback, callback);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v22,
                                                     v23,
                                                     v24);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v25,
                                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v19 = v27;
        v18 = choiceList;
        v21 = 1;
        v20 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCAA3C(multipleViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapLockList(multipleViewManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1BCA784(&this->fields.requedstCallback, callback);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v13,
                                                     v14,
                                                     v15);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v16,
                                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v19 = unlockList;
        v18 = lockList;
        v20 = 1;
        v21 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v18, v19, 0, v20, v21, 0LL);
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
                                                                 0LL),
        !scaleChangeTabSprite) )
  {
    sub_1BCAA3C(multipleViewManager, method);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0626C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06224;
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
  if ( (byte_4B1184E & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B1184E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4B1184F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__, v7, v8);
    byte_4B1184F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1BCA784(&this->fields.__9__1, _9__1);
    }
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v10);
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
    sub_1BCAA3C(this, method);
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
  if ( (byte_4B11850 & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_1BCA7E0(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              id,
                                                              method);
    byte_4B11850 = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_1BCAA3C(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, id);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v9, 0LL) == id;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct MultipleViewComponent___c__DisplayClass37_0_o *CS___8__locals1; // x9
  struct MultipleViewComponent_o *_4__this; // x8
  struct MultipleViewListViewItem_o *item; // x9
  struct UserServantEntity_o *userSvtEntity; // x9
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  __int128 v22; // q1
  int32_t selectIndex; // w22
  struct MultipleViewComponent___c__DisplayClass37_0_o *v24; // x8
  struct MultipleViewComponent_o *v25; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v26; // x8
  struct MultipleViewComponent_o *v27; // x8
  MultipleViewListViewManager_o *multipleViewManager; // x20
  struct MultipleViewComponent___c__DisplayClass37_0_o *v29; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v30; // x8
  Il2CppObject *v31; // x22
  MultipleViewListViewManager_o *klass; // x20
  MultipleViewListViewManager_CallbackFunc_o *v33; // x21
  struct MultipleViewComponent___c__DisplayClass37_0_o *v34; // x8
  UILabel_o *v35; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4B11851 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__set_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__set_Item__, v11, v12);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickServant__, v13, v14);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_1BCA7E0(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              v15,
                                                              v16);
    byte_4B11851 = 1;
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
    v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    selectIndex = v6->fields.selectIndex;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v22;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, result);
    v36 = v37;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                              &v36,
                                                              0LL);
    if ( !listSelectedUsrSvtId )
      goto LABEL_28;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_35899F4 *)Method_System_Collections_Generic_List_long__set_Item__);
    v24 = v6->fields.CS___8__locals1;
    if ( !v24 )
      goto LABEL_28;
    v25 = v24->fields.__4__this;
    if ( !v25 )
      goto LABEL_28;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)v25->fields.listSelectedImageLimitCount;
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_List_int___set_Item(
      (System_Collections_Generic_List_int__o *)this,
      v6->fields.selectIndex,
      imageLimitCount,
      (const MethodInfo_358499C *)Method_System_Collections_Generic_List_int__set_Item__);
    v26 = v6->fields.CS___8__locals1;
    if ( !v26
      || (v27 = v26->fields.__4__this) == 0LL
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v27->fields.listSelectedUsrSvtId) == 0LL
      || (multipleViewManager = v27->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_31834448(multipleViewManager, (System_Int64_array *)this, 0LL),
          (v29 = v6->fields.CS___8__locals1) == 0LL)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v29->fields.__4__this) == 0LL )
    {
LABEL_28:
      sub_1BCAA3C(this, result);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, (const MethodInfo *)result);
  }
  v30 = v6->fields.CS___8__locals1;
  if ( !v30 )
    goto LABEL_28;
  v31 = (Il2CppObject *)v30->fields.__4__this;
  if ( !v31 )
    goto LABEL_28;
  klass = (MultipleViewListViewManager_o *)v31[4].klass;
  v33 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                        result,
                                                        *(_QWORD *)&imageLimitCount,
                                                        method);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v33,
    v31,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !klass )
    goto LABEL_28;
  MultipleViewListViewManager__SetMode(klass, 2, v33, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MultipleViewComponent_o *_4__this; // x0
  struct MultipleViewComponent_o *v9; // x8
  __int64 v10; // x2
  __int64 v11; // x3
  struct MultipleViewComponent_o *v12; // x8
  Il2CppObject *v13; // x20
  MultipleViewListViewManager_o *klass; // x19
  MultipleViewListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4B11854 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MultipleViewComponent_OnClickServant__, v4, v5);
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, v6, v7);
    byte_4B11854 = 1;
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
        v9 = this->fields.__4__this;
        if ( v9 )
        {
          _4__this = (MultipleViewComponent_o *)v9->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(_4__this, method);
  }
  if ( !_4__this->fields.multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_18;
    _4__this = (MultipleViewComponent_o *)v12->fields.multipleViewManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v13 = (Il2CppObject *)this->fields.__4__this;
  if ( !v13 )
    goto LABEL_18;
  klass = (MultipleViewListViewManager_o *)v13[4].klass;
  v15 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v10,
                                                        v11);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v15,
    v13,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    v16);
  if ( !klass )
    goto LABEL_18;
  klass->fields.callbackFunc = v15;
  sub_1BCA784(&klass->fields.callbackFunc, v15);
  MultipleViewListViewManager__SetMode_31836508(klass, 2, v17);
}