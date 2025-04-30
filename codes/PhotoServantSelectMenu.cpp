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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  PhotoServantSelectMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4A49C51 & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoServantSelectMenu_CloseAction__, callback);
    sub_1B863B8(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v5);
    byte_4A49C51 = 1;
  }
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  this->fields.closeCallback = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)callback, v6, v7);
  v8 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
  PhotoServantSelectMenu_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_PhotoServantSelectMenu_CloseAction__,
    v9);
  PhotoServantSelectMenu__StatusRequest(this, v8, v10);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v14; // x8
  System_Action_o *closeCallback; // x0

  if ( (byte_4A49C52 & 1) == 0 )
  {
    sub_1B863B8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickServant__, v5);
    byte_4A49C52 = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v7 = this->fields.photoCampaignManager,
          v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B86604(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
            v9),
          !v7) )
    {
LABEL_19:
      sub_1B86614(photoCampaignManager, isRequest);
    }
    v7->fields.callbackFunc = v8;
    sub_1B8635C((CGThumbnailListItem_o *)&v7->fields.callbackFunc, (int32_t)v8, v10, v11);
    PhotoCampaignListViewManager__SetMode_32175508(v7, 2, v12);
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
  v14 = this->fields.titleInfo;
  if ( !v14 )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)v14->fields.headerBgImg;
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v17; // x20

  if ( (byte_4A49C58 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B863B8(&Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__, v9);
    sub_1B863B8(&PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo, v10);
    byte_4A49C58 = 1;
  }
  v11 = sub_1B86604(PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v17 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v11,
          Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B86614(v12, v13);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v17, 0LL);
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
      sub_1B86614(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32175508(photoCampaignManager, 2, v5);
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
      sub_1B86614(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32175508(photoCampaignManager, 2, v5);
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
      sub_1B86614(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32175508(photoCampaignManager, 2, v5);
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
      sub_1B86614(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32175508(photoCampaignManager, 2, v5);
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
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_4A49C57 & 1) == 0 )
  {
    sub_1B863B8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickServant__, v5);
    this = (PhotoServantSelectMenu_o *)sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A49C57 = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_61680480(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL) )
    return;
  this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager;
  if ( !this
    || (PhotoCampaignListViewManager__UpdateDisplayState((PhotoCampaignListViewManager_o *)this, 1, v7),
        (this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem((PhotoCampaignListViewManager_o *)this, v4->fields.usrSvtId, v8),
        photoCampaignManager = v4->fields.photoCampaignManager,
        v10 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B86604(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v4,
          (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
          v11),
        !photoCampaignManager) )
  {
LABEL_9:
    sub_1B86614(this, result);
  }
  photoCampaignManager->fields.callbackFunc = v10;
  sub_1B8635C((CGThumbnailListItem_o *)&photoCampaignManager->fields.callbackFunc, (int32_t)v10, v12, v13);
  PhotoCampaignListViewManager__SetMode_32175508(photoCampaignManager, 2, v14);
}


void __fastcall PhotoServantSelectMenu__EndStatusSync(
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
  if ( (byte_4A49C5F & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_1B863B8(&StringLiteral_21893/*"ng"*/, result);
    byte_4A49C5F = 1;
  }
  if ( !result )
    sub_1B86614(this, result);
  if ( !System_String__Equals_61680480(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL) )
  {
    requestCallback = v4->fields.requestCallback;
    p_requestCallback = (CGThumbnailListItem_o *)&v4->fields.requestCallback;
    v8 = requestCallback;
    if ( requestCallback )
    {
      p_requestCallback->klass = 0LL;
      sub_1B8635C(p_requestCallback, 0, v5, v6);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v8->fields.m_target)(
        v8->fields.original_method_info,
        1LL,
        *(_QWORD *)&v8->fields.extra_arg);
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

  if ( (byte_4A49C4F & 1) == 0 )
  {
    sub_1B863B8(&string_TypeInfo, method);
    sub_1B863B8(&StringLiteral_10457/*"PhotoCampaignSelectedUsrSvtId2025"*/, v2);
    byte_4A49C4F = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10457/*"PhotoCampaignSelectedUsrSvtId2025"*/,
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

  if ( (byte_4A49C4D & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_7068/*"HEADER_MSG_PHOTO_SERVANT"*/, v3);
    byte_4A49C4D = 1;
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
                                                             (System_String_o *)StringLiteral_7068/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0LL);
  if ( !infoLb )
LABEL_8:
    sub_1B86614(photoCampaignManager, method);
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

  if ( (byte_4A49C5B & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoServantSelectMenu_EndClickTabChoice__, method);
    sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickChoiceTabButton__, v3);
    sub_1B863B8(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A49C5B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoServantSelectMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabChoice__,
          v10);
        PhotoServantSelectMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4A49C5A & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoServantSelectMenu_EndClickTabLock__, method);
    sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickLockTabButton__, v3);
    sub_1B863B8(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A49C5A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoServantSelectMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabLock__,
          v10);
        PhotoServantSelectMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4A49C59 & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoServantSelectMenu_EndClickTabNormal__, method);
    sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickNormalTabButton__, v3);
    sub_1B863B8(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A49C59 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoServantSelectMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4A49C5C & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoServantSelectMenu_EndClickTabPush__, method);
    sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickPushTabButton__, v3);
    sub_1B863B8(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4A49C5C = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PhotoServantSelectMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1B86604(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4A49C60 & 1) == 0 )
  {
    sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickScaleChange__, method);
    byte_4A49C60 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_1B86614(0LL, v5);
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
  __int64 v29; // x20
  __int64 photoCampaignManager; // x0
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  PhotoCampaignListViewItem_o *Item; // x1
  PhotoCampaignListViewItem_o **v37; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v39; // q1
  int32_t tabModeKind; // w8
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int32_t v43; // w1
  UserServantEntity_o *v44; // x21
  CommonUI_o *v45; // x20
  ServantStatusDialog_ResultDelegate_o *v46; // x22
  _QWORD *v47; // x0
  _QWORD *v48; // x0
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  struct PhotoCampaignListViewManager_o *v51; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v52; // x0
  const MethodInfo *v53; // x3
  intptr_t v54; // w2
  int64_t selectedUsrSvtId; // x20
  _QWORD *v56; // x0
  struct PhotoCampaignListViewManager_CallbackFunc_o *v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x2
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  const MethodInfo *v63; // x2
  int64_t v64; // x22
  struct UserServantEntity_o *v65; // x8
  __int128 v66; // q0
  const MethodInfo *v67; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v72; // x27
  __int64 v73; // x28
  ServantOverwriteStatus_o *OverwriteStatus; // x26
  System_String_o *v75; // x22
  System_String_o *v76; // x23
  __int64 v77; // x24
  int32_t v78; // w28
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  __int64 v81; // x28
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x28
  int32_t v85; // w0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  __int64 v88; // x25
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  __int64 v91; // x25
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  __int64 v94; // x25
  PhotoCampaignListViewItem_o *v95; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v96; // x9
  ServantEntity_o *servantEntity; // x21
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  __int64 v100; // x21
  System_String_o *v101; // x21
  System_String_o *v102; // x23
  System_String_o *v103; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v105; // x26
  __int64 v106; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_4A49C53 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_1B863B8(&DataManager_TypeInfo, v11);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B863B8(&LocalizationManager_TypeInfo, v14);
    sub_1B863B8(&object___TypeInfo, v15);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B863B8(&Method_PhotoServantSelectMenu_CloseSvtDetail__, v18);
    sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickServant__, v19);
    sub_1B863B8(&Rarity_TypeInfo, v20);
    sub_1B863B8(&ServantStatusDialog_ResultDelegate_TypeInfo, v21);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1B863B8(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__0__, v23);
    sub_1B863B8(&PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo, v24);
    sub_1B863B8(&StringLiteral_11744/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v25);
    sub_1B863B8(&StringLiteral_11742/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v26);
    sub_1B863B8(&StringLiteral_11743/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v27);
    sub_1B863B8(&StringLiteral_11745/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v28);
    byte_4A49C53 = 1;
  }
  v29 = sub_1B86604(PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_104;
  *(_QWORD *)(v29 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v29 + 16), (int32_t)this, v32, v33);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_104;
    Item = PhotoCampaignListViewManager__GetItem((PhotoCampaignListViewManager_o *)photoCampaignManager, n, v34);
  }
  *(_QWORD *)(v29 + 24) = Item;
  v37 = (PhotoCampaignListViewItem_o **)(v29 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v29 + 24), (int32_t)Item, (int32_t)v34, v35);
  if ( !*(_QWORD *)(v29 + 24) )
    return;
  userSvtEntity = (*v37)->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_104;
  v39 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v108 = v109;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v108, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v37 )
    {
      v44 = (*v37)->fields.userSvtEntity;
      v45 = (CommonUI_o *)photoCampaignManager;
      v46 = (ServantStatusDialog_ResultDelegate_o *)sub_1B86604(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v46,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_CloseSvtDetail__,
        0LL);
      if ( v45 )
      {
        CommonUI__OpenServantStatusDialog_30494044(v45, 0, v44, v46, 0, 0LL, 0LL);
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
    if ( !*v37 )
      goto LABEL_104;
    (*v37)->fields.isSwapChoice ^= 1u;
    v47 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v47 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickServant__);
    v42 = (System_Reflection_MethodBase_o *)sub_1B8639C(v47, v47[4]);
    v43 = 0;
    goto LABEL_44;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v37 )
      goto LABEL_104;
    (*v37)->fields.isSwapLock ^= 1u;
    v41 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickServant__);
    v42 = (System_Reflection_MethodBase_o *)sub_1B8639C(v41, v41[4]);
    v43 = 11;
    goto LABEL_44;
  }
  photoCampaignManager = (__int64)*v37;
  if ( !*v37 )
    goto LABEL_104;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(photoCampaignManager + 112) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 112), 0LL) )
      {
LABEL_33:
        v48 = Method_PhotoServantSelectMenu_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
          v48 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickServant__);
        v42 = (System_Reflection_MethodBase_o *)sub_1B8639C(v48, v48[4]);
LABEL_43:
        v43 = 2;
LABEL_44:
        OverwriteAssetSoundName__PlaySystemSe(v42, v43, 0, 0LL);
LABEL_45:
        v51 = this->fields.photoCampaignManager;
        v52 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B86604(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
        v54 = (int)Method_PhotoServantSelectMenu_OnClickServant__;
        goto LABEL_46;
      }
      photoCampaignManager = (__int64)*v37;
      if ( !*v37 )
        goto LABEL_104;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v31) )
      goto LABEL_33;
    v61 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v61 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickServant__);
    v62 = (System_Reflection_MethodBase_o *)sub_1B8639C(v61, v61[4]);
    OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0, 0LL);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !photoCampaignManager )
      goto LABEL_104;
    v64 = *(_QWORD *)(photoCampaignManager + 120);
    if ( !v64 )
    {
LABEL_58:
      PhotoServantSelectMenu__PushRequest(this, *v37, v63);
      goto LABEL_45;
    }
    if ( !*v37 )
      goto LABEL_104;
    v65 = (*v37)->fields.userSvtEntity;
    if ( !v65 )
      goto LABEL_104;
    v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
    *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v109.fields.fakeValue = v66;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v107 = v109;
    if ( v64 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v107, 0LL) )
      goto LABEL_58;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_104;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
               v64,
               (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_104;
    v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v110.fields.currentCryptoKey = klass;
    *(_QWORD *)&v110.fields.fakeValue = monitor;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v110, 0LL);
    if ( !v69 )
      goto LABEL_104;
    v72 = DataMasterBase_object__object__int___GetEntity(
            v69,
            photoCampaignManager,
            (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    photoCampaignManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Entity, 0LL, 0LL);
    if ( !*v37 )
      goto LABEL_104;
    v73 = photoCampaignManager;
    photoCampaignManager = (__int64)(*v37)->fields.userSvtEntity;
    if ( !photoCampaignManager )
      goto LABEL_104;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)photoCampaignManager, 0LL, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11745/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11744/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    photoCampaignManager = sub_1B86460(object___TypeInfo, 6LL);
    if ( !v73 )
      goto LABEL_104;
    v77 = photoCampaignManager;
    v78 = *(_DWORD *)(v73 + 24);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(v78, 0LL);
    if ( !v77 )
LABEL_104:
      sub_1B86614(photoCampaignManager, v31);
    v81 = photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_1B864F4(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v77 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v77 + 24) )
        goto LABEL_105;
      *(_QWORD *)(v77 + 32) = v81;
      sub_1B8635C((CGThumbnailListItem_o *)(v77 + 32), v81, v79, v80);
      if ( !v72 )
        goto LABEL_104;
      photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v72, 0LL);
      v84 = photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_1B864F4(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v77 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v77 + 24) <= 1u )
          goto LABEL_105;
        *(_QWORD *)(v77 + 40) = v84;
        sub_1B8635C((CGThumbnailListItem_o *)(v77 + 40), v84, v82, v83);
        v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                0LL);
        photoCampaignManager = (__int64)ServantEntity__getName((ServantEntity_o *)v72, v85, -1, 1, 0LL);
        v88 = photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_1B864F4(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v77 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v77 + 24) <= 2u )
            goto LABEL_105;
          *(_QWORD *)(v77 + 48) = v88;
          sub_1B8635C((CGThumbnailListItem_o *)(v77 + 48), v88, v86, v87);
          if ( !OverwriteStatus )
            goto LABEL_104;
          photoCampaignManager = (__int64)Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0LL);
          v91 = photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_1B864F4(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v77 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v77 + 24) <= 3u )
              goto LABEL_105;
            *(_QWORD *)(v77 + 56) = v91;
            sub_1B8635C((CGThumbnailListItem_o *)(v77 + 56), v91, v89, v90);
            if ( !*v37 )
              goto LABEL_104;
            photoCampaignManager = (__int64)(*v37)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_104;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
            v94 = photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_1B864F4(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v77 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v77 + 24) <= 4u )
                goto LABEL_105;
              *(_QWORD *)(v77 + 64) = v94;
              sub_1B8635C((CGThumbnailListItem_o *)(v77 + 64), v94, v92, v93);
              v95 = *v37;
              if ( !*v37 )
                goto LABEL_104;
              v96 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v95->fields.userSvtEntity;
              if ( !v96 )
                goto LABEL_104;
              servantEntity = v95->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v96[6], 0LL);
              if ( !servantEntity )
                goto LABEL_104;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 1, 0LL);
              v100 = photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_1B864F4(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v77 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v77 + 24) > 5u )
                {
                  *(_QWORD *)(v77 + 72) = v100;
                  sub_1B8635C((CGThumbnailListItem_o *)(v77 + 72), v100, v98, v99);
                  v101 = System_String__Format_61686604(v76, (System_Object_array *)v77, 0LL);
                  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_11743/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v103 = LocalizationManager__Get((System_String_o *)StringLiteral_11742/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v105 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v105,
                    (Il2CppObject *)v29,
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
                    CommonUI__OpenConfirmDialog_30483432(
                      (CommonUI_o *)Instance,
                      v75,
                      v101,
                      v102,
                      v103,
                      v105,
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
                  goto LABEL_104;
                }
LABEL_105:
                sub_1B8661C(photoCampaignManager, v31);
              }
            }
          }
        }
      }
    }
    v106 = sub_1B86638();
    sub_1B864E0(v106, 0LL);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v31) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v56 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v56 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickServant__);
    v42 = (System_Reflection_MethodBase_o *)sub_1B8639C(v56, v56[4]);
    if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0, 0LL);
      PhotoServantSelectMenu__OpenSelectImageLimitDialog(this, *v37, v67);
      return;
    }
    goto LABEL_43;
  }
  v49 = Method_PhotoServantSelectMenu_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
    v49 = (_QWORD *)sub_1B863D0(Method_PhotoServantSelectMenu_OnClickServant__);
  v50 = (System_Reflection_MethodBase_o *)sub_1B8639C(v49, v49[4]);
  OverwriteAssetSoundName__PlaySystemSe(v50, 2, 0, 0LL);
  v51 = this->fields.photoCampaignManager;
  v52 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B86604(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v54 = (int)Method_PhotoServantSelectMenu_OnClickServant__;
LABEL_46:
  v57 = v52;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v52, (Il2CppObject *)this, v54, v53);
  if ( !v51 )
    goto LABEL_104;
  v51->fields.callbackFunc = v57;
  sub_1B8635C((CGThumbnailListItem_o *)&v51->fields.callbackFunc, (int32_t)v57, v58, v59);
  PhotoCampaignListViewManager__SetMode_32175508(v51, 2, v60);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  struct PhotoCampaignListViewManager_o *v20; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  UnityEngine_GameObject_o *v26; // x23
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2

  v10 = this;
  if ( (byte_4A49C4E & 1) == 0 )
  {
    sub_1B863B8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, callback);
    this = (PhotoServantSelectMenu_o *)sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickServant__, v11);
    byte_4A49C4E = 1;
  }
  LatestSelectedUsrSvtId = PhotoServantSelectMenu__GetLatestSelectedUsrSvtId(this, (const MethodInfo *)callback);
  v10->fields.closeCallback = 0LL;
  if ( baseUserSvtId <= 0 )
    baseUserSvtId = LatestSelectedUsrSvtId;
  sub_1B8635C((CGThumbnailListItem_o *)&v10->fields.closeCallback, 0, v13, v14);
  v10->fields.selectImageLimitCallback = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&v10->fields.selectImageLimitCallback, (int32_t)callback, v15, v16);
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v10, 0LL) )
  {
    PhotoServantSelectMenu__Init(v10, v17);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)v10->fields.titleInfo;
      if ( gameObject )
      {
        TitleInfoControl__changeTitleInfo_38093432((TitleInfoControl_o *)gameObject, 1, 61, 0, 0LL);
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
                v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
                if ( v26 )
                {
                  UnityEngine_GameObject__SetActive(v26, (unsigned __int8)gameObject & 1, 0LL);
                  gameObject = (UnityEngine_GameObject_o *)v10->fields.photoCampaignManager;
                  if ( gameObject )
                  {
                    PhotoCampaignListViewManager__CreateList(
                      (PhotoCampaignListViewManager_o *)gameObject,
                      baseUserSvtId,
                      anotherUserSvtId,
                      anotherSvtLimitCount,
                      v27);
                    PhotoServantSelectMenu__UpdateScaleChangeIconSprite(v10, v28);
                    photoCampaignManager = v10->fields.photoCampaignManager;
                    v30 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B86604(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
                    PhotoCampaignListViewManager_CallbackFunc___ctor(
                      v30,
                      (Il2CppObject *)v10,
                      (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
                      v31);
                    if ( photoCampaignManager )
                    {
                      photoCampaignManager->fields.callbackFunc = v30;
                      sub_1B8635C(
                        (CGThumbnailListItem_o *)&photoCampaignManager->fields.callbackFunc,
                        (int32_t)v30,
                        v32,
                        v33);
                      PhotoCampaignListViewManager__SetMode_32175508(photoCampaignManager, 2, v34);
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
    sub_1B86614(gameObject, v17);
  }
  gameObject = (UnityEngine_GameObject_o *)v10->fields.photoCampaignManager;
  if ( !gameObject )
    goto LABEL_20;
  PhotoCampaignListViewManager__UpdateItemCannotSelectSvt(
    (PhotoCampaignListViewManager_o *)gameObject,
    anotherUserSvtId,
    anotherSvtLimitCount,
    v18);
  v20 = v10->fields.photoCampaignManager;
  v21 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B86604(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)v10,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v22);
  if ( !v20 )
    goto LABEL_20;
  v20->fields.callbackFunc = v21;
  sub_1B8635C((CGThumbnailListItem_o *)&v20->fields.callbackFunc, (int32_t)v21, v23, v24);
  PhotoCampaignListViewManager__SetMode_32175508(v20, 2, v25);
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
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  __int64 v16; // x8
  __int128 v17; // q1
  MyRoomControl_o *myRoomControl; // x19
  int64_t v19; // x21
  System_Action_bool__int__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]

  if ( (byte_4A49C54 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__int__TypeInfo, item);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1B863B8(&Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__, v6);
    sub_1B863B8(&PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo, v7);
    byte_4A49C54 = 1;
  }
  v8 = sub_1B86604(PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = item;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)item, v13, v14);
  v15 = *(_QWORD *)(v8 + 24);
  if ( !v15 )
    goto LABEL_10;
  v16 = *(_QWORD *)(v15 + 112);
  if ( !v16 )
    goto LABEL_10;
  v17 = *(_OWORD *)(v16 + 32);
  myRoomControl = this->fields.myRoomControl;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
  *(_OWORD *)&v22.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v21 = v22;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v21, 0LL);
  v20 = (System_Action_bool__int__o *)sub_1B86604(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v20,
    (Il2CppObject *)v8,
    Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__,
    0LL);
  if ( !myRoomControl )
LABEL_10:
    sub_1B86614(v9, v10);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v19, v20, -1, 0LL);
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

  if ( (byte_4A49C56 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B863B8(&Method_PhotoServantSelectMenu_EndPushRequest__, v10);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4A49C56 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v53, 0LL);
  if ( !v17 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v15->fields.assetsInfo;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PhotoServantSelectMenu_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v54, 0LL);
  if ( !v30 )
LABEL_19:
    sub_1B86614(limitCountSupport, v14);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_4A49C55 & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_1B863B8(&Method_ActionExtensions_Call_long__int___, userSvtId);
    byte_4A49C55 = 1;
  }
  v6->fields.state = 4;
  v6->fields.selectedUsrSvtId = userSvtId;
  PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(this, userSvtId, *(const MethodInfo **)&limitCount);
  photoCampaignManager = v6->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    sub_1B86614(0LL, v7);
  PhotoCampaignListViewManager__SetMode_32175508(photoCampaignManager, 1, v8);
  selectImageLimitCallback = (System_Action_T1__T2__o *)v6->fields.selectImageLimitCallback;
  v6->fields.selectImageLimitCallback = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.selectImageLimitCallback, 0, v11, v12);
  if ( selectImageLimitCallback )
    ActionExtensions__Call_long__int_(
      selectImageLimitCallback,
      userSvtId,
      limitCount,
      (const MethodInfo_2EBFF28 *)Method_ActionExtensions_Call_long__int___);
}


void __fastcall PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(
        PhotoServantSelectMenu_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = userSvtId;
  if ( (byte_4A49C50 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_10457/*"PhotoCampaignSelectedUsrSvtId2025"*/, userSvtId);
    byte_4A49C50 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10457/*"PhotoCampaignSelectedUsrSvtId2025"*/, v3, 0LL);
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

  if ( (byte_4A49C5D & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B863B8(&StringLiteral_11453/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1B863B8(&StringLiteral_17427/*"button_push_reg"*/, v6);
    sub_1B863B8(&StringLiteral_17428/*"button_push_unreg"*/, v7);
    sub_1B863B8(&StringLiteral_17413/*"button_allchoice_reg"*/, v8);
    sub_1B863B8(&StringLiteral_17416/*"button_alllock_unreg"*/, v9);
    sub_1B863B8(&StringLiteral_11451/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_1B863B8(&StringLiteral_7068/*"HEADER_MSG_PHOTO_SERVANT"*/, v11);
    sub_1B863B8(&StringLiteral_11452/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v12);
    sub_1B863B8(&StringLiteral_17429/*"button_select_reg"*/, v13);
    sub_1B863B8(&StringLiteral_17430/*"button_select_unreg"*/, v14);
    sub_1B863B8(&StringLiteral_17415/*"button_alllock_reg"*/, v15);
    sub_1B863B8(&StringLiteral_17414/*"button_allchoice_unreg"*/, v16);
    byte_4A49C5D = 1;
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
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17430/*"button_select_unreg"*/ : &StringLiteral_17429/*"button_select_reg"*/);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17415/*"button_alllock_reg"*/ : &StringLiteral_17416/*"button_alllock_unreg"*/);
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
    v20 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17413/*"button_allchoice_reg"*/ : &StringLiteral_17414/*"button_allchoice_unreg"*/);
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
      sub_1B86614(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v21 = &StringLiteral_17427/*"button_push_reg"*/;
    else
      v21 = &StringLiteral_17428/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v21, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7068/*"HEADER_MSG_PHOTO_SERVANT"*/,
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
        v26 = &StringLiteral_11452/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11451/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11453/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
        PhotoCampaignListViewManager__SetMode_32175508((PhotoCampaignListViewManager_o *)normalTabButton, 2, v27);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int64_array *v21; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A49C5E & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&Method_PhotoServantSelectMenu_EndStatusSync__, v7);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4A49C5E = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v21 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_21;
    if ( PhotoCampaignListViewManager__GetSwapChoiceList(photoCampaignManager, &choiceList, &v21, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v18, v19);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v20,
                                                                 (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v15 = v21;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B86614(photoCampaignManager, callback);
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
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v11, v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v13,
                                                                 (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v15 = unlockList;
        v14 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v14, v15, 0, v16, v17, 0LL);
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
    sub_1B86614(photoCampaignManager, method);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CBEC8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CBE80;
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
  if ( (byte_4A49C61 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, isRequest);
    byte_4A49C61 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall PhotoServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A49C62 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__, v6);
    byte_4A49C62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30483660(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B86614(Instance, v8);
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
    sub_1B86614(this, method);
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
  Il2CppClass *klass; // x22
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x24
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v18; // q1
  PhotoServantSelectMenu_o *v19; // x20
  const MethodInfo *v20; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]

  v6 = this;
  if ( (byte_4A49C63 & 1) == 0 )
  {
    sub_1B863B8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)sub_1B863B8(
                                                               &Method_PhotoServantSelectMenu_OnClickServant__,
                                                               v8);
    byte_4A49C63 = 1;
  }
  _4__this = (Il2CppObject *)v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  klass = _4__this[4].klass;
  v11 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B86604(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v11,
    _4__this,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v12);
  if ( !klass )
    goto LABEL_13;
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)v11;
  sub_1B8635C((CGThumbnailListItem_o *)&klass->vtable[5], (int32_t)v11, v13, v14);
  PhotoCampaignListViewManager__SetMode_32175508((PhotoCampaignListViewManager_o *)klass, 2, v15);
  if ( !result )
    return;
  item = v6->fields.item;
  if ( !item )
    goto LABEL_13;
  userSvtEntity = item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_13;
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v19 = v6->fields.__4__this;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v21 = v22;
  this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                             &v21,
                                                             0LL);
  if ( !v19 )
LABEL_13:
    sub_1B86614(this, result);
  PhotoServantSelectMenu__SelectImageLimitDecide(v19, (int64_t)this, imageLimitCount, v20);
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
  Il2CppClass *klass; // x19
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4A49C64 & 1) == 0 )
  {
    sub_1B863B8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&Method_PhotoServantSelectMenu_OnClickServant__, v4);
    sub_1B863B8(&StringLiteral_3439/*"CLICK_BACK"*/, v5);
    byte_4A49C64 = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3439/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1B86614(_4__this, method);
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
  klass = v9[4].klass;
  v11 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B86604(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v11,
    v9,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v12);
  if ( !klass )
    goto LABEL_18;
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)v11;
  sub_1B8635C((CGThumbnailListItem_o *)&klass->vtable[5], (int32_t)v11, v13, v14);
  PhotoCampaignListViewManager__SetMode_32175508((PhotoCampaignListViewManager_o *)klass, 2, v15);
}