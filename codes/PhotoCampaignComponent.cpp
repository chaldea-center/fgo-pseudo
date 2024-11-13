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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  PhotoCampaignComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4B11BA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoCampaignComponent_EndCancelButton__, callback, method);
    sub_1BCA7E0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v5, v6);
    byte_4B11BA9 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1BCA784(&this->fields.cancelCallback, callback);
  v10 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                          PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                          v7,
                                                          v8,
                                                          v9);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    v11);
  PhotoCampaignComponent__StatusRequest(this, v10, v12);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Instance; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x20

  if ( (byte_4B11BAF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__, v10, v11);
    sub_1BCA7E0(&PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo, v12, v13);
    byte_4B11BAF = 1;
  }
  v14 = sub_1BCAA2C(PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = questId,
        *(_QWORD *)(v14 + 24) = this,
        sub_1BCA784(v14 + 24, this),
        *(_BYTE *)(v14 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v14,
          Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v15, v16);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__EndCancelButton(
        PhotoCampaignComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  struct PhotoCampaignListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  PhotoCampaignListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4B11BAA & 1) == 0 )
  {
    sub_1BCA7E0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest, method);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickServant__, v5, v6);
    byte_4B11BAA = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v8 = this->fields.photoCampaignManager,
          v12 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                 PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                                 v9,
                                                                 v10,
                                                                 v11),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            v13),
          !v8) )
    {
LABEL_11:
      sub_1BCAA3C(photoCampaignManager, isRequest);
    }
    v8->fields.callbackFunc = v12;
    sub_1BCA784(&v8->fields.callbackFunc, v12);
    PhotoCampaignListViewManager__SetMode_32228920(v8, 2, v14);
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
      sub_1BCAA3C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32228920(photoCampaignManager, 2, v5);
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
      sub_1BCAA3C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32228920(photoCampaignManager, 2, v5);
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
      sub_1BCAA3C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32228920(photoCampaignManager, 2, v5);
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
      sub_1BCAA3C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_32228920(photoCampaignManager, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 3, method);
}


void __fastcall PhotoCampaignComponent__EndPushRequest(
        PhotoCampaignComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v7; // x2
  struct PhotoCampaignListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  PhotoCampaignListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4B11BAE & 1) == 0 )
  {
    sub_1BCA7E0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickServant__, v4, v5);
    byte_4B11BAE = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (photoCampaignManager = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(photoCampaignManager, this->fields.usrSvtId, v7),
        v8 = this->fields.photoCampaignManager,
        v12 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v13),
        !v8) )
  {
    sub_1BCAA3C(photoCampaignManager, result);
  }
  v8->fields.callbackFunc = v12;
  sub_1BCA784(&v8->fields.callbackFunc, v12);
  PhotoCampaignListViewManager__SetMode_32228920(v8, 2, v14);
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
    sub_1BCA784(p_requestCallback, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v7; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11BA7 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10751/*"PhotoCampaignSelectedUsrSvtId2024"*/, v3, v4);
    byte_4B11BA7 = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10751/*"PhotoCampaignSelectedUsrSvtId2024"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  v7 = -1LL;
  if ( !IsNullOrEmpty )
  {
    result = -1LL;
    if ( System_Int64__TryParse(String, &result, 0LL) )
      return result;
    else
      return -1LL;
  }
  return v7;
}


void __fastcall PhotoCampaignComponent__Init(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  __int64 v7; // x1
  UILabel_o *infoLb; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4B11BA5 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_7234/*"HEADER_MSG_PHOTO_SERVANT"*/, v4, v5);
    byte_4B11BA5 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    goto LABEL_8;
  PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  photoCampaignManager = (PhotoCampaignListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_7234/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0LL);
  if ( !infoLb )
LABEL_8:
    sub_1BCAA3C(photoCampaignManager, method);
  UILabel__set_text(infoLb, (System_String_o *)photoCampaignManager, 0LL);
  PhotoCampaignComponent__SetModeTabKind(this, 0, v9);
}


bool __fastcall PhotoCampaignComponent__IsEnableSelectSvt(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  return (unsigned __int64)this->fields.selectedUsrSvtId >> 63;
}


void __fastcall PhotoCampaignComponent__OnClickChoiceTabButton(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B11BB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoCampaignComponent_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__, v4, v5);
    sub_1BCA7E0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11BB2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v14 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                                v10,
                                                                v11,
                                                                v12);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          v15);
        PhotoCampaignComponent__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                              PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                              v10,
                                                              v11,
                                                              v12);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabChoice__,
        v18);
      PhotoCampaignComponent__StatusRequest(this, v17, v19);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 2, v11);
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
    sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B11BB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoCampaignComponent_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickLockTabButton__, v4, v5);
    sub_1BCA7E0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11BB1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v14 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                                v10,
                                                                v11,
                                                                v12);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          v15);
        PhotoCampaignComponent__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                              PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                              v10,
                                                              v11,
                                                              v12);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabLock__,
        v18);
      PhotoCampaignComponent__StatusRequest(this, v17, v19);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 1, v11);
  }
}


void __fastcall PhotoCampaignComponent__OnClickNormalTabButton(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  PhotoCampaignComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B11BB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoCampaignComponent_EndClickTabNormal__, method, v2);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickNormalTabButton__, v4, v5);
    sub_1BCA7E0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11BB0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabNormal__,
      v14);
    PhotoCampaignComponent__StatusRequest(this, v13, v15);
  }
}


void __fastcall PhotoCampaignComponent__OnClickPushTabButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  PhotoCampaignComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B11BB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoCampaignComponent_EndClickTabPush__, method, v2);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickPushTabButton__, v4, v5);
    sub_1BCA7E0(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B11BB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            PhotoCampaignComponent_RequestCallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabPush__,
      v14);
    PhotoCampaignComponent__StatusRequest(this, v13, v15);
  }
}


void __fastcall PhotoCampaignComponent__OnClickScaleChange(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B11BB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickScaleChange__, method, v2);
    byte_4B11BB6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_1BCAA3C(0LL, v6);
    PhotoCampaignListViewManager__ChangeIconScale(photoCampaignManager, v6);
    PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v8);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  Il2CppObject *v51; // x20
  __int64 photoCampaignManager; // x0
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x2
  PhotoCampaignListViewItem_o *Item; // x1
  PhotoCampaignListViewItem_o **p_monitor; // x21
  __int64 v57; // x8
  __int128 v58; // q1
  int32_t tabModeKind; // w8
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  int32_t v62; // w1
  __int64 v63; // x2
  __int64 v64; // x3
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v66; // x20
  ServantStatusDialog_ResultDelegate_o *v67; // x22
  _QWORD *v68; // x0
  _QWORD *v69; // x0
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  struct PhotoCampaignListViewManager_o *v72; // x20
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  PhotoCampaignListViewManager_CallbackFunc_o *v76; // x0
  const MethodInfo *v77; // x3
  intptr_t v78; // w2
  int64_t selectedUsrSvtId; // x20
  _QWORD *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  struct PhotoCampaignListViewManager_CallbackFunc_o *v84; // x21
  const MethodInfo *v85; // x2
  _QWORD *v86; // x0
  System_Reflection_MethodBase_o *v87; // x0
  const MethodInfo *v88; // x2
  int64_t v89; // x22
  struct UserServantEntity_o *v90; // x8
  __int128 v91; // q0
  __int64 v92; // x1
  const MethodInfo *v93; // x2
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v95; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v98; // x1
  Il2CppObject *v99; // x26
  System_String_o *v100; // x22
  System_String_o *v101; // x23
  System_Object_array *v102; // x24
  __int64 v103; // x1
  int32_t Rarity; // w27
  Il2CppObject *v105; // x27
  Il2CppObject *v106; // x27
  int32_t v107; // w0
  Il2CppObject *v108; // x25
  int32_t v109; // w0
  Il2CppObject *v110; // x25
  Il2CppObject *v111; // x25
  PhotoCampaignListViewItem_o *v112; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v113; // x9
  ServantEntity_o *servantEntity; // x21
  Il2CppObject *v115; // x21
  System_String_o *v116; // x21
  System_String_o *v117; // x23
  System_String_o *v118; // x24
  Il2CppObject *Instance; // x25
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  CommonConfirmDialog_ClickDelegate_o *v123; // x26
  __int64 v124; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16

  if ( (byte_4B11BAB & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&object___TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_CloseSvtDetail__, v29, v30);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickServant__, v31, v32);
    sub_1BCA7E0(&Rarity_TypeInfo, v33, v34);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v37, v38);
    sub_1BCA7E0(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__, v39, v40);
    sub_1BCA7E0(&PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v49, v50);
    byte_4B11BAB = 1;
  }
  v51 = (Il2CppObject *)sub_1BCAA2C(
                          PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo,
                          *(_QWORD *)&kind,
                          *(_QWORD *)&n,
                          method);
  System_Object___ctor(v51, 0LL);
  if ( !v51 )
    goto LABEL_102;
  v51[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v51[1], this);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_102;
    Item = PhotoCampaignListViewManager__GetItem((PhotoCampaignListViewManager_o *)photoCampaignManager, n, v54);
  }
  v51[1].monitor = Item;
  p_monitor = (PhotoCampaignListViewItem_o **)&v51[1].monitor;
  photoCampaignManager = sub_1BCA784(&v51[1].monitor, Item);
  if ( !v51[1].monitor )
    goto LABEL_102;
  v57 = *((_QWORD *)v51[1].monitor + 14);
  if ( !v57 )
    goto LABEL_102;
  v58 = *(_OWORD *)(v57 + 32);
  *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)(v57 + 16);
  *(_OWORD *)&v127.fields.fakeValue = v58;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
  v126 = v127;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v126, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v66 = (CommonUI_o *)photoCampaignManager;
      v67 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v53,
                                                      v63,
                                                      v64);
      ServantStatusDialog_ResultDelegate___ctor(
        v67,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v66 )
      {
        CommonUI__OpenServantStatusDialog_30777260(v66, 0, userSvtEntity, v67, 0, 0LL);
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
    v68 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v68 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickServant__);
    v61 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v68, v68[4]);
    v62 = 0;
    goto LABEL_44;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*p_monitor )
      goto LABEL_102;
    (*p_monitor)->fields.isSwapLock ^= 1u;
    v60 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v60 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickServant__);
    v61 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v60, v60[4]);
    v62 = 11;
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
        v69 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
          v69 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickServant__);
        v61 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v69, v69[4]);
LABEL_43:
        v62 = 2;
LABEL_44:
        OverwriteAssetSoundName__PlaySystemSe(v61, v62, 0LL);
LABEL_45:
        v72 = this->fields.photoCampaignManager;
        v76 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v81,
                                                               v82,
                                                               v83);
        v78 = (int)Method_PhotoCampaignComponent_OnClickServant__;
        goto LABEL_46;
      }
      photoCampaignManager = (__int64)*p_monitor;
      if ( !*p_monitor )
        goto LABEL_102;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v53) )
      goto LABEL_33;
    v86 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v86 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickServant__);
    v87 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v86, v86[4]);
    OverwriteAssetSoundName__PlaySystemSe(v87, 0, 0LL);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !photoCampaignManager )
      goto LABEL_102;
    v89 = *(_QWORD *)(photoCampaignManager + 120);
    if ( !v89 )
    {
LABEL_58:
      PhotoCampaignComponent__PushRequest(this, *p_monitor, v88);
      goto LABEL_45;
    }
    if ( !*p_monitor )
      goto LABEL_102;
    v90 = (*p_monitor)->fields.userSvtEntity;
    if ( !v90 )
      goto LABEL_102;
    v91 = *(_OWORD *)&v90->fields.id.fields.fakeValue;
    *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v90->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v127.fields.fakeValue = v91;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
    v125 = v127;
    if ( v89 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v125, 0LL) )
      goto LABEL_58;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v92);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
               v89,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_102;
    v95 = (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
    *(_QWORD *)&v128.fields.currentCryptoKey = klass;
    *(_QWORD *)&v128.fields.fakeValue = monitor;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v128, 0LL);
    if ( !v95 )
      goto LABEL_102;
    v99 = DataMasterBase_object__object__int___GetEntity(
            v95,
            photoCampaignManager,
            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v98);
    v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v102 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v103);
    photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v102 )
LABEL_102:
      sub_1BCAA3C(photoCampaignManager, v53);
    v105 = (Il2CppObject *)photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_1BCA91C(photoCampaignManager, v102->obj.klass->_1.element_class)) != 0 )
    {
      if ( !v102->max_length )
        goto LABEL_103;
      v102->m_Items[0] = v105;
      photoCampaignManager = sub_1BCA784(v102->m_Items, v105);
      if ( !v99 )
        goto LABEL_102;
      photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v99, 0LL);
      v106 = (Il2CppObject *)photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_1BCA91C(photoCampaignManager, v102->obj.klass->_1.element_class)) != 0 )
      {
        if ( v102->max_length <= 1 )
          goto LABEL_103;
        v102->m_Items[1] = v106;
        sub_1BCA784(&v102->m_Items[1], v106);
        v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                 (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                 0LL);
        photoCampaignManager = (__int64)ServantEntity__getName((ServantEntity_o *)v99, v107, -1, 0LL);
        v108 = (Il2CppObject *)photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_1BCA91C(photoCampaignManager, v102->obj.klass->_1.element_class)) != 0 )
        {
          if ( v102->max_length <= 2 )
            goto LABEL_103;
          v102->m_Items[2] = v108;
          photoCampaignManager = sub_1BCA784(&v102->m_Items[2], v108);
          if ( !*p_monitor )
            goto LABEL_102;
          photoCampaignManager = (__int64)(*p_monitor)->fields.userSvtEntity;
          if ( !photoCampaignManager )
            goto LABEL_102;
          v109 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
          photoCampaignManager = (__int64)Rarity__getRarityType(v109, 0LL);
          v110 = (Il2CppObject *)photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_1BCA91C(photoCampaignManager, v102->obj.klass->_1.element_class)) != 0 )
          {
            if ( v102->max_length <= 3 )
              goto LABEL_103;
            v102->m_Items[3] = v110;
            photoCampaignManager = sub_1BCA784(&v102->m_Items[3], v110);
            if ( !*p_monitor )
              goto LABEL_102;
            photoCampaignManager = (__int64)(*p_monitor)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_102;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
            v111 = (Il2CppObject *)photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_1BCA91C(photoCampaignManager, v102->obj.klass->_1.element_class)) != 0 )
            {
              if ( v102->max_length <= 4 )
                goto LABEL_103;
              v102->m_Items[4] = v111;
              photoCampaignManager = sub_1BCA784(&v102->m_Items[4], v111);
              v112 = *p_monitor;
              if ( !*p_monitor )
                goto LABEL_102;
              v113 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v112->fields.userSvtEntity;
              if ( !v113 )
                goto LABEL_102;
              servantEntity = v112->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v113[6], 0LL);
              if ( !servantEntity )
                goto LABEL_102;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 0LL);
              v115 = (Il2CppObject *)photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_1BCA91C(photoCampaignManager, v102->obj.klass->_1.element_class)) != 0 )
              {
                if ( v102->max_length > 5 )
                {
                  v102->m_Items[5] = v115;
                  sub_1BCA784(&v102->m_Items[5], v115);
                  v116 = System_String__Format_62415728(v101, v102, 0LL);
                  v117 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v123 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v120,
                                                                  v121,
                                                                  v122);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v123,
                    v51,
                    Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__,
                    0LL);
                  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v53);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30766228(
                      (CommonUI_o *)Instance,
                      v100,
                      v116,
                      v117,
                      v118,
                      v123,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    goto LABEL_45;
                  }
                  goto LABEL_102;
                }
LABEL_103:
                sub_1BCAA44(photoCampaignManager, v53);
              }
            }
          }
        }
      }
    }
    v124 = sub_1BCAA60();
    sub_1BCA908(v124, 0LL);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v53) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v80 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v80 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickServant__);
    v61 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v80, v80[4]);
    if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0LL);
      PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(this, *p_monitor, v93);
      return;
    }
    goto LABEL_43;
  }
  v70 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
    v70 = (_QWORD *)sub_1BCA7F8(Method_PhotoCampaignComponent_OnClickServant__);
  v71 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v70, v70[4]);
  OverwriteAssetSoundName__PlaySystemSe(v71, 2, 0LL);
  v72 = this->fields.photoCampaignManager;
  v76 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                         v73,
                                                         v74,
                                                         v75);
  v78 = (int)Method_PhotoCampaignComponent_OnClickServant__;
LABEL_46:
  v84 = v76;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v76, (Il2CppObject *)this, v78, v77);
  if ( !v72 )
    goto LABEL_102;
  v72->fields.callbackFunc = v84;
  sub_1BCA784(&v72->fields.callbackFunc, v84);
  PhotoCampaignListViewManager__SetMode_32228920(v72, 2, v85);
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
  __int64 v10; // x2
  int64_t gameObject; // x0
  __int64 v12; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  UnityEngine_GameObject_o *v14; // x20
  PhotoCampaignComponent_o *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  PhotoCampaignListViewManager_CallbackFunc_o *v23; // x21
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2

  if ( (byte_4B11BA6 & 1) == 0 )
  {
    sub_1BCA7E0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&equipId);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickServant__, v9, v10);
    byte_4B11BA6 = 1;
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
  sub_1BCA784(&this->fields.cancelCallback, 0LL);
  gameObject = (int64_t)this->fields.titleInfo;
  this->fields.photoType = type;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)gameObject, 1, 61, 0, 0LL);
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
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v14
    || (UnityEngine_GameObject__SetActive(v14, gameObject & 1, 0LL),
        gameObject = PhotoCampaignComponent__GetLatestSelectedUsrSvtId(v15, v16),
        !this->fields.photoCampaignManager)
    || (PhotoCampaignListViewManager__CreateList(
          this->fields.photoCampaignManager,
          gameObject,
          this->fields.selectedUsrSvtId,
          v17),
        PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v18),
        photoCampaignManager = this->fields.photoCampaignManager,
        v23 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                               v20,
                                                               v21,
                                                               v22),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v23,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v24),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_1BCAA3C(gameObject, v12);
  }
  photoCampaignManager->fields.callbackFunc = v23;
  sub_1BCA784(&photoCampaignManager->fields.callbackFunc, v23);
  PhotoCampaignListViewManager__SetMode_32228920(photoCampaignManager, 2, v25);
  this->fields.state = 2;
}


void __fastcall PhotoCampaignComponent__PushRequest(
        PhotoCampaignComponent_o *this,
        PhotoCampaignListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  CommonUI_o *limitCountSupport; // x0
  __int64 v22; // x1
  CommonUI_o *v23; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct SoundInfo_o *soundInfo; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct AssetsInfo_o *assetsInfo; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct SoundInfo_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B11BAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_EndPushRequest__, v15, v16);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    byte_4B11BAD = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v23 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v23 || !userSvtEntity )
    goto LABEL_19;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_19;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v23->fields.soundInfo;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = soundInfo;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v23->fields.assetsInfo;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.dispLimitCount, 0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.iconLimitCount, 0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_19:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    assetsInfo == (struct AssetsInfo_o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct SoundInfo_o *)v60,
    0LL);
}


void __fastcall PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(
        PhotoCampaignComponent_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  _QWORD *monitor; // x8
  __int64 v16; // x8
  __int128 v17; // q1
  MyRoomControl_o *myRoomControl; // x19
  int64_t v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_bool__int__o *v23; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-50h]

  if ( (byte_4B11BAC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__int__TypeInfo, item, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__,
      v8,
      v9);
    sub_1BCA7E0(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, v10, v11);
    byte_4B11BAC = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, item, method, v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  v12[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v12[1], this);
  v12[1].monitor = item;
  v13 = sub_1BCA784(&v12[1].monitor, item);
  monitor = v12[1].monitor;
  if ( !monitor )
    goto LABEL_10;
  v16 = monitor[14];
  if ( !v16 )
    goto LABEL_10;
  v17 = *(_OWORD *)(v16 + 32);
  myRoomControl = this->fields.myRoomControl;
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
  *(_OWORD *)&v25.fields.fakeValue = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
  v24 = v25;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v24, 0LL);
  v23 = (System_Action_bool__int__o *)sub_1BCAA2C(System_Action_bool__int__TypeInfo, v20, v21, v22);
  System_Action_bool__int____ctor(
    v23,
    v12,
    Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__,
    0LL);
  if ( !myRoomControl )
LABEL_10:
    sub_1BCAA3C(v13, v14);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v19, v23, -1, 0LL);
}


void __fastcall PhotoCampaignComponent__SetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = usrSvtId;
  if ( (byte_4B11BA8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10751/*"PhotoCampaignSelectedUsrSvtId2024"*/, usrSvtId, method);
    byte_4B11BA8 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10751/*"PhotoCampaignSelectedUsrSvtId2024"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__SetModeTabKind(
        PhotoCampaignComponent_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v30; // x8
  System_String_o **v31; // x8
  System_String_o **v32; // x8
  __int64 *v33; // x8
  const MethodInfo *v34; // x2
  UILabel_o *infoLb; // x21
  char v36; // w8
  UILabel_o *v37; // x21
  __int64 *v38; // x8
  const MethodInfo *v39; // x2

  if ( (byte_4B11BB4 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_7234/*"HEADER_MSG_PHOTO_SERVANT"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v27, v28);
    byte_4B11BB4 = 1;
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
    v30 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17842/*"button_select_unreg"*/ : &StringLiteral_17841/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v30, 0LL);
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
    v31 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17827/*"button_alllock_reg"*/ : &StringLiteral_17828/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v31, 0LL);
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
    v32 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17825/*"button_allchoice_reg"*/ : &StringLiteral_17826/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v32, 0LL);
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
      sub_1BCAA3C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v33 = &StringLiteral_17839/*"button_push_reg"*/;
    else
      v33 = &StringLiteral_17840/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v33, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7234/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v36 = 0;
        goto LABEL_48;
      case 1:
        v37 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v38 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v37 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v38 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v37 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v38 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v38, 0LL);
        if ( !v37 )
          goto LABEL_51;
        UILabel__set_text(v37, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v36 = 1;
LABEL_48:
        *((_BYTE *)&normalTabButton[15].fields + 4) = v36;
LABEL_49:
        PhotoCampaignListViewManager__UpdateDisplayState(
          (PhotoCampaignListViewManager_o *)normalTabButton,
          modeKind == 3,
          v34);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.photoCampaignManager;
        if ( !normalTabButton )
          goto LABEL_51;
        PhotoCampaignListViewManager__SetMode_32228920((PhotoCampaignListViewManager_o *)normalTabButton, 2, v39);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t tabModeKind; // w8
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  System_Int64_array *v19; // x1
  System_Int64_array *v20; // x2
  bool v21; // w4
  bool v22; // w5
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  __int64 v27; // x1
  System_Int64_array *v28; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B11BB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_EndStatusSync__, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B11BB5 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v28 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_21;
    if ( PhotoCampaignListViewManager__GetSwapChoiceList(photoCampaignManager, &choiceList, &v28, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BCA784(&this->fields.requestCallback, callback);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v23,
                                                     v24,
                                                     v25);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v26,
                                                                 (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v20 = v28;
        v19 = choiceList;
        v22 = 1;
        v21 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCAA3C(photoCampaignManager, callback);
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
      sub_1BCA784(&this->fields.requestCallback, callback);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v14,
                                                     v15,
                                                     v16);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v17,
                                                                 (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v20 = unlockList;
        v19 = lockList;
        v21 = 1;
        v22 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v19, v20, 0, v21, v22, 0LL);
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
    sub_1BCAA3C(photoCampaignManager, method);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A066A8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06660;
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
  if ( (byte_4B11BB7 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B11BB7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4B11BB8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__, v7, v8);
    byte_4B11BB8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1BCA784(&this->fields.__9__1, _9__1);
    }
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v10);
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
    sub_1BCAA3C(this, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  Il2CppObject *_4__this; // x23
  PhotoCampaignListViewManager_o *klass; // x22
  PhotoCampaignListViewManager_CallbackFunc_o *v28; // x24
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  __int64 v31; // x2
  __int64 v32; // x3
  struct PhotoCampaignComponent_o *v33; // x21
  int32_t photoType; // w8
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v37; // q1
  int64_t v38; // x0
  const MethodInfo *v39; // x3
  MyRoomControl_o *myRoomControl; // x21
  System_Action_int__int__o *v41; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *_9__2; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-60h]

  if ( (byte_4B11BB9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__int__TypeInfo, result, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&System_Action_TypeInfo, v7, v8);
    sub_1BCA7E0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickServant__, v13, v14);
    sub_1BCA7E0(
      &Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__,
      v17,
      v18);
    sub_1BCA7E0(&PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo, v19, v20);
    byte_4B11BB9 = 1;
  }
  v21 = sub_1BCAA2C(PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo, result, *(_QWORD *)&imageLimitCount, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_20;
  *(_QWORD *)(v21 + 24) = this;
  v22 = sub_1BCA784(v21 + 24, this);
  *(_DWORD *)(v21 + 16) = imageLimitCount;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  klass = (PhotoCampaignListViewManager_o *)_4__this[4].klass;
  v28 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                         v23,
                                                         v24,
                                                         v25);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v28,
    _4__this,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v29);
  if ( !klass )
    goto LABEL_20;
  klass->fields.callbackFunc = v28;
  sub_1BCA784(&klass->fields.callbackFunc, v28);
  PhotoCampaignListViewManager__SetMode_32228920(klass, 2, v30);
  if ( !result )
    return;
  v33 = this->fields.__4__this;
  if ( !v33 )
    goto LABEL_20;
  photoType = v33->fields.photoType;
  if ( photoType == 1 )
  {
    myRoomControl = v33->fields.myRoomControl;
    v41 = (System_Action_int__int__o *)sub_1BCAA2C(System_Action_int__int__TypeInfo, v23, v31, v32);
    System_Action_int__int____ctor(
      v41,
      (Il2CppObject *)v21,
      Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__,
      0LL);
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v42, v43);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      v22 = sub_1BCA784(&this->fields.__9__2, _9__2);
    }
    if ( myRoomControl )
    {
      MyRoomControl__OpenMasterEquipSettingDialog(myRoomControl, v41, _9__2, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( photoType )
    return;
  item = this->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
LABEL_20:
    sub_1BCAA3C(v22, v23);
  v37 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v37;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
  v45 = v46;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v45, 0LL);
  PhotoCampaignComponent__OnClickDecide(v33, v38, *(_DWORD *)(v21 + 16), v39);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___RecursiveOpenSelectImageLimitDialog_b__2(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
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
  if ( (byte_4B11BBA & 1) == 0 )
  {
    this = (PhotoCampaignComponent___c__DisplayClass40_1_o *)sub_1BCA7E0(
                                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                               *(_QWORD *)&equipId,
                                                               *(_QWORD *)&genderType);
    byte_4B11BBA = 1;
  }
  CS___8__locals1 = v6->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (_4__this->fields.selectedMasterEquipId = equipId,
        _4__this->fields.selectedMasterGenderType = genderType,
        (item = CS___8__locals1->fields.item) == 0LL)
    || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
  {
    sub_1BCAA3C(this, *(_QWORD *)&equipId);
  }
  v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&equipId);
  v14 = v15;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v14, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PhotoCampaignComponent_o *_4__this; // x0
  struct PhotoCampaignComponent_o *v9; // x8
  __int64 v10; // x2
  __int64 v11; // x3
  struct PhotoCampaignComponent_o *v12; // x8
  Il2CppObject *v13; // x20
  PhotoCampaignListViewManager_o *klass; // x19
  PhotoCampaignListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4B11BBB & 1) == 0 )
  {
    sub_1BCA7E0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PhotoCampaignComponent_OnClickServant__, v4, v5);
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, v6, v7);
    byte_4B11BBB = 1;
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
        v9 = this->fields.__4__this;
        if ( v9 )
        {
          _4__this = (PhotoCampaignComponent_o *)v9->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(_4__this, method);
  }
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_18;
    _4__this = (PhotoCampaignComponent_o *)v12->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v13 = (Il2CppObject *)this->fields.__4__this;
  if ( !v13 )
    goto LABEL_18;
  klass = (PhotoCampaignListViewManager_o *)v13[4].klass;
  v15 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         PhotoCampaignListViewManager_CallbackFunc_TypeInfo,
                                                         method,
                                                         v10,
                                                         v11);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v15,
    v13,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v16);
  if ( !klass )
    goto LABEL_18;
  klass->fields.callbackFunc = v15;
  sub_1BCA784(&klass->fields.callbackFunc, v15);
  PhotoCampaignListViewManager__SetMode_32228920(klass, 2, v17);
}