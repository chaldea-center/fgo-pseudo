void __fastcall PhotoCampaignComponent___ctor(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PhotoCampaignComponent__CancelPhotoCampaignWindow(
        PhotoCampaignComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  PhotoCampaignComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42E838C & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoCampaignComponent_EndCancelButton__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v10, v11, v12);
    byte_42E838C = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B5D694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    0LL);
  PhotoCampaignComponent__StatusRequest(this, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__CloseSvtDetail(
        PhotoCampaignComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  char v5; // w1
  char v6; // w2
  __int64 v7; // x3
  char v8; // w1
  char v9; // w2
  __int64 v10; // x3
  char v11; // w1
  char v12; // w2
  __int64 v13; // x3

  if ( (byte_42E8392 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_PhotoCampaignComponent___c__DisplayClass43_0__CloseSvtDetail_b__0__, v8, v9, v10);
    sub_B5D5C4(&PhotoCampaignComponent___c__DisplayClass43_0_TypeInfo, v11, v12, v13);
    byte_42E8392 = 1;
  }
  JUMPOUT(0x1788058LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__EndCancelButton(
        PhotoCampaignComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  struct PhotoCampaignListViewManager_o *v10; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_42E838D & 1) == 0 )
  {
    sub_B5D5C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickServant__, v6, v7, v8);
    byte_42E838D = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v10 = this->fields.photoCampaignManager,
          v11 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B5D694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            0LL),
          !v10) )
    {
LABEL_11:
      sub_B5D69C(photoCampaignManager, isRequest);
    }
    v10->fields.callbackFunc = v11;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v10->fields.callbackFunc,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    PhotoCampaignListViewManager__SetMode_24609208(v10, 2, v18);
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
      sub_B5D69C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_24609208(photoCampaignManager, 2, v5);
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
      sub_B5D69C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_24609208(photoCampaignManager, 2, v5);
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
      sub_B5D69C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_24609208(photoCampaignManager, 2, v5);
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
      sub_B5D69C(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_24609208(photoCampaignManager, 2, v5);
  }
  PhotoCampaignComponent__SetModeTabKind(this, 3, method);
}


void __fastcall PhotoCampaignComponent__EndPushRequest(
        PhotoCampaignComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v9; // x2
  struct PhotoCampaignListViewManager_o *v10; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42E8391 & 1) == 0 )
  {
    sub_B5D5C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickServant__, v5, v6, v7);
    byte_42E8391 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (photoCampaignManager = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(photoCampaignManager, this->fields.usrSvtId, v9),
        v10 = this->fields.photoCampaignManager,
        v11 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B5D694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !v10) )
  {
    sub_B5D69C(photoCampaignManager, result);
  }
  v10->fields.callbackFunc = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v10->fields.callbackFunc,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  PhotoCampaignListViewManager__SetMode_24609208(v10, 2, v18);
}


void __fastcall PhotoCampaignComponent__EndStatusSync(
        PhotoCampaignComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_requestCallback; // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v9; // x19
  struct PhotoCampaignComponent_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_B5D560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PhotoCampaignComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


int64_t __fastcall PhotoCampaignComponent__GetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v9; // x0
  int64_t result; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_42E838A & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10770/*"PhotoCampaignSelectedUsrSvtId2024"*/, v4, v5, v6);
    byte_42E838A = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10770/*"PhotoCampaignSelectedUsrSvtId2024"*/,
             string_TypeInfo->static_fields->Empty,
             0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  v9 = -1LL;
  if ( !IsNullOrEmpty )
  {
    result = -1LL;
    if ( System_Int64__TryParse(String, &result, 0LL) )
      return result;
    else
      return -1LL;
  }
  return v9;
}


void __fastcall PhotoCampaignComponent__Init(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v10; // x2

  if ( (byte_42E8388 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_7121/*"HEADER_MSG_PHOTO_SERVANT"*/, v5, v6, v7);
    byte_42E8388 = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager )
    goto LABEL_9;
  PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  photoCampaignManager = (PhotoCampaignListViewManager_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_7121/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                             0LL);
  if ( !infoLb )
LABEL_9:
    sub_B5D69C(photoCampaignManager, method);
  UILabel__set_text(infoLb, (System_String_o *)photoCampaignManager, 0LL);
  PhotoCampaignComponent__SetModeTabKind(this, 0, v10);
}


bool __fastcall PhotoCampaignComponent__IsEnableSelectSvt(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  return (unsigned __int64)this->fields.selectedUsrSvtId >> 63;
}


void __fastcall PhotoCampaignComponent__OnClickChoiceTabButton(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_42E8395 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoCampaignComponent_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__, v5, v6, v7);
    sub_B5D5C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v8, v9, v10);
    byte_42E8395 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v11 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v15 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B5D694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v15, v16);
        return;
      }
      v17 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B5D694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabChoice__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v17, v18);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 2, v13);
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
    sub_B5D69C(0LL, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2
  int32_t tabModeKind; // w8
  PhotoCampaignComponent_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_42E8394 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoCampaignComponent_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickLockTabButton__, v5, v6, v7);
    sub_B5D5C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v8, v9, v10);
    byte_42E8394 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v11 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v15 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B5D694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v15, v16);
        return;
      }
      v17 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B5D694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabLock__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v17, v18);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 1, v13);
  }
}


void __fastcall PhotoCampaignComponent__OnClickNormalTabButton(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42E8393 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoCampaignComponent_EndClickTabNormal__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickNormalTabButton__, v5, v6, v7);
    sub_B5D5C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v8, v9, v10);
    byte_42E8393 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v11 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    v13 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B5D694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabNormal__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v13, v14);
  }
}


void __fastcall PhotoCampaignComponent__OnClickPushTabButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42E8396 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoCampaignComponent_EndClickTabPush__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickPushTabButton__, v5, v6, v7);
    sub_B5D5C4(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v8, v9, v10);
    byte_42E8396 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v11 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    v13 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B5D694(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabPush__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v13, v14);
  }
}


void __fastcall PhotoCampaignComponent__OnClickScaleChange(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42E8399 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickScaleChange__, (_DWORD)method, v2, v3);
    byte_42E8399 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_B5D69C(0LL, v7);
    PhotoCampaignListViewManager__ChangeIconScale(photoCampaignManager, v7);
    PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v9);
  }
}


void __fastcall PhotoCampaignComponent__OnClickServant(
        PhotoCampaignComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  __int64 v73; // x20
  __int64 photoCampaignManager; // x0
  const MethodInfo *v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  MethodInfo *v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **Item; // x1
  PhotoCampaignListViewItem_o **v89; // x21
  __int64 v90; // x8
  __int128 v91; // q1
  int32_t tabModeKind; // w8
  _QWORD *v93; // x0
  System_Reflection_MethodBase_o *v94; // x0
  int32_t v95; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v97; // x20
  ServantStatusDialog_ResultDelegate_o *v98; // x22
  _QWORD *v99; // x0
  _QWORD *v100; // x0
  _QWORD *v101; // x0
  System_Reflection_MethodBase_o *v102; // x0
  struct PhotoCampaignListViewManager_o *v103; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v104; // x0
  intptr_t v105; // w2
  int64_t selectedUsrSvtId; // x20
  _QWORD *v107; // x0
  System_Int32_array **v108; // x21
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  const MethodInfo *v115; // x2
  _QWORD *v116; // x0
  System_Reflection_MethodBase_o *v117; // x0
  const MethodInfo *v118; // x2
  int64_t v119; // x22
  struct UserServantEntity_o *v120; // x8
  __int128 v121; // q0
  const MethodInfo *v122; // x2
  UserServantEntity_o *Entity; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v124; // x22
  __int64 v125; // x23
  __int64 v126; // x24
  ServantEntity_o *v127; // x26
  System_String_o *v128; // x22
  System_String_o *v129; // x23
  __int64 v130; // x24
  int32_t Rarity; // w27
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x27
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x27
  int32_t v146; // w0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x25
  int32_t v154; // w0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x25
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x25
  PhotoCampaignListViewItem_o *v169; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v170; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x21
  System_String_o *v179; // x21
  System_String_o *v180; // x23
  System_String_o *v181; // x24
  CommonUI_o *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v183; // x26
  __int64 v184; // x0
  __int64 v185; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v186; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v187; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v188; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16

  if ( (byte_42E838E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, n, method);
    sub_B5D5C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&object___TypeInfo, v31, v32, v33);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_PhotoCampaignComponent_CloseSvtDetail__, v40, v41, v42);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickServant__, v43, v44, v45);
    sub_B5D5C4(&Rarity_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v52, v53, v54);
    sub_B5D5C4(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__, v55, v56, v57);
    sub_B5D5C4(&PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v70, v71, v72);
    byte_42E838E = 1;
  }
  v73 = sub_B5D694(PhotoCampaignComponent___c__DisplayClass39_0_TypeInfo);
  PhotoCampaignComponent___c__DisplayClass39_0___ctor((PhotoCampaignComponent___c__DisplayClass39_0_o *)v73, 0LL);
  if ( !v73 )
    goto LABEL_109;
  *(_QWORD *)(v73 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v73 + 16), (System_Int32_array **)this, v76, v77, v78, v79, v80, v81);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_109;
    Item = (System_Int32_array **)PhotoCampaignListViewManager__GetItem(
                                    (PhotoCampaignListViewManager_o *)photoCampaignManager,
                                    n,
                                    v82);
  }
  *(_QWORD *)(v73 + 24) = Item;
  v89 = (PhotoCampaignListViewItem_o **)(v73 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v73 + 24), Item, (System_String_array **)v82, v83, v84, v85, v86, v87);
  if ( !*(_QWORD *)(v73 + 24) )
    goto LABEL_109;
  v90 = *(_QWORD *)(*(_QWORD *)(v73 + 24) + 112LL);
  if ( !v90 )
    goto LABEL_109;
  v91 = *(_OWORD *)(v90 + 32);
  *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)(v90 + 16);
  *(_OWORD *)&v188.fields.fakeValue = v91;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v187 = v188;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v187, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v89 )
    {
      userSvtEntity = (*v89)->fields.userSvtEntity;
      v97 = (CommonUI_o *)photoCampaignManager;
      v98 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v98,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v97 )
      {
        CommonUI__OpenServantStatusDialog_18213380(v97, 0, userSvtEntity, v98, 0, 0LL);
        return;
      }
    }
    goto LABEL_109;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v89 )
      goto LABEL_109;
    (*v89)->fields.isSwapChoice ^= 1u;
    v99 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v99 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickServant__);
    v94 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v99, v99[3]);
    v95 = 0;
    goto LABEL_45;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v89 )
      goto LABEL_109;
    (*v89)->fields.isSwapLock ^= 1u;
    v93 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v93 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickServant__);
    v94 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v93, v93[3]);
    v95 = 11;
    goto LABEL_45;
  }
  photoCampaignManager = (__int64)*v89;
  if ( !*v89 )
    goto LABEL_109;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(photoCampaignManager + 112) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 112), 0LL) )
      {
LABEL_34:
        v100 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
          v100 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickServant__);
        v94 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v100, v100[3]);
LABEL_44:
        v95 = 2;
LABEL_45:
        OverwriteAssetSoundName__PlaySystemSe(v94, v95, 0LL);
LABEL_46:
        v103 = this->fields.photoCampaignManager;
        v104 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B5D694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
        v105 = (int)Method_PhotoCampaignComponent_OnClickServant__;
        goto LABEL_47;
      }
      photoCampaignManager = (__int64)*v89;
      if ( !*v89 )
        goto LABEL_109;
    }
    if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v75) )
      goto LABEL_34;
    v116 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v116 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickServant__);
    v117 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v116, v116[3]);
    OverwriteAssetSoundName__PlaySystemSe(v117, 0, 0LL);
    photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !photoCampaignManager )
      goto LABEL_109;
    v119 = *(_QWORD *)(photoCampaignManager + 120);
    if ( !v119 )
    {
LABEL_60:
      PhotoCampaignComponent__PushRequest(this, *v89, v118);
      goto LABEL_46;
    }
    if ( !*v89 )
      goto LABEL_109;
    v120 = (*v89)->fields.userSvtEntity;
    if ( !v120 )
      goto LABEL_109;
    v121 = *(_OWORD *)&v120->fields.id.fields.fakeValue;
    *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)&v120->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v188.fields.fakeValue = v121;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v186 = v188;
    if ( v119 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v186, 0LL) )
      goto LABEL_60;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    photoCampaignManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !photoCampaignManager )
      goto LABEL_109;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)photoCampaignManager,
               v119,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    photoCampaignManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Entity )
      goto LABEL_109;
    v124 = (DataMasterBase_WarMaster__WarEntity__int__o *)photoCampaignManager;
    v126 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v125 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v189.fields.currentCryptoKey = v126;
    *(_QWORD *)&v189.fields.fakeValue = v125;
    photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v189, 0LL);
    if ( !v124 )
      goto LABEL_109;
    v127 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v124,
                                photoCampaignManager,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v128 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v129 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v130 = sub_B5D5DC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v130 )
LABEL_109:
      sub_B5D69C(photoCampaignManager, v75);
    v138 = (System_Int32_array **)photoCampaignManager;
    if ( !photoCampaignManager
      || (photoCampaignManager = sub_B5D684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v130 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v130 + 24) )
        goto LABEL_110;
      *(_QWORD *)(v130 + 32) = v138;
      sub_B5D560((BattleServantConfConponent_o *)(v130 + 32), v138, v132, v133, v134, v135, v136, v137);
      if ( !v127 )
        goto LABEL_109;
      photoCampaignManager = (__int64)ServantEntity__getClassName(v127, 0LL);
      v145 = (System_Int32_array **)photoCampaignManager;
      if ( !photoCampaignManager
        || (photoCampaignManager = sub_B5D684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v130 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v130 + 24) <= 1u )
          goto LABEL_110;
        *(_QWORD *)(v130 + 40) = v145;
        sub_B5D560((BattleServantConfConponent_o *)(v130 + 40), v145, v139, v140, v141, v142, v143, v144);
        v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.limitCount, 0LL);
        photoCampaignManager = (__int64)ServantEntity__getName(v127, v146, -1, 0LL);
        v153 = (System_Int32_array **)photoCampaignManager;
        if ( !photoCampaignManager
          || (photoCampaignManager = sub_B5D684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v130 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v130 + 24) <= 2u )
            goto LABEL_110;
          *(_QWORD *)(v130 + 48) = v153;
          sub_B5D560((BattleServantConfConponent_o *)(v130 + 48), v153, v147, v148, v149, v150, v151, v152);
          if ( !*v89 )
            goto LABEL_109;
          photoCampaignManager = (__int64)(*v89)->fields.userSvtEntity;
          if ( !photoCampaignManager )
            goto LABEL_109;
          v154 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
          photoCampaignManager = (__int64)Rarity__getRarityType(v154, 0LL);
          v161 = (System_Int32_array **)photoCampaignManager;
          if ( !photoCampaignManager
            || (photoCampaignManager = sub_B5D684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v130 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v130 + 24) <= 3u )
              goto LABEL_110;
            *(_QWORD *)(v130 + 56) = v161;
            sub_B5D560((BattleServantConfConponent_o *)(v130 + 56), v161, v155, v156, v157, v158, v159, v160);
            if ( !*v89 )
              goto LABEL_109;
            photoCampaignManager = (__int64)(*v89)->fields.servantEntity;
            if ( !photoCampaignManager )
              goto LABEL_109;
            photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
            v168 = (System_Int32_array **)photoCampaignManager;
            if ( !photoCampaignManager
              || (photoCampaignManager = sub_B5D684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v130 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v130 + 24) <= 4u )
                goto LABEL_110;
              *(_QWORD *)(v130 + 64) = v168;
              sub_B5D560((BattleServantConfConponent_o *)(v130 + 64), v168, v162, v163, v164, v165, v166, v167);
              v169 = *v89;
              if ( !*v89 )
                goto LABEL_109;
              v170 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v169->fields.userSvtEntity;
              if ( !v170 )
                goto LABEL_109;
              servantEntity = v169->fields.servantEntity;
              photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v170[6], 0LL);
              if ( !servantEntity )
                goto LABEL_109;
              photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 0LL);
              v178 = (System_Int32_array **)photoCampaignManager;
              if ( !photoCampaignManager
                || (photoCampaignManager = sub_B5D684(photoCampaignManager, *(_QWORD *)(*(_QWORD *)v130 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v130 + 24) > 5u )
                {
                  *(_QWORD *)(v130 + 72) = v178;
                  sub_B5D560((BattleServantConfConponent_o *)(v130 + 72), v178, v172, v173, v174, v175, v176, v177);
                  v179 = System_String__Format_44656512(v129, (System_Object_array *)v130, 0LL);
                  v180 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v181 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v183 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v183,
                    (Il2CppObject *)v73,
                    Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__0__,
                    0LL);
                  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_18201384(
                      Instance,
                      v128,
                      v179,
                      v180,
                      v181,
                      v183,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    goto LABEL_46;
                  }
                  goto LABEL_109;
                }
LABEL_110:
                v184 = sub_B5D6C8(photoCampaignManager);
                sub_B5D668(v184, 0LL);
              }
            }
          }
        }
      }
    }
    v185 = sub_B5D6BC(photoCampaignManager);
    sub_B5D668(v185, 0LL);
  }
  if ( !PhotoCampaignListViewItem__get_IsCanNotSelect((PhotoCampaignListViewItem_o *)photoCampaignManager, v75) )
  {
    selectedUsrSvtId = this->fields.selectedUsrSvtId;
    v107 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v107 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickServant__);
    v94 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v107, v107[3]);
    if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v94, 0, 0LL);
      PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(this, *v89, v122);
      return;
    }
    goto LABEL_44;
  }
  v101 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
    v101 = (_QWORD *)sub_B5D5CC(Method_PhotoCampaignComponent_OnClickServant__);
  v102 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v101, v101[3]);
  OverwriteAssetSoundName__PlaySystemSe(v102, 2, 0LL);
  v103 = this->fields.photoCampaignManager;
  v104 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B5D694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v105 = (int)Method_PhotoCampaignComponent_OnClickServant__;
LABEL_47:
  v108 = (System_Int32_array **)v104;
  PhotoCampaignListViewManager_CallbackFunc___ctor(v104, (Il2CppObject *)this, v105, 0LL);
  if ( !v103 )
    goto LABEL_109;
  v103->fields.callbackFunc = (struct PhotoCampaignListViewManager_CallbackFunc_o *)v108;
  sub_B5D560((BattleServantConfConponent_o *)&v103->fields.callbackFunc, v108, v109, v110, v111, v112, v113, v114);
  PhotoCampaignListViewManager__SetMode_24609208(v103, 2, v115);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__Open(
        PhotoCampaignComponent_o *this,
        int32_t type,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t gameObject; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct MyRoomControl_o *myRoomControl; // x8
  UnityEngine_GameObject_o *v21; // x20
  PhotoCampaignComponent_o *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2

  if ( (byte_42E8389 & 1) == 0 )
  {
    sub_B5D5C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, type, equipId, *(_QWORD *)&genderType);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickServant__, v9, v10, v11);
    byte_42E8389 = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v14, v15, v16, v17, v18, v19);
  gameObject = (int64_t)this->fields.titleInfo;
  this->fields.photoType = type;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
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
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v21
    || (UnityEngine_GameObject__SetActive(v21, gameObject & 1, 0LL),
        gameObject = PhotoCampaignComponent__GetLatestSelectedUsrSvtId(v22, v23),
        !this->fields.photoCampaignManager)
    || (PhotoCampaignListViewManager__CreateList(
          this->fields.photoCampaignManager,
          gameObject,
          this->fields.selectedUsrSvtId,
          v24),
        PhotoCampaignComponent__UpdateScaleChangeIconSprite(this, v25),
        photoCampaignManager = this->fields.photoCampaignManager,
        v27 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B5D694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v27,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_B5D69C(gameObject, v13);
  }
  photoCampaignManager->fields.callbackFunc = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&photoCampaignManager->fields.callbackFunc,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  PhotoCampaignListViewManager__SetMode_24609208(photoCampaignManager, 2, v34);
  this->fields.state = 2;
}


void __fastcall PhotoCampaignComponent__PushRequest(
        PhotoCampaignComponent_o *this,
        PhotoCampaignListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  CommonUI_o *limitCountSupport; // x0
  __int64 v31; // x1
  CommonUI_o *v32; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x22
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v39; // q1
  UserServantEntity_Fields *p_fields; // x24
  struct UnityEngine_Transform_o *baseMount; // x8
  int64_t v42; // x0
  __int128 v43; // q0
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v46; // q0
  CardFavoriteRequest_o *v47; // x20
  int32_t v48; // w27
  int32_t v49; // w28
  int32_t v50; // w21
  bool IsLock; // w23
  char v52; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t randomSettingSupport; // w19
  int32_t v59; // [xsp+50h] [xbp-110h]
  int32_t v60; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v62; // [xsp+60h] [xbp-100h]
  struct SoundInfo_o *soundInfo; // [xsp+68h] [xbp-F8h]
  int64_t v64; // [xsp+70h] [xbp-F0h]
  struct UnityEngine_Transform_o *v65; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42E8390 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_PhotoCampaignComponent_EndPushRequest__, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42E8390 = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_23;
  v32 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v32 || !userSvtEntity )
    goto LABEL_23;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v32->fields.m_CachedPtr;
  v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v34 )
    goto LABEL_23;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  baseMount = v32->fields.baseMount;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = baseMount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v32->fields.soundInfo;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndPushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.imageLimitCount, 0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.dispLimitCount, 0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.iconLimitCount, 0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_23;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v56;
  *(_QWORD *)&v71.fields.currentCryptoKey = v57;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v47 )
LABEL_23:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v47,
    targetUsrSVtId,
    v60,
    v59,
    v48,
    v49,
    v50,
    soundInfo == (struct SoundInfo_o *)v62,
    IsLock,
    v52 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v65 != (struct UnityEngine_Transform_o *)v64,
    0LL);
}


void __fastcall PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(
        PhotoCampaignComponent_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x8
  __int64 v34; // x8
  __int128 v35; // q1
  MyRoomControl_o *myRoomControl; // x20
  int64_t v37; // x21
  System_Action_bool__int__o *v38; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-40h]

  if ( (byte_42E838F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__int___ctor__, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_bool__int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, v15, v16, v17);
    byte_42E838F = 1;
  }
  v18 = sub_B5D694(PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo);
  PhotoCampaignComponent___c__DisplayClass40_0___ctor((PhotoCampaignComponent___c__DisplayClass40_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_11;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = item;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)item, v27, v28, v29, v30, v31, v32);
  v33 = *(_QWORD *)(v18 + 24);
  if ( !v33 )
    goto LABEL_11;
  v34 = *(_QWORD *)(v33 + 112);
  if ( !v34 )
    goto LABEL_11;
  v35 = *(_OWORD *)(v34 + 32);
  myRoomControl = this->fields.myRoomControl;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v34 + 16);
  *(_OWORD *)&v40.fields.fakeValue = v35;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v39 = v40;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v39, 0LL);
  v38 = (System_Action_bool__int__o *)sub_B5D694(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v38,
    (Il2CppObject *)v18,
    Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__0__,
    (const MethodInfo_2597088 *)Method_System_Action_bool__int___ctor__);
  if ( !myRoomControl )
LABEL_11:
    sub_B5D69C(v19, v20);
  MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v37, v38, -1, 0LL);
}


void __fastcall PhotoCampaignComponent__SetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x0
  int64_t v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = usrSvtId;
  if ( (byte_42E838B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10770/*"PhotoCampaignSelectedUsrSvtId2024"*/, usrSvtId, (_DWORD)method, v3);
    byte_42E838B = 1;
  }
  v4 = System_Int64__ToString((int64_t)&v5, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10770/*"PhotoCampaignSelectedUsrSvtId2024"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__SetModeTabKind(
        PhotoCampaignComponent_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v43; // x8
  System_String_o **v44; // x8
  System_String_o **v45; // x8
  __int64 *v46; // x8
  const MethodInfo *v47; // x2
  UILabel_o *infoLb; // x21
  struct PhotoCampaignListViewManager_o *v49; // x8
  struct PhotoCampaignListViewManager_o **p_photoCampaignManager; // x19
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // t1
  UILabel_o *v52; // x21
  __int64 *v53; // x8
  struct PhotoCampaignListViewManager_o *v54; // x8
  struct PhotoCampaignListViewManager_o *v55; // t1
  const MethodInfo *v56; // x2

  if ( (byte_42E8397 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_7121/*"HEADER_MSG_PHOTO_SERVANT"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v39, v40, v41);
    byte_42E8397 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_54;
    v43 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17350/*"button_select_unreg"*/ : &StringLiteral_17349/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v43, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_54;
    v44 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17335/*"button_alllock_reg"*/ : &StringLiteral_17336/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v44, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_54;
    v45 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17333/*"button_allchoice_reg"*/ : &StringLiteral_17334/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v45, 0LL);
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
LABEL_54:
      sub_B5D69C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v46 = &StringLiteral_17347/*"button_push_reg"*/;
    else
      v46 = &StringLiteral_17348/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v46, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7121/*"HEADER_MSG_PHOTO_SERVANT"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_54;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        photoCampaignManager = this->fields.photoCampaignManager;
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        v49 = photoCampaignManager;
        if ( !photoCampaignManager )
          goto LABEL_54;
        v49->fields.isCanNotLongPush = 0;
        goto LABEL_51;
      case 1:
        v52 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v53 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_47;
      case 2:
        v52 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v53 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_47;
      case 3:
        v52 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v53 = &StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_47:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v53, 0LL);
        if ( !v52 )
          goto LABEL_54;
        UILabel__set_text(v52, (System_String_o *)normalTabButton, 0LL);
        v55 = this->fields.photoCampaignManager;
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        v54 = v55;
        if ( !v55 )
          goto LABEL_54;
        v54->fields.isCanNotLongPush = 1;
LABEL_51:
        normalTabButton = (UnityEngine_Behaviour_o *)*p_photoCampaignManager;
        if ( !*p_photoCampaignManager )
          goto LABEL_54;
        PhotoCampaignListViewManager__UpdateDisplayState(
          (PhotoCampaignListViewManager_o *)normalTabButton,
          modeKind == 3,
          v47);
        normalTabButton = (UnityEngine_Behaviour_o *)*p_photoCampaignManager;
        if ( !*p_photoCampaignManager )
          goto LABEL_54;
        PhotoCampaignListViewManager__SetMode_24609208((PhotoCampaignListViewManager_o *)normalTabButton, 2, v56);
        break;
      default:
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        goto LABEL_51;
    }
  }
}


void __fastcall PhotoCampaignComponent__StatusRequest(
        PhotoCampaignComponent_o *this,
        PhotoCampaignComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t tabModeKind; // w8
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w4
  bool v27; // w5
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  NetworkManager_ResultCallbackFunc_o *v34; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42E8398 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_PhotoCampaignComponent_EndStatusSync__, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E8398 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_23;
    if ( PhotoCampaignListViewManager__GetSwapChoiceList(photoCampaignManager, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v34,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v34,
                                                                 (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v24 = unchoiceList;
        v25 = choiceList;
        v27 = 1;
        v26 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B5D69C(photoCampaignManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_23;
    if ( PhotoCampaignListViewManager__GetSwapLockList(photoCampaignManager, &lockList, &unlockList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v23,
                                                                 (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v24 = unlockList;
        v25 = lockList;
        v26 = 1;
        v27 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v25, v24, 0, v26, v27, 0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    PhotoCampaignComponent_RequestCallbackFunc__Invoke(callback, 0, 0LL);
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
    sub_B5D69C(photoCampaignManager, method);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall PhotoCampaignComponent_RequestCallbackFunc__BeginInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_42E5AA7 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E5AA7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent_RequestCallbackFunc__Invoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PhotoCampaignComponent_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PhotoCampaignComponent_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PhotoCampaignComponent_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_42E5AA3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__, v9, v10, v11);
    byte_42E5AA3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass39_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18202348(v14, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(Instance, v13);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass39_0___OnClickServant_b__1(
        PhotoCampaignComponent___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  PhotoCampaignComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  PhotoCampaignComponent__PushRequest(_4__this, this->fields.item, 0LL);
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
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  char v22; // w1
  int v23; // w2
  __int64 v24; // x3
  char v25; // w1
  int v26; // w2
  __int64 v27; // x3
  char v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x20
  __int64 v32; // x0
  __int64 v33; // x1
  struct PhotoCampaignComponent_o *_4__this; // x24
  PhotoCampaignListViewManager_o *photoCampaignManager; // x22
  __int64 v36; // x23
  __int64 v37; // x9
  struct PhotoCampaignComponent_o *v38; // x21
  int32_t photoType; // w8
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v42; // q1
  int64_t v43; // x0
  MyRoomControl_o *myRoomControl; // x21
  System_Action_int__int__o *v45; // x22
  System_Action_o *_9__2; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-50h]

  if ( (byte_42E5AA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__int___ctor__, result, imageLimitCount, method);
    sub_B5D5C4(&System_Action_int__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Action_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickServant__, v19, v20, v21);
    sub_B5D5C4(
      &Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__,
      v25,
      v26,
      v27);
    sub_B5D5C4(&PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo, v28, v29, v30);
    byte_42E5AA4 = 1;
  }
  v31 = sub_B5D694(PhotoCampaignComponent___c__DisplayClass40_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_21;
  *(_QWORD *)(v31 + 24) = this;
  sub_B5D560(v31 + 24);
  *(_DWORD *)(v31 + 16) = imageLimitCount;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  photoCampaignManager = _4__this->fields.photoCampaignManager;
  v36 = sub_B5D694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v37 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v36 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v36 + 16) = v37;
  *(_QWORD *)(v36 + 32) = _4__this;
  sub_B5D560(v36 + 32);
  if ( !photoCampaignManager )
    goto LABEL_21;
  PhotoCampaignListViewManager__SetMode(
    photoCampaignManager,
    2,
    (PhotoCampaignListViewManager_CallbackFunc_o *)v36,
    0LL);
  if ( !result )
    return;
  v38 = this->fields.__4__this;
  if ( !v38 )
    goto LABEL_21;
  photoType = v38->fields.photoType;
  if ( photoType == 1 )
  {
    myRoomControl = v38->fields.myRoomControl;
    v45 = (System_Action_int__int__o *)sub_B5D694(System_Action_int__int__TypeInfo);
    System_Action_int__int____ctor(
      v45,
      (Il2CppObject *)v31,
      Method_PhotoCampaignComponent___c__DisplayClass40_1__RecursiveOpenSelectImageLimitDialog_b__1__,
      (const MethodInfo_2597CC8 *)Method_System_Action_int__int___ctor__);
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass40_0__RecursiveOpenSelectImageLimitDialog_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B5D560(&this->fields.__9__2);
    }
    if ( myRoomControl )
    {
      MyRoomControl__OpenMasterEquipSettingDialog(myRoomControl, v45, _9__2, 0LL);
      return;
    }
    goto LABEL_21;
  }
  if ( photoType )
    return;
  item = this->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0LL )
LABEL_21:
    sub_B5D69C(v32, v33);
  v42 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v42;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v47 = v48;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v47, 0LL);
  PhotoCampaignComponent__OnClickDecide(v38, v43, *(_DWORD *)(v31 + 16), 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___RecursiveOpenSelectImageLimitDialog_b__2(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  PhotoCampaignComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  PhotoCampaignComponent__RecursiveOpenSelectImageLimitDialog(_4__this, this->fields.item, 0LL);
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
  struct PhotoCampaignComponent_o *_4__this; // x8
  struct PhotoCampaignComponent___c__DisplayClass40_0_o *v9; // x8
  struct PhotoCampaignComponent_o *v10; // x8
  struct PhotoCampaignComponent___c__DisplayClass40_0_o *v11; // x8
  struct PhotoCampaignListViewItem_o *item; // x9
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v14; // q1
  PhotoCampaignComponent_o *v15; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_42E5AA5 & 1) == 0 )
  {
    this = (PhotoCampaignComponent___c__DisplayClass40_1_o *)sub_B5D5C4(
                                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                               equipId,
                                                               genderType,
                                                               method);
    byte_42E5AA5 = 1;
  }
  CS___8__locals1 = v6->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields.selectedMasterEquipId = equipId;
  v9 = v6->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_15;
  v10 = v9->fields.__4__this;
  if ( !v10 )
    goto LABEL_15;
  v10->fields.selectedMasterGenderType = genderType;
  v11 = v6->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_15;
  item = v11->fields.item;
  if ( !item )
    goto LABEL_15;
  userSvtEntity = item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_15;
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v15 = v11->fields.__4__this;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  this = (PhotoCampaignComponent___c__DisplayClass40_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                             &v16,
                                                             0LL);
  if ( !v15 )
LABEL_15:
    sub_B5D69C(this, *(_QWORD *)&equipId);
  PhotoCampaignComponent__OnClickDecide(v15, (int64_t)this, v6->fields.imageLimitCount, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PhotoCampaignComponent_o *_4__this; // x0
  struct PhotoCampaignComponent_o *v12; // x8
  struct PhotoCampaignComponent_o *v13; // x8
  struct PhotoCampaignComponent_o *v14; // x20
  PhotoCampaignListViewManager_o *photoCampaignManager; // x19
  __int64 v16; // x21
  __int64 v17; // x9

  if ( (byte_42E5AA6 & 1) == 0 )
  {
    sub_B5D5C4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PhotoCampaignComponent_OnClickServant__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, v8, v9, v10);
    byte_42E5AA6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    PhotoCampaignComponent__Init(_4__this, 0LL);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = (PhotoCampaignComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)_4__this,
                                               0LL);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          _4__this = (PhotoCampaignComponent_o *)v12->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B5D69C(_4__this, method);
  }
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_18;
    _4__this = (PhotoCampaignComponent_o *)v13->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_18;
  photoCampaignManager = v14->fields.photoCampaignManager;
  v16 = sub_B5D694(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v17 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v16 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v16 + 16) = v17;
  *(_QWORD *)(v16 + 32) = v14;
  sub_B5D560(v16 + 32);
  if ( !photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__SetMode(
    photoCampaignManager,
    2,
    (PhotoCampaignListViewManager_CallbackFunc_o *)v16,
    0LL);
}