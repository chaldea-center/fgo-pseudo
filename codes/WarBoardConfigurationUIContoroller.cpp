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
    sub_1C93D2C(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2E6B9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E6B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
}


void WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v6; // x0

  if ( (byte_4D2E6BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardManager_TypeInfo);
    byte_4D2E6BC = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0);
  UnityEngine_PlayerPrefs__Save(0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_1C93D2C(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0);
}


void WarBoardConfigurationUIContoroller__Deactive(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardConfigurationUIContoroller__EndNoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_endCallbackNoticeHint; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *endCallbackNoticeHint; // t1

  endCallbackNoticeHint = this->fields.endCallbackNoticeHint;
  p_endCallbackNoticeHint = (GrandQuestFolderBoardItem_o *)&this->fields.endCallbackNoticeHint;
  v9 = endCallbackNoticeHint;
  if ( endCallbackNoticeHint )
  {
    p_endCallbackNoticeHint->klass = 0;
    sub_1C93A78(p_endCallbackNoticeHint, 0, v2, v3, v4, v5, v6, v7);
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
  BalanceConfig_c *v3; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classCompatibilitySprite; // x19

  if ( (byte_4D2E6B2 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&StringLiteral_17804/*"buttontxt_formation_20"*/);
    byte_4D2E6B2 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v3->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_41038904(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17804/*"buttontxt_formation_20"*/, 0);
  }
}


void WarBoardConfigurationUIContoroller__InitCost(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  Il2CppType *v3; // x20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_72079808; // x0
  UnityEngine_Object_o *v6; // x20
  UIFont_o *Component_object; // x0
  const MethodInfo *v8; // x1
  UIFont_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4D2E6AC & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C93AD4(&UnityEngine_GameObject_var);
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    sub_1C93AD4(&StringLiteral_6835/*"Fonts/FGO-NumberFont-02"*/);
    byte_4D2E6AC = 1;
  }
  v3 = UnityEngine_GameObject_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v3, 0);
  _72079808 = UnityEngine_Resources__Load_72079808((System_String_o *)StringLiteral_6835/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0);
  if ( _72079808 )
  {
    if ( (UnityEngine_GameObject_c *)_72079808->klass == UnityEngine_GameObject_TypeInfo )
      v6 = _72079808;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIFont_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_20;
    Component_object = (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)v6,
                                     (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v9 = Component_object,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, Component_object, 0),
          (Component_object = (UIFont_o *)this->fields.maxCostLabel) == 0)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v9, 0),
          (Component_object = (UIFont_o *)this->fields.spritLabel) == 0)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v9, 0),
          (Component_object = (UIFont_o *)this->fields.currentApLabel) == 0) )
    {
LABEL_20:
      sub_1C93D2C(Component_object, v8);
    }
    UILabel__set_bitmapFont((UILabel_o *)Component_object, v9, 0);
  }
  WarBoardConfigurationUIContoroller__ModifyCost(this, v8);
  WarBoardConfigurationUIContoroller__ModifyAP(this, 0, v10);
}


void WarBoardConfigurationUIContoroller__InitHintButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *hintButtonObj; // x0
  __int64 v4; // x8
  __int64 v5; // x21
  struct QuestHintEntity_o **p_questHintEntity; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  QuestPhaseEntity_o **p_questPhaseEntity; // x21
  System_String_o *message; // x0

  if ( (byte_4D2E6B5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E6B5 = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  hintButtonObj = *(QuestPhaseEntity_o **)&hintButtonObj[5].fields.friendshipExp;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( WarBoardData__GetPartySkillId((WarBoardData_o *)hintButtonObj, 0) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  v4 = *(_QWORD *)&hintButtonObj[5].fields.friendshipExp;
  if ( !v4 )
    goto LABEL_30;
  v5 = *(_QWORD *)(v4 + 104);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !v5 )
    goto LABEL_30;
  if ( !hintButtonObj )
    goto LABEL_30;
  p_questHintEntity = &this->fields.questHintEntity;
  QuestHintMaster__TryGetEntity(
    (QuestHintMaster_o *)hintButtonObj,
    &this->fields.questHintEntity,
    *(_DWORD *)(v5 + 124),
    *(_DWORD *)(v5 + 128),
    0);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !hintButtonObj )
    goto LABEL_30;
  v7 = *(_DWORD *)(v5 + 124);
  v8 = *(_DWORD *)(v5 + 128);
  p_questPhaseEntity = &this->fields.questPhaseEntity;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)hintButtonObj, &this->fields.questPhaseEntity, v7, v8, 0);
  if ( *p_questHintEntity )
  {
    message = (*p_questHintEntity)->fields.message;
  }
  else
  {
    if ( !*p_questPhaseEntity )
      goto LABEL_20;
    message = QuestPhaseEntity__getHintMessage(*p_questPhaseEntity, 0);
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
  {
LABEL_20:
    hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
    if ( hintButtonObj )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 0, 0);
      return;
    }
LABEL_30:
    sub_1C93D2C(hintButtonObj, method);
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
  if ( QuestPhaseEntity__getHintOpenType(hintButtonObj, 0) )
  {
LABEL_24:
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ReadData(0);
  }
}


void WarBoardConfigurationUIContoroller__InitStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *startButton; // x20
  __int64 v4; // x1
  struct UICommonButton_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x20
  WarBoardConfigurationUIContoroller___c_c *v7; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v9; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  WarBoardConfigurationUIContoroller___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_object__object__o *_9__5_1; // x21
  Il2CppObject *v21; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct UnityEngine_GameObject_array *v30; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct UnityEngine_GameObject_array *v44; // x1
  const MethodInfo *v45; // x1

  if ( (byte_4D2E6AA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_UIWidget___);
    sub_1C93AD4(&System_Func_UIWidget__GameObject__TypeInfo);
    sub_1C93AD4(&System_Func_UIWidget__bool__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__);
    sub_1C93AD4(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_4D2E6AA = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0, 0) )
  {
    v5 = this->fields.startButton;
    if ( !v5 )
      goto LABEL_21;
    ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                         (UnityEngine_Component_o *)v5,
                                                                                         1,
                                                                                         (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
    v7 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v7 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v7->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UIWidget__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v9,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        0);
      static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
        (int32_t)_9__5_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = System_Linq_Enumerable__Where_object_(
            ComponentsInChildren_object,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v18 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v19 = v17;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v18 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_1 = (System_Func_object__object__o *)v18->static_fields->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__5_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_object__object____ctor(
        _9__5_1,
        v21,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        0);
      v22 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v22->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v22->__9__5_1, (int32_t)_9__5_1, v23, v24, v25, v26, v27, v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v19,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v30 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v29,
                                                   (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v30;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.startButtonTweenTargetCache,
      (int32_t)v30,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    v5 = this->fields.startButton;
    if ( !v5 )
LABEL_21:
      sub_1C93D2C(v5, v4);
    v44 = *p_startButtonTweenTargetCache;
    v5->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.tweenTargets, (int32_t)v44, v38, v39, v40, v41, v42, v43);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v45);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  GrandQuestFolderBoardItem_o *p_monitor; // x24
  int max_length; // w8
  unsigned int v19; // w29
  WarBoardPieceData_o *v20; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v22; // x26
  __int64 v23; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  int v27; // w8
  __int64 v28; // x26
  System_Func_object__bool__o **v29; // x23
  WarBoardPieceData_o *v30; // x24
  __int64 v31; // x8
  __int64 v32; // x8
  int32_t *v33; // x8
  int32_t v34; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  System_Collections_Generic_List_int__o *v37; // x1
  UserServantMaster_o *v38; // x0
  System_Collections_Generic_List_int__o *v39; // x25
  struct System_Int32_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  System_Func_object__bool__o *v43; // x25
  System_Collections_Generic_List_T__o *v44; // x24
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  Il2CppObject *v52; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4D2E6C1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_UserServantEntity___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_1C93AD4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass48_0__IsEnabledPutOnFreeSquare_b__0__);
    sub_1C93AD4(&WarBoardConfigurationUIContoroller___c__DisplayClass48_0_TypeInfo);
    sub_1C93AD4(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4D2E6C1 = 1;
  }
  entity = 0;
  v4 = (Il2CppObject *)sub_1C93D20(WarBoardConfigurationUIContoroller___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor(v4, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v7 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_66;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, 0);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_66;
  v52 = v4;
  v4[1].monitor = v10;
  p_monitor = (GrandQuestFolderBoardItem_o *)&v4[1].monitor;
  sub_1C93A78(p_monitor, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
        sub_1C93D34(Instance);
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
                     (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_monitor->klass;
        v23 = *((_QWORD *)Instance + 10);
        v22 = *((_QWORD *)Instance + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v54.fields.currentCryptoKey = v23;
        *(_QWORD *)&v54.fields.fakeValue = v22;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v54, 0);
        if ( !klass )
          break;
        items = klass->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
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
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
    sub_1C93D2C(Instance, UserServantId_k__BackingField);
  }
LABEL_22:
  Instance = (void *)WarBoardData__get_FormationLimitCost(warBoardData, 0);
  LODWORD(v52[1].klass) = (_DWORD)Instance - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v27 = EditableServantPieces->max_length;
  if ( v27 < 1 )
    return 0;
  v28 = 0;
  v29 = (System_Func_object__bool__o **)&v52[2];
  while ( 1 )
  {
    if ( (unsigned int)v28 >= v27 )
      goto LABEL_67;
    v30 = EditableServantPieces->m_Items[v28];
    if ( !v30 )
      goto LABEL_66;
    if ( v30->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v28], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_object_(
                     v7,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_66;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v30->fields._restrictionId_k__BackingField,
                             (const MethodInfo_34632C0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_object_(
                       v7,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_66;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity[2].monitor,
                       0);
          if ( Instance && (v31 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v31 )
              goto LABEL_67;
            v32 = *((_QWORD *)Instance + 4);
            if ( !v32 )
              goto LABEL_66;
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            v33 = (int32_t *)(v32 + 16);
          }
          else
          {
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
              Instance = WarBoardIndividualityClassMaster_TypeInfo;
            }
            v33 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v34 = *v33;
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v34 == static_fields->ALL_CLASS_ID )
          {
            if ( !v8 )
              goto LABEL_66;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v8, 0);
          }
          else
          {
            if ( !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v34 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_object_(
                           v7,
                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_66;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0);
              if ( !v8 )
                goto LABEL_66;
              v37 = (System_Collections_Generic_List_int__o *)Instance;
              v38 = (UserServantMaster_o *)v8;
            }
            else
            {
              v39 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v39,
                (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v39 )
                goto LABEL_66;
              v40 = v39->fields._items;
              v41 = Method_System_Collections_Generic_List_int__Add__;
              ++v39->fields._version;
              if ( !v40 )
                goto LABEL_66;
              v42 = v39->fields._size;
              if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v39,
                  v34,
                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
              }
              else
              {
                v39->fields._size = v42 + 1;
                v40->m_Items[v42] = v34;
              }
              if ( !v8 )
                goto LABEL_66;
              v38 = (UserServantMaster_o *)v8;
              v37 = v39;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v38, v37, 0);
          }
          v43 = *v29;
          v44 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*v29 )
          {
            v43 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v43,
              v52,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass48_0__IsEnabledPutOnFreeSquare_b__0__,
              0);
            v52[2].klass = (Il2CppClass *)v43;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v52[2], (int32_t)v43, v45, v46, v47, v48, v49, v50);
          }
          Instance = (void *)BasicHelper__Any_object_(
                               v44,
                               (System_Func_T__bool__o *)v43,
                               (const MethodInfo_318DB78 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v27 = EditableServantPieces->max_length;
    if ( (int)++v28 >= v27 )
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
  if ( (byte_4D2E6AE & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2E6AE = 1;
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
    v8 = sub_1C69B68(v3);
  v9 = *(System_String_o **)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (v9[12].fields._firstChar & 0x100) == 0 )
    v9 = (System_String_o *)sub_1C69B68(v3);
  v10 = **(_QWORD **)&v9[7].fields;
  if ( !v10 || (v11 = *(WarBoardData_o **)(v10 + 440)) == 0 )
LABEL_19:
    sub_1C93D2C(v9, *(_QWORD *)&ap);
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v10 + 440), 0, 0, 0);
  if ( ActionPointEntity && !WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0) )
  {
    v9 = (System_String_o *)this->fields.currentApLabel;
    if ( v9 )
    {
      v13 = (System_String_o *)StringLiteral_1116/*"0"*/;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  currentApLabel = this->fields.currentApLabel;
  BaseActionPoint = WarBoardData__GetBaseActionPoint(v11, 0, 0, 0);
  p_BaseActionPoint = &BaseActionPoint;
LABEL_14:
  v9 = System_Int32__ToString((int32_t)p_BaseActionPoint, 0);
  if ( !currentApLabel )
    goto LABEL_19;
  v13 = v9;
  v9 = (System_String_o *)currentApLabel;
LABEL_16:
  UILabel__set_text((UILabel_o *)v9, v13, 0);
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
  WarBoardPieceData_o *Piece_38493796; // x0
  WarBoardPieceData_o *v11; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v13; // x21
  const MethodInfo *v14; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v18; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E6AF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E6AF = 1;
  }
  entity = 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C69B68(v3);
  methodPtr = *(WarBoardData_o **)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (BYTE5(methodPtr[1].fields.squares) & 1) == 0 )
    methodPtr = (WarBoardData_o *)sub_1C69B68(v3);
  klass = methodPtr->fields.reinforcementsSaveList->klass;
  if ( !klass )
    goto LABEL_35;
  methodPtr = (WarBoardData_o *)klass->vtable._8_unknown.methodPtr;
  if ( !methodPtr )
    goto LABEL_35;
  ActionPointEntity = WarBoardData__GetActionPointEntity(methodPtr, 0, 0, 0);
  methodPtr = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !methodPtr )
    goto LABEL_35;
  methodPtr = (WarBoardData_o *)methodPtr[1].fields.playedStageReinforcementsList;
  if ( !methodPtr )
    goto LABEL_35;
  Piece_38493796 = WarBoardData__GetPiece_38493796(methodPtr, squareIndex, 0);
  if ( ActionPointEntity )
  {
    v11 = Piece_38493796;
    HasCost = WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0);
    if ( v11 )
    {
      if ( !HasCost )
      {
        if ( v11->fields._UserServantId_k__BackingField < 1 )
        {
          if ( !WarBoardPieceData__get_IsNpc(v11, 0) || !v11->fields._battleServant_k__BackingField )
          {
            v18 = this;
            baseActionPoint = 0;
LABEL_33:
            WarBoardConfigurationUIContoroller__ModifyAP(v18, baseActionPoint, v14);
            return;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          battleServant_k__BackingField = v11->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            v13 = (WarBoardActionPointClassMaster_o *)methodPtr;
            methodPtr = (WarBoardData_o *)BattleServantData__getClassId(battleServant_k__BackingField, 0, 0);
            if ( v13 )
            {
LABEL_30:
              EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                              v13,
                                              ActionPointEntity,
                                              (int32_t)methodPtr,
                                              0);
              if ( !EntityFromActionPointEntity )
                return;
              baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
              v18 = this;
              goto LABEL_33;
            }
          }
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( methodPtr )
          {
            if ( !DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)methodPtr,
                    &entity,
                    v11->fields._UserServantId_k__BackingField,
                    (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_35;
            v13 = (WarBoardActionPointClassMaster_o *)methodPtr;
            methodPtr = (WarBoardData_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0, 0);
            if ( !v13 )
              goto LABEL_35;
            goto LABEL_30;
          }
        }
LABEL_35:
        sub_1C93D2C(methodPtr, *(_QWORD *)&squareIndex);
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
  System_String_o *v9; // x0
  UILabel_o *maxCostLabel; // x22
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  UILabel_o *spritLabel; // x22
  System_String_o *v14; // x0
  UILabel_o *currentCostLabel; // x22
  System_String_o *v16; // x0
  const MethodInfo *v17; // x1
  int32_t FormationLimitCost; // [xsp+8h] [xbp-38h] BYREF
  int32_t CurrentPartyCost_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2E6AD & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C93AD4(&StringLiteral_15510/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C93AD4(&StringLiteral_15508/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_1C93AD4(&StringLiteral_15509/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_4D2E6AD = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(System_String_o **)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (v5[12].fields._firstChar & 0x100) == 0 )
    v5 = (System_String_o *)sub_1C69B68(v2);
  v6 = **(_QWORD **)&v5[7].fields;
  if ( !v6 )
    goto LABEL_19;
  v7 = *(WarBoardData_o **)(v6 + 440);
  if ( !v7 )
    goto LABEL_19;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(*(WarBoardData_o **)(v6 + 440), 0);
  CurrentPartyCost_k__BackingField = v7->fields._CurrentPartyCost_k__BackingField;
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v7, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15508/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0);
  maxCostLabel = this->fields.maxCostLabel;
  v11 = v9;
  v12 = System_Int32__ToString((int32_t)&FormationLimitCost, 0);
  v5 = System_String__Concat_64425724(v11, v12, 0);
  if ( !maxCostLabel )
    goto LABEL_19;
  UILabel__set_text(maxCostLabel, v5, 0);
  spritLabel = this->fields.spritLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15510/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  v5 = System_String__Concat_64425724(v11, v14, 0);
  if ( !spritLabel )
    goto LABEL_19;
  UILabel__set_text(spritLabel, v5, 0);
  currentCostLabel = this->fields.currentCostLabel;
  if ( IsPartyCostOver )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15509/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
  }
  v16 = System_Int32__ToString((int32_t)&CurrentPartyCost_k__BackingField, 0);
  v5 = System_String__Concat_64425724(v11, v16, 0);
  if ( !currentCostLabel )
LABEL_19:
    sub_1C93D2C(v5, method);
  UILabel__set_text(currentCostLabel, v5, 0);
  WarBoardConfigurationUIContoroller__ModifyStartButton(this, v17);
}


void WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *startButton; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  long double v11; // q0
  __int64 v12; // x0
  struct UICommonButton_o *v13; // x0
  __int64 v14; // x8
  __int64 v15; // x8
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2E6AB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4D2E6AB = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0, 0) )
  {
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C69B68(v11);
    v13 = *(struct UICommonButton_o **)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (BYTE1(v13[2].fields.specifyPressedColor.fields.g) & 1) == 0 )
      v13 = (struct UICommonButton_o *)sub_1C69B68(v11);
    v14 = **(_QWORD **)&v13[1].fields.specifyHoverColor.fields.b;
    if ( !v14 )
      goto LABEL_19;
    v15 = *(_QWORD *)(v14 + 440);
    if ( !v15 )
      goto LABEL_19;
    v13 = this->fields.startButton;
    if ( *(int *)(v15 + 212) >= 1 )
    {
      if ( v13 )
      {
        startButtonTweenTargetCache = this->fields.startButtonTweenTargetCache;
        v13->fields.tweenTargets = startButtonTweenTargetCache;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v13->fields.tweenTargets,
          (int32_t)startButtonTweenTargetCache,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10);
        v13 = this->fields.startButton;
        if ( v13 )
        {
          UICommonButton__SetButtonEnable(v13, 1, 1, 0);
          return;
        }
      }
LABEL_19:
      sub_1C93D2C(v13, v4);
    }
    if ( !v13 )
      goto LABEL_19;
    UICommonButton__SetButtonEnable(v13, 0, 1, 0);
    v13 = this->fields.startButton;
    if ( !v13 )
      goto LABEL_19;
    v13->fields.tweenTargets = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v13->fields.tweenTargets, 0, v17, v18, v19, v20, v21, v22);
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
  bool FixedMasterEquipInfo; // w20
  UnityEngine_Object_o *masterEquipFixedLabel; // x21
  UILabel_o *v9; // x21
  int32_t *p_fakeValue; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_femaleImageId; // x9
  __int64 v12; // x22
  __int64 v13; // x21
  unsigned int v14; // w0
  Il2CppObject *Master_object; // x21
  long double v16; // q0
  __int64 v17; // x8
  __int64 v18; // x8
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *masterEquipFixedObject; // x21
  UnityEngine_Object_o *masterEquipButton; // x21
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-50h] BYREF
  int32_t maxLv[2]; // [xsp+18h] [xbp-48h] BYREF
  EquipEntity_o *fixedEquipEntity; // [xsp+20h] [xbp-40h] BYREF
  int32_t genderImageId; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4D2E6B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C93AD4(&StringLiteral_10318/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/);
    byte_4D2E6B0 = 1;
  }
  *(_QWORD *)maxLv = 0;
  fixedEquipEntity = 0;
  detail = 0;
  equipName = 0;
  genderImageId = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v2);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(masterEquipFixedLabel, 0, 0) )
    {
      v9 = this->fields.masterEquipFixedLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10318/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/, 0);
      if ( !v9 )
        goto LABEL_50;
      UILabel__set_text(v9, (System_String_o *)SelfUserGame, 0);
    }
    SelfUserGame = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame || !fixedEquipEntity )
      goto LABEL_50;
    p_fakeValue = &fixedEquipEntity->fields.maleImageId.fields.fakeValue;
    if ( *(_DWORD *)(SelfUserGame + 76) == 2 )
    {
      p_fakeValue = &fixedEquipEntity->fields.femaleImageId.fields.fakeValue;
      p_femaleImageId = &fixedEquipEntity->fields.femaleImageId;
    }
    else
    {
      p_femaleImageId = &fixedEquipEntity->fields.maleImageId;
    }
    v12 = *(_QWORD *)&p_femaleImageId->fields.currentCryptoKey;
    v13 = *(_QWORD *)p_fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v12;
    *(_QWORD *)&v27.fields.fakeValue = v13;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v27, 0);
    method = (const MethodInfo *)v14;
    genderImageId = v14;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEquipMaster___);
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C69B68(v16);
    SelfUserGame = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
    if ( (*(_BYTE *)(SelfUserGame + 309) & 1) == 0 )
      SelfUserGame = sub_1C69B68(v16);
    v18 = **(_QWORD **)(SelfUserGame + 184);
    if ( !v18 )
      goto LABEL_50;
    SelfUserGame = *(_QWORD *)(v18 + 440);
    if ( !SelfUserGame )
      goto LABEL_50;
    SelfUserGame = WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)SelfUserGame, 0);
    if ( !Master_object )
      goto LABEL_50;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               SelfUserGame,
               (const MethodInfo_3465A24 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( Entity )
      UserEquipEntity__getEquipInfo(
        (UserEquipEntity_o *)Entity,
        &maxLv[1],
        maxLv,
        &equipName,
        &detail,
        &genderImageId,
        0);
    method = (const MethodInfo *)(unsigned int)genderImageId;
  }
  if ( (int)method >= 1 )
  {
    SelfUserGame = (__int64)this->fields.userEquipIcon;
    if ( !SelfUserGame )
      goto LABEL_50;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)SelfUserGame, (int32_t)method, 0);
  }
  masterEquipFixedObject = (UnityEngine_Object_o *)this->fields.masterEquipFixedObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterEquipFixedObject, 0, 0) )
  {
    SelfUserGame = (__int64)this->fields.masterEquipFixedObject;
    if ( !SelfUserGame )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, FixedMasterEquipInfo, 0);
  }
  masterEquipButton = (UnityEngine_Object_o *)this->fields.masterEquipButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterEquipButton, 0, 0) )
  {
    SelfUserGame = (__int64)this->fields.masterEquipButton;
    if ( SelfUserGame )
    {
      UICommonButton__SetEnable((UICommonButton_o *)SelfUserGame, !FixedMasterEquipInfo, 0);
      return;
    }
LABEL_50:
    sub_1C93D2C(SelfUserGame, method);
  }
}


void WarBoardConfigurationUIContoroller__NoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  struct QuestHintEntity_o *v14; // x8
  QuestPhaseEntity_o *openType; // x0
  _DWORD *v16; // x9
  int32_t v17; // w20
  int32_t v18; // w21

  if ( (byte_4D2E6B7 & 1) == 0 )
  {
    sub_1C93AD4(&QuestHintDialogOpenManager_TypeInfo);
    byte_4D2E6B7 = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endCallbackNoticeHint,
    (int32_t)callback,
    (int32_t)method,
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
    openType = (QuestPhaseEntity_o *)QuestPhaseEntity__getHintOpenType(openType, 0);
  }
  if ( (_DWORD)openType != 1 )
    goto LABEL_22;
  v16 = this->fields.questHintEntity;
  if ( !v16 )
  {
    v16 = this->fields.questPhaseEntity;
    if ( !v16 )
LABEL_23:
      sub_1C93D2C(openType, v10);
  }
  v17 = v16[4];
  v18 = v16[5];
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  if ( QuestHintDialogOpenManager__IsQuestHintOpen(v17, v18, 0) )
    goto LABEL_8;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__SetQuestInfo(v17, v18, 0);
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

  if ( (byte_4D2E6B3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__);
    byte_4D2E6B3 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C69B68(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C69B68(v7);
  v10 = **(CommonUI_o ***)(v9 + 184);
  v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0);
  if ( !v10 )
LABEL_13:
    sub_1C93D2C(Instance, v6);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_4D2E6B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
    byte_4D2E6B6 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickHintButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickHintButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.endCallbackNoticeHint, 0, v8, v9, v10, v11, v12, v13);
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
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  CommonUI_o *v10; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  System_String_o *v13; // x23
  System_String_o *v14; // x24
  CommonConfirmDialog_ClickDelegate_o *v15; // x25

  if ( (byte_4D2E6BF & 1) == 0 )
  {
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__);
    sub_1C93AD4(&StringLiteral_15517/*"WARBOARD_RETURN_CONFIRM_NO"*/);
    sub_1C93AD4(&StringLiteral_15516/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_15519/*"WARBOARD_RETURN_CONFIRM_YES"*/);
    sub_1C93AD4(&StringLiteral_15518/*"WARBOARD_RETURN_CONFIRM_TITLE"*/);
    byte_4D2E6BF = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C69B68(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C69B68(v7);
  v10 = **(CommonUI_o ***)(v9 + 184);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15518/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15516/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15519/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15517/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0);
  if ( !v10 )
LABEL_15:
    sub_1C93D2C(Instance, v6);
  CommonUI__OpenConfirmDialog_31580640(v10, v11, v12, v13, v14, 0, v15, 0, 28, 180.0, 43.0, 0, 0, 0);
}


void WarBoardConfigurationUIContoroller__OnClickReturnConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D2E6C0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2E6C0 = 1;
  }
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2AFE8 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2AFE8 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_15:
      sub_1C93D2C(Instance, v6);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D2E6BB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__);
    byte_4D2E6BB = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  Il2CppObject *v10; // x19
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  WarBoardConfigurationUIContoroller___c_c *v13; // x8
  NotificationDialog_ClickDelegate_o *_9__44_0; // x22
  Il2CppObject *v15; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  bool IsEnabledPutOnFreeSquare; // w22
  Il2CppObject *v24; // x20
  System_String_o *v25; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  System_String_o *v28; // x24
  CommonConfirmDialog_ClickDelegate_o *v29; // x25
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  System_String_o *v32; // x24
  CommonConfirmDialog_ClickDelegate_o *v33; // x25
  System_Nullable_float__o v34; // [xsp+60h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_4D2E6BD & 1) == 0 )
  {
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__44_0__);
    sub_1C93AD4(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__);
    sub_1C93AD4(&StringLiteral_15506/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_15525/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_15522/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_15507/*"WARBOARD_PARTY_COST_OVER_TITLE"*/);
    sub_1C93AD4(&StringLiteral_15524/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/);
    sub_1C93AD4(&StringLiteral_15523/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/);
    sub_1C93AD4(&StringLiteral_15526/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/);
    byte_4D2E6BD = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickStartButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickStartButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__HideSimplePopup(Instance, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_29;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(Instance->fields._warBoardData_k__BackingField, 0);
  if ( IsPartyCostOver )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
      v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15507/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15506/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0);
      v13 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v13 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      _9__44_0 = v13->static_fields->__9__44_0;
      if ( !_9__44_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = WarBoardConfigurationUIContoroller___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__44_0 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__44_0,
          v15,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__44_0__,
          0);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        static_fields->__9__44_0 = _9__44_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__44_0,
          (int32_t)_9__44_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      titlePosY = 0;
      System_Nullable_float____ctor(
        (System_Nullable_float__o)&titlePosY,
        90.0,
        (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
      v34 = 0;
      System_Nullable_float____ctor(
        (System_Nullable_float__o)&v34,
        15.0,
        (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
      if ( v10 )
      {
        CommonUI__OpenNotificationDialog_31583416(
          (CommonUI_o *)v10,
          v11,
          v12,
          _9__44_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v34,
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
LABEL_29:
    sub_1C93D2C(Instance, v6);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)IsPartyCostOver,
                               warBoardData_k__BackingField,
                               v9);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
  v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15525/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0);
  if ( IsEnabledPutOnFreeSquare )
  {
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15523/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15526/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15524/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0);
    v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0);
    if ( !v24 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_31580640((CommonUI_o *)v24, v25, v26, v27, v28, 1, v29, 0, 28, 180.0, 40.0, 0, 0, 0);
  }
  else
  {
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15522/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15526/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15524/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0);
    v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v33,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0);
    if ( !v24 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_31580640((CommonUI_o *)v24, v25, v30, v31, v32, 1, v33, 0, 28, 180.0, 43.0, 0, 0, 0);
  }
}


void WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D2E6BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E6BE = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_9:
    sub_1C93D2C(Instance, v5);
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

  if ( (byte_4D2E6B1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
    byte_4D2E6B1 = 1;
  }
  v2 = Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C93AEC(Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C69B68(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C69B68(v5);
  Instance = **(Il2CppObject ***)(v7 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C93D2C(Instance, v4);
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

  if ( (byte_4D2E6B4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E6B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C69B68(v4);
  Instance = **(Il2CppObject ***)(v6 + 184);
  if ( !Instance )
LABEL_10:
    sub_1C93D2C(Instance, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0, 0);
}


void WarBoardConfigurationUIContoroller__OnEnable(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D2E6C2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_14654/*"TopBase/BackButton"*/);
    byte_4D2E6C2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_14654/*"TopBase/BackButton"*/, 0);
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

  if ( (byte_4D2E6B8 & 1) == 0 )
  {
    sub_1C93AD4(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__36_0__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2E6B8 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C93D20(ScrollMessageDialog_ClickDelegate_TypeInfo);
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
    sub_1C93D2C(Instance, v4);
  }
  WarBoardConfigurationUIContoroller__EndNoticeHint(this, method);
}


void WarBoardConfigurationUIContoroller__SetActiveCostLabel(
        WarBoardConfigurationUIContoroller_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *costBaseObj; // x0

  costBaseObj = this->fields.costBaseObj;
  if ( !costBaseObj )
    sub_1C93D2C(0, isActive);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0);
}


void WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UISprite_o *newRuleBg; // x20
  __int64 v4; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_4D2E6BA & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_20435/*"icon_noticebg_01"*/);
    byte_4D2E6BA = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_20435/*"icon_noticebg_01"*/, 0),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0), !newRuleObject) )
  {
    sub_1C93D2C(Instance, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E6C3 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_4D2E6C3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields,
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
  if ( (byte_4D2E6C4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E6C4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
}


UnityEngine_GameObject_o *WarBoardConfigurationUIContoroller___c___InitStartButton_b__5_1(
        WarBoardConfigurationUIContoroller___c_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
}


void WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__44_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2E6C5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E6C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C93D2C(Instance, v4);
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
  if ( (byte_4D2E6C6 & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass48_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D2E6C6 = 1;
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
                (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_1C93D2C(this, svt);
  }
  return 0;
}