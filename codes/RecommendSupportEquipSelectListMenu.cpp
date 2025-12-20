void RecommendSupportEquipSelectListMenu___ctor(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D28535 & 1) == 0 )
  {
    sub_1C94098(&BaseMenu_TypeInfo);
    byte_4D28535 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void RecommendSupportEquipSelectListMenu__Awake(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  ;
}


void RecommendSupportEquipSelectListMenu__Close(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportEquipSelectListMenu__Close_35379880(this, 0, v2);
}


void RecommendSupportEquipSelectListMenu__Close_35379880(
        RecommendSupportEquipSelectListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4D28527 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndClose__);
    byte_4D28527 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v10);
  v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__EndCancelButton(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0

  if ( (byte_4D2852B & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2852B = 1;
  }
  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
LABEL_10:
      sub_1C942F0(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_35397960(supportServantEquipListViewManager, 3, 0);
  }
  RecommendSupportEquipSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_10;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantEquipListViewManager, 0, 0);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)this,
                                                                                         0);
  if ( !supportServantEquipListViewManager )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantEquipListViewManager, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__EndClickTabChoice(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
      sub_1C942F0(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_35397960(supportServantEquipListViewManager, 3, 0);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__EndClickTabLock(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
      sub_1C942F0(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_35397960(supportServantEquipListViewManager, 3, 0);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__EndClickTabNormal(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
      sub_1C942F0(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_35397960(supportServantEquipListViewManager, 3, 0);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 0, method);
}


void RecommendSupportEquipSelectListMenu__EndClose(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommendSupportEquipSelectListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C9403C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void RecommendSupportEquipSelectListMenu__EndCloseShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2852E & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
    byte_4D2852E = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v4 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
    0);
  if ( !supportServantEquipListViewManager )
    sub_1C942F0(v5, v6);
  RecommendSupportEquipSelectListViewManager__SetMode(supportServantEquipListViewManager, 2, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__EndDecide(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  bool v3; // w20
  int64_t supportServantEquipListViewManager; // x0
  RecommendSupportEquipSelectListViewItem_o *Item; // x20
  RecommendSupportData_o *v7; // x19
  const MethodInfo *v8; // x2
  int32_t v9; // w21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v11; // q1
  struct UserServantEntity_o *v12; // x8
  int64_t v13; // x20
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w3
  const MethodInfo *v17; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v3 = isRequest;
  if ( (byte_4D28529 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D28529 = 1;
  }
  if ( v3 )
  {
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    RecommendSupportEquipSelectListViewManager__ModifyList(
      (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
      0,
      0);
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    RecommendSupportEquipSelectListViewManager__SetMode_35397960(
      (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
      3,
      0);
  }
  *(_QWORD *)&isRequest = (unsigned int)this->fields.selectNum;
  this->fields.state = 3;
  if ( isRequest < 0 )
  {
    Item = 0;
  }
  else
  {
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    Item = RecommendSupportEquipSelectListViewManager__GetItem(
             (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
             isRequest,
             0);
    if ( Item )
      goto LABEL_15;
  }
  if ( !this->fields.isSelectedSvt )
  {
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_30;
    ListViewManager__SetScrollBarValue((ListViewManager_o *)supportServantEquipListViewManager, 0);
  }
LABEL_15:
  RecommendSupportEquipSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  v7 = *(RecommendSupportData_o **)(supportServantEquipListViewManager + 112);
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  v9 = *(_DWORD *)(supportServantEquipListViewManager + 120);
  if ( Item )
  {
    userSvtEntity = Item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v19.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v18 = v19;
      supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v18, 0);
      v12 = Item->fields.userSvtEntity;
      if ( v12 )
      {
        v13 = supportServantEquipListViewManager;
        v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v15;
        *(_QWORD *)&v20.fields.fakeValue = v14;
        supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v20, 0);
        if ( v7 )
        {
          RecommendSupportData__SetEquipData(v7, v9, v13, v16, v17);
          goto LABEL_28;
        }
      }
    }
LABEL_30:
    sub_1C942F0(supportServantEquipListViewManager, isRequest);
  }
  if ( !v7 )
    goto LABEL_30;
  RecommendSupportData__RemoveEquipData(v7, v9, v8);
LABEL_28:
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_30;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantEquipListViewManager, 0, 0);
}


void RecommendSupportEquipSelectListMenu__EndOpen(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppObject *Instance; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // w8

  if ( (byte_4D28526 & 1) == 0 )
  {
    sub_1C94098(&TutorialFlag_ImageId___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&TutorialFlag_TypeInfo);
    byte_4D28526 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_41176064(110, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = sub_1C94140(TutorialFlag_ImageId___TypeInfo, 2);
    if ( !v5 )
      goto LABEL_13;
    v7 = *(_DWORD *)(v5 + 24);
    v6 = v5;
    if ( !v7 || (*(_DWORD *)(v5 + 32) = 4, v7 == 1) )
      sub_1C942F8(v5);
    *(_DWORD *)(v5 + 36) = 5;
    if ( !Instance )
LABEL_13:
      sub_1C942F0(v5, v6);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, (TutorialFlag_ImageId_array *)v5, 110, 0, 0, 0, 0);
  }
  this->fields.state = 2;
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__EndShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4D2852D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2852D = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, 0),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
LABEL_9:
      sub_1C942F0(supportServantEquipListViewManager, isDecide);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_35397960(supportServantEquipListViewManager, 3, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__,
    0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0);
}


void RecommendSupportEquipSelectListMenu__EndStatusSync(
        RecommendSupportEquipSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_requestedCallback; // x0
  struct RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v9; // x19
  struct RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *requestedCallback; // t1

  requestedCallback = this->fields.requestedCallback;
  p_requestedCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requestedCallback;
  v9 = requestedCallback;
  if ( requestedCallback )
  {
    p_requestedCallback->klass = 0;
    sub_1C9403C(p_requestedCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
  }
}


void RecommendSupportEquipSelectListMenu__Init(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4D28524 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11673/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    byte_4D28524 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  RecommendSupportEquipSelectListViewManager__DestroyList(supportServantEquipListViewManager, 0);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)LocalizationManager__Get(
                                                                                         (System_String_o *)StringLiteral_11673/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/,
                                                                                         0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantEquipListViewManager, 0),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_9:
    sub_1C942F0(supportServantEquipListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled(normalTabButton, 0);
  UICommonButton__SetColliderEnable((UICommonButton_o *)normalTabButton, enabled, 1, 0);
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 0, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void RecommendSupportEquipSelectListMenu__OnClickCancel(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *supportServantEquipListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4D2852A & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndCancelButton__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_OnClickCancel__);
    sub_1C94098(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2852A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_1C942F0(0, method);
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0);
    }
    this->fields.state = 3;
    v4 = Method_RecommendSupportEquipSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListMenu_EndCancelButton__,
      v7);
    RecommendSupportEquipSelectListMenu__StatusRequest(this, v6, v8);
  }
}


void RecommendSupportEquipSelectListMenu__OnClickChoiceTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4D28531 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__);
    sub_1C94098(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D28531 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__,
          v8);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__,
        v11);
      RecommendSupportEquipSelectListMenu__StatusRequest(this, v10, v12);
    }
    RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 2, v5);
  }
}


void RecommendSupportEquipSelectListMenu__OnClickLockTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4D28530 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__);
    sub_1C94098(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D28530 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__,
          v8);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__,
        v11);
      RecommendSupportEquipSelectListMenu__StatusRequest(this, v10, v12);
    }
    RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 1, v5);
  }
}


void RecommendSupportEquipSelectListMenu__OnClickNormalTabButton(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4D2852F & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndClickTabNormal__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__);
    sub_1C94098(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2852F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportEquipSelectListMenu_EndClickTabNormal__,
      v6);
    RecommendSupportEquipSelectListMenu__StatusRequest(this, v5, v7);
  }
}


void RecommendSupportEquipSelectListMenu__OnClickScaleChange(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4D28534 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__);
    byte_4D28534 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ChangeIconScale(supportServantEquipListViewManager, 0),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
                                                                                                 supportServantEquipListViewManager,
                                                                                                 0),
          !scaleChangeTabSprite) )
    {
      sub_1C942F0(supportServantEquipListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantEquipListViewManager, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__OnSelectServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListMenu_o *v6; // x19
  RecommendSupportEquipSelectListMenu_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  int32_t tabModeKind; // w8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Instance; // x21
  char v19; // w22
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  const MethodInfo *v22; // x1
  struct UILabel_o *explanationLabel; // x19
  struct UISprite_o *v24; // x8
  __int128 v25; // q1
  int32_t v26; // w21
  struct UISprite_o *v27; // x8
  RecommendSupportEquipSelectListMenu_o *v28; // x20
  struct BetterList_UIRect__o *mChildren; // x22
  struct UnityEngine_Transform_o *mTrans; // x23
  int32_t v31; // w3
  const MethodInfo *v32; // x4
  RecommendSupportEquipSelectListViewManager_o *v33; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v34; // x21
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  _QWORD *v40; // x0
  int v41; // w23
  System_Reflection_MethodBase_o *v42; // x0
  SupportServantEquipServantItem_o *v43; // x0
  RecommendSupportEquipSelectListMenu_o *v44; // x1
  UserServantEntity_o *v45; // x20
  ServantStatusDialog_EndDelegate_o *v46; // x23
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  struct UISprite_o *normalTabSprite; // x8
  __int128 v50; // q1
  RecommendSupportEquipSelectListViewManager_o *v51; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v52; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v6 = this;
  if ( (byte_4D2852C & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndDecide__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
    sub_1C94098(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D2852C = 1;
  }
  if ( v6->fields.state != 2 )
    return;
  v6->fields.selectNum = n;
  if ( n < 0 )
  {
    v7 = 0;
  }
  else
  {
    this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
    if ( !this )
      goto LABEL_73;
    this = (RecommendSupportEquipSelectListMenu_o *)RecommendSupportEquipSelectListViewManager__GetItem(
                                                      (RecommendSupportEquipSelectListViewManager_o *)this,
                                                      n,
                                                      0);
    v7 = this;
  }
  switch ( kind )
  {
    case 3:
      tabModeKind = v6->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        v35 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v35 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v36 = (System_Reflection_MethodBase_o *)sub_1C9407C(v35, v35[4]);
        OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0, 0);
        if ( v7 )
          BYTE1(v7->fields.closeCallbackFunc) ^= 1u;
      }
      else if ( tabModeKind == 1 )
      {
        v14 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C9407C(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 11, 0, 0);
        if ( v7 )
          LOBYTE(v7->fields.closeCallbackFunc) ^= 1u;
      }
      else
      {
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        if ( !supportServantEquipListViewManager )
          goto LABEL_73;
        servantItemInfo = supportServantEquipListViewManager->fields.servantItemInfo;
        servantItemDraw = supportServantEquipListViewManager->fields.servantItemDraw;
        if ( v7 )
        {
          v40 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
          v41 = BYTE1(v7->fields.choiceTabSprite);
          if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v40 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
          v42 = (System_Reflection_MethodBase_o *)sub_1C9407C(v40, v40[4]);
          OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0, 0);
          if ( v41 )
          {
            BYTE1(v7->fields.choiceTabSprite) = 0;
            if ( !servantItemInfo )
              goto LABEL_73;
            v43 = servantItemInfo;
            v44 = 0;
          }
          else
          {
            this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_73;
            RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
              (RecommendSupportEquipSelectListViewManager_o *)this,
              0);
            normalTabSprite = v7->fields.normalTabSprite;
            BYTE1(v7->fields.choiceTabSprite) = 1;
            if ( !normalTabSprite )
              goto LABEL_73;
            v50 = *(_OWORD *)&normalTabSprite->fields.leftAnchor;
            *(UnityEngine_MonoBehaviour_Fields *)&v55.fields.currentCryptoKey = normalTabSprite->fields.UnityEngine_MonoBehaviour_Fields;
            *(_OWORD *)&v55.fields.fakeValue = v50;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v54 = v55;
            this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                                              &v54,
                                                              0);
            if ( !servantItemInfo )
              goto LABEL_73;
            v44 = this;
            v43 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v43, (int64_t)v44, 0);
        }
        else
        {
          v47 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v47 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
          v48 = (System_Reflection_MethodBase_o *)sub_1C9407C(v47, v47[4]);
          OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0, 0);
          this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_73;
          RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
            (RecommendSupportEquipSelectListViewManager_o *)this,
            0);
        }
        if ( !servantItemDraw )
          goto LABEL_73;
        SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, 0, 0, 0);
        this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
        if ( !this )
          goto LABEL_73;
        RecommendSupportEquipSelectListViewManager__RefreshEquipped(
          (RecommendSupportEquipSelectListViewManager_o *)this,
          0);
        this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
        if ( !this )
          goto LABEL_73;
        RecommendSupportEquipSelectListViewManager__RefreshListDisp(
          (RecommendSupportEquipSelectListViewManager_o *)this,
          0);
      }
      v6->fields.state = 2;
      v51 = v6->fields.supportServantEquipListViewManager;
      v52 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
      RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
        v52,
        (Il2CppObject *)v6,
        (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
        0);
      if ( v51 )
      {
        RecommendSupportEquipSelectListViewManager__SetMode(v51, 2, v52, 0);
        return;
      }
LABEL_73:
      sub_1C942F0(this, *(_QWORD *)&kind);
    case 2:
      v16 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C9407C(v16, v16[4]);
      if ( v7 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
        v6->fields.state = 5;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( BYTE2(v7->fields.choiceTabSprite) )
          v19 = 1;
        else
          v19 = BYTE1(v7->fields.choiceTabSprite) != 0;
        v45 = (UserServantEntity_o *)v7->fields.normalTabSprite;
        v46 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v46,
          (Il2CppObject *)v6,
          Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__,
          0);
        if ( Instance )
        {
          CommonUI__OpenServantEquipStatusDialog_31598688((CommonUI_o *)Instance, 0, v45, v19, v46, 0, 0);
          return;
        }
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0, 0);
        v6->fields.state = 2;
        v33 = v6->fields.supportServantEquipListViewManager;
        v34 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
          v34,
          (Il2CppObject *)v6,
          (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
          0);
        if ( v33 )
        {
          RecommendSupportEquipSelectListViewManager__SetMode(v33, 2, v34, 0);
          return;
        }
      }
      goto LABEL_73;
    case 1:
      v8 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C9407C(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
      v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
      RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v6,
        Method_RecommendSupportEquipSelectListMenu_EndDecide__,
        v11);
      RecommendSupportEquipSelectListMenu__StatusRequest(v6, v10, v12);
      return;
  }
  v20 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
  if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C940B0(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C9407C(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 1, 0, 0);
  v6->fields.state = 3;
  RecommendSupportEquipSelectListMenu__Init(v6, v22);
  if ( v7 )
  {
    this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
    {
      explanationLabel = this->fields.explanationLabel;
      this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( this )
      {
        v24 = v7->fields.normalTabSprite;
        if ( v24 )
        {
          v25 = *(_OWORD *)&v24->fields.leftAnchor;
          v26 = (int32_t)this->fields.normalTabSprite;
          *(UnityEngine_MonoBehaviour_Fields *)&v55.fields.currentCryptoKey = v24->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v55.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v53 = v55;
          this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                                            &v53,
                                                            0);
          v27 = v7->fields.normalTabSprite;
          if ( v27 )
          {
            v28 = this;
            mTrans = v27->fields.mTrans;
            mChildren = v27->fields.mChildren;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v56.fields.currentCryptoKey = mTrans;
            *(_QWORD *)&v56.fields.fakeValue = mChildren;
            this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                              v56,
                                                              0);
            if ( explanationLabel )
            {
              RecommendSupportData__SetEquipData(
                (RecommendSupportData_o *)explanationLabel,
                v26,
                (int64_t)v28,
                v31,
                v32);
              this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( this )
              {
                RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)this, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_73;
  }
}


void RecommendSupportEquipSelectListMenu__Open(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  int64_t SelectEquipId; // x0
  const MethodInfo *v6; // x1
  int32_t state; // w8
  const MethodInfo *v8; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v10; // x20

  if ( (byte_4D28525 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndOpen__);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D28525 = 1;
  }
  RecommendSupportEquipSelectListMenu__Init(this, method);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SelectEquipId = RecommendSupportSelectControl__get_SelectEquipId(Instance, 0);
  state = this->fields.state;
  this->fields.isSelectedSvt = SelectEquipId > 0;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.state = 2;
    RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v6);
    return;
  }
  if ( !state )
  {
    Instance = (RecommendSupportSelectControl_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (RecommendSupportSelectControl_o *)this->fields.titleInfo;
      if ( Instance )
      {
        TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, 0, 23, 0);
        Instance = (RecommendSupportSelectControl_o *)this->fields.titleInfo;
        if ( Instance )
        {
          TitleInfoControl__setBackBtnSprite_40657648((TitleInfoControl_o *)Instance, 1, 0, 0, 0);
          Instance = (RecommendSupportSelectControl_o *)this->fields.supportServantEquipListViewManager;
          if ( Instance )
          {
            RecommendSupportEquipSelectListViewManager__CreateList(
              (RecommendSupportEquipSelectListViewManager_o *)Instance,
              0);
            this->fields.state = 1;
            RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v8);
            Instance = (RecommendSupportSelectControl_o *)this->fields.supportServantEquipListViewManager;
            if ( Instance )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Instance = (RecommendSupportSelectControl_o *)RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
                                                              (RecommendSupportEquipSelectListViewManager_o *)Instance,
                                                              0);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0);
                v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                System_Action___ctor(v10, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListMenu_EndOpen__, 0);
                BaseMenu__Open((BaseMenu_o *)this, v10, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_15:
    sub_1C942F0(Instance, v4);
  }
}


void RecommendSupportEquipSelectListMenu__SetListManagerStatus(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListMenu_o *v2; // x20
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x19
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v4; // x21

  v2 = this;
  if ( (byte_4D28528 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
    byte_4D28528 = 1;
  }
  supportServantEquipListViewManager = v2->fields.supportServantEquipListViewManager;
  if ( v2->fields.state == 2 )
  {
    v4 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
      v4,
      (Il2CppObject *)v2,
      (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
      0);
    if ( supportServantEquipListViewManager )
    {
      RecommendSupportEquipSelectListViewManager__SetMode(supportServantEquipListViewManager, 2, v4, 0);
      return;
    }
LABEL_8:
    sub_1C942F0(this, method);
  }
  if ( !supportServantEquipListViewManager )
    goto LABEL_8;
  RecommendSupportEquipSelectListViewManager__SetMode_35397960(v2->fields.supportServantEquipListViewManager, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__SetModeTabKind(
        RecommendSupportEquipSelectListMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v6; // x20
  bool enabled; // w0
  System_String_o **v8; // x8
  UICommonButton_o *lockTabButton; // x20
  bool v10; // w0
  System_String_o **v11; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v13; // w0
  __int64 *v14; // x8
  const MethodInfo *v15; // x1
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x20
  __int64 *v18; // x8
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_4D28532 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11671/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/);
    sub_1C94098(&StringLiteral_17728/*"button_allchoice_reg"*/);
    sub_1C94098(&StringLiteral_17731/*"button_alllock_unreg"*/);
    sub_1C94098(&StringLiteral_11673/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    sub_1C94098(&StringLiteral_11672/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/);
    sub_1C94098(&StringLiteral_17744/*"button_select_reg"*/);
    sub_1C94098(&StringLiteral_17745/*"button_select_unreg"*/);
    sub_1C94098(&StringLiteral_17730/*"button_alllock_reg"*/);
    sub_1C94098(&StringLiteral_17729/*"button_allchoice_unreg"*/);
    byte_4D28532 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    v6 = this->fields.normalTabButton;
    if ( !v6 )
      goto LABEL_39;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
    UICommonButton__SetColliderEnable(v6, enabled, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17745/*"button_select_unreg"*/ : &StringLiteral_17744/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_39;
    v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
    UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17730/*"button_alllock_reg"*/ : &StringLiteral_17731/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_39;
    v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    if ( this->fields.tabModeKind == 2 )
      v14 = &StringLiteral_17728/*"button_allchoice_reg"*/;
    else
      v14 = &StringLiteral_17729/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v14, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11671/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11672/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( tabModeKind )
      {
LABEL_36:
        RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v15);
        supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
        if ( supportServantEquipListViewManager )
        {
          supportServantEquipListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
          return;
        }
LABEL_39:
        sub_1C942F0(normalTabButton, *(_QWORD *)&modeKind);
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11673/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v18, 0);
    if ( !explanationLabel )
      goto LABEL_39;
    UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0);
    goto LABEL_36;
  }
}


void RecommendSupportEquipSelectListMenu__StatusRequest(
        RecommendSupportEquipSelectListMenu_o *this,
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *v25; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D28533 & 1) == 0 )
  {
    sub_1C94098(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_RecommendSupportEquipSelectListMenu_EndStatusSync__);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D28533 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v25 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( RecommendSupportEquipSelectListViewManager__GetSwapChoiceList(
           supportServantEquipListViewManager,
           &choiceList,
           &v25,
           0) )
    {
      this->fields.requestedCallback = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestedCallback,
        (int32_t)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                             v24,
                                                                                             (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v15 = v25;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C942F0(supportServantEquipListViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( RecommendSupportEquipSelectListViewManager__GetSwapLockList(
           supportServantEquipListViewManager,
           &lockList,
           &unlockList,
           0) )
    {
      this->fields.requestedCallback = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestedCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                             v13,
                                                                                             (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v15 = unlockList;
        v14 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v14,
          v15,
          0,
          v16,
          v17,
          0);
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


void RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3510;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC34C8;
}


System_IAsyncResult_o *RecommendSupportEquipSelectListMenu_RequestCallbackFunc__BeginInvoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4D28536 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D28536 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void RecommendSupportEquipSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void RecommendSupportEquipSelectListMenu_RequestCallbackFunc__Invoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}