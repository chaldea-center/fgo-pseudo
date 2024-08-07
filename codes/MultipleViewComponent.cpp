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
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  System_Collections_Generic_List_int__o *v13; // x21

  if ( (byte_49FA37C & 1) == 0 )
  {
    sub_1B64A00(&int___TypeInfo, method);
    sub_1B64A00(&long___TypeInfo, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor___75667408, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor___75667208, v5);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B64A00(&MyRoomControl_TypeInfo, v8);
    byte_49FA37C = 1;
  }
  v9 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v9 = MyRoomControl_TypeInfo;
  }
  v10 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B64AA8(
                                                         long___TypeInfo,
                                                         (unsigned int)v9->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v11 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_55145020(
    v11,
    v10,
    (const MethodInfo_349723C *)Method_System_Collections_Generic_List_long___ctor___75667408);
  this->fields.listSelectedUsrSvtId = v11;
  sub_1B649A4(&this->fields.listSelectedUsrSvtId);
  v12 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B64AA8(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55124132(
    v13,
    v12,
    (const MethodInfo_34920A4 *)Method_System_Collections_Generic_List_int___ctor___75667208);
  this->fields.listSelectedImageLimitCount = v13;
  sub_1B649A4(&this->fields.listSelectedImageLimitCount);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MultipleViewComponent__CancelMultipleViewWindow(
        MultipleViewComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MultipleViewComponent_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_49FA36C & 1) == 0 )
  {
    sub_1B64A00(&Method_MultipleViewComponent_EndCancelButton__, callback);
    sub_1B64A00(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v5);
    byte_49FA36C = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1B649A4(&this->fields.cancelCallback);
  v6 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64C4C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    v7);
  MultipleViewComponent__StatusRequest(this, v6, v8);
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
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_49FA371 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, isDecide);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B64A00(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v9);
    sub_1B64A00(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_49FA371 = 1;
  }
  v11 = (MultipleViewComponent___c__DisplayClass40_0_o *)sub_1B64C4C(MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
  MultipleViewComponent___c__DisplayClass40_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.questId = questId,
        v11->fields.__4__this = this,
        sub_1B649A4(&v11->fields.__4__this),
        v11->fields.isNeedSort = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v11,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B64C5C(v12, v13);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
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
  MultipleViewListViewManager_CallbackFunc_o *v8; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_49FA36D & 1) == 0 )
  {
    sub_1B64A00(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickServant__, v5);
    byte_49FA36D = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          v7 = this->fields.multipleViewManager,
          v8 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64C4C(MultipleViewListViewManager_CallbackFunc_TypeInfo),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_1B64C5C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode(v7, 2, v8, 0LL);
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
      sub_1B64C5C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31008168(multipleViewManager, 2, 0LL);
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
      sub_1B64C5C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31008168(multipleViewManager, 2, 0LL);
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
      sub_1B64C5C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31008168(multipleViewManager, 2, 0LL);
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
      sub_1B64C5C(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_31008168(multipleViewManager, 2, 0LL);
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
    sub_1B649A4(p_requedstCallback);
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
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v6; // x20
  MultipleViewListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_49FA370 & 1) == 0 )
  {
    sub_1B64A00(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickServant__, v4);
    byte_49FA370 = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, 0LL),
        (multipleViewManager = this->fields.multipleViewManager) == 0LL)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, 0LL),
        v6 = this->fields.multipleViewManager,
        v7 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64C4C(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v6) )
  {
    sub_1B64C5C(multipleViewManager, result);
  }
  MultipleViewListViewManager__SetMode(v6, 2, v7, 0LL);
}


int32_t __fastcall MultipleViewComponent__GetCurrentSelectIndex(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  int32_t v5; // w20

  if ( (byte_49FA37A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    byte_49FA37A = 1;
  }
  listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_8:
    sub_1B64C5C(listSelectedUsrSvtId, method);
  v5 = 0;
  while ( v5 < listSelectedUsrSvtId->fields._size )
  {
    if ( System_Collections_Generic_List_long___get_Item(
           listSelectedUsrSvtId,
           v5,
           (const MethodInfo_3497678 *)Method_System_Collections_Generic_List_long__get_Item__) < 1 )
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

  if ( (byte_49FA36A & 1) == 0 )
  {
    sub_1B64A00(&string_TypeInfo, method);
    sub_1B64A00(&StringLiteral_9135/*"MultipleViewSelectedUsrSvtId"*/, v2);
    byte_49FA36A = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9135/*"MultipleViewSelectedUsrSvtId"*/,
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

  if ( (byte_49FA37B & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_7078/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v3);
    sub_1B64A00(&StringLiteral_7079/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, v4);
    byte_49FA37B = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( (CurrentSelectIndex & 0x80000000) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = (System_String_o *)StringLiteral_7079/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v5 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0LL);
    v6 = System_String__Concat_61385136((System_String_o *)StringLiteral_7078/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v5, 0LL);
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
    || (MultipleViewListViewManager__DestroyList(multipleViewManager, 0LL),
        infoLb = this->fields.infoLb,
        this->fields.state = 0,
        multipleViewManager = (MultipleViewListViewManager_o *)MultipleViewComponent__GetTitleMessage(this, v5),
        !infoLb) )
  {
    sub_1B64C5C(multipleViewManager, method);
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

  if ( (byte_49FA374 & 1) == 0 )
  {
    sub_1B64A00(&Method_MultipleViewComponent_EndClickTabChoice__, method);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickChoiceTabButton__, v3);
    sub_1B64A00(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA374 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MultipleViewComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64C4C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          v10);
        MultipleViewComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64C4C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_49FA379 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Count__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Item__, v5);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickDecide__, v6);
    byte_49FA379 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.tabModeKind && (MultipleViewComponent__GetCurrentSelectIndex(this, method) & 0x80000000) != 0 )
    {
      v9 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickDecide__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B649E4(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0LL);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      this->fields.state = 4;
      if ( !listSelectedUsrSvtId )
        goto LABEL_17;
      Item = (MultipleViewComponent_o *)System_Collections_Generic_List_long___get_Item(
                                          listSelectedUsrSvtId,
                                          listSelectedUsrSvtId->fields._size - 1,
                                          (const MethodInfo_3497678 *)Method_System_Collections_Generic_List_long__get_Item__);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(Item, (int64_t)Item, v14);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      if ( !listSelectedUsrSvtId
        || (myRoomControl = this->fields.myRoomControl,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                                listSelectedUsrSvtId,
                                                                                (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0LL)
        || (v17 = (System_Int64_array *)listSelectedUsrSvtId,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_int___ToArray(
                                                                                listSelectedImageLimitCount,
                                                                                (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_17:
        sub_1B64C5C(listSelectedUsrSvtId, v11);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v17, (System_Int32_array *)listSelectedUsrSvtId, 0LL);
    }
    else
    {
      v7 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickDecide__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B649E4(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
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

  if ( (byte_49FA373 & 1) == 0 )
  {
    sub_1B64A00(&Method_MultipleViewComponent_EndClickTabLock__, method);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickLockTabButton__, v3);
    sub_1B64A00(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA373 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MultipleViewComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64C4C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          v10);
        MultipleViewComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64C4C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_49FA372 & 1) == 0 )
  {
    sub_1B64A00(&Method_MultipleViewComponent_EndClickTabNormal__, method);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickNormalTabButton__, v3);
    sub_1B64A00(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA372 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MultipleViewComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64C4C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_49FA375 & 1) == 0 )
  {
    sub_1B64A00(&Method_MultipleViewComponent_EndClickTabPush__, method);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickPushTabButton__, v3);
    sub_1B64A00(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA375 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_MultipleViewComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64C4C(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
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
  __int64 v5; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49FA378 & 1) == 0 )
  {
    sub_1B64A00(&Method_MultipleViewComponent_OnClickScaleChange__, method);
    byte_49FA378 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      sub_1B64C5C(0LL, v5);
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, 0LL);
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
  Il2CppObject *v38; // x20
  __int64 multipleViewManager; // x0
  __int64 v40; // x1
  MultipleViewListViewItem_o *Item; // x1
  MultipleViewListViewItem_o **p_monitor; // x21
  __int64 v43; // x8
  __int128 v44; // q1
  int32_t tabModeKind; // w8
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  int32_t v48; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v50; // x20
  ServantStatusDialog_ResultDelegate_o *v51; // x22
  _QWORD *v52; // x0
  _QWORD *v53; // x0
  MultipleViewListViewManager_o *v54; // x20
  MultipleViewListViewManager_CallbackFunc_o *v55; // x21
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  const MethodInfo *v58; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v60; // x22
  int32_t Index; // w0
  const MethodInfo *v62; // x1
  int32_t v63; // w21
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  MultipleViewListViewManager_o *v66; // x20
  const MethodInfo *v67; // x1
  UILabel_o *infoLb; // x20
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  const MethodInfo *v71; // x2
  int64_t v72; // x22
  struct UserServantEntity_o *v73; // x8
  __int128 v74; // q0
  __int64 v75; // x21
  _QWORD *v76; // x0
  System_Reflection_MethodBase_o *v77; // x0
  const MethodInfo *v78; // x1
  __int64 v79; // x8
  __int64 v80; // x8
  __int64 v81; // x8
  __int128 v82; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v84; // x20
  System_Action_bool__int__o *v85; // x22
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v87; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v90; // x26
  System_String_o *v91; // x22
  System_String_o *v92; // x23
  System_Object_array *v93; // x24
  int32_t Rarity; // w27
  Il2CppObject *v95; // x27
  Il2CppObject *v96; // x27
  int32_t v97; // w0
  Il2CppObject *v98; // x25
  int32_t v99; // w0
  Il2CppObject *v100; // x25
  Il2CppObject *v101; // x25
  MultipleViewListViewItem_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v103; // x9
  ServantEntity_o *servantEntity; // x21
  Il2CppObject *v105; // x21
  System_String_o *v106; // x21
  System_String_o *v107; // x23
  System_String_o *v108; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v110; // x26
  __int64 v111; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_49FA36E & 1) == 0 )
  {
    sub_1B64A00(&System_Action_bool__int__TypeInfo, *(_QWORD *)&kind);
    sub_1B64A00(&BalanceConfig_TypeInfo, v7);
    sub_1B64A00(&MultipleViewListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B64A00(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1B64A00(&DataManager_TypeInfo, v12);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__FindIndex__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__set_Item__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__set_Item__, v18);
    sub_1B64A00(&LocalizationManager_TypeInfo, v19);
    sub_1B64A00(&Method_MultipleViewComponent_CloseSvtDetail__, v20);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickServant__, v21);
    sub_1B64A00(&object___TypeInfo, v22);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1B64A00(&System_Predicate_long__TypeInfo, v25);
    sub_1B64A00(&Rarity_TypeInfo, v26);
    sub_1B64A00(&ServantStatusDialog_ResultDelegate_TypeInfo, v27);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28);
    sub_1B64A00(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__, v29);
    sub_1B64A00(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__, v30);
    sub_1B64A00(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo, v31);
    sub_1B64A00(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__, v32);
    sub_1B64A00(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v33);
    sub_1B64A00(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v34);
    sub_1B64A00(&StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v35);
    sub_1B64A00(&StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v36);
    sub_1B64A00(&StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v37);
    byte_49FA36E = 1;
  }
  v38 = (Il2CppObject *)sub_1B64C4C(MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor(v38, 0LL);
  if ( !v38 )
    goto LABEL_117;
  v38[1].klass = (Il2CppClass *)this;
  sub_1B649A4(&v38[1]);
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
  v38[1].monitor = Item;
  p_monitor = (MultipleViewListViewItem_o **)&v38[1].monitor;
  multipleViewManager = sub_1B649A4(&v38[1].monitor);
  if ( !v38[1].monitor )
    goto LABEL_117;
  v43 = *((_QWORD *)v38[1].monitor + 14);
  if ( !v43 )
    goto LABEL_117;
  v44 = *(_OWORD *)(v43 + 32);
  *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)(v43 + 16);
  *(_OWORD *)&v115.fields.fakeValue = v44;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v114 = v115;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v114, 0LL);
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v50 = (CommonUI_o *)multipleViewManager;
      v51 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64C4C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v51,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0LL);
      if ( v50 )
      {
        CommonUI__OpenServantStatusDialog_30358372(v50, 0, userSvtEntity, v51, 0, 0LL);
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
    v52 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v52 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickServant__);
    v47 = (System_Reflection_MethodBase_o *)sub_1B649E4(v52, v52[4]);
    v48 = 0;
    goto LABEL_35;
  }
  if ( tabModeKind == 1 )
  {
    multipleViewManager = (__int64)*p_monitor;
    if ( !*p_monitor )
      goto LABEL_117;
    MultipleViewListViewItem__SwapLock((MultipleViewListViewItem_o *)multipleViewManager, 0LL);
    v46 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickServant__);
    v47 = (System_Reflection_MethodBase_o *)sub_1B649E4(v46, v46[4]);
    v48 = 11;
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
      v60 = (System_Predicate_long__o *)sub_1B64C4C(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v60,
        v38,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        0LL);
      if ( !listSelectedUsrSvtId )
        goto LABEL_117;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v60,
                (const MethodInfo_349819C *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v63 = Index;
        v64 = Method_MultipleViewComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
          v64 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickServant__);
        v65 = (System_Reflection_MethodBase_o *)sub_1B649E4(v64, v64[4]);
        OverwriteAssetSoundName__PlaySystemSe(v65, 1, 0LL);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_117;
        System_Collections_Generic_List_long___set_Item(
          (System_Collections_Generic_List_long__o *)multipleViewManager,
          v63,
          0LL,
          (const MethodInfo_34976CC *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_117;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v63,
          0,
          (const MethodInfo_3492534 *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_117;
        v66 = this->fields.multipleViewManager;
        multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                         (System_Collections_Generic_List_long__o *)multipleViewManager,
                                         (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v66 )
          goto LABEL_117;
        MultipleViewListViewManager__ModifyItem_31006108(v66, (System_Int64_array *)multipleViewManager, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v67);
        goto LABEL_52;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v62) & 0x80000000) == 0 )
      {
        v75 = sub_1B64C4C(MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v75, 0LL);
        if ( v75 )
        {
          *(_QWORD *)(v75 + 24) = v38;
          sub_1B649A4(v75 + 24);
          v76 = Method_MultipleViewComponent_OnClickServant__;
          if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
            v76 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickServant__);
          v77 = (System_Reflection_MethodBase_o *)sub_1B649E4(v76, v76[4]);
          OverwriteAssetSoundName__PlaySystemSe(v77, 0, 0LL);
          multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v78);
          v79 = *(_QWORD *)(v75 + 24);
          *(_DWORD *)(v75 + 16) = multipleViewManager;
          if ( v79 )
          {
            v80 = *(_QWORD *)(v79 + 24);
            if ( v80 )
            {
              v81 = *(_QWORD *)(v80 + 112);
              if ( v81 )
              {
                v82 = *(_OWORD *)(v81 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)(v81 + 16);
                *(_OWORD *)&v115.fields.fakeValue = v82;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v112 = v115;
                v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v112, 0LL);
                v85 = (System_Action_bool__int__o *)sub_1B64C4C(System_Action_bool__int__TypeInfo);
                System_Action_bool__int____ctor(
                  v85,
                  (Il2CppObject *)v75,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  0LL);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v84, v85, *(_DWORD *)(v75 + 16), 0LL);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_117;
      }
    }
    v56 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v56 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickServant__);
    v57 = (System_Reflection_MethodBase_o *)sub_1B649E4(v56, v56[4]);
    OverwriteAssetSoundName__PlaySystemSe(v57, 2, 0LL);
LABEL_52:
    infoLb = this->fields.infoLb;
    multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v58);
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
    v53 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickServant__);
    v47 = (System_Reflection_MethodBase_o *)sub_1B649E4(v53, v53[4]);
    v48 = 2;
LABEL_35:
    OverwriteAssetSoundName__PlaySystemSe(v47, v48, 0LL);
    goto LABEL_36;
  }
  v69 = Method_MultipleViewComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
    v69 = (_QWORD *)sub_1B64A18(Method_MultipleViewComponent_OnClickServant__);
  v70 = (System_Reflection_MethodBase_o *)sub_1B649E4(v69, v69[4]);
  OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
  multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !multipleViewManager )
    goto LABEL_117;
  v72 = *(_QWORD *)(multipleViewManager + 120);
  if ( !v72 )
  {
LABEL_63:
    MultipleViewComponent__PushRequest(this, *p_monitor, v71);
    goto LABEL_36;
  }
  if ( !*p_monitor )
    goto LABEL_117;
  v73 = (*p_monitor)->fields.userSvtEntity;
  if ( !v73 )
    goto LABEL_117;
  v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
  *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v115.fields.fakeValue = v74;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v113 = v115;
  if ( v72 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v113, 0LL) )
    goto LABEL_63;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_117;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager,
             v72,
             (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_117;
  v87 = (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v116.fields.currentCryptoKey = klass;
  *(_QWORD *)&v116.fields.fakeValue = monitor;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v116, 0LL);
  if ( !v87 )
    goto LABEL_117;
  v90 = DataMasterBase_object__object__int___GetEntity(
          v87,
          multipleViewManager,
          (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v93 = (System_Object_array *)sub_1B64AA8(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  multipleViewManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v93 )
LABEL_117:
    sub_1B64C5C(multipleViewManager, v40);
  v95 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64B3C(multipleViewManager, v93->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( !v93->max_length )
    goto LABEL_118;
  v93->m_Items[0] = v95;
  multipleViewManager = sub_1B649A4(v93->m_Items);
  if ( !v90 )
    goto LABEL_117;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v90, 0LL);
  v96 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64B3C(multipleViewManager, v93->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v93->max_length <= 1 )
    goto LABEL_118;
  v93->m_Items[1] = v96;
  sub_1B649A4(&v93->m_Items[1]);
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
          0LL);
  multipleViewManager = (__int64)ServantEntity__getName((ServantEntity_o *)v90, v97, -1, 0LL);
  v98 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64B3C(multipleViewManager, v93->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v93->max_length <= 2 )
    goto LABEL_118;
  v93->m_Items[2] = v98;
  multipleViewManager = sub_1B649A4(&v93->m_Items[2]);
  if ( !*p_monitor )
    goto LABEL_117;
  multipleViewManager = (__int64)(*p_monitor)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_117;
  v99 = UserServantEntity__getRarity((UserServantEntity_o *)multipleViewManager, 0LL);
  multipleViewManager = (__int64)Rarity__getRarityType(v99, 0LL);
  v100 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64B3C(multipleViewManager, v93->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v93->max_length <= 3 )
    goto LABEL_118;
  v93->m_Items[3] = v100;
  multipleViewManager = sub_1B649A4(&v93->m_Items[3]);
  if ( !*p_monitor )
    goto LABEL_117;
  multipleViewManager = (__int64)(*p_monitor)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_117;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0LL);
  v101 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64B3C(multipleViewManager, v93->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v93->max_length <= 4 )
    goto LABEL_118;
  v93->m_Items[4] = v101;
  multipleViewManager = sub_1B649A4(&v93->m_Items[4]);
  v102 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_117;
  v103 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v102->fields.userSvtEntity;
  if ( !v103 )
    goto LABEL_117;
  servantEntity = v102->fields.servantEntity;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v103[6], 0LL);
  if ( !servantEntity )
    goto LABEL_117;
  multipleViewManager = (__int64)ServantEntity__getName(servantEntity, multipleViewManager, -1, 0LL);
  v105 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64B3C(multipleViewManager, v93->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_119:
      v111 = sub_1B64C80();
      sub_1B64B28(v111, 0LL);
    }
  }
  if ( v93->max_length <= 5 )
LABEL_118:
    sub_1B64C64(multipleViewManager, v40);
  v93->m_Items[5] = v105;
  sub_1B649A4(&v93->m_Items[5]);
  v106 = System_String__Format_61399644(v92, v93, 0LL);
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v110 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64C4C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v110,
    v38,
    Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__,
    0LL);
  multipleViewManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_117;
  CommonUI__OpenConfirmDialog_30347344(
    (CommonUI_o *)Instance,
    v91,
    v106,
    v107,
    v108,
    v110,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_36:
  v54 = this->fields.multipleViewManager;
  v55 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64C4C(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v55,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !v54 )
    goto LABEL_117;
  MultipleViewListViewManager__SetMode(v54, 2, v55, 0LL);
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
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  System_Collections_Generic_List_int__o *v18; // x21
  int64_t gameObject; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x20
  MultipleViewComponent_o *v22; // x0
  const MethodInfo *v23; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v25; // x20
  const MethodInfo *v26; // x1
  MultipleViewListViewManager_o *v27; // x20
  MultipleViewListViewManager_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x1

  if ( (byte_49FA369 & 1) == 0 )
  {
    sub_1B64A00(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isResetSelected);
    sub_1B64A00(&int___TypeInfo, v5);
    sub_1B64A00(&long___TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor___75667408, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor___75667208, v9);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickServant__, v12);
    sub_1B64A00(&MyRoomControl_TypeInfo, v13);
    byte_49FA369 = 1;
  }
  if ( isResetSelected )
  {
    v14 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v14 = MyRoomControl_TypeInfo;
    }
    v15 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B64AA8(
                                                           long___TypeInfo,
                                                           (unsigned int)v14->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v16 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_55145020(
      v16,
      v15,
      (const MethodInfo_349723C *)Method_System_Collections_Generic_List_long___ctor___75667408);
    this->fields.listSelectedUsrSvtId = v16;
    sub_1B649A4(&this->fields.listSelectedUsrSvtId);
    v17 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B64AA8(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v18 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55124132(
      v18,
      v17,
      (const MethodInfo_34920A4 *)Method_System_Collections_Generic_List_int___ctor___75667208);
    this->fields.listSelectedImageLimitCount = v18;
    sub_1B649A4(&this->fields.listSelectedImageLimitCount);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_1B649A4(&this->fields.cancelCallback);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_15;
  TitleInfoControl__changeTitleInfo_36884092((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_15;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v21 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v21, gameObject & 1, 0LL);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v22, v23);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_15;
  multipleViewManager = this->fields.multipleViewManager;
  v25 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v25, (System_Int64_array *)gameObject, 0LL),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v26),
        v27 = this->fields.multipleViewManager,
        v28 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64C4C(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v28,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v27) )
  {
LABEL_15:
    sub_1B64C5C(gameObject, v20);
  }
  MultipleViewListViewManager__SetMode(v27, 2, v28, 0LL);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v29);
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
  struct AssetsInfo_o *assetsInfo; // x8
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
  struct AllocMem_o *allocMem; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct AssetsInfo_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_49FA36F & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_MultipleViewComponent_EndePushRequest__, v6);
    sub_1B64A00(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7);
    sub_1B64A00(&NetworkManager_TypeInfo, v8);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49FA36F = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v53, 0LL);
  if ( !v17 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v15->fields.assetsInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = assetsInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  allocMem = v15->fields.allocMem;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndePushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v54, 0LL);
  if ( !v30 )
LABEL_19:
    sub_1B64C5C(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    allocMem == (struct AllocMem_o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct AssetsInfo_o *)v47,
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
    sub_1B64C5C(confirmBtnColor, method);
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
  if ( (byte_49FA36B & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_9135/*"MultipleViewSelectedUsrSvtId"*/, usrSvtId);
    byte_49FA36B = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9135/*"MultipleViewSelectedUsrSvtId"*/, v3, 0LL);
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
  UILabel_o *infoLb; // x21
  char v22; // w8
  UILabel_o *v23; // x21
  __int64 *v24; // x8
  const MethodInfo *v25; // x1

  if ( (byte_49FA376 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B64A00(&StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1B64A00(&StringLiteral_17594/*"button_push_reg"*/, v6);
    sub_1B64A00(&StringLiteral_17595/*"button_push_unreg"*/, v7);
    sub_1B64A00(&StringLiteral_17580/*"button_allchoice_reg"*/, v8);
    sub_1B64A00(&StringLiteral_17583/*"button_alllock_unreg"*/, v9);
    sub_1B64A00(&StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_1B64A00(&StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_1B64A00(&StringLiteral_17596/*"button_select_reg"*/, v12);
    sub_1B64A00(&StringLiteral_17597/*"button_select_unreg"*/, v13);
    sub_1B64A00(&StringLiteral_17582/*"button_alllock_reg"*/, v14);
    sub_1B64A00(&StringLiteral_17581/*"button_allchoice_unreg"*/, v15);
    byte_49FA376 = 1;
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
    v17 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17597/*"button_select_unreg"*/ : &StringLiteral_17596/*"button_select_reg"*/);
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
    v18 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17582/*"button_alllock_reg"*/ : &StringLiteral_17583/*"button_alllock_unreg"*/);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17580/*"button_allchoice_reg"*/ : &StringLiteral_17581/*"button_allchoice_unreg"*/);
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
      sub_1B64C5C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v20 = &StringLiteral_17594/*"button_push_reg"*/;
    else
      v20 = &StringLiteral_17595/*"button_push_unreg"*/;
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
        v22 = 0;
        goto LABEL_46;
      case 1:
        v23 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = &StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_43;
      case 2:
        v23 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = &StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_43;
      case 3:
        v23 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = &StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_43:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v24, 0LL);
        if ( !v23 )
          goto LABEL_49;
        UILabel__set_text(v23, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        v22 = 1;
LABEL_46:
        *((_BYTE *)&normalTabButton[15].fields + 4) = v22;
LABEL_47:
        MultipleViewListViewManager__UpdateDisplayState(
          (MultipleViewListViewManager_o *)normalTabButton,
          modeKind == 3,
          0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        MultipleViewListViewManager__SetMode_31008168((MultipleViewListViewManager_o *)normalTabButton, 2, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v25);
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
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t tabModeKind; // w8
  MultipleViewListViewManager_o *multipleViewManager; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w4
  bool v14; // w5
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  System_Int64_array *v16; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FA377 & 1) == 0 )
  {
    sub_1B64A00(&Method_MultipleViewComponent_EndStatusSync__, callback);
    sub_1B64A00(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49FA377 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v16 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapChoiceList(multipleViewManager, &choiceList, &v16, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1B649A4(&this->fields.requedstCallback);
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v15,
                                                               (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v12 = v16;
        v11 = choiceList;
        v14 = 1;
        v13 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64C5C(multipleViewManager, callback);
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
      sub_1B649A4(&this->fields.requedstCallback);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v10,
                                                               (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v12 = unlockList;
        v11 = lockList;
        v13 = 1;
        v14 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v11, v12, 0, v13, v14, 0LL);
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
    sub_1B64C5C(multipleViewManager, method);
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
  sub_1B649A4(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A5F74;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A5F2C;
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
  if ( (byte_49FA37D & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, isRequest);
    byte_49FA37D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
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

  if ( (byte_49FA37E & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, isDecide);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64A00(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__, v6);
    byte_49FA37E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1B649A4(&this->fields.__9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30348004(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B64C5C(Instance, v8);
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
    sub_1B64C5C(this, method);
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
  if ( (byte_49FA37F & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_1B64A00(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              id);
    byte_49FA37F = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_1B64C5C(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v9, 0LL) == id;
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
  Il2CppObject *v26; // x22
  MultipleViewListViewManager_o *klass; // x20
  MultipleViewListViewManager_CallbackFunc_o *v28; // x21
  struct MultipleViewComponent___c__DisplayClass37_0_o *v29; // x8
  UILabel_o *v30; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_49FA380 & 1) == 0 )
  {
    sub_1B64A00(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__set_Item__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__set_Item__, v9);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickServant__, v10);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_1B64A00(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              v11);
    byte_49FA380 = 1;
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
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v32.fields.fakeValue = v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v31 = v32;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(
                                                              &v31,
                                                              0LL);
    if ( !listSelectedUsrSvtId )
      goto LABEL_28;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_34976CC *)Method_System_Collections_Generic_List_long__set_Item__);
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
      (const MethodInfo_3492534 *)Method_System_Collections_Generic_List_int__set_Item__);
    v21 = v6->fields.CS___8__locals1;
    if ( !v21
      || (v22 = v21->fields.__4__this) == 0LL
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v22->fields.listSelectedUsrSvtId) == 0LL
      || (multipleViewManager = v22->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_31006108(multipleViewManager, (System_Int64_array *)this, 0LL),
          (v24 = v6->fields.CS___8__locals1) == 0LL)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v24->fields.__4__this) == 0LL )
    {
LABEL_28:
      sub_1B64C5C(this, result);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, (const MethodInfo *)result);
  }
  v25 = v6->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_28;
  v26 = (Il2CppObject *)v25->fields.__4__this;
  if ( !v26 )
    goto LABEL_28;
  klass = (MultipleViewListViewManager_o *)v26[4].klass;
  v28 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64C4C(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v28,
    v26,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !klass )
    goto LABEL_28;
  MultipleViewListViewManager__SetMode(klass, 2, v28, 0LL);
  v29 = v6->fields.CS___8__locals1;
  if ( !v29 )
    goto LABEL_28;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)v29->fields.__4__this;
  if ( !this )
    goto LABEL_28;
  v30 = (UILabel_o *)this[1].fields.CS___8__locals1;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)MultipleViewComponent__GetTitleMessage(
                                                            (MultipleViewComponent_o *)this,
                                                            (const MethodInfo *)result);
  if ( !v30 )
    goto LABEL_28;
  UILabel__set_text(v30, (System_String_o *)this, 0LL);
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
  MultipleViewListViewManager_o *klass; // x19
  MultipleViewListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49FA384 & 1) == 0 )
  {
    sub_1B64A00(&MultipleViewListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_MultipleViewComponent_OnClickServant__, v4);
    sub_1B64A00(&StringLiteral_3506/*"CLICK_BACK"*/, v5);
    byte_49FA384 = 1;
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
        v7 = this->fields.__4__this;
        if ( v7 )
        {
          _4__this = (MultipleViewComponent_o *)v7->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3506/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1B64C5C(_4__this, method);
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
  klass = (MultipleViewListViewManager_o *)v9[4].klass;
  v11 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64C4C(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(v11, v9, (intptr_t)Method_MultipleViewComponent_OnClickServant__, v12);
  if ( !klass )
    goto LABEL_18;
  klass->fields.callbackFunc = v11;
  sub_1B649A4(&klass->fields.callbackFunc);
  MultipleViewListViewManager__SetMode_31008168(klass, 2, v13);
}