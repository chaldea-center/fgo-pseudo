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
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4186621 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4186621 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v7; // x0

  if ( (byte_4186624 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B2C35C(&WarBoardManager_TypeInfo, v2);
    byte_4186624 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_11;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v7 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v7 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B2C434(Instance, v4);
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
    sub_B2C434(0LL, v3);
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
    sub_B2C2F8(p_endCallbackNoticeHint, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classCompatibilitySprite; // x19

  if ( (byte_418661A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&CondType_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_17146/*"buttontxt_formation_20"*/, v5);
    byte_418661A = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v6->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17146/*"buttontxt_formation_20"*/, 0LL);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__InitCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  intptr_t v8; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_35378436; // x0
  UnityEngine_Object_o *v11; // x20
  UIFont_o *Component_srcLineSprite; // x0
  const MethodInfo *v13; // x1
  UIFont_o *v14; // x20
  const MethodInfo *v15; // x2
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_4186614 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_B2C35C(&UnityEngine_GameObject_var, v3);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&System_Type_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_6741/*"Fonts/FGO-NumberFont-02"*/, v7);
    byte_4186614 = 1;
  }
  v8 = (int)UnityEngine_GameObject_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  _35378436 = UnityEngine_Resources__Load_35378436((System_String_o *)StringLiteral_6741/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _35378436 )
  {
    if ( (UnityEngine_GameObject_c *)_35378436->klass == UnityEngine_GameObject_TypeInfo )
      v11 = _35378436;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UIFont_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_22;
    Component_srcLineSprite = (UIFont_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)v11,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v14 = Component_srcLineSprite,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, Component_srcLineSprite, 0LL),
          (Component_srcLineSprite = (UIFont_o *)this->fields.maxCostLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_srcLineSprite, v14, 0LL),
          (Component_srcLineSprite = (UIFont_o *)this->fields.spritLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_srcLineSprite, v14, 0LL),
          (Component_srcLineSprite = (UIFont_o *)this->fields.currentApLabel) == 0LL) )
    {
LABEL_22:
      sub_B2C434(Component_srcLineSprite, v13);
    }
    UILabel__set_bitmapFont((UILabel_o *)Component_srcLineSprite, v14, 0LL);
  }
  WarBoardConfigurationUIContoroller__ModifyCost(this, v13);
  WarBoardConfigurationUIContoroller__ModifyAP(this, 0, v15);
}


void __fastcall WarBoardConfigurationUIContoroller__InitHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  QuestPhaseEntity_o *hintButtonObj; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x21
  struct QuestHintEntity_o **p_questHintEntity; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  QuestPhaseEntity_o **p_questPhaseEntity; // x21
  System_String_o *message; // x0

  if ( (byte_418661D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    byte_418661D = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_33;
  v8 = *(_QWORD *)&hintButtonObj[5].fields.battleBgType;
  if ( !v8 )
    goto LABEL_33;
  v9 = *(_QWORD *)(v8 + 16);
  if ( !v9 )
    goto LABEL_33;
  if ( *(_DWORD *)(v9 + 60) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_33;
  v10 = *(_QWORD *)&hintButtonObj[5].fields.battleBgType;
  if ( !v10 )
    goto LABEL_33;
  v11 = *(_QWORD *)(v10 + 104);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !v11 )
    goto LABEL_33;
  if ( !hintButtonObj )
    goto LABEL_33;
  p_questHintEntity = &this->fields.questHintEntity;
  QuestHintMaster__TryGetEntity(
    (QuestHintMaster_o *)hintButtonObj,
    &this->fields.questHintEntity,
    *(_DWORD *)(v11 + 124),
    *(_DWORD *)(v11 + 128),
    0LL);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !hintButtonObj )
    goto LABEL_33;
  v13 = *(_DWORD *)(v11 + 124);
  v14 = *(_DWORD *)(v11 + 128);
  p_questPhaseEntity = &this->fields.questPhaseEntity;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)hintButtonObj, &this->fields.questPhaseEntity, v13, v14, 0LL);
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
    sub_B2C434(hintButtonObj, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *startButton; // x20
  __int64 v15; // x1
  struct UICommonButton_o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x20
  WarBoardConfigurationUIContoroller___c_c *v18; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v21; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  WarBoardConfigurationUIContoroller___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v32; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_1; // x21
  Il2CppObject *v34; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  struct UnityEngine_GameObject_array *v43; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  const MethodInfo *v58; // x1

  if ( (byte_4186612 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_GameObject___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UIWidget___, v5);
    sub_B2C35C(&Method_System_Func_UIWidget__GameObject___ctor__, v6);
    sub_B2C35C(&Method_System_Func_UIWidget__bool___ctor__, v7);
    sub_B2C35C(&System_Func_UIWidget__GameObject__TypeInfo, v8);
    sub_B2C35C(&System_Func_UIWidget__bool__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__, v11);
    sub_B2C35C(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__, v12);
    sub_B2C35C(&WarBoardConfigurationUIContoroller___c_TypeInfo, v13);
    byte_4186612 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v16 = this->fields.startButton;
    if ( !v16 )
      goto LABEL_26;
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)v16, 1, (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072);
    v18 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v18 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UIWidget__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v21,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_UIWidget__bool___ctor__);
      v22 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v22->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v22->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v30 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v31 = v29;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v30 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    v32 = v30->static_fields;
    _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v32->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v32 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)v32->__9;
      _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__5_1,
        v34,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        (const MethodInfo_2713350 *)Method_System_Func_UIWidget__GameObject___ctor__);
      v35 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v35->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v35->__9__5_1,
        (System_Int32_array **)_9__5_1,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v31,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v43 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v42,
                                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v43;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.startButtonTweenTargetCache,
      (System_Int32_array **)v43,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v16 = this->fields.startButton;
    if ( !v16 )
LABEL_26:
      sub_B2C434(v16, v15);
    v57 = (System_Int32_array **)*p_startButtonTweenTargetCache;
    v16->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_B2C2F8((BattleServantConfConponent_o *)&v16->fields.tweenTargets, v57, v51, v52, v53, v54, v55, v56);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v58);
  }
}


bool __fastcall WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
        WarBoardConfigurationUIContoroller_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v20; // x24
  void *Instance; // x0
  const MethodInfo *UserServantId_k__BackingField; // x1
  DataManager_o *v23; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v24; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  System_Collections_Generic_List_int__o *v26; // x25
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleServantConfConponent_o *p_pieceSvtIdList; // x24
  int max_length; // w8
  unsigned int v35; // w28
  WarBoardPieceData_o *v36; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v38; // x26
  __int64 v39; // x27
  struct WarBoardStageEntity_o *stageEntity; // x8
  int v41; // w8
  __int64 v42; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p__9__0; // x23
  WarBoardPieceData_o *v44; // x24
  __int64 v45; // x8
  __int64 v46; // x8
  int32_t *v47; // x8
  int32_t v48; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  System_Collections_Generic_List_int__o *v51; // x1
  UserServantMaster_o *v52; // x0
  System_Collections_Generic_List_int__o *v53; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v54; // x25
  System_Collections_Generic_List_T__o *v55; // x24
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v63; // x0
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v64; // [xsp+10h] [xbp-60h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4186629 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_UserServantEntity___, warBoardData);
    sub_B2C35C(&Method_DataManager_GetMasterData_RestrictionMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&Method_System_Func_UserServantEntity__bool___ctor__, v10);
    sub_B2C35C(&System_Func_UserServantEntity__bool__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__, v17);
    sub_B2C35C(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo, v18);
    sub_B2C35C(&WarBoardIndividualityClassMaster_TypeInfo, v19);
    byte_4186629 = 1;
  }
  entity = 0LL;
  v20 = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_B2C42C(WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0___ctor(v20, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v23 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_65;
  v24 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, UserServantId_k__BackingField);
  v26 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v20 )
    goto LABEL_65;
  v64 = v20;
  v20->fields.pieceSvtIdList = v26;
  p_pieceSvtIdList = (BattleServantConfConponent_o *)&v20->fields.pieceSvtIdList;
  sub_B2C2F8(p_pieceSvtIdList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  if ( !EditableServantPieces )
    goto LABEL_65;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
      {
LABEL_66:
        v63 = sub_B2C460(Instance);
        sub_B2C400(v63, 0LL);
      }
      v36 = EditableServantPieces->m_Items[v35];
      if ( !v36 )
        break;
      UserServantId_k__BackingField = (const MethodInfo *)v36->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v24 )
          break;
        Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     v24,
                     (int64_t)UserServantId_k__BackingField,
                     (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_pieceSvtIdList->klass;
        v39 = *((_QWORD *)Instance + 10);
        v38 = *((_QWORD *)Instance + 11);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v66.fields.currentCryptoKey = v39;
        *(_QWORD *)&v66.fields.fakeValue = v38;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v66, 0LL);
        if ( !klass )
          break;
        System_Collections_Generic_List_int___Add(
          klass,
          (int32_t)Instance,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_20;
    }
LABEL_65:
    sub_B2C434(Instance, UserServantId_k__BackingField);
  }
LABEL_20:
  stageEntity = warBoardData->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  v64->fields.freeCost = (_DWORD)stageEntity - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v41 = EditableServantPieces->max_length;
  if ( v41 < 1 )
    return 0;
  v42 = 0LL;
  p__9__0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v64->fields.__9__0;
  while ( 1 )
  {
    if ( (unsigned int)v42 >= v41 )
      goto LABEL_66;
    v44 = EditableServantPieces->m_Items[v42];
    if ( !v44 )
      goto LABEL_65;
    if ( v44->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v42], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     v23,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_65;
        Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             &entity,
                             v44->fields._restrictionId_k__BackingField,
                             (const MethodInfo_24E412C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v23,
                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_65;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity->fields.longName,
                       0LL);
          if ( Instance && (v45 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v45 )
              goto LABEL_66;
            v46 = *((_QWORD *)Instance + 4);
            if ( !v46 )
              goto LABEL_65;
            v47 = (int32_t *)(v46 + 16);
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
            v47 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v48 = *v47;
          if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v48 == static_fields->ALL_CLASS_ID )
          {
            if ( !v24 )
              goto LABEL_65;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v24, 0LL);
          }
          else
          {
            if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v48 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           v23,
                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_65;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0LL);
              if ( !v24 )
                goto LABEL_65;
              v51 = (System_Collections_Generic_List_int__o *)Instance;
              v52 = (UserServantMaster_o *)v24;
            }
            else
            {
              v53 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v53,
                (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v53 )
                goto LABEL_65;
              System_Collections_Generic_List_int___Add(
                v53,
                v48,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v24 )
                goto LABEL_65;
              v52 = (UserServantMaster_o *)v24;
              v51 = v53;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v52, v51, 0LL);
          }
          v54 = *p__9__0;
          v55 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*p__9__0 )
          {
            v54 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v54,
              (Il2CppObject *)v64,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              (const MethodInfo_2711C04 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v64->fields.__9__0 = (struct System_Func_UserServantEntity__bool__o *)v54;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v64->fields.__9__0,
              (System_Int32_array **)v54,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
          }
          Instance = (void *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                               v55,
                               (System_Func_T__bool__o *)v54,
                               (const MethodInfo_17266AC *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v41 = EditableServantPieces->max_length;
    if ( (int)++v42 >= v41 )
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
  __int64 v6; // x1
  WarBoardConfigurationUIContoroller_o *currentApLabel; // x19
  int32_t *v8; // x0
  __int64 v9; // x20
  __int64 v10; // x20
  __int64 v11; // x8
  WarBoardData_o *v12; // x20
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  const MethodInfo *v14; // x3
  WarBoardActionPointEntity_o *v15; // x0
  int baseActionPoint; // w8
  System_String_o *v17; // x1
  int v18; // [xsp+8h] [xbp-18h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  v19 = ap;
  if ( (byte_4186616 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, *(_QWORD *)&ap);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B2C35C(&StringLiteral_953/*"0"*/, v6);
    byte_4186616 = 1;
  }
  v18 = 0;
  if ( ap )
  {
    currentApLabel = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
    v8 = &v19;
    goto LABEL_19;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AC505C(v10);
  v11 = **(_QWORD **)(v10 + 184);
  if ( !v11 )
    goto LABEL_22;
  v12 = *(WarBoardData_o **)(v11 + 432);
  if ( !v12 )
    goto LABEL_22;
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v11 + 432), 0, 0, v3);
  if ( !ActionPointEntity || WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL) )
  {
    currentApLabel = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
    v15 = WarBoardData__GetActionPointEntity(v12, 0, 0, v14);
    if ( v15 )
      baseActionPoint = v15->fields.baseActionPoint;
    else
      baseActionPoint = 0;
    v18 = baseActionPoint;
    v8 = &v18;
LABEL_19:
    this = (WarBoardConfigurationUIContoroller_o *)System_Int32__ToString((int32_t)v8, 0LL);
    if ( currentApLabel )
    {
      v17 = (System_String_o *)this;
      this = currentApLabel;
      goto LABEL_21;
    }
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&ap);
  }
  this = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
  if ( !this )
    goto LABEL_22;
  v17 = (System_String_o *)StringLiteral_953/*"0"*/;
LABEL_21:
  UILabel__set_text((UILabel_o *)this, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAPFromSquareIndex(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardConfigurationUIContoroller_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x20
  __int64 v13; // x8
  WarBoardActionPointEntity_o *ActionPointEntity; // x20
  const MethodInfo *v15; // x2
  WarBoardPieceData_o *Piece_22512764; // x0
  WarBoardPieceData_o *v17; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v19; // x21
  const MethodInfo *v20; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v24; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4186617 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v9);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B2C35C(
                                                     &Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
                                                     v10);
    byte_4186617 = 1;
  }
  entity = 0LL;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AC505C(v12);
  v13 = **(_QWORD **)(v12 + 184);
  if ( !v13 )
    goto LABEL_38;
  this = *(WarBoardConfigurationUIContoroller_o **)(v13 + 432);
  if ( !this )
    goto LABEL_38;
  ActionPointEntity = WarBoardData__GetActionPointEntity((WarBoardData_o *)this, 0, 0, v3);
  this = (WarBoardConfigurationUIContoroller_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_38;
  this = (WarBoardConfigurationUIContoroller_o *)this[2].fields.endCallbackNoticeHint;
  if ( !this )
    goto LABEL_38;
  Piece_22512764 = WarBoardData__GetPiece_22512764((WarBoardData_o *)this, squareIndex, v15);
  if ( ActionPointEntity )
  {
    v17 = Piece_22512764;
    HasCost = WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL);
    if ( v17 )
    {
      if ( !HasCost )
      {
        if ( v17->fields._UserServantId_k__BackingField < 1 )
        {
          if ( !WarBoardPieceData__get_IsNpc(v17, 0LL) || !v17->fields._battleServant_k__BackingField )
          {
            v24 = v5;
            baseActionPoint = 0;
LABEL_36:
            WarBoardConfigurationUIContoroller__ModifyAP(v24, baseActionPoint, v20);
            return;
          }
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          battleServant_k__BackingField = v17->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            v19 = (WarBoardActionPointClassMaster_o *)this;
            this = (WarBoardConfigurationUIContoroller_o *)BattleServantData__getClassId(
                                                             battleServant_k__BackingField,
                                                             0LL);
            if ( v19 )
            {
LABEL_33:
              EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                              v19,
                                              ActionPointEntity,
                                              (int32_t)this,
                                              0LL);
              if ( !EntityFromActionPointEntity )
                return;
              baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
              v24 = v5;
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
          this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( this )
          {
            if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                    &entity,
                    v17->fields._UserServantId_k__BackingField,
                    (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_38;
            v19 = (WarBoardActionPointClassMaster_o *)this;
            this = (WarBoardConfigurationUIContoroller_o *)UserServantEntity__getSvtClassId(entity, 0LL);
            if ( !v19 )
              goto LABEL_38;
            goto LABEL_33;
          }
        }
LABEL_38:
        sub_B2C434(this, *(_QWORD *)&squareIndex);
      }
    }
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardConfigurationUIContoroller_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  signed int v12; // w22
  signed int v13; // w23
  System_String_o *v14; // x0
  UILabel_o *maxCostLabel; // x21
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  UILabel_o *spritLabel; // x21
  System_String_o *v19; // x0
  UILabel_o *currentCostLabel; // x21
  System_String_o *v21; // x0
  const MethodInfo *v22; // x1
  unsigned __int64 v23; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4186615 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    sub_B2C35C(&StringLiteral_15271/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v4);
    sub_B2C35C(&StringLiteral_15269/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, v5);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B2C35C(&StringLiteral_15270/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v6);
    byte_4186615 = 1;
  }
  v23 = 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AC505C(v8);
  v9 = **(_QWORD **)(v8 + 184);
  if ( !v9 )
    goto LABEL_24;
  v10 = *(_QWORD *)(v9 + 432);
  if ( !v10 )
    goto LABEL_24;
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(_DWORD *)(v10 + 208);
  if ( v11 )
    v13 = *(_DWORD *)(v11 + 40);
  else
    v13 = 0;
  v23 = __PAIR64__(v12, v13);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15269/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = v2->fields.maxCostLabel;
  v16 = v14;
  v17 = System_Int32__ToString((int32_t)&v23, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_44305532(v16, v17, 0LL);
  if ( !maxCostLabel )
    goto LABEL_24;
  UILabel__set_text(maxCostLabel, (System_String_o *)this, 0LL);
  spritLabel = v2->fields.spritLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15271/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_44305532(v16, v19, 0LL);
  if ( !spritLabel )
    goto LABEL_24;
  UILabel__set_text(spritLabel, (System_String_o *)this, 0LL);
  currentCostLabel = v2->fields.currentCostLabel;
  if ( v12 > v13 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15270/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v21 = System_Int32__ToString((int32_t)&v23 + 4, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_44305532(v16, v21, 0LL);
  if ( !currentCostLabel )
LABEL_24:
    sub_B2C434(this, method);
  UILabel__set_text(currentCostLabel, (System_String_o *)this, 0LL);
  WarBoardConfigurationUIContoroller__ModifyStartButton(v2, v22);
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *startButton; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x20
  __int64 v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  System_Int32_array **startButtonTweenTargetCache; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4186613 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    byte_4186613 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(startButton, 0LL, 0LL);
  if ( (v5 & 1) == 0 )
  {
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      v5 = sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v14 = **(_QWORD **)(v13 + 192);
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      v5 = sub_AC505C(v14);
    v15 = **(_QWORD **)(v14 + 184);
    if ( !v15 )
      goto LABEL_20;
    v16 = *(_QWORD *)(v15 + 432);
    if ( !v16 )
      goto LABEL_20;
    v5 = (__int64)this->fields.startButton;
    if ( *(int *)(v16 + 212) >= 1 )
    {
      if ( v5 )
      {
        startButtonTweenTargetCache = (System_Int32_array **)this->fields.startButtonTweenTargetCache;
        *(_QWORD *)(v5 + 24) = startButtonTweenTargetCache;
        sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 24), startButtonTweenTargetCache, v7, v8, v9, v10, v11, v12);
        v5 = (__int64)this->fields.startButton;
        if ( v5 )
        {
          UICommonButton__SetButtonEnable((UICommonButton_o *)v5, 1, 1, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B2C434(v5, v6);
    }
    if ( !v5 )
      goto LABEL_20;
    UICommonButton__SetButtonEnable((UICommonButton_o *)v5, 0, 1, 0LL);
    v5 = (__int64)this->fields.startButton;
    if ( !v5 )
      goto LABEL_20;
    *(_QWORD *)(v5 + 24) = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 24), 0LL, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyUserEquip(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 v11; // x8
  UserServantEntity_o *Entity; // x0
  int32_t genderImageId; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-28h] BYREF
  int32_t maxLv[2]; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4186618 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEquipMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186618 = 1;
  }
  *(_QWORD *)maxLv = 0LL;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v8 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    Instance = (DataManager_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    Instance = (DataManager_o *)sub_AC505C(v10);
  v11 = **(_QWORD **)(v10 + 184);
  if ( !v11 )
    goto LABEL_15;
  Instance = *(DataManager_o **)(v11 + 432);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)Instance, v7);
  if ( !v8 )
    goto LABEL_15;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v8,
             (int64_t)Instance,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !Entity )
    return;
  UserEquipEntity__getEquipInfo((UserEquipEntity_o *)Entity, &maxLv[1], maxLv, &equipName, &detail, &genderImageId, 0LL);
  Instance = (DataManager_o *)this->fields.userEquipIcon;
  if ( !Instance )
LABEL_15:
    sub_B2C434(Instance, v7);
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

  if ( (byte_418661F & 1) == 0 )
  {
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, callback);
    byte_418661F = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_B2C2F8(
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
      sub_B2C434(openType, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x20
  CommonUI_o *v11; // x20
  System_Action_o *v12; // x21

  if ( (byte_418661B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__, v6);
    byte_418661B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AC505C(v10);
  v11 = **(CommonUI_o ***)(v10 + 184);
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v11 )
LABEL_14:
    sub_B2C434(Instance, v8);
  CommonUI__OpenClassCompatibilityMenu(v11, v12, 0LL);
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

  if ( (byte_418661E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418661E = 1;
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.endCallbackNoticeHint, 0LL, v6, v7, v8, v9, v10, v11);
    WarBoardConfigurationUIContoroller__OpenHintDialog(this, v12);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x20
  CommonUI_o *v16; // x20
  System_String_o *v17; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  System_String_o *v20; // x24
  CommonConfirmDialog_ClickDelegate_o *v21; // x25

  if ( (byte_4186627 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__, v7);
    sub_B2C35C(&StringLiteral_15278/*"WARBOARD_RETURN_CONFIRM_NO"*/, v8);
    sub_B2C35C(&StringLiteral_15277/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, v9);
    sub_B2C35C(&StringLiteral_15280/*"WARBOARD_RETURN_CONFIRM_YES"*/, v10);
    sub_B2C35C(&StringLiteral_15279/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, v11);
    byte_4186627 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AC505C(v15);
  v16 = **(CommonUI_o ***)(v15 + 184);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15279/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15277/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15280/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15278/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v21 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v16 )
LABEL_17:
    sub_B2C434(Instance, v13);
  CommonUI__OpenConfirmDialog_17970664(v16, v17, v18, v19, v20, 0, v21, 0, 28, 180.0, 43.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4186628 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4186628 = 1;
  }
  if ( isDecide )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C70 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, isDecide);
      byte_4183C70 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_17:
      sub_B2C434(Instance, v8);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4186623 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, v3);
    byte_4186623 = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v4, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v17; // x1
  __int64 v18; // x1
  WarBoardManager_o *Instance; // x0
  WarBoardData_o *warBoardData_k__BackingField; // x1
  const MethodInfo *v21; // x2
  struct WarBoardStageEntity_o *stageEntity; // x9
  CommonUI_o *v23; // x19
  System_String_o *v24; // x20
  System_String_o *v25; // x21
  WarBoardConfigurationUIContoroller___c_c *v26; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v29; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  bool IsEnabledPutOnFreeSquare; // w21
  CommonUI_o *v38; // x20
  System_String_o *v39; // x21
  System_String_o *v40; // x22
  System_String_o *v41; // x23
  System_String_o *v42; // x24
  CommonConfirmDialog_ClickDelegate_o *v43; // x25
  int v44; // s1
  System_Nullable_float__o v45; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+78h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v48; // 0:x0.8

  if ( (byte_4186625 & 1) == 0 )
  {
    sub_B2C35C(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__, v9);
    sub_B2C35C(&WarBoardConfigurationUIContoroller___c_TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__, v11);
    sub_B2C35C(&StringLiteral_15267/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, v12);
    sub_B2C35C(&StringLiteral_15286/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, v13);
    sub_B2C35C(&StringLiteral_15283/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, v14);
    sub_B2C35C(&StringLiteral_15268/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, v15);
    sub_B2C35C(&StringLiteral_15285/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, v16);
    sub_B2C35C(&StringLiteral_15284/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, v17);
    sub_B2C35C(&StringLiteral_15287/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, v18);
    byte_4186625 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15268/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15267/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
      v26 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v26 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      static_fields = v26->static_fields;
      _9__41_0 = static_fields->__9__41_0;
      if ( !_9__41_0 )
      {
        if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        }
        v29 = (Il2CppObject *)static_fields->__9;
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_B2C42C(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v29,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        v30 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        v30->__9__41_0 = _9__41_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v30->__9__41_0,
          (System_Int32_array **)_9__41_0,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0LL;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
      v48 = (System_Nullable_float__o)&v45;
      v45 = 0LL;
      System_Nullable_float____ctor(v48, 15.0, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
      if ( v23 )
      {
        CommonUI__OpenNotificationDialog_17973524(
          v23,
          v24,
          v25,
          _9__41_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v45,
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
    sub_B2C434(Instance, warBoardData_k__BackingField);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)Instance,
                               warBoardData_k__BackingField,
                               v21);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  v38 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( IsEnabledPutOnFreeSquare )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_15286/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_15284/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_15287/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_15285/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v43 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v43,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v38 )
      goto LABEL_40;
    v44 = 1109393408;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_15286/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_15283/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_15287/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_15285/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v43 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v43,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v38 )
      goto LABEL_40;
    v44 = 1110179840;
  }
  CommonUI__OpenConfirmDialog_17970664(v38, v39, v40, v41, v42, 1, v43, 0, 28, 180.0, *(float *)&v44, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4186626 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4186626 = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_B2C434(Instance, v6);
  }
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  __int64 v6; // x19
  WebViewManager_o *Instance; // x0

  if ( (byte_4186619 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4186619 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  Instance = **(WebViewManager_o ***)(v6 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v4);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x19
  __int64 v6; // x19

  if ( (byte_418661C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    byte_418661C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  Instance = **(WebViewManager_o ***)(v6 + 184);
  if ( !Instance )
LABEL_10:
    sub_B2C434(Instance, v4);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_418662A & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_14527/*"TopBase/BackButton"*/, v3);
    byte_418662A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_14527/*"TopBase/BackButton"*/, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OpenHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardManager_o *Instance; // x0
  __int64 v8; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *title; // x20
  System_String_o *message; // x21
  int32_t leftIndent; // w22
  CommonUI_o *v13; // x23
  ScrollMessageDialog_ClickDelegate_o *v14; // x24

  if ( (byte_4186620 & 1) == 0 )
  {
    sub_B2C35C(&ScrollMessageDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4186620 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = (ScrollMessageDialog_ClickDelegate_o *)sub_B2C42C(ScrollMessageDialog_ClickDelegate_TypeInfo);
        ScrollMessageDialog_ClickDelegate___ctor(
          v14,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0LL);
        if ( v13 )
        {
          CommonUI__OpenScrollMessageDialog(v13, title, message, leftIndent, v14, 0, 1, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B2C434(Instance, v8);
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
    sub_B2C434(0LL, isActive);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *newRuleBg; // x20
  const MethodInfo *v6; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_4186622 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_19349/*"icon_noticebg_01"*/, v4);
    byte_4186622 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_19349/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, v6), !newRuleObject) )
  {
    sub_B2C434(Instance, v6);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0

  if ( (byte_4185728 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardConfigurationUIContoroller___c_TypeInfo, v1);
    byte_4185728 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  if ( (byte_4185729 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, x);
    byte_4185729 = 1;
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
    sub_B2C434(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__41_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418572A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, ok);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_418572A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v5);
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
  if ( (byte_418572B & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_B2C35C(
                                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                                           svt);
    byte_418572B = 1;
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
                (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_B2C434(this, svt);
  }
  return 0;
}