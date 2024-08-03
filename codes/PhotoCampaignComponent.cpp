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
  __int64 v6; // x1
  __int64 v7; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49F7EF1 & 1) == 0 )
  {
    sub_1B640C8(&Method_PhotoCampaignComponent_EndCancelButton__, callback);
    sub_1B640C8(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v5);
    byte_49F7EF1 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1B6406C(&this->fields.cancelCallback);
  v8 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                         PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                         v6,
                                                         v7);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    v9);
  PhotoCampaignComponent__StatusRequest(this, v8, v10);
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
  Il2CppObject *Instance; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20

  if ( (byte_49F7EF7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__, v9);
    sub_1B640C8(&PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo, v10);
    byte_49F7EF7 = 1;
  }
  v11 = sub_1B64314(PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo, isDecide, isNeedSort);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_1B6406C(v11 + 24),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v11,
          Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v12);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0LL);
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_49F7EF2 & 1) == 0 )
  {
    sub_1B640C8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickServant__, v5);
    byte_49F7EF2 = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v7 = this->fields.photoCampaignManager,
          v10 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                 PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                                 v8,
                                                                 v9),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            v11),
          !v7) )
    {
LABEL_11:
      sub_1B64324(photoCampaignManager);
    }
    v7->fields.callbackFunc = v10;
    sub_1B6406C(&v7->fields.callbackFunc);
    PhotoCampaignListViewManager__SetMode_31300968(v7, 2, v12);
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
      sub_1B64324(photoCampaignManager);
    }
    PhotoCampaignListViewManager__SetMode_31300968(photoCampaignManager, 2, v5);
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
      sub_1B64324(photoCampaignManager);
    }
    PhotoCampaignListViewManager__SetMode_31300968(photoCampaignManager, 2, v5);
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
      sub_1B64324(photoCampaignManager);
    }
    PhotoCampaignListViewManager__SetMode_31300968(photoCampaignManager, 2, v5);
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
      sub_1B64324(photoCampaignManager);
    }
    PhotoCampaignListViewManager__SetMode_31300968(photoCampaignManager, 2, v5);
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49F7EF6 & 1) == 0 )
  {
    sub_1B640C8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickServant__, v4);
    byte_49F7EF6 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (photoCampaignManager = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(photoCampaignManager, this->fields.usrSvtId, v6),
        v7 = this->fields.photoCampaignManager,
        v10 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v11),
        !v7) )
  {
    sub_1B64324(photoCampaignManager);
  }
  v7->fields.callbackFunc = v10;
  sub_1B6406C(&v7->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_31300968(v7, 2, v12);
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
    sub_1B6406C(p_requestCallback);
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

  if ( (byte_49F7EEF & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_10568/*"PhotoCampaignSelectedUsrSvtId2024"*/, v2);
    byte_49F7EEF = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10568/*"PhotoCampaignSelectedUsrSvtId2024"*/,
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

  if ( (byte_49F7EED & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_7081/*"HEADER_MSG_PHOTO_SERVANT"*/, v3);
    byte_49F7EED = 1;
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
                                                             (System_String_o *)StringLiteral_7081/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0LL);
  if ( !infoLb )
LABEL_8:
    sub_1B64324(photoCampaignManager);
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F7EFA & 1) == 0 )
  {
    sub_1B640C8(&Method_PhotoCampaignComponent_EndClickTabChoice__, method);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__, v3);
    sub_1B640C8(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F7EFA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v10 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                                PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          v11);
        PhotoCampaignComponent__StatusRequest(this, v10, v12);
        return;
      }
      v13 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                              PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabChoice__,
        v14);
      PhotoCampaignComponent__StatusRequest(this, v13, v15);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 2, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__OnClickDecide(
        PhotoCampaignComponent_o *this,
        int64_t userSvtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  MyRoomControl_o *myRoomControl; // x0

  this->fields.selectedUsrSvtId = userSvtId;
  this->fields.state = 4;
  this->fields.selectedImageLimitCount = limitCount;
  PhotoCampaignComponent__SetLatestSelectedUsrSvtId(this, userSvtId, *(const MethodInfo **)&limitCount);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1B64324(0LL);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F7EF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_PhotoCampaignComponent_EndClickTabLock__, method);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickLockTabButton__, v3);
    sub_1B640C8(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F7EF9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v10 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                                PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          v11);
        PhotoCampaignComponent__StatusRequest(this, v10, v12);
        return;
      }
      v13 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                              PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                              v7,
                                                              v8);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabLock__,
        v14);
      PhotoCampaignComponent__StatusRequest(this, v13, v15);
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F7EF8 & 1) == 0 )
  {
    sub_1B640C8(&Method_PhotoCampaignComponent_EndClickTabNormal__, method);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickNormalTabButton__, v3);
    sub_1B640C8(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F7EF8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                           PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabNormal__,
      v10);
    PhotoCampaignComponent__StatusRequest(this, v9, v11);
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F7EFB & 1) == 0 )
  {
    sub_1B640C8(&Method_PhotoCampaignComponent_EndClickTabPush__, method);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickPushTabButton__, v3);
    sub_1B640C8(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F7EFB = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                           PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabPush__,
      v10);
    PhotoCampaignComponent__StatusRequest(this, v9, v11);
  }
}


void __fastcall PhotoCampaignComponent__OnClickScaleChange(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49F7EFE & 1) == 0 )
  {
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickScaleChange__, method);
    byte_49F7EFE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_1B64324(0LL);
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
  const MethodInfo *v31; // x2
  PhotoCampaignListViewItem_o *Item; // x1
  PhotoCampaignListViewItem_o **p_monitor; // x21
  __int64 v34; // x8
  __int128 v35; // q1
  const MethodInfo *v36; // x1
  int32_t tabModeKind; // w8
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  int32_t v40; // w1
  __int64 v41; // x1
  __int64 v42; // x2
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v44; // x20
  ServantStatusDialog_ResultDelegate_o *v45; // x22
  _QWORD *v46; // x0
  _QWORD *v47; // x0
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  struct PhotoCampaignListViewManager_o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  PhotoCampaignListViewManager_CallbackFunc_o *v53; // x0
  const MethodInfo *v54; // x3
  intptr_t v55; // w2
  int64_t selectedUsrSvtId; // x20
  _QWORD *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  struct PhotoCampaignListViewManager_CallbackFunc_o *v60; // x21
  const MethodInfo *v61; // x2
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  const MethodInfo *v64; // x2
  int64_t v65; // x22
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  const MethodInfo *v68; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v73; // x26
  System_String_o *v74; // x22
  System_String_o *v75; // x23
  System_Object_array *v76; // x24
  int32_t Rarity; // w27
  __int64 v78; // x1
  Il2CppObject *v79; // x27
  Il2CppObject *v80; // x27
  int32_t v81; // w0
  Il2CppObject *v82; // x25
  int32_t v83; // w0
  Il2CppObject *v84; // x25
  Il2CppObject *v85; // x25
  PhotoCampaignListViewItem_o *v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x9
  ServantEntity_o *servantEntity; // x21
  Il2CppObject *v89; // x21
  System_String_o *v90; // x21
  System_String_o *v91; // x23
  System_String_o *v92; // x24
  Il2CppObject *Instance; // x25
  __int64 v94; // x1
  __int64 v95; // x2
  CommonConfirmDialog_ClickDelegate_o *v96; // x26
  __int64 v97; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_49F7EF3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&object___TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B640C8(&Method_PhotoCampaignComponent_CloseSvtDetail__, v18);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickServant__, v19);
    sub_1B640C8(&Rarity_TypeInfo, v20);
    sub_1B640C8(&ServantStatusDialog_ResultDelegate_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1B640C8(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__, v23);
    sub_1B640C8(&PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v25);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v26);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v27);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v28);
    byte_49F7EF3 = 1;
  }
  v29 = (Il2CppObject *)sub_1B64314(
                          PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo,
                          *(_QWORD *)&kind,
                          *(_QWORD *)&n);
  System_Object___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_102;
  v29[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v29[1]);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_102;
    Item = PhotoCampaignListViewManager__GetItem((PhotoCampaignListViewManager_o *)photoCampaignManager, n, v31);
  }
  v29[1].monitor = Item;
  p_monitor = (PhotoCampaignListViewItem_o **)&v29[1].monitor;
  photoCampaignManager = sub_1B6406C(&v29[1].monitor);
  if ( !v29[1].monitor )
    goto LABEL_102;
  v34 = *((_QWORD *)v29[1].monitor + 14);
  if ( !v34 )
    goto LABEL_102;
  v35 = *(_OWORD *)(v34 + 32);
  *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)(v34 + 16);
  *(_OWORD *)&v100.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v99 = v100;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v99, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v44 = (CommonUI_o *)photoCampaignManager;
      v45 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(ServantStatusDialog_ResultDelegate_TypeInfo, v41, v42);
      ServantStatusDialog_ResultDelegate___ctor(
        v45,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v44 )
      {
        CommonUI__OpenServantStatusDialog_30355996(v44, 0, userSvtEntity, v45, 0, 0LL);
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
    v46 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickServant__);
    v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v46, v46[4]);
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
      v38 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickServant__);
    v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v38, v38[4]);
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
        v47 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
          v47 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickServant__);
        v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v47, v47[4]);
LABEL_43:
        v40 = 2;
LABEL_44:
        OverwriteAssetSoundName__PlaySystemSe(v39, v40, 0LL);
LABEL_45:
        v50 = this->fields.photoCampaignManager;
        v53 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v58,
                                                               v59);
        v55 = (int)Method_PhotoCampaignComponent_OnClickServant__;
        goto LABEL_46;
      }
      photoCampaignManager = (__int64)*p_monitor;
      if ( !*p_monitor )
        goto LABEL_102;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v36) )
      goto LABEL_33;
    v62 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v62 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickServant__);
    v63 = (System_Reflection_MethodBase_o *)sub_1B640AC(v62, v62[4]);
    OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0LL);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !photoCampaignManager )
      goto LABEL_102;
    v65 = *(_QWORD *)(photoCampaignManager + 120);
    if ( !v65 )
    {
LABEL_58:
      PhotoCampaignComponent__PushRequest(this, *p_monitor, v64);
      goto LABEL_45;
    }
    if ( !*p_monitor )
      goto LABEL_102;
    v66 = (*p_monitor)->fields.userSvtEntity;
    if ( !v66 )
      goto LABEL_102;
    v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
    *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v100.fields.fakeValue = v67;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v98 = v100;
    if ( v65 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v98, 0LL) )
      goto LABEL_58;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
               v65,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_102;
    v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v101.fields.currentCryptoKey = klass;
    *(_QWORD *)&v101.fields.fakeValue = monitor;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v101, 0LL);
    if ( !v70 )
      goto LABEL_102;
    v73 = DataMasterBase_object__object__int___GetEntity(
            v70,
            photoCampaignManager,
            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v76 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v76 )
LABEL_102:
      sub_1B64324(photoCampaignManager);
    v79 = (Il2CppObject *)photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_1B64204(photoCampaignManager, v76->obj.klass->_1.element_class)) != 0 )
    {
      if ( !v76->max_length )
        goto LABEL_103;
      v76->m_Items[0] = v79;
      photoCampaignManager = sub_1B6406C(v76->m_Items);
      if ( !v73 )
        goto LABEL_102;
      photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v73, 0LL);
      v80 = (Il2CppObject *)photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_1B64204(photoCampaignManager, v76->obj.klass->_1.element_class)) != 0 )
      {
        if ( v76->max_length <= 1 )
          goto LABEL_103;
        v76->m_Items[1] = v80;
        sub_1B6406C(&v76->m_Items[1]);
        v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                0LL);
        photoCampaignManager = (__int64)ServantEntity__getName((ServantEntity_o *)v73, v81, -1, 0LL);
        v82 = (Il2CppObject *)photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_1B64204(photoCampaignManager, v76->obj.klass->_1.element_class)) != 0 )
        {
          if ( v76->max_length <= 2 )
            goto LABEL_103;
          v76->m_Items[2] = v82;
          photoCampaignManager = sub_1B6406C(&v76->m_Items[2]);
          if ( !*p_monitor )
            goto LABEL_102;
          photoCampaignManager = (__int64)(*p_monitor)->fields.userSvtEntity;
          if ( !photoCampaignManager )
            goto LABEL_102;
          v83 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
          photoCampaignManager = (__int64)Rarity__getRarityType(v83, 0LL);
          v84 = (Il2CppObject *)photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_1B64204(photoCampaignManager, v76->obj.klass->_1.element_class)) != 0 )
          {
            if ( v76->max_length <= 3 )
              goto LABEL_103;
            v76->m_Items[3] = v84;
            photoCampaignManager = sub_1B6406C(&v76->m_Items[3]);
            if ( !*p_monitor )
              goto LABEL_102;
            photoCampaignManager = (__int64)(*p_monitor)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_102;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
            v85 = (Il2CppObject *)photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_1B64204(photoCampaignManager, v76->obj.klass->_1.element_class)) != 0 )
            {
              if ( v76->max_length <= 4 )
                goto LABEL_103;
              v76->m_Items[4] = v85;
              photoCampaignManager = sub_1B6406C(&v76->m_Items[4]);
              v86 = *p_monitor;
              if ( !*p_monitor )
                goto LABEL_102;
              v87 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v86->fields.userSvtEntity;
              if ( !v87 )
                goto LABEL_102;
              servantEntity = v86->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v87[6], 0LL);
              if ( !servantEntity )
                goto LABEL_102;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 0LL);
              v89 = (Il2CppObject *)photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_1B64204(photoCampaignManager, v76->obj.klass->_1.element_class)) != 0 )
              {
                if ( v76->max_length > 5 )
                {
                  v76->m_Items[5] = v89;
                  sub_1B6406C(&v76->m_Items[5]);
                  v90 = System_String__Format_61389904(v75, v76, 0LL);
                  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v96 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                 v94,
                                                                 v95);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v96,
                    v29,
                    Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__,
                    0LL);
                  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30344968(
                      (CommonUI_o *)Instance,
                      v74,
                      v90,
                      v91,
                      v92,
                      v96,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    goto LABEL_45;
                  }
                  goto LABEL_102;
                }
LABEL_103:
                sub_1B6432C(photoCampaignManager, v78);
              }
            }
          }
        }
      }
    }
    v97 = sub_1B64348();
    sub_1B641F0(v97, 0LL);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v36) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v57 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v57 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickServant__);
    v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v57, v57[4]);
    if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
      PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(this, *p_monitor, v68);
      return;
    }
    goto LABEL_43;
  }
  v48 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
    v48 = (_QWORD *)sub_1B640E0(Method_PhotoCampaignComponent_OnClickServant__);
  v49 = (System_Reflection_MethodBase_o *)sub_1B640AC(v48, v48[4]);
  OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0LL);
  v50 = this->fields.photoCampaignManager;
  v53 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                         v51,
                                                         v52);
  v55 = (int)Method_PhotoCampaignComponent_OnClickServant__;
LABEL_46:
  v60 = v53;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v53, (Il2CppObject *)this, v55, v54);
  if ( !v50 )
    goto LABEL_102;
  v50->fields.callbackFunc = v60;
  sub_1B6406C(&v50->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_31300968(v50, 2, v61);
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
  struct MyRoomControl_o *myRoomControl; // x8
  UnityEngine_GameObject_o *v12; // x20
  PhotoCampaignComponent_o *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  PhotoCampaignListViewManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2

  if ( (byte_49F7EEE & 1) == 0 )
  {
    sub_1B640C8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickServant__, v9);
    byte_49F7EEE = 1;
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
  sub_1B6406C(&this->fields.cancelCallback);
  gameObject = (int64_t)this->fields.titleInfo;
  this->fields.photoType = type;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_36879176((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
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
        v20 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v18,
                                                               v19),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v21),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_1B64324(gameObject);
  }
  photoCampaignManager->fields.callbackFunc = v20;
  sub_1B6406C(&photoCampaignManager->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_31300968(photoCampaignManager, 2, v22);
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
  CommonUI_o *v14; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q0
  struct AssetsInfo_o *assetsInfo; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v24; // x0
  __int128 v25; // q1
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  __int128 v30; // q1
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w26
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w29
  bool IsLock; // w21
  char v37; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct AllocMem_o *allocMem; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct AssetsInfo_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49F7EF5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&Method_PhotoCampaignComponent_EndPushRequest__, v10);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_49F7EF5 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v14 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v14 || !userSvtEntity )
    goto LABEL_19;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v16 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v14->fields.assetsInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = assetsInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  allocMem = v14->fields.allocMem;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.dispLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.iconLimitCount, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v31 )
LABEL_19:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    imageLimitCount,
    v32,
    v33,
    v34,
    v35,
    allocMem == (struct AllocMem_o *)v46,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct AssetsInfo_o *)v48,
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
  _QWORD *monitor; // x8
  __int64 v11; // x8
  __int128 v12; // q1
  MyRoomControl_o *myRoomControl; // x19
  int64_t v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_bool__int__o *v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h]

  if ( (byte_49F7EF4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__int__TypeInfo, item);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1B640C8(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__, v6);
    sub_1B640C8(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, v7);
    byte_49F7EF4 = 1;
  }
  v8 = (Il2CppObject *)sub_1B64314(PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, item, method);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  v8[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v8[1]);
  v8[1].monitor = item;
  v9 = sub_1B6406C(&v8[1].monitor);
  monitor = v8[1].monitor;
  if ( !monitor )
    goto LABEL_10;
  v11 = monitor[14];
  if ( !v11 )
    goto LABEL_10;
  v12 = *(_OWORD *)(v11 + 32);
  myRoomControl = this->fields.myRoomControl;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
  *(_OWORD *)&v19.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v18 = v19;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v18, 0LL);
  v17 = (System_Action_bool__int__o *)sub_1B64314(System_Action_bool__int__TypeInfo, v15, v16);
  System_Action_bool__int____ctor(
    v17,
    v8,
    Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__,
    0LL);
  if ( !myRoomControl )
LABEL_10:
    sub_1B64324(v9);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v14, v17, -1, 0LL);
}


void __fastcall PhotoCampaignComponent__SetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = usrSvtId;
  if ( (byte_49F7EF0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10568/*"PhotoCampaignSelectedUsrSvtId2024"*/, usrSvtId);
    byte_49F7EF0 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10568/*"PhotoCampaignSelectedUsrSvtId2024"*/, v3, 0LL);
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

  if ( (byte_49F7EFC & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B640C8(&StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, v6);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v7);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v8);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v9);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_1B640C8(&StringLiteral_7081/*"HEADER_MSG_PHOTO_SERVANT"*/, v11);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v12);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v13);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v14);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v15);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v16);
    byte_49F7EFC = 1;
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
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17594/*"button_select_unreg"*/ : &StringLiteral_17593/*"button_select_reg"*/);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17579/*"button_alllock_reg"*/ : &StringLiteral_17580/*"button_alllock_unreg"*/);
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
    v20 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17577/*"button_allchoice_reg"*/ : &StringLiteral_17578/*"button_allchoice_unreg"*/);
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
      sub_1B64324(normalTabButton);
    }
    if ( this->fields.tabModeKind == 3 )
      v21 = &StringLiteral_17591/*"button_push_reg"*/;
    else
      v21 = &StringLiteral_17592/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v21, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7081/*"HEADER_MSG_PHOTO_SERVANT"*/,
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
        v26 = &StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
        PhotoCampaignListViewManager__SetMode_31300968((PhotoCampaignListViewManager_o *)normalTabButton, 2, v27);
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
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  __int64 v18; // x1
  __int64 v19; // x2
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int64_array *v21; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F7EFD & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_PhotoCampaignComponent_EndStatusSync__, v7);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_49F7EFD = 1;
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
      sub_1B6406C(&this->fields.requestCallback);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v20,
                                                                 (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v15 = v21;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64324(photoCampaignManager);
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
      sub_1B6406C(&this->fields.requestCallback);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v13,
                                                                 (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
    sub_1B64324(photoCampaignManager);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A5820;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A57D8;
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
  if ( (byte_49F7EFF & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49F7EFF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_49F7F00 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__, v6);
    byte_49F7F00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1B6406C(&this->fields.__9__1);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_30345628(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(Instance);
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
    sub_1B64324(this);
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
  __int64 v17; // x2
  Il2CppObject *_4__this; // x23
  PhotoCampaignListViewManager_o *klass; // x22
  PhotoCampaignListViewManager_CallbackFunc_o *v20; // x24
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct PhotoCampaignComponent_o *v25; // x21
  int32_t photoType; // w8
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v29; // q1
  int64_t v30; // x0
  const MethodInfo *v31; // x3
  MyRoomControl_o *myRoomControl; // x21
  System_Action_int__int__o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_o *_9__2; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-60h]

  if ( (byte_49F7F01 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__int__TypeInfo, result);
    sub_1B640C8(&System_Action_TypeInfo, v7);
    sub_1B640C8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickServant__, v10);
    sub_1B640C8(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__, v11);
    sub_1B640C8(&Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__, v12);
    sub_1B640C8(&PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo, v13);
    byte_49F7F01 = 1;
  }
  v14 = sub_1B64314(PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo, result, *(_QWORD *)&imageLimitCount);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_20;
  *(_QWORD *)(v14 + 24) = this;
  v15 = sub_1B6406C(v14 + 24);
  *(_DWORD *)(v14 + 16) = imageLimitCount;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  klass = (PhotoCampaignListViewManager_o *)_4__this[4].klass;
  v20 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                         v16,
                                                         v17);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v20,
    _4__this,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v21);
  if ( !klass )
    goto LABEL_20;
  klass->fields.callbackFunc = v20;
  sub_1B6406C(&klass->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_31300968(klass, 2, v22);
  if ( !result )
    return;
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_20;
  photoType = v25->fields.photoType;
  if ( photoType == 1 )
  {
    myRoomControl = v25->fields.myRoomControl;
    v33 = (System_Action_int__int__o *)sub_1B64314(System_Action_int__int__TypeInfo, v23, v24);
    System_Action_int__int____ctor(
      v33,
      (Il2CppObject *)v14,
      Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__,
      0LL);
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v34, v35);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      v15 = sub_1B6406C(&this->fields.__9__2);
    }
    if ( myRoomControl )
    {
      MyRoomControl__OpenMasterEquipSettingDialog(myRoomControl, v33, _9__2, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( photoType )
    return;
  item = this->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
LABEL_20:
    sub_1B64324(v15);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v37 = v38;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v37, 0LL);
  PhotoCampaignComponent__OnClickDecide(v25, v30, *(_DWORD *)(v14 + 16), v31);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___RecursiveOpenSelectImageLimitDialog_b__2(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
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
  if ( (byte_49F7F02 & 1) == 0 )
  {
    this = (PhotoCampaignComponent___c__DisplayClass40_1_o *)sub_1B640C8(
                                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                               *(_QWORD *)&equipId);
    byte_49F7F02 = 1;
  }
  CS___8__locals1 = v6->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (_4__this->fields.selectedMasterEquipId = equipId,
        _4__this->fields.selectedMasterGenderType = genderType,
        (item = CS___8__locals1->fields.item) == 0LL)
    || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
  {
    sub_1B64324(this);
  }
  v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v14, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct PhotoCampaignComponent_o *v10; // x8
  Il2CppObject *v11; // x20
  PhotoCampaignListViewManager_o *klass; // x19
  PhotoCampaignListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F7F03 & 1) == 0 )
  {
    sub_1B640C8(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_PhotoCampaignComponent_OnClickServant__, v4);
    sub_1B640C8(&StringLiteral_3506/*"CLICK_BACK"*/, v5);
    byte_49F7F03 = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3506/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1B64324(_4__this);
  }
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_18;
    _4__this = (PhotoCampaignComponent_o *)v10->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v11 = (Il2CppObject *)this->fields.__4__this;
  if ( !v11 )
    goto LABEL_18;
  klass = (PhotoCampaignListViewManager_o *)v11[4].klass;
  v13 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                         v8,
                                                         v9);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v13,
    v11,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v14);
  if ( !klass )
    goto LABEL_18;
  klass->fields.callbackFunc = v13;
  sub_1B6406C(&klass->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_31300968(klass, 2, v15);
}