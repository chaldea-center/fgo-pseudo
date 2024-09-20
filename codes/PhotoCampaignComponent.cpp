void __fastcall PhotoCampaignComponent___ctor(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PhotoCampaignComponent__CancelPhotoCampaignWindow(
        PhotoCampaignComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  PhotoCampaignComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A56BB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_PhotoCampaignComponent_EndCancelButton__);
    sub_1B885B0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_4A56BB4 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1B88554(&this->fields.cancelCallback, callback);
  v5 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B887FC(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    v6);
  PhotoCampaignComponent__StatusRequest(this, v5, v7);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v12; // x20

  if ( (byte_4A56BBA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__);
    sub_1B885B0(&PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo);
    byte_4A56BBA = 1;
  }
  v8 = sub_1B887FC(PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_1B88554(v8 + 24, this),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v8,
          Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v9, v10);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4A56BB5 & 1) == 0 )
  {
    sub_1B885B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickServant__);
    byte_4A56BB5 = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v6 = this->fields.photoCampaignManager,
          v7 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B887FC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            v8),
          !v6) )
    {
LABEL_11:
      sub_1B8880C(photoCampaignManager, isRequest);
    }
    v6->fields.callbackFunc = v7;
    sub_1B88554(&v6->fields.callbackFunc, v7);
    PhotoCampaignListViewManager__SetMode_31559208(v6, 2, v9);
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
      sub_1B8880C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_31559208(photoCampaignManager, 2, v5);
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
      sub_1B8880C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_31559208(photoCampaignManager, 2, v5);
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
      sub_1B8880C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_31559208(photoCampaignManager, 2, v5);
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
      sub_1B8880C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_31559208(photoCampaignManager, 2, v5);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4A56BB9 & 1) == 0 )
  {
    sub_1B885B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickServant__);
    byte_4A56BB9 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (photoCampaignManager = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(photoCampaignManager, this->fields.usrSvtId, v5),
        v6 = this->fields.photoCampaignManager,
        v7 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B887FC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v8),
        !v6) )
  {
    sub_1B8880C(photoCampaignManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1B88554(&v6->fields.callbackFunc, v7);
  PhotoCampaignListViewManager__SetMode_31559208(v6, 2, v9);
}


void __fastcall PhotoCampaignComponent__EndStatusSync(
        PhotoCampaignComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct PhotoCampaignComponent_RequestCallbackFunc_o **p_requestCallback; // x0
  struct PhotoCampaignComponent_RequestCallbackFunc_o *v4; // x19
  struct PhotoCampaignComponent_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = &this->fields.requestCallback;
  v4 = requestCallback;
  if ( requestCallback )
  {
    *p_requestCallback = 0LL;
    sub_1B88554(p_requestCallback, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      1LL,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


int64_t __fastcall PhotoCampaignComponent__GetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v4; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A56BB2 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_10618/*"PhotoCampaignSelectedUsrSvtId2024"*/);
    byte_4A56BB2 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10618/*"PhotoCampaignSelectedUsrSvtId2024"*/,
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

  if ( (byte_4A56BB0 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_7109/*"HEADER_MSG_PHOTO_SERVANT"*/);
    byte_4A56BB0 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    goto LABEL_8;
  PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_7109/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0LL);
  if ( !infoLb )
LABEL_8:
    sub_1B8880C(photoCampaignManager, method);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A56BBD & 1) == 0 )
  {
    sub_1B885B0(&Method_PhotoCampaignComponent_EndClickTabChoice__);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    sub_1B885B0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_4A56BBD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B887FC(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          v8);
        PhotoCampaignComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B887FC(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabChoice__,
        v11);
      PhotoCampaignComponent__StatusRequest(this, v10, v12);
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
    sub_1B8880C(0LL, v5);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A56BBC & 1) == 0 )
  {
    sub_1B885B0(&Method_PhotoCampaignComponent_EndClickTabLock__);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickLockTabButton__);
    sub_1B885B0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_4A56BBC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B887FC(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          v8);
        PhotoCampaignComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B887FC(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabLock__,
        v11);
      PhotoCampaignComponent__StatusRequest(this, v10, v12);
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
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A56BBB & 1) == 0 )
  {
    sub_1B885B0(&Method_PhotoCampaignComponent_EndClickTabNormal__);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    sub_1B885B0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_4A56BBB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B887FC(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabNormal__,
      v6);
    PhotoCampaignComponent__StatusRequest(this, v5, v7);
  }
}


void __fastcall PhotoCampaignComponent__OnClickPushTabButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A56BBE & 1) == 0 )
  {
    sub_1B885B0(&Method_PhotoCampaignComponent_EndClickTabPush__);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickPushTabButton__);
    sub_1B885B0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    byte_4A56BBE = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B887FC(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabPush__,
      v6);
    PhotoCampaignComponent__StatusRequest(this, v5, v7);
  }
}


void __fastcall PhotoCampaignComponent__OnClickScaleChange(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A56BC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickScaleChange__);
    byte_4A56BC1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_1B8880C(0LL, v5);
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
  Il2CppObject *v7; // x20
  __int64 photoCampaignManager; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  PhotoCampaignListViewItem_o *Item; // x1
  PhotoCampaignListViewItem_o **p_monitor; // x21
  __int64 v13; // x8
  __int128 v14; // q1
  int32_t tabModeKind; // w8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  int32_t v18; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v20; // x20
  ServantStatusDialog_ResultDelegate_o *v21; // x22
  _QWORD *v22; // x0
  _QWORD *v23; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  struct PhotoCampaignListViewManager_o *v26; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v27; // x0
  const MethodInfo *v28; // x3
  intptr_t v29; // w2
  int64_t selectedUsrSvtId; // x20
  _QWORD *v31; // x0
  struct PhotoCampaignListViewManager_CallbackFunc_o *v32; // x21
  const MethodInfo *v33; // x2
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x2
  int64_t v37; // x22
  struct UserServantEntity_o *v38; // x8
  __int128 v39; // q0
  const MethodInfo *v40; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v45; // x26
  System_String_o *v46; // x22
  System_String_o *v47; // x23
  System_Object_array *v48; // x24
  int32_t Rarity; // w27
  Il2CppObject *v50; // x27
  Il2CppObject *v51; // x27
  int32_t v52; // w0
  Il2CppObject *v53; // x25
  int32_t v54; // w0
  Il2CppObject *v55; // x25
  Il2CppObject *v56; // x25
  PhotoCampaignListViewItem_o *v57; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x9
  ServantEntity_o *servantEntity; // x21
  Il2CppObject *v60; // x21
  System_String_o *v61; // x21
  System_String_o *v62; // x23
  System_String_o *v63; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v65; // x26
  __int64 v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4A56BB6 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignComponent_CloseSvtDetail__);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickServant__);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__);
    sub_1B885B0(&PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A56BB6 = 1;
  }
  v7 = (Il2CppObject *)sub_1B887FC(PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_102;
  v7[1].klass = (Il2CppClass *)this;
  sub_1B88554(&v7[1], this);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_102;
    Item = PhotoCampaignListViewManager__GetItem((PhotoCampaignListViewManager_o *)photoCampaignManager, n, v10);
  }
  v7[1].monitor = Item;
  p_monitor = (PhotoCampaignListViewItem_o **)&v7[1].monitor;
  photoCampaignManager = sub_1B88554(&v7[1].monitor, Item);
  if ( !v7[1].monitor )
    goto LABEL_102;
  v13 = *((_QWORD *)v7[1].monitor + 14);
  if ( !v13 )
    goto LABEL_102;
  v14 = *(_OWORD *)(v13 + 32);
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v13 + 16);
  *(_OWORD *)&v69.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v68 = v69;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v68, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v20 = (CommonUI_o *)photoCampaignManager;
      v21 = (ServantStatusDialog_ResultDelegate_o *)sub_1B887FC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v21,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v20 )
      {
        CommonUI__OpenServantStatusDialog_30504960(v20, 0, userSvtEntity, v21, 0, 0LL);
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
    v22 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickServant__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v22, v22[4]);
    v18 = 0;
    goto LABEL_44;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*p_monitor )
      goto LABEL_102;
    (*p_monitor)->fields.isSwapLock ^= 1u;
    v16 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickServant__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
    v18 = 11;
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
        v23 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
          v23 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickServant__);
        v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v23, v23[4]);
LABEL_43:
        v18 = 2;
LABEL_44:
        OverwriteAssetSoundName__PlaySystemSe(v17, v18, 0LL);
LABEL_45:
        v26 = this->fields.photoCampaignManager;
        v27 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B887FC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
        v29 = (int)Method_PhotoCampaignComponent_OnClickServant__;
        goto LABEL_46;
      }
      photoCampaignManager = (__int64)*p_monitor;
      if ( !*p_monitor )
        goto LABEL_102;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
      goto LABEL_33;
    v34 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickServant__);
    v35 = (System_Reflection_MethodBase_o *)sub_1B88594(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !photoCampaignManager )
      goto LABEL_102;
    v37 = *(_QWORD *)(photoCampaignManager + 120);
    if ( !v37 )
    {
LABEL_58:
      PhotoCampaignComponent__PushRequest(this, *p_monitor, v36);
      goto LABEL_45;
    }
    if ( !*p_monitor )
      goto LABEL_102;
    v38 = (*p_monitor)->fields.userSvtEntity;
    if ( !v38 )
      goto LABEL_102;
    v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
    *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v69.fields.fakeValue = v39;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v67 = v69;
    if ( v37 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v67, 0LL) )
      goto LABEL_58;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
               v37,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_102;
    v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v70.fields.currentCryptoKey = klass;
    *(_QWORD *)&v70.fields.fakeValue = monitor;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v70, 0LL);
    if ( !v42 )
      goto LABEL_102;
    v45 = DataMasterBase_object__object__int___GetEntity(
            v42,
            photoCampaignManager,
            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v48 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v48 )
LABEL_102:
      sub_1B8880C(photoCampaignManager, v9);
    v50 = (Il2CppObject *)photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_1B886EC(photoCampaignManager, v48->obj.klass->_1.element_class)) != 0 )
    {
      if ( !v48->max_length )
        goto LABEL_103;
      v48->m_Items[0] = v50;
      photoCampaignManager = sub_1B88554(v48->m_Items, v50);
      if ( !v45 )
        goto LABEL_102;
      photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v45, 0LL);
      v51 = (Il2CppObject *)photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_1B886EC(photoCampaignManager, v48->obj.klass->_1.element_class)) != 0 )
      {
        if ( v48->max_length <= 1 )
          goto LABEL_103;
        v48->m_Items[1] = v51;
        sub_1B88554(&v48->m_Items[1], v51);
        v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                0LL);
        photoCampaignManager = (__int64)ServantEntity__getName((ServantEntity_o *)v45, v52, -1, 0LL);
        v53 = (Il2CppObject *)photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_1B886EC(photoCampaignManager, v48->obj.klass->_1.element_class)) != 0 )
        {
          if ( v48->max_length <= 2 )
            goto LABEL_103;
          v48->m_Items[2] = v53;
          photoCampaignManager = sub_1B88554(&v48->m_Items[2], v53);
          if ( !*p_monitor )
            goto LABEL_102;
          photoCampaignManager = (__int64)(*p_monitor)->fields.userSvtEntity;
          if ( !photoCampaignManager )
            goto LABEL_102;
          v54 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
          photoCampaignManager = (__int64)Rarity__getRarityType(v54, 0LL);
          v55 = (Il2CppObject *)photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_1B886EC(photoCampaignManager, v48->obj.klass->_1.element_class)) != 0 )
          {
            if ( v48->max_length <= 3 )
              goto LABEL_103;
            v48->m_Items[3] = v55;
            photoCampaignManager = sub_1B88554(&v48->m_Items[3], v55);
            if ( !*p_monitor )
              goto LABEL_102;
            photoCampaignManager = (__int64)(*p_monitor)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_102;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
            v56 = (Il2CppObject *)photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_1B886EC(photoCampaignManager, v48->obj.klass->_1.element_class)) != 0 )
            {
              if ( v48->max_length <= 4 )
                goto LABEL_103;
              v48->m_Items[4] = v56;
              photoCampaignManager = sub_1B88554(&v48->m_Items[4], v56);
              v57 = *p_monitor;
              if ( !*p_monitor )
                goto LABEL_102;
              v58 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v57->fields.userSvtEntity;
              if ( !v58 )
                goto LABEL_102;
              servantEntity = v57->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v58[6], 0LL);
              if ( !servantEntity )
                goto LABEL_102;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 0LL);
              v60 = (Il2CppObject *)photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_1B886EC(photoCampaignManager, v48->obj.klass->_1.element_class)) != 0 )
              {
                if ( v48->max_length > 5 )
                {
                  v48->m_Items[5] = v60;
                  sub_1B88554(&v48->m_Items[5], v60);
                  v61 = System_String__Format_61721540(v47, v48, 0LL);
                  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v65 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v65,
                    v7,
                    Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__,
                    0LL);
                  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30493912(
                      (CommonUI_o *)Instance,
                      v46,
                      v61,
                      v62,
                      v63,
                      v65,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    goto LABEL_45;
                  }
                  goto LABEL_102;
                }
LABEL_103:
                sub_1B88814(photoCampaignManager, v9);
              }
            }
          }
        }
      }
    }
    v66 = sub_1B88830();
    sub_1B886D8(v66, 0LL);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v9) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v31 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v31 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickServant__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v31, v31[4]);
    if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(this, *p_monitor, v40);
      return;
    }
    goto LABEL_43;
  }
  v24 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignComponent_OnClickServant__);
  v25 = (System_Reflection_MethodBase_o *)sub_1B88594(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
  v26 = this->fields.photoCampaignManager;
  v27 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B887FC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v29 = (int)Method_PhotoCampaignComponent_OnClickServant__;
LABEL_46:
  v32 = v27;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v27, (Il2CppObject *)this, v29, v28);
  if ( !v26 )
    goto LABEL_102;
  v26->fields.callbackFunc = v32;
  sub_1B88554(&v26->fields.callbackFunc, v32);
  PhotoCampaignListViewManager__SetMode_31559208(v26, 2, v33);
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
  struct MyRoomControl_o *myRoomControl; // x8
  UnityEngine_GameObject_o *v12; // x20
  PhotoCampaignComponent_o *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2

  if ( (byte_4A56BB1 & 1) == 0 )
  {
    sub_1B885B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickServant__);
    byte_4A56BB1 = 1;
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
  sub_1B88554(&this->fields.cancelCallback, 0LL);
  gameObject = (int64_t)this->fields.titleInfo;
  this->fields.photoType = type;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_37188552((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
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
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v12
    || (UnityEngine_GameObject__SetActive(v12, gameObject & 1, 0LL),
        gameObject = PhotoCampaignComponent__GetLatestSelectedUsrSvtId(v13, v14),
        !this->fields.photoCampaignManager)
    || (PhotoCampaignListViewManager__CreateList(
          this->fields.photoCampaignManager,
          gameObject,
          this->fields.selectedUsrSvtId,
          v15),
        PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v16),
        photoCampaignManager = this->fields.photoCampaignManager,
        v18 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B887FC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v19),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_1B8880C(gameObject, v10);
  }
  photoCampaignManager->fields.callbackFunc = v18;
  sub_1B88554(&photoCampaignManager->fields.callbackFunc, v18);
  PhotoCampaignListViewManager__SetMode_31559208(photoCampaignManager, 2, v20);
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
  __int128 v14; // q0
  struct AssetsInfo_o *assetsInfo; // x8
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
  struct AllocMem_o *allocMem; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct AssetsInfo_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A56BB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignComponent_EndPushRequest__);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56BB8 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_19;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v9 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v7->fields.assetsInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = assetsInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  allocMem = v7->fields.allocMem;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.dispLimitCount, 0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.iconLimitCount, 0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  if ( !v22 )
LABEL_19:
    sub_1B8880C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    allocMem == (struct AllocMem_o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct AssetsInfo_o *)v39,
    0LL);
}


void __fastcall PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(
        PhotoCampaignComponent_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  _QWORD *monitor; // x8
  __int64 v9; // x8
  __int128 v10; // q1
  MyRoomControl_o *myRoomControl; // x19
  int64_t v12; // x21
  System_Action_bool__int__o *v13; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  if ( (byte_4A56BB7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__);
    sub_1B885B0(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo);
    byte_4A56BB7 = 1;
  }
  v5 = (Il2CppObject *)sub_1B887FC(PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  v5[1].klass = (Il2CppClass *)this;
  sub_1B88554(&v5[1], this);
  v5[1].monitor = item;
  v6 = sub_1B88554(&v5[1].monitor, item);
  monitor = v5[1].monitor;
  if ( !monitor )
    goto LABEL_10;
  v9 = monitor[14];
  if ( !v9 )
    goto LABEL_10;
  v10 = *(_OWORD *)(v9 + 32);
  myRoomControl = this->fields.myRoomControl;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
  *(_OWORD *)&v15.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
  v13 = (System_Action_bool__int__o *)sub_1B887FC(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v13,
    v5,
    Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__,
    0LL);
  if ( !myRoomControl )
LABEL_10:
    sub_1B8880C(v6, v7);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v12, v13, -1, 0LL);
}


void __fastcall PhotoCampaignComponent__SetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = usrSvtId;
  if ( (byte_4A56BB3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10618/*"PhotoCampaignSelectedUsrSvtId2024"*/);
    byte_4A56BB3 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10618/*"PhotoCampaignSelectedUsrSvtId2024"*/, v3, 0LL);
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
  char v12; // w8
  UILabel_o *v13; // x21
  __int64 *v14; // x8
  const MethodInfo *v15; // x2

  if ( (byte_4A56BBF & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_7109/*"HEADER_MSG_PHOTO_SERVANT"*/);
    sub_1B885B0(&StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A56BBF = 1;
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
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17664/*"button_select_unreg"*/ : &StringLiteral_17663/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0LL);
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
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17649/*"button_alllock_reg"*/ : &StringLiteral_17650/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0LL);
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
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17647/*"button_allchoice_reg"*/ : &StringLiteral_17648/*"button_allchoice_unreg"*/);
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
LABEL_51:
      sub_1B8880C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17661/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17662/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7109/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v12 = 0;
        goto LABEL_48;
      case 1:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v14, 0LL);
        if ( !v13 )
          goto LABEL_51;
        UILabel__set_text(v13, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v12 = 1;
LABEL_48:
        *((_BYTE *)&normalTabButton[15].fields + 4) = v12;
LABEL_49:
        PhotoCampaignListViewManager__UpdateDisplayState(
          (PhotoCampaignListViewManager_o *)normalTabButton,
          modeKind == 3,
          v10);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        PhotoCampaignListViewManager__SetMode_31559208((PhotoCampaignListViewManager_o *)normalTabButton, 2, v15);
        break;
      default:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        goto LABEL_49;
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
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  System_Int64_array *v9; // x1
  System_Int64_array *v10; // x2
  bool v11; // w4
  bool v12; // w5
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A56BC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignComponent_EndStatusSync__);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A56BC0 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v14 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_21;
    if ( PhotoCampaignListViewManager__GetSwapChoiceList(photoCampaignManager, &choiceList, &v14, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1B88554(&this->fields.requestCallback, callback);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v13,
                                                                 (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v10 = v14;
        v9 = choiceList;
        v12 = 1;
        v11 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B8880C(photoCampaignManager, callback);
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
      sub_1B88554(&this->fields.requestCallback, callback);
      v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v8,
                                                                 (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v10 = unlockList;
        v9 = lockList;
        v11 = 1;
        v12 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v9, v10, 0, v11, v12, 0LL);
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
    sub_1B8880C(photoCampaignManager, method);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C8014;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C7FCC;
}


System_IAsyncResult_o *__fastcall PhotoCampaignComponent_RequestCallbackFunc__BeginInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A56BC2 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A56BC2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__Invoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4A56BC3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__);
    byte_4A56BC3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1B88554(&this->fields.__9__1, _9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass39_0___OnClickServant_b__1(
        PhotoCampaignComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  PhotoCampaignComponent__PushRequest(this->fields.__4__this, this->fields.item, v2);
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
  Il2CppObject *_4__this; // x23
  PhotoCampaignListViewManager_o *klass; // x22
  PhotoCampaignListViewManager_CallbackFunc_o *v12; // x24
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct PhotoCampaignComponent_o *v15; // x21
  int32_t photoType; // w8
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v19; // q1
  int64_t v20; // x0
  const MethodInfo *v21; // x3
  MyRoomControl_o *myRoomControl; // x21
  System_Action_int__int__o *v23; // x22
  System_Action_o *_9__2; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-60h]

  if ( (byte_4A56BC4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickServant__);
    sub_1B885B0(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__);
    sub_1B885B0(&Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__);
    sub_1B885B0(&PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo);
    byte_4A56BC4 = 1;
  }
  v7 = sub_1B887FC(PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 24) = this;
  v8 = sub_1B88554(v7 + 24, this);
  *(_DWORD *)(v7 + 16) = imageLimitCount;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  klass = (PhotoCampaignListViewManager_o *)_4__this[4].klass;
  v12 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B887FC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v12,
    _4__this,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v13);
  if ( !klass )
    goto LABEL_20;
  klass->fields.callbackFunc = v12;
  sub_1B88554(&klass->fields.callbackFunc, v12);
  PhotoCampaignListViewManager__SetMode_31559208(klass, 2, v14);
  if ( !result )
    return;
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_20;
  photoType = v15->fields.photoType;
  if ( photoType == 1 )
  {
    myRoomControl = v15->fields.myRoomControl;
    v23 = (System_Action_int__int__o *)sub_1B887FC(System_Action_int__int__TypeInfo);
    System_Action_int__int____ctor(
      v23,
      (Il2CppObject *)v7,
      Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__,
      0LL);
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      v8 = sub_1B88554(&this->fields.__9__2, _9__2);
    }
    if ( myRoomControl )
    {
      MyRoomControl__OpenMasterEquipSettingDialog(myRoomControl, v23, _9__2, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( photoType )
    return;
  item = this->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
LABEL_20:
    sub_1B8880C(v8, v9);
  v19 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v25 = v26;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
  PhotoCampaignComponent__OnClickDecide(v15, v20, *(_DWORD *)(v7 + 16), v21);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___RecursiveOpenSelectImageLimitDialog_b__2(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(this->fields.__4__this, this->fields.item, v2);
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
  PhotoCampaignComponent_o *_4__this; // x20
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  const MethodInfo *v13; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4A56BC5 & 1) == 0 )
  {
    this = (PhotoCampaignComponent___c__DisplayClass40_1_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A56BC5 = 1;
  }
  CS___8__locals1 = v6->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (_4__this->fields.selectedMasterEquipId = equipId,
        _4__this->fields.selectedMasterGenderType = genderType,
        (item = CS___8__locals1->fields.item) == 0LL)
    || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
  {
    sub_1B8880C(this, *(_QWORD *)&equipId);
  }
  v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v14, 0LL);
  PhotoCampaignComponent__OnClickDecide(_4__this, v12, v6->fields.imageLimitCount, v13);
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
  const MethodInfo *v2; // x2
  PhotoCampaignComponent_o *_4__this; // x0
  struct PhotoCampaignComponent_o *v5; // x8
  struct PhotoCampaignComponent_o *v6; // x8
  Il2CppObject *v7; // x20
  PhotoCampaignListViewManager_o *klass; // x19
  PhotoCampaignListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4A56BC6 & 1) == 0 )
  {
    sub_1B885B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignComponent_OnClickServant__);
    sub_1B885B0(&StringLiteral_3528/*"CLICK_BACK"*/);
    byte_4A56BC6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    PhotoCampaignComponent__Init(_4__this, method);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = (PhotoCampaignComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)_4__this,
                                               0LL);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
        v5 = this->fields.__4__this;
        if ( v5 )
        {
          _4__this = (PhotoCampaignComponent_o *)v5->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3528/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1B8880C(_4__this, method);
  }
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_18;
    _4__this = (PhotoCampaignComponent_o *)v6->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v7 = (Il2CppObject *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_18;
  klass = (PhotoCampaignListViewManager_o *)v7[4].klass;
  v9 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B887FC(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v10);
  if ( !klass )
    goto LABEL_18;
  klass->fields.callbackFunc = v9;
  sub_1B88554(&klass->fields.callbackFunc, v9);
  PhotoCampaignListViewManager__SetMode_31559208(klass, 2, v11);
}