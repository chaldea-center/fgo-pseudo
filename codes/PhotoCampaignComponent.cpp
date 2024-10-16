void __fastcall PhotoCampaignComponent___ctor(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PhotoCampaignComponent__CancelPhotoCampaignWindow(
        PhotoCampaignComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  PhotoCampaignComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4AB17C0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_PhotoCampaignComponent_EndCancelButton__, callback);
    sub_1BAB41C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v6);
    byte_4AB17C0 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.cancelCallback, (int32_t)callback, (int32_t)method, v3);
  v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BAB668(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    v8);
  PhotoCampaignComponent__StatusRequest(this, v7, v9);
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
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v17; // x20

  if ( (byte_4AB17C6 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BAB41C(&Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__, v9);
    sub_1BAB41C(&PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo, v10);
    byte_4AB17C6 = 1;
  }
  v11 = sub_1BAB668(PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v17 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v11,
          Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BAB678(v12, v13);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v17, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4AB17C1 & 1) == 0 )
  {
    sub_1BAB41C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickServant__, v5);
    byte_4AB17C1 = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v7 = this->fields.photoCampaignManager,
          v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BAB668(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            v9),
          !v7) )
    {
LABEL_11:
      sub_1BAB678(photoCampaignManager, isRequest);
    }
    v7->fields.callbackFunc = v8;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v7->fields.callbackFunc, (int32_t)v8, v10, v11);
    PhotoCampaignListViewManager__SetMode_31964416(v7, 2, v12);
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
      sub_1BAB678(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_31964416(photoCampaignManager, 2, v5);
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
      sub_1BAB678(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_31964416(photoCampaignManager, 2, v5);
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
      sub_1BAB678(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_31964416(photoCampaignManager, 2, v5);
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
      sub_1BAB678(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_31964416(photoCampaignManager, 2, v5);
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
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2

  if ( (byte_4AB17C5 & 1) == 0 )
  {
    sub_1BAB41C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickServant__, v4);
    byte_4AB17C5 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (photoCampaignManager = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(photoCampaignManager, this->fields.usrSvtId, v6),
        v7 = this->fields.photoCampaignManager,
        v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BAB668(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v9),
        !v7) )
  {
    sub_1BAB678(photoCampaignManager, result);
  }
  v7->fields.callbackFunc = v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v7->fields.callbackFunc, (int32_t)v8, v10, v11);
  PhotoCampaignListViewManager__SetMode_31964416(v7, 2, v12);
}


void __fastcall PhotoCampaignComponent__EndStatusSync(
        PhotoCampaignComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0
  struct PhotoCampaignComponent_RequestCallbackFunc_o *v5; // x19
  struct PhotoCampaignComponent_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestCallback;
  v5 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_1BAB3C0(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      1LL,
      *(_QWORD *)&v5->fields.extra_arg);
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

  if ( (byte_4AB17BE & 1) == 0 )
  {
    sub_1BAB41C(&string_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_10623/*"PhotoCampaignSelectedUsrSvtId2024"*/, v2);
    byte_4AB17BE = 1;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10623/*"PhotoCampaignSelectedUsrSvtId2024"*/,
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

  if ( (byte_4AB17BC & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_7113/*"HEADER_MSG_PHOTO_SERVANT"*/, v3);
    byte_4AB17BC = 1;
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
                                                             (System_String_o *)StringLiteral_7113/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0LL);
  if ( !infoLb )
LABEL_8:
    sub_1BAB678(photoCampaignManager, method);
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

  if ( (byte_4AB17C9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_PhotoCampaignComponent_EndClickTabChoice__, method);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__, v3);
    sub_1BAB41C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4AB17C9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BAB668(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          v10);
        PhotoCampaignComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BAB668(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
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
    sub_1BAB678(0LL, v5);
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

  if ( (byte_4AB17C8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_PhotoCampaignComponent_EndClickTabLock__, method);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickLockTabButton__, v3);
    sub_1BAB41C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4AB17C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BAB668(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          v10);
        PhotoCampaignComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BAB668(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4AB17C7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_PhotoCampaignComponent_EndClickTabNormal__, method);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickNormalTabButton__, v3);
    sub_1BAB41C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4AB17C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BAB668(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4AB17CA & 1) == 0 )
  {
    sub_1BAB41C(&Method_PhotoCampaignComponent_EndClickTabPush__, method);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickPushTabButton__, v3);
    sub_1BAB41C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4AB17CA = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_1BAB668(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4AB17CD & 1) == 0 )
  {
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickScaleChange__, method);
    byte_4AB17CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_1BAB678(0LL, v5);
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
  __int64 v29; // x20
  __int64 photoCampaignManager; // x0
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x2
  int32_t v35; // w3
  PhotoCampaignListViewItem_o *Item; // x1
  PhotoCampaignListViewItem_o **v37; // x21
  __int64 v38; // x8
  __int128 v39; // q1
  int32_t tabModeKind; // w8
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int32_t v43; // w1
  UserServantEntity_o *userSvtEntity; // x21
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
  int32_t v59; // w3
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
  Il2CppObject *v72; // x26
  System_String_o *v73; // x22
  System_String_o *v74; // x23
  __int64 v75; // x24
  int32_t Rarity; // w27
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v79; // x27
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x27
  int32_t v83; // w0
  int32_t v84; // w2
  int32_t v85; // w3
  __int64 v86; // x25
  int32_t v87; // w0
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x25
  int32_t v91; // w2
  int32_t v92; // w3
  __int64 v93; // x25
  PhotoCampaignListViewItem_o *v94; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v95; // x9
  ServantEntity_o *servantEntity; // x21
  int32_t v97; // w2
  int32_t v98; // w3
  __int64 v99; // x21
  System_String_o *v100; // x21
  System_String_o *v101; // x23
  System_String_o *v102; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v104; // x26
  __int64 v105; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_4AB17C2 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_1BAB41C(&DataManager_TypeInfo, v11);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v14);
    sub_1BAB41C(&object___TypeInfo, v15);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1BAB41C(&Method_PhotoCampaignComponent_CloseSvtDetail__, v18);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickServant__, v19);
    sub_1BAB41C(&Rarity_TypeInfo, v20);
    sub_1BAB41C(&ServantStatusDialog_ResultDelegate_TypeInfo, v21);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1BAB41C(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__, v23);
    sub_1BAB41C(&PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo, v24);
    sub_1BAB41C(&StringLiteral_11903/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v25);
    sub_1BAB41C(&StringLiteral_11901/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v26);
    sub_1BAB41C(&StringLiteral_11902/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v27);
    sub_1BAB41C(&StringLiteral_11904/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v28);
    byte_4AB17C2 = 1;
  }
  v29 = sub_1BAB668(PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_102;
  *(_QWORD *)(v29 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)this, v32, v33);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_102;
    Item = PhotoCampaignListViewManager__GetItem((PhotoCampaignListViewManager_o *)photoCampaignManager, n, v34);
  }
  *(_QWORD *)(v29 + 24) = Item;
  v37 = (PhotoCampaignListViewItem_o **)(v29 + 24);
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)Item, (int32_t)v34, v35);
  if ( !*(_QWORD *)(v29 + 24) )
    goto LABEL_102;
  v38 = *(_QWORD *)(*(_QWORD *)(v29 + 24) + 112LL);
  if ( !v38 )
    goto LABEL_102;
  v39 = *(_OWORD *)(v38 + 32);
  *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)(v38 + 16);
  *(_OWORD *)&v108.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v107 = v108;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v107, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v37 )
    {
      userSvtEntity = (*v37)->fields.userSvtEntity;
      v45 = (CommonUI_o *)photoCampaignManager;
      v46 = (ServantStatusDialog_ResultDelegate_o *)sub_1BAB668(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v46,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v45 )
      {
        CommonUI__OpenServantStatusDialog_30647692(v45, 0, userSvtEntity, v46, 0, 0LL);
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
    if ( !*v37 )
      goto LABEL_102;
    (*v37)->fields.isSwapChoice ^= 1u;
    v47 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v47 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickServant__);
    v42 = (System_Reflection_MethodBase_o *)sub_1BAB400(v47, v47[4]);
    v43 = 0;
    goto LABEL_44;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v37 )
      goto LABEL_102;
    (*v37)->fields.isSwapLock ^= 1u;
    v41 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickServant__);
    v42 = (System_Reflection_MethodBase_o *)sub_1BAB400(v41, v41[4]);
    v43 = 11;
    goto LABEL_44;
  }
  photoCampaignManager = (__int64)*v37;
  if ( !*v37 )
    goto LABEL_102;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(photoCampaignManager + 112) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 112), 0LL) )
      {
LABEL_33:
        v48 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
          v48 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickServant__);
        v42 = (System_Reflection_MethodBase_o *)sub_1BAB400(v48, v48[4]);
LABEL_43:
        v43 = 2;
LABEL_44:
        OverwriteAssetSoundName__PlaySystemSe(v42, v43, 0LL);
LABEL_45:
        v51 = this->fields.photoCampaignManager;
        v52 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BAB668(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
        v54 = (int)Method_PhotoCampaignComponent_OnClickServant__;
        goto LABEL_46;
      }
      photoCampaignManager = (__int64)*v37;
      if ( !*v37 )
        goto LABEL_102;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v31) )
      goto LABEL_33;
    v61 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v61 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickServant__);
    v62 = (System_Reflection_MethodBase_o *)sub_1BAB400(v61, v61[4]);
    OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0LL);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !photoCampaignManager )
      goto LABEL_102;
    v64 = *(_QWORD *)(photoCampaignManager + 120);
    if ( !v64 )
    {
LABEL_58:
      PhotoCampaignComponent__PushRequest(this, *v37, v63);
      goto LABEL_45;
    }
    if ( !*v37 )
      goto LABEL_102;
    v65 = (*v37)->fields.userSvtEntity;
    if ( !v65 )
      goto LABEL_102;
    v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
    *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v108.fields.fakeValue = v66;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v106 = v108;
    if ( v64 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v106, 0LL) )
      goto LABEL_58;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_102;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager,
               v64,
               (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_102;
    v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)photoCampaignManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v109.fields.currentCryptoKey = klass;
    *(_QWORD *)&v109.fields.fakeValue = monitor;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v109, 0LL);
    if ( !v69 )
      goto LABEL_102;
    v72 = DataMasterBase_object__object__int___GetEntity(
            v69,
            photoCampaignManager,
            (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11904/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11903/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v75 = sub_1BAB4C4(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v75 )
LABEL_102:
      sub_1BAB678(photoCampaignManager, v31);
    v79 = photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_1BAB558(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v75 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v75 + 24) )
        goto LABEL_103;
      *(_QWORD *)(v75 + 32) = v79;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 32), v79, v77, v78);
      if ( !v72 )
        goto LABEL_102;
      photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v72, 0LL);
      v82 = photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_1BAB558(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v75 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v75 + 24) <= 1u )
          goto LABEL_103;
        *(_QWORD *)(v75 + 40) = v82;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 40), v82, v80, v81);
        v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                0LL);
        photoCampaignManager = (__int64)ServantEntity__getName((ServantEntity_o *)v72, v83, -1, 0LL);
        v86 = photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_1BAB558(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v75 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v75 + 24) <= 2u )
            goto LABEL_103;
          *(_QWORD *)(v75 + 48) = v86;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 48), v86, v84, v85);
          if ( !*v37 )
            goto LABEL_102;
          photoCampaignManager = (__int64)(*v37)->fields.userSvtEntity;
          if ( !photoCampaignManager )
            goto LABEL_102;
          v87 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
          photoCampaignManager = (__int64)Rarity__getRarityType(v87, 0LL);
          v90 = photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_1BAB558(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v75 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v75 + 24) <= 3u )
              goto LABEL_103;
            *(_QWORD *)(v75 + 56) = v90;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 56), v90, v88, v89);
            if ( !*v37 )
              goto LABEL_102;
            photoCampaignManager = (__int64)(*v37)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_102;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
            v93 = photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_1BAB558(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v75 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v75 + 24) <= 4u )
                goto LABEL_103;
              *(_QWORD *)(v75 + 64) = v93;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 64), v93, v91, v92);
              v94 = *v37;
              if ( !*v37 )
                goto LABEL_102;
              v95 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v94->fields.userSvtEntity;
              if ( !v95 )
                goto LABEL_102;
              servantEntity = v94->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v95[6], 0LL);
              if ( !servantEntity )
                goto LABEL_102;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 0LL);
              v99 = photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_1BAB558(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v75 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v75 + 24) > 5u )
                {
                  *(_QWORD *)(v75 + 72) = v99;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 72), v99, v97, v98);
                  v100 = System_String__Format_62062636(v74, (System_Object_array *)v75, 0LL);
                  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_11901/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v104 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v104,
                    (Il2CppObject *)v29,
                    Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__,
                    0LL);
                  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30636632(
                      (CommonUI_o *)Instance,
                      v73,
                      v100,
                      v101,
                      v102,
                      v104,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    goto LABEL_45;
                  }
                  goto LABEL_102;
                }
LABEL_103:
                sub_1BAB680(photoCampaignManager, v31);
              }
            }
          }
        }
      }
    }
    v105 = sub_1BAB69C();
    sub_1BAB544(v105, 0LL);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v31) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v56 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
      v56 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickServant__);
    v42 = (System_Reflection_MethodBase_o *)sub_1BAB400(v56, v56[4]);
    if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0LL);
      PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(this, *v37, v67);
      return;
    }
    goto LABEL_43;
  }
  v49 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 83) & 2) != 0 )
    v49 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignComponent_OnClickServant__);
  v50 = (System_Reflection_MethodBase_o *)sub_1BAB400(v49, v49[4]);
  OverwriteAssetSoundName__PlaySystemSe(v50, 2, 0LL);
  v51 = this->fields.photoCampaignManager;
  v52 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BAB668(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v54 = (int)Method_PhotoCampaignComponent_OnClickServant__;
LABEL_46:
  v57 = v52;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v52, (Il2CppObject *)this, v54, v53);
  if ( !v51 )
    goto LABEL_102;
  v51->fields.callbackFunc = v57;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v51->fields.callbackFunc, (int32_t)v57, v58, v59);
  PhotoCampaignListViewManager__SetMode_31964416(v51, 2, v60);
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct MyRoomControl_o *myRoomControl; // x8
  UnityEngine_GameObject_o *v15; // x20
  PhotoCampaignComponent_o *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x2

  if ( (byte_4AB17BD & 1) == 0 )
  {
    sub_1BAB41C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickServant__, v9);
    byte_4AB17BD = 1;
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.cancelCallback, 0, v12, v13);
  gameObject = (int64_t)this->fields.titleInfo;
  this->fields.photoType = type;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_37569240((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
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
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v15
    || (UnityEngine_GameObject__SetActive(v15, gameObject & 1, 0LL),
        gameObject = PhotoCampaignComponent__GetLatestSelectedUsrSvtId(v16, v17),
        !this->fields.photoCampaignManager)
    || (PhotoCampaignListViewManager__CreateList(
          this->fields.photoCampaignManager,
          gameObject,
          this->fields.selectedUsrSvtId,
          v18),
        PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v19),
        photoCampaignManager = this->fields.photoCampaignManager,
        v21 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BAB668(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v21,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          v22),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_1BAB678(gameObject, v11);
  }
  photoCampaignManager->fields.callbackFunc = v21;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&photoCampaignManager->fields.callbackFunc, (int32_t)v21, v23, v24);
  PhotoCampaignListViewManager__SetMode_31964416(photoCampaignManager, 2, v25);
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

  if ( (byte_4AB17C4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1BAB41C(&NetworkManager_TypeInfo, v7);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BAB41C(&Method_PhotoCampaignComponent_EndPushRequest__, v10);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4AB17C4 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_19;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v53, 0LL);
  if ( !v17 )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  assetsInfo = v15->fields.assetsInfo;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndPushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_19;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v54, 0LL);
  if ( !v30 )
LABEL_19:
    sub_1BAB678(limitCountSupport, v14);
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
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x8
  __int64 v16; // x8
  __int128 v17; // q1
  MyRoomControl_o *myRoomControl; // x19
  int64_t v19; // x21
  System_Action_bool__int__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]

  if ( (byte_4AB17C3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_bool__int__TypeInfo, item);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BAB41C(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__, v6);
    sub_1BAB41C(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, v7);
    byte_4AB17C3 = 1;
  }
  v8 = sub_1BAB668(PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)item, v13, v14);
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
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v21, 0LL);
  v20 = (System_Action_bool__int__o *)sub_1BAB668(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v20,
    (Il2CppObject *)v8,
    Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__,
    0LL);
  if ( !myRoomControl )
LABEL_10:
    sub_1BAB678(v9, v10);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v19, v20, -1, 0LL);
}


void __fastcall PhotoCampaignComponent__SetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = usrSvtId;
  if ( (byte_4AB17BF & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_10623/*"PhotoCampaignSelectedUsrSvtId2024"*/, usrSvtId);
    byte_4AB17BF = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10623/*"PhotoCampaignSelectedUsrSvtId2024"*/, v3, 0LL);
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

  if ( (byte_4AB17CB & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1BAB41C(&StringLiteral_11634/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1BAB41C(&StringLiteral_17692/*"button_push_reg"*/, v6);
    sub_1BAB41C(&StringLiteral_17693/*"button_push_unreg"*/, v7);
    sub_1BAB41C(&StringLiteral_17678/*"button_allchoice_reg"*/, v8);
    sub_1BAB41C(&StringLiteral_17681/*"button_alllock_unreg"*/, v9);
    sub_1BAB41C(&StringLiteral_11632/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_1BAB41C(&StringLiteral_7113/*"HEADER_MSG_PHOTO_SERVANT"*/, v11);
    sub_1BAB41C(&StringLiteral_11633/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v12);
    sub_1BAB41C(&StringLiteral_17694/*"button_select_reg"*/, v13);
    sub_1BAB41C(&StringLiteral_17695/*"button_select_unreg"*/, v14);
    sub_1BAB41C(&StringLiteral_17680/*"button_alllock_reg"*/, v15);
    sub_1BAB41C(&StringLiteral_17679/*"button_allchoice_unreg"*/, v16);
    byte_4AB17CB = 1;
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
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17695/*"button_select_unreg"*/ : &StringLiteral_17694/*"button_select_reg"*/);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17680/*"button_alllock_reg"*/ : &StringLiteral_17681/*"button_alllock_unreg"*/);
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
    v20 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17678/*"button_allchoice_reg"*/ : &StringLiteral_17679/*"button_allchoice_unreg"*/);
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
      sub_1BAB678(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v21 = &StringLiteral_17692/*"button_push_reg"*/;
    else
      v21 = &StringLiteral_17693/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v21, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7113/*"HEADER_MSG_PHOTO_SERVANT"*/,
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
        v26 = &StringLiteral_11633/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11632/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11634/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
        PhotoCampaignListViewManager__SetMode_31964416((PhotoCampaignListViewManager_o *)normalTabButton, 2, v27);
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
  int32_t v11; // w2
  int32_t v12; // w3
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  int32_t v18; // w2
  int32_t v19; // w3
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int64_array *v21; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4AB17CC & 1) == 0 )
  {
    sub_1BAB41C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1BAB41C(&NetworkManager_TypeInfo, v6);
    sub_1BAB41C(&Method_PhotoCampaignComponent_EndStatusSync__, v7);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4AB17CC = 1;
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
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v18, v19);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v20,
                                                                 (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v15 = v21;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BAB678(photoCampaignManager, callback);
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
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v11, v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_object_(
                                                                 v13,
                                                                 (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
    sub_1BAB678(photoCampaignManager, method);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19E8744;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E86FC;
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
  if ( (byte_4AB17CE & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, isRequest);
    byte_4AB17CE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4AB17CF & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BAB41C(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__, v6);
    byte_4AB17CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30637300(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BAB678(Instance, v8);
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
    sub_1BAB678(this, method);
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
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *_4__this; // x23
  Il2CppClass *klass; // x22
  PhotoCampaignListViewManager_CallbackFunc_o *v21; // x24
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x2
  struct PhotoCampaignComponent_o *v26; // x21
  int32_t photoType; // w8
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v30; // q1
  int64_t v31; // x0
  const MethodInfo *v32; // x3
  MyRoomControl_o *myRoomControl; // x21
  System_Action_int__int__o *v34; // x22
  System_Action_o *_9__2; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-60h]

  if ( (byte_4AB17D0 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_int__int__TypeInfo, result);
    sub_1BAB41C(&System_Action_TypeInfo, v7);
    sub_1BAB41C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickServant__, v10);
    sub_1BAB41C(&Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__, v11);
    sub_1BAB41C(&Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__, v12);
    sub_1BAB41C(&PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo, v13);
    byte_4AB17D0 = 1;
  }
  v14 = sub_1BAB668(PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_20;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v17, v18);
  *(_DWORD *)(v14 + 16) = imageLimitCount;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  klass = _4__this[4].klass;
  v21 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BAB668(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v21,
    _4__this,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v22);
  if ( !klass )
    goto LABEL_20;
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)v21;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&klass->vtable[5], (int32_t)v21, v23, v24);
  PhotoCampaignListViewManager__SetMode_31964416((PhotoCampaignListViewManager_o *)klass, 2, v25);
  if ( !result )
    return;
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_20;
  photoType = v26->fields.photoType;
  if ( photoType == 1 )
  {
    myRoomControl = v26->fields.myRoomControl;
    v34 = (System_Action_int__int__o *)sub_1BAB668(System_Action_int__int__TypeInfo);
    System_Action_int__int____ctor(
      v34,
      (Il2CppObject *)v14,
      Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__,
      0LL);
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v36, v37);
    }
    if ( myRoomControl )
    {
      MyRoomControl__OpenMasterEquipSettingDialog(myRoomControl, v34, _9__2, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( photoType )
    return;
  item = this->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
LABEL_20:
    sub_1BAB678(v15, v16);
  v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v39.fields.fakeValue = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v38 = v39;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v38, 0LL);
  PhotoCampaignComponent__OnClickDecide(v26, v31, *(_DWORD *)(v14 + 16), v32);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___RecursiveOpenSelectImageLimitDialog_b__2(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BAB678(this, method);
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
  if ( (byte_4AB17D1 & 1) == 0 )
  {
    this = (PhotoCampaignComponent___c__DisplayClass40_1_o *)sub_1BAB41C(
                                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                               *(_QWORD *)&equipId);
    byte_4AB17D1 = 1;
  }
  CS___8__locals1 = v6->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (_4__this->fields.selectedMasterEquipId = equipId,
        _4__this->fields.selectedMasterGenderType = genderType,
        (item = CS___8__locals1->fields.item) == 0LL)
    || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
  {
    sub_1BAB678(this, *(_QWORD *)&equipId);
  }
  v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v14, 0LL);
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
  Il2CppClass *klass; // x19
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2

  if ( (byte_4AB17D2 & 1) == 0 )
  {
    sub_1BAB41C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_PhotoCampaignComponent_OnClickServant__, v4);
    sub_1BAB41C(&StringLiteral_3526/*"CLICK_BACK"*/, v5);
    byte_4AB17D2 = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3526/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1BAB678(_4__this, method);
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
  klass = v9[4].klass;
  v11 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_1BAB668(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v11,
    v9,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    v12);
  if ( !klass )
    goto LABEL_18;
  klass->vtable[5].methodPtr = (Il2CppMethodPointer)v11;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&klass->vtable[5], (int32_t)v11, v13, v14);
  PhotoCampaignListViewManager__SetMode_31964416((PhotoCampaignListViewManager_o *)klass, 2, v15);
}