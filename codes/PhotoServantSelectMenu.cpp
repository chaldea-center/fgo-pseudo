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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  PhotoServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4DFFEF9 & 1) == 0 )
  {
    sub_1CE6700(&Method_PhotoServantSelectMenu_CloseAction__);
    sub_1CE6700(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4DFFEF9 = 1;
  }
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
    ActionExtensions__Call(callback, 0);
  this->fields.closeCallback = callback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.closeCallback, (int32_t)callback, v5, v6, v7, v8, v9, v10);
  v11 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1CE694C(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
  PhotoServantSelectMenu_RequestCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_PhotoServantSelectMenu_CloseAction__,
    v12);
  PhotoServantSelectMenu__StatusRequest(this, v11, v13);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu__CloseAction(PhotoServantSelectMenu_o *this, bool isRequest, const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  struct PhotoCampaignListViewManager_o *v6; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v17; // x8
  System_Action_o *closeCallback; // x0

  if ( (byte_4DFFEFA & 1) == 0 )
  {
    sub_1CE6700(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickServant__);
    byte_4DFFEFA = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v6 = this->fields.photoCampaignManager,
          v7 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1CE694C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
            v8),
          !v6) )
    {
LABEL_19:
      sub_1CE6958(photoCampaignManager, isRequest);
    }
    v6->fields.callbackFunc = v7;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    PhotoCampaignListViewManager__SetMode_34754544(v6, 2, v15);
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
  v17 = this->fields.titleInfo;
  if ( !v17 )
    goto LABEL_19;
  photoCampaignManager = (PhotoCampaignListViewManager_o *)v17->fields.headerBgImg;
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4DFFF00 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__);
    sub_1CE6700(&PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo);
    byte_4DFFF00 = 1;
  }
  v8 = sub_1CE694C(PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__,
          0),
        !Instance) )
  {
    sub_1CE6958(v9, v10);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v18, 0);
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
      sub_1CE6958(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_34754544(photoCampaignManager, 2, v5);
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
      sub_1CE6958(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_34754544(photoCampaignManager, 2, v5);
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
      sub_1CE6958(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_34754544(photoCampaignManager, 2, v5);
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
      sub_1CE6958(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_34754544(photoCampaignManager, 2, v5);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_4DFFEFF & 1) == 0 )
  {
    sub_1CE6700(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickServant__);
    this = (PhotoServantSelectMenu_o *)sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4DFFEFF = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_65158148(result, (System_String_o *)StringLiteral_22555/*"ng"*/, 0) )
    return;
  this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager;
  if ( !this
    || (PhotoCampaignListViewManager__UpdateDisplayState((PhotoCampaignListViewManager_o *)this, 1, v5),
        (this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager) == 0)
    || (PhotoCampaignListViewManager__ModifyItem((PhotoCampaignListViewManager_o *)this, v4->fields.usrSvtId, v6),
        photoCampaignManager = v4->fields.photoCampaignManager,
        v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1CE694C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
          v9),
        !photoCampaignManager) )
  {
LABEL_9:
    sub_1CE6958(this, result);
  }
  photoCampaignManager->fields.callbackFunc = v8;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&photoCampaignManager->fields.callbackFunc,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  PhotoCampaignListViewManager__SetMode_34754544(photoCampaignManager, 2, v16);
}


void PhotoServantSelectMenu__EndStatusSync(
        PhotoServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_requestCallback; // x19
  struct PhotoServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  struct PhotoServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  v4 = this;
  if ( (byte_4DFFF07 & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4DFFF07 = 1;
  }
  if ( !result )
    sub_1CE6958(this, result);
  if ( !System_String__Equals_65158148(result, (System_String_o *)StringLiteral_22555/*"ng"*/, 0) )
  {
    requestCallback = v4->fields.requestCallback;
    p_requestCallback = (GrandQuestFolderBoardItem_o *)&v4->fields.requestCallback;
    v12 = requestCallback;
    if ( requestCallback )
    {
      p_requestCallback->klass = 0;
      sub_1CE66A4(p_requestCallback, 0, v5, v6, v7, v8, v9, v10);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v12->fields.invoke_impl)(
        v12->fields.method_code,
        1,
        v12->fields.method);
    }
  }
}


int64_t PhotoServantSelectMenu__GetLatestSelectedUsrSvtId(PhotoServantSelectMenu_o *this, const MethodInfo *method)
{
  System_String_o *String; // x19
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4DFFEF7 & 1) == 0 )
  {
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&StringLiteral_10719/*"PhotoCampaignSelectedUsrSvtId2026"*/);
    byte_4DFFEF7 = 1;
  }
  result = 0;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10719/*"PhotoCampaignSelectedUsrSvtId2026"*/,
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

  if ( (byte_4DFFEF5 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_7262/*"HEADER_MSG_PHOTO_SERVANT"*/);
    byte_4DFFEF5 = 1;
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
                                                             (System_String_o *)StringLiteral_7262/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0);
  if ( !infoLb )
LABEL_8:
    sub_1CE6958(photoCampaignManager, method);
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

  if ( (byte_4DFFF03 & 1) == 0 )
  {
    sub_1CE6700(&Method_PhotoServantSelectMenu_EndClickTabChoice__);
    sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickChoiceTabButton__);
    sub_1CE6700(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4DFFF03 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1CE694C(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabChoice__,
          v8);
        PhotoServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1CE694C(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4DFFF02 & 1) == 0 )
  {
    sub_1CE6700(&Method_PhotoServantSelectMenu_EndClickTabLock__);
    sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickLockTabButton__);
    sub_1CE6700(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4DFFF02 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1CE694C(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabLock__,
          v8);
        PhotoServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1CE694C(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4DFFF01 & 1) == 0 )
  {
    sub_1CE6700(&Method_PhotoServantSelectMenu_EndClickTabNormal__);
    sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickNormalTabButton__);
    sub_1CE6700(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4DFFF01 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1CE694C(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4DFFF04 & 1) == 0 )
  {
    sub_1CE6700(&Method_PhotoServantSelectMenu_EndClickTabPush__);
    sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickPushTabButton__);
    sub_1CE6700(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_4DFFF04 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_PhotoServantSelectMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_1CE694C(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4DFFF08 & 1) == 0 )
  {
    sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickScaleChange__);
    byte_4DFFF08 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_1CE6958(0, v5);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  PhotoCampaignListViewItem_o *Item; // x1
  PhotoCampaignListViewItem_o **v23; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v25; // q1
  int32_t tabModeKind; // w8
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int32_t v29; // w1
  UserServantEntity_o *v30; // x21
  CommonUI_o *v31; // x20
  ServantStatusDialog_ResultDelegate_o *v32; // x22
  _QWORD *v33; // x0
  _QWORD *v34; // x0
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  struct PhotoCampaignListViewManager_o *v37; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v38; // x0
  const MethodInfo *v39; // x3
  void *v40; // x2
  int64_t selectedUsrSvtId; // x20
  _QWORD *v42; // x0
  struct PhotoCampaignListViewManager_CallbackFunc_o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  const MethodInfo *v50; // x2
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  const MethodInfo *v53; // x2
  int64_t v54; // x22
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  const MethodInfo *v57; // x2
  __int64 v58; // x27
  ServantEntity_o *ServantEntity; // x28
  __int64 v60; // x29
  ServantOverwriteStatus_o *OverwriteStatus; // x26
  Il2CppObject *Master_object; // x25
  System_String_o *v63; // x22
  System_String_o *v64; // x23
  __int64 v65; // x24
  int32_t v66; // w29
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  __int64 v73; // x29
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  __int64 v80; // x29
  __int64 v81; // x28
  __int64 v82; // x29
  int32_t v83; // w0
  __int64 v84; // x8
  int32_t v85; // w27
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  __int64 v92; // x27
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  __int64 v99; // x26
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  __int64 v106; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v107; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v108; // x8
  int32_t v109; // w21
  int32_t v110; // w0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  __int64 v117; // x21
  System_String_o *v118; // x21
  System_String_o *v119; // x23
  System_String_o *v120; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v122; // x26
  __int64 v123; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16

  if ( (byte_4DFFEFB & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_PhotoServantSelectMenu_CloseSvtDetail__);
    sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickServant__);
    sub_1CE6700(&Rarity_TypeInfo);
    sub_1CE6700(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__0__);
    sub_1CE6700(&PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo);
    sub_1CE6700(&StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4DFFEFB = 1;
  }
  v7 = sub_1CE694C(PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_105;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( n < 0 )
  {
    Item = 0;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_105;
    Item = PhotoCampaignListViewManager__GetItem((PhotoCampaignListViewManager_o *)photoCampaignManager, n, v16);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v23 = (PhotoCampaignListViewItem_o **)(v7 + 24);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v7 + 24) )
    return;
  userSvtEntity = (*v23)->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_105;
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v126.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v126.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v125 = v126;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v125, 0);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      v30 = (*v23)->fields.userSvtEntity;
      v31 = (CommonUI_o *)photoCampaignManager;
      v32 = (ServantStatusDialog_ResultDelegate_o *)sub_1CE694C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v32,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_CloseSvtDetail__,
        0);
      if ( v31 )
      {
        CommonUI__OpenServantStatusDialog_31930372(v31, 0, v30, v32, 0, 0, 0);
        return;
      }
    }
    goto LABEL_105;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v23 )
      goto LABEL_105;
    (*v23)->fields.isSwapChoice ^= 1u;
    v33 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickServant__);
    v28 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v33, v33[4]);
    v29 = 0;
    goto LABEL_44;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v23 )
      goto LABEL_105;
    (*v23)->fields.isSwapLock ^= 1u;
    v27 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickServant__);
    v28 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v27, v27[4]);
    v29 = 11;
    goto LABEL_44;
  }
  photoCampaignManager = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_105;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(photoCampaignManager + 120) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 120), 0) )
      {
LABEL_33:
        v34 = Method_PhotoServantSelectMenu_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickServant__);
        v28 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v34, v34[4]);
LABEL_43:
        v29 = 2;
LABEL_44:
        OverwriteAssetSoundName__PlaySystemSe(v28, v29, 0, 0);
LABEL_45:
        v37 = this->fields.photoCampaignManager;
        v38 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1CE694C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
        v40 = Method_PhotoServantSelectMenu_OnClickServant__;
        goto LABEL_46;
      }
      photoCampaignManager = (__int64)*v23;
      if ( !*v23 )
        goto LABEL_105;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
      goto LABEL_33;
    v51 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v51 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickServant__);
    v52 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v51, v51[4]);
    OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0, 0);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( !photoCampaignManager )
      goto LABEL_105;
    v54 = *(_QWORD *)(photoCampaignManager + 128);
    if ( !v54 )
    {
LABEL_58:
      PhotoServantSelectMenu__PushRequest(this, *v23, v53);
      goto LABEL_45;
    }
    if ( !*v23 )
      goto LABEL_105;
    v55 = (*v23)->fields.userSvtEntity;
    if ( !v55 )
      goto LABEL_105;
    v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
    *(_OWORD *)&v126.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v126.fields.fakeValue = v56;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v124 = v126;
    if ( v54 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v124, 0) )
      goto LABEL_58;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_105;
    photoCampaignManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
                                      v54,
                                      (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !photoCampaignManager )
      goto LABEL_105;
    v58 = photoCampaignManager;
    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)photoCampaignManager, -1, 0);
    photoCampaignManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v58, 0, 0);
    if ( !*v23 )
      goto LABEL_105;
    v60 = photoCampaignManager;
    photoCampaignManager = (__int64)(*v23)->fields.userSvtEntity;
    if ( !photoCampaignManager )
      goto LABEL_105;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)photoCampaignManager, 0, 0);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    photoCampaignManager = sub_1CE67A8(object___TypeInfo, 6);
    if ( !v60 )
      goto LABEL_105;
    v65 = photoCampaignManager;
    v66 = *(_DWORD *)(v60 + 24);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(v66, 0);
    if ( !v65 )
LABEL_105:
      sub_1CE6958(photoCampaignManager, v9);
    v73 = photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_1CE683C(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v65 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v65 + 24) )
        goto LABEL_106;
      *(_QWORD *)(v65 + 32) = v73;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v65 + 32), v73, v67, v68, v69, v70, v71, v72);
      if ( !ServantEntity )
        goto LABEL_105;
      photoCampaignManager = (__int64)ServantEntity__getClassName(ServantEntity, 0);
      v80 = photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_1CE683C(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v65 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v65 + 24) <= 1u )
          goto LABEL_106;
        *(_QWORD *)(v65 + 40) = v80;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v65 + 40), v80, v74, v75, v76, v77, v78, v79);
        v82 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
        v81 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v127.fields.currentCryptoKey = v82;
        *(_QWORD *)&v127.fields.fakeValue = v81;
        v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v127, 0);
        v84 = *(_QWORD *)(v58 + 96);
        *(_QWORD *)&v128.fields.fakeValue = *(_QWORD *)(v58 + 104);
        v85 = v83;
        *(_QWORD *)&v128.fields.currentCryptoKey = v84;
        photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v128, 0);
        if ( !Master_object )
          goto LABEL_105;
        photoCampaignManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          v85,
                                          photoCampaignManager,
                                          1,
                                          1,
                                          0);
        v92 = photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_1CE683C(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v65 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v65 + 24) <= 2u )
            goto LABEL_106;
          *(_QWORD *)(v65 + 48) = v92;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v65 + 48), v92, v86, v87, v88, v89, v90, v91);
          if ( !OverwriteStatus )
            goto LABEL_105;
          photoCampaignManager = (__int64)Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0);
          v99 = photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_1CE683C(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v65 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v65 + 24) <= 3u )
              goto LABEL_106;
            *(_QWORD *)(v65 + 56) = v99;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v65 + 56), v99, v93, v94, v95, v96, v97, v98);
            if ( !*v23 )
              goto LABEL_105;
            photoCampaignManager = (__int64)(*v23)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_105;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0);
            v106 = photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_1CE683C(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v65 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v65 + 24) <= 4u )
                goto LABEL_106;
              *(_QWORD *)(v65 + 64) = v106;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v65 + 64), v106, v100, v101, v102, v103, v104, v105);
              if ( !*v23 )
                goto LABEL_105;
              v107 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.servantEntity;
              if ( !v107 )
                goto LABEL_105;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v107[1], 0);
              if ( !*v23 )
                goto LABEL_105;
              v108 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userSvtEntity;
              if ( !v108 )
                goto LABEL_105;
              v109 = photoCampaignManager;
              v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v108[6], 0);
              photoCampaignManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)Master_object,
                                                v109,
                                                v110,
                                                1,
                                                1,
                                                0);
              v117 = photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_1CE683C(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v65 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v65 + 24) > 5u )
                {
                  *(_QWORD *)(v65 + 72) = v117;
                  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v65 + 72), v117, v111, v112, v113, v114, v115, v116);
                  v118 = System_String__Format_65164272(v64, (System_Object_array *)v65, 0);
                  v119 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v122 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v122,
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
                    CommonUI__OpenConfirmDialog_31919840(
                      (CommonUI_o *)Instance,
                      v63,
                      v118,
                      v119,
                      v120,
                      v122,
                      *(_DWORD *)(*(_QWORD *)(photoCampaignManager + 184) + 508LL),
                      *(_DWORD *)(*(_QWORD *)(photoCampaignManager + 184) + 520LL),
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
                  goto LABEL_105;
                }
LABEL_106:
                sub_1CE6960(photoCampaignManager);
              }
            }
          }
        }
      }
    }
    v123 = sub_1CE697C();
    sub_1CE6828(v123, 0);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v42 = Method_PhotoServantSelectMenu_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
      v42 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickServant__);
    v28 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v42, v42[4]);
    if ( selectedUsrSvtId < 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0);
      PhotoServantSelectMenu__OpenSelectImageLimitDialog(this, *v23, v57);
      return;
    }
    goto LABEL_43;
  }
  v35 = Method_PhotoServantSelectMenu_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickServant__ + 83) & 2) != 0 )
    v35 = (_QWORD *)sub_1CE6718(Method_PhotoServantSelectMenu_OnClickServant__);
  v36 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v35, v35[4]);
  OverwriteAssetSoundName__PlaySystemSe(v36, 2, 0, 0);
  v37 = this->fields.photoCampaignManager;
  v38 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1CE694C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v40 = Method_PhotoServantSelectMenu_OnClickServant__;
LABEL_46:
  v43 = v38;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v38, (Il2CppObject *)this, (intptr_t)v40, v39);
  if ( !v37 )
    goto LABEL_105;
  v37->fields.callbackFunc = v43;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v37->fields.callbackFunc, (int32_t)v43, v44, v45, v46, v47, v48, v49);
  PhotoCampaignListViewManager__SetMode_34754544(v37, 2, v50);
}


void PhotoServantSelectMenu__Open(
        PhotoServantSelectMenu_o *this,
        System_Action_long__int__int__o *callback,
        int64_t anotherUserSvtId,
        int32_t anotherSvtLimitCount,
        int64_t baseUserSvtId,
        StaffPhotoEntity_o *anotherStaff,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v12; // x19
  int64_t LatestSelectedUsrSvtId; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  struct PhotoCampaignListViewManager_o *v29; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  const MethodInfo *v38; // x2
  struct TitleInfoControl_o *titleInfo; // x8
  UnityEngine_GameObject_o *v40; // x24
  const MethodInfo *v41; // x5
  const MethodInfo *v42; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v44; // x21
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  const MethodInfo *v52; // x2

  v12 = this;
  if ( (byte_4DFFEF6 & 1) == 0 )
  {
    sub_1CE6700(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    this = (PhotoServantSelectMenu_o *)sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickServant__);
    byte_4DFFEF6 = 1;
  }
  LatestSelectedUsrSvtId = PhotoServantSelectMenu__GetLatestSelectedUsrSvtId(this, (const MethodInfo *)callback);
  v12->fields.closeCallback = 0;
  if ( baseUserSvtId <= 0 )
    baseUserSvtId = LatestSelectedUsrSvtId;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v12->fields.closeCallback, 0, v14, v15, v16, v17, v18, v19);
  v12->fields.selectImageLimitCallback = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&v12->fields.selectImageLimitCallback,
    (int32_t)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v12, 0) )
  {
    PhotoServantSelectMenu__Init(v12, v26);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)v12->fields.titleInfo;
      if ( gameObject )
      {
        TitleInfoControl__changeTitleInfo_41045104((TitleInfoControl_o *)gameObject, 1, 64, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)v12->fields.titleInfo;
        if ( gameObject )
        {
          TitleInfoControl__FrameIn((TitleInfoControl_o *)gameObject, 1, 0);
          gameObject = (UnityEngine_GameObject_o *)v12->fields.titleInfo;
          if ( gameObject )
          {
            TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)gameObject, 3, 1, 0);
            titleInfo = v12->fields.titleInfo;
            if ( titleInfo )
            {
              gameObject = (UnityEngine_GameObject_o *)titleInfo->fields.headerBgImg;
              if ( gameObject )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                  gameObject = (UnityEngine_GameObject_o *)v12->fields.titleInfo;
                  if ( gameObject )
                  {
                    TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)gameObject, 1, 0);
                    gameObject = (UnityEngine_GameObject_o *)v12->fields.bgTxtSprite;
                    if ( gameObject )
                    {
                      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                      gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
                      if ( v40 )
                      {
                        UnityEngine_GameObject__SetActive(v40, (unsigned __int8)gameObject & 1, 0);
                        gameObject = (UnityEngine_GameObject_o *)v12->fields.photoCampaignManager;
                        if ( gameObject )
                        {
                          PhotoCampaignListViewManager__CreateList(
                            (PhotoCampaignListViewManager_o *)gameObject,
                            baseUserSvtId,
                            anotherUserSvtId,
                            anotherSvtLimitCount,
                            anotherStaff,
                            v41);
                          PhotoServantSelectMenu__UpdateScaleChangeIconSprite(v12, v42);
                          photoCampaignManager = v12->fields.photoCampaignManager;
                          v44 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1CE694C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
                          PhotoCampaignListViewManager_CallbackFunc___ctor(
                            v44,
                            (Il2CppObject *)v12,
                            (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
                            v45);
                          if ( photoCampaignManager )
                          {
                            photoCampaignManager->fields.callbackFunc = v44;
                            sub_1CE66A4(
                              (GrandQuestFolderBoardItem_o *)&photoCampaignManager->fields.callbackFunc,
                              (int32_t)v44,
                              v46,
                              v47,
                              v48,
                              v49,
                              v50,
                              v51);
                            PhotoCampaignListViewManager__SetMode_34754544(photoCampaignManager, 2, v52);
                            goto LABEL_22;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_1CE6958(gameObject, v26);
  }
  gameObject = (UnityEngine_GameObject_o *)v12->fields.photoCampaignManager;
  if ( !gameObject )
    goto LABEL_23;
  PhotoCampaignListViewManager__UpdateItemCannotSelectSvt(
    (PhotoCampaignListViewManager_o *)gameObject,
    anotherUserSvtId,
    anotherSvtLimitCount,
    anotherStaff,
    v27);
  v29 = v12->fields.photoCampaignManager;
  v30 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1CE694C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v30,
    (Il2CppObject *)v12,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v31);
  if ( !v29 )
    goto LABEL_23;
  v29->fields.callbackFunc = v30;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v29->fields.callbackFunc, (int32_t)v30, v32, v33, v34, v35, v36, v37);
  PhotoCampaignListViewManager__SetMode_34754544(v29, 2, v38);
  v12->fields.selectedUsrSvtId = -1;
LABEL_22:
  v12->fields.state = 2;
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x8
  __int64 v21; // x8
  __int128 v22; // q1
  MyRoomControl_o *myRoomControl; // x19
  int64_t v24; // x21
  System_Action_bool__int__o *v25; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]

  if ( (byte_4DFFEFC & 1) == 0 )
  {
    sub_1CE6700(&System_Action_bool__int__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__);
    sub_1CE6700(&PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo);
    byte_4DFFEFC = 1;
  }
  v5 = sub_1CE694C(PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)item, v14, v15, v16, v17, v18, v19);
  v20 = *(_QWORD *)(v5 + 24);
  if ( !v20 )
    goto LABEL_10;
  v21 = *(_QWORD *)(v20 + 120);
  if ( !v21 )
    goto LABEL_10;
  v22 = *(_OWORD *)(v21 + 32);
  myRoomControl = this->fields.myRoomControl;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
  *(_OWORD *)&v27.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v26 = v27;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v26, 0);
  v25 = (System_Action_bool__int__o *)sub_1CE694C(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v25,
    (Il2CppObject *)v5,
    Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__,
    0);
  if ( !myRoomControl )
LABEL_10:
    sub_1CE6958(v6, v7);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v24, v25, -1, 0);
}


void PhotoServantSelectMenu__PushRequest(
        PhotoServantSelectMenu_o *this,
        PhotoCampaignListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_4DFFEFE & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_PhotoServantSelectMenu_EndPushRequest__);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFFEFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_PhotoServantSelectMenu_EndPushRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_1CE6958(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userSvtEntity, 0);
}


// local variable allocation has failed, the output may be wrong!
void PhotoServantSelectMenu__SelectImageLimitDecide(
        PhotoServantSelectMenu_o *this,
        int64_t userSvtId,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v8; // x22
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  System_Action_T1__T2__T3__o *selectImageLimitCallback; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  v8 = this;
  if ( (byte_4DFFEFD & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_1CE6700(&Method_ActionExtensions_Call_long__int__int___);
    byte_4DFFEFD = 1;
  }
  v8->fields.state = 4;
  v8->fields.selectedUsrSvtId = userSvtId;
  PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(this, userSvtId, *(const MethodInfo **)&svtId);
  photoCampaignManager = v8->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    sub_1CE6958(0, v9);
  PhotoCampaignListViewManager__SetMode_34754544(photoCampaignManager, 1, v10);
  selectImageLimitCallback = (System_Action_T1__T2__T3__o *)v8->fields.selectImageLimitCallback;
  v8->fields.selectImageLimitCallback = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v8->fields.selectImageLimitCallback, 0, v13, v14, v15, v16, v17, v18);
  if ( selectImageLimitCallback )
    ActionExtensions__Call_long__int__int_(
      selectImageLimitCallback,
      userSvtId,
      svtId,
      limitCount,
      (const MethodInfo_314A098 *)Method_ActionExtensions_Call_long__int__int___);
}


void PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(
        PhotoServantSelectMenu_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = userSvtId;
  if ( (byte_4DFFEF8 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_10719/*"PhotoCampaignSelectedUsrSvtId2026"*/);
    byte_4DFFEF8 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10719/*"PhotoCampaignSelectedUsrSvtId2026"*/, v3, 0);
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

  if ( (byte_4DFFF05 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_11780/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1CE6700(&StringLiteral_17848/*"button_push_reg"*/);
    sub_1CE6700(&StringLiteral_17849/*"button_push_unreg"*/);
    sub_1CE6700(&StringLiteral_17834/*"button_allchoice_reg"*/);
    sub_1CE6700(&StringLiteral_17837/*"button_alllock_unreg"*/);
    sub_1CE6700(&StringLiteral_11778/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1CE6700(&StringLiteral_7262/*"HEADER_MSG_PHOTO_SERVANT"*/);
    sub_1CE6700(&StringLiteral_11779/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1CE6700(&StringLiteral_17850/*"button_select_reg"*/);
    sub_1CE6700(&StringLiteral_17851/*"button_select_unreg"*/);
    sub_1CE6700(&StringLiteral_17836/*"button_alllock_reg"*/);
    sub_1CE6700(&StringLiteral_17835/*"button_allchoice_unreg"*/);
    byte_4DFFF05 = 1;
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
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17851/*"button_select_unreg"*/ : &StringLiteral_17850/*"button_select_reg"*/);
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
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17836/*"button_alllock_reg"*/ : &StringLiteral_17837/*"button_alllock_unreg"*/);
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
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17834/*"button_allchoice_reg"*/ : &StringLiteral_17835/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0) )
    {
LABEL_51:
      sub_1CE6958(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17848/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17849/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7262/*"HEADER_MSG_PHOTO_SERVANT"*/, 0);
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
        v14 = &StringLiteral_11779/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11778/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11780/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
        PhotoCampaignListViewManager__SetMode_34754544((PhotoCampaignListViewManager_o *)normalTabButton, 2, v15);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  System_Int64_array *v26; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4DFFF06 & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_PhotoServantSelectMenu_EndStatusSync__);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4DFFF06 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v26 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_21;
    if ( PhotoCampaignListViewManager__GetSwapChoiceList(photoCampaignManager, &choiceList, &v26, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v25,
                                                                 (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v16 = v26;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1CE6958(photoCampaignManager, callback);
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
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v14,
                                                                 (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v15, v16, 0, v17, v18, 0);
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
    sub_1CE6958(photoCampaignManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)photoCampaignManager, 0);
}


void PhotoServantSelectMenu_RequestCallbackFunc___ctor(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B10738;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B106F0;
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
  if ( (byte_4DFFF09 & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4DFFF09 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void PhotoServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4DFFF0A & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__);
    byte_4DFFF0A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31920128(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1CE6958(Instance, v6);
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
    sub_1CE6958(this, method);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v20; // q1
  PhotoServantSelectMenu_o *v21; // x21
  struct PhotoCampaignListViewItem_o *v22; // x8
  struct UserServantEntity_o *v23; // x8
  PhotoServantSelectMenu___c__DisplayClass37_0_o *v24; // x20
  __int64 v25; // x22
  __int64 v26; // x23
  const MethodInfo *v27; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v6 = this;
  if ( (byte_4DFFF0B & 1) == 0 )
  {
    sub_1CE6700(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickServant__);
    byte_4DFFF0B = 1;
  }
  _4__this = (Il2CppObject *)v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  klass = _4__this[4].klass;
  v9 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1CE694C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v9,
    _4__this,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v10);
  if ( !klass )
    goto LABEL_17;
  klass->vtable[4].method = (const MethodInfo *)v9;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&klass->vtable[4].method, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  PhotoCampaignListViewManager__SetMode_34754544((PhotoCampaignListViewManager_o *)klass, 2, v17);
  if ( !result )
    return;
  item = v6->fields.item;
  if ( !item )
    goto LABEL_17;
  userSvtEntity = item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v21 = v6->fields.__4__this;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v28 = v29;
  this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                                             &v28,
                                                             0);
  v22 = v6->fields.item;
  if ( !v22 )
    goto LABEL_17;
  v23 = v22->fields.userSvtEntity;
  if ( !v23 )
    goto LABEL_17;
  v24 = this;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v26;
  *(_QWORD *)&v30.fields.fakeValue = v25;
  this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                             v30,
                                                             0);
  if ( !v21 )
LABEL_17:
    sub_1CE6958(this, result);
  PhotoServantSelectMenu__SelectImageLimitDecide(v21, (int64_t)v24, (int32_t)this, imageLimitCount, v27);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4DFFF0C & 1) == 0 )
  {
    sub_1CE6700(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_PhotoServantSelectMenu_OnClickServant__);
    sub_1CE6700(&StringLiteral_3462/*"CLICK_BACK"*/);
    byte_4DFFF0C = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3462/*"CLICK_BACK"*/, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1CE6958(_4__this, method);
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
  v9 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1CE694C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v10);
  if ( !klass )
    goto LABEL_18;
  klass->vtable[4].method = (const MethodInfo *)v9;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&klass->vtable[4].method, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  PhotoCampaignListViewManager__SetMode_34754544((PhotoCampaignListViewManager_o *)klass, 2, v17);
}