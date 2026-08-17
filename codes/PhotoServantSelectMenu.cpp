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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  PhotoServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_596BC29 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoServantSelectMenu_CloseAction__);
    sub_2213A60(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_596BC29 = 1;
  }
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
    ActionExtensions__Call(callback, 0);
  this->fields.closeCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  struct TitleInfoControl_o *titleInfo; // x8
  struct TitleInfoControl_o *v17; // x8
  System_Action_o *closeCallback; // x0

  if ( (byte_596BC2A & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PhotoServantSelectMenu_OnClickServant__);
    byte_596BC2A = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v6 = this->fields.photoCampaignManager,
          v7 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_2213CCC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
            v8),
          !v6) )
    {
LABEL_19:
      sub_2213CDC(photoCampaignManager, isRequest);
    }
    v6->fields.callbackFunc = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    PhotoCampaignListViewManager__SetMode_40532804(v6, 2, v15);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo_47A29F8 *v17; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v19; // x20

  if ( (byte_596BC30 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__);
    sub_2213A60(&PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo);
    byte_596BC30 = 1;
  }
  v8 = sub_2213CCC(PhotoServantSelectMenu___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_6;
  *(_DWORD *)(v8 + 16) = questId;
  *(_QWORD *)(v8 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)this, v11, v12, v13, v14, v15, v16);
  v17 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  *(_BYTE *)(v8 + 32) = isNeedSort;
  Instance = SingletonMonoBehaviour_object___get_Instance(v17);
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v8,
    Method_PhotoServantSelectMenu___c__DisplayClass41_0__CloseSvtDetail_b__0__,
    0);
  if ( !Instance )
LABEL_6:
    sub_2213CDC(v9, v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v19, 0);
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
      sub_2213CDC(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_40532804(photoCampaignManager, 2, v5);
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
      sub_2213CDC(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_40532804(photoCampaignManager, 2, v5);
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
      sub_2213CDC(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_40532804(photoCampaignManager, 2, v5);
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
      sub_2213CDC(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_40532804(photoCampaignManager, 2, v5);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_596BC2F & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PhotoServantSelectMenu_OnClickServant__);
    this = (PhotoServantSelectMenu_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596BC2F = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
    return;
  this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager;
  if ( !this
    || (PhotoCampaignListViewManager__UpdateDisplayState((PhotoCampaignListViewManager_o *)this, 1, v5),
        (this = (PhotoServantSelectMenu_o *)v4->fields.photoCampaignManager) == 0)
    || (PhotoCampaignListViewManager__ModifyItem((PhotoCampaignListViewManager_o *)this, v4->fields.usrSvtId, v6),
        photoCampaignManager = v4->fields.photoCampaignManager,
        v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_2213CCC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
          v9),
        !photoCampaignManager) )
  {
LABEL_9:
    sub_2213CDC(this, result);
  }
  photoCampaignManager->fields.callbackFunc = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&photoCampaignManager->fields.callbackFunc,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  PhotoCampaignListViewManager__SetMode_40532804(photoCampaignManager, 2, v16);
}


void PhotoServantSelectMenu__EndStatusSync(
        PhotoServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PhotoServantSelectMenu_o *v4; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_requestCallback; // x19
  struct PhotoServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  struct PhotoServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  v4 = this;
  if ( (byte_596BC37 & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596BC37 = 1;
  }
  if ( !result )
    sub_2213CDC(this, result);
  if ( !System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    requestCallback = v4->fields.requestCallback;
    p_requestCallback = (MissionNaviTransitionBoardItem_o *)&v4->fields.requestCallback;
    v12 = requestCallback;
    if ( requestCallback )
    {
      p_requestCallback->klass = 0;
      sub_2213A04(p_requestCallback, 0, v5, v6, v7, v8, v9, v10);
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
  int64_t result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596BC27 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11060/*"PhotoCampaignSelectedUsrSvtId2026"*/);
    byte_596BC27 = 1;
  }
  result = 0;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_11060/*"PhotoCampaignSelectedUsrSvtId2026"*/,
             **(System_String_o ***)(qword_5984390 + 184),
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
  __int64 v4; // x1
  __int64 v5; // x2
  LocalizationManager_c *v6; // x0
  UILabel_o *infoLb; // x20
  int v8; // w9
  const MethodInfo *v9; // x2

  if ( (byte_596BC25 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7507/*"HEADER_MSG_PHOTO_SERVANT"*/);
    byte_596BC25 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    goto LABEL_8;
  PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method);
  v6 = LocalizationManager_TypeInfo;
  infoLb = this->fields.infoLb;
  this->fields.selectedUsrSvtId = -1;
  v8 = *(&v6->_2.cctor_finished + 1);
  this->fields.state = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v6, v4, v5);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_7507/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0);
  if ( !infoLb )
LABEL_8:
    sub_2213CDC(photoCampaignManager, method);
  UILabel__set_text(infoLb, (System_String_o *)photoCampaignManager, 0);
  PhotoServantSelectMenu__SetModeTabKind(this, 0, v9);
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

  if ( (byte_596BC33 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoServantSelectMenu_EndClickTabChoice__);
    sub_2213A60(&Method_PhotoServantSelectMenu_OnClickChoiceTabButton__);
    sub_2213A60(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_596BC33 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoServantSelectMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabChoice__,
          v8);
        PhotoServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596BC32 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoServantSelectMenu_EndClickTabLock__);
    sub_2213A60(&Method_PhotoServantSelectMenu_OnClickLockTabButton__);
    sub_2213A60(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_596BC32 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoServantSelectMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
        PhotoServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoServantSelectMenu_EndClickTabLock__,
          v8);
        PhotoServantSelectMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596BC31 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoServantSelectMenu_EndClickTabNormal__);
    sub_2213A60(&Method_PhotoServantSelectMenu_OnClickNormalTabButton__);
    sub_2213A60(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_596BC31 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoServantSelectMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596BC34 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoServantSelectMenu_EndClickTabPush__);
    sub_2213A60(&Method_PhotoServantSelectMenu_OnClickPushTabButton__);
    sub_2213A60(&PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
    byte_596BC34 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_PhotoServantSelectMenu_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoServantSelectMenu_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (PhotoServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(PhotoServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596BC38 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoServantSelectMenu_OnClickScaleChange__);
    byte_596BC38 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_2213CDC(0, v5);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  MethodInfo *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  PhotoCampaignListViewItem_o *Item; // x1
  PhotoCampaignListViewItem_o **v23; // x21
  __int64 v24; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v26; // q1
  int32_t tabModeKind; // w8
  _BYTE *v28; // x8
  System_Reflection_MethodBase_o *v29; // x0
  int32_t v30; // w1
  CommonUI_o *v31; // x20
  UserServantEntity_o *v32; // x21
  ServantStatusDialog_ResultDelegate_o *v33; // x22
  _BYTE *v34; // x8
  System_Reflection_MethodBase_o *v35; // x0
  struct PhotoCampaignListViewManager_o *v36; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v37; // x0
  const MethodInfo *v38; // x3
  void *v39; // x2
  int64_t selectedUsrSvtId; // x20
  struct PhotoCampaignListViewManager_CallbackFunc_o *v41; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  const MethodInfo *v48; // x2
  System_Reflection_MethodBase_o *v49; // x0
  const MethodInfo *v50; // x2
  int64_t v51; // x22
  struct UserServantEntity_o *v52; // x8
  __int128 v53; // q0
  __int128 v54; // q1
  int v55; // w8
  __int64 v56; // x1
  const MethodInfo *v57; // x2
  __int64 v58; // x26
  ServantEntity_o *ServantEntity; // x28
  __int64 v60; // x29
  ServantOverwriteStatus_o *OverwriteStatus; // x27
  __int64 v62; // x1
  __int64 v63; // x2
  Il2CppObject *Master_object; // x23
  System_String_o *v65; // x22
  System_String_o *v66; // x24
  __int64 v67; // x2
  System_Object_array *v68; // x25
  int32_t v69; // w29
  __int64 v70; // x29
  System_String_o *ClassName; // x29
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x28
  __int64 v75; // x29
  int32_t v76; // w0
  __int64 v77; // x8
  int32_t v78; // w26
  System_String_o *LimitCountSealedServantName; // x26
  System_String_o *RarityType; // x26
  System_String_o *v81; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v82; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  int32_t v84; // w21
  int32_t v85; // w0
  System_String_o *v86; // x21
  System_String_o *v87; // x21
  System_String_o *v88; // x23
  System_String_o *v89; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v91; // x26
  __int64 v92; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_596BC2B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_PhotoServantSelectMenu_CloseSvtDetail__);
    sub_2213A60(&Method_PhotoServantSelectMenu_OnClickServant__);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__0__);
    sub_2213A60(&PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596BC2B = 1;
  }
  v7 = sub_2213CCC(PhotoServantSelectMenu___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_80;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( n < 0 )
  {
    Item = 0;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_80;
    Item = PhotoCampaignListViewManager__GetItem((PhotoCampaignListViewManager_o *)photoCampaignManager, n, v16);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v23 = (PhotoCampaignListViewItem_o **)(v7 + 24);
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v7 + 24),
    (int32_t)Item,
    (System_String_o *)v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !*(_QWORD *)(v7 + 24) )
    return;
  userSvtEntity = (*v23)->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_80;
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v95.fields.fakeValue = v26;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v24);
  v94 = v95;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v94, 0);
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      v31 = (CommonUI_o *)photoCampaignManager;
      v32 = (*v23)->fields.userSvtEntity;
      v33 = (ServantStatusDialog_ResultDelegate_o *)sub_2213CCC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v33,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_CloseSvtDetail__,
        0);
      if ( v31 )
      {
        CommonUI__OpenServantStatusDialog_37384068(v31, 0, v32, v33, 0, 0, 0);
        return;
      }
    }
    goto LABEL_80;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  photoCampaignManager = (__int64)*v23;
  switch ( tabModeKind )
  {
    case 3:
      if ( !photoCampaignManager )
        goto LABEL_80;
      if ( *(_QWORD *)(photoCampaignManager + 120) )
      {
        if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 120), 0) )
        {
LABEL_33:
          v29 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_PhotoServantSelectMenu_OnClickServant__);
          goto LABEL_38;
        }
        photoCampaignManager = (__int64)*v23;
        if ( !*v23 )
          goto LABEL_80;
      }
      if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
        goto LABEL_33;
      v49 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_PhotoServantSelectMenu_OnClickServant__);
      OverwriteAssetSoundName__PlaySystemSe(v49, 0, 0, 0);
      photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0);
      if ( photoCampaignManager )
      {
        v51 = *(_QWORD *)(photoCampaignManager + 128);
        if ( !v51 )
        {
LABEL_51:
          PhotoServantSelectMenu__PushRequest(this, *v23, v50);
          goto LABEL_40;
        }
        if ( *v23 )
        {
          v52 = (*v23)->fields.userSvtEntity;
          if ( v52 )
          {
            v53 = *(_OWORD *)&v52->fields.id.fields.currentCryptoKey;
            v54 = *(_OWORD *)&v52->fields.id.fields.fakeValue;
            v55 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v95.fields.currentCryptoKey = v53;
            *(_OWORD *)&v95.fields.fakeValue = v54;
            if ( !v55 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v50);
            v93 = v95;
            if ( v51 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v93, 0) )
              goto LABEL_51;
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v56, v50);
            photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
            if ( photoCampaignManager )
            {
              photoCampaignManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
                                                v51,
                                                (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( photoCampaignManager )
              {
                v58 = photoCampaignManager;
                ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)photoCampaignManager, -1, 0);
                photoCampaignManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v58, 0, 0);
                if ( *v23 )
                {
                  v60 = photoCampaignManager;
                  photoCampaignManager = (__int64)(*v23)->fields.userSvtEntity;
                  if ( photoCampaignManager )
                  {
                    OverwriteStatus = UserServantEntity__GetOverwriteStatus(
                                        (UserServantEntity_o *)photoCampaignManager,
                                        0,
                                        0);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62, v63);
                    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
                    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
                    photoCampaignManager = sub_2213B20(object___TypeInfo, 6);
                    if ( v60 )
                    {
                      v68 = (System_Object_array *)photoCampaignManager;
                      v69 = *(_DWORD *)(v60 + 24);
                      if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v9, v67);
                      photoCampaignManager = (__int64)Rarity__getRarityType(v69, 0);
                      if ( v68 )
                      {
                        v70 = photoCampaignManager;
                        sub_1FFE8F8(v68, photoCampaignManager);
                        photoCampaignManager = sub_1FFE2C4(v68, 0, v70);
                        if ( ServantEntity )
                        {
                          ClassName = ServantEntity__getClassName(ServantEntity, 0);
                          sub_1FFE8F8(v68, ClassName);
                          sub_1FFE2C4(v68, 1, ClassName);
                          v75 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
                          v74 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
                          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                              v72,
                              v73);
                          *(_QWORD *)&v96.fields.currentCryptoKey = v75;
                          *(_QWORD *)&v96.fields.fakeValue = v74;
                          v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v96, 0);
                          v77 = *(_QWORD *)(v58 + 96);
                          *(_QWORD *)&v97.fields.fakeValue = *(_QWORD *)(v58 + 104);
                          v78 = v76;
                          *(_QWORD *)&v97.fields.currentCryptoKey = v77;
                          photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   v97,
                                                   0);
                          if ( Master_object )
                          {
                            LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                            (ServantLimitImageMaster_o *)Master_object,
                                                            v78,
                                                            photoCampaignManager,
                                                            1,
                                                            1,
                                                            0);
                            sub_1FFE8F8(v68, LimitCountSealedServantName);
                            photoCampaignManager = sub_1FFE2C4(v68, 2, LimitCountSealedServantName);
                            if ( OverwriteStatus )
                            {
                              RarityType = Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0);
                              sub_1FFE8F8(v68, RarityType);
                              photoCampaignManager = sub_1FFE2C4(v68, 3, RarityType);
                              if ( *v23 )
                              {
                                photoCampaignManager = (__int64)(*v23)->fields.servantEntity;
                                if ( photoCampaignManager )
                                {
                                  v81 = ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0);
                                  sub_1FFE8F8(v68, v81);
                                  photoCampaignManager = sub_1FFE2C4(v68, 4, v81);
                                  if ( *v23 )
                                  {
                                    v82 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.servantEntity;
                                    if ( v82 )
                                    {
                                      photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                               v82[1],
                                                               0);
                                      if ( *v23 )
                                      {
                                        v83 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userSvtEntity;
                                        if ( v83 )
                                        {
                                          v84 = photoCampaignManager;
                                          v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                  v83[6],
                                                  0);
                                          v86 = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  (ServantLimitImageMaster_o *)Master_object,
                                                  v84,
                                                  v85,
                                                  1,
                                                  1,
                                                  0);
                                          sub_1FFE8F8(v68, v86);
                                          sub_1FFE2C4(v68, 5, v86);
                                          v87 = System_String__Format_75698016(v66, v68, 0);
                                          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                                          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                                          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                          v91 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                          CommonConfirmDialog_ClickDelegate___ctor(
                                            v91,
                                            (Il2CppObject *)v7,
                                            Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__0__,
                                            0);
                                          photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                                          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v92);
                                          if ( Instance )
                                          {
                                            CommonUI__OpenConfirmDialog_37373584(
                                              (CommonUI_o *)Instance,
                                              v65,
                                              v87,
                                              v88,
                                              v89,
                                              v91,
                                              BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                                              BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
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
                                            goto LABEL_40;
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
                  }
                }
              }
            }
          }
        }
      }
LABEL_80:
      sub_2213CDC(photoCampaignManager, v9);
    case 2:
      if ( !photoCampaignManager )
        goto LABEL_80;
      v34 = Method_PhotoServantSelectMenu_OnClickServant__;
      *(_BYTE *)(photoCampaignManager + 170) ^= 1u;
      if ( (v34[83] & 2) != 0 )
        v34 = (_BYTE *)sub_2213A78(v34);
      v29 = (System_Reflection_MethodBase_o *)sub_2213A44(v34, *((_QWORD *)v34 + 4));
      v30 = 0;
      goto LABEL_39;
    case 1:
      if ( !photoCampaignManager )
        goto LABEL_80;
      v28 = Method_PhotoServantSelectMenu_OnClickServant__;
      *(_BYTE *)(photoCampaignManager + 169) ^= 1u;
      if ( (v28[83] & 2) != 0 )
        v28 = (_BYTE *)sub_2213A78(v28);
      v29 = (System_Reflection_MethodBase_o *)sub_2213A44(v28, *((_QWORD *)v28 + 4));
      v30 = 11;
      goto LABEL_39;
  }
  if ( !photoCampaignManager )
    goto LABEL_80;
  if ( PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
  {
    v35 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_PhotoServantSelectMenu_OnClickServant__);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0);
    v36 = this->fields.photoCampaignManager;
    v37 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_2213CCC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    v39 = Method_PhotoServantSelectMenu_OnClickServant__;
    goto LABEL_41;
  }
  selectedUsrSvtId = this->fields.selectedUsrSvtId;
  v29 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_PhotoServantSelectMenu_OnClickServant__);
  if ( selectedUsrSvtId < 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
    PhotoServantSelectMenu__OpenSelectImageLimitDialog(this, *v23, v57);
    return;
  }
LABEL_38:
  v30 = 2;
LABEL_39:
  OverwriteAssetSoundName__PlaySystemSe(v29, v30, 0, 0);
LABEL_40:
  v36 = this->fields.photoCampaignManager;
  v37 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_2213CCC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v39 = Method_PhotoServantSelectMenu_OnClickServant__;
LABEL_41:
  v41 = v37;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v37, (Il2CppObject *)this, (intptr_t)v39, v38);
  if ( !v36 )
    goto LABEL_80;
  v36->fields.callbackFunc = v41;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->fields.callbackFunc, (int32_t)v41, v42, v43, v44, v45, v46, v47);
  PhotoCampaignListViewManager__SetMode_40532804(v36, 2, v48);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  struct PhotoCampaignListViewManager_o *v29; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  const MethodInfo *v38; // x2
  struct TitleInfoControl_o *titleInfo; // x8
  UnityEngine_GameObject_o *v40; // x24
  const MethodInfo *v41; // x5
  const MethodInfo *v42; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v44; // x21
  const MethodInfo *v45; // x3
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  const MethodInfo *v52; // x2

  v12 = this;
  if ( (byte_596BC26 & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    this = (PhotoServantSelectMenu_o *)sub_2213A60(&Method_PhotoServantSelectMenu_OnClickServant__);
    byte_596BC26 = 1;
  }
  LatestSelectedUsrSvtId = PhotoServantSelectMenu__GetLatestSelectedUsrSvtId(this, (const MethodInfo *)callback);
  if ( baseUserSvtId <= 0 )
    baseUserSvtId = LatestSelectedUsrSvtId;
  v12->fields.closeCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.closeCallback, 0, v14, v15, v16, v17, v18, v19);
  v12->fields.selectImageLimitCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.selectImageLimitCallback,
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
        TitleInfoControl__changeTitleInfo_46863248((TitleInfoControl_o *)gameObject, 1, 64, 0, 0);
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
                          v44 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_2213CCC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
                          PhotoCampaignListViewManager_CallbackFunc___ctor(
                            v44,
                            (Il2CppObject *)v12,
                            (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
                            v45);
                          if ( photoCampaignManager )
                          {
                            photoCampaignManager->fields.callbackFunc = v44;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)&photoCampaignManager->fields.callbackFunc,
                              (int32_t)v44,
                              v46,
                              v47,
                              v48,
                              v49,
                              v50,
                              v51);
                            PhotoCampaignListViewManager__SetMode_40532804(photoCampaignManager, 2, v52);
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
    sub_2213CDC(gameObject, v26);
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
  v30 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_2213CCC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v30,
    (Il2CppObject *)v12,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v31);
  if ( !v29 )
    goto LABEL_23;
  v29->fields.callbackFunc = v30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.callbackFunc, (int32_t)v30, v32, v33, v34, v35, v36, v37);
  PhotoCampaignListViewManager__SetMode_40532804(v29, 2, v38);
  v12->fields.selectedUsrSvtId = -1;
LABEL_22:
  v12->fields.state = 2;
}


void PhotoServantSelectMenu__OpenSelectImageLimitDialog(
        PhotoServantSelectMenu_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  __int64 v21; // x8
  __int64 v22; // x8
  MyRoomControl_o *myRoomControl; // x20
  __int128 v24; // q0
  __int128 v25; // q1
  int v26; // w8
  int64_t v27; // x21
  System_Action_bool__int__o *v28; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]

  if ( (byte_596BC2C & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__);
    sub_2213A60(&PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo);
    byte_596BC2C = 1;
  }
  v5 = sub_2213CCC(PhotoServantSelectMenu___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)item, v14, v15, v16, v17, v18, v19);
  v21 = *(_QWORD *)(v5 + 24);
  if ( !v21 )
    goto LABEL_10;
  v22 = *(_QWORD *)(v21 + 120);
  if ( !v22 )
    goto LABEL_10;
  myRoomControl = this->fields.myRoomControl;
  v24 = *(_OWORD *)(v22 + 16);
  v25 = *(_OWORD *)(v22 + 32);
  v26 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v30.fields.currentCryptoKey = v24;
  *(_OWORD *)&v30.fields.fakeValue = v25;
  if ( !v26 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v20);
  v29 = v30;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v29, 0);
  v28 = (System_Action_bool__int__o *)sub_2213CCC(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_PhotoServantSelectMenu___c__DisplayClass37_0__OpenSelectImageLimitDialog_b__0__,
    0);
  if ( !myRoomControl )
LABEL_10:
    sub_2213CDC(v6, v7);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v27, v28, -1, 0);
}


void PhotoServantSelectMenu__PushRequest(
        PhotoServantSelectMenu_o *this,
        PhotoCampaignListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596BC2E & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_PhotoServantSelectMenu_EndPushRequest__);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BC2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_PhotoServantSelectMenu_EndPushRequest__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v8 = this;
  if ( (byte_596BC2D & 1) == 0 )
  {
    this = (PhotoServantSelectMenu_o *)sub_2213A60(&Method_ActionExtensions_Call_long__int__int___);
    byte_596BC2D = 1;
  }
  v8->fields.selectedUsrSvtId = userSvtId;
  v8->fields.state = 4;
  PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(this, userSvtId, *(const MethodInfo **)&svtId);
  photoCampaignManager = v8->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    sub_2213CDC(0, v9);
  PhotoCampaignListViewManager__SetMode_40532804(photoCampaignManager, 1, v10);
  selectImageLimitCallback = (System_Action_T1__T2__T3__o *)v8->fields.selectImageLimitCallback;
  v8->fields.selectImageLimitCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.selectImageLimitCallback, 0, v13, v14, v15, v16, v17, v18);
  if ( selectImageLimitCallback )
    ActionExtensions__Call_long__int__int_(
      selectImageLimitCallback,
      userSvtId,
      svtId,
      limitCount,
      (const MethodInfo_3700500 *)Method_ActionExtensions_Call_long__int__int___);
}


void PhotoServantSelectMenu__SetLatestSelectedUsrSvtId(
        PhotoServantSelectMenu_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = userSvtId;
  if ( (byte_596BC28 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11060/*"PhotoCampaignSelectedUsrSvtId2026"*/);
    byte_596BC28 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11060/*"PhotoCampaignSelectedUsrSvtId2026"*/, v3, 0);
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
  __int64 *v12; // x8
  UILabel_o *v13; // x21
  char v14; // w8
  const MethodInfo *v15; // x2

  if ( (byte_596BC35 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_7507/*"HEADER_MSG_PHOTO_SERVANT"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596BC35 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_55;
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_18434/*"button_select_unreg"*/ : &StringLiteral_18433/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_55;
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_18419/*"button_alllock_reg"*/ : &StringLiteral_18420/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_55;
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_18417/*"button_allchoice_reg"*/ : &StringLiteral_18418/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_55;
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_18431/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_18432/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    if ( modeKind > 1 )
    {
      if ( modeKind == 2 )
      {
        infoLb = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        v12 = &StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_49;
      }
      if ( modeKind == 3 )
      {
        infoLb = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        v12 = &StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
        goto LABEL_49;
      }
    }
    else
    {
      if ( !modeKind )
      {
        v13 = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7507/*"HEADER_MSG_PHOTO_SERVANT"*/, 0);
        if ( !v13 )
          goto LABEL_55;
        UILabel__set_text(v13, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_55;
        v14 = 0;
        goto LABEL_52;
      }
      if ( modeKind == 1 )
      {
        infoLb = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        v12 = &StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_49:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v12, 0);
        if ( !infoLb )
          goto LABEL_55;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_55;
        v14 = 1;
LABEL_52:
        BYTE4(normalTabButton[15].fields.m_CachedPtr) = v14;
LABEL_53:
        PhotoCampaignListViewManager__UpdateDisplayState(
          (PhotoCampaignListViewManager_o *)normalTabButton,
          modeKind == 3,
          v10);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( normalTabButton )
        {
          PhotoCampaignListViewManager__SetMode_40532804((PhotoCampaignListViewManager_o *)normalTabButton, 2, v15);
          return;
        }
LABEL_55:
        sub_2213CDC(normalTabButton, *(_QWORD *)&modeKind);
      }
    }
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
    if ( !normalTabButton )
      goto LABEL_55;
    goto LABEL_53;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w4
  bool v20; // w5
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Int64_array *v30; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596BC36 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_PhotoServantSelectMenu_EndStatusSync__);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596BC36 = 1;
  }
  tabModeKind = this->fields.tabModeKind;
  unlockList = 0;
  lockList = 0;
  v30 = 0;
  choiceList = 0;
  if ( tabModeKind == 2 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_21;
    if ( PhotoCampaignListViewManager__GetSwapChoiceList(photoCampaignManager, &choiceList, &v30, v3) )
    {
      this->fields.requestCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28, v29);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v27,
                                                                 (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v18 = v30;
        v17 = choiceList;
        v19 = 0;
        v20 = 1;
        goto LABEL_17;
      }
LABEL_21:
      sub_2213CDC(photoCampaignManager, callback);
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v14,
                                                                 (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v18 = unlockList;
        v17 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v17, v18, 0, v19, v20, 0);
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
    sub_2213CDC(photoCampaignManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)photoCampaignManager, 0);
}


void PhotoServantSelectMenu_RequestCallbackFunc___ctor(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2003534;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20034EC;
}


System_IAsyncResult_o *PhotoServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void PhotoServantSelectMenu_RequestCallbackFunc__EndInvoke(
        PhotoServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596BC39 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__);
    byte_596BC39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoServantSelectMenu___c__DisplayClass36_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
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
    sub_2213CDC(this, method);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  __int64 v18; // x2
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v21; // q1
  PhotoServantSelectMenu_o *v22; // x21
  __int64 v23; // x2
  struct PhotoCampaignListViewItem_o *v24; // x8
  struct UserServantEntity_o *v25; // x8
  PhotoServantSelectMenu___c__DisplayClass37_0_o *v26; // x20
  __int64 v27; // x22
  __int64 v28; // x23
  const MethodInfo *v29; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v6 = this;
  if ( (byte_596BC3A & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)sub_2213A60(&Method_PhotoServantSelectMenu_OnClickServant__);
    byte_596BC3A = 1;
  }
  _4__this = (Il2CppObject *)v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  klass = _4__this[4].klass;
  v9 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_2213CCC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v9,
    _4__this,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v10);
  if ( !klass )
    goto LABEL_17;
  klass->vtable[4].method = (const MethodInfo *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&klass->vtable[4].method, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  PhotoCampaignListViewManager__SetMode_40532804((PhotoCampaignListViewManager_o *)klass, 2, v17);
  if ( !result )
    return;
  item = v6->fields.item;
  if ( !item )
    goto LABEL_17;
  userSvtEntity = item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_17;
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = v6->fields.__4__this;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v21;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, result, v18);
  v30 = v31;
  this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                             &v30,
                                                             0);
  v24 = v6->fields.item;
  if ( !v24 )
    goto LABEL_17;
  v25 = v24->fields.userSvtEntity;
  if ( !v25 )
    goto LABEL_17;
  v26 = this;
  v27 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, result, v23);
  *(_QWORD *)&v32.fields.currentCryptoKey = v27;
  *(_QWORD *)&v32.fields.fakeValue = v28;
  this = (PhotoServantSelectMenu___c__DisplayClass37_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                             v32,
                                                             0);
  if ( !v22 )
LABEL_17:
    sub_2213CDC(this, result);
  PhotoServantSelectMenu__SelectImageLimitDecide(v22, (int64_t)v26, (int32_t)this, imageLimitCount, v29);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2

  if ( (byte_596BC3B & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PhotoServantSelectMenu_OnClickServant__);
    sub_2213A60(&StringLiteral_3576/*"CLICK_BACK"*/);
    byte_596BC3B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( this->fields.questId >= 1 )
  {
    if ( _4__this )
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3576/*"CLICK_BACK"*/, 0);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_2213CDC(_4__this, method);
  }
  if ( !_4__this || !_4__this->fields.photoCampaignManager )
    goto LABEL_19;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_19;
    _4__this = (PhotoServantSelectMenu_o *)v6->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_19;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0);
  }
  v7 = (Il2CppObject *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_19;
  klass = v7[4].klass;
  v9 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_2213CCC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_PhotoServantSelectMenu_OnClickServant__,
    v10);
  if ( !klass )
    goto LABEL_19;
  klass->vtable[4].method = (const MethodInfo *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&klass->vtable[4].method, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  PhotoCampaignListViewManager__SetMode_40532804((PhotoCampaignListViewManager_o *)klass, 2, v17);
}