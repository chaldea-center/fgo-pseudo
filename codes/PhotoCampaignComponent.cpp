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
  PhotoCampaignComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42139E7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PhotoCampaignComponent_EndCancelButton__, callback);
    sub_B0D8A4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v10);
    byte_42139E7 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                          PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                          v11,
                                                          v12);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    0LL);
  PhotoCampaignComponent__StatusRequest(this, v13, v14);
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
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CommonUI_o *Instance; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x20

  if ( (byte_42139EC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_PhotoCampaignComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v9);
    sub_B0D8A4(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_42139EC = 1;
  }
  v11 = sub_B0D974(PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, isDecide, isNeedSort);
  PhotoCampaignComponent___c__DisplayClass40_0___ctor((PhotoCampaignComponent___c__DisplayClass40_0_o *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v11 + 24),
          (System_Int32_array **)this,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v11,
          Method_PhotoCampaignComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v12);
  }
  CommonUI__CloseServantStatusDialog(Instance, v22, 0LL);
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
  PhotoCampaignListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_42139E8 & 1) == 0 )
  {
    sub_B0D8A4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickServant__, v5);
    byte_42139E8 = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v7 = this->fields.photoCampaignManager,
          v10 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                 PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                                 v8,
                                                                 v9),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_B0D97C(photoCampaignManager);
    }
    v7->fields.callbackFunc = v10;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    PhotoCampaignListViewManager__SetMode_22938872(v7, 2, v17);
  }
  PhotoCampaignComponent__Init(this, (const MethodInfo *)isRequest);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
  if ( !photoCampaignManager )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignManager, 0, 0LL);
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

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (photoCampaignManager = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_B0D97C(photoCampaignManager);
    }
    PhotoCampaignListViewManager__SetMode_22938872(photoCampaignManager, 2, v5);
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

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (photoCampaignManager = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_B0D97C(photoCampaignManager);
    }
    PhotoCampaignListViewManager__SetMode_22938872(photoCampaignManager, 2, v5);
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

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (photoCampaignManager = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_B0D97C(photoCampaignManager);
    }
    PhotoCampaignListViewManager__SetMode_22938872(photoCampaignManager, 2, v5);
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

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (photoCampaignManager = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_B0D97C(photoCampaignManager);
    }
    PhotoCampaignListViewManager__SetMode_22938872(photoCampaignManager, 2, v5);
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
  struct PhotoCampaignListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  PhotoCampaignListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_42139EB & 1) == 0 )
  {
    sub_B0D8A4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickServant__, v4);
    byte_42139EB = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (photoCampaignManager = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(photoCampaignManager, this->fields.usrSvtId, v6),
        v7 = this->fields.photoCampaignManager,
        v10 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !v7) )
  {
    sub_B0D97C(photoCampaignManager);
  }
  v7->fields.callbackFunc = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  PhotoCampaignListViewManager__SetMode_22938872(v7, 2, v17);
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
    sub_B0D840(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  if ( (byte_42139E5 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10673/*"PhotoCampaignSelectedUsrSvtId"*/, v2);
    byte_42139E5 = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10673/*"PhotoCampaignSelectedUsrSvtId"*/,
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

  if ( (byte_42139F5 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_7059/*"HEADER_MSG_PHOTO_SERVANT_SELECTED"*/, v3);
    sub_B0D8A4(&StringLiteral_7058/*"HEADER_MSG_PHOTO_SERVANT"*/, v4);
    byte_42139F5 = 1;
  }
  if ( (this->fields.selectedUsrSvtId & 0x8000000000000000LL) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_7058/*"HEADER_MSG_PHOTO_SERVANT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_7059/*"HEADER_MSG_PHOTO_SERVANT_SELECTED"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v5, 0LL);
}


void __fastcall PhotoCampaignComponent__Init(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method),
        infoLb = this->fields.infoLb,
        this->fields.state = 0,
        photoCampaignManager = (PhotoCampaignListViewManager_o *)PhotoCampaignComponent__GetTitleMessage(this, v5),
        !infoLb) )
  {
    sub_B0D97C(photoCampaignManager);
  }
  UILabel__set_text(infoLb, (System_String_o *)photoCampaignManager, 0LL);
  PhotoCampaignComponent__SetModeTabKind(this, 0, v6);
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
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_42139EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_PhotoCampaignComponent_EndClickTabChoice__, method);
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__, v3);
    sub_B0D8A4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_42139EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v10 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                                PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                              PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabChoice__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v12, v13);
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

  if ( (byte_42139F4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickDecide__, method);
    byte_42139F4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tabModeKind || (this->fields.selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      v3 = Method_PhotoCampaignComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickDecide__ + 75) & 2) != 0 )
        v3 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0LL);
    }
    else
    {
      v5 = Method_PhotoCampaignComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickDecide__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
      selectedUsrSvtId = this->fields.selectedUsrSvtId;
      this->fields.state = 4;
      PhotoCampaignComponent__SetLatestSelectedUsrSvtId(v8, selectedUsrSvtId, v9);
      myRoomControl = this->fields.myRoomControl;
      if ( !myRoomControl )
        sub_B0D97C(0LL);
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
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_42139EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_PhotoCampaignComponent_EndClickTabLock__, method);
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickLockTabButton__, v3);
    sub_B0D8A4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_42139EE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v10 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                                PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                              PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabLock__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v12, v13);
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
  PhotoCampaignComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_42139ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_PhotoCampaignComponent_EndClickTabNormal__, method);
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickNormalTabButton__, v3);
    sub_B0D8A4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_42139ED = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                           PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabNormal__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v9, v10);
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
  PhotoCampaignComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_42139F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PhotoCampaignComponent_EndClickTabPush__, method);
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickPushTabButton__, v3);
    sub_B0D8A4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_42139F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                           PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabPush__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v9, v10);
  }
}


void __fastcall PhotoCampaignComponent__OnClickScaleChange(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  System_Reflection_MethodBase_o *v3; // x0
  const MethodInfo *v4; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v6; // x1
  _QWORD *v7; // x0

  if ( (byte_42139F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickScaleChange__, method);
    byte_42139F3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v7 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v3 = (System_Reflection_MethodBase_o *)sub_B0D888(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_B0D97C(0LL);
    PhotoCampaignListViewManager__ChangeIconScale(photoCampaignManager, v4);
    PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__OnClickServant(
        PhotoCampaignComponent_o *this,
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
  __int64 v32; // x20
  __int64 photoCampaignManager; // x0
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
  System_Int32_array **Item; // x1
  PhotoCampaignListViewItem_o **v47; // x21
  __int64 v48; // x8
  __int128 v49; // q1
  const MethodInfo *v50; // x1
  int32_t tabModeKind; // w8
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  int32_t v54; // w1
  __int64 v55; // x1
  __int64 v56; // x2
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v58; // x20
  ServantStatusDialog_ResultDelegate_o *v59; // x22
  _QWORD *v60; // x0
  _QWORD *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  struct PhotoCampaignListViewManager_o *v64; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x2
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  struct UserServantEntity_o *v75; // x8
  __int128 v76; // q0
  int64_t v77; // x0
  int64_t selectedUsrSvtId; // x22
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x1
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x0
  const MethodInfo *v86; // x2
  int64_t v87; // x22
  struct UserServantEntity_o *v88; // x8
  __int128 v89; // q0
  _QWORD *v90; // x0
  UILabel_o *infoLb; // x20
  UserServantEntity_o *Entity; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v93; // x22
  __int64 v94; // x23
  __int64 v95; // x24
  ServantEntity_o *v96; // x26
  System_String_o *v97; // x22
  System_String_o *v98; // x23
  System_Object_array *v99; // x24
  int32_t Rarity; // w27
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x27
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x27
  int32_t v115; // w0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x25
  int32_t v123; // w0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x25
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x25
  PhotoCampaignListViewItem_o *v138; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v139; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x21
  System_String_o *v148; // x21
  System_String_o *v149; // x23
  System_String_o *v150; // x24
  CommonUI_o *Instance; // x25
  __int64 v152; // x1
  __int64 v153; // x2
  CommonConfirmDialog_ClickDelegate_o *v154; // x26
  struct UserServantEntity_o *v155; // x8
  __int128 v156; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v158; // x21
  __int64 v159; // x1
  __int64 v160; // x2
  System_Action_bool__int__o *v161; // x22
  __int64 v162; // x0
  __int64 v163; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16

  if ( (byte_42139E9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__int___ctor__, *(_QWORD *)&kind);
    sub_B0D8A4(&System_Action_bool__int__TypeInfo, v7);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v8);
    sub_B0D8A4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&object___TypeInfo, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B0D8A4(&Method_PhotoCampaignComponent_CloseSvtDetail__, v20);
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickServant__, v21);
    sub_B0D8A4(&Rarity_TypeInfo, v22);
    sub_B0D8A4(&ServantStatusDialog_ResultDelegate_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_B0D8A4(&Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__0__, v25);
    sub_B0D8A4(&Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__1__, v26);
    sub_B0D8A4(&PhotoCampaignComponent___c__DisplayClass37_0_TypeInfo, v27);
    sub_B0D8A4(&StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v28);
    sub_B0D8A4(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v29);
    sub_B0D8A4(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v30);
    sub_B0D8A4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v31);
    byte_42139E9 = 1;
  }
  v32 = sub_B0D974(PhotoCampaignComponent___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
  PhotoCampaignComponent___c__DisplayClass37_0___ctor((PhotoCampaignComponent___c__DisplayClass37_0_o *)v32, 0LL);
  if ( !v32 )
    goto LABEL_126;
  *(_QWORD *)(v32 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_126;
    Item = (System_Int32_array **)PhotoCampaignListViewManager__GetItem(
                                    (PhotoCampaignListViewManager_o *)photoCampaignManager,
                                    n,
                                    v40);
  }
  *(_QWORD *)(v32 + 24) = Item;
  v47 = (PhotoCampaignListViewItem_o **)(v32 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v32 + 24), Item, (System_String_array **)v40, v41, v42, v43, v44, v45);
  if ( !*(_QWORD *)(v32 + 24) )
    goto LABEL_126;
  v48 = *(_QWORD *)(*(_QWORD *)(v32 + 24) + 112LL);
  if ( !v48 )
    goto LABEL_126;
  v49 = *(_OWORD *)(v48 + 32);
  *(_OWORD *)&v168.fields.currentCryptoKey = *(_OWORD *)(v48 + 16);
  *(_OWORD *)&v168.fields.fakeValue = v49;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v167 = v168;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v167, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v47 )
    {
      userSvtEntity = (*v47)->fields.userSvtEntity;
      v58 = (CommonUI_o *)photoCampaignManager;
      v59 = (ServantStatusDialog_ResultDelegate_o *)sub_B0D974(ServantStatusDialog_ResultDelegate_TypeInfo, v55, v56);
      ServantStatusDialog_ResultDelegate___ctor(
        v59,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v58 )
      {
        CommonUI__OpenServantStatusDialog_17028192(v58, 0, userSvtEntity, v59, 0, 0LL);
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
    if ( !*v47 )
      goto LABEL_126;
    (*v47)->fields.isSwapChoice ^= 1u;
    v60 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v60 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickServant__);
    v53 = (System_Reflection_MethodBase_o *)sub_B0D888(v60, v60[3]);
    v54 = 0;
    goto LABEL_37;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v47 )
      goto LABEL_126;
    (*v47)->fields.isSwapLock ^= 1u;
    v52 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v52 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickServant__);
    v53 = (System_Reflection_MethodBase_o *)sub_B0D888(v52, v52[3]);
    v54 = 11;
    goto LABEL_37;
  }
  photoCampaignManager = (__int64)*v47;
  if ( !*v47 )
    goto LABEL_126;
  if ( tabModeKind != 3 )
  {
    photoCampaignManager = PhotoCampaignListViewItem__get_IsCanNotSelect(
                             (PhotoCampaignListViewItem_o *)photoCampaignManager,
                             v50);
    if ( (photoCampaignManager & 1) != 0 )
    {
      v73 = Method_PhotoCampaignComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
        v73 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickServant__);
      v74 = (System_Reflection_MethodBase_o *)sub_B0D888(v73, v73[3]);
    }
    else
    {
      if ( !*v47 )
        goto LABEL_126;
      v75 = (*v47)->fields.userSvtEntity;
      if ( !v75 )
        goto LABEL_126;
      v76 = *(_OWORD *)&v75->fields.id.fields.fakeValue;
      *(_OWORD *)&v168.fields.currentCryptoKey = *(_OWORD *)&v75->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v168.fields.fakeValue = v76;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v165 = v168;
      v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v165, 0LL);
      selectedUsrSvtId = this->fields.selectedUsrSvtId;
      if ( v77 == selectedUsrSvtId )
      {
        v79 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
          v79 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickServant__);
        v80 = (System_Reflection_MethodBase_o *)sub_B0D888(v79, v79[3]);
        OverwriteAssetSoundName__PlaySystemSe(v80, 1, 0LL);
        photoCampaignManager = (__int64)this->fields.photoCampaignManager;
        this->fields.selectedUsrSvtId = -1LL;
        this->fields.selectedImageLimitCount = 0;
        if ( !photoCampaignManager )
          goto LABEL_126;
        PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(
          (PhotoCampaignListViewManager_o *)photoCampaignManager,
          -1LL,
          v81);
        PhotoCampaignComponent__SetConfirmButton(this, v82);
        goto LABEL_70;
      }
      v90 = Method_PhotoCampaignComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
        v90 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickServant__);
      v74 = (System_Reflection_MethodBase_o *)sub_B0D888(v90, v90[3]);
      if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0LL);
        if ( *v47 )
        {
          v155 = (*v47)->fields.userSvtEntity;
          if ( v155 )
          {
            v156 = *(_OWORD *)&v155->fields.id.fields.fakeValue;
            myRoomControl = this->fields.myRoomControl;
            *(_OWORD *)&v168.fields.currentCryptoKey = *(_OWORD *)&v155->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v168.fields.fakeValue = v156;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v164 = v168;
            v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v164, 0LL);
            v161 = (System_Action_bool__int__o *)sub_B0D974(System_Action_bool__int__TypeInfo, v159, v160);
            System_Action_bool__int____ctor(
              v161,
              (Il2CppObject *)v32,
              Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__0__,
              (const MethodInfo_247A7A4 *)Method_System_Action_bool__int___ctor__);
            if ( myRoomControl )
            {
              MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v158, v161, -1, 0LL);
              return;
            }
          }
        }
        goto LABEL_126;
      }
    }
    OverwriteAssetSoundName__PlaySystemSe(v74, 2, 0LL);
LABEL_70:
    infoLb = this->fields.infoLb;
    photoCampaignManager = (__int64)PhotoCampaignComponent__GetTitleMessage(this, v83);
    if ( infoLb )
    {
      UILabel__set_text(infoLb, (System_String_o *)photoCampaignManager, 0LL);
      goto LABEL_38;
    }
LABEL_126:
    sub_B0D97C(photoCampaignManager);
  }
  if ( *(_QWORD *)(photoCampaignManager + 112) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 112), 0LL) )
    {
LABEL_34:
      v61 = Method_PhotoCampaignComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
        v61 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickServant__);
      v53 = (System_Reflection_MethodBase_o *)sub_B0D888(v61, v61[3]);
      v54 = 2;
LABEL_37:
      OverwriteAssetSoundName__PlaySystemSe(v53, v54, 0LL);
      goto LABEL_38;
    }
    photoCampaignManager = (__int64)*v47;
    if ( !*v47 )
      goto LABEL_126;
  }
  if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v50) )
    goto LABEL_34;
  v84 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
    v84 = (_QWORD *)sub_B0D8AC(Method_PhotoCampaignComponent_OnClickServant__);
  v85 = (System_Reflection_MethodBase_o *)sub_B0D888(v84, v84[3]);
  OverwriteAssetSoundName__PlaySystemSe(v85, 0, 0LL);
  photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !photoCampaignManager )
    goto LABEL_126;
  v87 = *(_QWORD *)(photoCampaignManager + 120);
  if ( !v87 )
  {
LABEL_65:
    PhotoCampaignComponent__PushRequest(this, *v47, v86);
    goto LABEL_38;
  }
  if ( !*v47 )
    goto LABEL_126;
  v88 = (*v47)->fields.userSvtEntity;
  if ( !v88 )
    goto LABEL_126;
  v89 = *(_OWORD *)&v88->fields.id.fields.fakeValue;
  *(_OWORD *)&v168.fields.currentCryptoKey = *(_OWORD *)&v88->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v168.fields.fakeValue = v89;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v166 = v168;
  if ( v87 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v166, 0LL) )
    goto LABEL_65;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  photoCampaignManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !photoCampaignManager )
    goto LABEL_126;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)photoCampaignManager,
             v87,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  photoCampaignManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_126;
  v93 = (DataMasterBase_WarMaster__WarEntity__int__o *)photoCampaignManager;
  v95 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v94 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v169.fields.currentCryptoKey = v95;
  *(_QWORD *)&v169.fields.fakeValue = v94;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v169, 0LL);
  if ( !v93 )
    goto LABEL_126;
  v96 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v93,
                             photoCampaignManager,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v99 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v99 )
    goto LABEL_126;
  v107 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B0D964(photoCampaignManager, v99->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( !v99->max_length )
    goto LABEL_127;
  v99->m_Items[0] = (Il2CppObject *)v107;
  sub_B0D840((BattleServantConfConponent_o *)v99->m_Items, v107, v101, v102, v103, v104, v105, v106);
  if ( !v96 )
    goto LABEL_126;
  photoCampaignManager = (__int64)ServantEntity__getClassName(v96, 0LL);
  v114 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B0D964(photoCampaignManager, v99->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( v99->max_length <= 1 )
    goto LABEL_127;
  v99->m_Items[1] = (Il2CppObject *)v114;
  sub_B0D840((BattleServantConfConponent_o *)&v99->m_Items[1], v114, v108, v109, v110, v111, v112, v113);
  v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(Entity->fields.limitCount, 0LL);
  photoCampaignManager = (__int64)ServantEntity__getName(v96, v115, -1, 0LL);
  v122 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B0D964(photoCampaignManager, v99->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( v99->max_length <= 2 )
    goto LABEL_127;
  v99->m_Items[2] = (Il2CppObject *)v122;
  sub_B0D840((BattleServantConfConponent_o *)&v99->m_Items[2], v122, v116, v117, v118, v119, v120, v121);
  if ( !*v47 )
    goto LABEL_126;
  photoCampaignManager = (__int64)(*v47)->fields.userSvtEntity;
  if ( !photoCampaignManager )
    goto LABEL_126;
  v123 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
  photoCampaignManager = (__int64)Rarity__getRarityType(v123, 0LL);
  v130 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B0D964(photoCampaignManager, v99->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( v99->max_length <= 3 )
    goto LABEL_127;
  v99->m_Items[3] = (Il2CppObject *)v130;
  sub_B0D840((BattleServantConfConponent_o *)&v99->m_Items[3], v130, v124, v125, v126, v127, v128, v129);
  if ( !*v47 )
    goto LABEL_126;
  photoCampaignManager = (__int64)(*v47)->fields.servantEntity;
  if ( !photoCampaignManager )
    goto LABEL_126;
  photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
  v137 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B0D964(photoCampaignManager, v99->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( v99->max_length <= 4 )
    goto LABEL_127;
  v99->m_Items[4] = (Il2CppObject *)v137;
  sub_B0D840((BattleServantConfConponent_o *)&v99->m_Items[4], v137, v131, v132, v133, v134, v135, v136);
  v138 = *v47;
  if ( !*v47 )
    goto LABEL_126;
  v139 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v138->fields.userSvtEntity;
  if ( !v139 )
    goto LABEL_126;
  servantEntity = v138->fields.servantEntity;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v139[6], 0LL);
  if ( !servantEntity )
    goto LABEL_126;
  photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 0LL);
  v147 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B0D964(photoCampaignManager, v99->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
    {
LABEL_128:
      v163 = sub_B0D99C();
      sub_B0D948(v163, 0LL);
    }
  }
  if ( v99->max_length <= 5 )
  {
LABEL_127:
    v162 = sub_B0D9A8(photoCampaignManager);
    sub_B0D948(v162, 0LL);
  }
  v99->m_Items[5] = (Il2CppObject *)v147;
  sub_B0D840((BattleServantConfConponent_o *)&v99->m_Items[5], v147, v141, v142, v143, v144, v145, v146);
  v148 = System_String__Format_43928628(v98, v99, 0LL);
  v149 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v150 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v154 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v152, v153);
  CommonConfirmDialog_ClickDelegate___ctor(
    v154,
    (Il2CppObject *)v32,
    Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__1__,
    0LL);
  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_126;
  CommonUI__OpenConfirmDialog_17016196(
    Instance,
    v97,
    v148,
    v149,
    v150,
    v154,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_38:
  v64 = this->fields.photoCampaignManager;
  v65 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B0D974(
                                                         PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                         v62,
                                                         v63);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v65,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    0LL);
  if ( !v64 )
    goto LABEL_126;
  v64->fields.callbackFunc = v65;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v64->fields.callbackFunc,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  PhotoCampaignListViewManager__SetMode_22938872(v64, 2, v72);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__Open(
        PhotoCampaignComponent_o *this,
        bool isResetSelected,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t gameObject; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o *v13; // x20
  PhotoCampaignComponent_o *v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  PhotoCampaignListViewManager_CallbackFunc_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1

  if ( (byte_42139E4 & 1) == 0 )
  {
    sub_B0D8A4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isResetSelected);
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickServant__, v5);
    byte_42139E4 = 1;
  }
  if ( isResetSelected )
  {
    this->fields.selectedUsrSvtId = -1LL;
    this->fields.selectedImageLimitCount = 0;
  }
  PhotoCampaignComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v7, v8, v9, v10, v11, v12);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_12;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v13
    || (UnityEngine_GameObject__SetActive(v13, gameObject & 1, 0LL),
        gameObject = PhotoCampaignComponent__GetLatestSelectedUsrSvtId(v14, v15),
        !this->fields.photoCampaignManager)
    || (PhotoCampaignListViewManager__CreateList(
          this->fields.photoCampaignManager,
          gameObject,
          this->fields.selectedUsrSvtId,
          v16),
        PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v17),
        photoCampaignManager = this->fields.photoCampaignManager,
        v21 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v19,
                                                               v20),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v21,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_B0D97C(gameObject);
  }
  photoCampaignManager->fields.callbackFunc = v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&photoCampaignManager->fields.callbackFunc,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  PhotoCampaignListViewManager__SetMode_22938872(photoCampaignManager, 2, v28);
  this->fields.state = 2;
  PhotoCampaignComponent__SetConfirmButton(this, v29);
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

  if ( (byte_42139EA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B0D8A4(&Method_PhotoCampaignComponent_EndPushRequest__, v10);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_42139EA = 1;
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
    Method_PhotoCampaignComponent_EndPushRequest__,
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
void __fastcall PhotoCampaignComponent__SetConfirmButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  UIButtonColor_o *v3; // x20
  struct UIButtonColor_o *v4; // x0
  int v5; // s0
  UIButtonColor_c *klass; // x8
  UIButtonColor_o *confirmBtnColor; // x20
  int v11; // s0

  if ( !this->fields.tabModeKind && (this->fields.selectedUsrSvtId & 0x8000000000000000LL) == 0 )
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
          goto LABEL_11;
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
  if ( (byte_42139E6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10673/*"PhotoCampaignSelectedUsrSvtId"*/, usrSvtId);
    byte_42139E6 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10673/*"PhotoCampaignSelectedUsrSvtId"*/, v3, 0LL);
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
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  System_String_o **v19; // x8
  __int64 *v20; // x8
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UILabel_o *infoLb; // x21
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x8
  struct PhotoCampaignListViewManager_o **p_photoCampaignManager; // x21
  UILabel_o *v26; // x21
  __int64 *v27; // x8
  struct PhotoCampaignListViewManager_o *v28; // x8
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1

  if ( (byte_42139F1 & 1) == 0 )
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
    byte_42139F1 = 1;
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
        normalTabButton = (UnityEngine_Behaviour_o *)PhotoCampaignComponent__GetTitleMessage(this, v21);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        photoCampaignManager = this->fields.photoCampaignManager;
        if ( !photoCampaignManager )
          goto LABEL_51;
        photoCampaignManager->fields.isCanNotLongPush = 0;
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
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        v28 = this->fields.photoCampaignManager;
        if ( !v28 )
          goto LABEL_51;
        v28->fields.isCanNotLongPush = 1;
LABEL_48:
        normalTabButton = (UnityEngine_Behaviour_o *)*p_photoCampaignManager;
        if ( !*p_photoCampaignManager )
          goto LABEL_51;
        PhotoCampaignListViewManager__UpdateDisplayState(
          (PhotoCampaignListViewManager_o *)normalTabButton,
          modeKind == 3,
          v22);
        normalTabButton = (UnityEngine_Behaviour_o *)*p_photoCampaignManager;
        if ( !*p_photoCampaignManager )
          goto LABEL_51;
        PhotoCampaignListViewManager__SetMode_22938872((PhotoCampaignListViewManager_o *)normalTabButton, 2, v29);
        PhotoCampaignComponent__SetConfirmButton(this, v30);
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
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // x2
  System_Int64_array *v21; // x1
  bool v22; // w4
  bool v23; // w5
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  NetworkManager_ResultCallbackFunc_o *v32; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42139F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_PhotoCampaignComponent_EndStatusSync__, v7);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_42139F2 = 1;
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
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v32 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v30, v31);
      NetworkManager_ResultCallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v32,
                                                                 (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v20 = unchoiceList;
        v21 = choiceList;
        v23 = 1;
        v22 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B0D97C(photoCampaignManager);
    }
  }
  else if ( tabModeKind == 1 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_23;
    if ( PhotoCampaignListViewManager__GetSwapLockList(photoCampaignManager, &lockList, &unlockList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v19,
                                                                 (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v20 = unlockList;
        v21 = lockList;
        v22 = 1;
        v23 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v21, v20, 0, v22, v23, 0LL);
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

  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        photoCampaignManager = (PhotoCampaignListViewManager_o *)PhotoCampaignListViewManager__GetScaleButtonSpriteName(
                                                                   photoCampaignManager,
                                                                   method),
        !scaleChangeTabSprite) )
  {
    sub_B0D97C(photoCampaignManager);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)photoCampaignManager, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent_RequestCallbackFunc___ctor(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
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
  if ( (byte_421219C & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isRequest);
    byte_421219C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent_RequestCallbackFunc__Invoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PhotoCampaignComponent_RequestCallbackFunc_o **v8; // x25
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
  PhotoCampaignComponent_RequestCallbackFunc_o *v19; // x8
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
  PhotoCampaignComponent_RequestCallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (PhotoCampaignComponent_RequestCallbackFunc_o **)(v4 + 32);
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
  PhotoCampaignComponent___c__DisplayClass37_0_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v11; // q1
  struct PhotoCampaignComponent_o *_4__this; // x21
  struct PhotoCampaignComponent_o *v13; // x8
  struct PhotoCampaignComponent_o *v14; // x8
  struct PhotoCampaignComponent_o *v15; // x22
  PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  __int64 v17; // x21
  __int64 v18; // x9
  UILabel_o *monitor; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_421219A & 1) == 0 )
  {
    sub_B0D8A4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)sub_B0D8A4(
                                                               &Method_PhotoCampaignComponent_OnClickServant__,
                                                               v8);
    byte_421219A = 1;
  }
  if ( result )
  {
    item = v6->fields.item;
    if ( !item )
      goto LABEL_20;
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_20;
    v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    _4__this = v6->fields.__4__this;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v11;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v20 = v21;
    this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                               &v20,
                                                               0LL);
    if ( !_4__this
      || (_4__this->fields.selectedUsrSvtId = (int64_t)this, (v13 = v6->fields.__4__this) == 0LL)
      || (v13->fields.selectedImageLimitCount = imageLimitCount, (v14 = v6->fields.__4__this) == 0LL)
      || (this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)v14->fields.photoCampaignManager) == 0LL
      || (PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(
            (PhotoCampaignListViewManager_o *)this,
            v14->fields.selectedUsrSvtId,
            0LL),
          (this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)v6->fields.__4__this) == 0LL) )
    {
LABEL_20:
      sub_B0D97C(this);
    }
    PhotoCampaignComponent__SetConfirmButton((PhotoCampaignComponent_o *)this, 0LL);
  }
  v15 = v6->fields.__4__this;
  if ( !v15 )
    goto LABEL_20;
  photoCampaignManager = v15->fields.photoCampaignManager;
  v17 = sub_B0D974(PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result, *(_QWORD *)&imageLimitCount);
  v18 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v17 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v17 + 16) = v18;
  *(_QWORD *)(v17 + 32) = v15;
  sub_B0D840(v17 + 32, v15);
  if ( !photoCampaignManager )
    goto LABEL_20;
  PhotoCampaignListViewManager__SetMode(
    photoCampaignManager,
    2,
    (PhotoCampaignListViewManager_CallbackFunc_o *)v17,
    0LL);
  this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)v6->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  monitor = (UILabel_o *)this[1].monitor;
  this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)PhotoCampaignComponent__GetTitleMessage(
                                                             (PhotoCampaignComponent_o *)this,
                                                             0LL);
  if ( !monitor )
    goto LABEL_20;
  UILabel__set_text(monitor, (System_String_o *)this, 0LL);
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
  CommonUI_o *v10; // x20
  System_Action_o *_9__2; // x22

  if ( (byte_4212199 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__2__, v6);
    byte_4212199 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( isDecide )
  {
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B0D840(&this->fields.__9__2, _9__2);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_17017160(v10, _9__2, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(Instance);
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
    sub_B0D97C(0LL);
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
  PhotoCampaignComponent_o *_4__this; // x0
  struct PhotoCampaignComponent_o *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  struct PhotoCampaignComponent_o *v9; // x8
  struct PhotoCampaignComponent_o *v10; // x20
  PhotoCampaignListViewManager_o *photoCampaignManager; // x19
  __int64 v12; // x21
  __int64 v13; // x9

  if ( (byte_421219B & 1) == 0 )
  {
    sub_B0D8A4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_PhotoCampaignComponent_OnClickServant__, v3);
    sub_B0D8A4(&StringLiteral_3055/*"CLICK_BACK"*/, v4);
    byte_421219B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    PhotoCampaignComponent__Init(_4__this, 0LL);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = (PhotoCampaignComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)_4__this,
                                               0LL);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
        v6 = this->fields.__4__this;
        if ( v6 )
        {
          _4__this = (PhotoCampaignComponent_o *)v6->fields.myRoomFsm;
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
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_18;
    _4__this = (PhotoCampaignComponent_o *)v9->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_18;
  photoCampaignManager = v10->fields.photoCampaignManager;
  v12 = sub_B0D974(PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7, v8);
  v13 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v12 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v12 + 16) = v13;
  *(_QWORD *)(v12 + 32) = v10;
  sub_B0D840(v12 + 32, v10);
  if ( !photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__SetMode(
    photoCampaignManager,
    2,
    (PhotoCampaignListViewManager_CallbackFunc_o *)v12,
    0LL);
}