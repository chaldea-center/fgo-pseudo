void __fastcall PhotoCampaignComponent___ctor(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PhotoCampaignComponent__CancelPhotoCampaignWindow(
        PhotoCampaignComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PhotoCampaignComponent_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4BB000A & 1) == 0 )
  {
    sub_1C13D24(&Method_PhotoCampaignComponent_EndCancelButton__, callback);
    sub_1C13D24(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v5);
    byte_4BB000A = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1C13CC8(&this->fields.cancelCallback);
  v6 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1C13F70(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    v7);
  PhotoCampaignComponent__StatusRequest(this, v6, v8);
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
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4BB0010 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C13D24(&Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__, v9);
    sub_1C13D24(&PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo, v10);
    byte_4BB0010 = 1;
  }
  v11 = sub_1C13F70(PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_1C13CC8(v11 + 24),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v11,
          Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1C13F80(v12, v13);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
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
  PhotoCampaignListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4BB000B & 1) == 0 )
  {
    sub_1C13D24(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickServant__, v5);
    byte_4BB000B = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v7 = this->fields.photoCampaignManager,
          v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C13F70(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            v9),
          !v7) )
    {
LABEL_11:
      sub_1C13F80(photoCampaignManager, isRequest);
    }
    v7->fields.callbackFunc = v8;
    sub_1C13CC8(&v7->fields.callbackFunc);
    PhotoCampaignListViewManager__SetMode_32572848(v7, 2, v10);
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
      sub_1C13F80(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32572848(photoCampaignManager, 2, v5);
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
      sub_1C13F80(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32572848(photoCampaignManager, 2, v5);
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
      sub_1C13F80(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32572848(photoCampaignManager, 2, v5);
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
      sub_1C13F80(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32572848(photoCampaignManager, 2, v5);
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
  PhotoCampaignListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4BB000F & 1) == 0 )
  {
    sub_1C13D24(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickServant__, v4);
    byte_4BB000F = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (photoCampaignManager = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(photoCampaignManager, this->fields.usrSvtId, v6),
        v7 = this->fields.photoCampaignManager,
        v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C13F70(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v9),
        !v7) )
  {
    sub_1C13F80(photoCampaignManager, result);
  }
  v7->fields.callbackFunc = v8;
  sub_1C13CC8(&v7->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32572848(v7, 2, v10);
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
    sub_1C13CC8(p_requestCallback);
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
  __int64 v2; // x1
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v5; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB0008 & 1) == 0 )
  {
    sub_1C13D24(&string_TypeInfo, method);
    sub_1C13D24(&StringLiteral_10804/*"Persist"*/, v2);
    byte_4BB0008 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10804/*"Persist"*/,
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


void __fastcall PhotoCampaignComponent__Init(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4BB0006 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_7273/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, v3);
    byte_4BB0006 = 1;
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
                                                             (System_String_o *)StringLiteral_7273/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/,
                                                             0LL);
  if ( !infoLb )
LABEL_8:
    sub_1C13F80(photoCampaignManager, method);
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
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4BB0013 & 1) == 0 )
  {
    sub_1C13D24(&Method_PhotoCampaignComponent_EndClickTabChoice__, method);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__, v3);
    sub_1C13D24(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4BB0013 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1C13F70(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          v10);
        PhotoCampaignComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1C13F70(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabChoice__,
        v13);
      PhotoCampaignComponent__StatusRequest(this, v12, v14);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 2, v7);
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
    sub_1C13F80(0LL, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4BB0012 & 1) == 0 )
  {
    sub_1C13D24(&Method_PhotoCampaignComponent_EndClickTabLock__, method);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickLockTabButton__, v3);
    sub_1C13D24(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4BB0012 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1C13F70(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          v10);
        PhotoCampaignComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1C13F70(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabLock__,
        v13);
      PhotoCampaignComponent__StatusRequest(this, v12, v14);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 1, v7);
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
  PhotoCampaignComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BB0011 & 1) == 0 )
  {
    sub_1C13D24(&Method_PhotoCampaignComponent_EndClickTabNormal__, method);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickNormalTabButton__, v3);
    sub_1C13D24(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4BB0011 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1C13F70(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabNormal__,
      v8);
    PhotoCampaignComponent__StatusRequest(this, v7, v9);
  }
}


void __fastcall PhotoCampaignComponent__OnClickPushTabButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BB0014 & 1) == 0 )
  {
    sub_1C13D24(&Method_PhotoCampaignComponent_EndClickTabPush__, method);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickPushTabButton__, v3);
    sub_1C13D24(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4BB0014 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1C13F70(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabPush__,
      v8);
    PhotoCampaignComponent__StatusRequest(this, v7, v9);
  }
}


void __fastcall PhotoCampaignComponent__OnClickScaleChange(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BB0017 & 1) == 0 )
  {
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickScaleChange__, method);
    byte_4BB0017 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_1C13F80(0LL, v5);
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
  __int64 v35; // x8
  __int128 v36; // q1
  int32_t tabModeKind; // w8
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  int32_t v40; // w1
  UserServantEntity_o *userSvtEntity; // x21
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4BB000C & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1C13D24(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_1C13D24(&DataManager_TypeInfo, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1C13D24(&LocalizationManager_TypeInfo, v14);
    sub_1C13D24(&object___TypeInfo, v15);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1C13D24(&Method_PhotoCampaignComponent_CloseSvtDetail__, v18);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickServant__, v19);
    sub_1C13D24(&Rarity_TypeInfo, v20);
    sub_1C13D24(&ServantStatusDialog_ResultDelegate_TypeInfo, v21);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1C13D24(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__, v23);
    sub_1C13D24(&PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo, v24);
    sub_1C13D24(&StringLiteral_12091/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v25);
    sub_1C13D24(&StringLiteral_12089/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v26);
    sub_1C13D24(&StringLiteral_12090/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v27);
    sub_1C13D24(&StringLiteral_12092/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v28);
    byte_4BB000C = 1;
  }
  v29 = (Il2CppObject *)sub_1C13F70(PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_102;
  v29[1].klass = (Il2CppClass *)this;
  sub_1C13CC8(&v29[1]);
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
  photoCampaignManager = sub_1C13CC8(&v29[1].monitor);
  if ( !v29[1].monitor )
    goto LABEL_102;
  v35 = *((_QWORD *)v29[1].monitor + 14);
  if ( !v35 )
    goto LABEL_102;
  v36 = *(_OWORD *)(v35 + 32);
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)(v35 + 16);
  *(_OWORD *)&v91.fields.fakeValue = v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v90 = v91;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v90, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v42 = (CommonUI_o *)photoCampaignManager;
      v43 = (ServantStatusDialog_ResultDelegate_o *)sub_1C13F70(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v43,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v42 )
      {
        CommonUI__OpenServantStatusDialog_31081524(v42, 0, userSvtEntity, v43, 0, 0LL);
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
    v44 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickServant__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C13D08(v44, v44[4]);
    v40 = 0;
    goto LABEL_44;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*p_monitor )
      goto LABEL_102;
    (*p_monitor)->fields.isSwapLock ^= 1u;
    v38 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickServant__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C13D08(v38, v38[4]);
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
        v45 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
          v45 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickServant__);
        v39 = (System_Reflection_MethodBase_o *)sub_1C13D08(v45, v45[4]);
LABEL_43:
        v40 = 2;
LABEL_44:
        OverwriteAssetSoundName__PlaySystemSe(v39, v40, 0, 0LL);
LABEL_45:
        v48 = this->fields.photoCampaignManager;
        v49 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C13F70(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
        v51 = (int)Method_PhotoCampaignComponent_OnClickServant__;
        goto LABEL_46;
      }
      photoCampaignManager = (__int64)*p_monitor;
      if ( !*p_monitor )
        goto LABEL_102;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v31) )
      goto LABEL_33;
    v56 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v56 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickServant__);
    v57 = (System_Reflection_MethodBase_o *)sub_1C13D08(v56, v56[4]);
    OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0LL);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !photoCampaignManager )
      goto LABEL_102;
    v59 = *(_QWORD *)(photoCampaignManager + 120);
    if ( !v59 )
    {
LABEL_58:
      PhotoCampaignComponent__PushRequest(this, *p_monitor, v58);
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
    if ( v59 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v89, 0LL) )
      goto LABEL_58;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
               v59,
               (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_102;
    v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v92.fields.currentCryptoKey = klass;
    *(_QWORD *)&v92.fields.fakeValue = monitor;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v92, 0LL);
    if ( !v64 )
      goto LABEL_102;
    v67 = DataMasterBase_object__object__int___GetEntity(
            v64,
            photoCampaignManager,
            (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
    v70 = (System_Object_array *)sub_1C13DCC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v70 )
LABEL_102:
      sub_1C13F80(photoCampaignManager, v31);
    v72 = (Il2CppObject *)photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_1C13E60(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
    {
      if ( !v70->max_length )
        goto LABEL_103;
      v70->m_Items[0] = v72;
      photoCampaignManager = sub_1C13CC8(v70->m_Items);
      if ( !v67 )
        goto LABEL_102;
      photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v67, 0LL);
      v73 = (Il2CppObject *)photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_1C13E60(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
      {
        if ( v70->max_length <= 1 )
          goto LABEL_103;
        v70->m_Items[1] = v73;
        sub_1C13CC8(&v70->m_Items[1]);
        v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                0LL);
        photoCampaignManager = (__int64)ServantEntity__getName((ServantEntity_o *)v67, v74, -1, 0LL);
        v75 = (Il2CppObject *)photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_1C13E60(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
        {
          if ( v70->max_length <= 2 )
            goto LABEL_103;
          v70->m_Items[2] = v75;
          photoCampaignManager = sub_1C13CC8(&v70->m_Items[2]);
          if ( !*p_monitor )
            goto LABEL_102;
          photoCampaignManager = (__int64)(*p_monitor)->fields.userSvtEntity;
          if ( !photoCampaignManager )
            goto LABEL_102;
          v76 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
          photoCampaignManager = (__int64)Rarity__getRarityType(v76, 0LL);
          v77 = (Il2CppObject *)photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_1C13E60(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
          {
            if ( v70->max_length <= 3 )
              goto LABEL_103;
            v70->m_Items[3] = v77;
            photoCampaignManager = sub_1C13CC8(&v70->m_Items[3]);
            if ( !*p_monitor )
              goto LABEL_102;
            photoCampaignManager = (__int64)(*p_monitor)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_102;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
            v78 = (Il2CppObject *)photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_1C13E60(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
            {
              if ( v70->max_length <= 4 )
                goto LABEL_103;
              v70->m_Items[4] = v78;
              photoCampaignManager = sub_1C13CC8(&v70->m_Items[4]);
              v79 = *p_monitor;
              if ( !*p_monitor )
                goto LABEL_102;
              v80 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v79->fields.userSvtEntity;
              if ( !v80 )
                goto LABEL_102;
              servantEntity = v79->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v80[6], 0LL);
              if ( !servantEntity )
                goto LABEL_102;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 0LL);
              v82 = (Il2CppObject *)photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_1C13E60(photoCampaignManager, v70->obj.klass->_1.element_class)) != 0 )
              {
                if ( v70->max_length > 5 )
                {
                  v70->m_Items[5] = v82;
                  sub_1C13CC8(&v70->m_Items[5]);
                  v83 = System_String__Format_62982452(v69, v70, 0LL);
                  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12090/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v87 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C13F70(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v87,
                    v29,
                    Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__,
                    0LL);
                  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31070492(
                      (CommonUI_o *)Instance,
                      v68,
                      v83,
                      v84,
                      v85,
                      v87,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    goto LABEL_45;
                  }
                  goto LABEL_102;
                }
LABEL_103:
                sub_1C13F88(photoCampaignManager, v31);
              }
            }
          }
        }
      }
    }
    v88 = sub_1C13FA4();
    sub_1C13E4C(v88, 0LL);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v31) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v53 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickServant__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C13D08(v53, v53[4]);
    if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0, 0LL);
      PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(this, *p_monitor, v62);
      return;
    }
    goto LABEL_43;
  }
  v46 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
    v46 = (_QWORD *)sub_1C13D3C(Method_PhotoCampaignComponent_OnClickServant__);
  v47 = (System_Reflection_MethodBase_o *)sub_1C13D08(v46, v46[4]);
  OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0, 0LL);
  v48 = this->fields.photoCampaignManager;
  v49 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C13F70(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v51 = (int)Method_PhotoCampaignComponent_OnClickServant__;
LABEL_46:
  v54 = v49;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v49, (Il2CppObject *)this, v51, v50);
  if ( !v48 )
    goto LABEL_102;
  v48->fields.callbackFunc = v54;
  sub_1C13CC8(&v48->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32572848(v48, 2, v55);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__Open(
        PhotoCampaignComponent_o *this,
        int32_t type,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int64_t gameObject; // x0
  __int64 v11; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  UnityEngine_GameObject_o *v13; // x20
  PhotoCampaignComponent_o *v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2

  if ( (byte_4BB0007 & 1) == 0 )
  {
    sub_1C13D24(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickServant__, v9);
    byte_4BB0007 = 1;
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
  sub_1C13CC8(&this->fields.cancelCallback);
  gameObject = (int64_t)this->fields.titleInfo;
  this->fields.photoType = type;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_38289852((TitleInfoControl_o *)gameObject, 1, 61, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_12;
  gameObject = (int64_t)myRoomControl->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)gameObject, 3, 1, 0LL);
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
        v19 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C13F70(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v20),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_1C13F80(gameObject, v11);
  }
  photoCampaignManager->fields.callbackFunc = v19;
  sub_1C13CC8(&photoCampaignManager->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32572848(photoCampaignManager, 2, v21);
  this->fields.state = 2;
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

  if ( (byte_4BB000E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1C13D24(&NetworkManager_TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1C13D24(&Method_PhotoCampaignComponent_EndPushRequest__, v10);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4BB000E = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v53, 0LL);
  if ( !v17 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v15->fields.assetsInfo;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v54, 0LL);
  if ( !v30 )
LABEL_19:
    sub_1C13F80(limitCountSupport, v14);
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


void __fastcall PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(
        PhotoCampaignComponent_o *this,
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

  if ( (byte_4BB000D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_bool__int__TypeInfo, item);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1C13D24(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__, v6);
    sub_1C13D24(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, v7);
    byte_4BB000D = 1;
  }
  v8 = (Il2CppObject *)sub_1C13F70(PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  v8[1].klass = (Il2CppClass *)this;
  sub_1C13CC8(&v8[1]);
  v8[1].monitor = item;
  v9 = sub_1C13CC8(&v8[1].monitor);
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
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v17, 0LL);
  v16 = (System_Action_bool__int__o *)sub_1C13F70(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v16,
    v8,
    Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__,
    0LL);
  if ( !myRoomControl )
LABEL_10:
    sub_1C13F80(v9, v10);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v15, v16, -1, 0LL);
}


void __fastcall PhotoCampaignComponent__SetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = usrSvtId;
  if ( (byte_4BB0009 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_10804/*"Persist"*/, usrSvtId);
    byte_4BB0009 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10804/*"Persist"*/, v3, 0LL);
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

  if ( (byte_4BB0015 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1C13D24(&StringLiteral_11822/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/, v5);
    sub_1C13D24(&StringLiteral_17931/*"button_allchoice_reg"*/, v6);
    sub_1C13D24(&StringLiteral_17932/*"button_allchoice_unreg"*/, v7);
    sub_1C13D24(&StringLiteral_17917/*"buffStateNoticeName"*/, v8);
    sub_1C13D24(&StringLiteral_17920/*"bufferSize"*/, v9);
    sub_1C13D24(&StringLiteral_11820/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/, v10);
    sub_1C13D24(&StringLiteral_7273/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, v11);
    sub_1C13D24(&StringLiteral_11821/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/, v12);
    sub_1C13D24(&StringLiteral_17933/*"button_alllock_reg"*/, v13);
    sub_1C13D24(&StringLiteral_17934/*"button_alllock_unreg"*/, v14);
    sub_1C13D24(&StringLiteral_17919/*"buffer is null"*/, v15);
    sub_1C13D24(&StringLiteral_17918/*"buffer"*/, v16);
    byte_4BB0015 = 1;
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
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17934/*"button_alllock_unreg"*/ : &StringLiteral_17933/*"button_alllock_reg"*/);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17919/*"buffer is null"*/ : &StringLiteral_17920/*"bufferSize"*/);
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
    v20 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17917/*"buffStateNoticeName"*/ : &StringLiteral_17918/*"buffer"*/);
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
      sub_1C13F80(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v21 = &StringLiteral_17931/*"button_allchoice_reg"*/;
    else
      v21 = &StringLiteral_17932/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v21, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7273/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/,
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
        v26 = &StringLiteral_11821/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/;
        goto LABEL_45;
      case 2:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11820/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/;
        goto LABEL_45;
      case 3:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11822/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/;
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
        PhotoCampaignListViewManager__SetMode_32572848((PhotoCampaignListViewManager_o *)normalTabButton, 2, v27);
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

  if ( (byte_4BB0016 & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&Method_PhotoCampaignComponent_EndStatusSync__, v7);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4BB0016 = 1;
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
      sub_1C13CC8(&this->fields.requestCallback);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v16,
                                                                 (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v13 = v17;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C13F80(photoCampaignManager, callback);
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
      sub_1C13CC8(&this->fields.requestCallback);
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v11,
                                                                 (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
    sub_1C13F80(photoCampaignManager, method);
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
  sub_1C13CC8(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A4EC0C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A4EBC4;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4BB0018 & 1) == 0 )
  {
    sub_1C13D24(&bool_TypeInfo, isRequest);
    byte_4BB0018 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent___c__DisplayClass39_0___OnClickServant_b__0(
        PhotoCampaignComponent___c__DisplayClass39_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4BB0019 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__, v6);
    byte_4BB0019 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1C13CC8(&this->fields.__9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_31071160(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1C13F80(Instance, v8);
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
    sub_1C13F80(this, method);
  PhotoCampaignComponent__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___ctor(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___RecursiveOpenSelectImageLimitDialog_b__0(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        bool result,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  Il2CppObject *_4__this; // x23
  PhotoCampaignListViewManager_o *klass; // x22
  PhotoCampaignListViewManager_CallbackFunc_o *v19; // x24
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  struct PhotoCampaignComponent_o *v22; // x21
  int32_t photoType; // w8
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v26; // q1
  int64_t v27; // x0
  const MethodInfo *v28; // x3
  MyRoomControl_o *myRoomControl; // x21
  System_Action_int__int__o *v30; // x22
  System_Action_o *_9__2; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-60h]

  if ( (byte_4BB001A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_int__int__TypeInfo, result);
    sub_1C13D24(&System_Action_TypeInfo, v7);
    sub_1C13D24(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickServant__, v10);
    sub_1C13D24(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__, v11);
    sub_1C13D24(&Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__, v12);
    sub_1C13D24(&PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo, v13);
    byte_4BB001A = 1;
  }
  v14 = sub_1C13F70(PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_20;
  *(_QWORD *)(v14 + 24) = this;
  v15 = sub_1C13CC8(v14 + 24);
  *(_DWORD *)(v14 + 16) = imageLimitCount;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  klass = (PhotoCampaignListViewManager_o *)_4__this[4].klass;
  v19 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C13F70(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v19,
    _4__this,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v20);
  if ( !klass )
    goto LABEL_20;
  klass->fields.callbackFunc = v19;
  sub_1C13CC8(&klass->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32572848(klass, 2, v21);
  if ( !result )
    return;
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_20;
  photoType = v22->fields.photoType;
  if ( photoType == 1 )
  {
    myRoomControl = v22->fields.myRoomControl;
    v30 = (System_Action_int__int__o *)sub_1C13F70(System_Action_int__int__TypeInfo);
    System_Action_int__int____ctor(
      v30,
      (Il2CppObject *)v14,
      Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__,
      0LL);
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      v15 = sub_1C13CC8(&this->fields.__9__2);
    }
    if ( myRoomControl )
    {
      MyRoomControl__OpenMasterEquipSettingDialog(myRoomControl, v30, _9__2, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( photoType )
    return;
  item = this->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
LABEL_20:
    sub_1C13F80(v15, v16);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v33.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v33;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v32, 0LL);
  PhotoCampaignComponent__OnClickDecide(v22, v27, *(_DWORD *)(v14 + 16), v28);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___RecursiveOpenSelectImageLimitDialog_b__2(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C13F80(this, method);
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
  if ( (byte_4BB001B & 1) == 0 )
  {
    this = (PhotoCampaignComponent___c__DisplayClass40_1_o *)sub_1C13D24(
                                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                               *(_QWORD *)&equipId);
    byte_4BB001B = 1;
  }
  CS___8__locals1 = v6->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (_4__this->fields.selectedMasterEquipId = equipId,
        _4__this->fields.selectedMasterGenderType = genderType,
        (item = CS___8__locals1->fields.item) == 0LL)
    || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
  {
    sub_1C13F80(this, *(_QWORD *)&equipId);
  }
  v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v14, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  PhotoCampaignComponent_o *_4__this; // x0
  struct PhotoCampaignComponent_o *v7; // x8
  struct PhotoCampaignComponent_o *v8; // x8
  Il2CppObject *v9; // x20
  PhotoCampaignListViewManager_o *klass; // x19
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4BB001C & 1) == 0 )
  {
    sub_1C13D24(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_PhotoCampaignComponent_OnClickServant__, v4);
    sub_1C13D24(&StringLiteral_3566/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, v5);
    byte_4BB001C = 1;
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
        v7 = this->fields.__4__this;
        if ( v7 )
        {
          _4__this = (PhotoCampaignComponent_o *)v7->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3566/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1C13F80(_4__this, method);
  }
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_18;
    _4__this = (PhotoCampaignComponent_o *)v8->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v9 = (Il2CppObject *)this->fields.__4__this;
  if ( !v9 )
    goto LABEL_18;
  klass = (PhotoCampaignListViewManager_o *)v9[4].klass;
  v11 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1C13F70(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v11,
    v9,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v12);
  if ( !klass )
    goto LABEL_18;
  klass->fields.callbackFunc = v11;
  sub_1C13CC8(&klass->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32572848(klass, 2, v13);
}