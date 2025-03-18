void __fastcall PhotoServantSelectMenu___ctor(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PhotoServantSelectMenu__Awake(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PhotoServantSelectMenu__Close(
        PhotoServantSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PhotoServantSelectMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C1D7F6 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoServantSelectMenu_CloseAction__, callback);
    sub_1C3B764(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v5);
    byte_4C1D7F6 = 1;
  }
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  this->fields.closeCallback = callback;
  sub_1C3B708(&this->fields.closeCallback);
  v6 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C3B9B0(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
  PhotoServantSelectMenu_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PhotoServantSelectMenu_CloseAction__,
    v7);
  PhotoServantSelectMenu__StatusRequest(this, v6, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu__CloseAction(
        PhotoServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  struct PhotoCampaignListViewManager_o *v7; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v12; // x8
  System_Action_o *closeCallback; // x0

  if ( (byte_4C1D7F7 & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickServant__, v5);
    byte_4C1D7F7 = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v7 = this->fields.photoCampaignManager,
          v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C3B9B0(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
            v9),
          !v7) )
    {
LABEL_19:
      sub_1C3B9C0(photoCampaignManager, isRequest);
    }
    v7->fields.callbackFunc = v8;
    sub_1C3B708(&v7->fields.callbackFunc);
    PhotoCampaignListViewManager__SetMode_32746372(v7, 2, v10);
  }
  PhotoServantSelectMenu__Init(this, (const MethodInfo *)isRequest);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
  if ( !photoCampaignManager )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignManager, 0, 0LL);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)this->fields.titleInfo;
  if ( !photoCampaignManager )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)TitleInfoControl__FrameOut(
                                                             (TitleInfoControl_o *)photoCampaignManager,
                                                             0,
                                                             0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)titleInfo->fields.titleImg;
  if ( !photoCampaignManager )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)photoCampaignManager,
                                                             0LL);
  if ( !photoCampaignManager )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignManager, 0, 0LL);
  v12 = this->fields.titleInfo;
  if ( !v12 )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)v12->fields.headerBgImg;
  if ( !photoCampaignManager )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)photoCampaignManager,
                                                             0LL);
  if ( !photoCampaignManager )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignManager, 0, 0LL);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)this->fields.titleInfo;
  if ( !photoCampaignManager )
    goto LABEL_19;
  TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)photoCampaignManager, 0, 0LL);
  closeCallback = this->fields.closeCallback;
  if ( closeCallback )
    ActionExtensions__Call(closeCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu__CloseSvtDetail(
        PhotoServantSelectMenu_o *this,
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
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4C1D7FD & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C3B764(&Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__, v9);
    sub_1C3B764(&PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo, v10);
    byte_4C1D7FD = 1;
  }
  v11 = sub_1C3B9B0(PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_1C3B708(v11 + 24),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v11,
          Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1C3B9C0(v12, v13);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu__EndClickTabChoice(
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
          (photoCampaignManager = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_1C3B9C0(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32746372(photoCampaignManager, 2, v5);
  }
  PhotoServantSelectMenu__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu__EndClickTabLock(
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
          (photoCampaignManager = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_1C3B9C0(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32746372(photoCampaignManager, 2, v5);
  }
  PhotoServantSelectMenu__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu__EndClickTabNormal(
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
          (photoCampaignManager = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_1C3B9C0(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32746372(photoCampaignManager, 2, v5);
  }
  PhotoServantSelectMenu__SetModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu__EndClickTabPush(
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
          (photoCampaignManager = this->fields.photoCampaignManager) == 0LL) )
    {
      sub_1C3B9C0(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32746372(photoCampaignManager, 2, v5);
  }
  PhotoServantSelectMenu__SetModeTabKind(this, 3, method);
}


void __fastcall PhotoServantSelectMenu__EndPushRequest(
        PhotoServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4C1D7FC & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickServant__, v5);
    this = (PhotoServantSelectMenu_o *)sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C1D7FC = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
    return;
  this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager;
  if ( !this
    || (PhotoCampaignListViewManager__UpdateDisplayState((PhotoCampaignListViewManager_o *)this, 1, v7),
        (this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem((PhotoCampaignListViewManager_o *)this, v4->fields.usrSvtId, v8),
        photoCampaignManager = v4->fields.photoCampaignManager,
        v10 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C3B9B0(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v4,
          (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
          v11),
        !photoCampaignManager) )
  {
LABEL_9:
    sub_1C3B9C0(this, result);
  }
  photoCampaignManager->fields.callbackFunc = v10;
  sub_1C3B708(&photoCampaignManager->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32746372(photoCampaignManager, 2, v12);
}


void __fastcall PhotoServantSelectMenu__EndStatusSync(
        PhotoServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v4; // x19
  struct PhotoServantSelectMenu_RequestCallbackFunc_o **p_requestCallback; // x19
  struct PhotoServantSelectMenu_RequestCallbackFunc_o *v6; // x20
  struct PhotoServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  v4 = this;
  if ( (byte_4C1D804 & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, result);
    byte_4C1D804 = 1;
  }
  if ( !result )
    sub_1C3B9C0(this, result);
  if ( !System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
  {
    requestCallback = v4->fields.requestCallback;
    p_requestCallback = &v4->fields.requestCallback;
    v6 = requestCallback;
    if ( requestCallback )
    {
      *p_requestCallback = 0LL;
      sub_1C3B708(p_requestCallback);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v6->fields.m_target)(
        v6->fields.original_method_info,
        1LL,
        *(_QWORD *)&v6->fields.extra_arg);
    }
  }
}


int64_t __fastcall PhotoServantSelectMenu__GetLatestSelectedUsrSvtId(
        PhotoServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *String; // x19
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C1D7F4 & 1) == 0 )
  {
    sub_1C3B764(&string_TypeInfo, method);
    sub_1C3B764(&StringLiteral_10836/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v2);
    byte_4C1D7F4 = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10836/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
    return -1LL;
  if ( System_Int64__TryParse(String, &result, 0LL) )
    return result;
  return -1LL;
}


void __fastcall PhotoServantSelectMenu__Init(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C1D7F2 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_7279/*"IOS_EXAMINATION_NEWS_URL"*/, v3);
    byte_4C1D7F2 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    goto LABEL_8;
  PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method);
  this->fields.selectedUsrSvtId = -1LL;
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_7279/*"IOS_EXAMINATION_NEWS_URL"*/,
                                                             0LL);
  if ( !infoLb )
LABEL_8:
    sub_1C3B9C0(photoCampaignManager, method);
  UILabel__set_text(infoLb, (System_String_o *)photoCampaignManager, 0LL);
  PhotoServantSelectMenu__SetModeTabKind(this, 0, v6);
}


bool __fastcall PhotoServantSelectMenu__IsEnableSelectSvt(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  return (unsigned __int64)this->fields.selectedUsrSvtId >> 63;
}


void __fastcall PhotoServantSelectMenu__OnClickChoiceTabButton(
        PhotoServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  PhotoServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  PhotoServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4C1D800 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoServantSelectMenu_EndClickTabChoice__, method);
    sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickChoiceTabButton__, v3);
    sub_1C3B764(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1D800 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoServantSelectMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C3B9B0(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabChoice__,
          v10);
        PhotoServantSelectMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C3B9B0(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PhotoServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndClickTabChoice__,
        v13);
      PhotoServantSelectMenu__StatusRequest(this, v12, v14);
    }
    PhotoServantSelectMenu__SetModeTabKind(this, 2, v7);
  }
}


void __fastcall PhotoServantSelectMenu__OnClickLockTabButton(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  PhotoServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  PhotoServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4C1D7FF & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoServantSelectMenu_EndClickTabLock__, method);
    sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickLockTabButton__, v3);
    sub_1C3B764(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1D7FF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoServantSelectMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C3B9B0(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabLock__,
          v10);
        PhotoServantSelectMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C3B9B0(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
      PhotoServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndClickTabLock__,
        v13);
      PhotoServantSelectMenu__StatusRequest(this, v12, v14);
    }
    PhotoServantSelectMenu__SetModeTabKind(this, 1, v7);
  }
}


void __fastcall PhotoServantSelectMenu__OnClickNormalTabButton(
        PhotoServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PhotoServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C1D7FE & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoServantSelectMenu_EndClickTabNormal__, method);
    sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickNormalTabButton__, v3);
    sub_1C3B764(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1D7FE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoServantSelectMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C3B9B0(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PhotoServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PhotoServantSelectMenu_EndClickTabNormal__,
      v8);
    PhotoServantSelectMenu__StatusRequest(this, v7, v9);
  }
}


void __fastcall PhotoServantSelectMenu__OnClickPushTabButton(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PhotoServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C1D801 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoServantSelectMenu_EndClickTabPush__, method);
    sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickPushTabButton__, v3);
    sub_1C3B764(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1D801 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PhotoServantSelectMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1C3B9B0(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    PhotoServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PhotoServantSelectMenu_EndClickTabPush__,
      v8);
    PhotoServantSelectMenu__StatusRequest(this, v7, v9);
  }
}


void __fastcall PhotoServantSelectMenu__OnClickScaleChange(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C1D805 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickScaleChange__, method);
    byte_4C1D805 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_1C3B9C0(0LL, v5);
    PhotoCampaignListViewManager__ChangeIconScale(photoCampaignManager, v5);
    PhotoServantSelectMenu__UpdateScaleChangeIconSprite(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu__OnClickServant(
        PhotoServantSelectMenu_o *this,
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
  Il2CppObject *v29; // x20
  __int64 photoCampaignManager; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  PhotoCampaignListViewItem_o *Item; // x1
  PhotoCampaignListViewItem_o **p_monitor; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v36; // q1
  int32_t tabModeKind; // w8
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  int32_t v40; // w1
  UserServantEntity_o *v41; // x21
  CommonUI_o *v42; // x20
  ServantStatusDialog_ResultDelegate_o *v43; // x22
  _QWORD *v44; // x0
  _QWORD *v45; // x0
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  struct PhotoCampaignListViewManager_o *v48; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v49; // x0
  const MethodInfo *v50; // x3
  intptr_t v51; // w2
  int64_t selectedUsrSvtId; // x20
  _QWORD *v53; // x0
  struct PhotoCampaignListViewManager_CallbackFunc_o *v54; // x21
  const MethodInfo *v55; // x2
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  const MethodInfo *v58; // x2
  int64_t v59; // x22
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q0
  const MethodInfo *v62; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v67; // x26
  System_String_o *v68; // x22
  System_String_o *v69; // x23
  System_Object_array *v70; // x24
  int32_t Rarity; // w27
  Il2CppObject *v72; // x27
  Il2CppObject *v73; // x27
  int32_t v74; // w0
  Il2CppObject *v75; // x25
  int32_t v76; // w0
  Il2CppObject *v77; // x25
  Il2CppObject *v78; // x25
  PhotoCampaignListViewItem_o *v79; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x9
  ServantEntity_o *servantEntity; // x21
  Il2CppObject *v82; // x21
  System_String_o *v83; // x21
  System_String_o *v84; // x23
  System_String_o *v85; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v87; // x26
  __int64 v88; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4C1D7F8 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1C3B764(&LocalizationManager_TypeInfo, v14);
    sub_1C3B764(&object___TypeInfo, v15);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1C3B764(&Method_PhotoServantSelectMenu_CloseSvtDetail__, v18);
    sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickServant__, v19);
    sub_1C3B764(&Rarity_TypeInfo, v20);
    sub_1C3B764(&ServantStatusDialog_ResultDelegate_TypeInfo, v21);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1C3B764(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__0__, v23);
    sub_1C3B764(&PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo, v24);
    sub_1C3B764(&StringLiteral_12145/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, v25);
    sub_1C3B764(&StringLiteral_12143/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, v26);
    sub_1C3B764(&StringLiteral_12144/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, v27);
    sub_1C3B764(&StringLiteral_12146/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v28);
    byte_4C1D7F8 = 1;
  }
  v29 = (Il2CppObject *)sub_1C3B9B0(PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_102;
  v29[1].klass = (Il2CppClass *)this;
  sub_1C3B708(&v29[1]);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_102;
    Item = PhotoCampaignListViewManager__GetItem((PhotoCampaignListViewManager_o *)photoCampaignManager, n, v32);
  }
  v29[1].monitor = Item;
  p_monitor = (PhotoCampaignListViewItem_o **)&v29[1].monitor;
  photoCampaignManager = sub_1C3B708(&v29[1].monitor);
  if ( !v29[1].monitor )
    return;
  userSvtEntity = (*p_monitor)->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_102;
  v36 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v90 = v91;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v90, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      v41 = (*p_monitor)->fields.userSvtEntity;
      v42 = (CommonUI_o *)photoCampaignManager;
      v43 = (ServantStatusDialog_ResultDelegate_o *)sub_1C3B9B0(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v43,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_CloseSvtDetail__,
        0LL);
      if ( v42 )
      {
        CommonUI__OpenServantStatusDialog_31242804(v42, 0, v41, v43, 0, 0LL);
        return;
      }
    }
    goto LABEL_102;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*p_monitor )
      goto LABEL_102;
    (*p_monitor)->fields.isSwapChoice ^= 1u;
    v44 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickServant__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C3B748(v44, v44[4]);
    v40 = 0;
    goto LABEL_44;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*p_monitor )
      goto LABEL_102;
    (*p_monitor)->fields.isSwapLock ^= 1u;
    v38 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickServant__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C3B748(v38, v38[4]);
    v40 = 11;
    goto LABEL_44;
  }
  photoCampaignManager = (__int64)*p_monitor;
  if ( !*p_monitor )
    goto LABEL_102;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(photoCampaignManager + 112) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 112), 0LL) )
      {
LABEL_33:
        v45 = Method_PhotoServantSelectMenu_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
          v45 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickServant__);
        v39 = (System_Reflection_MethodBase_o *)sub_1C3B748(v45, v45[4]);
LABEL_43:
        v40 = 2;
LABEL_44:
        OverwriteAssetSoundName__PlaySystemSe(v39, v40, 0, 0LL);
LABEL_45:
        v48 = this->fields.photoCampaignManager;
        v49 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C3B9B0(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
        v51 = (int)Method_PhotoServantSelectMenu_OnClickServant__;
        goto LABEL_46;
      }
      photoCampaignManager = (__int64)*p_monitor;
      if ( !*p_monitor )
        goto LABEL_102;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v31) )
      goto LABEL_33;
    v56 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v56 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickServant__);
    v57 = (System_Reflection_MethodBase_o *)sub_1C3B748(v56, v56[4]);
    OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0LL);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !photoCampaignManager )
      goto LABEL_102;
    v59 = *(_QWORD *)(photoCampaignManager + 120);
    if ( !v59 )
    {
LABEL_58:
      PhotoServantSelectMenu__PushRequest(this, *p_monitor, v58);
      goto LABEL_45;
    }
    if ( !*p_monitor )
      goto LABEL_102;
    v60 = (*p_monitor)->fields.userSvtEntity;
    if ( !v60 )
      goto LABEL_102;
    v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
    *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v91.fields.fakeValue = v61;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v89 = v91;
    if ( v59 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v89, 0LL) )
      goto LABEL_58;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
               v59,
               (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_102;
    v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v92.fields.currentCryptoKey = klass;
    *(_QWORD *)&v92.fields.fakeValue = monitor;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v92, 0LL);
    if ( !v64 )
      goto LABEL_102;
    v67 = DataMasterBase_object__object__int___GetEntity(
            v64,
            photoCampaignManager,
            (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0LL);
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, 0LL);
    v70 = (System_Object_array *)sub_1C3B80C(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v70 )
LABEL_102:
      sub_1C3B9C0(photoCampaignManager, v31);
    v72 = (Il2CppObject *)photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_1C3B8A0(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
    {
      if ( !v70->max_length )
        goto LABEL_103;
      v70->m_Items[0] = v72;
      photoCampaignManager = sub_1C3B708(v70->m_Items);
      if ( !v67 )
        goto LABEL_102;
      photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v67, 0LL);
      v73 = (Il2CppObject *)photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_1C3B8A0(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
      {
        if ( v70->max_length <= 1 )
          goto LABEL_103;
        v70->m_Items[1] = v73;
        sub_1C3B708(&v70->m_Items[1]);
        v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                0LL);
        photoCampaignManager = (__int64)ServantEntity__getName((ServantEntity_o *)v67, v74, -1, 1, 0LL);
        v75 = (Il2CppObject *)photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_1C3B8A0(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
        {
          if ( v70->max_length <= 2 )
            goto LABEL_103;
          v70->m_Items[2] = v75;
          photoCampaignManager = sub_1C3B708(&v70->m_Items[2]);
          if ( !*p_monitor )
            goto LABEL_102;
          photoCampaignManager = (__int64)(*p_monitor)->fields.userSvtEntity;
          if ( !photoCampaignManager )
            goto LABEL_102;
          v76 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
          photoCampaignManager = (__int64)Rarity__getRarityType(v76, 0LL);
          v77 = (Il2CppObject *)photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_1C3B8A0(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
          {
            if ( v70->max_length <= 3 )
              goto LABEL_103;
            v70->m_Items[3] = v77;
            photoCampaignManager = sub_1C3B708(&v70->m_Items[3]);
            if ( !*p_monitor )
              goto LABEL_102;
            photoCampaignManager = (__int64)(*p_monitor)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_102;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
            v78 = (Il2CppObject *)photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_1C3B8A0(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
            {
              if ( v70->max_length <= 4 )
                goto LABEL_103;
              v70->m_Items[4] = v78;
              photoCampaignManager = sub_1C3B708(&v70->m_Items[4]);
              v79 = *p_monitor;
              if ( !*p_monitor )
                goto LABEL_102;
              v80 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v79->fields.userSvtEntity;
              if ( !v80 )
                goto LABEL_102;
              servantEntity = v79->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v80[6], 0LL);
              if ( !servantEntity )
                goto LABEL_102;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 1, 0LL);
              v82 = (Il2CppObject *)photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_1C3B8A0(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
              {
                if ( v70->max_length > 5 )
                {
                  v70->m_Items[5] = v82;
                  sub_1C3B708(&v70->m_Items[5]);
                  v83 = System_String__Format_63383120(v69, v70, 0LL);
                  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, 0LL);
                  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v87 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v87,
                    v29,
                    Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__0__,
                    0LL);
                  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31232212(
                      (CommonUI_o *)Instance,
                      v68,
                      v83,
                      v84,
                      v85,
                      v87,
                      *(_DWORD *)(*(_QWORD *)(photoCampaignManager + 184) + 488LL),
                      *(_DWORD *)(*(_QWORD *)(photoCampaignManager + 184) + 500LL),
                      15.0,
                      700,
                      0,
                      480,
                      -162.5,
                      0,
                      0,
                      240,
                      0,
                      0LL);
                    goto LABEL_45;
                  }
                  goto LABEL_102;
                }
LABEL_103:
                sub_1C3B9C8(photoCampaignManager, v31);
              }
            }
          }
        }
      }
    }
    v88 = sub_1C3B9E4();
    sub_1C3B88C(v88, 0LL);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v31) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v53 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickServant__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C3B748(v53, v53[4]);
    if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0, 0LL);
      PhotoServantSelectMenu__OpenSelectImageLimitDialog(this, *p_monitor, v62);
      return;
    }
    goto LABEL_43;
  }
  v46 = Method_PhotoServantSelectMenu_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
    v46 = (_QWORD *)sub_1C3B77C(Method_PhotoServantSelectMenu_OnClickServant__);
  v47 = (System_Reflection_MethodBase_o *)sub_1C3B748(v46, v46[4]);
  OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0, 0LL);
  v48 = this->fields.photoCampaignManager;
  v49 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C3B9B0(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v51 = (int)Method_PhotoServantSelectMenu_OnClickServant__;
LABEL_46:
  v54 = v49;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v49, (Il2CppObject *)this, v51, v50);
  if ( !v48 )
    goto LABEL_102;
  v48->fields.callbackFunc = v54;
  sub_1C3B708(&v48->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32746372(v48, 2, v55);
}


void __fastcall PhotoServantSelectMenu__Open(
        PhotoServantSelectMenu_o *this,
        System_Action_long__int__o *callback,
        int64_t anotherUserSvtId,
        int32_t anotherSvtLimitCount,
        int64_t baseUserSvtId,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v10; // x19
  __int64 v11; // x1
  int64_t LatestSelectedUsrSvtId; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  PhotoCampaignListViewManager_o *v16; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x23
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2

  v10 = this;
  if ( (byte_4C1D7F3 & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, callback);
    this = (PhotoServantSelectMenu_o *)sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickServant__, v11);
    byte_4C1D7F3 = 1;
  }
  LatestSelectedUsrSvtId = PhotoServantSelectMenu__GetLatestSelectedUsrSvtId(this, (const MethodInfo *)callback);
  v10->fields.closeCallback = 0LL;
  if ( baseUserSvtId <= 0 )
    baseUserSvtId = LatestSelectedUsrSvtId;
  sub_1C3B708(&v10->fields.closeCallback);
  v10->fields.selectImageLimitCallback = callback;
  sub_1C3B708(&v10->fields.selectImageLimitCallback);
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v10, 0LL) )
  {
    PhotoServantSelectMenu__Init(v10, v13);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v10->fields.titleInfo;
      if ( gameObject )
      {
        TitleInfoControl__changeTitleInfo_38564436((TitleInfoControl_o *)gameObject, 1, 61, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)v10->fields.titleInfo;
        if ( gameObject )
        {
          TitleInfoControl__FrameIn((TitleInfoControl_o *)gameObject, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)v10->fields.titleInfo;
          if ( gameObject )
          {
            TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)gameObject, 3, 1, 0LL);
            gameObject = (UnityEngine_GameObject_o *)v10->fields.titleInfo;
            if ( gameObject )
            {
              TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)gameObject, 1, 0LL);
              gameObject = (UnityEngine_GameObject_o *)v10->fields.bgTxtSprite;
              if ( gameObject )
              {
                v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
                if ( v20 )
                {
                  UnityEngine_GameObject__SetActive(v20, (unsigned __int8)gameObject & 1, 0LL);
                  gameObject = (UnityEngine_GameObject_o *)v10->fields.photoCampaignManager;
                  if ( gameObject )
                  {
                    PhotoCampaignListViewManager__CreateList(
                      (PhotoCampaignListViewManager_o *)gameObject,
                      baseUserSvtId,
                      anotherUserSvtId,
                      anotherSvtLimitCount,
                      v21);
                    PhotoServantSelectMenu__UpdateScaleChangeIconSprite(v10, v22);
                    photoCampaignManager = v10->fields.photoCampaignManager;
                    v24 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C3B9B0(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
                    PhotoCampaignListViewManager_CallbackFunc___ctor(
                      v24,
                      (Il2CppObject *)v10,
                      (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
                      v25);
                    if ( photoCampaignManager )
                    {
                      photoCampaignManager->fields.callbackFunc = v24;
                      sub_1C3B708(&photoCampaignManager->fields.callbackFunc);
                      PhotoCampaignListViewManager__SetMode_32746372(photoCampaignManager, 2, v26);
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
    sub_1C3B9C0(gameObject, v13);
  }
  gameObject = (UnityEngine_GameObject_o *)v10->fields.photoCampaignManager;
  if ( !gameObject )
    goto LABEL_20;
  PhotoCampaignListViewManager__UpdateItemCannotSelectSvt(
    (PhotoCampaignListViewManager_o *)gameObject,
    anotherUserSvtId,
    anotherSvtLimitCount,
    v14);
  v16 = v10->fields.photoCampaignManager;
  v17 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C3B9B0(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)v10,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v18);
  if ( !v16 )
    goto LABEL_20;
  v16->fields.callbackFunc = v17;
  sub_1C3B708(&v16->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32746372(v16, 2, v19);
  v10->fields.selectedUsrSvtId = -1LL;
LABEL_19:
  v10->fields.state = 2;
}


void __fastcall PhotoServantSelectMenu__OpenSelectImageLimitDialog(
        PhotoServantSelectMenu_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  _QWORD *monitor; // x8
  __int64 v12; // x8
  __int128 v13; // q1
  MyRoomControl_o *myRoomControl; // x19
  int64_t v15; // x21
  System_Action_bool__int__o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_4C1D7F9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__int__TypeInfo, item);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1C3B764(&Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__, v6);
    sub_1C3B764(&PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo, v7);
    byte_4C1D7F9 = 1;
  }
  v8 = (Il2CppObject *)sub_1C3B9B0(PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  v8[1].klass = (Il2CppClass *)this;
  sub_1C3B708(&v8[1]);
  v8[1].monitor = item;
  v9 = sub_1C3B708(&v8[1].monitor);
  monitor = v8[1].monitor;
  if ( !monitor )
    goto LABEL_10;
  v12 = monitor[14];
  if ( !v12 )
    goto LABEL_10;
  v13 = *(_OWORD *)(v12 + 32);
  myRoomControl = this->fields.myRoomControl;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
  *(_OWORD *)&v18.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v17, 0LL);
  v16 = (System_Action_bool__int__o *)sub_1C3B9B0(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v16,
    v8,
    Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__,
    0LL);
  if ( !myRoomControl )
LABEL_10:
    sub_1C3B9C0(v9, v10);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v15, v16, -1, 0LL);
}


void __fastcall PhotoServantSelectMenu__PushRequest(
        PhotoServantSelectMenu_o *this,
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
  __int64 v14; // x1
  CommonUI_o *v15; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct SoundInfo_o *soundInfo; // x8
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
  struct AssetsInfo_o *assetsInfo; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct SoundInfo_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4C1D7FB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1C3B764(&Method_PhotoServantSelectMenu_EndPushRequest__, v10);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4C1D7FB = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v53, 0LL);
  if ( !v17 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v15->fields.soundInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = soundInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v15->fields.assetsInfo;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PhotoServantSelectMenu_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v54, 0LL);
  if ( !v30 )
LABEL_19:
    sub_1C3B9C0(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    assetsInfo == (struct AssetsInfo_o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct SoundInfo_o *)v47,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu__SelectImageLimitDecide(
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

  v6 = this;
  if ( (byte_4C1D7FA & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_1C3B764(&Method_ActionExtensions_Call_long__int___, userSvtId);
    byte_4C1D7FA = 1;
  }
  v6->fields.state = 4;
  v6->fields.selectedUsrSvtId = userSvtId;
  PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(this, userSvtId, *(const MethodInfo **)&limitCount);
  photoCampaignManager = v6->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    sub_1C3B9C0(0LL, v7);
  PhotoCampaignListViewManager__SetMode_32746372(photoCampaignManager, 1, v8);
  selectImageLimitCallback = (System_Action_T1__T2__o *)v6->fields.selectImageLimitCallback;
  v6->fields.selectImageLimitCallback = 0LL;
  sub_1C3B708(&v6->fields.selectImageLimitCallback);
  if ( selectImageLimitCallback )
    ActionExtensions__Call_long__int_(
      selectImageLimitCallback,
      userSvtId,
      limitCount,
      (const MethodInfo_2F42644 *)Method_ActionExtensions_Call_long__int___);
}


void __fastcall PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(
        PhotoServantSelectMenu_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = userSvtId;
  if ( (byte_4C1D7F5 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_10836/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, userSvtId);
    byte_4C1D7F5 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10836/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu__SetModeTabKind(
        PhotoServantSelectMenu_o *this,
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
  __int64 v16; // x1
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v18; // x8
  System_String_o **v19; // x8
  System_String_o **v20; // x8
  __int64 *v21; // x8
  const MethodInfo *v22; // x2
  UILabel_o *infoLb; // x21
  char v24; // w8
  UILabel_o *v25; // x21
  __int64 *v26; // x8
  const MethodInfo *v27; // x2

  if ( (byte_4C1D802 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1C3B764(&StringLiteral_11860/*"SHOP_SCENE_VOICE_STONE"*/, v5);
    sub_1C3B764(&StringLiteral_18003/*"csIBM1026"*/, v6);
    sub_1C3B764(&StringLiteral_18004/*"csIBM273"*/, v7);
    sub_1C3B764(&StringLiteral_17989/*"criFsWebInstaller_Create() failed."*/, v8);
    sub_1C3B764(&StringLiteral_17992/*"critobj01"*/, v9);
    sub_1C3B764(&StringLiteral_11858/*"SHOP_SCENE_VOICE_SPECIAL"*/, v10);
    sub_1C3B764(&StringLiteral_7279/*"IOS_EXAMINATION_NEWS_URL"*/, v11);
    sub_1C3B764(&StringLiteral_11859/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/, v12);
    sub_1C3B764(&StringLiteral_18005/*"csIBM277"*/, v13);
    sub_1C3B764(&StringLiteral_18006/*"csIBM278"*/, v14);
    sub_1C3B764(&StringLiteral_17991/*"crimson"*/, v15);
    sub_1C3B764(&StringLiteral_17990/*"criMovie"*/, v16);
    byte_4C1D802 = 1;
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
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_18006/*"csIBM278"*/ : &StringLiteral_18005/*"csIBM277"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v18, 0LL);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17991/*"crimson"*/ : &StringLiteral_17992/*"critobj01"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v19, 0LL);
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
    v20 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17989/*"criFsWebInstaller_Create() failed."*/ : &StringLiteral_17990/*"criMovie"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v20, 0LL);
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
      sub_1C3B9C0(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v21 = &StringLiteral_18003/*"csIBM1026"*/;
    else
      v21 = &StringLiteral_18004/*"csIBM273"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v21, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7279/*"IOS_EXAMINATION_NEWS_URL"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v24 = 0;
        goto LABEL_48;
      case 1:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11859/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/;
        goto LABEL_45;
      case 2:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11858/*"SHOP_SCENE_VOICE_SPECIAL"*/;
        goto LABEL_45;
      case 3:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11860/*"SHOP_SCENE_VOICE_STONE"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v26, 0LL);
        if ( !v25 )
          goto LABEL_51;
        UILabel__set_text(v25, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v24 = 1;
LABEL_48:
        *((_BYTE *)&normalTabButton[15].fields + 4) = v24;
LABEL_49:
        PhotoCampaignListViewManager__UpdateDisplayState(
          (PhotoCampaignListViewManager_o *)normalTabButton,
          modeKind == 3,
          v22);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        PhotoCampaignListViewManager__SetMode_32746372((PhotoCampaignListViewManager_o *)normalTabButton, 2, v27);
        break;
      default:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        goto LABEL_49;
    }
  }
}


void __fastcall PhotoServantSelectMenu__StatusRequest(
        PhotoServantSelectMenu_o *this,
        PhotoServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t tabModeKind; // w8
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w4
  bool v15; // w5
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C1D803 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_PhotoServantSelectMenu_EndStatusSync__, v7);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4C1D803 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v17 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_21;
    if ( PhotoCampaignListViewManager__GetSwapChoiceList(photoCampaignManager, &choiceList, &v17, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C3B708(&this->fields.requestCallback);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v16,
                                                                 (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v13 = v17;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C3B9C0(photoCampaignManager, callback);
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
      sub_1C3B708(&this->fields.requestCallback);
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v11,
                                                                 (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v13 = unlockList;
        v12 = lockList;
        v14 = 1;
        v15 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v12, v13, 0, v14, v15, 0LL);
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


void __fastcall PhotoServantSelectMenu__UpdateScaleChangeIconSprite(
        PhotoServantSelectMenu_o *this,
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
    sub_1C3B9C0(photoCampaignManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)photoCampaignManager, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu_RequestCallbackFunc___ctor(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A75F88;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A75F40;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PhotoServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4C1D806 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isRequest);
    byte_4C1D806 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall PhotoServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall PhotoServantSelectMenu_RequestCallbackFunc__Invoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PhotoServantSelectMenu___c__DisplayClass36_0___ctor(
        PhotoServantSelectMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu___c__DisplayClass36_0___OnClickServant_b__0(
        PhotoServantSelectMenu___c__DisplayClass36_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4C1D807 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__, v6);
    byte_4C1D807 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1C3B708(&this->fields.__9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_31232440(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1C3B9C0(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall PhotoServantSelectMenu___c__DisplayClass36_0___OnClickServant_b__1(
        PhotoServantSelectMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C3B9C0(this, method);
  PhotoServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


void __fastcall PhotoServantSelectMenu___c__DisplayClass37_0___ctor(
        PhotoServantSelectMenu___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoServantSelectMenu___c__DisplayClass37_0___OpenSelectImageLimitDialog_b__0(
        PhotoServantSelectMenu___c__DisplayClass37_0_o *this,
        bool result,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  PhotoServantSelectMenu___c__DisplayClass37_0_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *_4__this; // x23
  PhotoCampaignListViewManager_o *klass; // x22
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x24
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
  if ( (byte_4C1D808 & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)sub_1C3B764(
                                                               &Method_PhotoServantSelectMenu_OnClickServant__,
                                                               v8);
    byte_4C1D808 = 1;
  }
  _4__this = (Il2CppObject *)v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  klass = (PhotoCampaignListViewManager_o *)_4__this[4].klass;
  v11 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C3B9B0(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v11,
    _4__this,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v12);
  if ( !klass )
    goto LABEL_13;
  klass->fields.callbackFunc = v11;
  sub_1C3B708(&klass->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32746372(klass, 2, v13);
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
  this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
                                                             &v19,
                                                             0LL);
  if ( !v17 )
LABEL_13:
    sub_1C3B9C0(this, result);
  PhotoServantSelectMenu__SelectImageLimitDecide(v17, (int64_t)this, imageLimitCount, v18);
}


void __fastcall PhotoServantSelectMenu___c__DisplayClass41_0___ctor(
        PhotoServantSelectMenu___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoServantSelectMenu___c__DisplayClass41_0___CloseSvtDetail_b__0(
        PhotoServantSelectMenu___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  PhotoServantSelectMenu_o *_4__this; // x0
  struct PhotoServantSelectMenu_o *v7; // x8
  struct PhotoServantSelectMenu_o *v8; // x8
  Il2CppObject *v9; // x20
  PhotoCampaignListViewManager_o *klass; // x19
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4C1D809 & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_PhotoServantSelectMenu_OnClickServant__, v4);
    sub_1C3B764(&StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, v5);
    byte_4C1D809 = 1;
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
                                               0LL);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
        v7 = this->fields.__4__this;
        if ( v7 )
        {
          _4__this = (PhotoServantSelectMenu_o *)v7->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1C3B9C0(_4__this, method);
  }
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_18;
    _4__this = (PhotoServantSelectMenu_o *)v8->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v9 = (Il2CppObject *)this->fields.__4__this;
  if ( !v9 )
    goto LABEL_18;
  klass = (PhotoCampaignListViewManager_o *)v9[4].klass;
  v11 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C3B9B0(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v11,
    v9,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v12);
  if ( !klass )
    goto LABEL_18;
  klass->fields.callbackFunc = v11;
  sub_1C3B708(&klass->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32746372(klass, 2, v13);
}