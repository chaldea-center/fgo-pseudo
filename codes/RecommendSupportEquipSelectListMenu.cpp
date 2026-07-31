void RecommendSupportEquipSelectListMenu___ctor(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934315 & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_5934315 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void RecommendSupportEquipSelectListMenu__Awake(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  ;
}


void RecommendSupportEquipSelectListMenu__Close(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommendSupportEquipSelectListMenu__Close_41529912(this, 0, v2);
}


void RecommendSupportEquipSelectListMenu__Close_41529912(
        RecommendSupportEquipSelectListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_5934307 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndClose__);
    byte_5934307 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v10);
  v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  const MethodInfo *v6; // x2

  if ( (byte_593430B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_593430B = 1;
  }
  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
LABEL_10:
      sub_21FFECC(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_41530208(supportServantEquipListViewManager, 3, v6);
  }
  RecommendSupportEquipSelectListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
      sub_21FFECC(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_41530208(supportServantEquipListViewManager, 3, v5);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
      sub_21FFECC(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_41530208(supportServantEquipListViewManager, 3, v5);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
      sub_21FFECC(supportServantEquipListViewManager, isRequest);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_41530208(supportServantEquipListViewManager, 3, v5);
  }
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 0, method);
}


void RecommendSupportEquipSelectListMenu__EndClose(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommendSupportEquipSelectListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void RecommendSupportEquipSelectListMenu__EndCloseShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  RecommendSupportEquipSelectListViewManager_CallbackFunc_c *v5; // x0
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_593430E & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
    byte_593430E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        v5 = RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo,
        supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager,
        this->fields.state = 2,
        v7 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(v5),
        RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
          0),
        !supportServantEquipListViewManager) )
  {
    sub_21FFECC(gameObject, v4);
  }
  supportServantEquipListViewManager->fields.callbackFunc = v7;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  RecommendSupportEquipSelectListViewManager__SetMode_41530208(supportServantEquipListViewManager, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__EndDecide(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  bool v3; // w20
  int64_t supportServantEquipListViewManager; // x0
  const MethodInfo *v6; // x2
  RecommendSupportEquipSelectListViewItem_o *Item; // x20
  const MethodInfo *v8; // x1
  RecommendSupportData_o *v9; // x19
  __int64 v10; // x2
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v12; // q1
  int32_t v13; // w21
  __int64 v14; // x2
  struct UserServantEntity_o *v15; // x8
  int64_t v16; // x20
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w3
  const MethodInfo *v20; // x4
  RecommendSupportData_o *v21; // x19
  const MethodInfo *v22; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v3 = isRequest;
  if ( (byte_5934309 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_5934309 = 1;
  }
  if ( v3 )
  {
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_32;
    RecommendSupportEquipSelectListViewManager__ModifyList(
      (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
      0,
      method);
    supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_32;
    RecommendSupportEquipSelectListViewManager__SetMode_41530208(
      (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
      3,
      v6);
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
      goto LABEL_32;
    Item = RecommendSupportEquipSelectListViewManager__GetItem(
             (RecommendSupportEquipSelectListViewManager_o *)supportServantEquipListViewManager,
             isRequest,
             method);
  }
  if ( this->fields.isSelectedSvt || Item )
  {
    RecommendSupportEquipSelectListMenu__Init(this, (const MethodInfo *)isRequest);
    if ( !Item )
      goto LABEL_26;
    supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( supportServantEquipListViewManager )
    {
      v9 = *(RecommendSupportData_o **)(supportServantEquipListViewManager + 112);
      supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( supportServantEquipListViewManager )
      {
        userSvtEntity = Item->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          v13 = *(_DWORD *)(supportServantEquipListViewManager + 120);
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v24.fields.fakeValue = v12;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isRequest, v10);
          v23 = v24;
          supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                 &v23,
                                                 0);
          v15 = Item->fields.userSvtEntity;
          if ( v15 )
          {
            v16 = supportServantEquipListViewManager;
            v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
            v18 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isRequest, v14);
            *(_QWORD *)&v25.fields.currentCryptoKey = v17;
            *(_QWORD *)&v25.fields.fakeValue = v18;
            supportServantEquipListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                   v25,
                                                   0);
            if ( v9 )
            {
              RecommendSupportData__SetEquipData(v9, v13, v16, v19, v20);
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_32:
    sub_21FFECC(supportServantEquipListViewManager, isRequest);
  }
  supportServantEquipListViewManager = (int64_t)this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_32;
  ListViewManager__SetScrollBarValue((ListViewManager_o *)supportServantEquipListViewManager, 0);
  RecommendSupportEquipSelectListMenu__Init(this, v8);
LABEL_26:
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_32;
  v21 = *(RecommendSupportData_o **)(supportServantEquipListViewManager + 112);
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager || !v21 )
    goto LABEL_32;
  RecommendSupportData__RemoveEquipData(v21, *(_DWORD *)(supportServantEquipListViewManager + 120), v22);
LABEL_30:
  supportServantEquipListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !supportServantEquipListViewManager )
    goto LABEL_32;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)supportServantEquipListViewManager, 0, 0);
}


void RecommendSupportEquipSelectListMenu__EndOpen(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  Il2CppObject *Instance; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // w8

  if ( (byte_5934306 & 1) == 0 )
  {
    sub_21FFC50(&TutorialFlag_ImageId___TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5934306 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  if ( !TutorialFlag__Get_47357952(110, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = sub_21FFD10(TutorialFlag_ImageId___TypeInfo, 2);
    if ( !v6 )
      goto LABEL_13;
    v8 = *(_DWORD *)(v6 + 24);
    v7 = v6;
    if ( !v8 || (*(_DWORD *)(v6 + 32) = 4, v8 == 1) )
      sub_21FFED4(v6);
    *(_DWORD *)(v6 + 36) = 5;
    if ( !Instance )
LABEL_13:
      sub_21FFECC(v6, v7);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, (TutorialFlag_ImageId_array *)v6, 110, 0, 0, 0, 0);
  }
  this->fields.state = 2;
  RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListMenu__EndShowServantEquip(
        RecommendSupportEquipSelectListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_593430D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593430D = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
LABEL_9:
      sub_21FFECC(supportServantEquipListViewManager, isDecide);
    }
    RecommendSupportEquipSelectListViewManager__SetMode_41530208(supportServantEquipListViewManager, 3, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_RecommendSupportEquipSelectListMenu_EndCloseShowServantEquip__,
    0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void RecommendSupportEquipSelectListMenu__EndStatusSync(
        RecommendSupportEquipSelectListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_requestedCallback; // x0
  struct RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *v9; // x19
  struct RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *requestedCallback; // t1

  requestedCallback = this->fields.requestedCallback;
  p_requestedCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requestedCallback;
  v9 = requestedCallback;
  if ( requestedCallback )
  {
    p_requestedCallback->klass = 0;
    sub_21FFBF4(p_requestedCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
  }
}


void RecommendSupportEquipSelectListMenu__Init(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v9; // x2

  if ( (byte_5934304 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12111/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    byte_5934304 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  RecommendSupportEquipSelectListViewManager__DestroyList(supportServantEquipListViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)LocalizationManager__Get(
                                                                                         (System_String_o *)StringLiteral_12111/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/,
                                                                                         0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantEquipListViewManager, 0),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_9:
    sub_21FFECC(supportServantEquipListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled(normalTabButton, 0);
  UICommonButton__SetColliderEnable((UICommonButton_o *)normalTabButton, enabled, 1, 0);
  RecommendSupportEquipSelectListMenu__SetModeTabKind(this, 0, v9);
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

  if ( (byte_593430A & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndCancelButton__);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_OnClickCancel__);
    sub_21FFC50(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_593430A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_21FFECC(0, method);
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0);
    }
    this->fields.state = 3;
    v4 = Method_RecommendSupportEquipSelectListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_5934311 & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__);
    sub_21FFC50(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_5934311 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabChoice__,
          v8);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_5934310 & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__);
    sub_21FFC50(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_5934310 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_RecommendSupportEquipSelectListMenu_EndClickTabLock__,
          v8);
        RecommendSupportEquipSelectListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_593430F & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndClickTabNormal__);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__);
    sub_21FFC50(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    byte_593430F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
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
  const MethodInfo *v5; // x1
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_5934314 & 1) == 0 )
  {
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__);
    byte_5934314 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (RecommendSupportEquipSelectListViewManager__ChangeIconScale(supportServantEquipListViewManager, v5),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
                                                                                                 supportServantEquipListViewManager,
                                                                                                 v5),
          !scaleChangeTabSprite) )
    {
      sub_21FFECC(supportServantEquipListViewManager, v5);
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *Instance; // x21
  char v16; // w22
  int32_t tabModeKind; // w8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  const MethodInfo *v22; // x1
  struct UILabel_o *explanationLabel; // x19
  __int64 v24; // x2
  struct UISprite_o *v25; // x9
  __int128 v26; // q1
  int32_t v27; // w21
  __int64 v28; // x2
  struct UISprite_o *v29; // x8
  RecommendSupportEquipSelectListMenu_o *v30; // x20
  struct UnityEngine_Transform_o *mTrans; // x22
  struct BetterList_UIRect__o *mChildren; // x23
  int32_t v33; // w3
  const MethodInfo *v34; // x4
  System_Reflection_MethodBase_o *v35; // x0
  struct RecommendSupportEquipSelectListViewManager_o *v36; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v37; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  const MethodInfo *v44; // x2
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  struct RecommendSupportEquipSelectListViewManager_o *v47; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  System_Reflection_MethodBase_o *v50; // x0
  SupportServantEquipServantItem_o *v51; // x0
  RecommendSupportEquipSelectListMenu_o *v52; // x1
  UserServantEntity_o *v53; // x20
  ServantStatusDialog_EndDelegate_o *v54; // x23
  System_Action_o *v55; // x24
  System_Reflection_MethodBase_o *v56; // x0
  __int64 v57; // x2
  struct UISprite_o *normalTabSprite; // x8
  __int128 v59; // q1
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x20
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v61; // x21
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  const MethodInfo *v68; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  v6 = this;
  if ( (byte_593430C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndDecide__);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu__OnSelectServantEquip_b__31_0__);
    sub_21FFC50(&RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_593430C = 1;
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
      goto LABEL_70;
    this = (RecommendSupportEquipSelectListMenu_o *)RecommendSupportEquipSelectListViewManager__GetItem(
                                                      (RecommendSupportEquipSelectListViewManager_o *)this,
                                                      n,
                                                      *(const MethodInfo **)&n);
    v7 = this;
  }
  switch ( kind )
  {
    case 3:
      tabModeKind = v6->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        v45 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v45 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v46 = (System_Reflection_MethodBase_o *)sub_21FFC34(v45, v45[4]);
        OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0, 0);
        if ( v7 )
          BYTE1(v7->fields.tabModeKind) ^= 1u;
LABEL_67:
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        v6->fields.state = 2;
        v61 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
          v61,
          (Il2CppObject *)v6,
          (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
          0);
        if ( supportServantEquipListViewManager )
        {
          supportServantEquipListViewManager->fields.callbackFunc = v61;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
            (int32_t)v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67);
          RecommendSupportEquipSelectListViewManager__SetMode_41530208(supportServantEquipListViewManager, 2, v68);
          return;
        }
LABEL_70:
        sub_21FFECC(this, *(_QWORD *)&kind);
      }
      if ( tabModeKind == 1 )
      {
        v18 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v18 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v19 = (System_Reflection_MethodBase_o *)sub_21FFC34(v18, v18[4]);
        OverwriteAssetSoundName__PlaySystemSe(v19, 11, 0, 0);
        if ( v7 )
          LOBYTE(v7->fields.tabModeKind) ^= 1u;
        goto LABEL_67;
      }
      v47 = v6->fields.supportServantEquipListViewManager;
      if ( !v47 )
        goto LABEL_70;
      servantItemInfo = v47->fields.servantItemInfo;
      servantItemDraw = v47->fields.servantItemDraw;
      if ( v7 && BYTE4(v7->fields.lockTabButton) )
      {
        v50 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0, 0);
        BYTE4(v7->fields.lockTabButton) = 0;
        if ( !servantItemInfo )
          goto LABEL_70;
        v51 = servantItemInfo;
        v52 = 0;
      }
      else
      {
        v56 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0, 0);
        this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
        if ( !this )
          goto LABEL_70;
        RecommendSupportEquipSelectListViewManager__ResetEquipItemBaseFlag(
          (RecommendSupportEquipSelectListViewManager_o *)this,
          *(const MethodInfo **)&kind);
        if ( !v7 )
          goto LABEL_63;
        normalTabSprite = v7->fields.normalTabSprite;
        BYTE4(v7->fields.lockTabButton) = 1;
        if ( !normalTabSprite )
          goto LABEL_70;
        v59 = *(_OWORD *)&normalTabSprite->fields.leftAnchor;
        *(UnityEngine_MonoBehaviour_Fields *)&v71.fields.currentCryptoKey = normalTabSprite->fields.UnityEngine_MonoBehaviour_Fields;
        *(_OWORD *)&v71.fields.fakeValue = v59;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind, v57);
        v70 = v71;
        this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                          &v70,
                                                          0);
        if ( !servantItemInfo )
          goto LABEL_70;
        v52 = this;
        v51 = servantItemInfo;
      }
      SupportServantEquipServantItem__SetEquipTarget(v51, (int64_t)v52, 0);
LABEL_63:
      if ( !servantItemDraw )
        goto LABEL_70;
      SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, 0, 0, v6->fields.isGrandEnable, 0);
      this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
      if ( !this )
        goto LABEL_70;
      RecommendSupportEquipSelectListViewManager__RefreshEquipped(
        (RecommendSupportEquipSelectListViewManager_o *)this,
        *(const MethodInfo **)&kind);
      this = (RecommendSupportEquipSelectListMenu_o *)v6->fields.supportServantEquipListViewManager;
      if ( !this )
        goto LABEL_70;
      RecommendSupportEquipSelectListViewManager__RefreshListDisp(
        (RecommendSupportEquipSelectListViewManager_o *)this,
        *(const MethodInfo **)&kind);
      goto LABEL_67;
    case 2:
      v13 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( v7 )
      {
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v14 = (System_Reflection_MethodBase_o *)sub_21FFC34(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
        v6->fields.state = 5;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( BYTE5(v7->fields.lockTabButton) )
          v16 = 1;
        else
          v16 = BYTE4(v7->fields.lockTabButton) != 0;
        v53 = (UserServantEntity_o *)v7->fields.normalTabSprite;
        v54 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v54,
          (Il2CppObject *)v6,
          Method_RecommendSupportEquipSelectListMenu_EndShowServantEquip__,
          0);
        v55 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v55,
          (Il2CppObject *)v6,
          Method_RecommendSupportEquipSelectListMenu__OnSelectServantEquip_b__31_0__,
          0);
        if ( Instance )
        {
          CommonUI__OpenServantEquipStatusDialog_37307044((CommonUI_o *)Instance, 0, v53, v16, v54, v55, 0);
          return;
        }
      }
      else
      {
        if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
        v35 = (System_Reflection_MethodBase_o *)sub_21FFC34(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0);
        v36 = v6->fields.supportServantEquipListViewManager;
        v6->fields.state = 2;
        v37 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
        RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
          v37,
          (Il2CppObject *)v6,
          (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
          0);
        if ( v36 )
        {
          v36->fields.callbackFunc = v37;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v36->fields.callbackFunc,
            (int32_t)v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
          RecommendSupportEquipSelectListViewManager__SetMode_41530208(v36, 2, v44);
          return;
        }
      }
      goto LABEL_70;
    case 1:
      v8 = Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
      v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
      v10 = (RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListMenu_RequestCallbackFunc_TypeInfo);
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
    v20 = (_QWORD *)sub_21FFC68(Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
  v21 = (System_Reflection_MethodBase_o *)sub_21FFC34(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 1, 0, 0);
  v6->fields.state = 3;
  RecommendSupportEquipSelectListMenu__Init(v6, v22);
  if ( v7 )
  {
    this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
    {
      explanationLabel = this->fields.explanationLabel;
      this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( this )
      {
        v25 = v7->fields.normalTabSprite;
        if ( v25 )
        {
          v26 = *(_OWORD *)&v25->fields.leftAnchor;
          v27 = (int32_t)this->fields.normalTabSprite;
          *(UnityEngine_MonoBehaviour_Fields *)&v71.fields.currentCryptoKey = v25->fields.UnityEngine_MonoBehaviour_Fields;
          *(_OWORD *)&v71.fields.fakeValue = v26;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              *(_QWORD *)&kind,
              v24);
          v69 = v71;
          this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                            &v69,
                                                            0);
          v29 = v7->fields.normalTabSprite;
          if ( v29 )
          {
            v30 = this;
            mTrans = v29->fields.mTrans;
            mChildren = v29->fields.mChildren;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                *(_QWORD *)&kind,
                v28);
            *(_QWORD *)&v72.fields.currentCryptoKey = mTrans;
            *(_QWORD *)&v72.fields.fakeValue = mChildren;
            this = (RecommendSupportEquipSelectListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                              v72,
                                                              0);
            if ( explanationLabel )
            {
              RecommendSupportData__SetEquipData(
                (RecommendSupportData_o *)explanationLabel,
                v27,
                (int64_t)v30,
                v33,
                v34);
              this = (RecommendSupportEquipSelectListMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    goto LABEL_70;
  }
}


void RecommendSupportEquipSelectListMenu__Open(RecommendSupportEquipSelectListMenu_o *this, const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  const MethodInfo *v4; // x1
  bool v5; // w9
  const MethodInfo_476EDF8 *v6; // x0
  Il2CppObject *v7; // x20
  int32_t SelectQuestId; // w21
  bool IsSupportGrandEnableQuest; // w0
  const MethodInfo *v10; // x1
  int32_t state; // w8
  const MethodInfo *v12; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v14; // x20

  if ( (byte_5934305 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndOpen__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5934305 = 1;
  }
  RecommendSupportEquipSelectListMenu__Init(this, method);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v5 = RecommendSupportSelectControl__get_SelectEquipId(Instance, 0) > 0;
  v6 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  this->fields.isSelectedSvt = v5;
  v7 = SingletonTemplate_object___get_Instance(v6);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  SelectQuestId = RecommendSupportSelectControl__get_SelectQuestId(Instance, 0);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (RecommendSupportSelectControl_o *)RecommendSupportSelectControl__get_SelectQuestPhase(Instance, 0);
  if ( !v7 )
    goto LABEL_18;
  IsSupportGrandEnableQuest = PartyOrganizationUtility__IsSupportGrandEnableQuest(
                                (PartyOrganizationUtility_o *)v7,
                                SelectQuestId,
                                (int32_t)Instance,
                                0,
                                0);
  state = this->fields.state;
  this->fields.isGrandEnable = IsSupportGrandEnableQuest;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.state = 2;
    RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v10);
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
        TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, 0, 24, 0);
        Instance = (RecommendSupportSelectControl_o *)this->fields.titleInfo;
        if ( Instance )
        {
          TitleInfoControl__setBackBtnSprite_46820572((TitleInfoControl_o *)Instance, 1, 0, 0, 0);
          Instance = (RecommendSupportSelectControl_o *)this->fields.supportServantEquipListViewManager;
          if ( Instance )
          {
            LOBYTE(Instance[3].klass) = this->fields.isGrandEnable;
            RecommendSupportEquipSelectListViewManager__CreateList(
              (RecommendSupportEquipSelectListViewManager_o *)Instance,
              v4);
            this->fields.state = 1;
            RecommendSupportEquipSelectListMenu__SetListManagerStatus(this, v12);
            Instance = (RecommendSupportSelectControl_o *)this->fields.supportServantEquipListViewManager;
            if ( Instance )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Instance = (RecommendSupportSelectControl_o *)RecommendSupportEquipSelectListViewManager__GetScaleButtonSpriteName(
                                                              (RecommendSupportEquipSelectListViewManager_o *)Instance,
                                                              v4);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0);
                v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(v14, (Il2CppObject *)this, Method_RecommendSupportEquipSelectListMenu_EndOpen__, 0);
                BaseMenu__Open((BaseMenu_o *)this, v14, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_21FFECC(Instance, v4);
  }
}


void RecommendSupportEquipSelectListMenu__SetListManagerStatus(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RecommendSupportEquipSelectListMenu_o *v3; // x20
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x19
  RecommendSupportEquipSelectListViewManager_CallbackFunc_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w1

  v3 = this;
  if ( (byte_5934308 & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
    this = (RecommendSupportEquipSelectListMenu_o *)sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__);
    byte_5934308 = 1;
  }
  supportServantEquipListViewManager = v3->fields.supportServantEquipListViewManager;
  if ( v3->fields.state != 2 )
  {
    if ( supportServantEquipListViewManager )
    {
      v12 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(this, method);
  }
  v5 = (RecommendSupportEquipSelectListViewManager_CallbackFunc_o *)sub_21FFEBC(RecommendSupportEquipSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportEquipSelectListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)v3,
    (intptr_t)Method_RecommendSupportEquipSelectListMenu_OnSelectServantEquip__,
    0);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  supportServantEquipListViewManager->fields.callbackFunc = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = 2;
LABEL_8:
  RecommendSupportEquipSelectListViewManager__SetMode_41530208(supportServantEquipListViewManager, v12, v2);
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
  __int64 v16; // x2
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x20
  __int64 *v19; // x8
  struct RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_5934312 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12109/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/);
    sub_21FFC50(&StringLiteral_18379/*"button_allchoice_reg"*/);
    sub_21FFC50(&StringLiteral_18382/*"button_alllock_unreg"*/);
    sub_21FFC50(&StringLiteral_12111/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    sub_21FFC50(&StringLiteral_12110/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/);
    sub_21FFC50(&StringLiteral_18395/*"button_select_reg"*/);
    sub_21FFC50(&StringLiteral_18396/*"button_select_unreg"*/);
    sub_21FFC50(&StringLiteral_18381/*"button_alllock_reg"*/);
    sub_21FFC50(&StringLiteral_18380/*"button_allchoice_unreg"*/);
    byte_5934312 = 1;
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
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_18396/*"button_select_unreg"*/ : &StringLiteral_18395/*"button_select_reg"*/);
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
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_18381/*"button_alllock_reg"*/ : &StringLiteral_18382/*"button_alllock_unreg"*/);
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
      v14 = &StringLiteral_18379/*"button_allchoice_reg"*/;
    else
      v14 = &StringLiteral_18380/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v14, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
      v19 = &StringLiteral_12109/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
      v19 = &StringLiteral_12110/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
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
        sub_21FFECC(normalTabButton, *(_QWORD *)&modeKind);
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
      v19 = &StringLiteral_12111/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v19, 0);
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
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  RecommendSupportEquipSelectListViewManager_o *supportServantEquipListViewManager; // x0
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

  if ( (byte_5934313 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportEquipSelectListMenu_EndStatusSync__);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5934313 = 1;
  }
  tabModeKind = this->fields.tabModeKind;
  unlockList = 0;
  lockList = 0;
  v30 = 0;
  choiceList = 0;
  if ( tabModeKind == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( RecommendSupportEquipSelectListViewManager__GetSwapChoiceList(
           supportServantEquipListViewManager,
           &choiceList,
           &v30,
           v3) )
    {
      this->fields.requestedCallback = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestedCallback,
        (int32_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28, v29);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                             v27,
                                                                                             (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v18 = v30;
        v17 = choiceList;
        v19 = 0;
        v20 = 1;
        goto LABEL_17;
      }
LABEL_21:
      sub_21FFECC(supportServantEquipListViewManager, callback);
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
           v3) )
    {
      this->fields.requestedCallback = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestedCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_RecommendSupportEquipSelectListMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      supportServantEquipListViewManager = (RecommendSupportEquipSelectListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                             v14,
                                                                                             (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v18 = unlockList;
        v17 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v17,
          v18,
          0,
          v19,
          v20,
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


void RecommendSupportEquipSelectListMenu___OnSelectServantEquip_b__31_0(
        RecommendSupportEquipSelectListMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void RecommendSupportEquipSelectListMenu_RequestCallbackFunc___ctor(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF2500;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF24B8;
}


System_IAsyncResult_o *RecommendSupportEquipSelectListMenu_RequestCallbackFunc__BeginInvoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void RecommendSupportEquipSelectListMenu_RequestCallbackFunc__EndInvoke(
        RecommendSupportEquipSelectListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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