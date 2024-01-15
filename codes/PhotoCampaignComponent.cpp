void __fastcall PhotoCampaignComponent___ctor(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PhotoCampaignComponent__CancelPhotoCampaignWindow(
        PhotoCampaignComponent_o *this,
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
  PhotoCampaignComponent_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_40F8F20 & 1) == 0 )
  {
    sub_B16FFC(&Method_PhotoCampaignComponent_EndCancelButton__, callback);
    sub_B16FFC(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v10);
    byte_40F8F20 = 1;
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
  v15 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                          PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                          v11,
                                                          v12,
                                                          v13,
                                                          v14);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    0LL);
  PhotoCampaignComponent__StatusRequest(this, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__CloseSvtDetail(
        PhotoCampaignComponent_o *this,
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

  if ( (byte_40F8F25 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_PhotoCampaignComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v9);
    sub_B16FFC(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_40F8F25 = 1;
  }
  v11 = sub_B170CC(
          PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo,
          isDecide,
          isNeedSort,
          *(_QWORD *)&questId,
          method);
  PhotoCampaignComponent___c__DisplayClass40_0___ctor((PhotoCampaignComponent___c__DisplayClass40_0_o *)v11, 0LL);
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
          Method_PhotoCampaignComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseServantStatusDialog(Instance, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__EndCancelButton(
        PhotoCampaignComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  struct PhotoCampaignListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  PhotoCampaignListViewManager_CallbackFunc_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *cancelCallback; // x0

  if ( (byte_40F8F21 & 1) == 0 )
  {
    sub_B16FFC(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickServant__, v5);
    byte_40F8F21 = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v7 = this->fields.photoCampaignManager,
          v12 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                 PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                                 v8,
                                                                 v9,
                                                                 v10,
                                                                 v11),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_B170D4();
    }
    v7->fields.callbackFunc = v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    PhotoCampaignListViewManager__SetMode_23297884(v7, 2, v19);
  }
  PhotoCampaignComponent__Init(this, (const MethodInfo *)isRequest);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  cancelCallback = this->fields.cancelCallback;
  if ( cancelCallback )
    ActionExtensions__Call(cancelCallback, 0LL);
}


void __fastcall PhotoCampaignComponent__EndClickTabChoice(
        PhotoCampaignComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v5; // x2
  PhotoCampaignListViewManager_o *v6; // x0

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (v6 = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_B170D4();
    }
    PhotoCampaignListViewManager__SetMode_23297884(v6, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 2, method);
}


void __fastcall PhotoCampaignComponent__EndClickTabLock(
        PhotoCampaignComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v5; // x2
  PhotoCampaignListViewManager_o *v6; // x0

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (v6 = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_B170D4();
    }
    PhotoCampaignListViewManager__SetMode_23297884(v6, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 1, method);
}


void __fastcall PhotoCampaignComponent__EndClickTabNormal(
        PhotoCampaignComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v5; // x2
  PhotoCampaignListViewManager_o *v6; // x0

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (v6 = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_B170D4();
    }
    PhotoCampaignListViewManager__SetMode_23297884(v6, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 0, method);
}


void __fastcall PhotoCampaignComponent__EndClickTabPush(
        PhotoCampaignComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v5; // x2
  PhotoCampaignListViewManager_o *v6; // x0

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (v6 = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_B170D4();
    }
    PhotoCampaignListViewManager__SetMode_23297884(v6, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 3, method);
}


void __fastcall PhotoCampaignComponent__EndPushRequest(
        PhotoCampaignComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v6; // x2
  PhotoCampaignListViewManager_o *v7; // x0
  struct PhotoCampaignListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  PhotoCampaignListViewManager_CallbackFunc_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_40F8F24 & 1) == 0 )
  {
    sub_B16FFC(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickServant__, v4);
    byte_40F8F24 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (v7 = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(v7, this->fields.usrSvtId, v6),
        v8 = this->fields.photoCampaignManager,
        v13 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11,
                                                               v12),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !v8) )
  {
    sub_B170D4();
  }
  v8->fields.callbackFunc = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v8->fields.callbackFunc,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  PhotoCampaignListViewManager__SetMode_23297884(v8, 2, v20);
}


void __fastcall PhotoCampaignComponent__EndStatusSync(
        PhotoCampaignComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_requestCallback; // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v9; // x19
  struct PhotoCampaignComponent_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_B16F98(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PhotoCampaignComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


int64_t __fastcall PhotoCampaignComponent__GetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v5; // x0
  int64_t result; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_40F8F1E & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10614/*"PhotoCampaignSelectedUsrSvtId"*/, v2);
    byte_40F8F1E = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10614/*"PhotoCampaignSelectedUsrSvtId"*/,
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


System_String_o *__fastcall PhotoCampaignComponent__GetTitleMessage(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 *v5; // x8

  if ( (byte_40F8F2E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_7011/*"HEADER_MSG_PHOTO_SERVANT_SELECTED"*/, v3);
    sub_B16FFC(&StringLiteral_7010/*"HEADER_MSG_PHOTO_SERVANT"*/, v4);
    byte_40F8F2E = 1;
  }
  if ( (this->fields.selectedUsrSvtId & 0x8000000000000000LL) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_7010/*"HEADER_MSG_PHOTO_SERVANT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_7011/*"HEADER_MSG_PHOTO_SERVANT_SELECTED"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v5, 0LL);
}


void __fastcall PhotoCampaignComponent__Init(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x1
  System_String_o *TitleMessage; // x0
  const MethodInfo *v7; // x2

  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method),
        infoLb = this->fields.infoLb,
        this->fields.state = 0,
        TitleMessage = PhotoCampaignComponent__GetTitleMessage(this, v5),
        !infoLb) )
  {
    sub_B170D4();
  }
  UILabel__set_text(infoLb, TitleMessage, 0LL);
  PhotoCampaignComponent__SetModeTabKind(this, 0, v7);
}


bool __fastcall PhotoCampaignComponent__IsEnableSelectSvt(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  return (unsigned __int64)this->fields.selectedUsrSvtId >> 63;
}


void __fastcall PhotoCampaignComponent__OnClickChoiceTabButton(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_40F8F28 & 1) == 0 )
  {
    sub_B16FFC(&Method_PhotoCampaignComponent_EndClickTabChoice__, method);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__, v3);
    sub_B16FFC(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_40F8F28 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v12 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                                PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8,
                                                                v9,
                                                                v10);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v12, v13);
        return;
      }
      v14 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                              PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8,
                                                              v9,
                                                              v10);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabChoice__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v14, v15);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 2, v8);
  }
}


void __fastcall PhotoCampaignComponent__OnClickDecide(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int64_t selectedUsrSvtId; // x1
  PhotoCampaignComponent_o *v8; // x0
  const MethodInfo *v9; // x2
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_40F8F2D & 1) == 0 )
  {
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickDecide__, method);
    byte_40F8F2D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tabModeKind || (this->fields.selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      v3 = Method_PhotoCampaignComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickDecide__ + 75) & 2) != 0 )
        v3 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0LL);
    }
    else
    {
      v5 = Method_PhotoCampaignComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickDecide__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
      selectedUsrSvtId = this->fields.selectedUsrSvtId;
      this->fields.state = 4;
      PhotoCampaignComponent__SetLatestSelectedUsrSvtId(v8, selectedUsrSvtId, v9);
      myRoomControl = this->fields.myRoomControl;
      if ( !myRoomControl )
        sub_B170D4();
      MyRoomControl__DispPhotoCampaign(
        myRoomControl,
        this->fields.selectedUsrSvtId,
        this->fields.selectedImageLimitCount,
        0LL);
    }
  }
}


void __fastcall PhotoCampaignComponent__OnClickLockTabButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_40F8F27 & 1) == 0 )
  {
    sub_B16FFC(&Method_PhotoCampaignComponent_EndClickTabLock__, method);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickLockTabButton__, v3);
    sub_B16FFC(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_40F8F27 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v12 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                                PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8,
                                                                v9,
                                                                v10);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v12, v13);
        return;
      }
      v14 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                              PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8,
                                                              v9,
                                                              v10);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabLock__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v14, v15);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 1, v8);
  }
}


void __fastcall PhotoCampaignComponent__OnClickNormalTabButton(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  PhotoCampaignComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_40F8F26 & 1) == 0 )
  {
    sub_B16FFC(&Method_PhotoCampaignComponent_EndClickTabNormal__, method);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickNormalTabButton__, v3);
    sub_B16FFC(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_40F8F26 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v11 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                            PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                            v7,
                                                            v8,
                                                            v9,
                                                            v10);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabNormal__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v11, v12);
  }
}


void __fastcall PhotoCampaignComponent__OnClickPushTabButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  PhotoCampaignComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_40F8F29 & 1) == 0 )
  {
    sub_B16FFC(&Method_PhotoCampaignComponent_EndClickTabPush__, method);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickPushTabButton__, v3);
    sub_B16FFC(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_40F8F29 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v11 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                            PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                            v7,
                                                            v8,
                                                            v9,
                                                            v10);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabPush__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v11, v12);
  }
}


void __fastcall PhotoCampaignComponent__OnClickScaleChange(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40F8F2C & 1) == 0 )
  {
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickScaleChange__, method);
    byte_40F8F2C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_B170D4();
    PhotoCampaignListViewManager__ChangeIconScale(photoCampaignManager, v5);
    PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__OnClickServant(
        PhotoCampaignComponent_o *this,
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
  __int64 v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  MethodInfo *v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  System_Int32_array **Item; // x1
  PhotoCampaignListViewItem_o **v48; // x21
  __int64 v49; // x8
  __int128 v50; // q1
  const MethodInfo *v51; // x1
  int32_t tabModeKind; // w8
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  int32_t v55; // w1
  WebViewManager_o *Instance; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v62; // x20
  ServantStatusDialog_ResultDelegate_o *v63; // x22
  _QWORD *v64; // x0
  PhotoCampaignListViewItem_o *v65; // x0
  _QWORD *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  struct PhotoCampaignListViewManager_o *v71; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  const MethodInfo *v79; // x2
  _QWORD *v80; // x0
  System_Reflection_MethodBase_o *v81; // x0
  struct UserServantEntity_o *v82; // x8
  __int128 v83; // q0
  int64_t v84; // x0
  int64_t selectedUsrSvtId; // x22
  _QWORD *v86; // x0
  System_Reflection_MethodBase_o *v87; // x0
  const MethodInfo *v88; // x2
  PhotoCampaignListViewManager_o *v89; // x0
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x1
  _QWORD *v92; // x0
  System_Reflection_MethodBase_o *v93; // x0
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v95; // x2
  int64_t pushUserSvtId; // x22
  struct UserServantEntity_o *v97; // x8
  __int128 v98; // q0
  _QWORD *v99; // x0
  UILabel_o *infoLb; // x20
  System_String_o *TitleMessage; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x25
  WarQuestSelectionMaster_o *v104; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v105; // x22
  __int64 v106; // x23
  __int64 v107; // x24
  int32_t v108; // w0
  ServantEntity_o *v109; // x26
  System_String_o *v110; // x22
  System_String_o *v111; // x23
  __int64 v112; // x2
  System_Object_array *v113; // x24
  int32_t Rarity; // w27
  System_String_o *RarityType; // x0
  __int64 v116; // x1
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x27
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x27
  int32_t v130; // w0
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x25
  UserServantEntity_o *v137; // x0
  int32_t v138; // w0
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x25
  ServantEntity_o *servantEntity; // x0
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Int32_array **v151; // x25
  PhotoCampaignListViewItem_o *v152; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v153; // x9
  ServantEntity_o *v154; // x21
  int32_t v155; // w0
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x21
  System_String_o *v162; // x21
  System_String_o *v163; // x23
  System_String_o *v164; // x24
  CommonUI_o *v165; // x25
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x3
  __int64 v169; // x4
  CommonConfirmDialog_ClickDelegate_o *v170; // x26
  struct UserServantEntity_o *v171; // x8
  __int128 v172; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v174; // x21
  __int64 v175; // x1
  __int64 v176; // x2
  __int64 v177; // x3
  __int64 v178; // x4
  System_Action_bool__int__o *v179; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v181; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v182; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16

  if ( (byte_40F8F22 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__int___ctor__, *(_QWORD *)&kind);
    sub_B16FFC(&System_Action_bool__int__TypeInfo, v8);
    sub_B16FFC(&BalanceConfig_TypeInfo, v9);
    sub_B16FFC(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v10);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&object___TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B16FFC(&Method_PhotoCampaignComponent_CloseSvtDetail__, v21);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickServant__, v22);
    sub_B16FFC(&Rarity_TypeInfo, v23);
    sub_B16FFC(&ServantStatusDialog_ResultDelegate_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_B16FFC(&Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__0__, v26);
    sub_B16FFC(&Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__1__, v27);
    sub_B16FFC(&PhotoCampaignComponent___c__DisplayClass37_0_TypeInfo, v28);
    sub_B16FFC(&StringLiteral_11946/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v29);
    sub_B16FFC(&StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v30);
    sub_B16FFC(&StringLiteral_11945/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v31);
    sub_B16FFC(&StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v32);
    byte_40F8F22 = 1;
  }
  v33 = sub_B170CC(PhotoCampaignComponent___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n, method, v4);
  PhotoCampaignComponent___c__DisplayClass37_0___ctor((PhotoCampaignComponent___c__DisplayClass37_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_126;
  *(_QWORD *)(v33 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_126;
    Item = (System_Int32_array **)PhotoCampaignListViewManager__GetItem(photoCampaignManager, n, v40);
  }
  *(_QWORD *)(v33 + 24) = Item;
  v48 = (PhotoCampaignListViewItem_o **)(v33 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 24), Item, (System_String_array **)v40, v41, v42, v43, v44, v45);
  if ( !*(_QWORD *)(v33 + 24) )
    goto LABEL_126;
  v49 = *(_QWORD *)(*(_QWORD *)(v33 + 24) + 112LL);
  if ( !v49 )
    goto LABEL_126;
  v50 = *(_OWORD *)(v49 + 32);
  *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)(v49 + 16);
  *(_OWORD *)&v184.fields.fakeValue = v50;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v183 = v184;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v183, 0LL);
  if ( kind == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v48 )
    {
      userSvtEntity = (*v48)->fields.userSvtEntity;
      v62 = (CommonUI_o *)Instance;
      v63 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v57,
                                                      v58,
                                                      v59,
                                                      v60);
      ServantStatusDialog_ResultDelegate___ctor(
        v63,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v62 )
      {
        CommonUI__OpenServantStatusDialog_18248808(v62, 0, userSvtEntity, v63, 0LL);
        return;
      }
    }
    goto LABEL_126;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v48 )
      goto LABEL_126;
    (*v48)->fields.isSwapChoice ^= 1u;
    v64 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v64 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickServant__);
    v54 = (System_Reflection_MethodBase_o *)sub_B16FE0(v64, v64[3]);
    v55 = 0;
    goto LABEL_37;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v48 )
      goto LABEL_126;
    (*v48)->fields.isSwapLock ^= 1u;
    v53 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v53 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickServant__);
    v54 = (System_Reflection_MethodBase_o *)sub_B16FE0(v53, v53[3]);
    v55 = 11;
    goto LABEL_37;
  }
  v65 = *v48;
  if ( !*v48 )
    goto LABEL_126;
  if ( tabModeKind != 3 )
  {
    if ( PhotoCampaignListViewItem__get_IsCanNotSelect(v65, v51) )
    {
      v80 = Method_PhotoCampaignComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
        v80 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickServant__);
      v81 = (System_Reflection_MethodBase_o *)sub_B16FE0(v80, v80[3]);
    }
    else
    {
      if ( !*v48 )
        goto LABEL_126;
      v82 = (*v48)->fields.userSvtEntity;
      if ( !v82 )
        goto LABEL_126;
      v83 = *(_OWORD *)&v82->fields.id.fields.fakeValue;
      *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v82->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v184.fields.fakeValue = v83;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v181 = v184;
      v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v181, 0LL);
      selectedUsrSvtId = this->fields.selectedUsrSvtId;
      if ( v84 == selectedUsrSvtId )
      {
        v86 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
          v86 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickServant__);
        v87 = (System_Reflection_MethodBase_o *)sub_B16FE0(v86, v86[3]);
        OverwriteAssetSoundName__PlaySystemSe(v87, 1, 0LL);
        v89 = this->fields.photoCampaignManager;
        this->fields.selectedUsrSvtId = -1LL;
        this->fields.selectedImageLimitCount = 0;
        if ( !v89 )
          goto LABEL_126;
        PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(v89, -1LL, v88);
        PhotoCampaignComponent__SetConfirmButton(this, v90);
        goto LABEL_70;
      }
      v99 = Method_PhotoCampaignComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
        v99 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickServant__);
      v81 = (System_Reflection_MethodBase_o *)sub_B16FE0(v99, v99[3]);
      if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0LL);
        if ( *v48 )
        {
          v171 = (*v48)->fields.userSvtEntity;
          if ( v171 )
          {
            v172 = *(_OWORD *)&v171->fields.id.fields.fakeValue;
            myRoomControl = this->fields.myRoomControl;
            *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v171->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v184.fields.fakeValue = v172;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v180 = v184;
            v174 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v180, 0LL);
            v179 = (System_Action_bool__int__o *)sub_B170CC(System_Action_bool__int__TypeInfo, v175, v176, v177, v178);
            System_Action_bool__int____ctor(
              v179,
              (Il2CppObject *)v33,
              Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__0__,
              (const MethodInfo_24C2A14 *)Method_System_Action_bool__int___ctor__);
            if ( myRoomControl )
            {
              MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v174, v179, -1, 0LL);
              return;
            }
          }
        }
        goto LABEL_126;
      }
    }
    OverwriteAssetSoundName__PlaySystemSe(v81, 2, 0LL);
LABEL_70:
    infoLb = this->fields.infoLb;
    TitleMessage = PhotoCampaignComponent__GetTitleMessage(this, v91);
    if ( infoLb )
    {
      UILabel__set_text(infoLb, TitleMessage, 0LL);
      goto LABEL_38;
    }
LABEL_126:
    sub_B170D4();
  }
  if ( v65->fields.userSvtEntity )
  {
    if ( UserServantEntity__IsEventJoin(v65->fields.userSvtEntity, 0LL) )
    {
LABEL_34:
      v66 = Method_PhotoCampaignComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
        v66 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickServant__);
      v54 = (System_Reflection_MethodBase_o *)sub_B16FE0(v66, v66[3]);
      v55 = 2;
LABEL_37:
      OverwriteAssetSoundName__PlaySystemSe(v54, v55, 0LL);
      goto LABEL_38;
    }
    v65 = *v48;
    if ( !*v48 )
      goto LABEL_126;
  }
  if ( PhotoCampaignListViewItem__get_IsHerioneReave(v65, v51) )
    goto LABEL_34;
  v92 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
    v92 = (_QWORD *)sub_B17004(Method_PhotoCampaignComponent_OnClickServant__);
  v93 = (System_Reflection_MethodBase_o *)sub_B16FE0(v92, v92[3]);
  OverwriteAssetSoundName__PlaySystemSe(v93, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_126;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  if ( !pushUserSvtId )
  {
LABEL_65:
    PhotoCampaignComponent__PushRequest(this, *v48, v95);
    goto LABEL_38;
  }
  if ( !*v48 )
    goto LABEL_126;
  v97 = (*v48)->fields.userSvtEntity;
  if ( !v97 )
    goto LABEL_126;
  v98 = *(_OWORD *)&v97->fields.id.fields.fakeValue;
  *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v97->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v184.fields.fakeValue = v98;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v182 = v184;
  if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v182, 0LL) )
    goto LABEL_65;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_126;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             Master_WarQuestSelectionMaster,
             pushUserSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v104 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_126;
  v105 = (DataMasterBase_WarMaster__WarEntity__int__o *)v104;
  v107 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v106 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v185.fields.currentCryptoKey = v107;
  *(_QWORD *)&v185.fields.fakeValue = v106;
  v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v185, 0LL);
  if ( !v105 )
    goto LABEL_126;
  v109 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v105,
                              v108,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v110 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v113 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v112);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = Rarity__getRarityType(Rarity, 0LL);
  if ( !v113 )
    goto LABEL_126;
  v123 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v113->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_128;
  }
  if ( !v113->max_length )
    goto LABEL_127;
  v113->m_Items[0] = (Il2CppObject *)v123;
  sub_B16F98((BattleServantConfConponent_o *)v113->m_Items, v123, v117, v118, v119, v120, v121, v122);
  if ( !v109 )
    goto LABEL_126;
  RarityType = ServantEntity__getClassName(v109, 0LL);
  v129 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v113->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_128;
  }
  if ( v113->max_length <= 1 )
    goto LABEL_127;
  v113->m_Items[1] = (Il2CppObject *)v129;
  sub_B16F98((BattleServantConfConponent_o *)&v113->m_Items[1], v129, v117, v124, v125, v126, v127, v128);
  v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
  RarityType = ServantEntity__getName(v109, v130, -1, 0LL);
  v136 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v113->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_128;
  }
  if ( v113->max_length <= 2 )
    goto LABEL_127;
  v113->m_Items[2] = (Il2CppObject *)v136;
  sub_B16F98((BattleServantConfConponent_o *)&v113->m_Items[2], v136, v117, v131, v132, v133, v134, v135);
  if ( !*v48 )
    goto LABEL_126;
  v137 = (*v48)->fields.userSvtEntity;
  if ( !v137 )
    goto LABEL_126;
  v138 = UserServantEntity__getRarity(v137, 0LL);
  RarityType = Rarity__getRarityType(v138, 0LL);
  v144 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v113->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_128;
  }
  if ( v113->max_length <= 3 )
    goto LABEL_127;
  v113->m_Items[3] = (Il2CppObject *)v144;
  sub_B16F98((BattleServantConfConponent_o *)&v113->m_Items[3], v144, v117, v139, v140, v141, v142, v143);
  if ( !*v48 )
    goto LABEL_126;
  servantEntity = (*v48)->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_126;
  RarityType = ServantEntity__getClassName(servantEntity, 0LL);
  v151 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v113->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_128;
  }
  if ( v113->max_length <= 4 )
    goto LABEL_127;
  v113->m_Items[4] = (Il2CppObject *)v151;
  sub_B16F98((BattleServantConfConponent_o *)&v113->m_Items[4], v151, v117, v146, v147, v148, v149, v150);
  v152 = *v48;
  if ( !*v48 )
    goto LABEL_126;
  v153 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v152->fields.userSvtEntity;
  if ( !v153 )
    goto LABEL_126;
  v154 = v152->fields.servantEntity;
  v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v153[6], 0LL);
  if ( !v154 )
    goto LABEL_126;
  RarityType = ServantEntity__getName(v154, v155, -1, 0LL);
  v161 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v113->obj.klass->_1.element_class);
    if ( !RarityType )
    {
LABEL_128:
      sub_B170F4(RarityType);
      sub_B170A0();
    }
  }
  if ( v113->max_length <= 5 )
  {
LABEL_127:
    sub_B17100(RarityType, v116, v117);
    sub_B170A0();
  }
  v113->m_Items[5] = (Il2CppObject *)v161;
  sub_B16F98((BattleServantConfConponent_o *)&v113->m_Items[5], v161, v117, v156, v157, v158, v159, v160);
  v162 = System_String__Format_43822456(v111, v113, 0LL);
  v163 = LocalizationManager__Get((System_String_o *)StringLiteral_11945/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v164 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  v165 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v170 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v166,
                                                  v167,
                                                  v168,
                                                  v169);
  CommonConfirmDialog_ClickDelegate___ctor(
    v170,
    (Il2CppObject *)v33,
    Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__1__,
    0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v165 )
    goto LABEL_126;
  CommonUI__OpenConfirmDialog_18236860(
    v165,
    v110,
    v162,
    v163,
    v164,
    v170,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_38:
  v71 = this->fields.photoCampaignManager;
  v72 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                         v67,
                                                         v68,
                                                         v69,
                                                         v70);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v72,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    0LL);
  if ( !v71 )
    goto LABEL_126;
  v71->fields.callbackFunc = v72;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v71->fields.callbackFunc,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  PhotoCampaignListViewManager__SetMode_23297884(v71, 2, v79);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__Open(
        PhotoCampaignComponent_o *this,
        bool isResetSelected,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *v15; // x20
  bool IsActiveBgTxt; // w0
  PhotoCampaignComponent_o *v17; // x0
  const MethodInfo *v18; // x1
  int64_t LatestSelectedUsrSvtId; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  PhotoCampaignListViewManager_CallbackFunc_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1

  if ( (byte_40F8F1D & 1) == 0 )
  {
    sub_B16FFC(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isResetSelected);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickServant__, v5);
    byte_40F8F1D = 1;
  }
  if ( isResetSelected )
  {
    this->fields.selectedUsrSvtId = -1LL;
    this->fields.selectedImageLimitCount = 0;
  }
  PhotoCampaignComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v7, v8, v9, v10, v11, v12);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 60, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_12;
  v15 = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v15
    || (UnityEngine_GameObject__SetActive(v15, IsActiveBgTxt, 0LL),
        LatestSelectedUsrSvtId = PhotoCampaignComponent__GetLatestSelectedUsrSvtId(v17, v18),
        !this->fields.photoCampaignManager)
    || (PhotoCampaignListViewManager__CreateList(
          this->fields.photoCampaignManager,
          LatestSelectedUsrSvtId,
          this->fields.selectedUsrSvtId,
          v20),
        PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v21),
        photoCampaignManager = this->fields.photoCampaignManager,
        v27 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v23,
                                                               v24,
                                                               v25,
                                                               v26),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v27,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_B170D4();
  }
  photoCampaignManager->fields.callbackFunc = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&photoCampaignManager->fields.callbackFunc,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  PhotoCampaignListViewManager__SetMode_23297884(photoCampaignManager, 2, v34);
  this->fields.state = 2;
  PhotoCampaignComponent__SetConfirmButton(this, v35);
}


void __fastcall PhotoCampaignComponent__PushRequest(
        PhotoCampaignComponent_o *this,
        PhotoCampaignListViewItem_o *selectItem,
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

  if ( (byte_40F8F23 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&Method_PhotoCampaignComponent_EndPushRequest__, v10);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40F8F23 = 1;
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
    Method_PhotoCampaignComponent_EndPushRequest__,
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
void __fastcall PhotoCampaignComponent__SetConfirmButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
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

  if ( !this->fields.tabModeKind && (this->fields.selectedUsrSvtId & 0x8000000000000000LL) == 0 )
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
          goto LABEL_11;
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
LABEL_11:
  ((void (*)(void))klass->vtable._14_SetState.method)();
}


void __fastcall PhotoCampaignComponent__SetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = usrSvtId;
  if ( (byte_40F8F1F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10614/*"PhotoCampaignSelectedUsrSvtId"*/, usrSvtId);
    byte_40F8F1F = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10614/*"PhotoCampaignSelectedUsrSvtId"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__SetModeTabKind(
        PhotoCampaignComponent_o *this,
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
  const MethodInfo *v33; // x2
  UILabel_o *infoLb; // x21
  System_String_o *TitleMessage; // x0
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x8
  PhotoCampaignListViewManager_o **p_photoCampaignManager; // x21
  UILabel_o *v38; // x21
  __int64 *v39; // x8
  System_String_o *v40; // x0
  struct PhotoCampaignListViewManager_o *v41; // x8
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x1

  if ( (byte_40F8F2A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&StringLiteral_11701/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_B16FFC(&StringLiteral_17071/*"button_push_reg"*/, v6);
    sub_B16FFC(&StringLiteral_17072/*"button_push_unreg"*/, v7);
    sub_B16FFC(&StringLiteral_17057/*"button_allchoice_reg"*/, v8);
    sub_B16FFC(&StringLiteral_17060/*"button_alllock_unreg"*/, v9);
    sub_B16FFC(&StringLiteral_11699/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_B16FFC(&StringLiteral_11700/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_B16FFC(&StringLiteral_17073/*"button_select_reg"*/, v12);
    sub_B16FFC(&StringLiteral_17074/*"button_select_unreg"*/, v13);
    sub_B16FFC(&StringLiteral_17059/*"button_alllock_reg"*/, v14);
    sub_B16FFC(&StringLiteral_17058/*"button_allchoice_unreg"*/, v15);
    byte_40F8F2A = 1;
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
    v19 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17074/*"button_select_unreg"*/ : &StringLiteral_17073/*"button_select_reg"*/);
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
    v23 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17059/*"button_alllock_reg"*/ : &StringLiteral_17060/*"button_alllock_unreg"*/);
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
    v27 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17057/*"button_allchoice_reg"*/ : &StringLiteral_17058/*"button_allchoice_unreg"*/);
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
      v31 = (System_String_o **)&StringLiteral_17071/*"button_push_reg"*/;
    else
      v31 = (System_String_o **)&StringLiteral_17072/*"button_push_unreg"*/;
    UISprite__set_spriteName(pushTabSprite, *v31, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        TitleMessage = PhotoCampaignComponent__GetTitleMessage(this, v32);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, TitleMessage, 0LL);
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        photoCampaignManager = this->fields.photoCampaignManager;
        if ( !photoCampaignManager )
          goto LABEL_51;
        photoCampaignManager->fields.isCanNotLongPush = 0;
        goto LABEL_48;
      case 1:
        v38 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v39 = &StringLiteral_11700/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_44;
      case 2:
        v38 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v39 = &StringLiteral_11699/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_44;
      case 3:
        v38 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v39 = &StringLiteral_11701/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_44:
        v40 = LocalizationManager__Get((System_String_o *)*v39, 0LL);
        if ( !v38 )
          goto LABEL_51;
        UILabel__set_text(v38, v40, 0LL);
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        v41 = this->fields.photoCampaignManager;
        if ( !v41 )
          goto LABEL_51;
        v41->fields.isCanNotLongPush = 1;
LABEL_48:
        if ( !*p_photoCampaignManager )
          goto LABEL_51;
        PhotoCampaignListViewManager__UpdateDisplayState(*p_photoCampaignManager, modeKind == 3, v33);
        if ( !*p_photoCampaignManager )
          goto LABEL_51;
        PhotoCampaignListViewManager__SetMode_23297884(*p_photoCampaignManager, 2, v42);
        PhotoCampaignComponent__SetConfirmButton(this, v43);
        break;
      default:
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        goto LABEL_48;
    }
  }
}


void __fastcall PhotoCampaignComponent__StatusRequest(
        PhotoCampaignComponent_o *this,
        PhotoCampaignComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t tabModeKind; // w8
  PhotoCampaignListViewManager_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v23; // x2
  System_Int64_array *v24; // x1
  bool v25; // w4
  bool v26; // w5
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40F8F2B & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_PhotoCampaignComponent_EndStatusSync__, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40F8F2B = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_23;
    if ( PhotoCampaignListViewManager__GetSwapChoiceList(photoCampaignManager, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v38 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36,
                                                     v37);
      NetworkManager_ResultCallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v38,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v23 = unchoiceList;
        v24 = choiceList;
        v26 = 1;
        v25 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B170D4();
    }
  }
  else if ( tabModeKind == 1 )
  {
    v10 = this->fields.photoCampaignManager;
    if ( !v10 )
      goto LABEL_23;
    if ( PhotoCampaignListViewManager__GetSwapLockList(v10, &lockList, &unlockList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v17,
                                                     v18,
                                                     v19,
                                                     v20);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v21,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v23 = unlockList;
        v24 = lockList;
        v25 = 1;
        v26 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v24, v23, 0, v25, v26, 0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    PhotoCampaignComponent_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall PhotoCampaignComponent__UpdateScaleChangeIconSprite(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0

  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        ScaleButtonSpriteName = PhotoCampaignListViewManager__GetScaleButtonSpriteName(photoCampaignManager, method),
        !scaleChangeTabSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent_RequestCallbackFunc___ctor(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall PhotoCampaignComponent_RequestCallbackFunc__BeginInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_40F8393 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F8393 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent_RequestCallbackFunc__Invoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PhotoCampaignComponent_RequestCallbackFunc_o **v7; // x25
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
  PhotoCampaignComponent_RequestCallbackFunc_o *v18; // x8
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
  PhotoCampaignComponent_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (PhotoCampaignComponent_RequestCallbackFunc_o **)(v3 + 32);
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


void __fastcall PhotoCampaignComponent___c__DisplayClass37_0___ctor(
        PhotoCampaignComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent___c__DisplayClass37_0___OnClickServant_b__0(
        PhotoCampaignComponent___c__DisplayClass37_0_o *this,
        bool result,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v12; // q1
  struct PhotoCampaignComponent_o *_4__this; // x21
  int64_t v14; // x0
  struct PhotoCampaignComponent_o *v15; // x8
  struct PhotoCampaignComponent_o *v16; // x8
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  PhotoCampaignComponent_o *v18; // x0
  struct PhotoCampaignComponent_o *v19; // x22
  PhotoCampaignListViewManager_o *v20; // x20
  __int64 v21; // x21
  __int64 v22; // x9
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct PhotoCampaignComponent_o *v29; // x0
  UILabel_o *infoLb; // x19
  System_String_o *TitleMessage; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-40h]

  if ( (byte_40F8391 & 1) == 0 )
  {
    sub_B16FFC(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickServant__, v9);
    byte_40F8391 = 1;
  }
  if ( result )
  {
    item = this->fields.item;
    if ( !item )
      goto LABEL_20;
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_20;
    v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    _4__this = this->fields.__4__this;
    *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v33.fields.fakeValue = v12;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v32 = v33;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v32, 0LL);
    if ( !_4__this
      || (_4__this->fields.selectedUsrSvtId = v14, (v15 = this->fields.__4__this) == 0LL)
      || (v15->fields.selectedImageLimitCount = imageLimitCount, (v16 = this->fields.__4__this) == 0LL)
      || (photoCampaignManager = v16->fields.photoCampaignManager) == 0LL
      || (PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(
            photoCampaignManager,
            v16->fields.selectedUsrSvtId,
            0LL),
          (v18 = this->fields.__4__this) == 0LL) )
    {
LABEL_20:
      sub_B170D4();
    }
    PhotoCampaignComponent__SetConfirmButton(v18, 0LL);
  }
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_20;
  v20 = v19->fields.photoCampaignManager;
  v21 = sub_B170CC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result, *(_QWORD *)&imageLimitCount, method, v4);
  v22 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v21 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v21 + 16) = v22;
  *(_QWORD *)(v21 + 32) = v19;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)v19, v23, v24, v25, v26, v27, v28);
  if ( !v20 )
    goto LABEL_20;
  PhotoCampaignListViewManager__SetMode(v20, 2, (PhotoCampaignListViewManager_CallbackFunc_o *)v21, 0LL);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_20;
  infoLb = v29->fields.infoLb;
  TitleMessage = PhotoCampaignComponent__GetTitleMessage(v29, 0LL);
  if ( !infoLb )
    goto LABEL_20;
  UILabel__set_text(infoLb, TitleMessage, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent___c__DisplayClass37_0___OnClickServant_b__1(
        PhotoCampaignComponent___c__DisplayClass37_0_o *this,
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
  System_Action_o *_9__2; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F8390 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__2__, v6);
    byte_40F8390 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isDecide )
  {
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__2,
        (System_Int32_array **)_9__2,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_18237824(v12, _9__2, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass37_0___OnClickServant_b__2(
        PhotoCampaignComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  PhotoCampaignComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  PhotoCampaignComponent__PushRequest(_4__this, this->fields.item, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___ctor(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___CloseSvtDetail_b__0(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct PhotoCampaignComponent_o *_4__this; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct PhotoCampaignComponent_o *v8; // x8
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct PhotoCampaignComponent_o *v14; // x8
  ListViewManager_o *photoCampaignManager; // x0
  struct PhotoCampaignComponent_o *v16; // x20
  PhotoCampaignListViewManager_o *v17; // x19
  __int64 v18; // x21
  __int64 v19; // x9
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F8392 & 1) == 0 )
  {
    sub_B16FFC(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_PhotoCampaignComponent_OnClickServant__, v3);
    sub_B16FFC(&StringLiteral_3034/*"CLICK_BACK"*/, v4);
    byte_40F8392 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    PhotoCampaignComponent__Init(_4__this, 0LL);
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
            PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3034/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_18;
    photoCampaignManager = (ListViewManager_o *)v14->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_18;
    ListViewManager__SortItem(photoCampaignManager, -1, 0, -1, 0LL);
  }
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_18;
  v17 = v16->fields.photoCampaignManager;
  v18 = sub_B170CC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v10, v11, v12, v13);
  v19 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v18 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = v16;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v16, v20, v21, v22, v23, v24, v25);
  if ( !v17 )
    goto LABEL_18;
  PhotoCampaignListViewManager__SetMode(v17, 2, (PhotoCampaignListViewManager_CallbackFunc_o *)v18, 0LL);
}