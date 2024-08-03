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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FA3B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA3B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49FA3BC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B640C8(&WarBoardManager_TypeInfo, v2);
    byte_49FA3BC = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_10;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v6 = WarBoardManager_TypeInfo;
  if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v6 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1B64324(Instance);
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
    sub_1B64324(0LL);
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
    sub_1B6406C(p_endCallbackNoticeHint, 0, v2, v3);
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

  if ( (byte_49FA3B2 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v3);
    sub_1B640C8(&CondType_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_17601/*"buttontxt_formation_20"*/, v5);
    byte_49FA3B2 = 1;
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
  if ( CondType__IsQuestClear_37285996(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17601/*"buttontxt_formation_20"*/, 0LL);
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
  UnityEngine_Object_o *_69087664; // x0
  UnityEngine_Object_o *v11; // x20
  UIFont_o *Component_object; // x0
  const MethodInfo *v13; // x1
  UIFont_o *v14; // x20
  const MethodInfo *v15; // x2
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_49FA3AC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIFont___, method);
    sub_1B640C8(&UnityEngine_GameObject_var, v3);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&System_Type_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_6743/*"Fonts/FGO-NumberFont-02"*/, v7);
    byte_49FA3AC = 1;
  }
  v8 = (int)UnityEngine_GameObject_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v16.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  _69087664 = UnityEngine_Resources__Load_69087664((System_String_o *)StringLiteral_6743/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _69087664 )
  {
    if ( (UnityEngine_GameObject_c *)_69087664->klass == UnityEngine_GameObject_TypeInfo )
      v11 = _69087664;
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
                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
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
      sub_1B64324(Component_object);
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

  if ( (byte_49FA3B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&QuestHintDialogOpenManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    byte_49FA3B5 = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  hintButtonObj = *(QuestPhaseEntity_o **)&hintButtonObj[5].fields.friendshipExp;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( WarBoardData__GetPartySkillId((WarBoardData_o *)hintButtonObj, 0LL) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  v8 = *(_QWORD *)&hintButtonObj[5].fields.friendshipExp;
  if ( !v8 )
    goto LABEL_30;
  v9 = *(_QWORD *)(v8 + 104);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_1B64324(hintButtonObj);
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
  struct UICommonButton_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x20
  WarBoardConfigurationUIContoroller___c_c *v17; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v19; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  WarBoardConfigurationUIContoroller___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__object__o *_9__5_1; // x21
  Il2CppObject *v29; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  struct UnityEngine_GameObject_array *v34; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  struct UnityEngine_GameObject_array *v40; // x1
  const MethodInfo *v41; // x1

  if ( (byte_49FA3AA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_GameObject___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_UIWidget___, v5);
    sub_1B640C8(&System_Func_UIWidget__GameObject__TypeInfo, v6);
    sub_1B640C8(&System_Func_UIWidget__bool__TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__, v9);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__, v10);
    sub_1B640C8(&WarBoardConfigurationUIContoroller___c_TypeInfo, v11);
    byte_49FA3AA = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v13 = this->fields.startButton;
    if ( !v13 )
      goto LABEL_21;
    ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                         (UnityEngine_Component_o *)v13,
                                                                                         1,
                                                                                         (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
    v17 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v17 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v17->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UIWidget__bool__TypeInfo, v14, v15);
      System_Func_object__bool____ctor(
        _9__5_0,
        v19,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        0LL);
      static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v21, v22);
    }
    v23 = System_Linq_Enumerable__Where_object_(
            ComponentsInChildren_object,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v26 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v27 = v23;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v26 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_1 = (System_Func_object__object__o *)v26->static_fields->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v26->static_fields->__9;
      _9__5_1 = (System_Func_object__object__o *)sub_1B64314(System_Func_UIWidget__GameObject__TypeInfo, v24, v25);
      System_Func_object__object____ctor(
        _9__5_1,
        v29,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        0LL);
      v30 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v30->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->__9__5_1, (int32_t)_9__5_1, v31, v32);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v27,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v34 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v33,
                                                   (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v34;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.startButtonTweenTargetCache, (int32_t)v34, v36, v37);
    v13 = this->fields.startButton;
    if ( !v13 )
LABEL_21:
      sub_1B64324(v13);
    v40 = *p_startButtonTweenTargetCache;
    v13->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->fields.tweenTargets, (int32_t)v40, v38, v39);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v41);
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
  DataManager_o *v21; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_int__o *v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  ServantStatusBattleListViewItem_o *p_monitor; // x24
  int64_t UserServantId_k__BackingField; // x1
  int max_length; // w8
  unsigned int v32; // w29
  WarBoardPieceData_o *v33; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v35; // x26
  __int64 v36; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  int v40; // w8
  __int64 v41; // x26
  System_Func_object__bool__o **v42; // x23
  WarBoardPieceData_o *v43; // x24
  __int64 v44; // x2
  __int64 v45; // x8
  __int64 v46; // x8
  int32_t *v47; // x8
  int32_t v48; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_int__o *v53; // x1
  UserServantMaster_o *v54; // x0
  System_Collections_Generic_List_int__o *v55; // x25
  struct System_Int32_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  System_Func_object__bool__o *v59; // x25
  System_Collections_Generic_List_T__o *v60; // x24
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v64; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_49FA3C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_UserServantEntity___, warBoardData);
    sub_1B640C8(&Method_DataManager_GetMasterData_RestrictionMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&System_Func_UserServantEntity__bool__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__, v16);
    sub_1B640C8(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo, v17);
    sub_1B640C8(&WarBoardIndividualityClassMaster_TypeInfo, v18);
    byte_49FA3C1 = 1;
  }
  entity = 0LL;
  v19 = (Il2CppObject *)sub_1B64314(
                          WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo,
                          warBoardData,
                          method);
  System_Object___ctor(v19, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v21 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_66;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, 0LL);
  v26 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v24, v25);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v19 )
    goto LABEL_66;
  v64 = v19;
  v19[1].monitor = v26;
  p_monitor = (ServantStatusBattleListViewItem_o *)&v19[1].monitor;
  sub_1B6406C(p_monitor, (int32_t)v26, v27, v28);
  if ( !EditableServantPieces )
    goto LABEL_66;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
LABEL_67:
        sub_1B6432C(Instance, UserServantId_k__BackingField);
      v33 = EditableServantPieces->m_Items[v32];
      if ( !v33 )
        break;
      UserServantId_k__BackingField = v33->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v22 )
          break;
        Instance = DataMasterBase_object__object__long___GetEntity(
                     v22,
                     UserServantId_k__BackingField,
                     (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_monitor->klass;
        v36 = *((_QWORD *)Instance + 10);
        v35 = *((_QWORD *)Instance + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v66.fields.currentCryptoKey = v36;
        *(_QWORD *)&v66.fields.fakeValue = v35;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v66, 0LL);
        if ( !klass )
          break;
        items = klass->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
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
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          klass->fields._size = size + 1;
          items->m_Items[size + 1] = (int)Instance;
        }
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_22;
    }
LABEL_66:
    sub_1B64324(Instance);
  }
LABEL_22:
  Instance = (void *)WarBoardData__get_FormationLimitCost(warBoardData, 0LL);
  LODWORD(v64[1].klass) = (_DWORD)Instance - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v40 = EditableServantPieces->max_length;
  if ( v40 < 1 )
    return 0;
  v41 = 0LL;
  v42 = (System_Func_object__bool__o **)&v64[2];
  while ( 1 )
  {
    if ( (unsigned int)v41 >= v40 )
      goto LABEL_67;
    v43 = EditableServantPieces->m_Items[v41];
    if ( !v43 )
      goto LABEL_66;
    if ( v43->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v41], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_object_(
                     v21,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_66;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v43->fields._restrictionId_k__BackingField,
                             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_object_(
                       v21,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_66;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity[2].monitor,
                       0LL);
          if ( Instance && (v45 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v45 )
              goto LABEL_67;
            v46 = *((_QWORD *)Instance + 4);
            if ( !v46 )
              goto LABEL_66;
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            v47 = (int32_t *)(v46 + 16);
          }
          else
          {
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
              Instance = WarBoardIndividualityClassMaster_TypeInfo;
            }
            v47 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v48 = *v47;
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v48 == static_fields->ALL_CLASS_ID )
          {
            if ( !v22 )
              goto LABEL_66;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v22, 0LL);
          }
          else
          {
            if ( !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v48 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_object_(
                           v21,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_66;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0LL);
              if ( !v22 )
                goto LABEL_66;
              v53 = (System_Collections_Generic_List_int__o *)Instance;
              v54 = (UserServantMaster_o *)v22;
            }
            else
            {
              v55 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                UserServantId_k__BackingField,
                                                                v44);
              System_Collections_Generic_List_int____ctor(
                v55,
                (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v55 )
                goto LABEL_66;
              v56 = v55->fields._items;
              v57 = Method_System_Collections_Generic_List_int__Add__;
              ++v55->fields._version;
              if ( !v56 )
                goto LABEL_66;
              v58 = v55->fields._size;
              if ( (unsigned int)v58 >= v56->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v55,
                  v48,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
              }
              else
              {
                v55->fields._size = v58 + 1;
                v56->m_Items[v58 + 1] = v48;
              }
              if ( !v22 )
                goto LABEL_66;
              v54 = (UserServantMaster_o *)v22;
              v53 = v55;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v54, v53, 0LL);
          }
          v59 = *v42;
          v60 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*v42 )
          {
            v59 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserServantEntity__bool__TypeInfo, v51, v52);
            System_Func_object__bool____ctor(
              v59,
              v64,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              0LL);
            v64[2].klass = (Il2CppClass *)v59;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v64[2], (int32_t)v59, v61, v62);
          }
          Instance = (void *)BasicHelper__Any_object_(
                               v60,
                               (System_Func_T__bool__o *)v59,
                               (const MethodInfo_2E24870 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v40 = EditableServantPieces->max_length;
    if ( (int)++v41 >= v40 )
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
  if ( (byte_49FA3AE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, *(_QWORD *)&ap);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v5);
    byte_49FA3AE = 1;
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
    v8 = sub_1BB5FA4(v8);
  v9 = *(System_String_o **)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (v9[12].fields._firstChar & 0x100) == 0 )
    v9 = (System_String_o *)sub_1BB5FA4(v9);
  v10 = **(_QWORD **)&v9[7].fields;
  if ( !v10 || (v11 = *(WarBoardData_o **)(v10 + 440)) == 0LL )
LABEL_19:
    sub_1B64324(v9);
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v10 + 440), 0, 0, 0LL);
  if ( ActionPointEntity && !WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL) )
  {
    v9 = (System_String_o *)this->fields.currentApLabel;
    if ( v9 )
    {
      v13 = (System_String_o *)StringLiteral_1213/*"0"*/;
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
  WarBoardPieceData_o *Piece_35061152; // x0
  WarBoardPieceData_o *v15; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v17; // x21
  const MethodInfo *v18; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FA3AF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_49FA3AF = 1;
  }
  entity = 0LL;
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BB5FA4(v10);
  Instance = *(WarBoardData_o **)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (BYTE5(Instance[1].fields.squares) & 1) == 0 )
    Instance = (WarBoardData_o *)sub_1BB5FA4(Instance);
  klass = Instance->fields.reinforcementsSaveList->klass;
  if ( !klass )
    goto LABEL_35;
  Instance = (WarBoardData_o *)klass->vtable._8_unknown.method;
  if ( !Instance )
    goto LABEL_35;
  ActionPointEntity = WarBoardData__GetActionPointEntity(Instance, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_35;
  Piece_35061152 = WarBoardData__GetPiece_35061152(Instance, squareIndex, 0LL);
  if ( ActionPointEntity )
  {
    v15 = Piece_35061152;
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
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
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
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( Instance )
          {
            if ( !DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                    &entity,
                    v15->fields._UserServantId_k__BackingField,
                    (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_35;
            v17 = (WarBoardActionPointClassMaster_o *)Instance;
            Instance = (WarBoardData_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0LL);
            if ( !v17 )
              goto LABEL_35;
            goto LABEL_30;
          }
        }
LABEL_35:
        sub_1B64324(Instance);
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

  if ( (byte_49FA3AD & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    sub_1B640C8(&StringLiteral_15355/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, v4);
    sub_1B640C8(&StringLiteral_15353/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, v5);
    sub_1B640C8(&StringLiteral_15354/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v6);
    byte_49FA3AD = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = *(System_String_o **)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (v8[12].fields._firstChar & 0x100) == 0 )
    v8 = (System_String_o *)sub_1BB5FA4(v8);
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15353/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = this->fields.maxCostLabel;
  v14 = v12;
  v15 = System_Int32__ToString((int32_t)&FormationLimitCost, 0LL);
  v8 = System_String__Concat_61375396(v14, v15, 0LL);
  if ( !maxCostLabel )
    goto LABEL_19;
  UILabel__set_text(maxCostLabel, v8, 0LL);
  spritLabel = this->fields.spritLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15355/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  v8 = System_String__Concat_61375396(v14, v17, 0LL);
  if ( !spritLabel )
    goto LABEL_19;
  UILabel__set_text(spritLabel, v8, 0LL);
  currentCostLabel = this->fields.currentCostLabel;
  if ( IsPartyCostOver )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15354/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v19 = System_Int32__ToString((int32_t)&CurrentPartyCost_k__BackingField, 0LL);
  v8 = System_String__Concat_61375396(v14, v19, 0LL);
  if ( !currentCostLabel )
LABEL_19:
    sub_1B64324(v8);
  UILabel__set_text(currentCostLabel, v8, 0LL);
  WarBoardConfigurationUIContoroller__ModifyStartButton(this, v20);
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *startButton; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x0
  struct UICommonButton_o *v8; // x0
  __int64 v9; // x8
  __int64 v10; // x8
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FA3AB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v3);
    byte_49FA3AB = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BB5FA4(v7);
    v8 = *(struct UICommonButton_o **)(*(_QWORD *)(v7 + 192) + 16LL);
    if ( (BYTE1(v8[2].fields.specifyPressedColor.fields.g) & 1) == 0 )
      v8 = (struct UICommonButton_o *)sub_1BB5FA4(v8);
    v9 = **(_QWORD **)&v8[1].fields.specifyHoverColor.fields.b;
    if ( !v9 )
      goto LABEL_19;
    v10 = *(_QWORD *)(v9 + 440);
    if ( !v10 )
      goto LABEL_19;
    v8 = this->fields.startButton;
    if ( *(int *)(v10 + 212) >= 1 )
    {
      if ( v8 )
      {
        startButtonTweenTargetCache = this->fields.startButtonTweenTargetCache;
        v8->fields.tweenTargets = startButtonTweenTargetCache;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v8->fields.tweenTargets,
          (int32_t)startButtonTweenTargetCache,
          v5,
          v6);
        v8 = this->fields.startButton;
        if ( v8 )
        {
          UICommonButton__SetButtonEnable(v8, 1, 1, 0LL);
          return;
        }
      }
LABEL_19:
      sub_1B64324(v8);
    }
    if ( !v8 )
      goto LABEL_19;
    UICommonButton__SetButtonEnable(v8, 0, 1, 0LL);
    v8 = this->fields.startButton;
    if ( !v8 )
      goto LABEL_19;
    v8->fields.tweenTargets = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.tweenTargets, 0, v12, v13);
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
  Il2CppObject *MasterData_object; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  Il2CppObject *Entity; // x0
  int32_t genderImageId; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-30h] BYREF
  __int64 maxLv; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FA3B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEquipMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FA3B0 = 1;
  }
  equipName = 0LL;
  maxLv = 0LL;
  detail = 0LL;
  genderImageId = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  Instance = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(Instance + 309) & 1) == 0 )
    Instance = sub_1BB5FA4(Instance);
  v9 = **(_QWORD **)(Instance + 184);
  if ( !v9 )
    goto LABEL_15;
  Instance = *(_QWORD *)(v9 + 440);
  if ( !Instance )
    goto LABEL_15;
  Instance = WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
    sub_1B64324(Instance);
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

  if ( (byte_49FA3B7 & 1) == 0 )
  {
    sub_1B640C8(&QuestHintDialogOpenManager_TypeInfo, callback);
    byte_49FA3B7 = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_1B6406C(
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
      sub_1B64324(openType);
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
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x0
  CommonUI_o *v14; // x20
  System_Action_o *v15; // x21

  if ( (byte_49FA3B3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__, v5);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__, v6);
    byte_49FA3B3 = 1;
  }
  v7 = Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB5FA4(v13);
  v14 = **(CommonUI_o ***)(v13 + 184);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v14 )
LABEL_13:
    sub_1B64324(Instance);
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
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1

  if ( (byte_49FA3B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller_OnClickHintButton__, method);
    byte_49FA3B6 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickHintButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickHintButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endCallbackNoticeHint, 0, v8, v9);
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
  __int64 v15; // x0
  __int64 v16; // x0
  CommonUI_o *v17; // x20
  System_String_o *v18; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  System_String_o *v21; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  CommonConfirmDialog_ClickDelegate_o *v24; // x25

  if ( (byte_49FA3BF & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__, v6);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__, v7);
    sub_1B640C8(&StringLiteral_15362/*"WARBOARD_RETURN_CONFIRM_NO"*/, v8);
    sub_1B640C8(&StringLiteral_15361/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, v9);
    sub_1B640C8(&StringLiteral_15364/*"WARBOARD_RETURN_CONFIRM_YES"*/, v10);
    sub_1B640C8(&StringLiteral_15363/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, v11);
    byte_49FA3BF = 1;
  }
  v12 = Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B640E0(Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  v17 = **(CommonUI_o ***)(v16 + 184);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15363/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_15361/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15364/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15362/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v22, v23);
  CommonConfirmDialog_ClickDelegate___ctor(
    v24,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v17 )
LABEL_15:
    sub_1B64324(Instance);
  CommonUI__OpenConfirmDialog_30345008(v17, v18, v19, v20, v21, 0, v24, 0, 28, 180.0, 43.0, 0, 0, 0LL);
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

  if ( (byte_49FA3C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49FA3C0 = 1;
  }
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F7A3E )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, isDecide);
      byte_49F7A3E = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_15:
      sub_1B64324(Instance);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_49FA3BB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, v4);
    byte_49FA3BB = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v5, v6);
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
  WarBoardData_o *warBoardData_k__BackingField; // x20
  _BOOL8 IsPartyCostOver; // x0
  const MethodInfo *v24; // x2
  Il2CppObject *v25; // x19
  System_String_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_String_o *v29; // x21
  WarBoardConfigurationUIContoroller___c_c *v30; // x8
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v32; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  bool IsEnabledPutOnFreeSquare; // w22
  Il2CppObject *v37; // x20
  System_String_o *v38; // x21
  System_String_o *v39; // x22
  System_String_o *v40; // x23
  System_String_o *v41; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  CommonConfirmDialog_ClickDelegate_o *v44; // x25
  System_String_o *v45; // x22
  System_String_o *v46; // x23
  System_String_o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  CommonConfirmDialog_ClickDelegate_o *v50; // x25
  System_Nullable_float__o v51; // [xsp+60h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v54; // 0:x0.8

  if ( (byte_49FA3BD & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__, v8);
    sub_1B640C8(&WarBoardConfigurationUIContoroller___c_TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller_OnClickStartButton__, v10);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__, v11);
    sub_1B640C8(&StringLiteral_15351/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, v12);
    sub_1B640C8(&StringLiteral_15370/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, v13);
    sub_1B640C8(&StringLiteral_15367/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, v14);
    sub_1B640C8(&StringLiteral_15352/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, v15);
    sub_1B640C8(&StringLiteral_15369/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, v16);
    sub_1B640C8(&StringLiteral_15368/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, v17);
    sub_1B640C8(&StringLiteral_15371/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, v18);
    byte_49FA3BD = 1;
  }
  v19 = Method_WarBoardConfigurationUIContoroller_OnClickStartButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickStartButton__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B640E0(Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B640AC(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_29;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(Instance->fields._warBoardData_k__BackingField, 0LL);
  if ( IsPartyCostOver )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15352/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_15351/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
      v30 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v30 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      _9__41_0 = v30->static_fields->__9__41_0;
      if ( !_9__41_0 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = WarBoardConfigurationUIContoroller___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v30->static_fields->__9;
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(
                                                           NotificationDialog_ClickDelegate_TypeInfo,
                                                           v27,
                                                           v28);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v32,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        static_fields->__9__41_0 = _9__41_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v34, v35);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0LL;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
      v54 = (System_Nullable_float__o)&v51;
      v51 = 0LL;
      System_Nullable_float____ctor(v54, 15.0, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
      if ( v25 )
      {
        CommonUI__OpenNotificationDialog_30347532(
          (CommonUI_o *)v25,
          v26,
          v29,
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
LABEL_29:
    sub_1B64324(Instance);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)IsPartyCostOver,
                               warBoardData_k__BackingField,
                               v24);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_15370/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
  if ( IsEnabledPutOnFreeSquare )
  {
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_15368/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_15371/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_15369/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v44 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v42, v43);
    CommonConfirmDialog_ClickDelegate___ctor(
      v44,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v37 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_30345008((CommonUI_o *)v37, v38, v39, v40, v41, 1, v44, 0, 28, 180.0, 40.0, 0, 0, 0LL);
  }
  else
  {
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_15367/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_15371/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_15369/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v48, v49);
    CommonConfirmDialog_ClickDelegate___ctor(
      v50,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v37 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_30345008((CommonUI_o *)v37, v38, v45, v46, v47, 1, v50, 0, 28, 180.0, 43.0, 0, 0, 0LL);
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

  if ( (byte_49FA3BE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_49FA3BE = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(Instance);
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
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_49FA3B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__, v3);
    byte_49FA3B1 = 1;
  }
  v4 = Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB5FA4(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  Instance = **(Il2CppObject ***)(v7 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x0
  __int64 v5; // x0

  if ( (byte_49FA3B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v2);
    byte_49FA3B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BB5FA4(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB5FA4(v5);
  Instance = **(Il2CppObject ***)(v5 + 184);
  if ( !Instance )
LABEL_10:
    sub_1B64324(Instance);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49FA3C2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_14463/*"TopBase/BackButton"*/, method);
    byte_49FA3C2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_14463/*"TopBase/BackButton"*/, 0LL);
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
  Il2CppObject *v12; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  ScrollMessageDialog_ClickDelegate_o *v15; // x24

  if ( (byte_49FA3B8 & 1) == 0 )
  {
    sub_1B640C8(&ScrollMessageDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B640C8(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FA3B8 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = (ScrollMessageDialog_ClickDelegate_o *)sub_1B64314(ScrollMessageDialog_ClickDelegate_TypeInfo, v13, v14);
        ScrollMessageDialog_ClickDelegate___ctor(
          v15,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0LL);
        if ( v12 )
        {
          CommonUI__OpenScrollMessageDialog((CommonUI_o *)v12, title, message, leftIndent, v15, 0, 1, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1B64324(Instance);
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
    sub_1B64324(0LL);
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

  if ( (byte_49FA3BA & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_20079/*"icon_noticebg_01"*/, v4);
    byte_49FA3BA = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_20079/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0LL), !newRuleObject) )
  {
    sub_1B64324(Instance);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA3C3 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardConfigurationUIContoroller___c_TypeInfo, v1);
    byte_49FA3C3 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardConfigurationUIContoroller___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  if ( (byte_49FA3C4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_49FA3C4 = 1;
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
    sub_1B64324(this);
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

  if ( (byte_49FA3C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, ok);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    byte_49FA3C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
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
  if ( (byte_49FA3C6 & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_1B640C8(
                                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                                           svt);
    byte_49FA3C6 = 1;
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
                (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_1B64324(this);
  }
  return 0;
}