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

  if ( (byte_49F7C6C & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&long___TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor___75657400, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B640C8(&MyRoomControl_TypeInfo, v8);
    byte_49F7C6C = 1;
  }
  v9 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v9 = MyRoomControl_TypeInfo;
  }
  v10 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B64170(
                                                         long___TypeInfo,
                                                         (unsigned int)v9->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v13 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v11, v12);
  System_Collections_Generic_List_long____ctor_55134536(
    v13,
    v10,
    (const MethodInfo_3494948 *)Method_System_Collections_Generic_List_long___ctor___75657400);
  this->fields.listSelectedUsrSvtId = v13;
  sub_1B6406C(&this->fields.listSelectedUsrSvtId);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B64170(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v15, v16);
  System_Collections_Generic_List_int____ctor_55113648(
    v17,
    v14,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  this->fields.listSelectedImageLimitCount = v17;
  sub_1B6406C(&this->fields.listSelectedImageLimitCount);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49F7C5C & 1) == 0 )
  {
    sub_1B640C8(&Method_MultipleViewComponent_EndCancelButton__, callback);
    sub_1B640C8(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v5);
    byte_49F7C5C = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1B6406C(&this->fields.cancelCallback);
  v8 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                        MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                        v6,
                                                        v7);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    v9);
  MultipleViewComponent__StatusRequest(this, v8, v10);
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
  Il2CppObject *Instance; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20

  if ( (byte_49F7C61 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v9);
    sub_1B640C8(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_49F7C61 = 1;
  }
  v11 = (MultipleViewComponent___c__DisplayClass40_0_o *)sub_1B64314(
                                                           MultipleViewComponent___c__DisplayClass40_0_TypeInfo,
                                                           isDecide,
                                                           isNeedSort);
  MultipleViewComponent___c__DisplayClass40_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.questId = questId,
        v11->fields.__4__this = this,
        sub_1B6406C(&v11->fields.__4__this),
        v11->fields.isNeedSort = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v11,
          Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v12);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0LL);
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
  MultipleViewListViewManager_CallbackFunc_o *v10; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_49F7C5D & 1) == 0 )
  {
    sub_1B640C8(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickServant__, v5);
    byte_49F7C5D = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          v7 = this->fields.multipleViewManager,
          v10 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64314(
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
      sub_1B64324(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode(v7, 2, v10, 0LL);
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

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0LL),
          (multipleViewManager = this->fields.multipleViewManager) == 0LL) )
    {
      sub_1B64324(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_31005908(multipleViewManager, 2, 0LL);
  }
  MultipleViewComponent__SetModeTabKind(this, 2, method);
}


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
      sub_1B64324(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_31005908(multipleViewManager, 2, 0LL);
  }
  MultipleViewComponent__SetModeTabKind(this, 1, method);
}


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
      sub_1B64324(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_31005908(multipleViewManager, 2, 0LL);
  }
  MultipleViewComponent__SetModeTabKind(this, 0, method);
}


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
      sub_1B64324(multipleViewManager);
    }
    MultipleViewListViewManager__SetMode_31005908(multipleViewManager, 2, 0LL);
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
    sub_1B6406C(p_requedstCallback);
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
  __int64 v7; // x1
  __int64 v8; // x2
  MultipleViewListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_49F7C60 & 1) == 0 )
  {
    sub_1B640C8(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickServant__, v4);
    byte_49F7C60 = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, 0LL),
        (multipleViewManager = this->fields.multipleViewManager) == 0LL)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, 0LL),
        v6 = this->fields.multipleViewManager,
        v9 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64314(
                                                             MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                             v7,
                                                             v8),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v6) )
  {
    sub_1B64324(multipleViewManager);
  }
  MultipleViewListViewManager__SetMode(v6, 2, v9, 0LL);
}


int32_t __fastcall MultipleViewComponent__GetCurrentSelectIndex(
        MultipleViewComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  int32_t v5; // w20

  if ( (byte_49F7C6A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    byte_49F7C6A = 1;
  }
  listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_8:
    sub_1B64324(listSelectedUsrSvtId);
  v5 = 0;
  while ( v5 < listSelectedUsrSvtId->fields._size )
  {
    if ( System_Collections_Generic_List_long___get_Item(
           listSelectedUsrSvtId,
           v5,
           (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__) < 1 )
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

  if ( (byte_49F7C5A & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9132/*"MultipleViewSelectedUsrSvtId"*/, v2);
    byte_49F7C5A = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9132/*"MultipleViewSelectedUsrSvtId"*/,
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

  if ( (byte_49F7C6B & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_7077/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v3);
    sub_1B640C8(&StringLiteral_7078/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, v4);
    byte_49F7C6B = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( (CurrentSelectIndex & 0x80000000) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = (System_String_o *)StringLiteral_7078/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/;
  }
  else
  {
    v5 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0LL);
    v6 = System_String__Concat_61375396((System_String_o *)StringLiteral_7077/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v5, 0LL);
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
    sub_1B64324(multipleViewManager);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F7C64 & 1) == 0 )
  {
    sub_1B640C8(&Method_MultipleViewComponent_EndClickTabChoice__, method);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickChoiceTabButton__, v3);
    sub_1B640C8(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F7C64 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MultipleViewComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                               MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                               v7,
                                                               v8);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          v11);
        MultipleViewComponent__StatusRequest(this, v10, v12);
        return;
      }
      v13 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                             MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                             v7,
                                                             v8);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        v14);
      MultipleViewComponent__StatusRequest(this, v13, v15);
    }
    MultipleViewComponent__SetModeTabKind(this, 2, v8);
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
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  MultipleViewComponent_o *Item; // x0
  const MethodInfo *v13; // x2
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v16; // x19

  if ( (byte_49F7C69 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v5);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickDecide__, v6);
    byte_49F7C69 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.tabModeKind && (MultipleViewComponent__GetCurrentSelectIndex(this, method) & 0x80000000) != 0 )
    {
      v9 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickDecide__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0LL);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      this->fields.state = 4;
      if ( !listSelectedUsrSvtId )
        goto LABEL_17;
      Item = (MultipleViewComponent_o *)System_Collections_Generic_List_long___get_Item(
                                          listSelectedUsrSvtId,
                                          listSelectedUsrSvtId->fields._size - 1,
                                          (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(Item, (int64_t)Item, v13);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      if ( !listSelectedUsrSvtId
        || (myRoomControl = this->fields.myRoomControl,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                                listSelectedUsrSvtId,
                                                                                (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0LL)
        || (v16 = (System_Int64_array *)listSelectedUsrSvtId,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_int___ToArray(
                                                                                listSelectedImageLimitCount,
                                                                                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_17:
        sub_1B64324(listSelectedUsrSvtId);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v16, (System_Int32_array *)listSelectedUsrSvtId, 0LL);
    }
    else
    {
      v7 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickDecide__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F7C63 & 1) == 0 )
  {
    sub_1B640C8(&Method_MultipleViewComponent_EndClickTabLock__, method);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickLockTabButton__, v3);
    sub_1B640C8(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F7C63 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MultipleViewComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                               MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                               v7,
                                                               v8);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          v11);
        MultipleViewComponent__StatusRequest(this, v10, v12);
        return;
      }
      v13 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                             MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                             v7,
                                                             v8);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        v14);
      MultipleViewComponent__StatusRequest(this, v13, v15);
    }
    MultipleViewComponent__SetModeTabKind(this, 1, v8);
  }
}


void __fastcall MultipleViewComponent__OnClickNormalTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F7C62 & 1) == 0 )
  {
    sub_1B640C8(&Method_MultipleViewComponent_EndClickTabNormal__, method);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickNormalTabButton__, v3);
    sub_1B640C8(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F7C62 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MultipleViewComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                          MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                          v7,
                                                          v8);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      v10);
    MultipleViewComponent__StatusRequest(this, v9, v11);
  }
}


void __fastcall MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F7C65 & 1) == 0 )
  {
    sub_1B640C8(&Method_MultipleViewComponent_EndClickTabPush__, method);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickPushTabButton__, v3);
    sub_1B640C8(&MultipleViewComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F7C65 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_MultipleViewComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                          MultipleViewComponent_RequestCallbackFunc_TypeInfo,
                                                          v7,
                                                          v8);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      v10);
    MultipleViewComponent__StatusRequest(this, v9, v11);
  }
}


void __fastcall MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49F7C68 & 1) == 0 )
  {
    sub_1B640C8(&Method_MultipleViewComponent_OnClickScaleChange__, method);
    byte_49F7C68 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      sub_1B64324(0LL);
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, 0LL);
    MultipleViewComponent__UpdateScaleChangeIconSprite(this, v6);
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
  MultipleViewListViewItem_o *Item; // x1
  MultipleViewListViewItem_o **p_monitor; // x21
  __int64 v42; // x8
  __int128 v43; // q1
  int32_t tabModeKind; // w8
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  int32_t v47; // w1
  __int64 v48; // x1
  __int64 v49; // x2
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v51; // x20
  ServantStatusDialog_ResultDelegate_o *v52; // x22
  _QWORD *v53; // x0
  _QWORD *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  MultipleViewListViewManager_o *v57; // x20
  MultipleViewListViewManager_CallbackFunc_o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  const MethodInfo *v63; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v65; // x22
  int32_t Index; // w0
  const MethodInfo *v67; // x1
  int32_t v68; // w21
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  MultipleViewListViewManager_o *v71; // x20
  const MethodInfo *v72; // x1
  UILabel_o *infoLb; // x20
  _QWORD *v74; // x0
  System_Reflection_MethodBase_o *v75; // x0
  const MethodInfo *v76; // x2
  int64_t v77; // x22
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x21
  _QWORD *v83; // x0
  System_Reflection_MethodBase_o *v84; // x0
  const MethodInfo *v85; // x1
  __int64 v86; // x8
  __int64 v87; // x8
  __int64 v88; // x8
  __int128 v89; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v91; // x20
  __int64 v92; // x1
  __int64 v93; // x2
  System_Action_bool__int__o *v94; // x22
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v96; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v99; // x26
  System_String_o *v100; // x22
  System_String_o *v101; // x23
  System_Object_array *v102; // x24
  int32_t Rarity; // w27
  __int64 v104; // x1
  Il2CppObject *v105; // x27
  Il2CppObject *v106; // x27
  int32_t v107; // w0
  Il2CppObject *v108; // x25
  int32_t v109; // w0
  Il2CppObject *v110; // x25
  Il2CppObject *v111; // x25
  MultipleViewListViewItem_o *v112; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v113; // x9
  ServantEntity_o *servantEntity; // x21
  Il2CppObject *v115; // x21
  System_String_o *v116; // x21
  System_String_o *v117; // x23
  System_String_o *v118; // x24
  Il2CppObject *Instance; // x25
  __int64 v120; // x1
  __int64 v121; // x2
  CommonConfirmDialog_ClickDelegate_o *v122; // x26
  __int64 v123; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16

  if ( (byte_49F7C5E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__int__TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&BalanceConfig_TypeInfo, v7);
    sub_1B640C8(&MultipleViewListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__FindIndex__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__set_Item__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__set_Item__, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&Method_MultipleViewComponent_CloseSvtDetail__, v20);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickServant__, v21);
    sub_1B640C8(&object___TypeInfo, v22);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1B640C8(&System_Predicate_long__TypeInfo, v25);
    sub_1B640C8(&Rarity_TypeInfo, v26);
    sub_1B640C8(&ServantStatusDialog_ResultDelegate_TypeInfo, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28);
    sub_1B640C8(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__, v29);
    sub_1B640C8(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__, v30);
    sub_1B640C8(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo, v31);
    sub_1B640C8(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__, v32);
    sub_1B640C8(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v33);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v34);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v35);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v36);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v37);
    byte_49F7C5E = 1;
  }
  v38 = (Il2CppObject *)sub_1B64314(
                          MultipleViewComponent___c__DisplayClass37_0_TypeInfo,
                          *(_QWORD *)&kind,
                          *(_QWORD *)&n);
  System_Object___ctor(v38, 0LL);
  if ( !v38 )
    goto LABEL_117;
  v38[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v38[1]);
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
  multipleViewManager = sub_1B6406C(&v38[1].monitor);
  if ( !v38[1].monitor )
    goto LABEL_117;
  v42 = *((_QWORD *)v38[1].monitor + 14);
  if ( !v42 )
    goto LABEL_117;
  v43 = *(_OWORD *)(v42 + 32);
  *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)(v42 + 16);
  *(_OWORD *)&v127.fields.fakeValue = v43;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v126 = v127;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v126, 0LL);
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v51 = (CommonUI_o *)multipleViewManager;
      v52 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(ServantStatusDialog_ResultDelegate_TypeInfo, v48, v49);
      ServantStatusDialog_ResultDelegate___ctor(
        v52,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0LL);
      if ( v51 )
      {
        CommonUI__OpenServantStatusDialog_30355996(v51, 0, userSvtEntity, v52, 0, 0LL);
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
    v53 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickServant__);
    v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v53, v53[4]);
    v47 = 0;
    goto LABEL_35;
  }
  if ( tabModeKind == 1 )
  {
    multipleViewManager = (__int64)*p_monitor;
    if ( !*p_monitor )
      goto LABEL_117;
    MultipleViewListViewItem__SwapLock((MultipleViewListViewItem_o *)multipleViewManager, 0LL);
    v45 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickServant__);
    v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v45, v45[4]);
    v47 = 11;
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
      v65 = (System_Predicate_long__o *)sub_1B64314(System_Predicate_long__TypeInfo, v59, v60);
      System_Predicate_long____ctor(
        v65,
        v38,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        0LL);
      if ( !listSelectedUsrSvtId )
        goto LABEL_117;
      Index = System_Collections_Generic_List_long___FindIndex(
                listSelectedUsrSvtId,
                (System_Predicate_T__o *)v65,
                (const MethodInfo_34958A8 *)Method_System_Collections_Generic_List_long__FindIndex__);
      if ( (Index & 0x80000000) == 0 )
      {
        v68 = Index;
        v69 = Method_MultipleViewComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
          v69 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickServant__);
        v70 = (System_Reflection_MethodBase_o *)sub_1B640AC(v69, v69[4]);
        OverwriteAssetSoundName__PlaySystemSe(v70, 1, 0LL);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_117;
        System_Collections_Generic_List_long___set_Item(
          (System_Collections_Generic_List_long__o *)multipleViewManager,
          v68,
          0LL,
          (const MethodInfo_3494DD8 *)Method_System_Collections_Generic_List_long__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
        if ( !multipleViewManager )
          goto LABEL_117;
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v68,
          0,
          (const MethodInfo_348FC40 *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( !multipleViewManager )
          goto LABEL_117;
        v71 = this->fields.multipleViewManager;
        multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                         (System_Collections_Generic_List_long__o *)multipleViewManager,
                                         (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( !v71 )
          goto LABEL_117;
        MultipleViewListViewManager__ModifyItem_31003848(v71, (System_Int64_array *)multipleViewManager, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v72);
        goto LABEL_52;
      }
      if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v67) & 0x80000000) == 0 )
      {
        v82 = sub_1B64314(MultipleViewComponent___c__DisplayClass37_1_TypeInfo, v80, v81);
        System_Object___ctor((Il2CppObject *)v82, 0LL);
        if ( v82 )
        {
          *(_QWORD *)(v82 + 24) = v38;
          sub_1B6406C(v82 + 24);
          v83 = Method_MultipleViewComponent_OnClickServant__;
          if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
            v83 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickServant__);
          v84 = (System_Reflection_MethodBase_o *)sub_1B640AC(v83, v83[4]);
          OverwriteAssetSoundName__PlaySystemSe(v84, 0, 0LL);
          multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v85);
          v86 = *(_QWORD *)(v82 + 24);
          *(_DWORD *)(v82 + 16) = multipleViewManager;
          if ( v86 )
          {
            v87 = *(_QWORD *)(v86 + 24);
            if ( v87 )
            {
              v88 = *(_QWORD *)(v87 + 112);
              if ( v88 )
              {
                v89 = *(_OWORD *)(v88 + 32);
                myRoomControl = this->fields.myRoomControl;
                *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)(v88 + 16);
                *(_OWORD *)&v127.fields.fakeValue = v89;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v124 = v127;
                v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v124, 0LL);
                v94 = (System_Action_bool__int__o *)sub_1B64314(System_Action_bool__int__TypeInfo, v92, v93);
                System_Action_bool__int____ctor(
                  v94,
                  (Il2CppObject *)v82,
                  Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
                  0LL);
                if ( myRoomControl )
                {
                  MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v91, v94, *(_DWORD *)(v82 + 16), 0LL);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_117;
      }
    }
    v61 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v61 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickServant__);
    v62 = (System_Reflection_MethodBase_o *)sub_1B640AC(v61, v61[4]);
    OverwriteAssetSoundName__PlaySystemSe(v62, 2, 0LL);
LABEL_52:
    infoLb = this->fields.infoLb;
    multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v63);
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
    v54 = Method_MultipleViewComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
      v54 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickServant__);
    v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v54, v54[4]);
    v47 = 2;
LABEL_35:
    OverwriteAssetSoundName__PlaySystemSe(v46, v47, 0LL);
    goto LABEL_36;
  }
  v74 = Method_MultipleViewComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickServant__ + 83) & 2) != 0 )
    v74 = (_QWORD *)sub_1B640E0(Method_MultipleViewComponent_OnClickServant__);
  v75 = (System_Reflection_MethodBase_o *)sub_1B640AC(v74, v74[4]);
  OverwriteAssetSoundName__PlaySystemSe(v75, 0, 0LL);
  multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !multipleViewManager )
    goto LABEL_117;
  v77 = *(_QWORD *)(multipleViewManager + 120);
  if ( !v77 )
  {
LABEL_63:
    MultipleViewComponent__PushRequest(this, *p_monitor, v76);
    goto LABEL_36;
  }
  if ( !*p_monitor )
    goto LABEL_117;
  v78 = (*p_monitor)->fields.userSvtEntity;
  if ( !v78 )
    goto LABEL_117;
  v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
  *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v127.fields.fakeValue = v79;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v125 = v127;
  if ( v77 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v125, 0LL) )
    goto LABEL_63;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !multipleViewManager )
    goto LABEL_117;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager,
             v77,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_117;
  v96 = (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager;
  klass = Entity[5].klass;
  monitor = Entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v128.fields.currentCryptoKey = klass;
  *(_QWORD *)&v128.fields.fakeValue = monitor;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v128, 0LL);
  if ( !v96 )
    goto LABEL_117;
  v99 = DataMasterBase_object__object__int___GetEntity(
          v96,
          multipleViewManager,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v102 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  multipleViewManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v102 )
LABEL_117:
    sub_1B64324(multipleViewManager);
  v105 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64204(multipleViewManager, v102->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( !v102->max_length )
    goto LABEL_118;
  v102->m_Items[0] = v105;
  multipleViewManager = sub_1B6406C(v102->m_Items);
  if ( !v99 )
    goto LABEL_117;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v99, 0LL);
  v106 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64204(multipleViewManager, v102->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v102->max_length <= 1 )
    goto LABEL_118;
  v102->m_Items[1] = v106;
  sub_1B6406C(&v102->m_Items[1]);
  v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
           0LL);
  multipleViewManager = (__int64)ServantEntity__getName((ServantEntity_o *)v99, v107, -1, 0LL);
  v108 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64204(multipleViewManager, v102->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v102->max_length <= 2 )
    goto LABEL_118;
  v102->m_Items[2] = v108;
  multipleViewManager = sub_1B6406C(&v102->m_Items[2]);
  if ( !*p_monitor )
    goto LABEL_117;
  multipleViewManager = (__int64)(*p_monitor)->fields.userSvtEntity;
  if ( !multipleViewManager )
    goto LABEL_117;
  v109 = UserServantEntity__getRarity((UserServantEntity_o *)multipleViewManager, 0LL);
  multipleViewManager = (__int64)Rarity__getRarityType(v109, 0LL);
  v110 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64204(multipleViewManager, v102->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v102->max_length <= 3 )
    goto LABEL_118;
  v102->m_Items[3] = v110;
  multipleViewManager = sub_1B6406C(&v102->m_Items[3]);
  if ( !*p_monitor )
    goto LABEL_117;
  multipleViewManager = (__int64)(*p_monitor)->fields.servantEntity;
  if ( !multipleViewManager )
    goto LABEL_117;
  multipleViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0LL);
  v111 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64204(multipleViewManager, v102->obj.klass->_1.element_class);
    if ( !multipleViewManager )
      goto LABEL_119;
  }
  if ( v102->max_length <= 4 )
    goto LABEL_118;
  v102->m_Items[4] = v111;
  multipleViewManager = sub_1B6406C(&v102->m_Items[4]);
  v112 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_117;
  v113 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v112->fields.userSvtEntity;
  if ( !v113 )
    goto LABEL_117;
  servantEntity = v112->fields.servantEntity;
  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v113[6], 0LL);
  if ( !servantEntity )
    goto LABEL_117;
  multipleViewManager = (__int64)ServantEntity__getName(servantEntity, multipleViewManager, -1, 0LL);
  v115 = (Il2CppObject *)multipleViewManager;
  if ( multipleViewManager )
  {
    multipleViewManager = sub_1B64204(multipleViewManager, v102->obj.klass->_1.element_class);
    if ( !multipleViewManager )
    {
LABEL_119:
      v123 = sub_1B64348();
      sub_1B641F0(v123, 0LL);
    }
  }
  if ( v102->max_length <= 5 )
LABEL_118:
    sub_1B6432C(multipleViewManager, v104);
  v102->m_Items[5] = v115;
  sub_1B6406C(&v102->m_Items[5]);
  v116 = System_String__Format_61389904(v101, v102, 0LL);
  v117 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v122 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v120, v121);
  CommonConfirmDialog_ClickDelegate___ctor(
    v122,
    v38,
    Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__,
    0LL);
  multipleViewManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    goto LABEL_117;
  CommonUI__OpenConfirmDialog_30344968(
    (CommonUI_o *)Instance,
    v100,
    v116,
    v117,
    v118,
    v122,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_36:
  v57 = this->fields.multipleViewManager;
  v58 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64314(
                                                        MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                        v55,
                                                        v56);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v58,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !v57 )
    goto LABEL_117;
  MultipleViewListViewManager__SetMode(v57, 2, v58, 0LL);
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
  System_Collections_Generic_IEnumerable_T__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x21
  int64_t gameObject; // x0
  UnityEngine_GameObject_o *v24; // x20
  MultipleViewComponent_o *v25; // x0
  const MethodInfo *v26; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x21
  int64_t v28; // x20
  const MethodInfo *v29; // x1
  MultipleViewListViewManager_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  MultipleViewListViewManager_CallbackFunc_o *v33; // x21
  const MethodInfo *v34; // x1

  if ( (byte_49F7C59 & 1) == 0 )
  {
    sub_1B640C8(&MultipleViewListViewManager_CallbackFunc_TypeInfo, isResetSelected);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&long___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor___75657400, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickServant__, v12);
    sub_1B640C8(&MyRoomControl_TypeInfo, v13);
    byte_49F7C59 = 1;
  }
  if ( isResetSelected )
  {
    v14 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v14 = MyRoomControl_TypeInfo;
    }
    v15 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B64170(
                                                           long___TypeInfo,
                                                           (unsigned int)v14->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v16,
                                                       v17);
    System_Collections_Generic_List_long____ctor_55134536(
      v18,
      v15,
      (const MethodInfo_3494948 *)Method_System_Collections_Generic_List_long___ctor___75657400);
    this->fields.listSelectedUsrSvtId = v18;
    sub_1B6406C(&this->fields.listSelectedUsrSvtId);
    v19 = (System_Collections_Generic_IEnumerable_T__o *)sub_1B64170(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v20, v21);
    System_Collections_Generic_List_int____ctor_55113648(
      v22,
      v19,
      (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
    this->fields.listSelectedImageLimitCount = v22;
    sub_1B6406C(&this->fields.listSelectedImageLimitCount);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_1B6406C(&this->fields.cancelCallback);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_15;
  TitleInfoControl__changeTitleInfo_36879176((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_15;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v24 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v24, gameObject & 1, 0LL);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v25, v26);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_15;
  multipleViewManager = this->fields.multipleViewManager;
  v28 = gameObject;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v28, (System_Int64_array *)gameObject, 0LL),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v29),
        v30 = this->fields.multipleViewManager,
        v33 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64314(
                                                              MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                              v31,
                                                              v32),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v33,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0LL),
        !v30) )
  {
LABEL_15:
    sub_1B64324(gameObject);
  }
  MultipleViewListViewManager__SetMode(v30, 2, v33, 0LL);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v34);
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
  __int128 v21; // q0
  struct AssetsInfo_o *assetsInfo; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v24; // x0
  __int128 v25; // q1
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  __int128 v30; // q1
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w26
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w29
  bool IsLock; // w21
  char v37; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct AllocMem_o *allocMem; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct AssetsInfo_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49F7C5F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_MultipleViewComponent_EndePushRequest__, v6);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49F7C5F = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v14 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v14 || !userSvtEntity )
    goto LABEL_19;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v16 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v14->fields.assetsInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = assetsInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  allocMem = v14->fields.allocMem;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndePushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.dispLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.iconLimitCount, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v31 )
LABEL_19:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    imageLimitCount,
    v32,
    v33,
    v34,
    v35,
    allocMem == (struct AllocMem_o *)v46,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct AssetsInfo_o *)v48,
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
    sub_1B64324(confirmBtnColor);
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
  if ( (byte_49F7C5B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9132/*"MultipleViewSelectedUsrSvtId"*/, usrSvtId);
    byte_49F7C5B = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9132/*"MultipleViewSelectedUsrSvtId"*/, v3, 0LL);
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
  UILabel_o *infoLb; // x21
  char v23; // w8
  UILabel_o *v24; // x21
  __int64 *v25; // x8
  const MethodInfo *v26; // x1

  if ( (byte_49F7C66 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B640C8(&StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, v6);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v7);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v8);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v9);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v12);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v13);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v14);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v15);
    byte_49F7C66 = 1;
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
    v17 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17594/*"button_select_unreg"*/ : &StringLiteral_17593/*"button_select_reg"*/);
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
    v18 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17579/*"button_alllock_reg"*/ : &StringLiteral_17580/*"button_alllock_unreg"*/);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17577/*"button_allchoice_reg"*/ : &StringLiteral_17578/*"button_allchoice_unreg"*/);
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
      sub_1B64324(normalTabButton);
    }
    if ( this->fields.tabModeKind == 3 )
      v20 = &StringLiteral_17591/*"button_push_reg"*/;
    else
      v20 = &StringLiteral_17592/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v20, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        normalTabButton = (UnityEngine_Behaviour_o *)MultipleViewComponent__GetTitleMessage(this, v21);
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
        v25 = &StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_43;
      case 2:
        v24 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_43;
      case 3:
        v24 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = &StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
          0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_49;
        MultipleViewListViewManager__SetMode_31005908((MultipleViewListViewManager_o *)normalTabButton, 2, 0LL);
        MultipleViewComponent__SetConfirmButton(this, v26);
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
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  System_Int64_array *v13; // x1
  System_Int64_array *v14; // x2
  bool v15; // w4
  bool v16; // w5
  __int64 v17; // x1
  __int64 v18; // x2
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F7C67 & 1) == 0 )
  {
    sub_1B640C8(&Method_MultipleViewComponent_EndStatusSync__, callback);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49F7C67 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v20 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapChoiceList(multipleViewManager, &choiceList, &v20, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1B6406C(&this->fields.requedstCallback);
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v19,
                                                               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v14 = v20;
        v13 = choiceList;
        v16 = 1;
        v15 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64324(multipleViewManager);
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
      sub_1B6406C(&this->fields.requedstCallback);
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v12,
                                                               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v14 = unlockList;
        v13 = lockList;
        v15 = 1;
        v16 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v13, v14, 0, v15, v16, 0LL);
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
    sub_1B64324(multipleViewManager);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A563C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A55F4;
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
  if ( (byte_49F7C6D & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49F7C6D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_49F7C6E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__, v6);
    byte_49F7C6E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1B6406C(&this->fields.__9__1);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_30345628(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(Instance);
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
    sub_1B64324(this);
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
  if ( (byte_49F7C6F & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_1B640C8(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              id);
    byte_49F7C6F = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
    sub_1B64324(this);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v9, 0LL) == id;
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
  const MethodInfo *v24; // x1
  struct MultipleViewComponent___c__DisplayClass37_0_o *v25; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v26; // x8
  Il2CppObject *v27; // x22
  MultipleViewListViewManager_o *klass; // x20
  MultipleViewListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x1
  struct MultipleViewComponent___c__DisplayClass37_0_o *v31; // x8
  UILabel_o *v32; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_49F7C70 & 1) == 0 )
  {
    sub_1B640C8(&MultipleViewListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__set_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__set_Item__, v9);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickServant__, v10);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_1B640C8(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                              v11);
    byte_49F7C70 = 1;
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
    *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v34.fields.fakeValue = v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v33 = v34;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                              &v33,
                                                              0LL);
    if ( !listSelectedUsrSvtId )
      goto LABEL_28;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_3494DD8 *)Method_System_Collections_Generic_List_long__set_Item__);
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
      (const MethodInfo_348FC40 *)Method_System_Collections_Generic_List_int__set_Item__);
    v21 = v6->fields.CS___8__locals1;
    if ( !v21
      || (v22 = v21->fields.__4__this) == 0LL
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v22->fields.listSelectedUsrSvtId) == 0LL
      || (multipleViewManager = v22->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_31003848(multipleViewManager, (System_Int64_array *)this, 0LL),
          (v25 = v6->fields.CS___8__locals1) == 0LL)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v25->fields.__4__this) == 0LL )
    {
LABEL_28:
      sub_1B64324(this);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, v24);
  }
  v26 = v6->fields.CS___8__locals1;
  if ( !v26 )
    goto LABEL_28;
  v27 = (Il2CppObject *)v26->fields.__4__this;
  if ( !v27 )
    goto LABEL_28;
  klass = (MultipleViewListViewManager_o *)v27[4].klass;
  v29 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64314(
                                                        MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                        result,
                                                        *(_QWORD *)&imageLimitCount);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v29,
    v27,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0LL);
  if ( !klass )
    goto LABEL_28;
  MultipleViewListViewManager__SetMode(klass, 2, v29, 0LL);
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
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  MultipleViewComponent_o *_4__this; // x0
  struct MultipleViewComponent_o *v7; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  struct MultipleViewComponent_o *v10; // x8
  Il2CppObject *v11; // x20
  MultipleViewListViewManager_o *klass; // x19
  MultipleViewListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F7C74 & 1) == 0 )
  {
    sub_1B640C8(&MultipleViewListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_MultipleViewComponent_OnClickServant__, v4);
    sub_1B640C8(&StringLiteral_3506/*"CLICK_BACK"*/, v5);
    byte_49F7C74 = 1;
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
    sub_1B64324(_4__this);
  }
  if ( !_4__this->fields.multipleViewManager )
    goto LABEL_18;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_18;
    _4__this = (MultipleViewComponent_o *)v10->fields.multipleViewManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v11 = (Il2CppObject *)this->fields.__4__this;
  if ( !v11 )
    goto LABEL_18;
  klass = (MultipleViewListViewManager_o *)v11[4].klass;
  v13 = (MultipleViewListViewManager_CallbackFunc_o *)sub_1B64314(
                                                        MultipleViewListViewManager_CallbackFunc_TypeInfo,
                                                        v8,
                                                        v9);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v13,
    v11,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    v14);
  if ( !klass )
    goto LABEL_18;
  klass->fields.callbackFunc = v13;
  sub_1B6406C(&klass->fields.callbackFunc);
  MultipleViewListViewManager__SetMode_31005908(klass, 2, v15);
}