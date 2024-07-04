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
    sub_1B00F28(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48E0850 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_48E0850 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
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

  if ( (byte_48E0853 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B00CCC(&WarBoardManager_TypeInfo, v2);
    byte_48E0853 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1B00F28(Instance, v4);
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
    sub_1B00F28(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__EndNoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_endCallbackNoticeHint; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *endCallbackNoticeHint; // t1

  endCallbackNoticeHint = this->fields.endCallbackNoticeHint;
  p_endCallbackNoticeHint = (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackNoticeHint;
  v5 = endCallbackNoticeHint;
  if ( endCallbackNoticeHint )
  {
    p_endCallbackNoticeHint->klass = 0LL;
    sub_1B00C70(p_endCallbackNoticeHint, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
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

  if ( (byte_48E0849 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v3);
    sub_1B00CCC(&CondType_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_17429/*"buttontxt_formation_20"*/, v5);
    byte_48E0849 = 1;
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
  if ( CondType__IsQuestClear_36399468(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17429/*"buttontxt_formation_20"*/, 0LL);
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
  UnityEngine_Object_o *_68037584; // x0
  UnityEngine_Object_o *v11; // x20
  UIFont_o *Component_object; // x0
  const MethodInfo *v13; // x1
  UIFont_o *v14; // x20
  const MethodInfo *v15; // x2
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_48E0843 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_1B00CCC(&UnityEngine_GameObject_var, v3);
    sub_1B00CCC(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&System_Type_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_6705/*"Fonts/FGO-NumberFont-02"*/, v7);
    byte_48E0843 = 1;
  }
  v8 = (int)UnityEngine_GameObject_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  _68037584 = UnityEngine_Resources__Load_68037584((System_String_o *)StringLiteral_6705/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _68037584 )
  {
    if ( (UnityEngine_GameObject_c *)_68037584->klass == UnityEngine_GameObject_TypeInfo )
      v11 = _68037584;
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
                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
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
      sub_1B00F28(Component_object, v13);
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

  if ( (byte_48E084C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1B00CCC(&DataManager_TypeInfo, v4);
    sub_1B00CCC(&QuestHintDialogOpenManager_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    byte_48E084C = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  hintButtonObj = *(QuestPhaseEntity_o **)&hintButtonObj[5].fields.friendshipExp;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( WarBoardData__GetPartySkillId((WarBoardData_o *)hintButtonObj, 0LL) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  v8 = *(_QWORD *)&hintButtonObj[5].fields.friendshipExp;
  if ( !v8 )
    goto LABEL_30;
  v9 = *(_QWORD *)(v8 + 104);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestHintMaster___);
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
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_1B00F28(hintButtonObj, method);
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  WarBoardConfigurationUIContoroller___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__object__o *_9__5_1; // x21
  Il2CppObject *v26; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  struct UnityEngine_GameObject_array *v31; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  struct UnityEngine_GameObject_array *v37; // x1
  const MethodInfo *v38; // x1

  if ( (byte_48E0841 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____74599784, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___, v3);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_GameObject___, v4);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_UIWidget___, v5);
    sub_1B00CCC(&System_Func_UIWidget__GameObject__TypeInfo, v6);
    sub_1B00CCC(&System_Func_UIWidget__bool__TypeInfo, v7);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__, v9);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__, v10);
    sub_1B00CCC(&WarBoardConfigurationUIContoroller___c_TypeInfo, v11);
    byte_48E0841 = 1;
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
                                                                                         (const MethodInfo_2D5A1A0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____74599784);
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
      _9__5_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_UIWidget__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v18,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        0LL);
      static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v20, v21);
    }
    v22 = System_Linq_Enumerable__Where_object_(
            ComponentsInChildren_object,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v23 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v24 = v22;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v23 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_1 = (System_Func_object__object__o *)v23->static_fields->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__5_1 = (System_Func_object__object__o *)sub_1B00F18(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_object__object____ctor(
        _9__5_1,
        v26,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        0LL);
      v27 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v27->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v27->__9__5_1, (int32_t)_9__5_1, v28, v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v24,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_2D8FA10 *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v31 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v30,
                                                   (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v31;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.startButtonTweenTargetCache, (int32_t)v31, v33, v34);
    v14 = this->fields.startButton;
    if ( !v14 )
LABEL_21:
      sub_1B00F28(v14, v13);
    v37 = *p_startButtonTweenTargetCache;
    v14->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->fields.tweenTargets, (int32_t)v37, v35, v36);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v38);
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
  int32_t v26; // w2
  int32_t v27; // w3
  ServantStatusBattleListViewItem_o *p_monitor; // x24
  int max_length; // w8
  unsigned int v30; // w29
  WarBoardPieceData_o *v31; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v33; // x26
  __int64 v34; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int v38; // w8
  __int64 v39; // x26
  System_Func_object__bool__o **v40; // x23
  WarBoardPieceData_o *v41; // x24
  __int64 v42; // x8
  __int64 v43; // x8
  int32_t *v44; // x8
  int32_t v45; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  System_Collections_Generic_List_int__o *v48; // x1
  UserServantMaster_o *v49; // x0
  System_Collections_Generic_List_int__o *v50; // x25
  struct System_Int32_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  System_Func_object__bool__o *v54; // x25
  System_Collections_Generic_List_T__o *v55; // x24
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v59; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_48E0858 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_UserServantEntity___, warBoardData);
    sub_1B00CCC(&Method_DataManager_GetMasterData_RestrictionMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v7);
    sub_1B00CCC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B00CCC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v9);
    sub_1B00CCC(&System_Func_UserServantEntity__bool__TypeInfo, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__, v16);
    sub_1B00CCC(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo, v17);
    sub_1B00CCC(&WarBoardIndividualityClassMaster_TypeInfo, v18);
    byte_48E0858 = 1;
  }
  entity = 0LL;
  v19 = (Il2CppObject *)sub_1B00F18(WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor(v19, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v22 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_66;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, 0LL);
  v25 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v19 )
    goto LABEL_66;
  v59 = v19;
  v19[1].monitor = v25;
  p_monitor = (ServantStatusBattleListViewItem_o *)&v19[1].monitor;
  sub_1B00C70(p_monitor, (int32_t)v25, v26, v27);
  if ( !EditableServantPieces )
    goto LABEL_66;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
LABEL_67:
        sub_1B00F30(Instance, UserServantId_k__BackingField);
      v31 = EditableServantPieces->m_Items[v30];
      if ( !v31 )
        break;
      UserServantId_k__BackingField = v31->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v23 )
          break;
        Instance = DataMasterBase_object__object__long___GetEntity(
                     v23,
                     UserServantId_k__BackingField,
                     (const MethodInfo_2FE6BF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_monitor->klass;
        v34 = *((_QWORD *)Instance + 10);
        v33 = *((_QWORD *)Instance + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = v34;
        *(_QWORD *)&v61.fields.fakeValue = v33;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v61, 0LL);
        if ( !klass )
          break;
        items = klass->fields._items;
        v36 = Method_System_Collections_Generic_List_int__Add__;
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
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          klass->fields._size = size + 1;
          items->m_Items[size + 1] = (int)Instance;
        }
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_22;
    }
LABEL_66:
    sub_1B00F28(Instance, UserServantId_k__BackingField);
  }
LABEL_22:
  Instance = (void *)WarBoardData__get_FormationLimitCost(warBoardData, 0LL);
  LODWORD(v59[1].klass) = (_DWORD)Instance - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v38 = EditableServantPieces->max_length;
  if ( v38 < 1 )
    return 0;
  v39 = 0LL;
  v40 = (System_Func_object__bool__o **)&v59[2];
  while ( 1 )
  {
    if ( (unsigned int)v39 >= v38 )
      goto LABEL_67;
    v41 = EditableServantPieces->m_Items[v39];
    if ( !v41 )
      goto LABEL_66;
    if ( v41->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v39], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_object_(
                     v22,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_66;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v41->fields._restrictionId_k__BackingField,
                             (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_object_(
                       v22,
                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_66;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity[2].monitor,
                       0LL);
          if ( Instance && (v42 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v42 )
              goto LABEL_67;
            v43 = *((_QWORD *)Instance + 4);
            if ( !v43 )
              goto LABEL_66;
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            v44 = (int32_t *)(v43 + 16);
          }
          else
          {
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
              Instance = WarBoardIndividualityClassMaster_TypeInfo;
            }
            v44 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v45 = *v44;
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v45 == static_fields->ALL_CLASS_ID )
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
            if ( v45 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_object_(
                           v22,
                           (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_66;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0LL);
              if ( !v23 )
                goto LABEL_66;
              v48 = (System_Collections_Generic_List_int__o *)Instance;
              v49 = (UserServantMaster_o *)v23;
            }
            else
            {
              v50 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v50,
                (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v50 )
                goto LABEL_66;
              v51 = v50->fields._items;
              v52 = Method_System_Collections_Generic_List_int__Add__;
              ++v50->fields._version;
              if ( !v51 )
                goto LABEL_66;
              v53 = v50->fields._size;
              if ( (unsigned int)v53 >= v51->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v50,
                  v45,
                  *(const MethodInfo_33A49AC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
              }
              else
              {
                v50->fields._size = v53 + 1;
                v51->m_Items[v53 + 1] = v45;
              }
              if ( !v23 )
                goto LABEL_66;
              v49 = (UserServantMaster_o *)v23;
              v48 = v50;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v49, v48, 0LL);
          }
          v54 = *v40;
          v55 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*v40 )
          {
            v54 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v54,
              v59,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              0LL);
            v59[2].klass = (Il2CppClass *)v54;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v59[2], (int32_t)v54, v56, v57);
          }
          Instance = (void *)BasicHelper__Any_object_(
                               v55,
                               (System_Func_T__bool__o *)v54,
                               (const MethodInfo_2D4E780 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v38 = EditableServantPieces->max_length;
    if ( (int)++v39 >= v38 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAP(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t ap,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UILabel_o *currentApLabel; // x19
  int32_t *p_BaseActionPoint; // x0
  __int64 v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x8
  WarBoardData_o *v11; // x20
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  System_String_o *v13; // x1
  int32_t BaseActionPoint; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = ap;
  if ( (byte_48E0845 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, *(_QWORD *)&ap);
    sub_1B00CCC(&StringLiteral_1207/*"0"*/, v5);
    byte_48E0845 = 1;
  }
  BaseActionPoint = 0;
  if ( ap )
  {
    currentApLabel = this->fields.currentApLabel;
    p_BaseActionPoint = &v15;
    goto LABEL_14;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1B52BA8(v8);
  v9 = *(System_String_o **)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (v9[12].fields._firstChar & 0x100) == 0 )
    v9 = (System_String_o *)sub_1B52BA8(v9);
  v10 = **(_QWORD **)&v9[7].fields;
  if ( !v10 || (v11 = *(WarBoardData_o **)(v10 + 440)) == 0LL )
LABEL_19:
    sub_1B00F28(v9, *(_QWORD *)&ap);
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v10 + 440), 0, 0, 0LL);
  if ( ActionPointEntity && !WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL) )
  {
    v9 = (System_String_o *)this->fields.currentApLabel;
    if ( v9 )
    {
      v13 = (System_String_o *)StringLiteral_1207/*"0"*/;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  currentApLabel = this->fields.currentApLabel;
  BaseActionPoint = WarBoardData__GetBaseActionPoint(v11, 0, 0, 0LL);
  p_BaseActionPoint = &BaseActionPoint;
LABEL_14:
  v9 = System_Int32__ToString((int32_t)p_BaseActionPoint, 0LL);
  if ( !currentApLabel )
    goto LABEL_19;
  v13 = v9;
  v9 = (System_String_o *)currentApLabel;
LABEL_16:
  UILabel__set_text((UILabel_o *)v9, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAPFromSquareIndex(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  WarBoardData_o *Instance; // x0
  System_Collections_Generic_List_HoldReinforcementsData__c *klass; // x8
  WarBoardActionPointEntity_o *ActionPointEntity; // x20
  WarBoardPieceData_o *Piece_34206296; // x0
  WarBoardPieceData_o *v15; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v17; // x21
  const MethodInfo *v18; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E0846 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&squareIndex);
    sub_1B00CCC(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v5);
    sub_1B00CCC(&DataManager_TypeInfo, v6);
    sub_1B00CCC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_48E0846 = 1;
  }
  entity = 0LL;
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1B52BA8(v10);
  Instance = *(WarBoardData_o **)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (BYTE5(Instance[1].fields.squares) & 1) == 0 )
    Instance = (WarBoardData_o *)sub_1B52BA8(Instance);
  klass = Instance->fields.reinforcementsSaveList->klass;
  if ( !klass )
    goto LABEL_35;
  Instance = (WarBoardData_o *)klass->vtable._8_unknown.method;
  if ( !Instance )
    goto LABEL_35;
  ActionPointEntity = WarBoardData__GetActionPointEntity(Instance, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_35;
  Piece_34206296 = WarBoardData__GetPiece_34206296(Instance, squareIndex, 0LL);
  if ( ActionPointEntity )
  {
    v15 = Piece_34206296;
    HasCost = WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL);
    if ( v15 )
    {
      if ( !HasCost )
      {
        if ( v15->fields._UserServantId_k__BackingField < 1 )
        {
          if ( !WarBoardPieceData__get_IsNpc(v15, 0LL) || !v15->fields._battleServant_k__BackingField )
          {
            v22 = this;
            baseActionPoint = 0;
LABEL_33:
            WarBoardConfigurationUIContoroller__ModifyAP(v22, baseActionPoint, v18);
            return;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          battleServant_k__BackingField = v15->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            v17 = (WarBoardActionPointClassMaster_o *)Instance;
            Instance = (WarBoardData_o *)BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
            if ( v17 )
            {
LABEL_30:
              EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                              v17,
                                              ActionPointEntity,
                                              (int32_t)Instance,
                                              0LL);
              if ( !EntityFromActionPointEntity )
                return;
              baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
              v22 = this;
              goto LABEL_33;
            }
          }
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( Instance )
          {
            if ( !DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                    &entity,
                    v15->fields._UserServantId_k__BackingField,
                    (const MethodInfo_2FE6C4C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_35;
            v17 = (WarBoardActionPointClassMaster_o *)Instance;
            Instance = (WarBoardData_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0LL);
            if ( !v17 )
              goto LABEL_35;
            goto LABEL_30;
          }
        }
LABEL_35:
        sub_1B00F28(Instance, *(_QWORD *)&squareIndex);
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
  __int64 v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x8
  WarBoardData_o *v10; // x21
  bool IsPartyCostOver; // w20
  System_String_o *v12; // x0
  UILabel_o *maxCostLabel; // x22
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  UILabel_o *spritLabel; // x22
  System_String_o *v17; // x0
  UILabel_o *currentCostLabel; // x22
  System_String_o *v19; // x0
  const MethodInfo *v20; // x1
  int32_t FormationLimitCost; // [xsp+8h] [xbp-38h] BYREF
  int32_t CurrentPartyCost_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_48E0844 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    sub_1B00CCC(&StringLiteral_15193/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v4);
    sub_1B00CCC(&StringLiteral_15191/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, v5);
    sub_1B00CCC(&StringLiteral_15192/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v6);
    byte_48E0844 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1B52BA8(v7);
  v8 = *(System_String_o **)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (v8[12].fields._firstChar & 0x100) == 0 )
    v8 = (System_String_o *)sub_1B52BA8(v8);
  v9 = **(_QWORD **)&v8[7].fields;
  if ( !v9 )
    goto LABEL_19;
  v10 = *(WarBoardData_o **)(v9 + 440);
  if ( !v10 )
    goto LABEL_19;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(*(WarBoardData_o **)(v9 + 440), 0LL);
  CurrentPartyCost_k__BackingField = v10->fields._CurrentPartyCost_k__BackingField;
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v10, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15191/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = this->fields.maxCostLabel;
  v14 = v12;
  v15 = System_Int32__ToString((int32_t)&FormationLimitCost, 0LL);
  v8 = System_String__Concat_60325748(v14, v15, 0LL);
  if ( !maxCostLabel )
    goto LABEL_19;
  UILabel__set_text(maxCostLabel, v8, 0LL);
  spritLabel = this->fields.spritLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15193/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  v8 = System_String__Concat_60325748(v14, v17, 0LL);
  if ( !spritLabel )
    goto LABEL_19;
  UILabel__set_text(spritLabel, v8, 0LL);
  currentCostLabel = this->fields.currentCostLabel;
  if ( IsPartyCostOver )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15192/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v19 = System_Int32__ToString((int32_t)&CurrentPartyCost_k__BackingField, 0LL);
  v8 = System_String__Concat_60325748(v14, v19, 0LL);
  if ( !currentCostLabel )
LABEL_19:
    sub_1B00F28(v8, method);
  UILabel__set_text(currentCostLabel, v8, 0LL);
  WarBoardConfigurationUIContoroller__ModifyStartButton(this, v20);
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *startButton; // x20
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x0
  struct UICommonButton_o *v9; // x0
  __int64 v10; // x8
  __int64 v11; // x8
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_48E0842 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    byte_48E0842 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1B52BA8(v8);
    v9 = *(struct UICommonButton_o **)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (BYTE1(v9[2].fields.specifyPressedColor.fields.g) & 1) == 0 )
      v9 = (struct UICommonButton_o *)sub_1B52BA8(v9);
    v10 = **(_QWORD **)&v9[1].fields.specifyHoverColor.fields.b;
    if ( !v10 )
      goto LABEL_19;
    v11 = *(_QWORD *)(v10 + 440);
    if ( !v11 )
      goto LABEL_19;
    v9 = this->fields.startButton;
    if ( *(int *)(v11 + 212) >= 1 )
    {
      if ( v9 )
      {
        startButtonTweenTargetCache = this->fields.startButtonTweenTargetCache;
        v9->fields.tweenTargets = startButtonTweenTargetCache;
        sub_1B00C70(
          (ServantStatusBattleListViewItem_o *)&v9->fields.tweenTargets,
          (int32_t)startButtonTweenTargetCache,
          v6,
          v7);
        v9 = this->fields.startButton;
        if ( v9 )
        {
          UICommonButton__SetButtonEnable(v9, 1, 1, 0LL);
          return;
        }
      }
LABEL_19:
      sub_1B00F28(v9, v5);
    }
    if ( !v9 )
      goto LABEL_19;
    UICommonButton__SetButtonEnable(v9, 0, 1, 0LL);
    v9 = this->fields.startButton;
    if ( !v9 )
      goto LABEL_19;
    v9->fields.tweenTargets = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v9->fields.tweenTargets, 0, v13, v14);
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
  __int64 v9; // x8
  __int64 v10; // x8
  Il2CppObject *Entity; // x0
  int32_t genderImageId; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-30h] BYREF
  __int64 maxLv; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_48E0847 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserEquipMaster___, method);
    sub_1B00CCC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48E0847 = 1;
  }
  equipName = 0LL;
  maxLv = 0LL;
  detail = 0LL;
  genderImageId = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1B52BA8(v9);
  Instance = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(Instance + 309) & 1) == 0 )
    Instance = sub_1B52BA8(Instance);
  v10 = **(_QWORD **)(Instance + 184);
  if ( !v10 )
    goto LABEL_15;
  Instance = *(_QWORD *)(v10 + 440);
  if ( !Instance )
    goto LABEL_15;
  Instance = WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_2FE6BF8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
    sub_1B00F28(Instance, v7);
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__NoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  struct QuestHintEntity_o *v10; // x8
  QuestPhaseEntity_o *openType; // x0
  _DWORD *v12; // x8
  int32_t v13; // w20

  if ( (byte_48E084E & 1) == 0 )
  {
    sub_1B00CCC(&QuestHintDialogOpenManager_TypeInfo, callback);
    byte_48E084E = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackNoticeHint,
    (int32_t)callback,
    (int32_t)method,
    v3);
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
      WarBoardConfigurationUIContoroller__EndNoticeHint(this, v6);
      return;
    }
    message = QuestPhaseEntity__getHintMessage(questPhaseEntity, 0LL);
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    goto LABEL_8;
  v10 = this->fields.questHintEntity;
  if ( v10 )
  {
    openType = (QuestPhaseEntity_o *)(unsigned int)v10->fields.openType;
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
  v12 = this->fields.questHintEntity;
  if ( !v12 )
  {
    v12 = this->fields.questPhaseEntity;
    if ( !v12 )
LABEL_23:
      sub_1B00F28(openType, v6);
  }
  v13 = v12[4];
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  if ( QuestHintDialogOpenManager__IsQuestHintOpen(v13, 0LL) )
    goto LABEL_8;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__SetQuestId(v13, 0LL);
  QuestHintDialogOpenManager__WriteData(0LL);
LABEL_22:
  WarBoardConfigurationUIContoroller__OpenHintDialog(this, v6);
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
  __int64 v11; // x0
  __int64 v12; // x0
  CommonUI_o *v13; // x20
  System_Action_o *v14; // x21

  if ( (byte_48E084A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__, v5);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__, v6);
    byte_48E084A = 1;
  }
  v7 = Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B00CE4(Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1B52BA8(v11);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1B52BA8(v12);
  v13 = **(CommonUI_o ***)(v12 + 184);
  v14 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v13 )
LABEL_13:
    sub_1B00F28(Instance, v10);
  CommonUI__OpenClassCompatibilityMenu(v13, v14, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1

  if ( (byte_48E084D & 1) == 0 )
  {
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller_OnClickHintButton__, method);
    byte_48E084D = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickHintButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickHintButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.endCallbackNoticeHint, 0, v8, v9);
    WarBoardConfigurationUIContoroller__OpenHintDialog(this, v10);
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
  __int64 v16; // x0
  __int64 v17; // x0
  CommonUI_o *v18; // x20
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  System_String_o *v21; // x23
  System_String_o *v22; // x24
  CommonConfirmDialog_ClickDelegate_o *v23; // x25

  if ( (byte_48E0856 & 1) == 0 )
  {
    sub_1B00CCC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__, v6);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__, v7);
    sub_1B00CCC(&StringLiteral_15200/*"WARBOARD_RETURN_CONFIRM_NO"*/, v8);
    sub_1B00CCC(&StringLiteral_15199/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, v9);
    sub_1B00CCC(&StringLiteral_15202/*"WARBOARD_RETURN_CONFIRM_YES"*/, v10);
    sub_1B00CCC(&StringLiteral_15201/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, v11);
    byte_48E0856 = 1;
  }
  v12 = Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B00CE4(Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1B52BA8(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1B52BA8(v17);
  v18 = **(CommonUI_o ***)(v17 + 184);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15201/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15199/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15202/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15200/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v18 )
LABEL_15:
    sub_1B00F28(Instance, v15);
  CommonUI__OpenConfirmDialog_29936744(v18, v19, v20, v21, v22, 0, v23, 0, 28, 180.0, 43.0, 0, 0, 0LL);
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

  if ( (byte_48E0857 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v5);
    byte_48E0857 = 1;
  }
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_48DE134 )
    {
      sub_1B00CCC(&TerminalPramsManager_TypeInfo, isDecide);
      byte_48DE134 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_15:
      sub_1B00F28(Instance, v8);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  const MethodInfo *v5; // x1

  if ( (byte_48E0852 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, v3);
    byte_48E0852 = 1;
  }
  v4 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v4, v5);
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
  int32_t v33; // w2
  int32_t v34; // w3
  bool IsEnabledPutOnFreeSquare; // w22
  Il2CppObject *v36; // x20
  System_String_o *v37; // x21
  System_String_o *v38; // x22
  System_String_o *v39; // x23
  System_String_o *v40; // x24
  CommonConfirmDialog_ClickDelegate_o *v41; // x25
  System_String_o *v42; // x22
  System_String_o *v43; // x23
  System_String_o *v44; // x24
  CommonConfirmDialog_ClickDelegate_o *v45; // x25
  System_Nullable_float__o v46; // [xsp+60h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v49; // 0:x0.8

  if ( (byte_48E0854 & 1) == 0 )
  {
    sub_1B00CCC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B00CCC(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&Method_System_Nullable_float___ctor__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__, v8);
    sub_1B00CCC(&WarBoardConfigurationUIContoroller___c_TypeInfo, v9);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller_OnClickStartButton__, v10);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__, v11);
    sub_1B00CCC(&StringLiteral_15189/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, v12);
    sub_1B00CCC(&StringLiteral_15208/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, v13);
    sub_1B00CCC(&StringLiteral_15205/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, v14);
    sub_1B00CCC(&StringLiteral_15190/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, v15);
    sub_1B00CCC(&StringLiteral_15207/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, v16);
    sub_1B00CCC(&StringLiteral_15206/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, v17);
    sub_1B00CCC(&StringLiteral_15209/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, v18);
    byte_48E0854 = 1;
  }
  v19 = Method_WarBoardConfigurationUIContoroller_OnClickStartButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickStartButton__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B00CE4(Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_29;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(Instance->fields._warBoardData_k__BackingField, 0LL);
  if ( IsPartyCostOver )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15190/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15189/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
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
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_1B00F18(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v31,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        static_fields->__9__41_0 = _9__41_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v33, v34);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0LL;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_34E0930 *)Method_System_Nullable_float___ctor__);
      v49 = (System_Nullable_float__o)&v46;
      v46 = 0LL;
      System_Nullable_float____ctor(v49, 15.0, (const MethodInfo_34E0930 *)Method_System_Nullable_float___ctor__);
      if ( v26 )
      {
        CommonUI__OpenNotificationDialog_29939268(
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
          v46,
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
    sub_1B00F28(Instance, v22);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)IsPartyCostOver,
                               warBoardData_k__BackingField,
                               v25);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_15208/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
  if ( IsEnabledPutOnFreeSquare )
  {
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_15206/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_15209/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_15207/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v41 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v41,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v36 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_29936744((CommonUI_o *)v36, v37, v38, v39, v40, 1, v41, 0, 28, 180.0, 40.0, 0, 0, 0LL);
  }
  else
  {
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_15205/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_15209/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_15207/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v45 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v45,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v36 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_29936744((CommonUI_o *)v36, v37, v42, v43, v44, 1, v45, 0, 28, 180.0, 43.0, 0, 0, 0LL);
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

  if ( (byte_48E0855 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_48E0855 = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_1B00F28(Instance, v6);
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
  __int64 v7; // x0
  __int64 v8; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_48E0848 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__, v3);
    byte_48E0848 = 1;
  }
  v4 = Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B00CE4(Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1B52BA8(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1B52BA8(v8);
  Instance = **(Il2CppObject ***)(v8 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1B00F28(Instance, v6);
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
  __int64 v5; // x0
  __int64 v6; // x0

  if ( (byte_48E084B & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    byte_48E084B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1B52BA8(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1B52BA8(v6);
  Instance = **(Il2CppObject ***)(v6 + 184);
  if ( !Instance )
LABEL_10:
    sub_1B00F28(Instance, v4);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_48E0859 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_14310/*"TopBase/BackButton"*/, method);
    byte_48E0859 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_40637724(transform, (System_String_o *)StringLiteral_14310/*"TopBase/BackButton"*/, 0LL);
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

  if ( (byte_48E084F & 1) == 0 )
  {
    sub_1B00CCC(&ScrollMessageDialog_ClickDelegate_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B00CCC(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__, v5);
    sub_1B00CCC(&StringLiteral_1/*""*/, v6);
    byte_48E084F = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = (ScrollMessageDialog_ClickDelegate_o *)sub_1B00F18(ScrollMessageDialog_ClickDelegate_TypeInfo);
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
    sub_1B00F28(Instance, v8);
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
    sub_1B00F28(0LL, isActive);
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

  if ( (byte_48E0851 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_1B00CCC(&StringLiteral_19887/*"icon_noticebg_01"*/, v4);
    byte_48E0851 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_19887/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0LL), !newRuleObject) )
  {
    sub_1B00F28(Instance, v6);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E085A & 1) == 0 )
  {
    sub_1B00CCC(&WarBoardConfigurationUIContoroller___c_TypeInfo, v1);
    byte_48E085A = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  if ( (byte_48E085B & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, x);
    byte_48E085B = 1;
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
    sub_1B00F28(this, 0LL);
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

  if ( (byte_48E085C & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, ok);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    byte_48E085C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B00F28(Instance, v5);
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
  if ( (byte_48E085D & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_1B00CCC(
                                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                                           svt);
    byte_48E085D = 1;
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
                (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_1B00F28(this, svt);
  }
  return 0;
}