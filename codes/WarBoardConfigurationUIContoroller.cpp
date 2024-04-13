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
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E7723 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7723 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WarBoardManager_o *Instance; // x0
  __int64 v8; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v11; // x0

  if ( (byte_42E7726 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarBoardManager_TypeInfo, v4, v5, v6);
    byte_42E7726 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_11;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v11 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v11 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v11->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(Instance, v8);
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
    sub_B5D69C(0LL, v3);
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
    sub_B5D560(p_endCallbackNoticeHint, 0LL, v2, v3, v4, v5, v6, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BalanceConfig_c *v14; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classCompatibilitySprite; // x19

  if ( (byte_42E771C & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17357/*"buttontxt_formation_20"*/, v11, v12, v13);
    byte_42E771C = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v14->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17357/*"buttontxt_formation_20"*/, 0LL);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__InitCost(
        WarBoardConfigurationUIContoroller_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  intptr_t v20; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_35683776; // x0
  UnityEngine_Object_o *v23; // x20
  UIFont_o *Component_srcLineSprite; // x0
  const MethodInfo *v25; // x1
  UIFont_o *v26; // x20
  const MethodInfo *v27; // x2
  System_RuntimeTypeHandle_o v28; // 0:w0.4

  if ( (byte_42E7716 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIFont___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject_var, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Type_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6823/*"Fonts/FGO-NumberFont-02"*/, v17, v18, v19);
    byte_42E7716 = 1;
  }
  v20 = (int)UnityEngine_GameObject_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v28.fields.value = v20;
  TypeFromHandle = System_Type__GetTypeFromHandle(v28, 0LL);
  _35683776 = UnityEngine_Resources__Load_35683776((System_String_o *)StringLiteral_6823/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _35683776 )
  {
    if ( (UnityEngine_GameObject_c *)_35683776->klass == UnityEngine_GameObject_TypeInfo )
      v23 = _35683776;
    else
      v23 = 0LL;
  }
  else
  {
    v23 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UIFont_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_22;
    Component_srcLineSprite = (UIFont_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)v23,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v26 = Component_srcLineSprite,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, Component_srcLineSprite, 0LL),
          (Component_srcLineSprite = (UIFont_o *)this->fields.maxCostLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_srcLineSprite, v26, 0LL),
          (Component_srcLineSprite = (UIFont_o *)this->fields.spritLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_srcLineSprite, v26, 0LL),
          (Component_srcLineSprite = (UIFont_o *)this->fields.currentApLabel) == 0LL) )
    {
LABEL_22:
      sub_B5D69C(Component_srcLineSprite, v25);
    }
    UILabel__set_bitmapFont((UILabel_o *)Component_srcLineSprite, v26, 0LL);
  }
  WarBoardConfigurationUIContoroller__ModifyCost(this, v25);
  WarBoardConfigurationUIContoroller__ModifyAP(this, 0, v27);
}


void __fastcall WarBoardConfigurationUIContoroller__InitHintButton(
        WarBoardConfigurationUIContoroller_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  QuestPhaseEntity_o *hintButtonObj; // x0
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x21
  struct QuestHintEntity_o **p_questHintEntity; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  QuestPhaseEntity_o **p_questPhaseEntity; // x21
  System_String_o *message; // x0

  if ( (byte_42E771F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestHintMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14, v15, v16);
    byte_42E771F = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_33;
  v18 = *(_QWORD *)&hintButtonObj[5].fields.battleBgType;
  if ( !v18 )
    goto LABEL_33;
  v19 = *(_QWORD *)(v18 + 16);
  if ( !v19 )
    goto LABEL_33;
  if ( *(_DWORD *)(v19 + 60) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_33;
  v20 = *(_QWORD *)&hintButtonObj[5].fields.battleBgType;
  if ( !v20 )
    goto LABEL_33;
  v21 = *(_QWORD *)(v20 + 104);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !v21 )
    goto LABEL_33;
  if ( !hintButtonObj )
    goto LABEL_33;
  p_questHintEntity = &this->fields.questHintEntity;
  QuestHintMaster__TryGetEntity(
    (QuestHintMaster_o *)hintButtonObj,
    &this->fields.questHintEntity,
    *(_DWORD *)(v21 + 124),
    *(_DWORD *)(v21 + 128),
    0LL);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !hintButtonObj )
    goto LABEL_33;
  v23 = *(_DWORD *)(v21 + 124);
  v24 = *(_DWORD *)(v21 + 128);
  p_questPhaseEntity = &this->fields.questPhaseEntity;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)hintButtonObj, &this->fields.questPhaseEntity, v23, v24, 0LL);
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
    sub_B5D69C(hintButtonObj, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  UnityEngine_Object_o *startButton; // x20
  __int64 v39; // x1
  struct UICommonButton_o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x20
  WarBoardConfigurationUIContoroller___c_c *v42; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v45; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  WarBoardConfigurationUIContoroller___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x20
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v56; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_1; // x21
  Il2CppObject *v58; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  struct UnityEngine_GameObject_array *v67; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  const MethodInfo *v82; // x1

  if ( (byte_42E7714 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_GameObject___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UIWidget___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_UIWidget__GameObject___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_UIWidget__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_UIWidget__GameObject__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Func_UIWidget__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__, v29, v30, v31);
    sub_B5D5C4(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__, v32, v33, v34);
    sub_B5D5C4(&WarBoardConfigurationUIContoroller___c_TypeInfo, v35, v36, v37);
    byte_42E7714 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v40 = this->fields.startButton;
    if ( !v40 )
      goto LABEL_26;
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)v40, 1, (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
    v42 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v42 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    static_fields = v42->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UIWidget__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v45,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_UIWidget__bool___ctor__);
      v46 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v46->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v46->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v54 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v55 = v53;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v54 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    v56 = v54->static_fields;
    _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v56->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        v56 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v58 = (Il2CppObject *)v56->__9;
      _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__5_1,
        v58,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        (const MethodInfo_2C3041C *)Method_System_Func_UIWidget__GameObject___ctor__);
      v59 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v59->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v59->__9__5_1,
        (System_Int32_array **)_9__5_1,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v55,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v67 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v66,
                                                   (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v67;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.startButtonTweenTargetCache,
      (System_Int32_array **)v67,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    v40 = this->fields.startButton;
    if ( !v40 )
LABEL_26:
      sub_B5D69C(v40, v39);
    v81 = (System_Int32_array **)*p_startButtonTweenTargetCache;
    v40->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_B5D560((BattleServantConfConponent_o *)&v40->fields.tweenTargets, v81, v75, v76, v77, v78, v79, v80);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v82);
  }
}


bool __fastcall WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
        WarBoardConfigurationUIContoroller_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v53; // x24
  void *Instance; // x0
  const MethodInfo *UserServantId_k__BackingField; // x1
  DataManager_o *v56; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v57; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  System_Collections_Generic_List_int__o *v59; // x25
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  BattleServantConfConponent_o *p_pieceSvtIdList; // x24
  int max_length; // w8
  unsigned int v68; // w28
  WarBoardPieceData_o *v69; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v71; // x26
  __int64 v72; // x27
  struct WarBoardStageEntity_o *stageEntity; // x8
  int v74; // w8
  __int64 v75; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p__9__0; // x23
  WarBoardPieceData_o *v77; // x24
  __int64 v78; // x8
  __int64 v79; // x8
  int32_t *v80; // x8
  int32_t v81; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  System_Collections_Generic_List_int__o *v84; // x1
  UserServantMaster_o *v85; // x0
  System_Collections_Generic_List_int__o *v86; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v87; // x25
  System_Collections_Generic_List_T__o *v88; // x24
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v96; // x0
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v97; // [xsp+10h] [xbp-60h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_42E772B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_UserServantEntity___, (_DWORD)warBoardData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_RestrictionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__bool___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Func_UserServantEntity__bool__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(
      &Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
      v44,
      v45,
      v46);
    sub_B5D5C4(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&WarBoardIndividualityClassMaster_TypeInfo, v50, v51, v52);
    byte_42E772B = 1;
  }
  entity = 0LL;
  v53 = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_B5D694(WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0___ctor(v53, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v56 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_65;
  v57 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, UserServantId_k__BackingField);
  v59 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v59,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v53 )
    goto LABEL_65;
  v97 = v53;
  v53->fields.pieceSvtIdList = v59;
  p_pieceSvtIdList = (BattleServantConfConponent_o *)&v53->fields.pieceSvtIdList;
  sub_B5D560(p_pieceSvtIdList, (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
  if ( !EditableServantPieces )
    goto LABEL_65;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v68 = 0;
    while ( 1 )
    {
      if ( v68 >= max_length )
      {
LABEL_66:
        v96 = sub_B5D6C8(Instance);
        sub_B5D668(v96, 0LL);
      }
      v69 = EditableServantPieces->m_Items[v68];
      if ( !v69 )
        break;
      UserServantId_k__BackingField = (const MethodInfo *)v69->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v57 )
          break;
        Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     v57,
                     (int64_t)UserServantId_k__BackingField,
                     (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_pieceSvtIdList->klass;
        v72 = *((_QWORD *)Instance + 10);
        v71 = *((_QWORD *)Instance + 11);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v99.fields.currentCryptoKey = v72;
        *(_QWORD *)&v99.fields.fakeValue = v71;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v99, 0LL);
        if ( !klass )
          break;
        System_Collections_Generic_List_int___Add(
          klass,
          (int32_t)Instance,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v68 >= max_length )
        goto LABEL_20;
    }
LABEL_65:
    sub_B5D69C(Instance, UserServantId_k__BackingField);
  }
LABEL_20:
  stageEntity = warBoardData->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  v97->fields.freeCost = (_DWORD)stageEntity - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v74 = EditableServantPieces->max_length;
  if ( v74 < 1 )
    return 0;
  v75 = 0LL;
  p__9__0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v97->fields.__9__0;
  while ( 1 )
  {
    if ( (unsigned int)v75 >= v74 )
      goto LABEL_66;
    v77 = EditableServantPieces->m_Items[v75];
    if ( !v77 )
      goto LABEL_65;
    if ( v77->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v75], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     v56,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_65;
        Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             &entity,
                             v77->fields._restrictionId_k__BackingField,
                             (const MethodInfo_23FAE6C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v56,
                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_65;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity->fields.longName,
                       0LL);
          if ( Instance && (v78 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v78 )
              goto LABEL_66;
            v79 = *((_QWORD *)Instance + 4);
            if ( !v79 )
              goto LABEL_65;
            v80 = (int32_t *)(v79 + 16);
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
            v80 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v81 = *v80;
          if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v81 == static_fields->ALL_CLASS_ID )
          {
            if ( !v57 )
              goto LABEL_65;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v57, 0LL);
          }
          else
          {
            if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v81 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           v56,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_65;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0LL);
              if ( !v57 )
                goto LABEL_65;
              v84 = (System_Collections_Generic_List_int__o *)Instance;
              v85 = (UserServantMaster_o *)v57;
            }
            else
            {
              v86 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v86,
                (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
              if ( !v86 )
                goto LABEL_65;
              System_Collections_Generic_List_int___Add(
                v86,
                v81,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v57 )
                goto LABEL_65;
              v85 = (UserServantMaster_o *)v57;
              v84 = v86;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v85, v84, 0LL);
          }
          v87 = *p__9__0;
          v88 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*p__9__0 )
          {
            v87 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v87,
              (Il2CppObject *)v97,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v97->fields.__9__0 = (struct System_Func_UserServantEntity__bool__o *)v87;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v97->fields.__9__0,
              (System_Int32_array **)v87,
              v89,
              v90,
              v91,
              v92,
              v93,
              v94);
          }
          Instance = (void *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                               v88,
                               (System_Func_T__bool__o *)v87,
                               (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v74 = EditableServantPieces->max_length;
    if ( (int)++v75 >= v74 )
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WarBoardConfigurationUIContoroller_o *currentApLabel; // x19
  int32_t *v10; // x0
  __int64 v11; // x20
  __int64 v12; // x20
  __int64 v13; // x8
  WarBoardData_o *v14; // x20
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  const MethodInfo *v16; // x3
  WarBoardActionPointEntity_o *v17; // x0
  int baseActionPoint; // w8
  System_String_o *v19; // x1
  int v20; // [xsp+8h] [xbp-18h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  v21 = ap;
  if ( (byte_42E7718 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, ap, (_DWORD)method, v3);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B5D5C4(&StringLiteral_973/*"0"*/, v6, v7, v8);
    byte_42E7718 = 1;
  }
  v20 = 0;
  if ( ap )
  {
    currentApLabel = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
    v10 = &v21;
    goto LABEL_19;
  }
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AF52C4(v12);
  v13 = **(_QWORD **)(v12 + 184);
  if ( !v13 )
    goto LABEL_22;
  v14 = *(WarBoardData_o **)(v13 + 432);
  if ( !v14 )
    goto LABEL_22;
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v13 + 432), 0, 0, v3);
  if ( !ActionPointEntity || WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL) )
  {
    currentApLabel = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
    v17 = WarBoardData__GetActionPointEntity(v14, 0, 0, v16);
    if ( v17 )
      baseActionPoint = v17->fields.baseActionPoint;
    else
      baseActionPoint = 0;
    v20 = baseActionPoint;
    v10 = &v20;
LABEL_19:
    this = (WarBoardConfigurationUIContoroller_o *)System_Int32__ToString((int32_t)v10, 0LL);
    if ( currentApLabel )
    {
      v19 = (System_String_o *)this;
      this = currentApLabel;
      goto LABEL_21;
    }
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&ap);
  }
  this = (WarBoardConfigurationUIContoroller_o *)v5->fields.currentApLabel;
  if ( !this )
    goto LABEL_22;
  v19 = (System_String_o *)StringLiteral_973/*"0"*/;
LABEL_21:
  UILabel__set_text((UILabel_o *)this, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAPFromSquareIndex(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardConfigurationUIContoroller_o *v5; // x19
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
  __int64 v21; // x20
  __int64 v22; // x20
  __int64 v23; // x8
  WarBoardActionPointEntity_o *ActionPointEntity; // x20
  const MethodInfo *v25; // x2
  WarBoardPieceData_o *Piece_23181536; // x0
  WarBoardPieceData_o *v27; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v29; // x21
  const MethodInfo *v30; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v34; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42E7719 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v15, v16, v17);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B5D5C4(
                                                     &Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
                                                     v18,
                                                     v19,
                                                     v20);
    byte_42E7719 = 1;
  }
  entity = 0LL;
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AF52C4(v22);
  v23 = **(_QWORD **)(v22 + 184);
  if ( !v23 )
    goto LABEL_38;
  this = *(WarBoardConfigurationUIContoroller_o **)(v23 + 432);
  if ( !this )
    goto LABEL_38;
  ActionPointEntity = WarBoardData__GetActionPointEntity((WarBoardData_o *)this, 0, 0, v3);
  this = (WarBoardConfigurationUIContoroller_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_38;
  this = (WarBoardConfigurationUIContoroller_o *)this[2].fields.endCallbackNoticeHint;
  if ( !this )
    goto LABEL_38;
  Piece_23181536 = WarBoardData__GetPiece_23181536((WarBoardData_o *)this, squareIndex, v25);
  if ( ActionPointEntity )
  {
    v27 = Piece_23181536;
    HasCost = WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL);
    if ( v27 )
    {
      if ( !HasCost )
      {
        if ( v27->fields._UserServantId_k__BackingField < 1 )
        {
          if ( !WarBoardPieceData__get_IsNpc(v27, 0LL) || !v27->fields._battleServant_k__BackingField )
          {
            v34 = v5;
            baseActionPoint = 0;
LABEL_36:
            WarBoardConfigurationUIContoroller__ModifyAP(v34, baseActionPoint, v30);
            return;
          }
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          battleServant_k__BackingField = v27->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            v29 = (WarBoardActionPointClassMaster_o *)this;
            this = (WarBoardConfigurationUIContoroller_o *)BattleServantData__getClassId(
                                                             battleServant_k__BackingField,
                                                             0LL);
            if ( v29 )
            {
LABEL_33:
              EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                              v29,
                                              ActionPointEntity,
                                              (int32_t)this,
                                              0LL);
              if ( !EntityFromActionPointEntity )
                return;
              baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
              v34 = v5;
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
          this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( this )
          {
            if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                    &entity,
                    v27->fields._UserServantId_k__BackingField,
                    (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            this = (WarBoardConfigurationUIContoroller_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_38;
            v29 = (WarBoardActionPointClassMaster_o *)this;
            this = (WarBoardConfigurationUIContoroller_o *)UserServantEntity__getSvtClassId(entity, 0LL);
            if ( !v29 )
              goto LABEL_38;
            goto LABEL_33;
          }
        }
LABEL_38:
        sub_B5D69C(this, *(_QWORD *)&squareIndex);
      }
    }
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardConfigurationUIContoroller_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x20
  __int64 v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x9
  signed int v22; // w22
  signed int v23; // w23
  System_String_o *v24; // x0
  UILabel_o *maxCostLabel; // x21
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  UILabel_o *spritLabel; // x21
  System_String_o *v29; // x0
  UILabel_o *currentCostLabel; // x21
  System_String_o *v31; // x0
  const MethodInfo *v32; // x1
  unsigned __int64 v33; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42E7717 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15430/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15428/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, v11, v12, v13);
    this = (WarBoardConfigurationUIContoroller_o *)sub_B5D5C4(&StringLiteral_15429/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v14, v15, v16);
    byte_42E7717 = 1;
  }
  v33 = 0LL;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                              + 3));
  v18 = **(_QWORD **)(v17 + 192);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    this = (WarBoardConfigurationUIContoroller_o *)sub_AF52C4(v18);
  v19 = **(_QWORD **)(v18 + 184);
  if ( !v19 )
    goto LABEL_24;
  v20 = *(_QWORD *)(v19 + 432);
  if ( !v20 )
    goto LABEL_24;
  v21 = *(_QWORD *)(v20 + 16);
  v22 = *(_DWORD *)(v20 + 208);
  if ( v21 )
    v23 = *(_DWORD *)(v21 + 40);
  else
    v23 = 0;
  v33 = __PAIR64__(v22, v23);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15428/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = v4->fields.maxCostLabel;
  v26 = v24;
  v27 = System_Int32__ToString((int32_t)&v33, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_44577788(v26, v27, 0LL);
  if ( !maxCostLabel )
    goto LABEL_24;
  UILabel__set_text(maxCostLabel, (System_String_o *)this, 0LL);
  spritLabel = v4->fields.spritLabel;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_15430/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_44577788(v26, v29, 0LL);
  if ( !spritLabel )
    goto LABEL_24;
  UILabel__set_text(spritLabel, (System_String_o *)this, 0LL);
  currentCostLabel = v4->fields.currentCostLabel;
  if ( v22 > v23 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15429/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v31 = System_Int32__ToString((int32_t)&v33 + 4, 0LL);
  this = (WarBoardConfigurationUIContoroller_o *)System_String__Concat_44577788(v26, v31, 0LL);
  if ( !currentCostLabel )
LABEL_24:
    sub_B5D69C(this, method);
  UILabel__set_text(currentCostLabel, (System_String_o *)this, 0LL);
  WarBoardConfigurationUIContoroller__ModifyStartButton(v4, v32);
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *startButton; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x20
  __int64 v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  System_Int32_array **startButtonTweenTargetCache; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E7715 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v5, v6, v7);
    byte_42E7715 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(startButton, 0LL, 0LL);
  if ( (v9 & 1) == 0 )
  {
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      v9 = sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v18 = **(_QWORD **)(v17 + 192);
    if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
      v9 = sub_AF52C4(v18);
    v19 = **(_QWORD **)(v18 + 184);
    if ( !v19 )
      goto LABEL_20;
    v20 = *(_QWORD *)(v19 + 432);
    if ( !v20 )
      goto LABEL_20;
    v9 = (__int64)this->fields.startButton;
    if ( *(int *)(v20 + 212) >= 1 )
    {
      if ( v9 )
      {
        startButtonTweenTargetCache = (System_Int32_array **)this->fields.startButtonTweenTargetCache;
        *(_QWORD *)(v9 + 24) = startButtonTweenTargetCache;
        sub_B5D560((BattleServantConfConponent_o *)(v9 + 24), startButtonTweenTargetCache, v11, v12, v13, v14, v15, v16);
        v9 = (__int64)this->fields.startButton;
        if ( v9 )
        {
          UICommonButton__SetButtonEnable((UICommonButton_o *)v9, 1, 1, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B5D69C(v9, v10);
    }
    if ( !v9 )
      goto LABEL_20;
    UICommonButton__SetButtonEnable((UICommonButton_o *)v9, 0, 1, 0LL);
    v9 = (__int64)this->fields.startButton;
    if ( !v9 )
      goto LABEL_20;
    *(_QWORD *)(v9 + 24) = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)(v9 + 24), 0LL, v22, v23, v24, v25, v26, v27);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyUserEquip(
        WarBoardConfigurationUIContoroller_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v15; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x21
  __int64 v19; // x8
  UserServantEntity_o *Entity; // x0
  int32_t genderImageId; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-28h] BYREF
  int32_t maxLv[2]; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42E771A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E771A = 1;
  }
  *(_QWORD *)maxLv = 0LL;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v16 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    Instance = (DataManager_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v18 = **(_QWORD **)(v17 + 192);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    Instance = (DataManager_o *)sub_AF52C4(v18);
  v19 = **(_QWORD **)(v18 + 184);
  if ( !v19 )
    goto LABEL_15;
  Instance = *(DataManager_o **)(v19 + 432);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)Instance, v15);
  if ( !v16 )
    goto LABEL_15;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v16,
             (int64_t)Instance,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !Entity )
    return;
  UserEquipEntity__getEquipInfo((UserEquipEntity_o *)Entity, &maxLv[1], maxLv, &equipName, &detail, &genderImageId, 0LL);
  Instance = (DataManager_o *)this->fields.userEquipIcon;
  if ( !Instance )
LABEL_15:
    sub_B5D69C(Instance, v15);
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

  if ( (byte_42E7721 & 1) == 0 )
  {
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E7721 = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_B5D560(
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
      sub_B5D69C(openType, v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  WebViewManager_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x20
  CommonUI_o *v21; // x20
  System_Action_o *v22; // x21

  if ( (byte_42E771D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__, v14, v15, v16);
    byte_42E771D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AF52C4(v20);
  v21 = **(CommonUI_o ***)(v20 + 184);
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v21 )
LABEL_14:
    sub_B5D69C(Instance, v18);
  CommonUI__OpenClassCompatibilityMenu(v21, v22, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_42E7720 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7720 = 1;
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.endCallbackNoticeHint, 0LL, v8, v9, v10, v11, v12, v13);
    WarBoardConfigurationUIContoroller__OpenHintDialog(this, v14);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnButton(
        WarBoardConfigurationUIContoroller_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  WebViewManager_o *Instance; // x0
  __int64 v33; // x1
  __int64 v34; // x20
  __int64 v35; // x20
  CommonUI_o *v36; // x20
  System_String_o *v37; // x21
  System_String_o *v38; // x22
  System_String_o *v39; // x23
  System_String_o *v40; // x24
  CommonConfirmDialog_ClickDelegate_o *v41; // x25

  if ( (byte_42E7729 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15437/*"WARBOARD_RETURN_CONFIRM_NO"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_15436/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_15439/*"WARBOARD_RETURN_CONFIRM_YES"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_15438/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, v29, v30, v31);
    byte_42E7729 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v35 = **(_QWORD **)(v34 + 192);
  if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
    sub_AF52C4(v35);
  v36 = **(CommonUI_o ***)(v35 + 184);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_15438/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_15436/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_15439/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_15437/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v41 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v41,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v36 )
LABEL_17:
    sub_B5D69C(Instance, v33);
  CommonUI__OpenConfirmDialog_18201424(v36, v37, v38, v39, v40, 0, v41, 0, 28, 180.0, 43.0, 0, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  TerminalPramsManager_c *v11; // x0
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E772A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    byte_42E772A = 1;
  }
  if ( isDecide )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B29 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isDecide, (_DWORD)method, v3);
      byte_42E4B29 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_17:
      sub_B5D69C(Instance, v13);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E7725 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, v5, v6, v7);
    byte_42E7725 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v8, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickStartButton(
        WarBoardConfigurationUIContoroller_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  WarBoardManager_o *Instance; // x0
  WarBoardData_o *warBoardData_k__BackingField; // x1
  const MethodInfo *v55; // x2
  struct WarBoardStageEntity_o *stageEntity; // x9
  CommonUI_o *v57; // x19
  System_String_o *v58; // x20
  System_String_o *v59; // x21
  WarBoardConfigurationUIContoroller___c_c *v60; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v63; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  bool IsEnabledPutOnFreeSquare; // w21
  CommonUI_o *v72; // x20
  System_String_o *v73; // x21
  System_String_o *v74; // x22
  System_String_o *v75; // x23
  System_String_o *v76; // x24
  CommonConfirmDialog_ClickDelegate_o *v77; // x25
  int v78; // s1
  System_Nullable_float__o v79; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+78h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v82; // 0:x0.8

  if ( (byte_42E7727 & 1) == 0 )
  {
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__, v23, v24, v25);
    sub_B5D5C4(&WarBoardConfigurationUIContoroller___c_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_15426/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_15445/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_15442/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_15427/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_15444/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_15443/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_15446/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, v50, v51, v52);
    byte_42E7727 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      v57 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v58 = LocalizationManager__Get((System_String_o *)StringLiteral_15427/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_15426/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
      v60 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v60 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      static_fields = v60->static_fields;
      _9__41_0 = static_fields->__9__41_0;
      if ( !_9__41_0 )
      {
        if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v60);
          static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        }
        v63 = (Il2CppObject *)static_fields->__9;
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v63,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        v64 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        v64->__9__41_0 = _9__41_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v64->__9__41_0,
          (System_Int32_array **)_9__41_0,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0LL;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
      v82 = (System_Nullable_float__o)&v79;
      v79 = 0LL;
      System_Nullable_float____ctor(v82, 15.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
      if ( v57 )
      {
        CommonUI__OpenNotificationDialog_18204284(
          v57,
          v58,
          v59,
          _9__41_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v79,
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
    sub_B5D69C(Instance, warBoardData_k__BackingField);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)Instance,
                               warBoardData_k__BackingField,
                               v55);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  v72 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( IsEnabledPutOnFreeSquare )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_15445/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_15443/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_15446/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v76 = LocalizationManager__Get((System_String_o *)StringLiteral_15444/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v77 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v77,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v72 )
      goto LABEL_40;
    v78 = 1109393408;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_15445/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_15442/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_15446/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v76 = LocalizationManager__Get((System_String_o *)StringLiteral_15444/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v77 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v77,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v72 )
      goto LABEL_40;
    v78 = 1110179840;
  }
  CommonUI__OpenConfirmDialog_18201424(v72, v73, v74, v75, v76, 1, v77, 0, 28, 180.0, *(float *)&v78, 0, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E7728 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E7728 = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(Instance, v9);
  }
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x19
  WebViewManager_o *Instance; // x0

  if ( (byte_42E771B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&SoundManager_TypeInfo, v7, v8, v9);
    byte_42E771B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(v12);
  Instance = **(WebViewManager_o ***)(v12 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v10);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x19

  if ( (byte_42E771E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5, v6);
    byte_42E771E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AF52C4(v10);
  Instance = **(WebViewManager_o ***)(v10 + 184);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(Instance, v8);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42E772C & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_14684/*"TopBase/BackButton"*/, v5, v6, v7);
    byte_42E772C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_14684/*"TopBase/BackButton"*/, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OpenHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  WarBoardManager_o *Instance; // x0
  __int64 v18; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *title; // x20
  System_String_o *message; // x21
  int32_t leftIndent; // w22
  CommonUI_o *v23; // x23
  ScrollMessageDialog_ClickDelegate_o *v24; // x24

  if ( (byte_42E7722 & 1) == 0 )
  {
    sub_B5D5C4(&ScrollMessageDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E7722 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v24 = (ScrollMessageDialog_ClickDelegate_o *)sub_B5D694(ScrollMessageDialog_ClickDelegate_TypeInfo);
        ScrollMessageDialog_ClickDelegate___ctor(
          v24,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0LL);
        if ( v23 )
        {
          CommonUI__OpenScrollMessageDialog(v23, title, message, leftIndent, v24, 0, 1, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B5D69C(Instance, v18);
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
    sub_B5D69C(0LL, isActive);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
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
  UISprite_o *newRuleBg; // x20
  const MethodInfo *v12; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_42E7724 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19593/*"icon_noticebg_01"*/, v8, v9, v10);
    byte_42E7724 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_19593/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, v12), !newRuleObject) )
  {
    sub_B5D69C(Instance, v12);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E707B & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardConfigurationUIContoroller___c_TypeInfo, v1, v2, v3);
    byte_42E707B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3

  if ( (byte_42E707C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E707C = 1;
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
    sub_B5D69C(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__41_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E707D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, ok, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E707D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v8);
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
  __int64 v3; // x3
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v5; // x20
  System_Collections_Generic_List_int__o *pieceSvtIdList; // x20

  v5 = this;
  if ( (byte_42E707E & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_B5D5C4(
                                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                                           (_DWORD)svt,
                                                                           (_DWORD)method,
                                                                           v3);
    byte_42E707E = 1;
  }
  if ( !svt )
    goto LABEL_10;
  if ( !UserServantEntity__IsLeave(svt, 0LL) && UserServantEntity__getCost(svt, 0LL) <= v5->fields.freeCost )
  {
    pieceSvtIdList = v5->fields.pieceSvtIdList;
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)UserServantEntity__getSvtId(svt, 0LL);
    if ( pieceSvtIdList )
      return !System_Collections_Generic_List_int___Contains(
                pieceSvtIdList,
                (int32_t)this,
                (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_B5D69C(this, svt);
  }
  return 0;
}