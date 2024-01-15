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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_40F8970 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8970 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  _DWORD *monitor; // x8
  int32_t v5; // w19
  WarBoardManager_c *v6; // x0
  WebViewManager_o *v7; // x0
  WebViewManager_o *v8; // x0

  if ( (byte_40F8973 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&WarBoardManager_TypeInfo, v2);
    byte_40F8973 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  monitor = Instance[4].monitor;
  if ( !monitor )
    goto LABEL_11;
  v5 = monitor[38];
  v6 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v6 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, v5, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v7
    || (WarBoardManager__UpdateRuleButton((WarBoardManager_o *)v7, 0LL),
        (v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)v8, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__Deactive(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
    sub_B16F98(p_endCallbackNoticeHint, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_40F8969 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v3);
    sub_B16FFC(&CondType_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_17080/*"buttontxt_formation_20"*/, v5);
    byte_40F8969 = 1;
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
  if ( CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17080/*"buttontxt_formation_20"*/, 0LL);
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
  UnityEngine_Object_o *_34873004; // x0
  UnityEngine_GameObject_o *v11; // x20
  const MethodInfo *v12; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  UIFont_o *v14; // x20
  UILabel_o *maxCostLabel; // x0
  UILabel_o *spritLabel; // x0
  UILabel_o *currentApLabel; // x0
  const MethodInfo *v18; // x2
  System_RuntimeTypeHandle_o v19; // 0:w0.4

  if ( (byte_40F8963 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_B16FFC(&UnityEngine_GameObject_var, v3);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&System_Type_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_6717/*"Fonts/FGO-NumberFont-02"*/, v7);
    byte_40F8963 = 1;
  }
  v8 = (int)UnityEngine_GameObject_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v19, 0LL);
  _34873004 = UnityEngine_Resources__Load_34873004((System_String_o *)StringLiteral_6717/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _34873004 )
  {
    if ( (UnityEngine_GameObject_c *)_34873004->klass == UnityEngine_GameObject_TypeInfo )
      v11 = (UnityEngine_GameObject_o *)_34873004;
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
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
  {
    if ( !v11 )
      goto LABEL_22;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v11,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v14 = (UIFont_o *)Component_srcLineSprite,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, (UIFont_o *)Component_srcLineSprite, 0LL),
          (maxCostLabel = this->fields.maxCostLabel) == 0LL)
      || (UILabel__set_bitmapFont(maxCostLabel, v14, 0LL), (spritLabel = this->fields.spritLabel) == 0LL)
      || (UILabel__set_bitmapFont(spritLabel, v14, 0LL), (currentApLabel = this->fields.currentApLabel) == 0LL) )
    {
LABEL_22:
      sub_B170D4();
    }
    UILabel__set_bitmapFont(currentApLabel, v14, 0LL);
  }
  WarBoardConfigurationUIContoroller__ModifyCost(this, v12);
  WarBoardConfigurationUIContoroller__ModifyAP(this, 0, v18);
}


void __fastcall WarBoardConfigurationUIContoroller__InitHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *hintButtonObj; // x0
  WebViewManager_o *Instance; // x0
  _QWORD *monitor; // x8
  __int64 v10; // x8
  WebViewManager_o *v11; // x0
  _QWORD *v12; // x8
  __int64 v13; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct QuestHintEntity_o **p_questHintEntity; // x20
  QuestPhaseMaster_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  QuestPhaseEntity_o **p_questPhaseEntity; // x21
  System_String_o *message; // x0
  UnityEngine_GameObject_o *v21; // x0

  if ( (byte_40F896C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&QuestHintDialogOpenManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    byte_40F896C = 1;
  }
  hintButtonObj = this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(hintButtonObj, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  monitor = Instance[4].monitor;
  if ( !monitor )
    goto LABEL_33;
  v10 = monitor[2];
  if ( !v10 )
    goto LABEL_33;
  if ( *(_DWORD *)(v10 + 60) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0LL);
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v11 )
    goto LABEL_33;
  v12 = v11[4].monitor;
  if ( !v12 )
    goto LABEL_33;
  v13 = v12[13];
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !v13 )
    goto LABEL_33;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  p_questHintEntity = &this->fields.questHintEntity;
  QuestHintMaster__TryGetEntity(
    (QuestHintMaster_o *)Master_WarQuestSelectionMaster,
    &this->fields.questHintEntity,
    *(_DWORD *)(v13 + 124),
    *(_DWORD *)(v13 + 128),
    0LL);
  v16 = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !v16 )
    goto LABEL_33;
  v17 = *(_DWORD *)(v13 + 124);
  v18 = *(_DWORD *)(v13 + 128);
  p_questPhaseEntity = &this->fields.questPhaseEntity;
  QuestPhaseMaster__TryGetEntity(v16, &this->fields.questPhaseEntity, v17, v18, 0LL);
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
    v21 = this->fields.hintButtonObj;
    if ( v21 )
    {
      UnityEngine_GameObject__SetActive(v21, 0, 0LL);
      return;
    }
LABEL_33:
    sub_B170D4();
  }
  if ( *p_questHintEntity )
  {
    if ( !(*p_questHintEntity)->fields.openType )
      return;
    goto LABEL_26;
  }
  if ( !*p_questPhaseEntity )
    goto LABEL_33;
  if ( QuestPhaseEntity__getHintOpenType(*p_questPhaseEntity, 0LL) )
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
  UnityEngine_Component_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x20
  WarBoardConfigurationUIContoroller___c_c *v21; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x21
  Il2CppObject *v24; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  WarBoardConfigurationUIContoroller___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v39; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_1; // x21
  Il2CppObject *v41; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  struct UnityEngine_GameObject_array *v50; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct UICommonButton_o *v64; // x0
  System_Int32_array **v65; // x1
  const MethodInfo *v66; // x1

  if ( (byte_40F8961 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_GameObject___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UIWidget___, v5);
    sub_B16FFC(&Method_System_Func_UIWidget__GameObject___ctor__, v6);
    sub_B16FFC(&Method_System_Func_UIWidget__bool___ctor__, v7);
    sub_B16FFC(&System_Func_UIWidget__GameObject__TypeInfo, v8);
    sub_B16FFC(&System_Func_UIWidget__bool__TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__, v11);
    sub_B16FFC(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__, v12);
    sub_B16FFC(&WarBoardConfigurationUIContoroller___c_TypeInfo, v13);
    byte_40F8961 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)this->fields.startButton;
    if ( !v15 )
      goto LABEL_26;
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(v15, 1, (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
    v21 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v21 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_UIWidget__bool__TypeInfo,
                                                                                     v16,
                                                                                     v17,
                                                                                     v18,
                                                                                     v19);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__5_0,
        v24,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_UIWidget__bool___ctor__);
      v25 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v25->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v25->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v37 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v38 = v32;
    if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v37 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    v39 = v37->static_fields;
    _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v39->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v39 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)v39->__9;
      _9__5_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                  System_Func_UIWidget__GameObject__TypeInfo,
                                                                                                  v33,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__5_1,
        v41,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        (const MethodInfo_2B6C28C *)Method_System_Func_UIWidget__GameObject___ctor__);
      v42 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v42->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v42->__9__5_1,
        (System_Int32_array **)_9__5_1,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v38,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v50 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v49,
                                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v50;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.startButtonTweenTargetCache,
      (System_Int32_array **)v50,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v64 = this->fields.startButton;
    if ( !v64 )
LABEL_26:
      sub_B170D4();
    v65 = (System_Int32_array **)*p_startButtonTweenTargetCache;
    v64->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_B16F98((BattleServantConfConponent_o *)&v64->fields.tweenTargets, v65, v58, v59, v60, v61, v62, v63);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v66);
  }
}


bool __fastcall WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
        WarBoardConfigurationUIContoroller_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v20; // x1
  __int64 v21; // x1
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v22; // x24
  WebViewManager_o *Instance; // x0
  DataManager_o *v24; // x19
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v26; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v27; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_int__o *v33; // x25
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  BattleServantConfConponent_o *p_pieceSvtIdList; // x24
  ServantClassEntity_array *IsNpc; // x0
  int64_t UserServantId_k__BackingField; // x1
  __int64 v43; // x2
  int max_length; // w8
  unsigned int v45; // w28
  WarBoardPieceData_o *v46; // x8
  UserServantEntity_o *v47; // x0
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v49; // x26
  __int64 v50; // x27
  int32_t v51; // w0
  struct WarBoardStageEntity_o *stageEntity; // x8
  int v53; // w8
  __int64 v54; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **p__9__0; // x23
  WarBoardPieceData_o *v56; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x0
  WarBoardIndividualityClassMaster_o *v58; // x0
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x8
  ServantClassEntity_o *v62; // x8
  int32_t *p_id; // x8
  WarBoardIndividualityClassMaster_c *v64; // x0
  int32_t v65; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  ServantClassMaster_o *v72; // x0
  System_Collections_Generic_List_int__o *ExtraClassIdList; // x0
  System_Collections_Generic_List_int__o *v74; // x1
  UserServantMaster_o *v75; // x0
  System_Collections_Generic_List_int__o *v76; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v77; // x25
  System_Collections_Generic_List_T__o *v78; // x24
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v86; // [xsp+10h] [xbp-60h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_40F8978 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_UserServantEntity___, warBoardData);
    sub_B16FFC(&Method_DataManager_GetMasterData_RestrictionMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&Method_System_Func_UserServantEntity__bool___ctor__, v12);
    sub_B16FFC(&System_Func_UserServantEntity__bool__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__, v19);
    sub_B16FFC(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo, v20);
    sub_B16FFC(&WarBoardIndividualityClassMaster_TypeInfo, v21);
    byte_40F8978 = 1;
  }
  entity = 0LL;
  v22 = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_B170CC(
                                                                        WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo,
                                                                        warBoardData,
                                                                        method,
                                                                        v3,
                                                                        v4);
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0___ctor(v22, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v24 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_65;
  v27 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, v26);
  v33 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v22 )
    goto LABEL_65;
  v86 = v22;
  v22->fields.pieceSvtIdList = v33;
  p_pieceSvtIdList = (BattleServantConfConponent_o *)&v22->fields.pieceSvtIdList;
  sub_B16F98(p_pieceSvtIdList, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  if ( !EditableServantPieces )
    goto LABEL_65;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= max_length )
      {
LABEL_66:
        sub_B17100(IsNpc, UserServantId_k__BackingField, v43);
        sub_B170A0();
      }
      v46 = EditableServantPieces->m_Items[v45];
      if ( !v46 )
        break;
      UserServantId_k__BackingField = v46->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v27 )
          break;
        v47 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                v27,
                UserServantId_k__BackingField,
                (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !v47 )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_pieceSvtIdList->klass;
        v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
        v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v88.fields.currentCryptoKey = v50;
        *(_QWORD *)&v88.fields.fakeValue = v49;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v88, 0LL);
        if ( !klass )
          break;
        System_Collections_Generic_List_int___Add(
          klass,
          v51,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_20;
    }
LABEL_65:
    sub_B170D4();
  }
LABEL_20:
  stageEntity = warBoardData->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  v86->fields.freeCost = (_DWORD)stageEntity - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v53 = EditableServantPieces->max_length;
  if ( v53 < 1 )
    return 0;
  v54 = 0LL;
  p__9__0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)&v86->fields.__9__0;
  while ( 1 )
  {
    if ( (unsigned int)v54 >= v53 )
      goto LABEL_66;
    v56 = EditableServantPieces->m_Items[v54];
    if ( !v56 )
      goto LABEL_65;
    if ( v56->fields._UserServantId_k__BackingField <= 0 )
    {
      IsNpc = (ServantClassEntity_array *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v54], 0LL);
      if ( ((unsigned __int8)IsNpc & 1) == 0 )
      {
        v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               v24,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !v57 )
          goto LABEL_65;
        IsNpc = (ServantClassEntity_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                              v57,
                                              &entity,
                                              v56->fields._restrictionId_k__BackingField,
                                              (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNpc & 1) != 0 )
        {
          v58 = (WarBoardIndividualityClassMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        v24,
                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !v58 )
            goto LABEL_65;
          IsNpc = WarBoardIndividualityClassMaster__GetServantClassEntities(
                    v58,
                    (System_Int32_array *)entity->fields.longName,
                    0LL);
          if ( IsNpc && (v61 = *(_QWORD *)&IsNpc->max_length) != 0 )
          {
            if ( !(_DWORD)v61 )
              goto LABEL_66;
            v62 = IsNpc->m_Items[0];
            if ( !v62 )
              goto LABEL_65;
            p_id = &v62->fields.id;
            v64 = WarBoardIndividualityClassMaster_TypeInfo;
          }
          else
          {
            v64 = WarBoardIndividualityClassMaster_TypeInfo;
            if ( (BYTE3(WarBoardIndividualityClassMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
              v64 = WarBoardIndividualityClassMaster_TypeInfo;
            }
            p_id = (int32_t *)v64->static_fields;
          }
          v65 = *p_id;
          if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v64);
            v64 = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = v64->static_fields;
          if ( v65 == static_fields->ALL_CLASS_ID )
          {
            if ( !v27 )
              goto LABEL_65;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v27, 0LL);
          }
          else
          {
            if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v64);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v65 == static_fields->EXTRA_CLASS_ID )
            {
              v72 = (ServantClassMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v24,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !v72 )
                goto LABEL_65;
              ExtraClassIdList = ServantClassMaster__getExtraClassIdList(v72, 0LL);
              if ( !v27 )
                goto LABEL_65;
              v74 = ExtraClassIdList;
              v75 = (UserServantMaster_o *)v27;
            }
            else
            {
              v76 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                UserServantId_k__BackingField,
                                                                v43,
                                                                v59,
                                                                v60);
              System_Collections_Generic_List_int____ctor(
                v76,
                (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v76 )
                goto LABEL_65;
              System_Collections_Generic_List_int___Add(
                v76,
                v65,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v27 )
                goto LABEL_65;
              v75 = (UserServantMaster_o *)v27;
              v74 = v76;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v75, v74, 0LL);
          }
          v77 = *p__9__0;
          v78 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*p__9__0 )
          {
            v77 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                       System_Func_UserServantEntity__bool__TypeInfo,
                                                                                       v68,
                                                                                       v69,
                                                                                       v70,
                                                                                       v71);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v77,
              (Il2CppObject *)v86,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v86->fields.__9__0 = (struct System_Func_UserServantEntity__bool__o *)v77;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v86->fields.__9__0,
              (System_Int32_array **)v77,
              v79,
              v80,
              v81,
              v82,
              v83,
              v84);
          }
          IsNpc = (ServantClassEntity_array *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                v78,
                                                (System_Func_T__bool__o *)v77,
                                                (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)IsNpc & 1) != 0 )
            return 1;
        }
      }
    }
    v53 = EditableServantPieces->max_length;
    if ( (int)++v54 >= v53 )
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
  __int64 v6; // x1
  struct UILabel_o *currentApLabel; // x19
  int32_t *v8; // x0
  __int64 v9; // x20
  __int64 v10; // x20
  __int64 v11; // x8
  WarBoardData_o *v12; // x20
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  const MethodInfo *v14; // x3
  WarBoardActionPointEntity_o *v15; // x0
  int baseActionPoint; // w8
  UILabel_o *v17; // x0
  System_String_o *v18; // x1
  System_String_o *v19; // x0
  int v20; // [xsp+8h] [xbp-18h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-14h] BYREF

  v21 = ap;
  if ( (byte_40F8965 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, *(_QWORD *)&ap);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v6);
    byte_40F8965 = 1;
  }
  v20 = 0;
  if ( ap )
  {
    currentApLabel = this->fields.currentApLabel;
    v8 = &v21;
    goto LABEL_19;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(v10);
  v11 = **(_QWORD **)(v10 + 184);
  if ( !v11 )
    goto LABEL_22;
  v12 = *(WarBoardData_o **)(v11 + 424);
  if ( !v12 )
    goto LABEL_22;
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v11 + 424), 0, 0, v3);
  if ( !ActionPointEntity || WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL) )
  {
    currentApLabel = this->fields.currentApLabel;
    v15 = WarBoardData__GetActionPointEntity(v12, 0, 0, v14);
    if ( v15 )
      baseActionPoint = v15->fields.baseActionPoint;
    else
      baseActionPoint = 0;
    v20 = baseActionPoint;
    v8 = &v20;
LABEL_19:
    v19 = System_Int32__ToString((int32_t)v8, 0LL);
    if ( currentApLabel )
    {
      v18 = v19;
      v17 = currentApLabel;
      goto LABEL_21;
    }
LABEL_22:
    sub_B170D4();
  }
  v17 = this->fields.currentApLabel;
  if ( !v17 )
    goto LABEL_22;
  v18 = (System_String_o *)StringLiteral_951/*"0"*/;
LABEL_21:
  UILabel__set_text(v17, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAPFromSquareIndex(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x20
  __int64 v13; // x8
  WarBoardData_o *v14; // x0
  WarBoardActionPointEntity_o *ActionPointEntity; // x20
  WebViewManager_o *Instance; // x0
  const MethodInfo *v17; // x2
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  WarBoardPieceData_o *v20; // x21
  bool HasCost; // w0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v22; // x0
  WarQuestSelectionMaster_o *v23; // x0
  WarBoardActionPointClassMaster_o *v24; // x21
  int32_t ClassId; // w0
  const MethodInfo *v26; // x2
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v31; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8966 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_40F8966 = 1;
  }
  entity = 0LL;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AAFCFC(v12);
  v13 = **(_QWORD **)(v12 + 184);
  if ( !v13 )
    goto LABEL_38;
  v14 = *(WarBoardData_o **)(v13 + 424);
  if ( !v14 )
    goto LABEL_38;
  ActionPointEntity = WarBoardData__GetActionPointEntity(v14, 0, 0, v3);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_38;
  Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, squareIndex, v17);
  if ( ActionPointEntity )
  {
    v20 = Piece_22604968;
    HasCost = WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL);
    if ( v20 )
    {
      if ( !HasCost )
      {
        if ( v20->fields._UserServantId_k__BackingField < 1 )
        {
          if ( !WarBoardPieceData__get_IsNpc(v20, 0LL) || !v20->fields._battleServant_k__BackingField )
          {
            v31 = this;
            baseActionPoint = 0;
LABEL_36:
            WarBoardConfigurationUIContoroller__ModifyAP(v31, baseActionPoint, v26);
            return;
          }
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          battleServant_k__BackingField = v20->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            v24 = (WarBoardActionPointClassMaster_o *)Master_WarQuestSelectionMaster;
            ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
            if ( v24 )
            {
LABEL_33:
              EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                              v24,
                                              ActionPointEntity,
                                              ClassId,
                                              0LL);
              if ( !EntityFromActionPointEntity )
                return;
              baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
              v31 = this;
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
          v22 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( v22 )
          {
            if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                    v22,
                    &entity,
                    v20->fields._UserServantId_k__BackingField,
                    (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            v23 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_38;
            v24 = (WarBoardActionPointClassMaster_o *)v23;
            ClassId = UserServantEntity__getSvtClassId(entity, 0LL);
            if ( !v24 )
              goto LABEL_38;
            goto LABEL_33;
          }
        }
LABEL_38:
        sub_B170D4();
      }
    }
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
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
  System_String_o *v18; // x0
  UILabel_o *spritLabel; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  UILabel_o *currentCostLabel; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x1
  unsigned __int64 v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8964 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    sub_B16FFC(&StringLiteral_15211/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v4);
    sub_B16FFC(&StringLiteral_15209/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, v5);
    sub_B16FFC(&StringLiteral_15210/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v6);
    byte_40F8964 = 1;
  }
  v26 = 0LL;
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(_QWORD **)(v8 + 184);
  if ( !v9 )
    goto LABEL_24;
  v10 = *(_QWORD *)(v9 + 424);
  if ( !v10 )
    goto LABEL_24;
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(_DWORD *)(v10 + 208);
  if ( v11 )
    v13 = *(_DWORD *)(v11 + 40);
  else
    v13 = 0;
  v26 = __PAIR64__(v12, v13);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15209/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = this->fields.maxCostLabel;
  v16 = v14;
  v17 = System_Int32__ToString((int32_t)&v26, 0LL);
  v18 = System_String__Concat_43743732(v16, v17, 0LL);
  if ( !maxCostLabel )
    goto LABEL_24;
  UILabel__set_text(maxCostLabel, v18, 0LL);
  spritLabel = this->fields.spritLabel;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15211/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  v21 = System_String__Concat_43743732(v16, v20, 0LL);
  if ( !spritLabel )
    goto LABEL_24;
  UILabel__set_text(spritLabel, v21, 0LL);
  currentCostLabel = this->fields.currentCostLabel;
  if ( v12 > v13 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15210/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v23 = System_Int32__ToString((int32_t)&v26 + 4, 0LL);
  v24 = System_String__Concat_43743732(v16, v23, 0LL);
  if ( !currentCostLabel )
LABEL_24:
    sub_B170D4();
  UILabel__set_text(currentCostLabel, v24, 0LL);
  WarBoardConfigurationUIContoroller__ModifyStartButton(this, v25);
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *startButton; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x20
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  struct UICommonButton_o *v15; // x0
  System_Int32_array **startButtonTweenTargetCache; // x1
  UICommonButton_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UICommonButton_o *v24; // x0

  if ( (byte_40F8962 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    byte_40F8962 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
    v12 = **(_QWORD **)(v11 + 192);
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AAFCFC(v12);
    v13 = **(_QWORD **)(v12 + 184);
    if ( !v13 )
      goto LABEL_20;
    v14 = *(_QWORD *)(v13 + 424);
    if ( !v14 )
      goto LABEL_20;
    v15 = this->fields.startButton;
    if ( *(int *)(v14 + 212) >= 1 )
    {
      if ( v15 )
      {
        startButtonTweenTargetCache = (System_Int32_array **)this->fields.startButtonTweenTargetCache;
        v15->fields.tweenTargets = (struct UnityEngine_GameObject_array *)startButtonTweenTargetCache;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v15->fields.tweenTargets,
          startButtonTweenTargetCache,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10);
        v17 = this->fields.startButton;
        if ( v17 )
        {
          UICommonButton__SetButtonEnable(v17, 1, 1, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B170D4();
    }
    if ( !v15 )
      goto LABEL_20;
    UICommonButton__SetButtonEnable(v15, 0, 1, 0LL);
    v24 = this->fields.startButton;
    if ( !v24 )
      goto LABEL_20;
    v24->fields.tweenTargets = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v24->fields.tweenTargets, 0LL, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyUserEquip(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 v11; // x8
  WarBoardData_o *v12; // x0
  int64_t PlayerMasterUserEquipId; // x0
  UserServantEntity_o *Entity; // x0
  ItemIconComponent_o *userEquipIcon; // x0
  int32_t genderImageId; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-28h] BYREF
  int32_t maxLv[2]; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40F8967 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8967 = 1;
  }
  *(_QWORD *)maxLv = 0LL;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(v10);
  v11 = **(_QWORD **)(v10 + 184);
  if ( !v11 )
    goto LABEL_15;
  v12 = *(WarBoardData_o **)(v11 + 424);
  if ( !v12 )
    goto LABEL_15;
  PlayerMasterUserEquipId = WarBoardData__get_PlayerMasterUserEquipId(v12, v7);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             PlayerMasterUserEquipId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !Entity )
    return;
  UserEquipEntity__getEquipInfo((UserEquipEntity_o *)Entity, &maxLv[1], maxLv, &equipName, &detail, &genderImageId, 0LL);
  userEquipIcon = this->fields.userEquipIcon;
  if ( !userEquipIcon )
LABEL_15:
    sub_B170D4();
  ItemIconComponent__SetEquipItem(userEquipIcon, genderImageId, 0LL);
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
  int32_t openType; // w0
  QuestPhaseEntity_o *v16; // x0
  _DWORD *v17; // x8
  int32_t v18; // w20

  if ( (byte_40F896E & 1) == 0 )
  {
    sub_B16FFC(&QuestHintDialogOpenManager_TypeInfo, callback);
    byte_40F896E = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_B16F98(
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
    openType = v14->fields.openType;
  }
  else
  {
    v16 = this->fields.questPhaseEntity;
    if ( !v16 )
      goto LABEL_25;
    openType = QuestPhaseEntity__getHintOpenType(v16, 0LL);
  }
  if ( openType != 1 )
    goto LABEL_24;
  v17 = this->fields.questHintEntity;
  if ( !v17 )
  {
    v17 = this->fields.questPhaseEntity;
    if ( !v17 )
LABEL_25:
      sub_B170D4();
  }
  v18 = v17[4];
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  if ( QuestHintDialogOpenManager__IsQuestHintOpen(v18, 0LL) )
    goto LABEL_8;
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  QuestHintDialogOpenManager__SetQuestId(v18, 0LL);
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
  WebViewManager_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x20
  __int64 v14; // x20
  CommonUI_o *v15; // x20
  System_Action_o *v16; // x21

  if ( (byte_40F896A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__, v6);
    byte_40F896A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v8 )
    goto LABEL_14;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)v8, 0LL, 0LL);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(v14);
  v15 = **(CommonUI_o ***)(v14 + 184);
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v15 )
LABEL_14:
    sub_B170D4();
  CommonUI__OpenClassCompatibilityMenu(v15, v16, 0LL);
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

  if ( (byte_40F896D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F896D = 1;
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.endCallbackNoticeHint, 0LL, v6, v7, v8, v9, v10, v11);
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
  WebViewManager_o *v13; // x0
  __int64 v14; // x20
  __int64 v15; // x20
  CommonUI_o *v16; // x20
  System_String_o *v17; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  System_String_o *v20; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  CommonConfirmDialog_ClickDelegate_o *v25; // x25

  if ( (byte_40F8976 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__, v7);
    sub_B16FFC(&StringLiteral_15218/*"WARBOARD_RETURN_CONFIRM_NO"*/, v8);
    sub_B16FFC(&StringLiteral_15217/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, v9);
    sub_B16FFC(&StringLiteral_15220/*"WARBOARD_RETURN_CONFIRM_YES"*/, v10);
    sub_B16FFC(&StringLiteral_15219/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, v11);
    byte_40F8976 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v13 )
    goto LABEL_17;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)v13, 0LL, 0LL);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AAFCFC(v15);
  v16 = **(CommonUI_o ***)(v15 + 184);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15219/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15217/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15220/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15218/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v25 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v21,
                                                 v22,
                                                 v23,
                                                 v24);
  CommonConfirmDialog_ClickDelegate___ctor(
    v25,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v16 )
LABEL_17:
    sub_B170D4();
  CommonUI__OpenConfirmDialog_18236900(v16, v17, v18, v19, v20, 0, v25, 0, 28, 180.0, 43.0, 0, 0, 0LL);
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
  WebViewManager_o *v8; // x0
  CommonUI_o *v9; // x0

  if ( (byte_40F8977 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F8977 = 1;
  }
  if ( isDecide )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F604D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isDecide);
      byte_40F604D = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_17:
      sub_B170D4();
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v8 )
    goto LABEL_17;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)v8, 1, 0, 0LL);
  v9 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v9 )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog(v9, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40F8972 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, v6);
    byte_40F8972 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v7, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarBoardConfigurationUIContoroller_o *v20; // x0
  const MethodInfo *v21; // x2
  WarBoardData_o *questHintEntity; // x1
  struct WarBoardStageEntity_o *stageEntity; // x9
  WebViewManager_o *v24; // x0
  CommonUI_o *v25; // x19
  System_String_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_String_o *v31; // x21
  WarBoardConfigurationUIContoroller___c_c *v32; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v35; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  bool IsEnabledPutOnFreeSquare; // w21
  WebViewManager_o *v44; // x0
  CommonUI_o *v45; // x20
  System_String_o *v46; // x21
  System_String_o *v47; // x22
  System_String_o *v48; // x23
  System_String_o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  CommonConfirmDialog_ClickDelegate_o *v54; // x25
  int v55; // s1
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Nullable_float__o v60; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+78h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v63; // 0:x0.8

  if ( (byte_40F8974 & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__, v9);
    sub_B16FFC(&WarBoardConfigurationUIContoroller___c_TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__, v11);
    sub_B16FFC(&StringLiteral_15207/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, v12);
    sub_B16FFC(&StringLiteral_15226/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, v13);
    sub_B16FFC(&StringLiteral_15223/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, v14);
    sub_B16FFC(&StringLiteral_15208/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, v15);
    sub_B16FFC(&StringLiteral_15225/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, v16);
    sub_B16FFC(&StringLiteral_15224/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, v17);
    sub_B16FFC(&StringLiteral_15227/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, v18);
    byte_40F8974 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v20 = (WarBoardConfigurationUIContoroller_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v20 )
    goto LABEL_40;
  questHintEntity = (WarBoardData_o *)v20[2].fields.questHintEntity;
  if ( !questHintEntity )
    goto LABEL_40;
  stageEntity = questHintEntity->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  if ( questHintEntity->fields._CurrentPartyCost_k__BackingField > (int)stageEntity )
  {
    v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( v24 )
    {
      WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)v24, 0, 0, 0LL);
      v25 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15208/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15207/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
      v32 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( (BYTE3(WarBoardConfigurationUIContoroller___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v32 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__41_0 = static_fields->__9__41_0;
      if ( !_9__41_0 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)static_fields->__9;
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(
                                                           NotificationDialog_ClickDelegate_TypeInfo,
                                                           v27,
                                                           v28,
                                                           v29,
                                                           v30);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v35,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        v36 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        v36->__9__41_0 = _9__41_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v36->__9__41_0,
          (System_Int32_array **)_9__41_0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0LL;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
      v63 = (System_Nullable_float__o)&v60;
      v60 = 0LL;
      System_Nullable_float____ctor(v63, 15.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
      if ( v25 )
      {
        CommonUI__OpenNotificationDialog_18239760(
          v25,
          v26,
          v31,
          _9__41_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v60,
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
    sub_B170D4();
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(v20, questHintEntity, v21);
  v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v44 )
    goto LABEL_40;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)v44, 0, 0, 0LL);
  v45 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( IsEnabledPutOnFreeSquare )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_15226/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_15224/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_15227/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_15225/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v54 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                   CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                   v50,
                                                   v51,
                                                   v52,
                                                   v53);
    CommonConfirmDialog_ClickDelegate___ctor(
      v54,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v45 )
      goto LABEL_40;
    v55 = 1109393408;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_15226/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_15223/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_15227/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_15225/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v54 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                   CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                   v56,
                                                   v57,
                                                   v58,
                                                   v59);
    CommonConfirmDialog_ClickDelegate___ctor(
      v54,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v45 )
      goto LABEL_40;
    v55 = 1110179840;
  }
  CommonUI__OpenConfirmDialog_18236900(v45, v46, v47, v48, v49, 1, v54, 0, 28, 180.0, *(float *)&v55, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v6; // x0
  CommonUI_o *v7; // x0

  if ( (byte_40F8975 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40F8975 = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  v6 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v6
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)v6, 1, 0, 0LL),
        (v7 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  CommonUI__CloseConfirmDialog(v7, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x19
  WarBoardManager_o *v6; // x0
  WebViewManager_o *Instance; // x0

  if ( (byte_40F8968 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F8968 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(v5);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6
    || (WarBoardManager__OpenUserEquipScene(v6, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
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
  CommonUI_o *v6; // x0

  if ( (byte_40F896B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    byte_40F896B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(v5);
  v6 = **(CommonUI_o ***)(v5 + 184);
  if ( !v6 )
LABEL_10:
    sub_B170D4();
  CommonUI__CloseClassCompatibilityMenu(v6, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40F8979 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_14467/*"TopBase/BackButton"*/, v3);
    byte_40F8979 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_14467/*"TopBase/BackButton"*/, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OpenHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v8; // x0
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *title; // x20
  System_String_o *message; // x21
  int32_t leftIndent; // w22
  QuestPhaseEntity_o *questPhaseEntity; // x0
  System_String_o *HintMessageTitle; // x0
  System_String_o *HintMessage; // x0
  CommonUI_o *v16; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  ScrollMessageDialog_ClickDelegate_o *v21; // x24

  if ( (byte_40F896F & 1) == 0 )
  {
    sub_B16FFC(&ScrollMessageDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40F896F = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
      v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( v8 )
      {
        WarBoardManager__HideSimplePopup((WarBoardManager_o *)v8, 0LL, 0LL);
        questHintEntity = this->fields.questHintEntity;
        if ( questHintEntity )
        {
          title = questHintEntity->fields.title;
          message = questHintEntity->fields.message;
          leftIndent = questHintEntity->fields.leftIndent;
        }
        else
        {
          questPhaseEntity = this->fields.questPhaseEntity;
          if ( !questPhaseEntity )
            goto LABEL_16;
          HintMessageTitle = QuestPhaseEntity__getHintMessageTitle(questPhaseEntity, 0LL);
          if ( !this->fields.questPhaseEntity )
            goto LABEL_16;
          title = HintMessageTitle;
          HintMessage = QuestPhaseEntity__getHintMessage(this->fields.questPhaseEntity, 0LL);
          if ( !this->fields.questPhaseEntity )
            goto LABEL_16;
          message = HintMessage;
          leftIndent = QuestPhaseEntity__getHintLeftIndent(this->fields.questPhaseEntity, 0LL);
        }
        v16 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v21 = (ScrollMessageDialog_ClickDelegate_o *)sub_B170CC(
                                                       ScrollMessageDialog_ClickDelegate_TypeInfo,
                                                       v17,
                                                       v18,
                                                       v19,
                                                       v20);
        ScrollMessageDialog_ClickDelegate___ctor(
          v21,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0LL);
        if ( v16 )
        {
          CommonUI__OpenScrollMessageDialog(v16, title, message, leftIndent, v21, 0, 1, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B170D4();
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *newRuleBg; // x20
  UISprite_o *v6; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19
  WebViewManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  WarBoardData_o *monitor; // x0
  bool HasNewWinCond; // w0

  if ( (byte_40F8971 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_19275/*"icon_noticebg_01"*/, v4);
    byte_40F8971 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  v6 = this->fields.newRuleBg;
  if ( !v6
    || (UISprite__set_spriteName(v6, (System_String_o *)StringLiteral_19275/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL
    || (HasNewWinCond = WarBoardData__HasNewWinCond(monitor, v9), !newRuleObject) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(newRuleObject, HasNewWinCond, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7ACA & 1) == 0 )
  {
    sub_B16FFC(&WarBoardConfigurationUIContoroller___c_TypeInfo, v1);
    byte_40F7ACA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardConfigurationUIContoroller___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_40F7ACB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40F7ACB = 1;
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
    sub_B170D4();
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
  CommonUI_o *v5; // x0

  if ( (byte_40F7ACC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, ok);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F7ACC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (v5 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__CloseNotificationDialog(v5, 0LL);
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
  System_Collections_Generic_List_int__o *pieceSvtIdList; // x20
  int32_t SvtId; // w0

  if ( (byte_40F7ACD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, svt);
    byte_40F7ACD = 1;
  }
  if ( !svt )
    goto LABEL_10;
  if ( !UserServantEntity__IsLeave(svt, 0LL) && UserServantEntity__getCost(svt, 0LL) <= this->fields.freeCost )
  {
    pieceSvtIdList = this->fields.pieceSvtIdList;
    SvtId = UserServantEntity__getSvtId(svt, 0LL);
    if ( pieceSvtIdList )
      return !System_Collections_Generic_List_int___Contains(
                pieceSvtIdList,
                SvtId,
                (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_B170D4();
  }
  return 0;
}