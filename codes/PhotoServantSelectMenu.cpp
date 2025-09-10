void PhotoServantSelectMenu___ctor(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PhotoServantSelectMenu__Awake(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  ;
}


void PhotoServantSelectMenu__Close(PhotoServantSelectMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  PhotoServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C22968 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoServantSelectMenu_CloseAction__);
    sub_1C2D490(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C22968 = 1;
  }
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
    ActionExtensions__Call(callback, 0);
  this->fields.closeCallback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)callback, v5, v6);
  v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C2D6DC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
  PhotoServantSelectMenu_RequestCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_PhotoServantSelectMenu_CloseAction__,
    v8);
  PhotoServantSelectMenu__StatusRequest(this, v7, v9);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu__CloseAction(PhotoServantSelectMenu_o *this, bool isRequest, const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  struct PhotoCampaignListViewManager_o *v6; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v13; // x8
  System_Action_o *closeCallback; // x0

  if ( (byte_4C22969 & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickServant__);
    byte_4C22969 = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v6 = this->fields.photoCampaignManager,
          v7 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
            v8),
          !v6) )
    {
LABEL_19:
      sub_1C2D6EC(photoCampaignManager, isRequest);
    }
    v6->fields.callbackFunc = v7;
    sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10);
    PhotoCampaignListViewManager__SetMode_33595752(v6, 2, v11);
  }
  PhotoServantSelectMenu__Init(this, (const MethodInfo *)isRequest);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
  if ( !photoCampaignManager )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignManager, 0, 0);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)this->fields.titleInfo;
  if ( !photoCampaignManager )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)TitleInfoControl__FrameOut(
                                                             (TitleInfoControl_o *)photoCampaignManager,
                                                             0,
                                                             0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)titleInfo->fields.titleImg;
  if ( !photoCampaignManager )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)photoCampaignManager,
                                                             0);
  if ( !photoCampaignManager )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignManager, 0, 0);
  v13 = this->fields.titleInfo;
  if ( !v13 )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)v13->fields.headerBgImg;
  if ( !photoCampaignManager )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)photoCampaignManager,
                                                             0);
  if ( !photoCampaignManager )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignManager, 0, 0);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)this->fields.titleInfo;
  if ( !photoCampaignManager )
    goto LABEL_19;
  TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)photoCampaignManager, 0, 0);
  closeCallback = this->fields.closeCallback;
  if ( closeCallback )
    ActionExtensions__Call(closeCallback, 0);
}


void PhotoServantSelectMenu__CloseSvtDetail(
        PhotoServantSelectMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4C2296F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__);
    sub_1C2D490(&PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo);
    byte_4C2296F = 1;
  }
  v8 = sub_1C2D6DC(PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v9, v10);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu__EndClickTabChoice(
        PhotoServantSelectMenu_o *this,
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
          (photoCampaignManager = this->fields.photoCampaignManager) == 0) )
    {
      sub_1C2D6EC(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_33595752(photoCampaignManager, 2, v5);
  }
  PhotoServantSelectMenu__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu__EndClickTabLock(PhotoServantSelectMenu_o *this, bool isRequest, const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (photoCampaignManager = this->fields.photoCampaignManager) == 0) )
    {
      sub_1C2D6EC(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_33595752(photoCampaignManager, 2, v5);
  }
  PhotoServantSelectMenu__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu__EndClickTabNormal(
        PhotoServantSelectMenu_o *this,
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
          (photoCampaignManager = this->fields.photoCampaignManager) == 0) )
    {
      sub_1C2D6EC(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_33595752(photoCampaignManager, 2, v5);
  }
  PhotoServantSelectMenu__SetModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu__EndClickTabPush(PhotoServantSelectMenu_o *this, bool isRequest, const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          (photoCampaignManager = this->fields.photoCampaignManager) == 0) )
    {
      sub_1C2D6EC(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_33595752(photoCampaignManager, 2, v5);
  }
  PhotoServantSelectMenu__SetModeTabKind(this, 3, method);
}


void PhotoServantSelectMenu__EndPushRequest(
        PhotoServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v4; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4C2296E & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickServant__);
    this = (PhotoServantSelectMenu_o *)sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C2296E = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_63493168(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
    return;
  this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager;
  if ( !this
    || (PhotoCampaignListViewManager__UpdateDisplayState((PhotoCampaignListViewManager_o *)this, 1, v5),
        (this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager) == 0)
    || (PhotoCampaignListViewManager__ModifyItem((PhotoCampaignListViewManager_o *)this, v4->fields.usrSvtId, v6),
        photoCampaignManager = v4->fields.photoCampaignManager,
        v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
          v9),
        !photoCampaignManager) )
  {
LABEL_9:
    sub_1C2D6EC(this, result);
  }
  photoCampaignManager->fields.callbackFunc = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&photoCampaignManager->fields.callbackFunc, (int32_t)v8, v10, v11);
  PhotoCampaignListViewManager__SetMode_33595752(photoCampaignManager, 2, v12);
}


void PhotoServantSelectMenu__EndStatusSync(
        PhotoServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_requestCallback; // x19
  struct PhotoServantSelectMenu_RequestCallbackFunc_o *v8; // x20
  struct PhotoServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  v4 = this;
  if ( (byte_4C22976 & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C22976 = 1;
  }
  if ( !result )
    sub_1C2D6EC(this, result);
  if ( !System_String__Equals_63493168(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
  {
    requestCallback = v4->fields.requestCallback;
    p_requestCallback = (CGThumbnailListItem_o *)&v4->fields.requestCallback;
    v8 = requestCallback;
    if ( requestCallback )
    {
      p_requestCallback->klass = 0;
      sub_1C2D434(p_requestCallback, 0, v5, v6);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v8->fields.invoke_impl)(
        v8->fields.method_code,
        1,
        v8->fields.method);
    }
  }
}


int64_t PhotoServantSelectMenu__GetLatestSelectedUsrSvtId(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  System_String_o *String; // x19
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22966 & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_10611/*"PhotoCampaignSelectedUsrSvtId2025"*/);
    byte_4C22966 = 1;
  }
  result = 0;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10611/*"PhotoCampaignSelectedUsrSvtId2025"*/,
             string_TypeInfo->static_fields->Empty,
             0);
  if ( System_String__IsNullOrEmpty(String, 0) )
    return -1;
  if ( System_Int64__TryParse(String, &result, 0) )
    return result;
  return -1;
}


void PhotoServantSelectMenu__Init(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C22964 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_7203/*"HEADER_MSG_PHOTO_SERVANT"*/);
    byte_4C22964 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    goto LABEL_8;
  PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method);
  this->fields.selectedUsrSvtId = -1;
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_7203/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0);
  if ( !infoLb )
LABEL_8:
    sub_1C2D6EC(photoCampaignManager, method);
  UILabel__set_text(infoLb, (System_String_o *)photoCampaignManager, 0);
  PhotoServantSelectMenu__SetModeTabKind(this, 0, v5);
}


bool PhotoServantSelectMenu__IsEnableSelectSvt(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  return (unsigned __int64)this->fields.selectedUsrSvtId >> 63;
}


void PhotoServantSelectMenu__OnClickChoiceTabButton(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  PhotoServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  PhotoServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C22972 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoServantSelectMenu_EndClickTabChoice__);
    sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickChoiceTabButton__);
    sub_1C2D490(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C22972 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C2D6DC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabChoice__,
          v8);
        PhotoServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C2D6DC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PhotoServantSelectMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndClickTabChoice__,
        v11);
      PhotoServantSelectMenu__StatusRequest(this, v10, v12);
    }
    PhotoServantSelectMenu__SetModeTabKind(this, 2, v5);
  }
}


void PhotoServantSelectMenu__OnClickLockTabButton(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  PhotoServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  PhotoServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C22971 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoServantSelectMenu_EndClickTabLock__);
    sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickLockTabButton__);
    sub_1C2D490(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C22971 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C2D6DC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabLock__,
          v8);
        PhotoServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C2D6DC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PhotoServantSelectMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndClickTabLock__,
        v11);
      PhotoServantSelectMenu__StatusRequest(this, v10, v12);
    }
    PhotoServantSelectMenu__SetModeTabKind(this, 1, v5);
  }
}


void PhotoServantSelectMenu__OnClickNormalTabButton(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PhotoServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4C22970 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoServantSelectMenu_EndClickTabNormal__);
    sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickNormalTabButton__);
    sub_1C2D490(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C22970 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C2D6DC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PhotoServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PhotoServantSelectMenu_EndClickTabNormal__,
      v6);
    PhotoServantSelectMenu__StatusRequest(this, v5, v7);
  }
}


void PhotoServantSelectMenu__OnClickPushTabButton(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PhotoServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4C22973 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoServantSelectMenu_EndClickTabPush__);
    sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickPushTabButton__);
    sub_1C2D490(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4C22973 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_PhotoServantSelectMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C2D6DC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PhotoServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PhotoServantSelectMenu_EndClickTabPush__,
      v6);
    PhotoServantSelectMenu__StatusRequest(this, v5, v7);
  }
}


void PhotoServantSelectMenu__OnClickScaleChange(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C22977 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickScaleChange__);
    byte_4C22977 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_1C2D6EC(0, v5);
    PhotoCampaignListViewManager__ChangeIconScale(photoCampaignManager, v5);
    PhotoServantSelectMenu__UpdateScaleChangeIconSprite(this, v7);
  }
}


void PhotoServantSelectMenu__OnClickServant(
        PhotoServantSelectMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 photoCampaignManager; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  PhotoCampaignListViewItem_o *Item; // x1
  PhotoCampaignListViewItem_o **v15; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v17; // q1
  int32_t tabModeKind; // w8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  int32_t v21; // w1
  UserServantEntity_o *v22; // x21
  CommonUI_o *v23; // x20
  ServantStatusDialog_ResultDelegate_o *v24; // x22
  _QWORD *v25; // x0
  _QWORD *v26; // x0
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  struct PhotoCampaignListViewManager_o *v29; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v30; // x0
  const MethodInfo *v31; // x3
  void *v32; // x2
  int64_t selectedUsrSvtId; // x20
  _QWORD *v34; // x0
  struct PhotoCampaignListViewManager_CallbackFunc_o *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  const MethodInfo *v41; // x2
  int64_t v42; // x22
  struct UserServantEntity_o *v43; // x8
  __int128 v44; // q0
  const MethodInfo *v45; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v50; // x27
  __int64 v51; // x28
  ServantOverwriteStatus_o *OverwriteStatus; // x26
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  __int64 v55; // x24
  int32_t v56; // w28
  __int64 v57; // x2
  const MethodInfo *v58; // x3
  __int64 v59; // x28
  const MethodInfo *v60; // x3
  __int64 v61; // x28
  int32_t v62; // w0
  const MethodInfo *v63; // x3
  __int64 v64; // x25
  const MethodInfo *v65; // x3
  __int64 v66; // x25
  const MethodInfo *v67; // x3
  __int64 v68; // x25
  PhotoCampaignListViewItem_o *v69; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x9
  ServantEntity_o *servantEntity; // x21
  const MethodInfo *v72; // x3
  __int64 v73; // x21
  System_String_o *v74; // x21
  System_String_o *v75; // x23
  System_String_o *v76; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v78; // x26
  __int64 v79; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4C2296A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_PhotoServantSelectMenu_CloseSvtDetail__);
    sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickServant__);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__0__);
    sub_1C2D490(&PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C2296A = 1;
  }
  v7 = sub_1C2D6DC(PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_104;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  if ( n < 0 )
  {
    Item = 0;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_104;
    Item = PhotoCampaignListViewManager__GetItem((PhotoCampaignListViewManager_o *)photoCampaignManager, n, v12);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v15 = (PhotoCampaignListViewItem_o **)(v7 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v12, v13);
  if ( !*(_QWORD *)(v7 + 24) )
    return;
  userSvtEntity = (*v15)->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_104;
  v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v82;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v81, 0);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v15 )
    {
      v22 = (*v15)->fields.userSvtEntity;
      v23 = (CommonUI_o *)photoCampaignManager;
      v24 = (ServantStatusDialog_ResultDelegate_o *)sub_1C2D6DC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v24,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_CloseSvtDetail__,
        0);
      if ( v23 )
      {
        CommonUI__OpenServantStatusDialog_31178516(v23, 0, v22, v24, 0, 0, 0);
        return;
      }
    }
    goto LABEL_104;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v15 )
      goto LABEL_104;
    (*v15)->fields.isSwapChoice ^= 1u;
    v25 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickServant__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v25, v25[4]);
    v21 = 0;
    goto LABEL_44;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v15 )
      goto LABEL_104;
    (*v15)->fields.isSwapLock ^= 1u;
    v19 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickServant__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v19, v19[4]);
    v21 = 11;
    goto LABEL_44;
  }
  photoCampaignManager = (__int64)*v15;
  if ( !*v15 )
    goto LABEL_104;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(photoCampaignManager + 120) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 120), 0) )
      {
LABEL_33:
        v26 = Method_PhotoServantSelectMenu_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
          v26 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickServant__);
        v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v26, v26[4]);
LABEL_43:
        v21 = 2;
LABEL_44:
        OverwriteAssetSoundName__PlaySystemSe(v20, v21, 0, 0);
LABEL_45:
        v29 = this->fields.photoCampaignManager;
        v30 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
        v32 = Method_PhotoServantSelectMenu_OnClickServant__;
        goto LABEL_46;
      }
      photoCampaignManager = (__int64)*v15;
      if ( !*v15 )
        goto LABEL_104;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
      goto LABEL_33;
    v39 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v39 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickServant__);
    v40 = (System_Reflection_MethodBase_o *)sub_1C2D474(v39, v39[4]);
    OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0, 0);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( !photoCampaignManager )
      goto LABEL_104;
    v42 = *(_QWORD *)(photoCampaignManager + 128);
    if ( !v42 )
    {
LABEL_58:
      PhotoServantSelectMenu__PushRequest(this, *v15, v41);
      goto LABEL_45;
    }
    if ( !*v15 )
      goto LABEL_104;
    v43 = (*v15)->fields.userSvtEntity;
    if ( !v43 )
      goto LABEL_104;
    v44 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
    *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v82.fields.fakeValue = v44;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v80 = v82;
    if ( v42 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v80, 0) )
      goto LABEL_58;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_104;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
               v42,
               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_104;
    v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v83.fields.currentCryptoKey = klass;
    *(_QWORD *)&v83.fields.fakeValue = monitor;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v83, 0);
    if ( !v47 )
      goto LABEL_104;
    v50 = DataMasterBase_object__object__int___GetEntity(
            v47,
            photoCampaignManager,
            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    photoCampaignManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Entity, 0, 0);
    if ( !*v15 )
      goto LABEL_104;
    v51 = photoCampaignManager;
    photoCampaignManager = (__int64)(*v15)->fields.userSvtEntity;
    if ( !photoCampaignManager )
      goto LABEL_104;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)photoCampaignManager, 0, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    photoCampaignManager = sub_1C2D538(object___TypeInfo, 6);
    if ( !v51 )
      goto LABEL_104;
    v55 = photoCampaignManager;
    v56 = *(_DWORD *)(v51 + 24);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(v56, 0);
    if ( !v55 )
LABEL_104:
      sub_1C2D6EC(photoCampaignManager, v9);
    v59 = photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_1C2D5CC(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v55 + 24) )
        goto LABEL_105;
      *(_QWORD *)(v55 + 32) = v59;
      sub_1C2D434((CGThumbnailListItem_o *)(v55 + 32), v59, v57, v58);
      if ( !v50 )
        goto LABEL_104;
      photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v50, 0);
      v61 = photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_1C2D5CC(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v55 + 24) <= 1u )
          goto LABEL_105;
        *(_QWORD *)(v55 + 40) = v61;
        sub_1C2D434((CGThumbnailListItem_o *)(v55 + 40), v61, v57, v60);
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                0);
        photoCampaignManager = (__int64)ServantEntity__getName((ServantEntity_o *)v50, v62, -1, 1, 0);
        v64 = photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_1C2D5CC(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v55 + 24) <= 2u )
            goto LABEL_105;
          *(_QWORD *)(v55 + 48) = v64;
          sub_1C2D434((CGThumbnailListItem_o *)(v55 + 48), v64, v57, v63);
          if ( !OverwriteStatus )
            goto LABEL_104;
          photoCampaignManager = (__int64)Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0);
          v66 = photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_1C2D5CC(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v55 + 24) <= 3u )
              goto LABEL_105;
            *(_QWORD *)(v55 + 56) = v66;
            sub_1C2D434((CGThumbnailListItem_o *)(v55 + 56), v66, v57, v65);
            if ( !*v15 )
              goto LABEL_104;
            photoCampaignManager = (__int64)(*v15)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_104;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0);
            v68 = photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_1C2D5CC(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v55 + 24) <= 4u )
                goto LABEL_105;
              *(_QWORD *)(v55 + 64) = v68;
              sub_1C2D434((CGThumbnailListItem_o *)(v55 + 64), v68, v57, v67);
              v69 = *v15;
              if ( !*v15 )
                goto LABEL_104;
              v70 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v69->fields.userSvtEntity;
              if ( !v70 )
                goto LABEL_104;
              servantEntity = v69->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v70[6], 0);
              if ( !servantEntity )
                goto LABEL_104;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 1, 0);
              v73 = photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_1C2D5CC(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v55 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v55 + 24) > 5u )
                {
                  *(_QWORD *)(v55 + 72) = v73;
                  sub_1C2D434((CGThumbnailListItem_o *)(v55 + 72), v73, v57, v72);
                  v74 = System_String__Format_63499292(v54, (System_Object_array *)v55, 0);
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11941/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v78 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v78,
                    (Il2CppObject *)v7,
                    Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__0__,
                    0);
                  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31167744(
                      (CommonUI_o *)Instance,
                      v53,
                      v74,
                      v75,
                      v76,
                      v78,
                      *(_DWORD *)(*(_QWORD *)(photoCampaignManager + 184) + 512LL),
                      *(_DWORD *)(*(_QWORD *)(photoCampaignManager + 184) + 524LL),
                      15.0,
                      700,
                      0,
                      480,
                      -162.5,
                      0,
                      0,
                      240,
                      0,
                      0);
                    goto LABEL_45;
                  }
                  goto LABEL_104;
                }
LABEL_105:
                sub_1C2D6F4(photoCampaignManager, v9, v57);
              }
            }
          }
        }
      }
    }
    v79 = sub_1C2D710();
    sub_1C2D5B8(v79, 0);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v34 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickServant__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v34, v34[4]);
    if ( selectedUsrSvtId < 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0);
      PhotoServantSelectMenu__OpenSelectImageLimitDialog(this, *v15, v45);
      return;
    }
    goto LABEL_43;
  }
  v27 = Method_PhotoServantSelectMenu_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_1C2D4A8(Method_PhotoServantSelectMenu_OnClickServant__);
  v28 = (System_Reflection_MethodBase_o *)sub_1C2D474(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
  v29 = this->fields.photoCampaignManager;
  v30 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v32 = Method_PhotoServantSelectMenu_OnClickServant__;
LABEL_46:
  v35 = v30;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v30, (Il2CppObject *)this, (intptr_t)v32, v31);
  if ( !v29 )
    goto LABEL_104;
  v29->fields.callbackFunc = v35;
  sub_1C2D434((CGThumbnailListItem_o *)&v29->fields.callbackFunc, (int32_t)v35, v36, v37);
  PhotoCampaignListViewManager__SetMode_33595752(v29, 2, v38);
}


void PhotoServantSelectMenu__Open(
        PhotoServantSelectMenu_o *this,
        System_Action_long__int__o *callback,
        int64_t anotherUserSvtId,
        int32_t anotherSvtLimitCount,
        int64_t baseUserSvtId,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v10; // x19
  int64_t LatestSelectedUsrSvtId; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct PhotoCampaignListViewManager_o *v19; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  UnityEngine_GameObject_o *v25; // x23
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2

  v10 = this;
  if ( (byte_4C22965 & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    this = (PhotoServantSelectMenu_o *)sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickServant__);
    byte_4C22965 = 1;
  }
  LatestSelectedUsrSvtId = PhotoServantSelectMenu__GetLatestSelectedUsrSvtId(this, (const MethodInfo *)callback);
  v10->fields.closeCallback = 0;
  if ( baseUserSvtId <= 0 )
    baseUserSvtId = LatestSelectedUsrSvtId;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.closeCallback, 0, v12, v13);
  v10->fields.selectImageLimitCallback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.selectImageLimitCallback, (int32_t)callback, v14, v15);
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v10, 0) )
  {
    PhotoServantSelectMenu__Init(v10, v16);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)v10->fields.titleInfo;
      if ( gameObject )
      {
        TitleInfoControl__changeTitleInfo_39625124((TitleInfoControl_o *)gameObject, 1, 63, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)v10->fields.titleInfo;
        if ( gameObject )
        {
          TitleInfoControl__FrameIn((TitleInfoControl_o *)gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)v10->fields.titleInfo;
          if ( gameObject )
          {
            TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)gameObject, 3, 1, 0);
            gameObject = (UnityEngine_GameObject_o *)v10->fields.titleInfo;
            if ( gameObject )
            {
              TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)gameObject, 1, 0);
              gameObject = (UnityEngine_GameObject_o *)v10->fields.bgTxtSprite;
              if ( gameObject )
              {
                v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
                if ( v25 )
                {
                  UnityEngine_GameObject__SetActive(v25, (unsigned __int8)gameObject & 1, 0);
                  gameObject = (UnityEngine_GameObject_o *)v10->fields.photoCampaignManager;
                  if ( gameObject )
                  {
                    PhotoCampaignListViewManager__CreateList(
                      (PhotoCampaignListViewManager_o *)gameObject,
                      baseUserSvtId,
                      anotherUserSvtId,
                      anotherSvtLimitCount,
                      v26);
                    PhotoServantSelectMenu__UpdateScaleChangeIconSprite(v10, v27);
                    photoCampaignManager = v10->fields.photoCampaignManager;
                    v29 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
                    PhotoCampaignListViewManager_CallbackFunc___ctor(
                      v29,
                      (Il2CppObject *)v10,
                      (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
                      v30);
                    if ( photoCampaignManager )
                    {
                      photoCampaignManager->fields.callbackFunc = v29;
                      sub_1C2D434(
                        (CGThumbnailListItem_o *)&photoCampaignManager->fields.callbackFunc,
                        (int32_t)v29,
                        v31,
                        v32);
                      PhotoCampaignListViewManager__SetMode_33595752(photoCampaignManager, 2, v33);
                      goto LABEL_19;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C2D6EC(gameObject, v16);
  }
  gameObject = (UnityEngine_GameObject_o *)v10->fields.photoCampaignManager;
  if ( !gameObject )
    goto LABEL_20;
  PhotoCampaignListViewManager__UpdateItemCannotSelectSvt(
    (PhotoCampaignListViewManager_o *)gameObject,
    anotherUserSvtId,
    anotherSvtLimitCount,
    v17);
  v19 = v10->fields.photoCampaignManager;
  v20 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)v10,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v21);
  if ( !v19 )
    goto LABEL_20;
  v19->fields.callbackFunc = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->fields.callbackFunc, (int32_t)v20, v22, v23);
  PhotoCampaignListViewManager__SetMode_33595752(v19, 2, v24);
  v10->fields.selectedUsrSvtId = -1;
LABEL_19:
  v10->fields.state = 2;
}


void PhotoServantSelectMenu__OpenSelectImageLimitDialog(
        PhotoServantSelectMenu_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x8
  __int64 v13; // x8
  __int128 v14; // q1
  MyRoomControl_o *myRoomControl; // x19
  int64_t v16; // x21
  System_Action_bool__int__o *v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h]

  if ( (byte_4C2296B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__);
    sub_1C2D490(&PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo);
    byte_4C2296B = 1;
  }
  v5 = sub_1C2D6DC(PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = item;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)item, v10, v11);
  v12 = *(_QWORD *)(v5 + 24);
  if ( !v12 )
    goto LABEL_10;
  v13 = *(_QWORD *)(v12 + 120);
  if ( !v13 )
    goto LABEL_10;
  v14 = *(_OWORD *)(v13 + 32);
  myRoomControl = this->fields.myRoomControl;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
  *(_OWORD *)&v19.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v18 = v19;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v18, 0);
  v17 = (System_Action_bool__int__o *)sub_1C2D6DC(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__,
    0);
  if ( !myRoomControl )
LABEL_10:
    sub_1C2D6EC(v6, v7);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v16, v17, -1, 0);
}


void PhotoServantSelectMenu__PushRequest(
        PhotoServantSelectMenu_o *this,
        PhotoCampaignListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CommonUI_o *limitCountSupport; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t m_CachedPtr; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct FadeInfo_o *fadeInfo; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v17; // x0
  __int128 v18; // q1
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  __int128 v21; // q1
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w26
  int32_t v24; // w27
  int32_t v25; // w28
  int32_t v26; // w29
  bool IsLock; // w21
  char v28; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct SoundInfo_o *soundInfo; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct FadeInfo_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4C2296D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_PhotoServantSelectMenu_EndPushRequest__);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2296D = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_19;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_19;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v45, 0);
  if ( !v9 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  fadeInfo = v7->fields.fadeInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = fadeInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v43, 0);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v7->fields.soundInfo;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v19, (Il2CppObject *)this, Method_PhotoServantSelectMenu_EndPushRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userSvtEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userSvtEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v46, 0);
  if ( !v22 )
LABEL_19:
    sub_1C2D6EC(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    soundInfo == (struct SoundInfo_o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct FadeInfo_o *)v39,
    0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu__SelectImageLimitDecide(
        PhotoServantSelectMenu_o *this,
        int64_t userSvtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v6; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  System_Action_T1__T2__o *selectImageLimitCallback; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_4C2296C & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_1C2D490(&Method_ActionExtensions_Call_long__int___);
    byte_4C2296C = 1;
  }
  v6->fields.state = 4;
  v6->fields.selectedUsrSvtId = userSvtId;
  PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(this, userSvtId, *(const MethodInfo **)&limitCount);
  photoCampaignManager = v6->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    sub_1C2D6EC(0, v7);
  PhotoCampaignListViewManager__SetMode_33595752(photoCampaignManager, 1, v8);
  selectImageLimitCallback = (System_Action_T1__T2__o *)v6->fields.selectImageLimitCallback;
  v6->fields.selectImageLimitCallback = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.selectImageLimitCallback, 0, v11, v12);
  if ( selectImageLimitCallback )
    ActionExtensions__Call_long__int_(
      selectImageLimitCallback,
      userSvtId,
      limitCount,
      (const MethodInfo_301B584 *)Method_ActionExtensions_Call_long__int___);
}


void PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(
        PhotoServantSelectMenu_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = userSvtId;
  if ( (byte_4C22967 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10611/*"PhotoCampaignSelectedUsrSvtId2025"*/);
    byte_4C22967 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10611/*"PhotoCampaignSelectedUsrSvtId2025"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu__SetModeTabKind(PhotoServantSelectMenu_o *this, int32_t modeKind, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v6; // x8
  System_String_o **v7; // x8
  System_String_o **v8; // x8
  __int64 *v9; // x8
  const MethodInfo *v10; // x2
  UILabel_o *infoLb; // x21
  char v12; // w8
  UILabel_o *v13; // x21
  __int64 *v14; // x8
  const MethodInfo *v15; // x2

  if ( (byte_4C22974 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11651/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C2D490(&StringLiteral_17648/*"button_push_reg"*/);
    sub_1C2D490(&StringLiteral_17649/*"button_push_unreg"*/);
    sub_1C2D490(&StringLiteral_17634/*"button_allchoice_reg"*/);
    sub_1C2D490(&StringLiteral_17637/*"button_alllock_unreg"*/);
    sub_1C2D490(&StringLiteral_11649/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C2D490(&StringLiteral_7203/*"HEADER_MSG_PHOTO_SERVANT"*/);
    sub_1C2D490(&StringLiteral_11650/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C2D490(&StringLiteral_17650/*"button_select_reg"*/);
    sub_1C2D490(&StringLiteral_17651/*"button_select_unreg"*/);
    sub_1C2D490(&StringLiteral_17636/*"button_alllock_reg"*/);
    sub_1C2D490(&StringLiteral_17635/*"button_allchoice_unreg"*/);
    byte_4C22974 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17651/*"button_select_unreg"*/ : &StringLiteral_17650/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17636/*"button_alllock_reg"*/ : &StringLiteral_17637/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17634/*"button_allchoice_reg"*/ : &StringLiteral_17635/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0) )
    {
LABEL_51:
      sub_1C2D6EC(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17648/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17649/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7203/*"HEADER_MSG_PHOTO_SERVANT"*/, 0);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v12 = 0;
        goto LABEL_48;
      case 1:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11650/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11649/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11651/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v14, 0);
        if ( !v13 )
          goto LABEL_51;
        UILabel__set_text(v13, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v12 = 1;
LABEL_48:
        BYTE4(normalTabButton[15].fields.m_CachedPtr) = v12;
LABEL_49:
        PhotoCampaignListViewManager__UpdateDisplayState(
          (PhotoCampaignListViewManager_o *)normalTabButton,
          modeKind == 3,
          v10);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        PhotoCampaignListViewManager__SetMode_33595752((PhotoCampaignListViewManager_o *)normalTabButton, 2, v15);
        break;
      default:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        goto LABEL_49;
    }
  }
}


void PhotoServantSelectMenu__StatusRequest(
        PhotoServantSelectMenu_o *this,
        PhotoServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w4
  bool v14; // w5
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C22975 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_PhotoServantSelectMenu_EndStatusSync__);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C22975 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v18 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_21;
    if ( PhotoCampaignListViewManager__GetSwapChoiceList(photoCampaignManager, &choiceList, &v18, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v15, v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v17,
                                                                 (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v12 = v18;
        v11 = choiceList;
        v14 = 1;
        v13 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C2D6EC(photoCampaignManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_21;
    if ( PhotoCampaignListViewManager__GetSwapLockList(photoCampaignManager, &lockList, &unlockList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v8, v9);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v10,
                                                                 (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v12 = unlockList;
        v11 = lockList;
        v13 = 1;
        v14 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v11, v12, 0, v13, v14, 0);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void PhotoServantSelectMenu__UpdateScaleChangeIconSprite(PhotoServantSelectMenu_o *this, const MethodInfo *method)
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
    sub_1C2D6EC(photoCampaignManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)photoCampaignManager, 0);
}


void PhotoServantSelectMenu_RequestCallbackFunc___ctor(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6B6CC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6B684;
}


System_IAsyncResult_o *PhotoServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4C22978 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C22978 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void PhotoServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void PhotoServantSelectMenu_RequestCallbackFunc__Invoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void PhotoServantSelectMenu___c__DisplayClass36_0___ctor(
        PhotoServantSelectMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoServantSelectMenu___c__DisplayClass36_0___OnClickServant_b__0(
        PhotoServantSelectMenu___c__DisplayClass36_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C22979 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__);
    byte_4C22979 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31167972(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void PhotoServantSelectMenu___c__DisplayClass36_0___OnClickServant_b__1(
        PhotoServantSelectMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, method);
  PhotoServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


void PhotoServantSelectMenu___c__DisplayClass37_0___ctor(
        PhotoServantSelectMenu___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu___c__DisplayClass37_0___OpenSelectImageLimitDialog_b__0(
        PhotoServantSelectMenu___c__DisplayClass37_0_o *this,
        bool result,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  PhotoServantSelectMenu___c__DisplayClass37_0_o *v6; // x20
  Il2CppObject *_4__this; // x23
  Il2CppClass *klass; // x22
  PhotoCampaignListViewManager_CallbackFunc_o *v9; // x24
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v16; // q1
  PhotoServantSelectMenu_o *v17; // x20
  const MethodInfo *v18; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4C2297A & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickServant__);
    byte_4C2297A = 1;
  }
  _4__this = (Il2CppObject *)v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  klass = _4__this[4].klass;
  v9 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v9,
    _4__this,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v10);
  if ( !klass )
    goto LABEL_13;
  klass->vtable[4].method = (const MethodInfo *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&klass->vtable[4].method, (int32_t)v9, v11, v12);
  PhotoCampaignListViewManager__SetMode_33595752((PhotoCampaignListViewManager_o *)klass, 2, v13);
  if ( !result )
    return;
  item = v6->fields.item;
  if ( !item )
    goto LABEL_13;
  userSvtEntity = item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_13;
  v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v17 = v6->fields.__4__this;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v16;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                             &v19,
                                                             0);
  if ( !v17 )
LABEL_13:
    sub_1C2D6EC(this, result);
  PhotoServantSelectMenu__SelectImageLimitDecide(v17, (int64_t)this, imageLimitCount, v18);
}


void PhotoServantSelectMenu___c__DisplayClass41_0___ctor(
        PhotoServantSelectMenu___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoServantSelectMenu___c__DisplayClass41_0___CloseSvtDetail_b__0(
        PhotoServantSelectMenu___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PhotoServantSelectMenu_o *_4__this; // x0
  struct PhotoServantSelectMenu_o *v5; // x8
  struct PhotoServantSelectMenu_o *v6; // x8
  Il2CppObject *v7; // x20
  Il2CppClass *klass; // x19
  PhotoCampaignListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4C2297B & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PhotoServantSelectMenu_OnClickServant__);
    sub_1C2D490(&StringLiteral_3430/*"CLICK_BACK"*/);
    byte_4C2297B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    PhotoServantSelectMenu__Init(_4__this, method);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = (PhotoServantSelectMenu_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)_4__this,
                                               0);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
        v5 = this->fields.__4__this;
        if ( v5 )
        {
          _4__this = (PhotoServantSelectMenu_o *)v5->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3430/*"CLICK_BACK"*/, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1C2D6EC(_4__this, method);
  }
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_18;
    _4__this = (PhotoServantSelectMenu_o *)v6->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0);
  }
  v7 = (Il2CppObject *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_18;
  klass = v7[4].klass;
  v9 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C2D6DC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v10);
  if ( !klass )
    goto LABEL_18;
  klass->vtable[4].method = (const MethodInfo *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&klass->vtable[4].method, (int32_t)v9, v11, v12);
  PhotoCampaignListViewManager__SetMode_33595752((PhotoCampaignListViewManager_o *)klass, 2, v13);
}