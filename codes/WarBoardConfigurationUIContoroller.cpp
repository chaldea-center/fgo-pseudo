void WarBoardConfigurationUIContoroller___ctor(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  this->fields.hintXPartyBuffExist = 92;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardConfigurationUIContoroller__Active(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596E42E & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E42E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
}


void WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v7; // x0

  if ( (byte_596E431 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardManager_TypeInfo);
    byte_596E431 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_10;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v7 = WarBoardManager_TypeInfo;
  if ( !*(&WarBoardManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, v3, v4);
    v7 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0);
  UnityEngine_PlayerPrefs__Save(0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_2213CDC(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0);
}


void WarBoardConfigurationUIContoroller__Deactive(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardConfigurationUIContoroller__EndNoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_endCallbackNoticeHint; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *endCallbackNoticeHint; // t1

  endCallbackNoticeHint = this->fields.endCallbackNoticeHint;
  p_endCallbackNoticeHint = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackNoticeHint;
  v9 = endCallbackNoticeHint;
  if ( endCallbackNoticeHint )
  {
    p_endCallbackNoticeHint->klass = 0;
    sub_2213A04(p_endCallbackNoticeHint, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void WarBoardConfigurationUIContoroller__Init(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
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


void WarBoardConfigurationUIContoroller__InitClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *classCompatibilitySprite; // x19

  if ( (byte_596E427 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&StringLiteral_18443/*"buttontxt_formation_20"*/);
    byte_596E427 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v4->static_fields->ClassBoardReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  if ( CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_18443/*"buttontxt_formation_20"*/, 0);
  }
}


void WarBoardConfigurationUIContoroller__InitCost(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppType *v4; // x20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_83400868; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *v9; // x20
  UIFont_o *Component_object; // x0
  const MethodInfo *v11; // x1
  UIFont_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_596E421 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_2213A60(&UnityEngine_GameObject_var);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7090/*"Fonts/FGO-NumberFont-02"*/);
    byte_596E421 = 1;
  }
  v4 = UnityEngine_GameObject_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, method, v2);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v4, 0);
  _83400868 = UnityEngine_Resources__Load_83400868((System_String_o *)StringLiteral_7090/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0);
  if ( _83400868 )
  {
    if ( (UnityEngine_GameObject_c *)_83400868->klass == UnityEngine_GameObject_TypeInfo )
      v9 = _83400868;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  Component_object = (UIFont_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_20;
    Component_object = (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)v9,
                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v12 = Component_object,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, Component_object, 0),
          (Component_object = (UIFont_o *)this->fields.maxCostLabel) == 0)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v12, 0),
          (Component_object = (UIFont_o *)this->fields.spritLabel) == 0)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v12, 0),
          (Component_object = (UIFont_o *)this->fields.currentApLabel) == 0) )
    {
LABEL_20:
      sub_2213CDC(Component_object, v11);
    }
    UILabel__set_bitmapFont((UILabel_o *)Component_object, v12, 0);
  }
  WarBoardConfigurationUIContoroller__ModifyCost(this, v11);
  WarBoardConfigurationUIContoroller__ModifyAP(this, 0, v13);
}


void WarBoardConfigurationUIContoroller__InitHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *hintButtonObj; // x0
  __int64 v4; // x2
  _QWORD *monitor; // x8
  __int64 v6; // x20
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  __int64 v10; // x2
  struct QuestHintEntity_o *v11; // x8

  if ( (byte_596E42A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E42A = 1;
  }
  hintButtonObj = this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(hintButtonObj, 1, 0);
  hintButtonObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  hintButtonObj = (UnityEngine_GameObject_o *)hintButtonObj[18].monitor;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( WarBoardData__GetPartySkillId((WarBoardData_o *)hintButtonObj, 0) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0);
  hintButtonObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  monitor = hintButtonObj[18].monitor;
  if ( !monitor )
    goto LABEL_30;
  v6 = monitor[13];
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v4);
  hintButtonObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !v6 )
    goto LABEL_30;
  if ( !hintButtonObj )
    goto LABEL_30;
  QuestHintMaster__TryGetEntity(
    (QuestHintMaster_o *)hintButtonObj,
    &this->fields.questHintEntity,
    *(_DWORD *)(v6 + 124),
    *(_DWORD *)(v6 + 128),
    0);
  hintButtonObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !hintButtonObj )
    goto LABEL_30;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)hintButtonObj,
    &this->fields.questPhaseEntity,
    *(_DWORD *)(v6 + 124),
    *(_DWORD *)(v6 + 128),
    0);
  questHintEntity = this->fields.questHintEntity;
  if ( questHintEntity )
  {
    message = questHintEntity->fields.message;
  }
  else
  {
    questPhaseEntity = this->fields.questPhaseEntity;
    if ( !questPhaseEntity )
      goto LABEL_20;
    message = QuestPhaseEntity__getHintMessage(questPhaseEntity, 0);
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
  {
LABEL_20:
    hintButtonObj = this->fields.hintButtonObj;
    if ( hintButtonObj )
    {
      UnityEngine_GameObject__SetActive(hintButtonObj, 0, 0);
      return;
    }
LABEL_30:
    sub_2213CDC(hintButtonObj, method);
  }
  v11 = this->fields.questHintEntity;
  if ( v11 )
  {
    if ( !v11->fields.openType )
      return;
    goto LABEL_24;
  }
  hintButtonObj = (UnityEngine_GameObject_o *)this->fields.questPhaseEntity;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( QuestPhaseEntity__getHintOpenType((QuestPhaseEntity_o *)hintButtonObj, 0) )
  {
LABEL_24:
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, method, v10);
    QuestHintDialogOpenManager__ReadData(0);
  }
}


void WarBoardConfigurationUIContoroller__InitStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *startButton; // x20
  __int64 v5; // x1
  struct UICommonButton_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x20
  WarBoardConfigurationUIContoroller___c_c *v10; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v13; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  WarBoardConfigurationUIContoroller___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v26; // x9
  System_Func_object__object__o *_9__5_1; // x21
  Il2CppObject *v28; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  struct UnityEngine_GameObject_array *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  const MethodInfo *v51; // x1

  if ( (byte_596E41F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UIWidget___);
    sub_2213A60(&System_Func_UIWidget__GameObject__TypeInfo);
    sub_2213A60(&System_Func_UIWidget__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__);
    sub_2213A60(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_596E41F = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(startButton, 0, 0) )
  {
    v6 = this->fields.startButton;
    if ( !v6 )
      goto LABEL_21;
    ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                         (UnityEngine_Component_o *)v6,
                                                                                         1,
                                                                                         (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
    v10 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( !*(&WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo, v7, v8);
      v10 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__5_0 = (System_Func_object__bool__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v7, v8);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UIWidget__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v13,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        0);
      v14 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v14->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__5_0, (int32_t)_9__5_0, v15, v16, v17, v18, v19, v20);
    }
    v21 = System_Linq_Enumerable__Where_object_(
            ComponentsInChildren_object,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v24 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v25 = v21;
    if ( !*(&WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo, v22, v23);
      v24 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    v26 = v24->static_fields;
    _9__5_1 = (System_Func_object__object__o *)v26->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v22, v23);
        v26 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)v26->__9;
      _9__5_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_object__object____ctor(
        _9__5_1,
        v28,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        0);
      v29 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v29->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__5_1, (int32_t)_9__5_1, v30, v31, v32, v33, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v25,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v37 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v36,
                                                   (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v37;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.startButtonTweenTargetCache,
      (int32_t)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v6 = this->fields.startButton;
    if ( !v6 )
LABEL_21:
      sub_2213CDC(v6, v5);
    startButtonTweenTargetCache = this->fields.startButtonTweenTargetCache;
    v6->fields.tweenTargets = startButtonTweenTargetCache;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v6->fields.tweenTargets,
      (int32_t)startButtonTweenTargetCache,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v51);
  }
}


bool WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
        WarBoardConfigurationUIContoroller_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x24
  void *Instance; // x0
  int64_t UserServantId_k__BackingField; // x1
  DataManager_o *v7; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  System_Collections_Generic_List_int__o *v10; // x25
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_o *p_monitor; // x24
  int max_length; // w8
  unsigned int v19; // w19
  WarBoardPieceData_o *v20; // x8
  __int64 v21; // x2
  __int64 v22; // x26
  __int64 v23; // x27
  System_Collections_Generic_List_int__o *klass; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int v28; // w8
  __int64 v29; // x25
  WarBoardPieceData_o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x8
  __int64 v33; // x8
  int32_t *v34; // x8
  int32_t v35; // w23
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  System_Collections_Generic_List_int__o *v38; // x1
  UserServantMaster_o *v39; // x0
  System_Collections_Generic_List_int__o *v40; // x24
  struct System_Int32_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  System_Func_object__bool__o *v44; // x24
  System_Collections_Generic_List_T__o *v45; // x23
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  Il2CppObject *v53; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_596E436 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_UserServantEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass48_0__IsEnabledPutOnFreeSquare_b__0__);
    sub_2213A60(&WarBoardConfigurationUIContoroller___c__DisplayClass48_0_TypeInfo);
    sub_2213A60(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_596E436 = 1;
  }
  entity = 0;
  v4 = (Il2CppObject *)sub_2213CCC(WarBoardConfigurationUIContoroller___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor(v4, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v7 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_66;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, 0);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_66;
  v53 = v4;
  v4[1].monitor = v10;
  p_monitor = (MissionNaviTransitionBoardItem_o *)&v4[1].monitor;
  sub_2213A04(p_monitor, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !EditableServantPieces )
    goto LABEL_66;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
LABEL_67:
        sub_2213CE4(Instance);
      v20 = EditableServantPieces->m_Items[v19];
      if ( !v20 )
        break;
      UserServantId_k__BackingField = v20->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v8 )
          break;
        Instance = DataMasterBase_object__object__long___GetEntity(
                     v8,
                     UserServantId_k__BackingField,
                     (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        v22 = *((_QWORD *)Instance + 10);
        v23 = *((_QWORD *)Instance + 11);
        klass = (System_Collections_Generic_List_int__o *)p_monitor->klass;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            UserServantId_k__BackingField,
            v21);
        *(_QWORD *)&v55.fields.currentCryptoKey = v22;
        *(_QWORD *)&v55.fields.fakeValue = v23;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v55, 0);
        if ( !klass )
          break;
        items = klass->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++klass->fields._version;
        if ( !items )
          break;
        size = klass->fields._size;
        UserServantId_k__BackingField = (unsigned int)Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            klass,
            (int32_t)Instance,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          klass->fields._size = size + 1;
          items->m_Items[size] = (int)Instance;
        }
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_22;
    }
LABEL_66:
    sub_2213CDC(Instance, UserServantId_k__BackingField);
  }
LABEL_22:
  Instance = (void *)WarBoardData__get_FormationLimitCost(warBoardData, 0);
  v28 = EditableServantPieces->max_length;
  LODWORD(v53[1].klass) = (_DWORD)Instance - warBoardData->fields._CurrentPartyCost_k__BackingField;
  if ( v28 < 1 )
    return 0;
  v29 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v29 >= v28 )
      goto LABEL_67;
    v30 = EditableServantPieces->m_Items[v29];
    if ( !v30 )
      goto LABEL_66;
    if ( v30->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v29], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_object_(
                     v7,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_66;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v30->fields._restrictionId_k__BackingField,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_object_(
                       v7,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_66;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity[2].monitor,
                       0);
          if ( Instance && (v32 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v32 )
              goto LABEL_67;
            v33 = *((_QWORD *)Instance + 4);
            if ( !v33 )
              goto LABEL_66;
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            v34 = (int32_t *)(v33 + 16);
          }
          else
          {
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            if ( !*(&WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(
                WarBoardIndividualityClassMaster_TypeInfo,
                UserServantId_k__BackingField,
                v31);
              Instance = WarBoardIndividualityClassMaster_TypeInfo;
            }
            v34 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v35 = *v34;
          if ( !*((_DWORD *)Instance + 57) )
          {
            j_il2cpp_runtime_class_init_0(Instance, UserServantId_k__BackingField, v31);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v35 == static_fields->ALL_CLASS_ID )
          {
            if ( !v8 )
              goto LABEL_66;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v8, 0);
          }
          else
          {
            if ( !*((_DWORD *)Instance + 57) )
            {
              j_il2cpp_runtime_class_init_0(Instance, UserServantId_k__BackingField, v31);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v35 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_object_(
                           v7,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_66;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0);
              if ( !v8 )
                goto LABEL_66;
              v38 = (System_Collections_Generic_List_int__o *)Instance;
              v39 = (UserServantMaster_o *)v8;
            }
            else
            {
              v40 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v40,
                (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v40 )
                goto LABEL_66;
              v41 = v40->fields._items;
              v42 = Method_System_Collections_Generic_List_int__Add__;
              ++v40->fields._version;
              if ( !v41 )
                goto LABEL_66;
              v43 = v40->fields._size;
              if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v40,
                  v35,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v40->fields._size = v43 + 1;
                v41->m_Items[v43] = v35;
              }
              if ( !v8 )
                goto LABEL_66;
              v39 = (UserServantMaster_o *)v8;
              v38 = v40;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v39, v38, 0);
          }
          v44 = (System_Func_object__bool__o *)v53[2].klass;
          v45 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !v44 )
          {
            v44 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v44,
              v53,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass48_0__IsEnabledPutOnFreeSquare_b__0__,
              0);
            v53[2].klass = (Il2CppClass *)v44;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53[2], (int32_t)v44, v46, v47, v48, v49, v50, v51);
          }
          Instance = (void *)BasicHelper__Any_object_(
                               v45,
                               (System_Func_T__bool__o *)v44,
                               (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v28 = EditableServantPieces->max_length;
    if ( (int)++v29 >= v28 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardConfigurationUIContoroller__ModifyAP(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t ap,
        const MethodInfo *method)
{
  long double v3; // q0
  UILabel_o *currentApLabel; // x19
  int32_t *p_BaseActionPoint; // x0
  __int64 v8; // x0
  void *v9; // x0
  __int64 v10; // x8
  WarBoardData_o *v11; // x20
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  int32_t BaseActionPoint; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = ap;
  if ( (byte_596E423 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596E423 = 1;
  }
  BaseActionPoint = 0;
  if ( ap )
  {
    currentApLabel = this->fields.currentApLabel;
    p_BaseActionPoint = &v14;
    goto LABEL_14;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v3);
  v9 = *(void **)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_WORD *)((_BYTE *)v9 + 309) & 1) == 0 )
    v9 = (void *)sub_224B908(v3);
  v10 = **((_QWORD **)v9 + 23);
  if ( !v10 )
    goto LABEL_18;
  v11 = *(WarBoardData_o **)(v10 + 440);
  if ( !v11 )
    goto LABEL_18;
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v10 + 440), 0, 0, 0);
  if ( !ActionPointEntity || WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0) )
  {
    currentApLabel = this->fields.currentApLabel;
    BaseActionPoint = WarBoardData__GetBaseActionPoint(v11, 0, 0, 0);
    p_BaseActionPoint = &BaseActionPoint;
LABEL_14:
    v9 = System_Int32__ToString((int32_t)p_BaseActionPoint, 0);
    if ( currentApLabel )
    {
      UILabel__set_text(currentApLabel, (System_String_o *)v9, 0);
      return;
    }
LABEL_18:
    sub_2213CDC(v9, *(_QWORD *)&ap);
  }
  v9 = this->fields.currentApLabel;
  if ( !v9 )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)v9, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardConfigurationUIContoroller__ModifyAPFromSquareIndex(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  WarBoardData_o *methodPtr; // x0
  System_Collections_Generic_List_HoldReinforcementsData__c *klass; // x8
  WarBoardActionPointEntity_o *ActionPointEntity; // x20
  WarBoardPieceData_o *Piece_44788124; // x0
  WarBoardPieceData_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  WarBoardActionPointClassMaster_o *v16; // x21
  WarBoardActionPointClassEntity_o *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassMaster_o *v22; // x21
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v25; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596E424 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E424 = 1;
  }
  entity = 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  methodPtr = *(WarBoardData_o **)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)((_BYTE *)&methodPtr[1].fields.squares + 5) & 1) == 0 )
    methodPtr = (WarBoardData_o *)sub_224B908(v3);
  klass = methodPtr->fields.reinforcementsSaveList->klass;
  if ( !klass )
    goto LABEL_36;
  methodPtr = (WarBoardData_o *)klass->vtable._8_unknown.methodPtr;
  if ( !methodPtr )
    goto LABEL_36;
  ActionPointEntity = WarBoardData__GetActionPointEntity(methodPtr, 0, 0, 0);
  methodPtr = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !methodPtr )
    goto LABEL_36;
  methodPtr = (WarBoardData_o *)methodPtr[1].fields.playedStageReinforcementsList;
  if ( !methodPtr )
    goto LABEL_36;
  Piece_44788124 = WarBoardData__GetPiece_44788124(methodPtr, squareIndex, 0);
  if ( ActionPointEntity )
  {
    v11 = Piece_44788124;
    if ( !WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0) )
    {
      if ( v11 )
      {
        if ( v11->fields._UserServantId_k__BackingField < 1 )
        {
          if ( WarBoardPieceData__get_IsNpc(v11, 0) && v11->fields._battleServant_k__BackingField )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
            methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            battleServant_k__BackingField = v11->fields._battleServant_k__BackingField;
            if ( !battleServant_k__BackingField )
              goto LABEL_36;
            v22 = (WarBoardActionPointClassMaster_o *)methodPtr;
            methodPtr = (WarBoardData_o *)BattleServantData__getClassId(battleServant_k__BackingField, 0, 0);
            if ( !v22 )
              goto LABEL_36;
            EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                            v22,
                                            ActionPointEntity,
                                            (int32_t)methodPtr,
                                            0);
            if ( !EntityFromActionPointEntity )
              return;
            baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
            v25 = this;
          }
          else
          {
            v25 = this;
            baseActionPoint = 0;
          }
          WarBoardConfigurationUIContoroller__ModifyAP(v25, baseActionPoint, v20);
          return;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
        methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( methodPtr )
        {
          if ( !DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)methodPtr,
                  &entity,
                  v11->fields._UserServantId_k__BackingField,
                  (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
            return;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
          methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          if ( entity )
          {
            v16 = (WarBoardActionPointClassMaster_o *)methodPtr;
            methodPtr = (WarBoardData_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0, 0);
            if ( v16 )
            {
              v17 = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                      v16,
                      ActionPointEntity,
                      (int32_t)methodPtr,
                      0);
              if ( v17 )
                WarBoardConfigurationUIContoroller__ModifyAP(this, v17->fields.baseActionPoint, v18);
              return;
            }
          }
        }
LABEL_36:
        sub_2213CDC(methodPtr, *(_QWORD *)&squareIndex);
      }
    }
  }
}


void WarBoardConfigurationUIContoroller__ModifyCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  System_String_o *v5; // x0
  __int64 v6; // x8
  WarBoardData_o *v7; // x21
  bool IsPartyCostOver; // w20
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x0
  UILabel_o *maxCostLabel; // x22
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  UILabel_o *spritLabel; // x22
  System_String_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *currentCostLabel; // x22
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596E422 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&StringLiteral_16022/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_2213A60(&StringLiteral_16020/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_2213A60(&StringLiteral_16021/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_596E422 = 1;
  }
  v22 = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(System_String_o **)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(uint16_t *)((_BYTE *)&v5[12].fields._firstChar + 1) & 1) == 0 )
    v5 = (System_String_o *)sub_224B908(v2);
  v6 = **(_QWORD **)&v5[7].fields;
  if ( !v6 )
    goto LABEL_19;
  v7 = *(WarBoardData_o **)(v6 + 440);
  if ( !v7 )
    goto LABEL_19;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(*(WarBoardData_o **)(v6 + 440), 0);
  HIDWORD(v22) = v7->fields._CurrentPartyCost_k__BackingField;
  LODWORD(v22) = WarBoardData__get_FormationLimitCost(v7, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_16020/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0);
  maxCostLabel = this->fields.maxCostLabel;
  v13 = v11;
  v14 = System_Int32__ToString((int32_t)&v22, 0);
  v5 = System_String__Concat_75651716(v13, v14, 0);
  if ( !maxCostLabel )
    goto LABEL_19;
  UILabel__set_text(maxCostLabel, v5, 0);
  spritLabel = this->fields.spritLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_16022/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  v5 = System_String__Concat_75651716(v13, v16, 0);
  if ( !spritLabel )
    goto LABEL_19;
  UILabel__set_text(spritLabel, v5, 0);
  currentCostLabel = this->fields.currentCostLabel;
  if ( IsPartyCostOver )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_16021/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
  }
  v20 = System_Int32__ToString((int32_t)&v22 + 4, 0);
  v5 = System_String__Concat_75651716(v13, v20, 0);
  if ( !currentCostLabel )
LABEL_19:
    sub_2213CDC(v5, method);
  UILabel__set_text(currentCostLabel, v5, 0);
  WarBoardConfigurationUIContoroller__ModifyStartButton(this, v21);
}


void WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *startButton; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  long double v12; // q0
  __int64 v13; // x0
  struct UICommonButton_o *v14; // x0
  __int64 v15; // x8
  __int64 v16; // x8
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596E420 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_596E420 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(startButton, 0, 0) )
  {
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_224B908(v12);
    v14 = *(struct UICommonButton_o **)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (*(_WORD *)((_BYTE *)&v14[2].fields.specifyPressedColor.fields.g + 1) & 1) == 0 )
      v14 = (struct UICommonButton_o *)sub_224B908(v12);
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
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v14->fields.tweenTargets,
          (int32_t)startButtonTweenTargetCache,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        v14 = this->fields.startButton;
        if ( v14 )
        {
          UICommonButton__SetButtonEnable(v14, 1, 1, 0);
          return;
        }
      }
LABEL_19:
      sub_2213CDC(v14, v5);
    }
    if ( !v14 )
      goto LABEL_19;
    UICommonButton__SetButtonEnable(v14, 0, 1, 0);
    v14 = this->fields.startButton;
    if ( !v14 )
      goto LABEL_19;
    v14->fields.tweenTargets = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->fields.tweenTargets, 0, v18, v19, v20, v21, v22, v23);
  }
}


void WarBoardConfigurationUIContoroller__ModifyUserEquip(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 SelfUserGame; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  bool FixedMasterEquipInfo; // w20
  UnityEngine_Object_o *masterEquipFixedLabel; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *v13; // x21
  __int64 v14; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_femaleImageId; // x8
  int32_t *p_fakeValue; // x9
  Il2CppObject *Master_object; // x21
  long double v18; // q0
  __int64 v19; // x8
  __int64 v20; // x8
  Il2CppObject *Entity; // x0
  __int64 v22; // x2
  __int64 v23; // x21
  __int64 v24; // x22
  unsigned int v25; // w0
  UnityEngine_Object_o *masterEquipFixedObject; // x21
  __int64 v27; // x2
  UnityEngine_Object_o *masterEquipButton; // x21
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-50h] BYREF
  int32_t maxLv[2]; // [xsp+18h] [xbp-48h] BYREF
  EquipEntity_o *fixedEquipEntity; // [xsp+20h] [xbp-40h] BYREF
  int32_t genderImageId; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_596E425 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&StringLiteral_10667/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/);
    byte_596E425 = 1;
  }
  genderImageId = 0;
  *(_QWORD *)maxLv = 0;
  fixedEquipEntity = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  detail = 0;
  equipName = 0;
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  SelfUserGame = **(_QWORD **)(v5 + 184);
  if ( !SelfUserGame )
    goto LABEL_50;
  FixedMasterEquipInfo = WarBoardManager__TryGetFixedMasterEquipInfo(
                           (WarBoardManager_o *)SelfUserGame,
                           &fixedEquipEntity,
                           0);
  if ( FixedMasterEquipInfo )
  {
    masterEquipFixedLabel = (UnityEngine_Object_o *)this->fields.masterEquipFixedLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(masterEquipFixedLabel, 0, 0) )
    {
      v13 = this->fields.masterEquipFixedLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
      SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10667/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/, 0);
      if ( !v13 )
        goto LABEL_50;
      UILabel__set_text(v13, (System_String_o *)SelfUserGame, 0);
    }
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_50;
    if ( *(_DWORD *)(SelfUserGame + 76) == 2 )
    {
      if ( !fixedEquipEntity )
        goto LABEL_50;
      p_femaleImageId = &fixedEquipEntity->fields.femaleImageId;
      p_fakeValue = &fixedEquipEntity->fields.femaleImageId.fields.fakeValue;
    }
    else
    {
      if ( !fixedEquipEntity )
        goto LABEL_50;
      p_femaleImageId = &fixedEquipEntity->fields.maleImageId;
      p_fakeValue = &fixedEquipEntity->fields.maleImageId.fields.fakeValue;
    }
    v23 = *(_QWORD *)&p_femaleImageId->fields.currentCryptoKey;
    v24 = *(_QWORD *)p_fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v14);
    *(_QWORD *)&v34.fields.currentCryptoKey = v23;
    *(_QWORD *)&v34.fields.fakeValue = v24;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v34, 0);
    method = (const MethodInfo *)v25;
    genderImageId = v25;
    goto LABEL_36;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEquipMaster___);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_224B908(v18);
  SelfUserGame = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_WORD *)(SelfUserGame + 309) & 1) == 0 )
    SelfUserGame = sub_224B908(v18);
  v20 = **(_QWORD **)(SelfUserGame + 184);
  if ( !v20 )
    goto LABEL_50;
  SelfUserGame = *(_QWORD *)(v20 + 440);
  if ( !SelfUserGame )
    goto LABEL_50;
  SelfUserGame = WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)SelfUserGame, 0);
  if ( !Master_object )
    goto LABEL_50;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             SelfUserGame,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( Entity )
  {
    UserEquipEntity__getEquipInfo((UserEquipEntity_o *)Entity, &maxLv[1], maxLv, &equipName, &detail, &genderImageId, 0);
    method = (const MethodInfo *)(unsigned int)genderImageId;
LABEL_36:
    if ( (int)method >= 1 )
    {
      SelfUserGame = (__int64)this->fields.userEquipIcon;
      if ( !SelfUserGame )
        goto LABEL_50;
      ItemIconComponent__SetEquipItem((ItemIconComponent_o *)SelfUserGame, (int32_t)method, 0);
    }
  }
  masterEquipFixedObject = (UnityEngine_Object_o *)this->fields.masterEquipFixedObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v22);
  if ( UnityEngine_Object__op_Inequality(masterEquipFixedObject, 0, 0) )
  {
    SelfUserGame = (__int64)this->fields.masterEquipFixedObject;
    if ( !SelfUserGame )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, FixedMasterEquipInfo, 0);
  }
  masterEquipButton = (UnityEngine_Object_o *)this->fields.masterEquipButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v27);
  if ( UnityEngine_Object__op_Inequality(masterEquipButton, 0, 0) )
  {
    SelfUserGame = (__int64)this->fields.masterEquipButton;
    if ( SelfUserGame )
    {
      UICommonButton__SetEnable((UICommonButton_o *)SelfUserGame, !FixedMasterEquipInfo, 0);
      return;
    }
LABEL_50:
    sub_2213CDC(SelfUserGame, method);
  }
}


void WarBoardConfigurationUIContoroller__NoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  __int64 v14; // x2
  struct QuestHintEntity_o *v15; // x8
  QuestPhaseEntity_o *openType; // x0
  _DWORD *v17; // x9
  int32_t v18; // w20
  int32_t v19; // w21
  __int64 v20; // x2

  if ( (byte_596E42C & 1) == 0 )
  {
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_596E42C = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackNoticeHint,
    (int32_t)callback,
    (System_String_o *)method,
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
    message = QuestPhaseEntity__getHintMessage(questPhaseEntity, 0);
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
    goto LABEL_8;
  v15 = this->fields.questHintEntity;
  if ( v15 )
  {
    openType = (QuestPhaseEntity_o *)(unsigned int)v15->fields.openType;
  }
  else
  {
    openType = this->fields.questPhaseEntity;
    if ( !openType )
      goto LABEL_23;
    openType = (QuestPhaseEntity_o *)QuestPhaseEntity__getHintOpenType(openType, 0);
  }
  if ( (_DWORD)openType != 1 )
    goto LABEL_22;
  v17 = this->fields.questHintEntity;
  if ( !v17 )
  {
    v17 = this->fields.questPhaseEntity;
    if ( !v17 )
LABEL_23:
      sub_2213CDC(openType, v10);
  }
  v18 = v17[5];
  v19 = v17[4];
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v10, v14);
  if ( QuestHintDialogOpenManager__IsQuestHintOpen(v19, v18, 0) )
    goto LABEL_8;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v10, v20);
  QuestHintDialogOpenManager__SetQuestInfo(v19, v18, 0);
  QuestHintDialogOpenManager__WriteData(0);
LABEL_22:
  WarBoardConfigurationUIContoroller__OpenHintDialog(this, v10);
}


void WarBoardConfigurationUIContoroller__OnClickClassCompatibilityButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  CommonUI_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_596E428 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__);
    byte_596E428 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v7);
  v10 = **(CommonUI_o ***)(v9 + 184);
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0);
  if ( !v10 )
LABEL_13:
    sub_2213CDC(Instance, v6);
  CommonUI__OpenClassCompatibilityMenu(v10, v11, 0);
}


void WarBoardConfigurationUIContoroller__OnClickHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1

  if ( (byte_596E42B & 1) == 0 )
  {
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
    byte_596E42B = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickHintButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickHintButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
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
    message = QuestPhaseEntity__getHintMessage(questPhaseEntity, 0);
  }
  if ( !System_String__IsNullOrEmpty(message, 0) )
  {
    this->fields.endCallbackNoticeHint = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackNoticeHint, 0, v8, v9, v10, v11, v12, v13);
    WarBoardConfigurationUIContoroller__OpenHintDialog(this, v14);
  }
}


void WarBoardConfigurationUIContoroller__OnClickReturnButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  long double v9; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  CommonUI_o *v12; // x20
  System_String_o *v13; // x21
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  System_String_o *v16; // x24
  CommonConfirmDialog_ClickDelegate_o *v17; // x25

  if ( (byte_596E434 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__);
    sub_2213A60(&StringLiteral_16029/*"WARBOARD_RETURN_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_16028/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16031/*"WARBOARD_RETURN_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_16030/*"WARBOARD_RETURN_CONFIRM_TITLE"*/);
    byte_596E434 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v9);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908(v9);
  v12 = **(CommonUI_o ***)(v11 + 184);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_16030/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_16028/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_16031/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_16029/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0);
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0);
  if ( !v12 )
LABEL_15:
    sub_2213CDC(Instance, v6);
  CommonUI__OpenConfirmDialog_37373184(v12, v13, v14, v15, v16, 0, v17, 0, 28, 180.0, 43.0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardConfigurationUIContoroller__OnClickReturnConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_596E435 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596E435 = 1;
  }
  if ( isDecide )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isDecide, method);
    if ( !byte_596ABDE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596ABDE = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isDecide, method);
      v4 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v4->static_fields;
    v6 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
    static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance(v6);
    if ( !Instance )
LABEL_15:
      sub_2213CDC(Instance, v8);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_596E430 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__);
    byte_596E430 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0);
  WarBoardUIUtility__ShowRuleDialog(v3, 0);
}


void WarBoardConfigurationUIContoroller__OnClickStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarBoardManager_o *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *warBoardData_k__BackingField; // x20
  _BOOL8 IsPartyCostOver; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x19
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x21
  WarBoardConfigurationUIContoroller___c_c *v17; // x8
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x9
  NotificationDialog_ClickDelegate_o *_9__44_0; // x22
  Il2CppObject *v20; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  bool IsEnabledPutOnFreeSquare; // w20
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x20
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  System_String_o *v34; // x23
  System_String_o *v35; // x24
  CommonConfirmDialog_ClickDelegate_o *v36; // x25
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x20
  System_String_o *v40; // x21
  System_String_o *v41; // x22
  System_String_o *v42; // x23
  System_String_o *v43; // x24
  CommonConfirmDialog_ClickDelegate_o *v44; // x25
  System_Nullable_float__o v45; // [xsp+60h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_596E432 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__44_0__);
    sub_2213A60(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__);
    sub_2213A60(&StringLiteral_16018/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16037/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/);
    sub_2213A60(&StringLiteral_16034/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16019/*"WARBOARD_PARTY_COST_OVER_TITLE"*/);
    sub_2213A60(&StringLiteral_16036/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/);
    sub_2213A60(&StringLiteral_16035/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/);
    sub_2213A60(&StringLiteral_16038/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/);
    byte_596E432 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickStartButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickStartButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__HideSimplePopup(Instance, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_32;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(Instance->fields._warBoardData_k__BackingField, 0);
  if ( IsPartyCostOver )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
      v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_16019/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_16018/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0);
      v17 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( !*(&WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo, v14, v15);
        v17 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      static_fields = v17->static_fields;
      _9__44_0 = static_fields->__9__44_0;
      if ( !_9__44_0 )
      {
        if ( !*(&v17->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v17, v14, v15);
          static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        }
        v20 = (Il2CppObject *)static_fields->__9;
        _9__44_0 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__44_0,
          v20,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__44_0__,
          0);
        v21 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        v21->__9__44_0 = _9__44_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v21->__9__44_0,
          (int32_t)_9__44_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      titlePosY = 0;
      System_Nullable_float____ctor(
        (System_Nullable_float__o)&titlePosY,
        90.0,
        (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
      v45 = 0;
      System_Nullable_float____ctor(
        (System_Nullable_float__o)&v45,
        15.0,
        (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
      if ( v12 )
      {
        CommonUI__OpenNotificationDialog_37376108(
          (CommonUI_o *)v12,
          v13,
          v16,
          _9__44_0,
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
          0,
          1,
          0,
          0,
          0,
          0);
        return;
      }
    }
LABEL_32:
    sub_2213CDC(Instance, v6);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)IsPartyCostOver,
                               warBoardData_k__BackingField,
                               v9);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( IsEnabledPutOnFreeSquare )
  {
    if ( !Instance )
      goto LABEL_32;
    WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_16037/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_16035/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_16038/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_16036/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0);
    v36 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v36,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0);
    if ( !v31 )
      goto LABEL_32;
    CommonUI__OpenConfirmDialog_37373184((CommonUI_o *)v31, v32, v33, v34, v35, 1, v36, 0, 28, 180.0, 40.0, 0, 0, 0);
  }
  else
  {
    if ( !Instance )
      goto LABEL_32;
    WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
    v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_16037/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_16034/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_16038/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_16036/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0);
    v44 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v44,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0);
    if ( !v39 )
      goto LABEL_32;
    CommonUI__OpenConfirmDialog_37373184((CommonUI_o *)v39, v40, v41, v42, v43, 1, v44, 0, 28, 180.0, 43.0, 0, 0, 0);
  }
}


void WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596E433 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E433 = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_9:
    sub_2213CDC(Instance, v5);
  }
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  __int64 v4; // x1
  long double v5; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_596E426 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
    byte_596E426 = 1;
  }
  v2 = Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v5);
  Instance = **(Il2CppObject ***)(v7 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
}


void WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0

  if ( (byte_596E429 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E429 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v4);
  Instance = **(Il2CppObject ***)(v6 + 184);
  if ( !Instance )
LABEL_10:
    sub_2213CDC(Instance, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0, 0);
}


void WarBoardConfigurationUIContoroller__OnEnable(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596E437 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15149/*"TopBase/BackButton"*/);
    byte_596E437 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_15149/*"TopBase/BackButton"*/, 0);
}


void WarBoardConfigurationUIContoroller__OpenHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *title; // x20
  System_String_o *message; // x21
  int32_t leftIndent; // w22
  Il2CppObject *v9; // x23
  ScrollMessageDialog_ClickDelegate_o *v10; // x24

  if ( (byte_596E42D & 1) == 0 )
  {
    sub_2213A60(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__36_0__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E42D = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__HideSimplePopup(Instance, 0, 0);
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
          Instance = (WarBoardManager_o *)QuestPhaseEntity__getHintMessageTitle((QuestPhaseEntity_o *)Instance, 0);
          if ( !this->fields.questPhaseEntity )
            goto LABEL_16;
          title = (System_String_o *)Instance;
          Instance = (WarBoardManager_o *)QuestPhaseEntity__getHintMessage(this->fields.questPhaseEntity, 0);
          if ( !this->fields.questPhaseEntity )
            goto LABEL_16;
          message = (System_String_o *)Instance;
          leftIndent = QuestPhaseEntity__getHintLeftIndent(this->fields.questPhaseEntity, 0);
        }
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = (ScrollMessageDialog_ClickDelegate_o *)sub_2213CCC(ScrollMessageDialog_ClickDelegate_TypeInfo);
        ScrollMessageDialog_ClickDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__36_0__,
          0);
        if ( v9 )
        {
          CommonUI__OpenScrollMessageDialog((CommonUI_o *)v9, title, message, leftIndent, v10, 0, 1, 0, 1, 0);
          return;
        }
      }
    }
LABEL_16:
    sub_2213CDC(Instance, v4);
  }
  WarBoardConfigurationUIContoroller__EndNoticeHint(this, method);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardConfigurationUIContoroller__SetActiveCostLabel(
        WarBoardConfigurationUIContoroller_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *costBaseObj; // x0

  costBaseObj = this->fields.costBaseObj;
  if ( !costBaseObj )
    sub_2213CDC(0, isActive);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0);
}


void WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *newRuleBg; // x20
  __int64 v5; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_596E42F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&StringLiteral_21186/*"icon_noticebg_01"*/);
    byte_596E42F = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetCommon(newRuleBg, 0);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_21186/*"icon_noticebg_01"*/, 0),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0), !newRuleObject) )
  {
    sub_2213CDC(Instance, v5);
  }
  UnityEngine_GameObject__SetActive(newRuleObject, (unsigned __int8)Instance & 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardConfigurationUIContoroller___OpenHintDialog_b__36_0(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  WarBoardConfigurationUIContoroller__CloseHintDialog(this, (const MethodInfo *)isDecide);
  WarBoardConfigurationUIContoroller__EndNoticeHint(this, v4);
}


void WarBoardConfigurationUIContoroller___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E438 & 1) == 0 )
  {
    sub_2213A60(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_596E438 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardConfigurationUIContoroller___c___ctor(
        WarBoardConfigurationUIContoroller___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardConfigurationUIContoroller___c___InitStartButton_b__5_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  if ( (byte_596E439 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E439 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
}


UnityEngine_GameObject_o *WarBoardConfigurationUIContoroller___c___InitStartButton_b__5_1(
        WarBoardConfigurationUIContoroller___c_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
}


void WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__44_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596E43A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E43A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void WarBoardConfigurationUIContoroller___c__DisplayClass48_0___ctor(
        WarBoardConfigurationUIContoroller___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardConfigurationUIContoroller___c__DisplayClass48_0___IsEnabledPutOnFreeSquare_b__0(
        WarBoardConfigurationUIContoroller___c__DisplayClass48_0_o *this,
        UserServantEntity_o *svt,
        const MethodInfo *method)
{
  WarBoardConfigurationUIContoroller___c__DisplayClass48_0_o *v4; // x20
  System_Collections_Generic_List_int__o *pieceSvtIdList; // x20

  v4 = this;
  if ( (byte_596E43B & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass48_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596E43B = 1;
  }
  if ( !svt )
    goto LABEL_10;
  if ( !UserServantEntity__IsLeave(svt, 0) && UserServantEntity__getCost(svt, 0) <= v4->fields.freeCost )
  {
    pieceSvtIdList = v4->fields.pieceSvtIdList;
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass48_0_o *)UserServantEntity__getSvtId(svt, 0);
    if ( pieceSvtIdList )
      return !System_Collections_Generic_List_int___Contains(
                pieceSvtIdList,
                (int32_t)this,
                (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_2213CDC(this, svt);
  }
  return 0;
}