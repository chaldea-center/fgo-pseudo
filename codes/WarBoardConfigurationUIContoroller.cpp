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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_42133D3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42133D3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WarBoardManager_o *Instance; // x0
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v6; // x0

  if ( (byte_42133D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B0D8A4(&WarBoardManager_TypeInfo, v2);
    byte_42133D6 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(Instance);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__Deactive(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
    sub_B0D840(p_endCallbackNoticeHint, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42133CC & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    sub_B0D8A4(&CondType_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_17198/*"buttontxt_formation_20"*/, v5);
    byte_42133CC = 1;
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
  if ( CondType__IsQuestClear_25410236(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17198/*"buttontxt_formation_20"*/, 0LL);
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
  UnityEngine_Object_o *_34998816; // x0
  UnityEngine_Object_o *v11; // x20
  UIFont_o *Component_srcLineSprite; // x0
  const MethodInfo *v13; // x1
  UIFont_o *v14; // x20
  const MethodInfo *v15; // x2
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_42133C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_B0D8A4(&UnityEngine_GameObject_var, v3);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&System_Type_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_6760/*"Fonts/FGO-NumberFont-02"*/, v7);
    byte_42133C6 = 1;
  }
  v8 = (int)UnityEngine_GameObject_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  _34998816 = UnityEngine_Resources__Load_34998816((System_String_o *)StringLiteral_6760/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _34998816 )
  {
    if ( (UnityEngine_GameObject_c *)_34998816->klass == UnityEngine_GameObject_TypeInfo )
      v11 = _34998816;
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
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
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
      sub_B0D97C(Component_srcLineSprite);
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

  if ( (byte_42133CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    byte_42133CF = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_33;
  v10 = *(_QWORD *)&hintButtonObj[5].fields.battleBgType;
  if ( !v10 )
    goto LABEL_33;
  v11 = *(_QWORD *)(v10 + 104);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_B0D97C(hintButtonObj);
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
  struct UICommonButton_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x20
  WarBoardConfigurationUIContoroller___c_c *v19; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v22; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  WarBoardConfigurationUIContoroller___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v35; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_1; // x21
  Il2CppObject *v37; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  struct UnityEngine_GameObject_array *v46; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  const MethodInfo *v61; // x1

  if ( (byte_42133C4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_GameObject___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_UIWidget___, v5);
    sub_B0D8A4(&Method_System_Func_UIWidget__GameObject___ctor__, v6);
    sub_B0D8A4(&Method_System_Func_UIWidget__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_UIWidget__GameObject__TypeInfo, v8);
    sub_B0D8A4(&System_Func_UIWidget__bool__TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__, v11);
    sub_B0D8A4(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__, v12);
    sub_B0D8A4(&WarBoardConfigurationUIContoroller___c_TypeInfo, v13);
    byte_42133C4 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v15 = this->fields.startButton;
    if ( !v15 )
      goto LABEL_26;
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)v15, 1, (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
    v19 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v19 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_UIWidget__bool__TypeInfo,
                                                                                     v16,
                                                                                     v17);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v22,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_UIWidget__bool___ctor__);
      v23 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v23->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v23->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v33 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v34 = v30;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v33 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    v35 = v33->static_fields;
    _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v35->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v35 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)v35->__9;
      _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                  System_Func_UIWidget__GameObject__TypeInfo,
                                                                                                  v31,
                                                                                                  v32);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__5_1,
        v37,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        (const MethodInfo_261A104 *)Method_System_Func_UIWidget__GameObject___ctor__);
      v38 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v38->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v38->__9__5_1,
        (System_Int32_array **)_9__5_1,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v34,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v46 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v45,
                                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v46;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.startButtonTweenTargetCache,
      (System_Int32_array **)v46,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v15 = this->fields.startButton;
    if ( !v15 )
LABEL_26:
      sub_B0D97C(v15);
    v60 = (System_Int32_array **)*p_startButtonTweenTargetCache;
    v15->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_B0D840((BattleServantConfConponent_o *)&v15->fields.tweenTargets, v60, v54, v55, v56, v57, v58, v59);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v61);
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
  DataManager_o *v22; // x19
  const MethodInfo *v23; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v24; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_int__o *v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleServantConfConponent_o *p_pieceSvtIdList; // x24
  int max_length; // w8
  unsigned int v37; // w28
  WarBoardPieceData_o *v38; // x8
  int64_t UserServantId_k__BackingField; // x1
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v41; // x26
  __int64 v42; // x27
  struct WarBoardStageEntity_o *stageEntity; // x8
  int v44; // w8
  __int64 v45; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p__9__0; // x23
  WarBoardPieceData_o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x8
  __int64 v51; // x8
  int32_t *v52; // x8
  int32_t v53; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_List_int__o *v58; // x1
  UserServantMaster_o *v59; // x0
  System_Collections_Generic_List_int__o *v60; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v61; // x25
  System_Collections_Generic_List_T__o *v62; // x24
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v70; // x0
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v71; // [xsp+10h] [xbp-60h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_42133DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_UserServantEntity___, warBoardData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_RestrictionMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&Method_System_Func_UserServantEntity__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_UserServantEntity__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__, v17);
    sub_B0D8A4(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo, v18);
    sub_B0D8A4(&WarBoardIndividualityClassMaster_TypeInfo, v19);
    byte_42133DB = 1;
  }
  entity = 0LL;
  v20 = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_B0D974(
                                                                        WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo,
                                                                        warBoardData,
                                                                        method);
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0___ctor(v20, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v22 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_65;
  v24 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, v23);
  v28 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v26, v27);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v20 )
    goto LABEL_65;
  v71 = v20;
  v20->fields.pieceSvtIdList = v28;
  p_pieceSvtIdList = (BattleServantConfConponent_o *)&v20->fields.pieceSvtIdList;
  sub_B0D840(p_pieceSvtIdList, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  if ( !EditableServantPieces )
    goto LABEL_65;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= max_length )
      {
LABEL_66:
        v70 = sub_B0D9A8(Instance);
        sub_B0D948(v70, 0LL);
      }
      v38 = EditableServantPieces->m_Items[v37];
      if ( !v38 )
        break;
      UserServantId_k__BackingField = v38->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v24 )
          break;
        Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     v24,
                     UserServantId_k__BackingField,
                     (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_pieceSvtIdList->klass;
        v42 = *((_QWORD *)Instance + 10);
        v41 = *((_QWORD *)Instance + 11);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v73.fields.currentCryptoKey = v42;
        *(_QWORD *)&v73.fields.fakeValue = v41;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v73, 0LL);
        if ( !klass )
          break;
        System_Collections_Generic_List_int___Add(
          klass,
          (int32_t)Instance,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_20;
    }
LABEL_65:
    sub_B0D97C(Instance);
  }
LABEL_20:
  stageEntity = warBoardData->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  v71->fields.freeCost = (_DWORD)stageEntity - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v44 = EditableServantPieces->max_length;
  if ( v44 < 1 )
    return 0;
  v45 = 0LL;
  p__9__0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v71->fields.__9__0;
  while ( 1 )
  {
    if ( (unsigned int)v45 >= v44 )
      goto LABEL_66;
    v47 = EditableServantPieces->m_Items[v45];
    if ( !v47 )
      goto LABEL_65;
    if ( v47->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v45], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     v22,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_65;
        Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             &entity,
                             v47->fields._restrictionId_k__BackingField,
                             (const MethodInfo_2669C30 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v22,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_65;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity->fields.longName,
                       0LL);
          if ( Instance && (v50 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v50 )
              goto LABEL_66;
            v51 = *((_QWORD *)Instance + 4);
            if ( !v51 )
              goto LABEL_65;
            v52 = (int32_t *)(v51 + 16);
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
            v52 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v53 = *v52;
          if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v53 == static_fields->ALL_CLASS_ID )
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
            if ( v53 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           v22,
                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_65;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0LL);
              if ( !v24 )
                goto LABEL_65;
              v58 = (System_Collections_Generic_List_int__o *)Instance;
              v59 = (UserServantMaster_o *)v24;
            }
            else
            {
              v60 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v48,
                                                                v49);
              System_Collections_Generic_List_int____ctor(
                v60,
                (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v60 )
                goto LABEL_65;
              System_Collections_Generic_List_int___Add(
                v60,
                v53,
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v24 )
                goto LABEL_65;
              v59 = (UserServantMaster_o *)v24;
              v58 = v60;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v59, v58, 0LL);
          }
          v61 = *p__9__0;
          v62 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*p__9__0 )
          {
            v61 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_UserServantEntity__bool__TypeInfo,
                                                                                       v56,
                                                                                       v57);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v61,
              (Il2CppObject *)v71,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              (const MethodInfo_26189B8 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v71->fields.__9__0 = (struct System_Func_UserServantEntity__bool__o *)v61;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v71->fields.__9__0,
              (System_Int32_array **)v61,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68);
          }
          Instance = (void *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                               v62,
                               (System_Func_T__bool__o *)v61,
                               (const MethodInfo_1707138 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v44 = EditableServantPieces->max_length;
    if ( (int)++v45 >= v44 )
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
  if ( (byte_42133C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, *(_QWORD *)&ap);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B0D8A4(&StringLiteral_960/*"0"*/, v6);
    byte_42133C8 = 1;
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
    this = (WarBoardConfigurationUIContoroller_o *)sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AA65A4(v10);
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
    sub_B0D97C(this);
  }
  this = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
  if ( !this )
    goto LABEL_22;
  v17 = (System_String_o *)StringLiteral_960/*"0"*/;
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
  WarBoardPieceData_o *Piece_22073600; // x0
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
  if ( (byte_42133C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v9);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B0D8A4(
                                                     &Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
                                                     v10);
    byte_42133C9 = 1;
  }
  entity = 0LL;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AA65A4(v12);
  v13 = **(_QWORD **)(v12 + 184);
  if ( !v13 )
    goto LABEL_38;
  this = *(WarBoardConfigurationUIContoroller_o **)(v13 + 432);
  if ( !this )
    goto LABEL_38;
  ActionPointEntity = WarBoardData__GetActionPointEntity((WarBoardData_o *)this, 0, 0, v3);
  this = (WarBoardConfigurationUIContoroller_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_38;
  this = (WarBoardConfigurationUIContoroller_o *)this[2].fields.endCallbackNoticeHint;
  if ( !this )
    goto LABEL_38;
  Piece_22073600 = WarBoardData__GetPiece_22073600((WarBoardData_o *)this, squareIndex, v15);
  if ( ActionPointEntity )
  {
    v17 = Piece_22073600;
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
          this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
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
          this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( this )
          {
            if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                    &entity,
                    v17->fields._UserServantId_k__BackingField,
                    (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
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
        sub_B0D97C(this);
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
  if ( (byte_42133C7 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    sub_B0D8A4(&StringLiteral_15318/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v4);
    sub_B0D8A4(&StringLiteral_15316/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, v5);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B0D8A4(&StringLiteral_15317/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v6);
    byte_42133C7 = 1;
  }
  v23 = 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AA65A4(v8);
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
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15316/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = v2->fields.maxCostLabel;
  v16 = v14;
  v17 = System_Int32__ToString((int32_t)&v23, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_43849904(v16, v17, 0LL);
  if ( !maxCostLabel )
    goto LABEL_24;
  UILabel__set_text(maxCostLabel, (System_String_o *)this, 0LL);
  spritLabel = v2->fields.spritLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15318/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_43849904(v16, v19, 0LL);
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
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15317/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v21 = System_Int32__ToString((int32_t)&v23 + 4, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_43849904(v16, v21, 0LL);
  if ( !currentCostLabel )
LABEL_24:
    sub_B0D97C(this);
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

  if ( (byte_42133C5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    byte_42133C5 = 1;
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
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      v5 = sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v13 = **(_QWORD **)(v12 + 192);
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      v5 = sub_AA65A4(v13);
    v14 = **(_QWORD **)(v13 + 184);
    if ( !v14 )
      goto LABEL_20;
    v15 = *(_QWORD *)(v14 + 432);
    if ( !v15 )
      goto LABEL_20;
    v5 = (__int64)this->fields.startButton;
    if ( *(int *)(v15 + 212) >= 1 )
    {
      if ( v5 )
      {
        startButtonTweenTargetCache = (System_Int32_array **)this->fields.startButtonTweenTargetCache;
        *(_QWORD *)(v5 + 24) = startButtonTweenTargetCache;
        sub_B0D840((BattleServantConfConponent_o *)(v5 + 24), startButtonTweenTargetCache, v6, v7, v8, v9, v10, v11);
        v5 = (__int64)this->fields.startButton;
        if ( v5 )
        {
          UICommonButton__SetButtonEnable((UICommonButton_o *)v5, 1, 1, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B0D97C(v5);
    }
    if ( !v5 )
      goto LABEL_20;
    UICommonButton__SetButtonEnable((UICommonButton_o *)v5, 0, 1, 0LL);
    v5 = (__int64)this->fields.startButton;
    if ( !v5 )
      goto LABEL_20;
    *(_QWORD *)(v5 + 24) = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)(v5 + 24), 0LL, v17, v18, v19, v20, v21, v22);
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

  if ( (byte_42133CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEquipMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42133CA = 1;
  }
  *(_QWORD *)maxLv = 0LL;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v8 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    Instance = (DataManager_o *)sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    Instance = (DataManager_o *)sub_AA65A4(v10);
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
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !Entity )
    return;
  UserEquipEntity__getEquipInfo((UserEquipEntity_o *)Entity, &maxLv[1], maxLv, &equipName, &detail, &genderImageId, 0LL);
  Instance = (DataManager_o *)this->fields.userEquipIcon;
  if ( !Instance )
LABEL_15:
    sub_B0D97C(Instance);
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

  if ( (byte_42133D1 & 1) == 0 )
  {
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, callback);
    byte_42133D1 = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_B0D840(
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
      sub_B0D97C(openType);
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
  __int64 v9; // x2
  __int64 v10; // x20
  __int64 v11; // x20
  CommonUI_o *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_42133CD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__, v6);
    byte_42133CD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AA65A4(v11);
  v12 = **(CommonUI_o ***)(v11 + 184);
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v12 )
LABEL_14:
    sub_B0D97C(Instance);
  CommonUI__OpenClassCompatibilityMenu(v12, v13, 0LL);
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

  if ( (byte_42133D0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42133D0 = 1;
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.endCallbackNoticeHint, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v13; // x20
  __int64 v14; // x20
  CommonUI_o *v15; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  System_String_o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  CommonConfirmDialog_ClickDelegate_o *v22; // x25

  if ( (byte_42133D9 & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__, v7);
    sub_B0D8A4(&StringLiteral_15325/*"WARBOARD_RETURN_CONFIRM_NO"*/, v8);
    sub_B0D8A4(&StringLiteral_15324/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, v9);
    sub_B0D8A4(&StringLiteral_15327/*"WARBOARD_RETURN_CONFIRM_YES"*/, v10);
    sub_B0D8A4(&StringLiteral_15326/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, v11);
    byte_42133D9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AA65A4(v14);
  v15 = **(CommonUI_o ***)(v14 + 184);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15326/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15324/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15327/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15325/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v22 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v20, v21);
  CommonConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v15 )
LABEL_17:
    sub_B0D97C(Instance);
  CommonUI__OpenConfirmDialog_17016236(v15, v16, v17, v18, v19, 0, v22, 0, 28, 180.0, 43.0, 0, 0, 0LL);
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

  if ( (byte_42133DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_42133DA = 1;
  }
  if ( isDecide )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210848 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, isDecide);
      byte_4210848 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_17:
      sub_B0D97C(Instance);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_42133D5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, v4);
    byte_42133D5 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v5, 0LL);
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
  const MethodInfo *v20; // x2
  WarBoardData_o *warBoardData_k__BackingField; // x1
  struct WarBoardStageEntity_o *stageEntity; // x9
  CommonUI_o *v23; // x19
  System_String_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_String_o *v27; // x21
  WarBoardConfigurationUIContoroller___c_c *v28; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v31; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  bool IsEnabledPutOnFreeSquare; // w21
  CommonUI_o *v40; // x20
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  System_String_o *v43; // x23
  System_String_o *v44; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  CommonConfirmDialog_ClickDelegate_o *v47; // x25
  int v48; // s1
  __int64 v49; // x1
  __int64 v50; // x2
  System_Nullable_float__o v51; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+78h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v54; // 0:x0.8

  if ( (byte_42133D7 & 1) == 0 )
  {
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    sub_B0D8A4(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__, v9);
    sub_B0D8A4(&WarBoardConfigurationUIContoroller___c_TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__, v11);
    sub_B0D8A4(&StringLiteral_15314/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, v12);
    sub_B0D8A4(&StringLiteral_15333/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, v13);
    sub_B0D8A4(&StringLiteral_15330/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, v14);
    sub_B0D8A4(&StringLiteral_15315/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, v15);
    sub_B0D8A4(&StringLiteral_15332/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, v16);
    sub_B0D8A4(&StringLiteral_15331/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, v17);
    sub_B0D8A4(&StringLiteral_15334/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, v18);
    byte_42133D7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15315/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15314/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
      v28 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v28 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      static_fields = v28->static_fields;
      _9__41_0 = static_fields->__9__41_0;
      if ( !_9__41_0 )
      {
        if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)static_fields->__9;
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v25, v26);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v31,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        v32 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        v32->__9__41_0 = _9__41_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v32->__9__41_0,
          (System_Int32_array **)_9__41_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0LL;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
      v54 = (System_Nullable_float__o)&v51;
      v51 = 0LL;
      System_Nullable_float____ctor(v54, 15.0, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
      if ( v23 )
      {
        CommonUI__OpenNotificationDialog_17019096(
          v23,
          v24,
          v27,
          _9__41_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v51,
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
    sub_B0D97C(Instance);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)Instance,
                               warBoardData_k__BackingField,
                               v20);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  v40 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( IsEnabledPutOnFreeSquare )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_15333/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_15331/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_15334/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_15332/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v47 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v45, v46);
    CommonConfirmDialog_ClickDelegate___ctor(
      v47,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v40 )
      goto LABEL_40;
    v48 = 1109393408;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_15333/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_15330/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_15334/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_15332/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v47 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v49, v50);
    CommonConfirmDialog_ClickDelegate___ctor(
      v47,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v40 )
      goto LABEL_40;
    v48 = 1110179840;
  }
  CommonUI__OpenConfirmDialog_17016236(v40, v41, v42, v43, v44, 1, v47, 0, 28, 180.0, *(float *)&v48, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42133D8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_42133D8 = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(Instance);
  }
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x19
  WebViewManager_o *Instance; // x0

  if ( (byte_42133CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42133CB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AA65A4(v5);
  Instance = **(WebViewManager_o ***)(v5 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x19
  __int64 v5; // x19

  if ( (byte_42133CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    byte_42133CE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AA65A4(v5);
  Instance = **(WebViewManager_o ***)(v5 + 184);
  if ( !Instance )
LABEL_10:
    sub_B0D97C(Instance);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42133DC & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_14572/*"TopBase/BackButton"*/, v3);
    byte_42133DC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_20833784(transform, (System_String_o *)StringLiteral_14572/*"TopBase/BackButton"*/, 0LL);
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
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *title; // x20
  System_String_o *message; // x21
  int32_t leftIndent; // w22
  CommonUI_o *v12; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  ScrollMessageDialog_ClickDelegate_o *v15; // x24

  if ( (byte_42133D2 & 1) == 0 )
  {
    sub_B0D8A4(&ScrollMessageDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_42133D2 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = (ScrollMessageDialog_ClickDelegate_o *)sub_B0D974(ScrollMessageDialog_ClickDelegate_TypeInfo, v13, v14);
        ScrollMessageDialog_ClickDelegate___ctor(
          v15,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0LL);
        if ( v12 )
        {
          CommonUI__OpenScrollMessageDialog(v12, title, message, leftIndent, v15, 0, 1, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B0D97C(Instance);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *newRuleBg; // x20
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19
  const MethodInfo *v8; // x1

  if ( (byte_42133D4 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_19410/*"icon_noticebg_01"*/, v4);
    byte_42133D4 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_19410/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, v8), !newRuleObject) )
  {
    sub_B0D97C(Instance);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0

  if ( (byte_421269F & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardConfigurationUIContoroller___c_TypeInfo, v1);
    byte_421269F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardConfigurationUIContoroller___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  if ( (byte_42126A0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_42126A0 = 1;
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
    sub_B0D97C(this);
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

  if ( (byte_42126A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, ok);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_42126A1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
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
  if ( (byte_42126A2 & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_B0D8A4(
                                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                                           svt);
    byte_42126A2 = 1;
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
                (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_B0D97C(this);
  }
  return 0;
}