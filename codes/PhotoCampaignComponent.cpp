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
  PhotoCampaignComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_438B2D6 & 1) == 0 )
  {
    sub_B775C4(&Method_PhotoCampaignComponent_EndCancelButton__);
    sub_B775C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_438B2D6 = 1;
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
  v10 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B77694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    0LL);
  PhotoCampaignComponent__StatusRequest(this, v10, v11);
}


void __fastcall PhotoCampaignComponent__CloseSvtDetail(
        PhotoCampaignComponent_o *this,
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

  if ( (byte_438B2DC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__);
    sub_B775C4(&PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo);
    byte_438B2DC = 1;
  }
  v8 = sub_B77694(PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo);
  PhotoCampaignComponent___c__DisplayClass43_0___ctor((PhotoCampaignComponent___c__DisplayClass43_0_o *)v8, 0LL);
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
          Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B7769C(v9, v10);
  }
  CommonUI__CloseServantStatusDialog(Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__EndCancelButton(
        PhotoCampaignComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  struct PhotoCampaignListViewManager_o *v6; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_438B2D7 & 1) == 0 )
  {
    sub_B775C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickServant__);
    byte_438B2D7 = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v6 = this->fields.photoCampaignManager,
          v7 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B77694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            0LL),
          !v6) )
    {
LABEL_11:
      sub_B7769C(photoCampaignManager, isRequest);
    }
    v6->fields.callbackFunc = v7;
    sub_B77560(
      (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    PhotoCampaignListViewManager__SetMode_25432936(v6, 2, v14);
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


// local variable allocation has failed, the output may be wrong!
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
      sub_B7769C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_25432936(photoCampaignManager, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B7769C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_25432936(photoCampaignManager, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B7769C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_25432936(photoCampaignManager, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B7769C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_25432936(photoCampaignManager, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 3, method);
}


void __fastcall PhotoCampaignComponent__EndPushRequest(
        PhotoCampaignComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v5; // x2
  struct PhotoCampaignListViewManager_o *v6; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_438B2DB & 1) == 0 )
  {
    sub_B775C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickServant__);
    byte_438B2DB = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (photoCampaignManager = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(photoCampaignManager, this->fields.usrSvtId, v5),
        v6 = this->fields.photoCampaignManager,
        v7 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B77694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !v6) )
  {
    sub_B7769C(photoCampaignManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_B77560(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  PhotoCampaignListViewManager__SetMode_25432936(v6, 2, v14);
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
    sub_B77560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PhotoCampaignComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


int64_t __fastcall PhotoCampaignComponent__GetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v4; // x0
  int64_t result; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_438B2D4 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_10850/*"PhotoCampaignSelectedUsrSvtId2024"*/);
    byte_438B2D4 = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10850/*"PhotoCampaignSelectedUsrSvtId2024"*/,
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


void __fastcall PhotoCampaignComponent__Init(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x2

  if ( (byte_438B2D2 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_7192/*"HEADER_MSG_PHOTO_SERVANT"*/);
    byte_438B2D2 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    goto LABEL_9;
  PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  photoCampaignManager = (PhotoCampaignListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_7192/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0LL);
  if ( !infoLb )
LABEL_9:
    sub_B7769C(photoCampaignManager, method);
  UILabel__set_text(infoLb, (System_String_o *)photoCampaignManager, 0LL);
  PhotoCampaignComponent__SetModeTabKind(this, 0, v5);
}


bool __fastcall PhotoCampaignComponent__IsEnableSelectSvt(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  return (unsigned __int64)this->fields.selectedUsrSvtId >> 63;
}


void __fastcall PhotoCampaignComponent__OnClickChoiceTabButton(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_438B2DF & 1) == 0 )
  {
    sub_B775C4(&Method_PhotoCampaignComponent_EndClickTabChoice__);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    sub_B775C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_438B2DF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B77694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B77694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabChoice__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v9, v10);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 2, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__OnClickDecide(
        PhotoCampaignComponent_o *this,
        int64_t userSvtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  this->fields.selectedUsrSvtId = userSvtId;
  this->fields.state = 4;
  this->fields.selectedImageLimitCount = limitCount;
  PhotoCampaignComponent__SetLatestSelectedUsrSvtId(this, userSvtId, *(const MethodInfo **)&limitCount);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_B7769C(0LL, v5);
  MyRoomControl__DispPhotoCampaign(
    myRoomControl,
    this->fields.selectedUsrSvtId,
    this->fields.selectedImageLimitCount,
    this->fields.selectedMasterEquipId,
    this->fields.selectedMasterGenderType,
    0LL);
}


void __fastcall PhotoCampaignComponent__OnClickLockTabButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_438B2DE & 1) == 0 )
  {
    sub_B775C4(&Method_PhotoCampaignComponent_EndClickTabLock__);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickLockTabButton__);
    sub_B775C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_438B2DE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B77694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B77694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabLock__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v9, v10);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 1, v5);
  }
}


void __fastcall PhotoCampaignComponent__OnClickNormalTabButton(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_438B2DD & 1) == 0 )
  {
    sub_B775C4(&Method_PhotoCampaignComponent_EndClickTabNormal__);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    sub_B775C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_438B2DD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B77694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabNormal__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v5, v6);
  }
}


void __fastcall PhotoCampaignComponent__OnClickPushTabButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_438B2E0 & 1) == 0 )
  {
    sub_B775C4(&Method_PhotoCampaignComponent_EndClickTabPush__);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickPushTabButton__);
    sub_B775C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_438B2E0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B77694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabPush__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v5, v6);
  }
}


void __fastcall PhotoCampaignComponent__OnClickScaleChange(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_438B2E3 & 1) == 0 )
  {
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickScaleChange__);
    byte_438B2E3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_B7769C(0LL, v5);
    PhotoCampaignListViewManager__ChangeIconScale(photoCampaignManager, v5);
    PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v7);
  }
}


void __fastcall PhotoCampaignComponent__OnClickServant(
        PhotoCampaignComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 photoCampaignManager; // x0
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  MethodInfo *v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **Item; // x1
  PhotoCampaignListViewItem_o **v23; // x21
  __int64 v24; // x8
  __int128 v25; // q1
  int32_t tabModeKind; // w8
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int32_t v29; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v31; // x20
  ServantStatusDialog_ResultDelegate_o *v32; // x22
  _QWORD *v33; // x0
  _QWORD *v34; // x0
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  struct PhotoCampaignListViewManager_o *v37; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v38; // x0
  intptr_t v39; // w2
  int64_t selectedUsrSvtId; // x20
  _QWORD *v41; // x0
  System_Int32_array **v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo *v49; // x2
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  const MethodInfo *v52; // x2
  int64_t v53; // x22
  struct UserServantEntity_o *v54; // x8
  __int128 v55; // q0
  const MethodInfo *v56; // x2
  UserServantEntity_o *Entity; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x22
  __int64 v59; // x23
  __int64 v60; // x24
  ServantEntity_o *v61; // x26
  System_String_o *v62; // x22
  System_String_o *v63; // x23
  __int64 v64; // x24
  int32_t Rarity; // w27
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x27
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x27
  int32_t v80; // w0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x25
  int32_t v88; // w0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x25
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x25
  PhotoCampaignListViewItem_o *v103; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v104; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x21
  System_String_o *v113; // x21
  System_String_o *v114; // x23
  System_String_o *v115; // x24
  CommonUI_o *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v117; // x26
  __int64 v118; // x0
  __int64 v119; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_438B2D8 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_PhotoCampaignComponent_CloseSvtDetail__);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickServant__);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__);
    sub_B775C4(&PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo);
    sub_B775C4(&StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_438B2D8 = 1;
  }
  v7 = sub_B77694(PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo);
  PhotoCampaignComponent___c__DisplayClass39_0___ctor((PhotoCampaignComponent___c__DisplayClass39_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_109;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_109;
    Item = (System_Int32_array **)PhotoCampaignListViewManager__GetItem(
                                    (PhotoCampaignListViewManager_o *)photoCampaignManager,
                                    n,
                                    v16);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v23 = (PhotoCampaignListViewItem_o **)(v7 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), Item, (System_String_array **)v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_109;
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 112LL);
  if ( !v24 )
    goto LABEL_109;
  v25 = *(_OWORD *)(v24 + 32);
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
  *(_OWORD *)&v122.fields.fakeValue = v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v121 = v122;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v121, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      userSvtEntity = (*v23)->fields.userSvtEntity;
      v31 = (CommonUI_o *)photoCampaignManager;
      v32 = (ServantStatusDialog_ResultDelegate_o *)sub_B77694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v32,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v31 )
      {
        CommonUI__OpenServantStatusDialog_18067360(v31, 0, userSvtEntity, v32, 0, 0LL);
        return;
      }
    }
    goto LABEL_109;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v23 )
      goto LABEL_109;
    (*v23)->fields.isSwapChoice ^= 1u;
    v33 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v33 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickServant__);
    v28 = (System_Reflection_MethodBase_o *)sub_B775A8(v33, v33[3]);
    v29 = 0;
    goto LABEL_45;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v23 )
      goto LABEL_109;
    (*v23)->fields.isSwapLock ^= 1u;
    v27 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v27 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickServant__);
    v28 = (System_Reflection_MethodBase_o *)sub_B775A8(v27, v27[3]);
    v29 = 11;
    goto LABEL_45;
  }
  photoCampaignManager = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_109;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(photoCampaignManager + 112) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 112), 0LL) )
      {
LABEL_34:
        v34 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
          v34 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickServant__);
        v28 = (System_Reflection_MethodBase_o *)sub_B775A8(v34, v34[3]);
LABEL_44:
        v29 = 2;
LABEL_45:
        OverwriteAssetSoundName__PlaySystemSe(v28, v29, 0LL);
LABEL_46:
        v37 = this->fields.photoCampaignManager;
        v38 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B77694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
        v39 = (int)Method_PhotoCampaignComponent_OnClickServant__;
        goto LABEL_47;
      }
      photoCampaignManager = (__int64)*v23;
      if ( !*v23 )
        goto LABEL_109;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
      goto LABEL_34;
    v50 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v50 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickServant__);
    v51 = (System_Reflection_MethodBase_o *)sub_B775A8(v50, v50[3]);
    OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0LL);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !photoCampaignManager )
      goto LABEL_109;
    v53 = *(_QWORD *)(photoCampaignManager + 120);
    if ( !v53 )
    {
LABEL_60:
      PhotoCampaignComponent__PushRequest(this, *v23, v52);
      goto LABEL_46;
    }
    if ( !*v23 )
      goto LABEL_109;
    v54 = (*v23)->fields.userSvtEntity;
    if ( !v54 )
      goto LABEL_109;
    v55 = *(_OWORD *)&v54->fields.id.fields.fakeValue;
    *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v54->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v122.fields.fakeValue = v55;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v120 = v122;
    if ( v53 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v120, 0LL) )
      goto LABEL_60;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_109;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)photoCampaignManager,
               v53,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_109;
    v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)photoCampaignManager;
    v60 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v59 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v123.fields.currentCryptoKey = v60;
    *(_QWORD *)&v123.fields.fakeValue = v59;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v123, 0LL);
    if ( !v58 )
      goto LABEL_109;
    v61 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v58,
                               photoCampaignManager,
                               (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v64 = sub_B775DC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v64 )
LABEL_109:
      sub_B7769C(photoCampaignManager, v9);
    v72 = (System_Int32_array **)photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_B77684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v64 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v64 + 24) )
        goto LABEL_110;
      *(_QWORD *)(v64 + 32) = v72;
      sub_B77560((BattleServantConfConponent_o *)(v64 + 32), v72, v66, v67, v68, v69, v70, v71);
      if ( !v61 )
        goto LABEL_109;
      photoCampaignManager = (__int64)ServantEntity__getClassName(v61, 0LL);
      v79 = (System_Int32_array **)photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_B77684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v64 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v64 + 24) <= 1u )
          goto LABEL_110;
        *(_QWORD *)(v64 + 40) = v79;
        sub_B77560((BattleServantConfConponent_o *)(v64 + 40), v79, v73, v74, v75, v76, v77, v78);
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(Entity->fields.limitCount, 0LL);
        photoCampaignManager = (__int64)ServantEntity__getName(v61, v80, -1, 0LL);
        v87 = (System_Int32_array **)photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_B77684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v64 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v64 + 24) <= 2u )
            goto LABEL_110;
          *(_QWORD *)(v64 + 48) = v87;
          sub_B77560((BattleServantConfConponent_o *)(v64 + 48), v87, v81, v82, v83, v84, v85, v86);
          if ( !*v23 )
            goto LABEL_109;
          photoCampaignManager = (__int64)(*v23)->fields.userSvtEntity;
          if ( !photoCampaignManager )
            goto LABEL_109;
          v88 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
          photoCampaignManager = (__int64)Rarity__getRarityType(v88, 0LL);
          v95 = (System_Int32_array **)photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_B77684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v64 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v64 + 24) <= 3u )
              goto LABEL_110;
            *(_QWORD *)(v64 + 56) = v95;
            sub_B77560((BattleServantConfConponent_o *)(v64 + 56), v95, v89, v90, v91, v92, v93, v94);
            if ( !*v23 )
              goto LABEL_109;
            photoCampaignManager = (__int64)(*v23)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_109;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
            v102 = (System_Int32_array **)photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_B77684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v64 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v64 + 24) <= 4u )
                goto LABEL_110;
              *(_QWORD *)(v64 + 64) = v102;
              sub_B77560((BattleServantConfConponent_o *)(v64 + 64), v102, v96, v97, v98, v99, v100, v101);
              v103 = *v23;
              if ( !*v23 )
                goto LABEL_109;
              v104 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v103->fields.userSvtEntity;
              if ( !v104 )
                goto LABEL_109;
              servantEntity = v103->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v104[6], 0LL);
              if ( !servantEntity )
                goto LABEL_109;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 0LL);
              v112 = (System_Int32_array **)photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_B77684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v64 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v64 + 24) > 5u )
                {
                  *(_QWORD *)(v64 + 72) = v112;
                  sub_B77560((BattleServantConfConponent_o *)(v64 + 72), v112, v106, v107, v108, v109, v110, v111);
                  v113 = System_String__Format_44980660(v63, (System_Object_array *)v64, 0LL);
                  v114 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v117 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v117,
                    (Il2CppObject *)v7,
                    Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__,
                    0LL);
                  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_18055364(
                      Instance,
                      v62,
                      v113,
                      v114,
                      v115,
                      v117,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    goto LABEL_46;
                  }
                  goto LABEL_109;
                }
LABEL_110:
                v118 = sub_B776C8(photoCampaignManager);
                sub_B77668(v118, 0LL);
              }
            }
          }
        }
      }
    }
    v119 = sub_B776BC(photoCampaignManager);
    sub_B77668(v119, 0LL);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v41 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v41 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickServant__);
    v28 = (System_Reflection_MethodBase_o *)sub_B775A8(v41, v41[3]);
    if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0LL);
      PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(this, *v23, v56);
      return;
    }
    goto LABEL_44;
  }
  v35 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
    v35 = (_QWORD *)sub_B775CC(Method_PhotoCampaignComponent_OnClickServant__);
  v36 = (System_Reflection_MethodBase_o *)sub_B775A8(v35, v35[3]);
  OverwriteAssetSoundName__PlaySystemSe(v36, 2, 0LL);
  v37 = this->fields.photoCampaignManager;
  v38 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B77694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v39 = (int)Method_PhotoCampaignComponent_OnClickServant__;
LABEL_47:
  v42 = (System_Int32_array **)v38;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v38, (Il2CppObject *)this, v39, 0LL);
  if ( !v37 )
    goto LABEL_109;
  v37->fields.callbackFunc = (struct PhotoCampaignListViewManager_CallbackFunc_o *)v42;
  sub_B77560((BattleServantConfConponent_o *)&v37->fields.callbackFunc, v42, v43, v44, v45, v46, v47, v48);
  PhotoCampaignListViewManager__SetMode_25432936(v37, 2, v49);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__Open(
        PhotoCampaignComponent_o *this,
        int32_t type,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  int64_t gameObject; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct MyRoomControl_o *myRoomControl; // x8
  UnityEngine_GameObject_o *v18; // x20
  PhotoCampaignComponent_o *v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2

  if ( (byte_438B2D3 & 1) == 0 )
  {
    sub_B775C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickServant__);
    byte_438B2D3 = 1;
  }
  this->fields.selectedImageLimitCount = 0;
  this->fields.selectedMasterEquipId = equipId;
  this->fields.selectedUsrSvtId = -1LL;
  this->fields.selectedMasterGenderType = genderType;
  PhotoCampaignComponent__Init(this, *(const MethodInfo **)&type);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v11, v12, v13, v14, v15, v16);
  gameObject = (int64_t)this->fields.titleInfo;
  this->fields.photoType = type;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_18674844((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_12;
  gameObject = (int64_t)myRoomControl->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)gameObject, 3, 0LL);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_12;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v18
    || (UnityEngine_GameObject__SetActive(v18, gameObject & 1, 0LL),
        gameObject = PhotoCampaignComponent__GetLatestSelectedUsrSvtId(v19, v20),
        !this->fields.photoCampaignManager)
    || (PhotoCampaignListViewManager__CreateList(
          this->fields.photoCampaignManager,
          gameObject,
          this->fields.selectedUsrSvtId,
          v21),
        PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v22),
        photoCampaignManager = this->fields.photoCampaignManager,
        v24 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B77694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v24,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_B7769C(gameObject, v10);
  }
  photoCampaignManager->fields.callbackFunc = v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&photoCampaignManager->fields.callbackFunc,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  PhotoCampaignListViewManager__SetMode_25432936(photoCampaignManager, 2, v31);
  this->fields.state = 2;
}


void __fastcall PhotoCampaignComponent__PushRequest(
        PhotoCampaignComponent_o *this,
        PhotoCampaignListViewItem_o *selectItem,
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

  if ( (byte_438B2DA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_PhotoCampaignComponent_EndPushRequest__);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B2DA = 1;
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
    Method_PhotoCampaignComponent_EndPushRequest__,
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


void __fastcall PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(
        PhotoCampaignComponent_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x8
  __int64 v21; // x8
  __int128 v22; // q1
  MyRoomControl_o *myRoomControl; // x20
  int64_t v24; // x21
  System_Action_bool__int__o *v25; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-40h]

  if ( (byte_438B2D9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool__int___ctor__);
    sub_B775C4(&System_Action_bool__int__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__);
    sub_B775C4(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo);
    byte_438B2D9 = 1;
  }
  v5 = sub_B77694(PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo);
  PhotoCampaignComponent___c__DisplayClass40_0___ctor((PhotoCampaignComponent___c__DisplayClass40_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)item, v14, v15, v16, v17, v18, v19);
  v20 = *(_QWORD *)(v5 + 24);
  if ( !v20 )
    goto LABEL_11;
  v21 = *(_QWORD *)(v20 + 112);
  if ( !v21 )
    goto LABEL_11;
  v22 = *(_OWORD *)(v21 + 32);
  myRoomControl = this->fields.myRoomControl;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
  *(_OWORD *)&v27.fields.fakeValue = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v26 = v27;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL);
  v25 = (System_Action_bool__int__o *)sub_B77694(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v25,
    (Il2CppObject *)v5,
    Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__,
    (const MethodInfo_26AC5D0 *)Method_System_Action_bool__int___ctor__);
  if ( !myRoomControl )
LABEL_11:
    sub_B7769C(v6, v7);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v24, v25, -1, 0LL);
}


void __fastcall PhotoCampaignComponent__SetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = usrSvtId;
  if ( (byte_438B2D5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10850/*"PhotoCampaignSelectedUsrSvtId2024"*/);
    byte_438B2D5 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10850/*"PhotoCampaignSelectedUsrSvtId2024"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__SetModeTabKind(
        PhotoCampaignComponent_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v6; // x8
  System_String_o **v7; // x8
  System_String_o **v8; // x8
  __int64 *v9; // x8
  const MethodInfo *v10; // x2
  UILabel_o *infoLb; // x21
  struct PhotoCampaignListViewManager_o *v12; // x8
  struct PhotoCampaignListViewManager_o **p_photoCampaignManager; // x19
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // t1
  UILabel_o *v15; // x21
  __int64 *v16; // x8
  struct PhotoCampaignListViewManager_o *v17; // x8
  struct PhotoCampaignListViewManager_o *v18; // t1
  const MethodInfo *v19; // x2

  if ( (byte_438B2E1 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B775C4(&StringLiteral_17477/*"button_push_reg"*/);
    sub_B775C4(&StringLiteral_17478/*"button_push_unreg"*/);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_7192/*"HEADER_MSG_PHOTO_SERVANT"*/);
    sub_B775C4(&StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438B2E1 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_54;
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17480/*"button_select_unreg"*/ : &StringLiteral_17479/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_54;
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17465/*"button_alllock_reg"*/ : &StringLiteral_17466/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_54;
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
LABEL_54:
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
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7192/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_54;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        photoCampaignManager = this->fields.photoCampaignManager;
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        v12 = photoCampaignManager;
        if ( !photoCampaignManager )
          goto LABEL_54;
        v12->fields.isCanNotLongPush = 0;
        goto LABEL_51;
      case 1:
        v15 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = &StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_47;
      case 2:
        v15 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = &StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_47;
      case 3:
        v15 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = &StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_47:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v16, 0LL);
        if ( !v15 )
          goto LABEL_54;
        UILabel__set_text(v15, (System_String_o *)normalTabButton, 0LL);
        v18 = this->fields.photoCampaignManager;
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        v17 = v18;
        if ( !v18 )
          goto LABEL_54;
        v17->fields.isCanNotLongPush = 1;
LABEL_51:
        normalTabButton = (UnityEngine_Behaviour_o *)*p_photoCampaignManager;
        if ( !*p_photoCampaignManager )
          goto LABEL_54;
        PhotoCampaignListViewManager__UpdateDisplayState(
          (PhotoCampaignListViewManager_o *)normalTabButton,
          modeKind == 3,
          v10);
        normalTabButton = (UnityEngine_Behaviour_o *)*p_photoCampaignManager;
        if ( !*p_photoCampaignManager )
          goto LABEL_54;
        PhotoCampaignListViewManager__SetMode_25432936((PhotoCampaignListViewManager_o *)normalTabButton, 2, v19);
        break;
      default:
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        goto LABEL_51;
    }
  }
}


void __fastcall PhotoCampaignComponent__StatusRequest(
        PhotoCampaignComponent_o *this,
        PhotoCampaignComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x2
  System_Int64_array *v16; // x1
  bool v17; // w4
  bool v18; // w5
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_438B2E2 & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_PhotoCampaignComponent_EndStatusSync__);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438B2E2 = 1;
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
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v25,
                                                                 (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v15 = unchoiceList;
        v16 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B7769C(photoCampaignManager, callback);
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
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v14,
                                                                 (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v15 = unlockList;
        v16 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v16, v15, 0, v17, v18, 0LL);
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
    sub_B7769C(photoCampaignManager, method);
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
  if ( (byte_438A0DD & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438A0DD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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


void __fastcall PhotoCampaignComponent___c__DisplayClass39_0___ctor(
        PhotoCampaignComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass39_0___OnClickServant_b__0(
        PhotoCampaignComponent___c__DisplayClass39_0_o *this,
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

  if ( (byte_438A0D9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__);
    byte_438A0D9 = 1;
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
        Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__,
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


void __fastcall PhotoCampaignComponent___c__DisplayClass39_0___OnClickServant_b__1(
        PhotoCampaignComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  PhotoCampaignComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  PhotoCampaignComponent__PushRequest(_4__this, this->fields.item, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___ctor(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___RecursiveOpenSelectImageLimitDialog_b__0(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        bool result,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct PhotoCampaignComponent_o *_4__this; // x24
  PhotoCampaignListViewManager_o *photoCampaignManager; // x22
  __int64 v18; // x23
  __int64 v19; // x9
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct PhotoCampaignComponent_o *v26; // x21
  int32_t photoType; // w8
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v30; // q1
  int64_t v31; // x0
  MyRoomControl_o *myRoomControl; // x21
  System_Action_int__int__o *v33; // x22
  System_Action_o *_9__2; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-50h]

  if ( (byte_438A0DA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int__int___ctor__);
    sub_B775C4(&System_Action_int__int__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickServant__);
    sub_B775C4(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__);
    sub_B775C4(&Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__);
    sub_B775C4(&PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo);
    byte_438A0DA = 1;
  }
  v7 = sub_B77694(PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_21;
  *(_QWORD *)(v7 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 16) = imageLimitCount;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  photoCampaignManager = _4__this->fields.photoCampaignManager;
  v18 = sub_B77694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v19 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v18 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = _4__this;
  sub_B77560((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)_4__this, v20, v21, v22, v23, v24, v25);
  if ( !photoCampaignManager )
    goto LABEL_21;
  PhotoCampaignListViewManager__SetMode(
    photoCampaignManager,
    2,
    (PhotoCampaignListViewManager_CallbackFunc_o *)v18,
    0LL);
  if ( !result )
    return;
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_21;
  photoType = v26->fields.photoType;
  if ( photoType == 1 )
  {
    myRoomControl = v26->fields.myRoomControl;
    v33 = (System_Action_int__int__o *)sub_B77694(System_Action_int__int__TypeInfo);
    System_Action_int__int____ctor(
      v33,
      (Il2CppObject *)v7,
      Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__,
      (const MethodInfo_26AD210 *)Method_System_Action_int__int___ctor__);
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.__9__2,
        (System_Int32_array **)_9__2,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    if ( myRoomControl )
    {
      MyRoomControl__OpenMasterEquipSettingDialog(myRoomControl, v33, _9__2, 0LL);
      return;
    }
    goto LABEL_21;
  }
  if ( photoType )
    return;
  item = this->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
LABEL_21:
    sub_B7769C(v8, v9);
  v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v30;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v41 = v42;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
  PhotoCampaignComponent__OnClickDecide(v26, v31, *(_DWORD *)(v7 + 16), 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___RecursiveOpenSelectImageLimitDialog_b__2(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  PhotoCampaignComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(_4__this, this->fields.item, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_1___ctor(
        PhotoCampaignComponent___c__DisplayClass40_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent___c__DisplayClass40_1___RecursiveOpenSelectImageLimitDialog_b__1(
        PhotoCampaignComponent___c__DisplayClass40_1_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  PhotoCampaignComponent___c__DisplayClass40_1_o *v6; // x19
  struct PhotoCampaignComponent___c__DisplayClass40_0_o *CS___8__locals1; // x8
  struct PhotoCampaignComponent_o *_4__this; // x8
  struct PhotoCampaignComponent___c__DisplayClass40_0_o *v9; // x8
  struct PhotoCampaignComponent_o *v10; // x8
  struct PhotoCampaignComponent___c__DisplayClass40_0_o *v11; // x8
  struct PhotoCampaignListViewItem_o *item; // x9
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v14; // q1
  PhotoCampaignComponent_o *v15; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_438A0DB & 1) == 0 )
  {
    this = (PhotoCampaignComponent___c__DisplayClass40_1_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438A0DB = 1;
  }
  CS___8__locals1 = v6->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields.selectedMasterEquipId = equipId;
  v9 = v6->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_15;
  v10 = v9->fields.__4__this;
  if ( !v10 )
    goto LABEL_15;
  v10->fields.selectedMasterGenderType = genderType;
  v11 = v6->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_15;
  item = v11->fields.item;
  if ( !item )
    goto LABEL_15;
  userSvtEntity = item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v15 = v11->fields.__4__this;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  this = (PhotoCampaignComponent___c__DisplayClass40_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                             &v16,
                                                             0LL);
  if ( !v15 )
LABEL_15:
    sub_B7769C(this, *(_QWORD *)&equipId);
  PhotoCampaignComponent__OnClickDecide(v15, (int64_t)this, v6->fields.imageLimitCount, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass43_0___ctor(
        PhotoCampaignComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass43_0___CloseSvtDetail_b__0(
        PhotoCampaignComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  PhotoCampaignComponent_o *_4__this; // x0
  struct PhotoCampaignComponent_o *v4; // x8
  struct PhotoCampaignComponent_o *v5; // x8
  struct PhotoCampaignComponent_o *v6; // x20
  PhotoCampaignListViewManager_o *photoCampaignManager; // x19
  __int64 v8; // x21
  __int64 v9; // x9
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_438A0DC & 1) == 0 )
  {
    sub_B775C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PhotoCampaignComponent_OnClickServant__);
    sub_B775C4(&StringLiteral_3161/*"CLICK_BACK"*/);
    byte_438A0DC = 1;
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
        v4 = this->fields.__4__this;
        if ( v4 )
        {
          _4__this = (PhotoCampaignComponent_o *)v4->fields.myRoomFsm;
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
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_18;
    _4__this = (PhotoCampaignComponent_o *)v5->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_18;
  photoCampaignManager = v6->fields.photoCampaignManager;
  v8 = sub_B77694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v9 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v8 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v8 + 16) = v9;
  *(_QWORD *)(v8 + 32) = v6;
  sub_B77560((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)v6, v10, v11, v12, v13, v14, v15);
  if ( !photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__SetMode(photoCampaignManager, 2, (PhotoCampaignListViewManager_CallbackFunc_o *)v8, 0LL);
}