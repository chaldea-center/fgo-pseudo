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
  __int64 v10; // x1
  PhotoCampaignComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4186ABB & 1) == 0 )
  {
    sub_B2C35C(&Method_PhotoCampaignComponent_EndCancelButton__, callback);
    sub_B2C35C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v10);
    byte_4186ABB = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B2C42C(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
  PhotoCampaignComponent_RequestCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndCancelButton__,
    0LL);
  PhotoCampaignComponent__StatusRequest(this, v11, v12);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v21; // x20

  if ( (byte_4186AC0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_PhotoCampaignComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__, v9);
    sub_B2C35C(&PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_4186AC0 = 1;
  }
  v11 = sub_B2C42C(PhotoCampaignComponent___c__DisplayClass40_0_TypeInfo);
  PhotoCampaignComponent___c__DisplayClass40_0___ctor((PhotoCampaignComponent___c__DisplayClass40_0_o *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v11 + 24),
          (System_Int32_array **)this,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v11,
          Method_PhotoCampaignComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v12, v13);
  }
  CommonUI__CloseServantStatusDialog(Instance, v21, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4186ABC & 1) == 0 )
  {
    sub_B2C35C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickServant__, v5);
    byte_4186ABC = 1;
  }
  if ( isRequest )
  {
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager
      || (PhotoCampaignListViewManager__ModifyList(photoCampaignManager, 0, method),
          v7 = this->fields.photoCampaignManager,
          v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B2C42C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
          PhotoCampaignListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_B2C434(photoCampaignManager, isRequest);
    }
    v7->fields.callbackFunc = v8;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    PhotoCampaignListViewManager__SetMode_23468788(v7, 2, v15);
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
      sub_B2C434(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_23468788(photoCampaignManager, 2, v5);
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
      sub_B2C434(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_23468788(photoCampaignManager, 2, v5);
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
      sub_B2C434(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_23468788(photoCampaignManager, 2, v5);
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
      sub_B2C434(photoCampaignManager, isRequest);
    }
    PhotoCampaignListViewManager__SetMode_23468788(photoCampaignManager, 2, v5);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4186ABF & 1) == 0 )
  {
    sub_B2C35C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickServant__, v4);
    byte_4186ABF = 1;
  }
  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__UpdateDisplayState(photoCampaignManager, 1, method),
        (photoCampaignManager = this->fields.photoCampaignManager) == 0LL)
    || (PhotoCampaignListViewManager__ModifyItem(photoCampaignManager, this->fields.usrSvtId, v6),
        v7 = this->fields.photoCampaignManager,
        v8 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B2C42C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !v7) )
  {
    sub_B2C434(photoCampaignManager, result);
  }
  v7->fields.callbackFunc = v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  PhotoCampaignListViewManager__SetMode_23468788(v7, 2, v15);
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
    sub_B2C2F8(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PhotoCampaignComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
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
  int64_t result; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_4186AB9 & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10648/*"PhotoCampaignSelectedUsrSvtId"*/, v2);
    byte_4186AB9 = 1;
  }
  result = 0LL;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_10648/*"PhotoCampaignSelectedUsrSvtId"*/,
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


System_String_o *__fastcall PhotoCampaignComponent__GetTitleMessage(
        PhotoCampaignComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 *v5; // x8

  if ( (byte_4186AC9 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_7039/*"HEADER_MSG_PHOTO_SERVANT_SELECTED"*/, v3);
    sub_B2C35C(&StringLiteral_7038/*"HEADER_MSG_PHOTO_SERVANT"*/, v4);
    byte_4186AC9 = 1;
  }
  if ( (this->fields.selectedUsrSvtId & 0x8000000000000000LL) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_7038/*"HEADER_MSG_PHOTO_SERVANT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_7039/*"HEADER_MSG_PHOTO_SERVANT_SELECTED"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v5, 0LL);
}


void __fastcall PhotoCampaignComponent__Init(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  photoCampaignManager = this->fields.photoCampaignManager;
  if ( !photoCampaignManager
    || (PhotoCampaignListViewManager__DestroyList(photoCampaignManager, method),
        infoLb = this->fields.infoLb,
        this->fields.state = 0,
        photoCampaignManager = (PhotoCampaignListViewManager_o *)PhotoCampaignComponent__GetTitleMessage(this, v5),
        !infoLb) )
  {
    sub_B2C434(photoCampaignManager, method);
  }
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
  const MethodInfo *v10; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4186AC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_PhotoCampaignComponent_EndClickTabChoice__, method);
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickChoiceTabButton__, v3);
    sub_B2C35C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4186AC3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickChoiceTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B2C42C(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabChoice__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v9, v10);
        return;
      }
      v11 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B2C42C(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabChoice__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v11, v12);
    }
    PhotoCampaignComponent__SetModeTabKind(this, 2, v7);
  }
}


void __fastcall PhotoCampaignComponent__OnClickDecide(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int64_t selectedUsrSvtId; // x1
  PhotoCampaignComponent_o *v8; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4186AC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickDecide__, method);
    byte_4186AC8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tabModeKind || (this->fields.selectedUsrSvtId & 0x8000000000000000LL) != 0 )
    {
      v3 = Method_PhotoCampaignComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickDecide__ + 75) & 2) != 0 )
        v3 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0LL);
    }
    else
    {
      v5 = Method_PhotoCampaignComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickDecide__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
      selectedUsrSvtId = this->fields.selectedUsrSvtId;
      this->fields.state = 4;
      PhotoCampaignComponent__SetLatestSelectedUsrSvtId(v8, selectedUsrSvtId, v9);
      myRoomControl = this->fields.myRoomControl;
      if ( !myRoomControl )
        sub_B2C434(0LL, v10);
      MyRoomControl__DispPhotoCampaign(
        myRoomControl,
        this->fields.selectedUsrSvtId,
        this->fields.selectedImageLimitCount,
        0LL);
    }
  }
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
  const MethodInfo *v10; // x2
  PhotoCampaignComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4186AC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_PhotoCampaignComponent_EndClickTabLock__, method);
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickLockTabButton__, v3);
    sub_B2C35C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4186AC2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickLockTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B2C42C(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
        PhotoCampaignComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_PhotoCampaignComponent_EndClickTabLock__,
          0LL);
        PhotoCampaignComponent__StatusRequest(this, v9, v10);
        return;
      }
      v11 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B2C42C(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
      PhotoCampaignComponent_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndClickTabLock__,
        0LL);
      PhotoCampaignComponent__StatusRequest(this, v11, v12);
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
  const MethodInfo *v8; // x2

  if ( (byte_4186AC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_PhotoCampaignComponent_EndClickTabNormal__, method);
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickNormalTabButton__, v3);
    sub_B2C35C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4186AC1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PhotoCampaignComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickNormalTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B2C42C(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabNormal__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v7, v8);
  }
}


void __fastcall PhotoCampaignComponent__OnClickPushTabButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4186AC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_PhotoCampaignComponent_EndClickTabPush__, method);
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickPushTabButton__, v3);
    sub_B2C35C(&PhotoCampaignComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4186AC4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_PhotoCampaignComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickPushTabButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (PhotoCampaignComponent_RequestCallbackFunc_o *)sub_B2C42C(PhotoCampaignComponent_RequestCallbackFunc_TypeInfo);
    PhotoCampaignComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PhotoCampaignComponent_EndClickTabPush__,
      0LL);
    PhotoCampaignComponent__StatusRequest(this, v7, v8);
  }
}


void __fastcall PhotoCampaignComponent__OnClickScaleChange(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  PhotoCampaignListViewManager_o *photoCampaignManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4186AC7 & 1) == 0 )
  {
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickScaleChange__, method);
    byte_4186AC7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoCampaignComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickScaleChange__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    photoCampaignManager = this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      sub_B2C434(0LL, v5);
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x20
  __int64 photoCampaignManager; // x0
  const MethodInfo *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  MethodInfo *v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **Item; // x1
  PhotoCampaignListViewItem_o **v48; // x21
  __int64 v49; // x8
  __int128 v50; // q1
  int32_t tabModeKind; // w8
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  int32_t v54; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v56; // x20
  ServantStatusDialog_ResultDelegate_o *v57; // x22
  _QWORD *v58; // x0
  _QWORD *v59; // x0
  struct PhotoCampaignListViewManager_o *v60; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x2
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  struct UserServantEntity_o *v71; // x8
  __int128 v72; // q0
  int64_t v73; // x0
  int64_t selectedUsrSvtId; // x22
  _QWORD *v75; // x0
  System_Reflection_MethodBase_o *v76; // x0
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  const MethodInfo *v79; // x1
  _QWORD *v80; // x0
  System_Reflection_MethodBase_o *v81; // x0
  const MethodInfo *v82; // x2
  int64_t v83; // x22
  struct UserServantEntity_o *v84; // x8
  __int128 v85; // q0
  _QWORD *v86; // x0
  UILabel_o *infoLb; // x20
  UserServantEntity_o *Entity; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v89; // x22
  __int64 v90; // x23
  __int64 v91; // x24
  ServantEntity_o *v92; // x26
  System_String_o *v93; // x22
  System_String_o *v94; // x23
  System_Object_array *v95; // x24
  int32_t Rarity; // w27
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x27
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x27
  int32_t v111; // w0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x25
  int32_t v119; // w0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x25
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x25
  PhotoCampaignListViewItem_o *v134; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v135; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x21
  System_String_o *v144; // x21
  System_String_o *v145; // x23
  System_String_o *v146; // x24
  CommonUI_o *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v148; // x26
  struct UserServantEntity_o *v149; // x8
  __int128 v150; // q0
  MyRoomControl_o *myRoomControl; // x19
  int64_t v152; // x21
  System_Action_bool__int__o *v153; // x22
  __int64 v154; // x0
  __int64 v155; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  if ( (byte_4186ABD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__int___ctor__, *(_QWORD *)&kind);
    sub_B2C35C(&System_Action_bool__int__TypeInfo, v7);
    sub_B2C35C(&BalanceConfig_TypeInfo, v8);
    sub_B2C35C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&object___TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B2C35C(&Method_PhotoCampaignComponent_CloseSvtDetail__, v20);
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickServant__, v21);
    sub_B2C35C(&Rarity_TypeInfo, v22);
    sub_B2C35C(&ServantStatusDialog_ResultDelegate_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_B2C35C(&Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__0__, v25);
    sub_B2C35C(&Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__1__, v26);
    sub_B2C35C(&PhotoCampaignComponent___c__DisplayClass37_0_TypeInfo, v27);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v28);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v29);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v30);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v31);
    byte_4186ABD = 1;
  }
  v32 = sub_B2C42C(PhotoCampaignComponent___c__DisplayClass37_0_TypeInfo);
  PhotoCampaignComponent___c__DisplayClass37_0___ctor((PhotoCampaignComponent___c__DisplayClass37_0_o *)v32, 0LL);
  if ( !v32 )
    goto LABEL_126;
  *(_QWORD *)(v32 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 16), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  if ( (n & 0x80000000) != 0 )
  {
    Item = 0LL;
  }
  else
  {
    photoCampaignManager = (__int64)this->fields.photoCampaignManager;
    if ( !photoCampaignManager )
      goto LABEL_126;
    Item = (System_Int32_array **)PhotoCampaignListViewManager__GetItem(
                                    (PhotoCampaignListViewManager_o *)photoCampaignManager,
                                    n,
                                    v41);
  }
  *(_QWORD *)(v32 + 24) = Item;
  v48 = (PhotoCampaignListViewItem_o **)(v32 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 24), Item, (System_String_array **)v41, v42, v43, v44, v45, v46);
  if ( !*(_QWORD *)(v32 + 24) )
    goto LABEL_126;
  v49 = *(_QWORD *)(*(_QWORD *)(v32 + 24) + 112LL);
  if ( !v49 )
    goto LABEL_126;
  v50 = *(_OWORD *)(v49 + 32);
  *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)(v49 + 16);
  *(_OWORD *)&v160.fields.fakeValue = v50;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v159 = v160;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v159, 0LL);
  this->fields.usrSvtId = photoCampaignManager;
  if ( kind == 1 )
  {
    photoCampaignManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v48 )
    {
      userSvtEntity = (*v48)->fields.userSvtEntity;
      v56 = (CommonUI_o *)photoCampaignManager;
      v57 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v57,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_CloseSvtDetail__,
        0LL);
      if ( v56 )
      {
        CommonUI__OpenServantStatusDialog_17982572(v56, 0, userSvtEntity, v57, 0LL);
        return;
      }
    }
    goto LABEL_126;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v48 )
      goto LABEL_126;
    (*v48)->fields.isSwapChoice ^= 1u;
    v58 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v58 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickServant__);
    v53 = (System_Reflection_MethodBase_o *)sub_B2C340(v58, v58[3]);
    v54 = 0;
    goto LABEL_37;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v48 )
      goto LABEL_126;
    (*v48)->fields.isSwapLock ^= 1u;
    v52 = Method_PhotoCampaignComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
      v52 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickServant__);
    v53 = (System_Reflection_MethodBase_o *)sub_B2C340(v52, v52[3]);
    v54 = 11;
    goto LABEL_37;
  }
  photoCampaignManager = (__int64)*v48;
  if ( !*v48 )
    goto LABEL_126;
  if ( tabModeKind != 3 )
  {
    photoCampaignManager = PhotoCampaignListViewItem__get_IsCanNotSelect(
                             (PhotoCampaignListViewItem_o *)photoCampaignManager,
                             v34);
    if ( (photoCampaignManager & 1) != 0 )
    {
      v69 = Method_PhotoCampaignComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
        v69 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickServant__);
      v70 = (System_Reflection_MethodBase_o *)sub_B2C340(v69, v69[3]);
    }
    else
    {
      if ( !*v48 )
        goto LABEL_126;
      v71 = (*v48)->fields.userSvtEntity;
      if ( !v71 )
        goto LABEL_126;
      v72 = *(_OWORD *)&v71->fields.id.fields.fakeValue;
      *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&v71->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v160.fields.fakeValue = v72;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v157 = v160;
      v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v157, 0LL);
      selectedUsrSvtId = this->fields.selectedUsrSvtId;
      if ( v73 == selectedUsrSvtId )
      {
        v75 = Method_PhotoCampaignComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
          v75 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickServant__);
        v76 = (System_Reflection_MethodBase_o *)sub_B2C340(v75, v75[3]);
        OverwriteAssetSoundName__PlaySystemSe(v76, 1, 0LL);
        photoCampaignManager = (__int64)this->fields.photoCampaignManager;
        this->fields.selectedUsrSvtId = -1LL;
        this->fields.selectedImageLimitCount = 0;
        if ( !photoCampaignManager )
          goto LABEL_126;
        PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(
          (PhotoCampaignListViewManager_o *)photoCampaignManager,
          -1LL,
          v77);
        PhotoCampaignComponent__SetConfirmButton(this, v78);
        goto LABEL_70;
      }
      v86 = Method_PhotoCampaignComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
        v86 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickServant__);
      v70 = (System_Reflection_MethodBase_o *)sub_B2C340(v86, v86[3]);
      if ( (selectedUsrSvtId & 0x8000000000000000LL) != 0 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
        if ( *v48 )
        {
          v149 = (*v48)->fields.userSvtEntity;
          if ( v149 )
          {
            v150 = *(_OWORD *)&v149->fields.id.fields.fakeValue;
            myRoomControl = this->fields.myRoomControl;
            *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&v149->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v160.fields.fakeValue = v150;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v156 = v160;
            v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v156, 0LL);
            v153 = (System_Action_bool__int__o *)sub_B2C42C(System_Action_bool__int__TypeInfo);
            System_Action_bool__int____ctor(
              v153,
              (Il2CppObject *)v32,
              Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__0__,
              (const MethodInfo_24C7840 *)Method_System_Action_bool__int___ctor__);
            if ( myRoomControl )
            {
              MyRoomControl__OpenSelectImageLimit(myRoomControl, 26, v152, v153, -1, 0LL);
              return;
            }
          }
        }
        goto LABEL_126;
      }
    }
    OverwriteAssetSoundName__PlaySystemSe(v70, 2, 0LL);
LABEL_70:
    infoLb = this->fields.infoLb;
    photoCampaignManager = (__int64)PhotoCampaignComponent__GetTitleMessage(this, v79);
    if ( infoLb )
    {
      UILabel__set_text(infoLb, (System_String_o *)photoCampaignManager, 0LL);
      goto LABEL_38;
    }
LABEL_126:
    sub_B2C434(photoCampaignManager, v34);
  }
  if ( *(_QWORD *)(photoCampaignManager + 112) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(photoCampaignManager + 112), 0LL) )
    {
LABEL_34:
      v59 = Method_PhotoCampaignComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
        v59 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickServant__);
      v53 = (System_Reflection_MethodBase_o *)sub_B2C340(v59, v59[3]);
      v54 = 2;
LABEL_37:
      OverwriteAssetSoundName__PlaySystemSe(v53, v54, 0LL);
      goto LABEL_38;
    }
    photoCampaignManager = (__int64)*v48;
    if ( !*v48 )
      goto LABEL_126;
  }
  if ( PhotoCampaignListViewItem__get_IsHerioneReave((PhotoCampaignListViewItem_o *)photoCampaignManager, v34) )
    goto LABEL_34;
  v80 = Method_PhotoCampaignComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_PhotoCampaignComponent_OnClickServant__ + 75) & 2) != 0 )
    v80 = (_QWORD *)sub_B2C364(Method_PhotoCampaignComponent_OnClickServant__);
  v81 = (System_Reflection_MethodBase_o *)sub_B2C340(v80, v80[3]);
  OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0LL);
  photoCampaignManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !photoCampaignManager )
    goto LABEL_126;
  v83 = *(_QWORD *)(photoCampaignManager + 120);
  if ( !v83 )
  {
LABEL_65:
    PhotoCampaignComponent__PushRequest(this, *v48, v82);
    goto LABEL_38;
  }
  if ( !*v48 )
    goto LABEL_126;
  v84 = (*v48)->fields.userSvtEntity;
  if ( !v84 )
    goto LABEL_126;
  v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
  *(_OWORD *)&v160.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v160.fields.fakeValue = v85;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v158 = v160;
  if ( v83 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v158, 0LL) )
    goto LABEL_65;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  photoCampaignManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !photoCampaignManager )
    goto LABEL_126;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)photoCampaignManager,
             v83,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  photoCampaignManager = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity )
    goto LABEL_126;
  v89 = (DataMasterBase_WarMaster__WarEntity__int__o *)photoCampaignManager;
  v91 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v90 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v161.fields.currentCryptoKey = v91;
  *(_QWORD *)&v161.fields.fakeValue = v90;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v161, 0LL);
  if ( !v89 )
    goto LABEL_126;
  v92 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v89,
                             photoCampaignManager,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v95 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  photoCampaignManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
  if ( !v95 )
    goto LABEL_126;
  v103 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B2C41C(photoCampaignManager, v95->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( !v95->max_length )
    goto LABEL_127;
  v95->m_Items[0] = (Il2CppObject *)v103;
  sub_B2C2F8((BattleServantConfConponent_o *)v95->m_Items, v103, v97, v98, v99, v100, v101, v102);
  if ( !v92 )
    goto LABEL_126;
  photoCampaignManager = (__int64)ServantEntity__getClassName(v92, 0LL);
  v110 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B2C41C(photoCampaignManager, v95->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( v95->max_length <= 1 )
    goto LABEL_127;
  v95->m_Items[1] = (Il2CppObject *)v110;
  sub_B2C2F8((BattleServantConfConponent_o *)&v95->m_Items[1], v110, v104, v105, v106, v107, v108, v109);
  v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.limitCount, 0LL);
  photoCampaignManager = (__int64)ServantEntity__getName(v92, v111, -1, 0LL);
  v118 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B2C41C(photoCampaignManager, v95->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( v95->max_length <= 2 )
    goto LABEL_127;
  v95->m_Items[2] = (Il2CppObject *)v118;
  sub_B2C2F8((BattleServantConfConponent_o *)&v95->m_Items[2], v118, v112, v113, v114, v115, v116, v117);
  if ( !*v48 )
    goto LABEL_126;
  photoCampaignManager = (__int64)(*v48)->fields.userSvtEntity;
  if ( !photoCampaignManager )
    goto LABEL_126;
  v119 = UserServantEntity__getRarity((UserServantEntity_o *)photoCampaignManager, 0LL);
  photoCampaignManager = (__int64)Rarity__getRarityType(v119, 0LL);
  v126 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B2C41C(photoCampaignManager, v95->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( v95->max_length <= 3 )
    goto LABEL_127;
  v95->m_Items[3] = (Il2CppObject *)v126;
  sub_B2C2F8((BattleServantConfConponent_o *)&v95->m_Items[3], v126, v120, v121, v122, v123, v124, v125);
  if ( !*v48 )
    goto LABEL_126;
  photoCampaignManager = (__int64)(*v48)->fields.servantEntity;
  if ( !photoCampaignManager )
    goto LABEL_126;
  photoCampaignManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)photoCampaignManager, 0LL);
  v133 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B2C41C(photoCampaignManager, v95->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
      goto LABEL_128;
  }
  if ( v95->max_length <= 4 )
    goto LABEL_127;
  v95->m_Items[4] = (Il2CppObject *)v133;
  sub_B2C2F8((BattleServantConfConponent_o *)&v95->m_Items[4], v133, v127, v128, v129, v130, v131, v132);
  v134 = *v48;
  if ( !*v48 )
    goto LABEL_126;
  v135 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v134->fields.userSvtEntity;
  if ( !v135 )
    goto LABEL_126;
  servantEntity = v134->fields.servantEntity;
  photoCampaignManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v135[6], 0LL);
  if ( !servantEntity )
    goto LABEL_126;
  photoCampaignManager = (__int64)ServantEntity__getName(servantEntity, photoCampaignManager, -1, 0LL);
  v143 = (System_Int32_array **)photoCampaignManager;
  if ( photoCampaignManager )
  {
    photoCampaignManager = sub_B2C41C(photoCampaignManager, v95->obj.klass->_1.element_class);
    if ( !photoCampaignManager )
    {
LABEL_128:
      v155 = sub_B2C454();
      sub_B2C400(v155, 0LL);
    }
  }
  if ( v95->max_length <= 5 )
  {
LABEL_127:
    v154 = sub_B2C460(photoCampaignManager);
    sub_B2C400(v154, 0LL);
  }
  v95->m_Items[5] = (Il2CppObject *)v143;
  sub_B2C2F8((BattleServantConfConponent_o *)&v95->m_Items[5], v143, v137, v138, v139, v140, v141, v142);
  v144 = System_String__Format_44384256(v94, v95, 0LL);
  v145 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v146 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v148 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v148,
    (Il2CppObject *)v32,
    Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__1__,
    0LL);
  photoCampaignManager = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_126;
  CommonUI__OpenConfirmDialog_17970624(
    Instance,
    v93,
    v144,
    v145,
    v146,
    v148,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_38:
  v60 = this->fields.photoCampaignManager;
  v61 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B2C42C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  PhotoCampaignListViewManager_CallbackFunc___ctor(
    v61,
    (Il2CppObject *)this,
    (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
    0LL);
  if ( !v60 )
    goto LABEL_126;
  v60->fields.callbackFunc = v61;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v60->fields.callbackFunc,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  PhotoCampaignListViewManager__SetMode_23468788(v60, 2, v68);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__Open(
        PhotoCampaignComponent_o *this,
        bool isResetSelected,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t gameObject; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *v14; // x20
  PhotoCampaignComponent_o *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  PhotoCampaignListViewManager_CallbackFunc_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1

  if ( (byte_4186AB8 & 1) == 0 )
  {
    sub_B2C35C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, isResetSelected);
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickServant__, v5);
    byte_4186AB8 = 1;
  }
  if ( isResetSelected )
  {
    this->fields.selectedUsrSvtId = -1LL;
    this->fields.selectedImageLimitCount = 0;
  }
  PhotoCampaignComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v8, v9, v10, v11, v12, v13);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_12;
  TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)gameObject, 1, 60, 0, 0LL);
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
        v20 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B2C42C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo),
        PhotoCampaignListViewManager_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          (intptr_t)Method_PhotoCampaignComponent_OnClickServant__,
          0LL),
        !photoCampaignManager) )
  {
LABEL_12:
    sub_B2C434(gameObject, v7);
  }
  photoCampaignManager->fields.callbackFunc = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&photoCampaignManager->fields.callbackFunc,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  PhotoCampaignListViewManager__SetMode_23468788(photoCampaignManager, 2, v27);
  this->fields.state = 2;
  PhotoCampaignComponent__SetConfirmButton(this, v28);
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
  __int128 v22; // q1
  UserServantEntity_Fields *p_fields; // x24
  struct UnityEngine_Transform_o *baseMount; // x8
  int64_t v25; // x0
  __int128 v26; // q0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v29; // q0
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w27
  int32_t v32; // w28
  int32_t v33; // w21
  bool IsLock; // w23
  char v35; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t randomSettingSupport; // w19
  int32_t v42; // [xsp+50h] [xbp-110h]
  int32_t v43; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct SoundInfo_o *soundInfo; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct UnityEngine_Transform_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4186ABE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&Method_PhotoCampaignComponent_EndPushRequest__, v10);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4186ABE = 1;
  }
  limitCountSupport = (CommonUI_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_23;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  limitCountSupport = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_23;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
  if ( !v17 )
    goto LABEL_23;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_23;
  CommonUI__SetConnectMarkFadeInLag(limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  baseMount = v15->fields.baseMount;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = baseMount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  soundInfo = v15->fields.soundInfo;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_PhotoCampaignComponent_EndPushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.imageLimitCount, 0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.dispLimitCount, 0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.iconLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (CommonUI_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_23;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v39;
  *(_QWORD *)&v54.fields.currentCryptoKey = v40;
  limitCountSupport = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v30 )
LABEL_23:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    v43,
    v42,
    v31,
    v32,
    v33,
    soundInfo == (struct SoundInfo_o *)v45,
    IsLock,
    v35 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct UnityEngine_Transform_o *)v47,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent__SetConfirmButton(PhotoCampaignComponent_o *this, const MethodInfo *method)
{
  UIButtonColor_o *v3; // x20
  struct UIButtonColor_o *v4; // x0
  __int64 v5; // x1
  int v6; // s0
  UIButtonColor_c *klass; // x8
  UIButtonColor_o *confirmBtnColor; // x20
  int v12; // s0

  if ( !this->fields.tabModeKind && (this->fields.selectedUsrSvtId & 0x8000000000000000LL) == 0 )
  {
    confirmBtnColor = this->fields.confirmBtnColor;
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( confirmBtnColor )
    {
      UIButtonColor__set_defaultColor(confirmBtnColor, *(UnityEngine_Color_o *)&v12, 0LL);
      v4 = this->fields.confirmBtnColor;
      if ( v4 )
      {
        ((void (__fastcall *)(struct UIButtonColor_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._5_set_isEnabled.method)(
          v4,
          1LL,
          v4->klass->vtable._6_OnInit.methodPtr);
        v4 = this->fields.confirmBtnColor;
        if ( v4 )
        {
          klass = v4->klass;
          goto LABEL_11;
        }
      }
    }
LABEL_12:
    sub_B2C434(v4, v5);
  }
  v3 = this->fields.confirmBtnColor;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_grey(0LL);
  if ( !v3 )
    goto LABEL_12;
  UIButtonColor__set_defaultColor(v3, *(UnityEngine_Color_o *)&v6, 0LL);
  v4 = this->fields.confirmBtnColor;
  if ( !v4 )
    goto LABEL_12;
  ((void (__fastcall *)(struct UIButtonColor_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._5_set_isEnabled.method)(
    v4,
    0LL,
    v4->klass->vtable._6_OnInit.methodPtr);
  v4 = this->fields.confirmBtnColor;
  if ( !v4 )
    goto LABEL_12;
  klass = v4->klass;
LABEL_11:
  ((void (*)(void))klass->vtable._14_SetState.method)();
}


void __fastcall PhotoCampaignComponent__SetLatestSelectedUsrSvtId(
        PhotoCampaignComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = usrSvtId;
  if ( (byte_4186ABA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10648/*"PhotoCampaignSelectedUsrSvtId"*/, usrSvtId);
    byte_4186ABA = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_10648/*"PhotoCampaignSelectedUsrSvtId"*/, v3, 0LL);
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
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  System_String_o **v19; // x8
  System_String_o **v20; // x8
  const MethodInfo *v21; // x2
  UILabel_o *infoLb; // x21
  struct PhotoCampaignListViewManager_o *photoCampaignManager; // x8
  struct PhotoCampaignListViewManager_o **p_photoCampaignManager; // x21
  UILabel_o *v25; // x21
  __int64 *v26; // x8
  struct PhotoCampaignListViewManager_o *v27; // x8
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1

  if ( (byte_4186AC5 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, v6);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v7);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v8);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v9);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v12);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v13);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v14);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v15);
    byte_4186AC5 = 1;
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
    v17 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17140/*"button_select_unreg"*/ : &StringLiteral_17139/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v17, 0LL);
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
    v18 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17125/*"button_alllock_reg"*/ : &StringLiteral_17126/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v18, 0LL);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17123/*"button_allchoice_reg"*/ : &StringLiteral_17124/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v19, 0LL);
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
      sub_B2C434(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v20 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
    else
      v20 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v20, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        normalTabButton = (UnityEngine_Behaviour_o *)PhotoCampaignComponent__GetTitleMessage(
                                                       this,
                                                       *(const MethodInfo **)&modeKind);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        photoCampaignManager = this->fields.photoCampaignManager;
        if ( !photoCampaignManager )
          goto LABEL_51;
        photoCampaignManager->fields.isCanNotLongPush = 0;
        goto LABEL_48;
      case 1:
        v25 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = &StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_44;
      case 2:
        v25 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = &StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_44;
      case 3:
        v25 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = &StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_44:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v26, 0LL);
        if ( !v25 )
          goto LABEL_51;
        UILabel__set_text(v25, (System_String_o *)normalTabButton, 0LL);
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        v27 = this->fields.photoCampaignManager;
        if ( !v27 )
          goto LABEL_51;
        v27->fields.isCanNotLongPush = 1;
LABEL_48:
        normalTabButton = (UnityEngine_Behaviour_o *)*p_photoCampaignManager;
        if ( !*p_photoCampaignManager )
          goto LABEL_51;
        PhotoCampaignListViewManager__UpdateDisplayState(
          (PhotoCampaignListViewManager_o *)normalTabButton,
          modeKind == 3,
          v21);
        normalTabButton = (UnityEngine_Behaviour_o *)*p_photoCampaignManager;
        if ( !*p_photoCampaignManager )
          goto LABEL_51;
        PhotoCampaignListViewManager__SetMode_23468788((PhotoCampaignListViewManager_o *)normalTabButton, 2, v28);
        PhotoCampaignComponent__SetConfirmButton(this, v29);
        break;
      default:
        p_photoCampaignManager = &this->fields.photoCampaignManager;
        goto LABEL_48;
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // x2
  System_Int64_array *v19; // x1
  bool v20; // w4
  bool v21; // w5
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4186AC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_PhotoCampaignComponent_EndStatusSync__, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4186AC6 = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v28,
                                                                 (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v18 = unchoiceList;
        v19 = choiceList;
        v21 = 1;
        v20 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B2C434(photoCampaignManager, callback);
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      photoCampaignManager = (PhotoCampaignListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v17,
                                                                 (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( photoCampaignManager )
      {
        v18 = unlockList;
        v19 = lockList;
        v20 = 1;
        v21 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)photoCampaignManager, v19, v18, 0, v20, v21, 0LL);
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
    sub_B2C434(photoCampaignManager, method);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41852A9 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_41852A9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PhotoCampaignComponent_RequestCallbackFunc__EndInvoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent_RequestCallbackFunc__Invoke(
        PhotoCampaignComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PhotoCampaignComponent_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PhotoCampaignComponent_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PhotoCampaignComponent_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PhotoCampaignComponent_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
    goto LABEL_37;
  }
}


void __fastcall PhotoCampaignComponent___c__DisplayClass37_0___ctor(
        PhotoCampaignComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent___c__DisplayClass37_0___OnClickServant_b__0(
        PhotoCampaignComponent___c__DisplayClass37_0_o *this,
        bool result,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  PhotoCampaignComponent___c__DisplayClass37_0_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  struct PhotoCampaignListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v11; // q1
  struct PhotoCampaignComponent_o *_4__this; // x21
  struct PhotoCampaignComponent_o *v13; // x8
  struct PhotoCampaignComponent_o *v14; // x8
  struct PhotoCampaignComponent_o *v15; // x22
  PhotoCampaignListViewManager_o *photoCampaignManager; // x20
  __int64 v17; // x21
  __int64 v18; // x9
  UILabel_o *monitor; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  v6 = this;
  if ( (byte_41852A7 & 1) == 0 )
  {
    sub_B2C35C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)sub_B2C35C(
                                                               &Method_PhotoCampaignComponent_OnClickServant__,
                                                               v8);
    byte_41852A7 = 1;
  }
  if ( result )
  {
    item = v6->fields.item;
    if ( !item )
      goto LABEL_20;
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_20;
    v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    _4__this = v6->fields.__4__this;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v11;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v20 = v21;
    this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                               &v20,
                                                               0LL);
    if ( !_4__this
      || (_4__this->fields.selectedUsrSvtId = (int64_t)this, (v13 = v6->fields.__4__this) == 0LL)
      || (v13->fields.selectedImageLimitCount = imageLimitCount, (v14 = v6->fields.__4__this) == 0LL)
      || (this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)v14->fields.photoCampaignManager) == 0LL
      || (PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(
            (PhotoCampaignListViewManager_o *)this,
            v14->fields.selectedUsrSvtId,
            0LL),
          (this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)v6->fields.__4__this) == 0LL) )
    {
LABEL_20:
      sub_B2C434(this, result);
    }
    PhotoCampaignComponent__SetConfirmButton((PhotoCampaignComponent_o *)this, 0LL);
  }
  v15 = v6->fields.__4__this;
  if ( !v15 )
    goto LABEL_20;
  photoCampaignManager = v15->fields.photoCampaignManager;
  v17 = sub_B2C42C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v18 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v17 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v17 + 16) = v18;
  *(_QWORD *)(v17 + 32) = v15;
  sub_B2C2F8(v17 + 32, v15);
  if ( !photoCampaignManager )
    goto LABEL_20;
  PhotoCampaignListViewManager__SetMode(
    photoCampaignManager,
    2,
    (PhotoCampaignListViewManager_CallbackFunc_o *)v17,
    0LL);
  this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)v6->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  monitor = (UILabel_o *)this[1].monitor;
  this = (PhotoCampaignComponent___c__DisplayClass37_0_o *)PhotoCampaignComponent__GetTitleMessage(
                                                             (PhotoCampaignComponent_o *)this,
                                                             0LL);
  if ( !monitor )
    goto LABEL_20;
  UILabel__set_text(monitor, (System_String_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignComponent___c__DisplayClass37_0___OnClickServant_b__1(
        PhotoCampaignComponent___c__DisplayClass37_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__2; // x22

  if ( (byte_41852A6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__2__, v6);
    byte_41852A6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isDecide )
  {
    _9__2 = this->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_PhotoCampaignComponent___c__DisplayClass37_0__OnClickServant_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B2C2F8(&this->fields.__9__2, _9__2);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, _9__2, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass37_0___OnClickServant_b__2(
        PhotoCampaignComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  PhotoCampaignComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  PhotoCampaignComponent__PushRequest(_4__this, this->fields.item, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___ctor(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoCampaignComponent___c__DisplayClass40_0___CloseSvtDetail_b__0(
        PhotoCampaignComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PhotoCampaignComponent_o *_4__this; // x0
  struct PhotoCampaignComponent_o *v6; // x8
  struct PhotoCampaignComponent_o *v7; // x8
  struct PhotoCampaignComponent_o *v8; // x20
  PhotoCampaignListViewManager_o *photoCampaignManager; // x19
  __int64 v10; // x21
  __int64 v11; // x9

  if ( (byte_41852A8 & 1) == 0 )
  {
    sub_B2C35C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PhotoCampaignComponent_OnClickServant__, v3);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v4);
    byte_41852A8 = 1;
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
        v6 = this->fields.__4__this;
        if ( v6 )
        {
          _4__this = (PhotoCampaignComponent_o *)v6->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B2C434(_4__this, method);
  }
  if ( !_4__this->fields.photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__ModifyItem(_4__this->fields.photoCampaignManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_18;
    _4__this = (PhotoCampaignComponent_o *)v7->fields.photoCampaignManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_18;
  photoCampaignManager = v8->fields.photoCampaignManager;
  v10 = sub_B2C42C(PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
  v11 = *(_QWORD *)Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v10 + 40) = Method_PhotoCampaignComponent_OnClickServant__;
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 32) = v8;
  sub_B2C2F8(v10 + 32, v8);
  if ( !photoCampaignManager )
    goto LABEL_18;
  PhotoCampaignListViewManager__SetMode(
    photoCampaignManager,
    2,
    (PhotoCampaignListViewManager_CallbackFunc_o *)v10,
    0LL);
}