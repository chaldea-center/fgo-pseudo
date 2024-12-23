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
    sub_1BE4D28(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B64A96 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B64A96 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
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

  if ( (byte_4B64A99 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1BE4ACC(&WarBoardManager_TypeInfo, v2);
    byte_4B64A99 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_10;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v7 = WarBoardManager_TypeInfo;
  if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v7 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1BE4D28(Instance, v4);
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
    sub_1BE4D28(0LL, v3);
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
    sub_1BE4A70(p_endCallbackNoticeHint, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classCompatibilitySprite; // x19

  if ( (byte_4B64A8F & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v3);
    sub_1BE4ACC(&CondType_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_17900/*"buttontxt_formation_20"*/, v5);
    byte_4B64A8F = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v6->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_38498148(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17900/*"buttontxt_formation_20"*/, 0LL);
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
  UnityEngine_Object_o *_70411928; // x0
  UnityEngine_Object_o *v11; // x20
  UIFont_o *Component_object; // x0
  const MethodInfo *v13; // x1
  UIFont_o *v14; // x20
  const MethodInfo *v15; // x2
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_4B64A89 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_1BE4ACC(&UnityEngine_GameObject_var, v3);
    sub_1BE4ACC(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&System_Type_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_6910/*"Fonts/FGO-NumberFont-02"*/, v7);
    byte_4B64A89 = 1;
  }
  v8 = (int)UnityEngine_GameObject_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  _70411928 = UnityEngine_Resources__Load_70411928((System_String_o *)StringLiteral_6910/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _70411928 )
  {
    if ( (UnityEngine_GameObject_c *)_70411928->klass == UnityEngine_GameObject_TypeInfo )
      v11 = _70411928;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIFont_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_20;
    Component_object = (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)v11,
                                     (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v14 = Component_object,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, Component_object, 0LL),
          (Component_object = (UIFont_o *)this->fields.maxCostLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v14, 0LL),
          (Component_object = (UIFont_o *)this->fields.spritLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v14, 0LL),
          (Component_object = (UIFont_o *)this->fields.currentApLabel) == 0LL) )
    {
LABEL_20:
      sub_1BE4D28(Component_object, v13);
    }
    UILabel__set_bitmapFont((UILabel_o *)Component_object, v14, 0LL);
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
  __int64 v9; // x21
  struct QuestHintEntity_o **p_questHintEntity; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  QuestPhaseEntity_o **p_questPhaseEntity; // x21
  System_String_o *message; // x0

  if ( (byte_4B64A92 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&QuestHintDialogOpenManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    byte_4B64A92 = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  hintButtonObj = *(QuestPhaseEntity_o **)&hintButtonObj[5].fields.friendshipExp;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( WarBoardData__GetPartySkillId((WarBoardData_o *)hintButtonObj, 0LL) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  v8 = *(_QWORD *)&hintButtonObj[5].fields.friendshipExp;
  if ( !v8 )
    goto LABEL_30;
  v9 = *(_QWORD *)(v8 + 104);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !v9 )
    goto LABEL_30;
  if ( !hintButtonObj )
    goto LABEL_30;
  p_questHintEntity = &this->fields.questHintEntity;
  QuestHintMaster__TryGetEntity(
    (QuestHintMaster_o *)hintButtonObj,
    &this->fields.questHintEntity,
    *(_DWORD *)(v9 + 124),
    *(_DWORD *)(v9 + 128),
    0LL);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !hintButtonObj )
    goto LABEL_30;
  v11 = *(_DWORD *)(v9 + 124);
  v12 = *(_DWORD *)(v9 + 128);
  p_questPhaseEntity = &this->fields.questPhaseEntity;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)hintButtonObj, &this->fields.questPhaseEntity, v11, v12, 0LL);
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
    sub_1BE4D28(hintButtonObj, method);
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
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
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
  UnityEngine_Object_o *startButton; // x20
  __int64 v13; // x1
  struct UICommonButton_o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x20
  WarBoardConfigurationUIContoroller___c_c *v16; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v18; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  WarBoardConfigurationUIContoroller___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_object__object__o *_9__5_1; // x21
  Il2CppObject *v30; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  struct UnityEngine_GameObject_array *v39; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  const MethodInfo *v54; // x1

  if ( (byte_4B64A87 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_GameObject___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_UIWidget___, v5);
    sub_1BE4ACC(&System_Func_UIWidget__GameObject__TypeInfo, v6);
    sub_1BE4ACC(&System_Func_UIWidget__bool__TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__, v9);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__, v10);
    sub_1BE4ACC(&WarBoardConfigurationUIContoroller___c_TypeInfo, v11);
    byte_4B64A87 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v14 = this->fields.startButton;
    if ( !v14 )
      goto LABEL_21;
    ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                         (UnityEngine_Component_o *)v14,
                                                                                         1,
                                                                                         (const MethodInfo_2F506A0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096);
    v16 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v16 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v16->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UIWidget__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v18,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        0LL);
      static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = System_Linq_Enumerable__Where_object_(
            ComponentsInChildren_object,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v27 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v28 = v26;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v27 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_1 = (System_Func_object__object__o *)v27->static_fields->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v27->static_fields->__9;
      _9__5_1 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_object__object____ctor(
        _9__5_1,
        v30,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        0LL);
      v31 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v31->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v31->__9__5_1, (int64_t)_9__5_1, v32, v33, v34, v35, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v28,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v39 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v38,
                                                   (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v39;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.startButtonTweenTargetCache,
      (int64_t)v39,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v14 = this->fields.startButton;
    if ( !v14 )
LABEL_21:
      sub_1BE4D28(v14, v13);
    v53 = (int64_t)*p_startButtonTweenTargetCache;
    v14->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v14->fields.tweenTargets, v53, v47, v48, v49, v50, v51, v52);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v54);
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
  Il2CppObject *v19; // x24
  void *Instance; // x0
  int64_t UserServantId_k__BackingField; // x1
  DataManager_o *v22; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  System_Collections_Generic_List_int__o *v25; // x25
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  PartyOrganizationUtility_o *p_monitor; // x24
  int max_length; // w8
  unsigned int v34; // w29
  WarBoardPieceData_o *v35; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v37; // x26
  __int64 v38; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  int v42; // w8
  __int64 v43; // x26
  System_Func_object__bool__o **v44; // x23
  WarBoardPieceData_o *v45; // x24
  __int64 v46; // x8
  __int64 v47; // x8
  int32_t *v48; // x8
  int32_t v49; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  System_Collections_Generic_List_int__o *v52; // x1
  UserServantMaster_o *v53; // x0
  System_Collections_Generic_List_int__o *v54; // x25
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  System_Func_object__bool__o *v58; // x25
  System_Collections_Generic_List_T__o *v59; // x24
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v67; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4B64A9E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_UserServantEntity___, warBoardData);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_RestrictionMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v7);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1BE4ACC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v9);
    sub_1BE4ACC(&System_Func_UserServantEntity__bool__TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__, v16);
    sub_1BE4ACC(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo, v17);
    sub_1BE4ACC(&WarBoardIndividualityClassMaster_TypeInfo, v18);
    byte_4B64A9E = 1;
  }
  entity = 0LL;
  v19 = (Il2CppObject *)sub_1BE4D18(WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor(v19, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v22 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_66;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, 0LL);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v19 )
    goto LABEL_66;
  v67 = v19;
  v19[1].monitor = v25;
  p_monitor = (PartyOrganizationUtility_o *)&v19[1].monitor;
  sub_1BE4A70(p_monitor, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  if ( !EditableServantPieces )
    goto LABEL_66;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= max_length )
LABEL_67:
        sub_1BE4D30(Instance, UserServantId_k__BackingField);
      v35 = EditableServantPieces->m_Items[v34];
      if ( !v35 )
        break;
      UserServantId_k__BackingField = v35->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v23 )
          break;
        Instance = DataMasterBase_object__object__long___GetEntity(
                     v23,
                     UserServantId_k__BackingField,
                     (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_monitor->klass;
        v38 = *((_QWORD *)Instance + 10);
        v37 = *((_QWORD *)Instance + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v69.fields.currentCryptoKey = v38;
        *(_QWORD *)&v69.fields.fakeValue = v37;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v69, 0LL);
        if ( !klass )
          break;
        items = klass->fields._items;
        v40 = Method_System_Collections_Generic_List_int__Add__;
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
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          klass->fields._size = size + 1;
          items->m_Items[size + 1] = (int)Instance;
        }
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_22;
    }
LABEL_66:
    sub_1BE4D28(Instance, UserServantId_k__BackingField);
  }
LABEL_22:
  Instance = (void *)WarBoardData__get_FormationLimitCost(warBoardData, 0LL);
  LODWORD(v67[1].klass) = (_DWORD)Instance - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v42 = EditableServantPieces->max_length;
  if ( v42 < 1 )
    return 0;
  v43 = 0LL;
  v44 = (System_Func_object__bool__o **)&v67[2];
  while ( 1 )
  {
    if ( (unsigned int)v43 >= v42 )
      goto LABEL_67;
    v45 = EditableServantPieces->m_Items[v43];
    if ( !v45 )
      goto LABEL_66;
    if ( v45->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v43], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_object_(
                     v22,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_66;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v45->fields._restrictionId_k__BackingField,
                             (const MethodInfo_31FD818 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_object_(
                       v22,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_66;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity[2].monitor,
                       0LL);
          if ( Instance && (v46 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v46 )
              goto LABEL_67;
            v47 = *((_QWORD *)Instance + 4);
            if ( !v47 )
              goto LABEL_66;
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            v48 = (int32_t *)(v47 + 16);
          }
          else
          {
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
              Instance = WarBoardIndividualityClassMaster_TypeInfo;
            }
            v48 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v49 = *v48;
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v49 == static_fields->ALL_CLASS_ID )
          {
            if ( !v23 )
              goto LABEL_66;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v23, 0LL);
          }
          else
          {
            if ( !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v49 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_object_(
                           v22,
                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_66;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0LL);
              if ( !v23 )
                goto LABEL_66;
              v52 = (System_Collections_Generic_List_int__o *)Instance;
              v53 = (UserServantMaster_o *)v23;
            }
            else
            {
              v54 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v54,
                (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v54 )
                goto LABEL_66;
              v55 = v54->fields._items;
              v56 = Method_System_Collections_Generic_List_int__Add__;
              ++v54->fields._version;
              if ( !v55 )
                goto LABEL_66;
              v57 = v54->fields._size;
              if ( (unsigned int)v57 >= v55->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v54,
                  v49,
                  *(const MethodInfo_35CF200 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                v54->fields._size = v57 + 1;
                v55->m_Items[v57 + 1] = v49;
              }
              if ( !v23 )
                goto LABEL_66;
              v53 = (UserServantMaster_o *)v23;
              v52 = v54;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v53, v52, 0LL);
          }
          v58 = *v44;
          v59 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*v44 )
          {
            v58 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v58,
              v67,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              0LL);
            v67[2].klass = (Il2CppClass *)v58;
            sub_1BE4A70((PartyOrganizationUtility_o *)&v67[2], (int64_t)v58, v60, v61, v62, v63, v64, v65);
          }
          Instance = (void *)BasicHelper__Any_object_(
                               v59,
                               (System_Func_T__bool__o *)v58,
                               (const MethodInfo_2F4407C *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v42 = EditableServantPieces->max_length;
    if ( (int)++v43 >= v42 )
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
  struct UILabel_o *currentApLabel; // x19
  int32_t *p_BaseActionPoint; // x0
  __int64 v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x8
  WarBoardData_o *v12; // x20
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  System_String_o *v14; // x1
  int32_t BaseActionPoint; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = ap;
  if ( (byte_4B64A8B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, *(_QWORD *)&ap);
    sub_1BE4ACC(&StringLiteral_1209/*"0"*/, v6);
    byte_4B64A8B = 1;
  }
  BaseActionPoint = 0;
  if ( ap )
  {
    currentApLabel = this->fields.currentApLabel;
    p_BaseActionPoint = &v16;
    goto LABEL_14;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C369A8(v3);
  v10 = *(System_String_o **)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (v10[12].fields._firstChar & 0x100) == 0 )
    v10 = (System_String_o *)sub_1C369A8(v3);
  v11 = **(_QWORD **)&v10[7].fields;
  if ( !v11 || (v12 = *(WarBoardData_o **)(v11 + 440)) == 0LL )
LABEL_19:
    sub_1BE4D28(v10, *(_QWORD *)&ap);
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v11 + 440), 0, 0, 0LL);
  if ( ActionPointEntity && !WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL) )
  {
    v10 = (System_String_o *)this->fields.currentApLabel;
    if ( v10 )
    {
      v14 = (System_String_o *)StringLiteral_1209/*"0"*/;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  currentApLabel = this->fields.currentApLabel;
  BaseActionPoint = WarBoardData__GetBaseActionPoint(v12, 0, 0, 0LL);
  p_BaseActionPoint = &BaseActionPoint;
LABEL_14:
  v10 = System_Int32__ToString((int32_t)p_BaseActionPoint, 0LL);
  if ( !currentApLabel )
    goto LABEL_19;
  v14 = v10;
  v10 = (System_String_o *)currentApLabel;
LABEL_16:
  UILabel__set_text((UILabel_o *)v10, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAPFromSquareIndex(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  WarBoardData_o *Instance; // x0
  System_Collections_Generic_List_HoldReinforcementsData__c *klass; // x8
  WarBoardActionPointEntity_o *ActionPointEntity; // x20
  WarBoardPieceData_o *Piece_36170860; // x0
  WarBoardPieceData_o *v16; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v18; // x21
  const MethodInfo *v19; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v23; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B64A8C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&squareIndex);
    sub_1BE4ACC(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_4B64A8C = 1;
  }
  entity = 0LL;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C369A8(v3);
  Instance = *(WarBoardData_o **)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (BYTE5(Instance[1].fields.squares) & 1) == 0 )
    Instance = (WarBoardData_o *)sub_1C369A8(v3);
  klass = Instance->fields.reinforcementsSaveList->klass;
  if ( !klass )
    goto LABEL_35;
  Instance = (WarBoardData_o *)klass->vtable._8_unknown.method;
  if ( !Instance )
    goto LABEL_35;
  ActionPointEntity = WarBoardData__GetActionPointEntity(Instance, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_35;
  Piece_36170860 = WarBoardData__GetPiece_36170860(Instance, squareIndex, 0LL);
  if ( ActionPointEntity )
  {
    v16 = Piece_36170860;
    HasCost = WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL);
    if ( v16 )
    {
      if ( !HasCost )
      {
        if ( v16->fields._UserServantId_k__BackingField < 1 )
        {
          if ( !WarBoardPieceData__get_IsNpc(v16, 0LL) || !v16->fields._battleServant_k__BackingField )
          {
            v23 = this;
            baseActionPoint = 0;
LABEL_33:
            WarBoardConfigurationUIContoroller__ModifyAP(v23, baseActionPoint, v19);
            return;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          battleServant_k__BackingField = v16->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            v18 = (WarBoardActionPointClassMaster_o *)Instance;
            Instance = (WarBoardData_o *)BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
            if ( v18 )
            {
LABEL_30:
              EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                              v18,
                                              ActionPointEntity,
                                              (int32_t)Instance,
                                              0LL);
              if ( !EntityFromActionPointEntity )
                return;
              baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
              v23 = this;
              goto LABEL_33;
            }
          }
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( Instance )
          {
            if ( !DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                    &entity,
                    v16->fields._UserServantId_k__BackingField,
                    (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_35;
            v18 = (WarBoardActionPointClassMaster_o *)Instance;
            Instance = (WarBoardData_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0LL);
            if ( !v18 )
              goto LABEL_35;
            goto LABEL_30;
          }
        }
LABEL_35:
        sub_1BE4D28(Instance, *(_QWORD *)&squareIndex);
      }
    }
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x8
  WarBoardData_o *v11; // x21
  bool IsPartyCostOver; // w20
  System_String_o *v13; // x0
  UILabel_o *maxCostLabel; // x22
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  UILabel_o *spritLabel; // x22
  System_String_o *v18; // x0
  UILabel_o *currentCostLabel; // x22
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  int32_t FormationLimitCost; // [xsp+8h] [xbp-38h] BYREF
  int32_t CurrentPartyCost_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B64A8A & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_1BE4ACC(&StringLiteral_15630/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v5);
    sub_1BE4ACC(&StringLiteral_15628/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, v6);
    sub_1BE4ACC(&StringLiteral_15629/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v7);
    byte_4B64A8A = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C369A8(v2);
  v9 = *(System_String_o **)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (v9[12].fields._firstChar & 0x100) == 0 )
    v9 = (System_String_o *)sub_1C369A8(v2);
  v10 = **(_QWORD **)&v9[7].fields;
  if ( !v10 )
    goto LABEL_19;
  v11 = *(WarBoardData_o **)(v10 + 440);
  if ( !v11 )
    goto LABEL_19;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(*(WarBoardData_o **)(v10 + 440), 0LL);
  CurrentPartyCost_k__BackingField = v11->fields._CurrentPartyCost_k__BackingField;
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v11, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15628/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = this->fields.maxCostLabel;
  v15 = v13;
  v16 = System_Int32__ToString((int32_t)&FormationLimitCost, 0LL);
  v9 = System_String__Concat_62698808(v15, v16, 0LL);
  if ( !maxCostLabel )
    goto LABEL_19;
  UILabel__set_text(maxCostLabel, v9, 0LL);
  spritLabel = this->fields.spritLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15630/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  v9 = System_String__Concat_62698808(v15, v18, 0LL);
  if ( !spritLabel )
    goto LABEL_19;
  UILabel__set_text(spritLabel, v9, 0LL);
  currentCostLabel = this->fields.currentCostLabel;
  if ( IsPartyCostOver )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15629/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v20 = System_Int32__ToString((int32_t)&CurrentPartyCost_k__BackingField, 0LL);
  v9 = System_String__Concat_62698808(v15, v20, 0LL);
  if ( !currentCostLabel )
LABEL_19:
    sub_1BE4D28(v9, method);
  UILabel__set_text(currentCostLabel, v9, 0LL);
  WarBoardConfigurationUIContoroller__ModifyStartButton(this, v21);
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *startButton; // x20
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  long double v12; // q0
  __int64 v13; // x0
  struct UICommonButton_o *v14; // x0
  __int64 v15; // x8
  __int64 v16; // x8
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B64A88 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    byte_4B64A88 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C369A8(v12);
    v14 = *(struct UICommonButton_o **)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (BYTE1(v14[2].fields.specifyPressedColor.fields.g) & 1) == 0 )
      v14 = (struct UICommonButton_o *)sub_1C369A8(v12);
    v15 = **(_QWORD **)&v14[1].fields.specifyHoverColor.fields.b;
    if ( !v15 )
      goto LABEL_19;
    v16 = *(_QWORD *)(v15 + 440);
    if ( !v16 )
      goto LABEL_19;
    v14 = this->fields.startButton;
    if ( *(int *)(v16 + 212) >= 1 )
    {
      if ( v14 )
      {
        startButtonTweenTargetCache = this->fields.startButtonTweenTargetCache;
        v14->fields.tweenTargets = startButtonTweenTargetCache;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v14->fields.tweenTargets,
          (int64_t)startButtonTweenTargetCache,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        v14 = this->fields.startButton;
        if ( v14 )
        {
          UICommonButton__SetButtonEnable(v14, 1, 1, 0LL);
          return;
        }
      }
LABEL_19:
      sub_1BE4D28(v14, v5);
    }
    if ( !v14 )
      goto LABEL_19;
    UICommonButton__SetButtonEnable(v14, 0, 1, 0LL);
    v14 = this->fields.startButton;
    if ( !v14 )
      goto LABEL_19;
    v14->fields.tweenTargets = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v14->fields.tweenTargets, 0LL, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyUserEquip(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  long double v9; // q0
  __int64 v10; // x8
  __int64 v11; // x8
  Il2CppObject *Entity; // x0
  int32_t genderImageId; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-30h] BYREF
  __int64 maxLv; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B64A8D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEquipMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B64A8D = 1;
  }
  equipName = 0LL;
  maxLv = 0LL;
  detail = 0LL;
  genderImageId = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C369A8(v9);
  Instance = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(Instance + 309) & 1) == 0 )
    Instance = sub_1C369A8(v9);
  v11 = **(_QWORD **)(Instance + 184);
  if ( !v11 )
    goto LABEL_15;
  Instance = *(_QWORD *)(v11 + 440);
  if ( !Instance )
    goto LABEL_15;
  Instance = WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
    sub_1BE4D28(Instance, v7);
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

  if ( (byte_4B64A94 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestHintDialogOpenManager_TypeInfo, callback);
    byte_4B64A94 = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_1BE4A70(
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
      sub_1BE4D28(openType, v10);
  }
  v17 = v16[4];
  v18 = v16[5];
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  if ( QuestHintDialogOpenManager__IsQuestHintOpen(v17, v18, 0LL) )
    goto LABEL_8;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__SetQuestInfo(v17, v18, 0LL);
  QuestHintDialogOpenManager__WriteData(0LL);
LABEL_22:
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  long double v11; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  CommonUI_o *v14; // x20
  System_Action_o *v15; // x21

  if ( (byte_4B64A90 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__, v5);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__, v6);
    byte_4B64A90 = 1;
  }
  v7 = Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C369A8(v11);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C369A8(v11);
  v14 = **(CommonUI_o ***)(v13 + 184);
  v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v14 )
LABEL_13:
    sub_1BE4D28(Instance, v10);
  CommonUI__OpenClassCompatibilityMenu(v14, v15, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_4B64A93 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller_OnClickHintButton__, method);
    byte_4B64A93 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickHintButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickHintButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.endCallbackNoticeHint, 0LL, v8, v9, v10, v11, v12, v13);
    WarBoardConfigurationUIContoroller__OpenHintDialog(this, v14);
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
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  long double v16; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  CommonUI_o *v19; // x20
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  System_String_o *v23; // x24
  CommonConfirmDialog_ClickDelegate_o *v24; // x25

  if ( (byte_4B64A9C & 1) == 0 )
  {
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__, v6);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__, v7);
    sub_1BE4ACC(&StringLiteral_15637/*"WARBOARD_RETURN_CONFIRM_NO"*/, v8);
    sub_1BE4ACC(&StringLiteral_15636/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, v9);
    sub_1BE4ACC(&StringLiteral_15639/*"WARBOARD_RETURN_CONFIRM_YES"*/, v10);
    sub_1BE4ACC(&StringLiteral_15638/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, v11);
    byte_4B64A9C = 1;
  }
  v12 = Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BE4AE4(Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C369A8(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C369A8(v16);
  v19 = **(CommonUI_o ***)(v18 + 184);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15638/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15636/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15639/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_15637/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v24,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v19 )
LABEL_15:
    sub_1BE4D28(Instance, v15);
  CommonUI__OpenConfirmDialog_30873676(v19, v20, v21, v22, v23, 0, v24, 0, 28, 180.0, 43.0, 0, 0, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B64A9D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v5);
    byte_4B64A9D = 1;
  }
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B61A5B )
    {
      sub_1BE4ACC(&TerminalPramsManager_TypeInfo, isDecide);
      byte_4B61A5B = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_15:
      sub_1BE4D28(Instance, v8);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B64A98 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, v3);
    byte_4B64A98 = 1;
  }
  v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  WarBoardManager_o *Instance; // x0
  __int64 v22; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x20
  _BOOL8 IsPartyCostOver; // x0
  const MethodInfo *v25; // x2
  Il2CppObject *v26; // x19
  System_String_o *v27; // x20
  System_String_o *v28; // x21
  WarBoardConfigurationUIContoroller___c_c *v29; // x8
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v31; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool IsEnabledPutOnFreeSquare; // w22
  Il2CppObject *v40; // x20
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  System_String_o *v43; // x23
  System_String_o *v44; // x24
  CommonConfirmDialog_ClickDelegate_o *v45; // x25
  System_String_o *v46; // x22
  System_String_o *v47; // x23
  System_String_o *v48; // x24
  CommonConfirmDialog_ClickDelegate_o *v49; // x25
  System_Nullable_float__o v50; // [xsp+60h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v53; // 0:x0.8

  if ( (byte_4B64A9A & 1) == 0 )
  {
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Nullable_float___ctor__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__, v8);
    sub_1BE4ACC(&WarBoardConfigurationUIContoroller___c_TypeInfo, v9);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller_OnClickStartButton__, v10);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__, v11);
    sub_1BE4ACC(&StringLiteral_15626/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, v12);
    sub_1BE4ACC(&StringLiteral_15645/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, v13);
    sub_1BE4ACC(&StringLiteral_15642/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, v14);
    sub_1BE4ACC(&StringLiteral_15627/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, v15);
    sub_1BE4ACC(&StringLiteral_15644/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, v16);
    sub_1BE4ACC(&StringLiteral_15643/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, v17);
    sub_1BE4ACC(&StringLiteral_15646/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, v18);
    byte_4B64A9A = 1;
  }
  v19 = Method_WarBoardConfigurationUIContoroller_OnClickStartButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickStartButton__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BE4AE4(Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_29;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(Instance->fields._warBoardData_k__BackingField, 0LL);
  if ( IsPartyCostOver )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15627/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15626/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
      v29 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v29 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      _9__41_0 = v29->static_fields->__9__41_0;
      if ( !_9__41_0 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = WarBoardConfigurationUIContoroller___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_1BE4D18(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v31,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        static_fields->__9__41_0 = _9__41_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
          (int64_t)_9__41_0,
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
        (const MethodInfo_370B430 *)Method_System_Nullable_float___ctor__);
      v53 = (System_Nullable_float__o)&v50;
      v50 = 0LL;
      System_Nullable_float____ctor(v53, 15.0, (const MethodInfo_370B430 *)Method_System_Nullable_float___ctor__);
      if ( v26 )
      {
        CommonUI__OpenNotificationDialog_30876232(
          (CommonUI_o *)v26,
          v27,
          v28,
          _9__41_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v50,
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
    sub_1BE4D28(Instance, v22);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)IsPartyCostOver,
                               warBoardData_k__BackingField,
                               v25);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_15645/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
  if ( IsEnabledPutOnFreeSquare )
  {
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_15643/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_15646/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_15644/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v45 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v45,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v40 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_30873676((CommonUI_o *)v40, v41, v42, v43, v44, 1, v45, 0, 28, 180.0, 40.0, 0, 0, 0LL);
  }
  else
  {
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_15642/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_15646/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_15644/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v49 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v49,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v40 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_30873676((CommonUI_o *)v40, v41, v46, v47, v48, 1, v49, 0, 28, 180.0, 43.0, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B64A9B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_4B64A9B = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_1BE4D28(Instance, v6);
  }
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4B64A8E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__, v3);
    byte_4B64A8E = 1;
  }
  v4 = Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BE4AE4(Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C369A8(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C369A8(v7);
  Instance = **(Il2CppObject ***)(v9 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1BE4D28(Instance, v6);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  long double v5; // q0
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4B64A91 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    byte_4B64A91 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C369A8(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C369A8(v5);
  Instance = **(Il2CppObject ***)(v7 + 184);
  if ( !Instance )
LABEL_10:
    sub_1BE4D28(Instance, v4);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B64A9F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_14737/*"TopBase/BackButton"*/, method);
    byte_4B64A9F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42781316(transform, (System_String_o *)StringLiteral_14737/*"TopBase/BackButton"*/, 0LL);
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
  Il2CppObject *v13; // x23
  ScrollMessageDialog_ClickDelegate_o *v14; // x24

  if ( (byte_4B64A95 & 1) == 0 )
  {
    sub_1BE4ACC(&ScrollMessageDialog_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1BE4ACC(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__, v5);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v6);
    byte_4B64A95 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = (ScrollMessageDialog_ClickDelegate_o *)sub_1BE4D18(ScrollMessageDialog_ClickDelegate_TypeInfo);
        ScrollMessageDialog_ClickDelegate___ctor(
          v14,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0LL);
        if ( v13 )
        {
          CommonUI__OpenScrollMessageDialog((CommonUI_o *)v13, title, message, leftIndent, v14, 0, 1, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1BE4D28(Instance, v8);
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
    sub_1BE4D28(0LL, isActive);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *newRuleBg; // x20
  __int64 v6; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_4B64A97 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_1BE4ACC(&StringLiteral_20440/*"icon_noticebg_01"*/, v4);
    byte_4B64A97 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_20440/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0LL), !newRuleObject) )
  {
    sub_1BE4D28(Instance, v6);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B64AA0 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardConfigurationUIContoroller___c_TypeInfo, v1);
    byte_4B64AA0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  if ( (byte_4B64AA1 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, x);
    byte_4B64AA1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


UnityEngine_GameObject_o *__fastcall WarBoardConfigurationUIContoroller___c___InitStartButton_b__5_1(
        WarBoardConfigurationUIContoroller___c_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__41_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B64AA2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, ok);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    byte_4B64AA2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BE4D28(Instance, v5);
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
  if ( (byte_4B64AA3 & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_1BE4ACC(
                                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                                           svt);
    byte_4B64AA3 = 1;
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
                (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_1BE4D28(this, svt);
  }
  return 0;
}