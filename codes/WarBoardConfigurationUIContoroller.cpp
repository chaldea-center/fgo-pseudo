void __fastcall WarBoardConfigurationUIContoroller___ctor(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  this->fields.hintXPartyBuffExist = 92;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__Active(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_43503F2 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43503F2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v6; // x0

  if ( (byte_43503F5 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&WarBoardManager_TypeInfo);
    byte_43503F5 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_11;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v6 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v6 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B7076C(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__Deactive(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__EndNoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_endCallbackNoticeHint; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallbackNoticeHint; // t1

  endCallbackNoticeHint = this->fields.endCallbackNoticeHint;
  p_endCallbackNoticeHint = (BattleServantConfConponent_o *)&this->fields.endCallbackNoticeHint;
  v9 = endCallbackNoticeHint;
  if ( endCallbackNoticeHint )
  {
    p_endCallbackNoticeHint->klass = 0LL;
    sub_B70630(p_endCallbackNoticeHint, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__Init(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  WarBoardConfigurationUIContoroller__InitCost(this, method);
  WarBoardConfigurationUIContoroller__ModifyUserEquip(this, v3);
  WarBoardConfigurationUIContoroller__InitStartButton(this, v4);
  WarBoardConfigurationUIContoroller__InitHintButton(this, v5);
  WarBoardConfigurationUIContoroller__InitClassCompatibility(this, v6);
}


void __fastcall WarBoardConfigurationUIContoroller__InitClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classCompatibilitySprite; // x19

  if ( (byte_43503EB & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&StringLiteral_17404/*"buttontxt_formation_20"*/);
    byte_43503EB = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v3->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_24296868(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17404/*"buttontxt_formation_20"*/, 0LL);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__InitCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  intptr_t v3; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_36130748; // x0
  UnityEngine_Object_o *v6; // x20
  UIFont_o *Component_srcLineSprite; // x0
  const MethodInfo *v8; // x1
  UIFont_o *v9; // x20
  const MethodInfo *v10; // x2
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_43503E5 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_B70694(&UnityEngine_GameObject_var);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&System_Type_TypeInfo);
    sub_B70694(&StringLiteral_6836/*"Fonts/FGO-NumberFont-02"*/);
    byte_43503E5 = 1;
  }
  v3 = (int)UnityEngine_GameObject_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v11.fields.value = v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0LL);
  _36130748 = UnityEngine_Resources__Load_36130748((System_String_o *)StringLiteral_6836/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _36130748 )
  {
    if ( (UnityEngine_GameObject_c *)_36130748->klass == UnityEngine_GameObject_TypeInfo )
      v6 = _36130748;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UIFont_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_22;
    Component_srcLineSprite = (UIFont_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)v6,
                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v9 = Component_srcLineSprite,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, Component_srcLineSprite, 0LL),
          (Component_srcLineSprite = (UIFont_o *)this->fields.maxCostLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_srcLineSprite, v9, 0LL),
          (Component_srcLineSprite = (UIFont_o *)this->fields.spritLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_srcLineSprite, v9, 0LL),
          (Component_srcLineSprite = (UIFont_o *)this->fields.currentApLabel) == 0LL) )
    {
LABEL_22:
      sub_B7076C(Component_srcLineSprite, v8);
    }
    UILabel__set_bitmapFont((UILabel_o *)Component_srcLineSprite, v9, 0LL);
  }
  WarBoardConfigurationUIContoroller__ModifyCost(this, v8);
  WarBoardConfigurationUIContoroller__ModifyAP(this, 0, v10);
}


void __fastcall WarBoardConfigurationUIContoroller__InitHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *hintButtonObj; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x21
  struct QuestHintEntity_o **p_questHintEntity; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  QuestPhaseEntity_o **p_questPhaseEntity; // x21
  System_String_o *message; // x0

  if ( (byte_43503EE & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43503EE = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_33;
  v4 = *(_QWORD *)&hintButtonObj[5].fields.battleBgType;
  if ( !v4 )
    goto LABEL_33;
  v5 = *(_QWORD *)(v4 + 16);
  if ( !v5 )
    goto LABEL_33;
  if ( *(_DWORD *)(v5 + 60) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_33;
  v6 = *(_QWORD *)&hintButtonObj[5].fields.battleBgType;
  if ( !v6 )
    goto LABEL_33;
  v7 = *(_QWORD *)(v6 + 104);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !v7 )
    goto LABEL_33;
  if ( !hintButtonObj )
    goto LABEL_33;
  p_questHintEntity = &this->fields.questHintEntity;
  QuestHintMaster__TryGetEntity(
    (QuestHintMaster_o *)hintButtonObj,
    &this->fields.questHintEntity,
    *(_DWORD *)(v7 + 124),
    *(_DWORD *)(v7 + 128),
    0LL);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !hintButtonObj )
    goto LABEL_33;
  v9 = *(_DWORD *)(v7 + 124);
  v10 = *(_DWORD *)(v7 + 128);
  p_questPhaseEntity = &this->fields.questPhaseEntity;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)hintButtonObj, &this->fields.questPhaseEntity, v9, v10, 0LL);
  if ( *p_questHintEntity )
  {
    message = (*p_questHintEntity)->fields.message;
  }
  else
  {
    if ( !*p_questPhaseEntity )
      goto LABEL_22;
    message = QuestPhaseEntity__getHintMessage(*p_questPhaseEntity, 0LL);
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
LABEL_22:
    hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
    if ( hintButtonObj )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 0, 0LL);
      return;
    }
LABEL_33:
    sub_B7076C(hintButtonObj, method);
  }
  if ( *p_questHintEntity )
  {
    if ( !(*p_questHintEntity)->fields.openType )
      return;
    goto LABEL_26;
  }
  hintButtonObj = *p_questPhaseEntity;
  if ( !*p_questPhaseEntity )
    goto LABEL_33;
  if ( QuestPhaseEntity__getHintOpenType(hintButtonObj, 0LL) )
  {
LABEL_26:
    if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    }
    QuestHintDialogOpenManager__ReadData(0LL);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__InitStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *startButton; // x20
  __int64 v4; // x1
  struct UICommonButton_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x20
  WarBoardConfigurationUIContoroller___c_c *v7; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v10; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  WarBoardConfigurationUIContoroller___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v21; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_1; // x21
  Il2CppObject *v23; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  struct UnityEngine_GameObject_array *v32; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  const MethodInfo *v47; // x1

  if ( (byte_43503E3 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69251280);
    sub_B70694(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_UIWidget___);
    sub_B70694(&Method_System_Func_UIWidget__GameObject___ctor__);
    sub_B70694(&Method_System_Func_UIWidget__bool___ctor__);
    sub_B70694(&System_Func_UIWidget__GameObject__TypeInfo);
    sub_B70694(&System_Func_UIWidget__bool__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__);
    sub_B70694(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__);
    sub_B70694(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_43503E3 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v5 = this->fields.startButton;
    if ( !v5 )
      goto LABEL_26;
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)v5, 1, (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69251280);
    v7 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v7 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UIWidget__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v10,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        (const MethodInfo_29AC578 *)Method_System_Func_UIWidget__bool___ctor__);
      v11 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v11->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v11->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v19 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v20 = v18;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v19 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    v21 = v19->static_fields;
    _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v21->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v21 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)v21->__9;
      _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__5_1,
        v23,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_UIWidget__GameObject___ctor__);
      v24 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v24->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v24->__9__5_1,
        (System_Int32_array **)_9__5_1,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v32 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v31,
                                                   (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v32;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.startButtonTweenTargetCache,
      (System_Int32_array **)v32,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v5 = this->fields.startButton;
    if ( !v5 )
LABEL_26:
      sub_B7076C(v5, v4);
    v46 = (System_Int32_array **)*p_startButtonTweenTargetCache;
    v5->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_B70630((BattleServantConfConponent_o *)&v5->fields.tweenTargets, v46, v40, v41, v42, v43, v44, v45);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v47);
  }
}


bool __fastcall WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
        WarBoardConfigurationUIContoroller_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v4; // x24
  void *Instance; // x0
  const MethodInfo *UserServantId_k__BackingField; // x1
  DataManager_o *v7; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v8; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  System_Collections_Generic_List_int__o *v10; // x25
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantConfConponent_o *p_pieceSvtIdList; // x24
  int max_length; // w8
  unsigned int v19; // w28
  WarBoardPieceData_o *v20; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v22; // x26
  __int64 v23; // x27
  struct WarBoardStageEntity_o *stageEntity; // x8
  int v25; // w8
  __int64 v26; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p__9__0; // x23
  WarBoardPieceData_o *v28; // x24
  __int64 v29; // x8
  __int64 v30; // x8
  int32_t *v31; // x8
  int32_t v32; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  System_Collections_Generic_List_int__o *v35; // x1
  UserServantMaster_o *v36; // x0
  System_Collections_Generic_List_int__o *v37; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x25
  System_Collections_Generic_List_T__o *v39; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v47; // x0
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v48; // [xsp+10h] [xbp-60h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_43503FA & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_UserServantEntity___);
    sub_B70694(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Func_UserServantEntity__bool___ctor__);
    sub_B70694(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__);
    sub_B70694(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
    sub_B70694(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_43503FA = 1;
  }
  entity = 0LL;
  v4 = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_B70764(WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0___ctor(v4, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v7 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_65;
  v8 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, UserServantId_k__BackingField);
  v10 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_65;
  v48 = v4;
  v4->fields.pieceSvtIdList = v10;
  p_pieceSvtIdList = (BattleServantConfConponent_o *)&v4->fields.pieceSvtIdList;
  sub_B70630(p_pieceSvtIdList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  if ( !EditableServantPieces )
    goto LABEL_65;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
LABEL_66:
        v47 = sub_B70798(Instance);
        sub_B70738(v47, 0LL);
      }
      v20 = EditableServantPieces->m_Items[v19];
      if ( !v20 )
        break;
      UserServantId_k__BackingField = (const MethodInfo *)v20->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v8 )
          break;
        Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     v8,
                     (int64_t)UserServantId_k__BackingField,
                     (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_pieceSvtIdList->klass;
        v23 = *((_QWORD *)Instance + 10);
        v22 = *((_QWORD *)Instance + 11);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v50.fields.currentCryptoKey = v23;
        *(_QWORD *)&v50.fields.fakeValue = v22;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v50, 0LL);
        if ( !klass )
          break;
        System_Collections_Generic_List_int___Add(
          klass,
          (int32_t)Instance,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_20;
    }
LABEL_65:
    sub_B7076C(Instance, UserServantId_k__BackingField);
  }
LABEL_20:
  stageEntity = warBoardData->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  v48->fields.freeCost = (_DWORD)stageEntity - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v25 = EditableServantPieces->max_length;
  if ( v25 < 1 )
    return 0;
  v26 = 0LL;
  p__9__0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v48->fields.__9__0;
  while ( 1 )
  {
    if ( (unsigned int)v26 >= v25 )
      goto LABEL_66;
    v28 = EditableServantPieces->m_Items[v26];
    if ( !v28 )
      goto LABEL_65;
    if ( v28->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v26], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     v7,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_65;
        Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             &entity,
                             v28->fields._restrictionId_k__BackingField,
                             (const MethodInfo_21C049C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v7,
                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_65;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity->fields.longName,
                       0LL);
          if ( Instance && (v29 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v29 )
              goto LABEL_66;
            v30 = *((_QWORD *)Instance + 4);
            if ( !v30 )
              goto LABEL_65;
            v31 = (int32_t *)(v30 + 16);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          else
          {
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            if ( (BYTE3(WarBoardIndividualityClassMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
              Instance = WarBoardIndividualityClassMaster_TypeInfo;
            }
            v31 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v32 = *v31;
          if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v32 == static_fields->ALL_CLASS_ID )
          {
            if ( !v8 )
              goto LABEL_65;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v8, 0LL);
          }
          else
          {
            if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v32 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           v7,
                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_65;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0LL);
              if ( !v8 )
                goto LABEL_65;
              v35 = (System_Collections_Generic_List_int__o *)Instance;
              v36 = (UserServantMaster_o *)v8;
            }
            else
            {
              v37 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v37,
                (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v37 )
                goto LABEL_65;
              System_Collections_Generic_List_int___Add(
                v37,
                v32,
                (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v8 )
                goto LABEL_65;
              v36 = (UserServantMaster_o *)v8;
              v35 = v37;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v36, v35, 0LL);
          }
          v38 = *p__9__0;
          v39 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*p__9__0 )
          {
            v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v38,
              (Il2CppObject *)v48,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              (const MethodInfo_29AC578 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v48->fields.__9__0 = (struct System_Func_UserServantEntity__bool__o *)v38;
            sub_B70630(
              (BattleServantConfConponent_o *)&v48->fields.__9__0,
              (System_Int32_array **)v38,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
          }
          Instance = (void *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                               v39,
                               (System_Func_T__bool__o *)v38,
                               (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v25 = EditableServantPieces->max_length;
    if ( (int)++v26 >= v25 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAP(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t ap,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardConfigurationUIContoroller_o *v5; // x19
  WarBoardConfigurationUIContoroller_o *currentApLabel; // x19
  int32_t *v7; // x0
  __int64 v8; // x20
  __int64 v9; // x20
  __int64 v10; // x8
  WarBoardData_o *v11; // x20
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  const MethodInfo *v13; // x3
  WarBoardActionPointEntity_o *v14; // x0
  int baseActionPoint; // w8
  System_String_o *v16; // x1
  int v17; // [xsp+8h] [xbp-18h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  v18 = ap;
  if ( (byte_43503E7 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B70694(&StringLiteral_978/*"0"*/);
    byte_43503E7 = 1;
  }
  v17 = 0;
  if ( ap )
  {
    currentApLabel = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
    v7 = &v18;
    goto LABEL_19;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_B08394(v9);
  v10 = **(_QWORD **)(v9 + 184);
  if ( !v10 )
    goto LABEL_22;
  v11 = *(WarBoardData_o **)(v10 + 432);
  if ( !v11 )
    goto LABEL_22;
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v10 + 432), 0, 0, v3);
  if ( !ActionPointEntity || WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL) )
  {
    currentApLabel = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
    v14 = WarBoardData__GetActionPointEntity(v11, 0, 0, v13);
    if ( v14 )
      baseActionPoint = v14->fields.baseActionPoint;
    else
      baseActionPoint = 0;
    v17 = baseActionPoint;
    v7 = &v17;
LABEL_19:
    this = (WarBoardConfigurationUIContoroller_o *)System_Int32__ToString((int32_t)v7, 0LL);
    if ( currentApLabel )
    {
      v16 = (System_String_o *)this;
      this = currentApLabel;
      goto LABEL_21;
    }
LABEL_22:
    sub_B7076C(this, *(_QWORD *)&ap);
  }
  this = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
  if ( !this )
    goto LABEL_22;
  v16 = (System_String_o *)StringLiteral_978/*"0"*/;
LABEL_21:
  UILabel__set_text((UILabel_o *)this, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAPFromSquareIndex(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardConfigurationUIContoroller_o *v5; // x19
  __int64 v6; // x20
  __int64 v7; // x20
  __int64 v8; // x8
  WarBoardActionPointEntity_o *ActionPointEntity; // x20
  const MethodInfo *v10; // x2
  WarBoardPieceData_o *Piece_22472604; // x0
  WarBoardPieceData_o *v12; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v14; // x21
  const MethodInfo *v15; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v19; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_43503E8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43503E8 = 1;
  }
  entity = 0LL;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_B08394(v7);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !v8 )
    goto LABEL_38;
  this = *(WarBoardConfigurationUIContoroller_o **)(v8 + 432);
  if ( !this )
    goto LABEL_38;
  ActionPointEntity = WarBoardData__GetActionPointEntity((WarBoardData_o *)this, 0, 0, v3);
  this = (WarBoardConfigurationUIContoroller_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_38;
  this = (WarBoardConfigurationUIContoroller_o *)this[2].fields.endCallbackNoticeHint;
  if ( !this )
    goto LABEL_38;
  Piece_22472604 = WarBoardData__GetPiece_22472604((WarBoardData_o *)this, squareIndex, v10);
  if ( ActionPointEntity )
  {
    v12 = Piece_22472604;
    HasCost = WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL);
    if ( v12 )
    {
      if ( !HasCost )
      {
        if ( v12->fields._UserServantId_k__BackingField < 1 )
        {
          if ( !WarBoardPieceData__get_IsNpc(v12, 0LL) || !v12->fields._battleServant_k__BackingField )
          {
            v19 = v5;
            baseActionPoint = 0;
LABEL_36:
            WarBoardConfigurationUIContoroller__ModifyAP(v19, baseActionPoint, v15);
            return;
          }
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          battleServant_k__BackingField = v12->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            v14 = (WarBoardActionPointClassMaster_o *)this;
            this = (WarBoardConfigurationUIContoroller_o *)BattleServantData__getClassId(
                                                             battleServant_k__BackingField,
                                                             0LL);
            if ( v14 )
            {
LABEL_33:
              EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                              v14,
                                              ActionPointEntity,
                                              (int32_t)this,
                                              0LL);
              if ( !EntityFromActionPointEntity )
                return;
              baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
              v19 = v5;
              goto LABEL_36;
            }
          }
        }
        else
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( this )
          {
            if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                    &entity,
                    v12->fields._UserServantId_k__BackingField,
                    (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_38;
            v14 = (WarBoardActionPointClassMaster_o *)this;
            this = (WarBoardConfigurationUIContoroller_o *)UserServantEntity__getSvtClassId(entity, 0LL);
            if ( !v14 )
              goto LABEL_38;
            goto LABEL_33;
          }
        }
LABEL_38:
        sub_B7076C(this, *(_QWORD *)&squareIndex);
      }
    }
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardConfigurationUIContoroller_o *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9
  signed int v8; // w22
  signed int v9; // w23
  System_String_o *v10; // x0
  UILabel_o *maxCostLabel; // x21
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  UILabel_o *spritLabel; // x21
  System_String_o *v15; // x0
  UILabel_o *currentCostLabel; // x21
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  unsigned __int64 v19; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_43503E6 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_B70694(&StringLiteral_15461/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_B70694(&StringLiteral_15459/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B70694(&StringLiteral_15460/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_43503E6 = 1;
  }
  v19 = 0LL;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_B08394(v4);
  v5 = **(_QWORD **)(v4 + 184);
  if ( !v5 )
    goto LABEL_24;
  v6 = *(_QWORD *)(v5 + 432);
  if ( !v6 )
    goto LABEL_24;
  v7 = *(_QWORD *)(v6 + 16);
  v8 = *(_DWORD *)(v6 + 208);
  if ( v7 )
    v9 = *(_DWORD *)(v7 + 40);
  else
    v9 = 0;
  v19 = __PAIR64__(v8, v9);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15459/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = v2->fields.maxCostLabel;
  v12 = v10;
  v13 = System_Int32__ToString((int32_t)&v19, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_44758168(v12, v13, 0LL);
  if ( !maxCostLabel )
    goto LABEL_24;
  UILabel__set_text(maxCostLabel, (System_String_o *)this, 0LL);
  spritLabel = v2->fields.spritLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15461/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_44758168(v12, v15, 0LL);
  if ( !spritLabel )
    goto LABEL_24;
  UILabel__set_text(spritLabel, (System_String_o *)this, 0LL);
  currentCostLabel = v2->fields.currentCostLabel;
  if ( v8 > v9 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15460/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v17 = System_Int32__ToString((int32_t)&v19 + 4, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_44758168(v12, v17, 0LL);
  if ( !currentCostLabel )
LABEL_24:
    sub_B7076C(this, method);
  UILabel__set_text(currentCostLabel, (System_String_o *)this, 0LL);
  WarBoardConfigurationUIContoroller__ModifyStartButton(v2, v18);
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *startButton; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x20
  __int64 v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  System_Int32_array **startButtonTweenTargetCache; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_43503E4 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_43503E4 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(startButton, 0LL, 0LL);
  if ( (v4 & 1) == 0 )
  {
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      v4 = sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v13 = **(_QWORD **)(v12 + 192);
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      v4 = sub_B08394(v13);
    v14 = **(_QWORD **)(v13 + 184);
    if ( !v14 )
      goto LABEL_20;
    v15 = *(_QWORD *)(v14 + 432);
    if ( !v15 )
      goto LABEL_20;
    v4 = (__int64)this->fields.startButton;
    if ( *(int *)(v15 + 212) >= 1 )
    {
      if ( v4 )
      {
        startButtonTweenTargetCache = (System_Int32_array **)this->fields.startButtonTweenTargetCache;
        *(_QWORD *)(v4 + 24) = startButtonTweenTargetCache;
        sub_B70630((BattleServantConfConponent_o *)(v4 + 24), startButtonTweenTargetCache, v6, v7, v8, v9, v10, v11);
        v4 = (__int64)this->fields.startButton;
        if ( v4 )
        {
          UICommonButton__SetButtonEnable((UICommonButton_o *)v4, 1, 1, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B7076C(v4, v5);
    }
    if ( !v4 )
      goto LABEL_20;
    UICommonButton__SetButtonEnable((UICommonButton_o *)v4, 0, 1, 0LL);
    v4 = (__int64)this->fields.startButton;
    if ( !v4 )
      goto LABEL_20;
    *(_QWORD *)(v4 + 24) = 0LL;
    sub_B70630((BattleServantConfConponent_o *)(v4 + 24), 0LL, v17, v18, v19, v20, v21, v22);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyUserEquip(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v5; // x20
  __int64 v6; // x21
  __int64 v7; // x21
  __int64 v8; // x8
  UserServantEntity_o *Entity; // x0
  int32_t genderImageId; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-28h] BYREF
  int32_t maxLv[2]; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_43503E9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B70694(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43503E9 = 1;
  }
  *(_QWORD *)maxLv = 0LL;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v5 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    Instance = (DataManager_o *)sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    Instance = (DataManager_o *)sub_B08394(v7);
  v8 = **(_QWORD **)(v7 + 184);
  if ( !v8 )
    goto LABEL_15;
  Instance = *(DataManager_o **)(v8 + 432);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)Instance, v4);
  if ( !v5 )
    goto LABEL_15;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v5,
             (int64_t)Instance,
             (const MethodInfo_21C0668 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !Entity )
    return;
  UserEquipEntity__getEquipInfo((UserEquipEntity_o *)Entity, &maxLv[1], maxLv, &equipName, &detail, &genderImageId, 0LL);
  Instance = (DataManager_o *)this->fields.userEquipIcon;
  if ( !Instance )
LABEL_15:
    sub_B7076C(Instance, v4);
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__NoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  struct QuestHintEntity_o *v14; // x8
  QuestPhaseEntity_o *openType; // x0
  _DWORD *v16; // x8
  int32_t v17; // w20

  if ( (byte_43503F0 & 1) == 0 )
  {
    sub_B70694(&QuestHintDialogOpenManager_TypeInfo);
    byte_43503F0 = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.endCallbackNoticeHint,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  questHintEntity = this->fields.questHintEntity;
  if ( questHintEntity )
  {
    message = questHintEntity->fields.message;
  }
  else
  {
    questPhaseEntity = this->fields.questPhaseEntity;
    if ( !questPhaseEntity )
    {
LABEL_8:
      WarBoardConfigurationUIContoroller__EndNoticeHint(this, v10);
      return;
    }
    message = QuestPhaseEntity__getHintMessage(questPhaseEntity, 0LL);
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    goto LABEL_8;
  v14 = this->fields.questHintEntity;
  if ( v14 )
  {
    openType = (QuestPhaseEntity_o *)(unsigned int)v14->fields.openType;
  }
  else
  {
    openType = this->fields.questPhaseEntity;
    if ( !openType )
      goto LABEL_25;
    openType = (QuestPhaseEntity_o *)QuestPhaseEntity__getHintOpenType(openType, 0LL);
  }
  if ( (_DWORD)openType != 1 )
    goto LABEL_24;
  v16 = this->fields.questHintEntity;
  if ( !v16 )
  {
    v16 = this->fields.questPhaseEntity;
    if ( !v16 )
LABEL_25:
      sub_B7076C(openType, v10);
  }
  v17 = v16[4];
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  if ( QuestHintDialogOpenManager__IsQuestHintOpen(v17, 0LL) )
    goto LABEL_8;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  QuestHintDialogOpenManager__SetQuestId(v17, 0LL);
  QuestHintDialogOpenManager__WriteData(0LL);
LABEL_24:
  WarBoardConfigurationUIContoroller__OpenHintDialog(this, v10);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickClassCompatibilityButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  CommonUI_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_43503EC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__);
    byte_43503EC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B08394(v6);
  v7 = **(CommonUI_o ***)(v6 + 184);
  v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v7 )
LABEL_14:
    sub_B7076C(Instance, v4);
  CommonUI__OpenClassCompatibilityMenu(v7, v8, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_43503EF & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_43503EF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  questHintEntity = this->fields.questHintEntity;
  if ( questHintEntity )
  {
    message = questHintEntity->fields.message;
  }
  else
  {
    questPhaseEntity = this->fields.questPhaseEntity;
    if ( !questPhaseEntity )
      return;
    message = QuestPhaseEntity__getHintMessage(questPhaseEntity, 0LL);
  }
  if ( !System_String__IsNullOrEmpty(message, 0LL) )
  {
    this->fields.endCallbackNoticeHint = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.endCallbackNoticeHint, 0LL, v6, v7, v8, v9, v10, v11);
    WarBoardConfigurationUIContoroller__OpenHintDialog(this, v12);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  CommonUI_o *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x23
  System_String_o *v11; // x24
  CommonConfirmDialog_ClickDelegate_o *v12; // x25

  if ( (byte_43503F8 & 1) == 0 )
  {
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__);
    sub_B70694(&StringLiteral_15468/*"WARBOARD_RETURN_CONFIRM_NO"*/);
    sub_B70694(&StringLiteral_15467/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/);
    sub_B70694(&StringLiteral_15470/*"WARBOARD_RETURN_CONFIRM_YES"*/);
    sub_B70694(&StringLiteral_15469/*"WARBOARD_RETURN_CONFIRM_TITLE"*/);
    byte_43503F8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B08394(v6);
  v7 = **(CommonUI_o ***)(v6 + 184);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15469/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15467/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15470/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15468/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v12 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v7 )
LABEL_17:
    sub_B7076C(Instance, v4);
  CommonUI__OpenConfirmDialog_17903600(v7, v8, v9, v10, v11, 0, v12, 0, 28, 180.0, 43.0, 0, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_43503F9 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_43503F9 = 1;
  }
  if ( isDecide )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434DEAC )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEAC = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_17:
      sub_B7076C(Instance, v6);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_43503F4 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__);
    byte_43503F4 = 1;
  }
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v3, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  WarBoardData_o *warBoardData_k__BackingField; // x1
  const MethodInfo *v5; // x2
  struct WarBoardStageEntity_o *stageEntity; // x9
  CommonUI_o *v7; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x21
  WarBoardConfigurationUIContoroller___c_c *v10; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v13; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  bool IsEnabledPutOnFreeSquare; // w21
  CommonUI_o *v22; // x20
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  System_String_o *v26; // x24
  CommonConfirmDialog_ClickDelegate_o *v27; // x25
  int v28; // s1
  System_Nullable_float__o v29; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+78h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v32; // 0:x0.8

  if ( (byte_43503F6 & 1) == 0 )
  {
    sub_B70694(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__);
    sub_B70694(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    sub_B70694(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__);
    sub_B70694(&StringLiteral_15457/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/);
    sub_B70694(&StringLiteral_15476/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/);
    sub_B70694(&StringLiteral_15473/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/);
    sub_B70694(&StringLiteral_15458/*"WARBOARD_PARTY_COST_OVER_TITLE"*/);
    sub_B70694(&StringLiteral_15475/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/);
    sub_B70694(&StringLiteral_15474/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/);
    sub_B70694(&StringLiteral_15477/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/);
    byte_43503F6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_40;
  stageEntity = warBoardData_k__BackingField->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  if ( warBoardData_k__BackingField->fields._CurrentPartyCost_k__BackingField > (int)stageEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      v7 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15458/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15457/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
      v10 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v10 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      static_fields = v10->static_fields;
      _9__41_0 = static_fields->__9__41_0;
      if ( !_9__41_0 )
      {
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_B70764(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v13,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        v14 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        v14->__9__41_0 = _9__41_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v14->__9__41_0,
          (System_Int32_array **)_9__41_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0LL;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
      v32 = (System_Nullable_float__o)&v29;
      v29 = 0LL;
      System_Nullable_float____ctor(v32, 15.0, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
      if ( v7 )
      {
        CommonUI__OpenNotificationDialog_17906460(
          v7,
          v8,
          v9,
          _9__41_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v29,
          0,
          0,
          0LL,
          1,
          0LL,
          0LL,
          0LL,
          0LL);
        return;
      }
    }
LABEL_40:
    sub_B7076C(Instance, warBoardData_k__BackingField);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)Instance,
                               warBoardData_k__BackingField,
                               v5);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  v22 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( IsEnabledPutOnFreeSquare )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_15476/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15474/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15477/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15475/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v27,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v22 )
      goto LABEL_40;
    v28 = 1109393408;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_15476/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15473/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15477/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15475/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v27,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v22 )
      goto LABEL_40;
    v28 = 1110179840;
  }
  CommonUI__OpenConfirmDialog_17903600(v22, v23, v24, v25, v26, 1, v27, 0, 28, 180.0, *(float *)&v28, 0, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_43503F7 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43503F7 = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_B7076C(Instance, v5);
  }
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x19
  __int64 v4; // x19
  WebViewManager_o *Instance; // x0

  if ( (byte_43503EA & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_43503EA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B08394(v4);
  Instance = **(WebViewManager_o ***)(v4 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v2);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x19

  if ( (byte_43503ED & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43503ED = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B08394(v5);
  Instance = **(WebViewManager_o ***)(v5 + 184);
  if ( !Instance )
LABEL_10:
    sub_B7076C(Instance, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_43503FB & 1) == 0 )
  {
    sub_B70694(&AndroidBackKeyManager_TypeInfo);
    sub_B70694(&StringLiteral_14712/*"TopBase/BackButton"*/);
    byte_43503FB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21318328(transform, (System_String_o *)StringLiteral_14712/*"TopBase/BackButton"*/, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OpenHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *title; // x20
  System_String_o *message; // x21
  int32_t leftIndent; // w22
  CommonUI_o *v9; // x23
  ScrollMessageDialog_ClickDelegate_o *v10; // x24

  if ( (byte_43503F1 & 1) == 0 )
  {
    sub_B70694(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43503F1 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
        questHintEntity = this->fields.questHintEntity;
        if ( questHintEntity )
        {
          title = questHintEntity->fields.title;
          message = questHintEntity->fields.message;
          leftIndent = questHintEntity->fields.leftIndent;
        }
        else
        {
          Instance = (WarBoardManager_o *)this->fields.questPhaseEntity;
          if ( !Instance )
            goto LABEL_16;
          Instance = (WarBoardManager_o *)QuestPhaseEntity__getHintMessageTitle((QuestPhaseEntity_o *)Instance, 0LL);
          if ( !this->fields.questPhaseEntity )
            goto LABEL_16;
          title = (System_String_o *)Instance;
          Instance = (WarBoardManager_o *)QuestPhaseEntity__getHintMessage(this->fields.questPhaseEntity, 0LL);
          if ( !this->fields.questPhaseEntity )
            goto LABEL_16;
          message = (System_String_o *)Instance;
          leftIndent = QuestPhaseEntity__getHintLeftIndent(this->fields.questPhaseEntity, 0LL);
        }
        v9 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = (ScrollMessageDialog_ClickDelegate_o *)sub_B70764(ScrollMessageDialog_ClickDelegate_TypeInfo);
        ScrollMessageDialog_ClickDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0LL);
        if ( v9 )
        {
          CommonUI__OpenScrollMessageDialog(v9, title, message, leftIndent, v10, 0, 1, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B7076C(Instance, v4);
  }
  WarBoardConfigurationUIContoroller__EndNoticeHint(this, method);
}


void __fastcall WarBoardConfigurationUIContoroller__SetActiveCostLabel(
        WarBoardConfigurationUIContoroller_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *costBaseObj; // x0

  costBaseObj = this->fields.costBaseObj;
  if ( !costBaseObj )
    sub_B7076C(0LL, isActive);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UISprite_o *newRuleBg; // x20
  const MethodInfo *v4; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_43503F3 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&StringLiteral_19651/*"icon_noticebg_01"*/);
    byte_43503F3 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_19651/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, v4), !newRuleObject) )
  {
    sub_B7076C(Instance, v4);
  }
  UnityEngine_GameObject__SetActive(newRuleObject, (unsigned __int8)Instance & 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller___OpenHintDialog_b__33_0(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  WarBoardConfigurationUIContoroller__CloseHintDialog(this, (const MethodInfo *)isDecide);
  WarBoardConfigurationUIContoroller__EndNoticeHint(this, v4);
}


void __fastcall WarBoardConfigurationUIContoroller___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F943 & 1) == 0 )
  {
    sub_B70694(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_434F943 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardConfigurationUIContoroller___c___ctor(
        WarBoardConfigurationUIContoroller___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardConfigurationUIContoroller___c___InitStartButton_b__5_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  if ( (byte_434F944 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F944 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardConfigurationUIContoroller___c___InitStartButton_b__5_1(
        WarBoardConfigurationUIContoroller___c_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__41_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_434F945 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434F945 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v4);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller___c__DisplayClass45_0___ctor(
        WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardConfigurationUIContoroller___c__DisplayClass45_0___IsEnabledPutOnFreeSquare_b__0(
        WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *this,
        UserServantEntity_o *svt,
        const MethodInfo *method)
{
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v4; // x20
  System_Collections_Generic_List_int__o *pieceSvtIdList; // x20

  v4 = this;
  if ( (byte_434F946 & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    byte_434F946 = 1;
  }
  if ( !svt )
    goto LABEL_10;
  if ( !UserServantEntity__IsLeave(svt, 0LL) && UserServantEntity__getCost(svt, 0LL) <= v4->fields.freeCost )
  {
    pieceSvtIdList = v4->fields.pieceSvtIdList;
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)UserServantEntity__getSvtId(svt, 0LL);
    if ( pieceSvtIdList )
      return !System_Collections_Generic_List_int___Contains(
                pieceSvtIdList,
                (int32_t)this,
                (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_B7076C(this, svt);
  }
  return 0;
}