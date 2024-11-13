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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B14102 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B14102 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  WarBoardManager_o *Instance; // x0
  __int64 v6; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v9; // x0

  if ( (byte_4B14105 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    sub_1BCA7E0(&WarBoardManager_TypeInfo, v3, v4);
    byte_4B14105 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_10;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v9 = WarBoardManager_TypeInfo;
  if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, v6);
    v9 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v6);
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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__EndNoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_endCallbackNoticeHint; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *endCallbackNoticeHint; // t1

  endCallbackNoticeHint = this->fields.endCallbackNoticeHint;
  p_endCallbackNoticeHint = (PartyOrganizationUtility_o *)&this->fields.endCallbackNoticeHint;
  v9 = endCallbackNoticeHint;
  if ( endCallbackNoticeHint )
  {
    p_endCallbackNoticeHint->klass = 0LL;
    sub_1BCA784(p_endCallbackNoticeHint, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BalanceConfig_c *v10; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  __int64 v12; // x1
  UISprite_o *classCompatibilitySprite; // x19

  if ( (byte_4B140FB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&CondType_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_17850/*"buttontxt_formation_20"*/, v8, v9);
    byte_4B140FB = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v10->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  if ( CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17850/*"buttontxt_formation_20"*/, 0LL);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__InitCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  intptr_t v14; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_70114172; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x20
  UIFont_o *Component_object; // x0
  const MethodInfo *v20; // x1
  UIFont_o *v21; // x20
  const MethodInfo *v22; // x2
  System_RuntimeTypeHandle_o v23; // 0:w0.4

  if ( (byte_4B140F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject_var, v4, v5);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Type_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6892/*"Fonts/FGO-NumberFont-02"*/, v12, v13);
    byte_4B140F5 = 1;
  }
  v14 = (int)UnityEngine_GameObject_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, method);
  v23.fields.value = v14;
  TypeFromHandle = System_Type__GetTypeFromHandle(v23, 0LL);
  _70114172 = UnityEngine_Resources__Load_70114172((System_String_o *)StringLiteral_6892/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _70114172 )
  {
    if ( (UnityEngine_GameObject_c *)_70114172->klass == UnityEngine_GameObject_TypeInfo )
      v18 = _70114172;
    else
      v18 = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  Component_object = (UIFont_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_20;
    Component_object = (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)v18,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v21 = Component_object,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, Component_object, 0LL),
          (Component_object = (UIFont_o *)this->fields.maxCostLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v21, 0LL),
          (Component_object = (UIFont_o *)this->fields.spritLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v21, 0LL),
          (Component_object = (UIFont_o *)this->fields.currentApLabel) == 0LL) )
    {
LABEL_20:
      sub_1BCAA3C(Component_object, v20);
    }
    UILabel__set_bitmapFont((UILabel_o *)Component_object, v21, 0LL);
  }
  WarBoardConfigurationUIContoroller__ModifyCost(this, v20);
  WarBoardConfigurationUIContoroller__ModifyAP(this, 0, v22);
}


void __fastcall WarBoardConfigurationUIContoroller__InitHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  QuestPhaseEntity_o *hintButtonObj; // x0
  __int64 v13; // x8
  __int64 v14; // x21
  struct QuestHintEntity_o **p_questHintEntity; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  QuestPhaseEntity_o **p_questPhaseEntity; // x21
  System_String_o *message; // x0

  if ( (byte_4B140FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestHintMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10, v11);
    byte_4B140FE = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  hintButtonObj = *(QuestPhaseEntity_o **)&hintButtonObj[5].fields.friendshipExp;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( WarBoardData__GetPartySkillId((WarBoardData_o *)hintButtonObj, 0LL) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  v13 = *(_QWORD *)&hintButtonObj[5].fields.friendshipExp;
  if ( !v13 )
    goto LABEL_30;
  v14 = *(_QWORD *)(v13 + 104);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !v14 )
    goto LABEL_30;
  if ( !hintButtonObj )
    goto LABEL_30;
  p_questHintEntity = &this->fields.questHintEntity;
  QuestHintMaster__TryGetEntity(
    (QuestHintMaster_o *)hintButtonObj,
    &this->fields.questHintEntity,
    *(_DWORD *)(v14 + 124),
    *(_DWORD *)(v14 + 128),
    0LL);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !hintButtonObj )
    goto LABEL_30;
  v16 = *(_DWORD *)(v14 + 124);
  v17 = *(_DWORD *)(v14 + 128);
  p_questPhaseEntity = &this->fields.questPhaseEntity;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)hintButtonObj, &this->fields.questPhaseEntity, v16, v17, 0LL);
  if ( *p_questHintEntity )
  {
    message = (*p_questHintEntity)->fields.message;
  }
  else
  {
    if ( !*p_questPhaseEntity )
      goto LABEL_20;
    message = QuestPhaseEntity__getHintMessage(*p_questPhaseEntity, 0LL);
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
LABEL_20:
    hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
    if ( hintButtonObj )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 0, 0LL);
      return;
    }
LABEL_30:
    sub_1BCAA3C(hintButtonObj, method);
  }
  if ( *p_questHintEntity )
  {
    if ( !(*p_questHintEntity)->fields.openType )
      return;
    goto LABEL_24;
  }
  hintButtonObj = *p_questPhaseEntity;
  if ( !*p_questPhaseEntity )
    goto LABEL_30;
  if ( QuestPhaseEntity__getHintOpenType(hintButtonObj, 0LL) )
  {
LABEL_24:
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, method);
    QuestHintDialogOpenManager__ReadData(0LL);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__InitStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *startButton; // x20
  __int64 v23; // x1
  struct UICommonButton_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x20
  WarBoardConfigurationUIContoroller___c_c *v29; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v31; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  WarBoardConfigurationUIContoroller___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  System_Func_object__object__o *_9__5_1; // x21
  Il2CppObject *v46; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  struct UnityEngine_GameObject_array *v55; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x1
  const MethodInfo *v70; // x1

  if ( (byte_4B140F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_GameObject___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UIWidget___, v8, v9);
    sub_1BCA7E0(&System_Func_UIWidget__GameObject__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_UIWidget__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__, v16, v17);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__, v18, v19);
    sub_1BCA7E0(&WarBoardConfigurationUIContoroller___c_TypeInfo, v20, v21);
    byte_4B140F3 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v24 = this->fields.startButton;
    if ( !v24 )
      goto LABEL_21;
    ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                         (UnityEngine_Component_o *)v24,
                                                                                         1,
                                                                                         (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
    v29 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo, v25);
      v29 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v29->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29, v25);
        v29 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UIWidget__bool__TypeInfo, v25, v26, v27);
      System_Func_object__bool____ctor(
        _9__5_0,
        v31,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        0LL);
      static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = System_Linq_Enumerable__Where_object_(
            ComponentsInChildren_object,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v43 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v44 = v39;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo, v40);
      v43 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_1 = (System_Func_object__object__o *)v43->static_fields->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43, v40);
        v43 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v43->static_fields->__9;
      _9__5_1 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_UIWidget__GameObject__TypeInfo, v40, v41, v42);
      System_Func_object__object____ctor(
        _9__5_1,
        v46,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        0LL);
      v47 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v47->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v47->__9__5_1, (int64_t)_9__5_1, v48, v49, v50, v51, v52, v53);
    }
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v44,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v55 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v54,
                                                   (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v55;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.startButtonTweenTargetCache,
      (int64_t)v55,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    v24 = this->fields.startButton;
    if ( !v24 )
LABEL_21:
      sub_1BCAA3C(v24, v23);
    v69 = (int64_t)*p_startButtonTweenTargetCache;
    v24->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_1BCA784((PartyOrganizationUtility_o *)&v24->fields.tweenTargets, v69, v63, v64, v65, v66, v67, v68);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v70);
  }
}


bool __fastcall WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
        WarBoardConfigurationUIContoroller_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x24
  void *Instance; // x0
  int64_t UserServantId_k__BackingField; // x1
  DataManager_o *v38; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_int__o *v44; // x25
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  PartyOrganizationUtility_o *p_monitor; // x24
  int max_length; // w8
  unsigned int v53; // w29
  WarBoardPieceData_o *v54; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v56; // x26
  __int64 v57; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  int v61; // w8
  __int64 v62; // x26
  System_Func_object__bool__o **v63; // x23
  WarBoardPieceData_o *v64; // x24
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x8
  __int64 v68; // x8
  int32_t *v69; // x8
  int32_t v70; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Collections_Generic_List_int__o *v76; // x1
  UserServantMaster_o *v77; // x0
  System_Collections_Generic_List_int__o *v78; // x25
  struct System_Int32_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  System_Func_object__bool__o *v82; // x25
  System_Collections_Generic_List_T__o *v83; // x24
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  Il2CppObject *v91; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4B1410A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_UserServantEntity___, warBoardData, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_RestrictionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&System_Func_UserServantEntity__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(
      &Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
      v29,
      v30);
    sub_1BCA7E0(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&WarBoardIndividualityClassMaster_TypeInfo, v33, v34);
    byte_4B1410A = 1;
  }
  entity = 0LL;
  v35 = (Il2CppObject *)sub_1BCAA2C(
                          WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo,
                          warBoardData,
                          method,
                          v3);
  System_Object___ctor(v35, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v38 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_66;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, 0LL);
  v44 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v41,
                                                    v42,
                                                    v43);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v35 )
    goto LABEL_66;
  v91 = v35;
  v35[1].monitor = v44;
  p_monitor = (PartyOrganizationUtility_o *)&v35[1].monitor;
  sub_1BCA784(p_monitor, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  if ( !EditableServantPieces )
    goto LABEL_66;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v53 = 0;
    while ( 1 )
    {
      if ( v53 >= max_length )
LABEL_67:
        sub_1BCAA44(Instance, UserServantId_k__BackingField);
      v54 = EditableServantPieces->m_Items[v53];
      if ( !v54 )
        break;
      UserServantId_k__BackingField = v54->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v39 )
          break;
        Instance = DataMasterBase_object__object__long___GetEntity(
                     v39,
                     UserServantId_k__BackingField,
                     (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_monitor->klass;
        v57 = *((_QWORD *)Instance + 10);
        v56 = *((_QWORD *)Instance + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            UserServantId_k__BackingField);
        *(_QWORD *)&v93.fields.currentCryptoKey = v57;
        *(_QWORD *)&v93.fields.fakeValue = v56;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v93, 0LL);
        if ( !klass )
          break;
        items = klass->fields._items;
        v59 = Method_System_Collections_Generic_List_int__Add__;
        ++klass->fields._version;
        if ( !items )
          break;
        size = klass->fields._size;
        UserServantId_k__BackingField = (unsigned int)Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            klass,
            (int32_t)Instance,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          klass->fields._size = size + 1;
          items->m_Items[size + 1] = (int)Instance;
        }
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v53 >= max_length )
        goto LABEL_22;
    }
LABEL_66:
    sub_1BCAA3C(Instance, UserServantId_k__BackingField);
  }
LABEL_22:
  Instance = (void *)WarBoardData__get_FormationLimitCost(warBoardData, 0LL);
  LODWORD(v91[1].klass) = (_DWORD)Instance - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v61 = EditableServantPieces->max_length;
  if ( v61 < 1 )
    return 0;
  v62 = 0LL;
  v63 = (System_Func_object__bool__o **)&v91[2];
  while ( 1 )
  {
    if ( (unsigned int)v62 >= v61 )
      goto LABEL_67;
    v64 = EditableServantPieces->m_Items[v62];
    if ( !v64 )
      goto LABEL_66;
    if ( v64->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v62], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_object_(
                     v38,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_66;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v64->fields._restrictionId_k__BackingField,
                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_object_(
                       v38,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_66;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity[2].monitor,
                       0LL);
          if ( Instance && (v67 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v67 )
              goto LABEL_67;
            v68 = *((_QWORD *)Instance + 4);
            if ( !v68 )
              goto LABEL_66;
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            v69 = (int32_t *)(v68 + 16);
          }
          else
          {
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo, UserServantId_k__BackingField);
              Instance = WarBoardIndividualityClassMaster_TypeInfo;
            }
            v69 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v70 = *v69;
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance, UserServantId_k__BackingField);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v70 == static_fields->ALL_CLASS_ID )
          {
            if ( !v39 )
              goto LABEL_66;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v39, 0LL);
          }
          else
          {
            if ( !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance, UserServantId_k__BackingField);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v70 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_object_(
                           v38,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_66;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0LL);
              if ( !v39 )
                goto LABEL_66;
              v76 = (System_Collections_Generic_List_int__o *)Instance;
              v77 = (UserServantMaster_o *)v39;
            }
            else
            {
              v78 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                UserServantId_k__BackingField,
                                                                v65,
                                                                v66);
              System_Collections_Generic_List_int____ctor(
                v78,
                (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v78 )
                goto LABEL_66;
              v79 = v78->fields._items;
              v80 = Method_System_Collections_Generic_List_int__Add__;
              ++v78->fields._version;
              if ( !v79 )
                goto LABEL_66;
              v81 = v78->fields._size;
              if ( (unsigned int)v81 >= v79->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v78,
                  v70,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
              }
              else
              {
                v78->fields._size = v81 + 1;
                v79->m_Items[v81 + 1] = v70;
              }
              if ( !v39 )
                goto LABEL_66;
              v77 = (UserServantMaster_o *)v39;
              v76 = v78;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v77, v76, 0LL);
          }
          v82 = *v63;
          v83 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*v63 )
          {
            v82 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_UserServantEntity__bool__TypeInfo,
                                                   v73,
                                                   v74,
                                                   v75);
            System_Func_object__bool____ctor(
              v82,
              v91,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              0LL);
            v91[2].klass = (Il2CppClass *)v82;
            sub_1BCA784((PartyOrganizationUtility_o *)&v91[2], (int64_t)v82, v84, v85, v86, v87, v88, v89);
          }
          Instance = (void *)BasicHelper__Any_object_(
                               v83,
                               (System_Func_T__bool__o *)v82,
                               (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v61 = EditableServantPieces->max_length;
    if ( (int)++v62 >= v61 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAP(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t ap,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UILabel_o *currentApLabel; // x19
  int32_t *p_BaseActionPoint; // x0
  __int64 v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x8
  WarBoardData_o *v13; // x20
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  System_String_o *v15; // x1
  int32_t BaseActionPoint; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = ap;
  if ( (byte_4B140F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, *(_QWORD *)&ap, method);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v6, v7);
    byte_4B140F7 = 1;
  }
  BaseActionPoint = 0;
  if ( ap )
  {
    currentApLabel = this->fields.currentApLabel;
    p_BaseActionPoint = &v17;
    goto LABEL_14;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = *(System_String_o **)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (v11[12].fields._firstChar & 0x100) == 0 )
    v11 = (System_String_o *)sub_1C1C6BC(v3);
  v12 = **(_QWORD **)&v11[7].fields;
  if ( !v12 || (v13 = *(WarBoardData_o **)(v12 + 440)) == 0LL )
LABEL_19:
    sub_1BCAA3C(v11, *(_QWORD *)&ap);
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v12 + 440), 0, 0, 0LL);
  if ( ActionPointEntity && !WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL) )
  {
    v11 = (System_String_o *)this->fields.currentApLabel;
    if ( v11 )
    {
      v15 = (System_String_o *)StringLiteral_1209/*"0"*/;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  currentApLabel = this->fields.currentApLabel;
  BaseActionPoint = WarBoardData__GetBaseActionPoint(v13, 0, 0, 0LL);
  p_BaseActionPoint = &BaseActionPoint;
LABEL_14:
  v11 = System_Int32__ToString((int32_t)p_BaseActionPoint, 0LL);
  if ( !currentApLabel )
    goto LABEL_19;
  v15 = v11;
  v11 = (System_String_o *)currentApLabel;
LABEL_16:
  UILabel__set_text((UILabel_o *)v11, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAPFromSquareIndex(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x0
  WarBoardData_o *Instance; // x0
  System_Collections_Generic_List_HoldReinforcementsData__c *klass; // x8
  WarBoardActionPointEntity_o *ActionPointEntity; // x20
  WarBoardPieceData_o *Piece_36054544; // x0
  WarBoardPieceData_o *v21; // x21
  bool HasCost; // w0
  __int64 v23; // x1
  __int64 v24; // x1
  WarBoardActionPointClassMaster_o *v25; // x21
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v31; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B140F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14, v15);
    byte_4B140F8 = 1;
  }
  entity = 0LL;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC(v3);
  Instance = *(WarBoardData_o **)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (BYTE5(Instance[1].fields.squares) & 1) == 0 )
    Instance = (WarBoardData_o *)sub_1C1C6BC(v3);
  klass = Instance->fields.reinforcementsSaveList->klass;
  if ( !klass )
    goto LABEL_35;
  Instance = (WarBoardData_o *)klass->vtable._8_unknown.method;
  if ( !Instance )
    goto LABEL_35;
  ActionPointEntity = WarBoardData__GetActionPointEntity(Instance, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_35;
  Piece_36054544 = WarBoardData__GetPiece_36054544(Instance, squareIndex, 0LL);
  if ( ActionPointEntity )
  {
    v21 = Piece_36054544;
    HasCost = WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL);
    if ( v21 )
    {
      if ( !HasCost )
      {
        if ( v21->fields._UserServantId_k__BackingField < 1 )
        {
          if ( !WarBoardPieceData__get_IsNpc(v21, 0LL) || !v21->fields._battleServant_k__BackingField )
          {
            v31 = this;
            baseActionPoint = 0;
LABEL_33:
            WarBoardConfigurationUIContoroller__ModifyAP(v31, baseActionPoint, v27);
            return;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          battleServant_k__BackingField = v21->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            v25 = (WarBoardActionPointClassMaster_o *)Instance;
            Instance = (WarBoardData_o *)BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
            if ( v25 )
            {
LABEL_30:
              EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                              v25,
                                              ActionPointEntity,
                                              (int32_t)Instance,
                                              0LL);
              if ( !EntityFromActionPointEntity )
                return;
              baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
              v31 = this;
              goto LABEL_33;
            }
          }
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( Instance )
          {
            if ( !DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                    &entity,
                    v21->fields._UserServantId_k__BackingField,
                    (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
            Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_35;
            v25 = (WarBoardActionPointClassMaster_o *)Instance;
            Instance = (WarBoardData_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0LL);
            if ( !v25 )
              goto LABEL_35;
            goto LABEL_30;
          }
        }
LABEL_35:
        sub_1BCAA3C(Instance, *(_QWORD *)&squareIndex);
      }
    }
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x8
  WarBoardData_o *v16; // x21
  bool IsPartyCostOver; // w20
  __int64 v18; // x1
  System_String_o *v19; // x0
  UILabel_o *maxCostLabel; // x22
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  UILabel_o *spritLabel; // x22
  System_String_o *v24; // x0
  __int64 v25; // x1
  UILabel_o *currentCostLabel; // x22
  System_String_o *v27; // x0
  const MethodInfo *v28; // x1
  int32_t FormationLimitCost; // [xsp+8h] [xbp-38h] BYREF
  int32_t CurrentPartyCost_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B140F6 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_15590/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_15588/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_15589/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v11, v12);
    byte_4B140F6 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(v3);
  v14 = *(System_String_o **)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (v14[12].fields._firstChar & 0x100) == 0 )
    v14 = (System_String_o *)sub_1C1C6BC(v3);
  v15 = **(_QWORD **)&v14[7].fields;
  if ( !v15 )
    goto LABEL_19;
  v16 = *(WarBoardData_o **)(v15 + 440);
  if ( !v16 )
    goto LABEL_19;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(*(WarBoardData_o **)(v15 + 440), 0LL);
  CurrentPartyCost_k__BackingField = v16->fields._CurrentPartyCost_k__BackingField;
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v16, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15588/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = this->fields.maxCostLabel;
  v21 = v19;
  v22 = System_Int32__ToString((int32_t)&FormationLimitCost, 0LL);
  v14 = System_String__Concat_62401220(v21, v22, 0LL);
  if ( !maxCostLabel )
    goto LABEL_19;
  UILabel__set_text(maxCostLabel, v14, 0LL);
  spritLabel = this->fields.spritLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15590/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  v14 = System_String__Concat_62401220(v21, v24, 0LL);
  if ( !spritLabel )
    goto LABEL_19;
  UILabel__set_text(spritLabel, v14, 0LL);
  currentCostLabel = this->fields.currentCostLabel;
  if ( IsPartyCostOver )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15589/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v27 = System_Int32__ToString((int32_t)&CurrentPartyCost_k__BackingField, 0LL);
  v14 = System_String__Concat_62401220(v21, v27, 0LL);
  if ( !currentCostLabel )
LABEL_19:
    sub_1BCAA3C(v14, method);
  UILabel__set_text(currentCostLabel, v14, 0LL);
  WarBoardConfigurationUIContoroller__ModifyStartButton(this, v28);
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *startButton; // x20
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  long double v14; // q0
  __int64 v15; // x0
  struct UICommonButton_o *v16; // x0
  __int64 v17; // x8
  __int64 v18; // x8
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B140F4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4, v5);
    byte_4B140F4 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v15 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C1C6BC(v14);
    v16 = *(struct UICommonButton_o **)(*(_QWORD *)(v15 + 192) + 16LL);
    if ( (BYTE1(v16[2].fields.specifyPressedColor.fields.g) & 1) == 0 )
      v16 = (struct UICommonButton_o *)sub_1C1C6BC(v14);
    v17 = **(_QWORD **)&v16[1].fields.specifyHoverColor.fields.b;
    if ( !v17 )
      goto LABEL_19;
    v18 = *(_QWORD *)(v17 + 440);
    if ( !v18 )
      goto LABEL_19;
    v16 = this->fields.startButton;
    if ( *(int *)(v18 + 212) >= 1 )
    {
      if ( v16 )
      {
        startButtonTweenTargetCache = this->fields.startButtonTweenTargetCache;
        v16->fields.tweenTargets = startButtonTweenTargetCache;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v16->fields.tweenTargets,
          (int64_t)startButtonTweenTargetCache,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        v16 = this->fields.startButton;
        if ( v16 )
        {
          UICommonButton__SetButtonEnable(v16, 1, 1, 0LL);
          return;
        }
      }
LABEL_19:
      sub_1BCAA3C(v16, v7);
    }
    if ( !v16 )
      goto LABEL_19;
    UICommonButton__SetButtonEnable(v16, 0, 1, 0LL);
    v16 = this->fields.startButton;
    if ( !v16 )
      goto LABEL_19;
    v16->fields.tweenTargets = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v16->fields.tweenTargets, 0LL, v20, v21, v22, v23, v24, v25);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyUserEquip(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  long double v13; // q0
  __int64 v14; // x8
  __int64 v15; // x8
  Il2CppObject *Entity; // x0
  int32_t genderImageId; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-30h] BYREF
  __int64 maxLv; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B140F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B140F9 = 1;
  }
  equipName = 0LL;
  maxLv = 0LL;
  detail = 0LL;
  genderImageId = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(v13);
  Instance = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(Instance + 309) & 1) == 0 )
    Instance = sub_1C1C6BC(v13);
  v15 = **(_QWORD **)(Instance + 184);
  if ( !v15 )
    goto LABEL_15;
  Instance = *(_QWORD *)(v15 + 440);
  if ( !Instance )
    goto LABEL_15;
  Instance = WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !Entity )
    return;
  UserEquipEntity__getEquipInfo(
    (UserEquipEntity_o *)Entity,
    (int32_t *)&maxLv + 1,
    (int32_t *)&maxLv,
    &equipName,
    &detail,
    &genderImageId,
    0LL);
  Instance = (__int64)this->fields.userEquipIcon;
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(Instance, v11);
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__NoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  struct QuestHintEntity_o *v14; // x8
  QuestPhaseEntity_o *openType; // x0
  _DWORD *v16; // x9
  int32_t v17; // w20
  int32_t v18; // w21

  if ( (byte_4B14100 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, callback, method);
    byte_4B14100 = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endCallbackNoticeHint,
    (int64_t)callback,
    (int64_t)method,
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
      goto LABEL_23;
    openType = (QuestPhaseEntity_o *)QuestPhaseEntity__getHintOpenType(openType, 0LL);
  }
  if ( (_DWORD)openType != 1 )
    goto LABEL_22;
  v16 = this->fields.questHintEntity;
  if ( !v16 )
  {
    v16 = this->fields.questPhaseEntity;
    if ( !v16 )
LABEL_23:
      sub_1BCAA3C(openType, v10);
  }
  v17 = v16[4];
  v18 = v16[5];
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v10);
  if ( QuestHintDialogOpenManager__IsQuestHintOpen(v17, v18, 0LL) )
    goto LABEL_8;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v10);
  QuestHintDialogOpenManager__SetQuestInfo(v17, v18, 0LL);
  QuestHintDialogOpenManager__WriteData(0LL);
LABEL_22:
  WarBoardConfigurationUIContoroller__OpenHintDialog(this, v10);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickClassCompatibilityButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  long double v19; // q0
  __int64 v20; // x0
  __int64 v21; // x0
  CommonUI_o *v22; // x20
  System_Action_o *v23; // x21

  if ( (byte_4B140FC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__, v8, v9);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__, v10, v11);
    byte_4B140FC = 1;
  }
  v12 = Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC(v19);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC(v19);
  v22 = **(CommonUI_o ***)(v21 + 184);
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(
    v23,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v22 )
LABEL_13:
    sub_1BCAA3C(Instance, v15);
  CommonUI__OpenClassCompatibilityMenu(v22, v23, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x1

  if ( (byte_4B140FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller_OnClickHintButton__, method, v2);
    byte_4B140FF = 1;
  }
  v4 = Method_WarBoardConfigurationUIContoroller_OnClickHintButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickHintButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endCallbackNoticeHint, 0LL, v9, v10, v11, v12, v13, v14);
    WarBoardConfigurationUIContoroller__OpenHintDialog(this, v15);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  long double v27; // q0
  __int64 v28; // x0
  __int64 v29; // x0
  CommonUI_o *v30; // x20
  System_String_o *v31; // x21
  System_String_o *v32; // x22
  System_String_o *v33; // x23
  System_String_o *v34; // x24
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  CommonConfirmDialog_ClickDelegate_o *v38; // x25

  if ( (byte_4B14108 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__, v10, v11);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__, v12, v13);
    sub_1BCA7E0(&StringLiteral_15597/*"WARBOARD_RETURN_CONFIRM_NO"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15596/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_15599/*"WARBOARD_RETURN_CONFIRM_YES"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_15598/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, v20, v21);
    byte_4B14108 = 1;
  }
  v22 = Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1BCA7F8(Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
  v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C1C6BC(v27);
  v29 = *(_QWORD *)(*(_QWORD *)(v28 + 192) + 16LL);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1C1C6BC(v27);
  v30 = **(CommonUI_o ***)(v29 + 184);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15598/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15596/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_15599/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_15597/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v38 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v35, v36, v37);
  CommonConfirmDialog_ClickDelegate___ctor(
    v38,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v30 )
LABEL_15:
    sub_1BCAA3C(Instance, v25);
  CommonUI__OpenConfirmDialog_30766268(v30, v31, v32, v33, v34, 0, v38, 0, 28, 180.0, 43.0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B14109 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B14109 = 1;
  }
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isDecide);
    if ( !byte_4B11139 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isDecide, method);
      byte_4B11139 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isDecide);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_15:
      sub_1BCAA3C(Instance, v10);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B14104 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, v5, v6);
    byte_4B14104 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v7, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  WarBoardManager_o *Instance; // x0
  __int64 v39; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x20
  _BOOL8 IsPartyCostOver; // x0
  const MethodInfo *v42; // x2
  __int64 v43; // x1
  Il2CppObject *v44; // x19
  System_String_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_String_o *v49; // x21
  WarBoardConfigurationUIContoroller___c_c *v50; // x8
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v52; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  bool IsEnabledPutOnFreeSquare; // w22
  __int64 v61; // x1
  Il2CppObject *v62; // x20
  System_String_o *v63; // x21
  System_String_o *v64; // x22
  System_String_o *v65; // x23
  System_String_o *v66; // x24
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  CommonConfirmDialog_ClickDelegate_o *v70; // x25
  System_String_o *v71; // x22
  System_String_o *v72; // x23
  System_String_o *v73; // x24
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  CommonConfirmDialog_ClickDelegate_o *v77; // x25
  System_Nullable_float__o v78; // [xsp+60h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v81; // 0:x0.8

  if ( (byte_4B14106 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__, v14, v15);
    sub_1BCA7E0(&WarBoardConfigurationUIContoroller___c_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller_OnClickStartButton__, v18, v19);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__, v20, v21);
    sub_1BCA7E0(&StringLiteral_15586/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_15605/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_15602/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_15587/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_15604/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_15603/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_15606/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, v34, v35);
    byte_4B14106 = 1;
  }
  v36 = Method_WarBoardConfigurationUIContoroller_OnClickStartButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickStartButton__ + 83) & 2) != 0 )
    v36 = (_QWORD *)sub_1BCA7F8(Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
  v37 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v36, v36[4]);
  OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_29;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(Instance->fields._warBoardData_k__BackingField, 0LL);
  if ( IsPartyCostOver )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_15587/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_15586/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
      v50 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo, v46);
        v50 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      _9__41_0 = v50->static_fields->__9__41_0;
      if ( !_9__41_0 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50, v46);
          v50 = WarBoardConfigurationUIContoroller___c_TypeInfo;
        }
        v52 = (Il2CppObject *)v50->static_fields->__9;
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                           NotificationDialog_ClickDelegate_TypeInfo,
                                                           v46,
                                                           v47,
                                                           v48);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v52,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        static_fields->__9__41_0 = _9__41_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
          (int64_t)_9__41_0,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0LL;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
      v81 = (System_Nullable_float__o)&v78;
      v78 = 0LL;
      System_Nullable_float____ctor(v81, 15.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
      if ( v44 )
      {
        CommonUI__OpenNotificationDialog_30768824(
          (CommonUI_o *)v44,
          v45,
          v49,
          _9__41_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v78,
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
LABEL_29:
    sub_1BCAA3C(Instance, v39);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)IsPartyCostOver,
                               warBoardData_k__BackingField,
                               v42);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  v62 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_15605/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
  if ( IsEnabledPutOnFreeSquare )
  {
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_15603/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_15606/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_15604/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v70 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v67, v68, v69);
    CommonConfirmDialog_ClickDelegate___ctor(
      v70,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v62 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_30766268((CommonUI_o *)v62, v63, v64, v65, v66, 1, v70, 0, 28, 180.0, 40.0, 0, 0, 0LL);
  }
  else
  {
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_15602/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v72 = LocalizationManager__Get((System_String_o *)StringLiteral_15606/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_15604/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v77 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v74, v75, v76);
    CommonConfirmDialog_ClickDelegate___ctor(
      v77,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v62 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_30766268((CommonUI_o *)v62, v63, v71, v72, v73, 1, v77, 0, 28, 180.0, 43.0, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B14107 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    byte_4B14107 = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v7);
  }
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  long double v10; // q0
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4B140FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3, v4);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__, v5, v6);
    byte_4B140FA = 1;
  }
  v7 = Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v10);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(v10);
  Instance = **(Il2CppObject ***)(v12 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4B140FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3, v4);
    byte_4B140FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v7);
  Instance = **(Il2CppObject ***)(v9 + 184);
  if ( !Instance )
LABEL_10:
    sub_1BCAA3C(Instance, v6);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B1410B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_14699/*"TopBase/BackButton"*/, method, v2);
    byte_4B1410B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_14699/*"TopBase/BackButton"*/, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OpenHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardManager_o *Instance; // x0
  __int64 v13; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *title; // x20
  System_String_o *message; // x21
  int32_t leftIndent; // w22
  Il2CppObject *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ScrollMessageDialog_ClickDelegate_o *v22; // x24

  if ( (byte_4B14101 & 1) == 0 )
  {
    sub_1BCA7E0(&ScrollMessageDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B14101 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v22 = (ScrollMessageDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                       ScrollMessageDialog_ClickDelegate_TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
        ScrollMessageDialog_ClickDelegate___ctor(
          v22,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0LL);
        if ( v18 )
        {
          CommonUI__OpenScrollMessageDialog((CommonUI_o *)v18, title, message, leftIndent, v22, 0, 1, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(Instance, v13);
  }
  WarBoardConfigurationUIContoroller__EndNoticeHint(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__SetActiveCostLabel(
        WarBoardConfigurationUIContoroller_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *costBaseObj; // x0

  costBaseObj = this->fields.costBaseObj;
  if ( !costBaseObj )
    sub_1BCAA3C(0LL, isActive);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *newRuleBg; // x20
  __int64 v9; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_4B14103 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_20372/*"icon_noticebg_01"*/, v6, v7);
    byte_4B14103 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_20372/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0LL), !newRuleObject) )
  {
    sub_1BCAA3C(Instance, v9);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1410C & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardConfigurationUIContoroller___c_TypeInfo, v1, v2);
    byte_4B1410C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardConfigurationUIContoroller___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B1410D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B1410D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardConfigurationUIContoroller___c___InitStartButton_b__5_1(
        WarBoardConfigurationUIContoroller___c_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__41_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1410E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, ok, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3, v4);
    byte_4B1410E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v6);
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
  if ( (byte_4B1410F & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_1BCA7E0(
                                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                                           svt,
                                                                           method);
    byte_4B1410F = 1;
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
                (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_1BCAA3C(this, svt);
  }
  return 0;
}