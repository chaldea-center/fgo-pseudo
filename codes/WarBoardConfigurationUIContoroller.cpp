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
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A59177 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A59177 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v3; // x1
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v6; // x0

  if ( (byte_4A5917A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardManager_TypeInfo);
    byte_4A5917A = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0LL),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(Instance, v3);
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
    sub_1B8880C(0LL, v3);
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
    sub_1B88554(p_endCallbackNoticeHint, 0, v2, v3);
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
  BalanceConfig_c *v3; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classCompatibilitySprite; // x19

  if ( (byte_4A59170 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&StringLiteral_17671/*"buttontxt_formation_20"*/);
    byte_4A59170 = 1;
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
  if ( CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17671/*"buttontxt_formation_20"*/, 0LL);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__InitCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  intptr_t v3; // w20
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_69419308; // x0
  UnityEngine_Object_o *v6; // x20
  UIFont_o *Component_object; // x0
  const MethodInfo *v8; // x1
  UIFont_o *v9; // x20
  const MethodInfo *v10; // x2
  System_RuntimeTypeHandle_o v11; // 0:w0.4

  if ( (byte_4A5916A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1B885B0(&UnityEngine_GameObject_var);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&StringLiteral_6771/*"Fonts/FGO-NumberFont-02"*/);
    byte_4A5916A = 1;
  }
  v3 = (int)UnityEngine_GameObject_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v11.fields.value = v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0LL);
  _69419308 = UnityEngine_Resources__Load_69419308((System_String_o *)StringLiteral_6771/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0LL);
  if ( _69419308 )
  {
    if ( (UnityEngine_GameObject_c *)_69419308->klass == UnityEngine_GameObject_TypeInfo )
      v6 = _69419308;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIFont_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_20;
    Component_object = (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)v6,
                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v9 = Component_object,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, Component_object, 0LL),
          (Component_object = (UIFont_o *)this->fields.maxCostLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v9, 0LL),
          (Component_object = (UIFont_o *)this->fields.spritLabel) == 0LL)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v9, 0LL),
          (Component_object = (UIFont_o *)this->fields.currentApLabel) == 0LL) )
    {
LABEL_20:
      sub_1B8880C(Component_object, v8);
    }
    UILabel__set_bitmapFont((UILabel_o *)Component_object, v9, 0LL);
  }
  WarBoardConfigurationUIContoroller__ModifyCost(this, v8);
  WarBoardConfigurationUIContoroller__ModifyAP(this, 0, v10);
}


void __fastcall WarBoardConfigurationUIContoroller__InitHintButton(
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

  if ( (byte_4A59173 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A59173 = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  hintButtonObj = *(QuestPhaseEntity_o **)&hintButtonObj[5].fields.friendshipExp;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( WarBoardData__GetPartySkillId((WarBoardData_o *)hintButtonObj, 0LL) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0LL);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  v4 = *(_QWORD *)&hintButtonObj[5].fields.friendshipExp;
  if ( !v4 )
    goto LABEL_30;
  v5 = *(_QWORD *)(v4 + 104);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    0LL);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !hintButtonObj )
    goto LABEL_30;
  v7 = *(_DWORD *)(v5 + 124);
  v8 = *(_DWORD *)(v5 + 128);
  p_questPhaseEntity = &this->fields.questPhaseEntity;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)hintButtonObj, &this->fields.questPhaseEntity, v7, v8, 0LL);
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
    sub_1B8880C(hintButtonObj, method);
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
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  WarBoardConfigurationUIContoroller___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__object__o *_9__5_1; // x21
  Il2CppObject *v17; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  struct UnityEngine_GameObject_array *v22; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct UnityEngine_GameObject_array *v28; // x1
  const MethodInfo *v29; // x1

  if ( (byte_4A59168 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UIWidget___);
    sub_1B885B0(&System_Func_UIWidget__GameObject__TypeInfo);
    sub_1B885B0(&System_Func_UIWidget__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__);
    sub_1B885B0(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_4A59168 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v5 = this->fields.startButton;
    if ( !v5 )
      goto LABEL_21;
    ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                         (UnityEngine_Component_o *)v5,
                                                                                         1,
                                                                                         (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
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
      _9__5_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UIWidget__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v9,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        0LL);
      static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v11, v12);
    }
    v13 = System_Linq_Enumerable__Where_object_(
            ComponentsInChildren_object,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v14 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v15 = v13;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v14 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_1 = (System_Func_object__object__o *)v14->static_fields->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v14->static_fields->__9;
      _9__5_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_object__object____ctor(
        _9__5_1,
        v17,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        0LL);
      v18 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v18->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->__9__5_1, (int32_t)_9__5_1, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v15,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v22 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v21,
                                                   (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v22;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.startButtonTweenTargetCache, (int32_t)v22, v24, v25);
    v5 = this->fields.startButton;
    if ( !v5 )
LABEL_21:
      sub_1B8880C(v5, v4);
    v28 = *p_startButtonTweenTargetCache;
    v5->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.tweenTargets, (int32_t)v28, v26, v27);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v29);
  }
}


bool __fastcall WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
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
  ServantStatusBattleListViewItem_o *p_monitor; // x24
  int max_length; // w8
  unsigned int v15; // w29
  WarBoardPieceData_o *v16; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v18; // x26
  __int64 v19; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int v23; // w8
  __int64 v24; // x26
  System_Func_object__bool__o **v25; // x23
  WarBoardPieceData_o *v26; // x24
  __int64 v27; // x8
  __int64 v28; // x8
  int32_t *v29; // x8
  int32_t v30; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  System_Collections_Generic_List_int__o *v33; // x1
  UserServantMaster_o *v34; // x0
  System_Collections_Generic_List_int__o *v35; // x25
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  System_Func_object__bool__o *v39; // x25
  System_Collections_Generic_List_T__o *v40; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v44; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A5917F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_UserServantEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_1B885B0(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__);
    sub_1B885B0(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
    sub_1B885B0(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4A5917F = 1;
  }
  entity = 0LL;
  v4 = (Il2CppObject *)sub_1B887FC(WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor(v4, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v7 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_66;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_66;
  v44 = v4;
  v4[1].monitor = v10;
  p_monitor = (ServantStatusBattleListViewItem_o *)&v4[1].monitor;
  sub_1B88554(p_monitor, (int32_t)v10, v11, v12);
  if ( !EditableServantPieces )
    goto LABEL_66;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
LABEL_67:
        sub_1B88814(Instance, UserServantId_k__BackingField);
      v16 = EditableServantPieces->m_Items[v15];
      if ( !v16 )
        break;
      UserServantId_k__BackingField = v16->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v8 )
          break;
        Instance = DataMasterBase_object__object__long___GetEntity(
                     v8,
                     UserServantId_k__BackingField,
                     (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_monitor->klass;
        v19 = *((_QWORD *)Instance + 10);
        v18 = *((_QWORD *)Instance + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v19;
        *(_QWORD *)&v46.fields.fakeValue = v18;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
        if ( !klass )
          break;
        items = klass->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
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
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          klass->fields._size = size + 1;
          items->m_Items[size + 1] = (int)Instance;
        }
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_66:
    sub_1B8880C(Instance, UserServantId_k__BackingField);
  }
LABEL_22:
  Instance = (void *)WarBoardData__get_FormationLimitCost(warBoardData, 0LL);
  LODWORD(v44[1].klass) = (_DWORD)Instance - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v23 = EditableServantPieces->max_length;
  if ( v23 < 1 )
    return 0;
  v24 = 0LL;
  v25 = (System_Func_object__bool__o **)&v44[2];
  while ( 1 )
  {
    if ( (unsigned int)v24 >= v23 )
      goto LABEL_67;
    v26 = EditableServantPieces->m_Items[v24];
    if ( !v26 )
      goto LABEL_66;
    if ( v26->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v24], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_object_(
                     v7,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_66;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v26->fields._restrictionId_k__BackingField,
                             (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_object_(
                       v7,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_66;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity[2].monitor,
                       0LL);
          if ( Instance && (v27 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v27 )
              goto LABEL_67;
            v28 = *((_QWORD *)Instance + 4);
            if ( !v28 )
              goto LABEL_66;
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            v29 = (int32_t *)(v28 + 16);
          }
          else
          {
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
              Instance = WarBoardIndividualityClassMaster_TypeInfo;
            }
            v29 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v30 = *v29;
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v30 == static_fields->ALL_CLASS_ID )
          {
            if ( !v8 )
              goto LABEL_66;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v8, 0LL);
          }
          else
          {
            if ( !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              static_fields = WarBoardIndividualityClassMaster_TypeInfo->static_fields;
            }
            if ( v30 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_object_(
                           v7,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_66;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0LL);
              if ( !v8 )
                goto LABEL_66;
              v33 = (System_Collections_Generic_List_int__o *)Instance;
              v34 = (UserServantMaster_o *)v8;
            }
            else
            {
              v35 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v35,
                (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v35 )
                goto LABEL_66;
              v36 = v35->fields._items;
              v37 = Method_System_Collections_Generic_List_int__Add__;
              ++v35->fields._version;
              if ( !v36 )
                goto LABEL_66;
              v38 = v35->fields._size;
              if ( (unsigned int)v38 >= v36->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v35,
                  v30,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v35->fields._size = v38 + 1;
                v36->m_Items[v38 + 1] = v30;
              }
              if ( !v8 )
                goto LABEL_66;
              v34 = (UserServantMaster_o *)v8;
              v33 = v35;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v34, v33, 0LL);
          }
          v39 = *v25;
          v40 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*v25 )
          {
            v39 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v39,
              v44,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              0LL);
            v44[2].klass = (Il2CppClass *)v39;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v44[2], (int32_t)v39, v41, v42);
          }
          Instance = (void *)BasicHelper__Any_object_(
                               v40,
                               (System_Func_T__bool__o *)v39,
                               (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v23 = EditableServantPieces->max_length;
    if ( (int)++v24 >= v23 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAP(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t ap,
        const MethodInfo *method)
{
  struct UILabel_o *currentApLabel; // x19
  int32_t *p_BaseActionPoint; // x0
  __int64 v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x8
  WarBoardData_o *v10; // x20
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  System_String_o *v12; // x1
  int32_t BaseActionPoint; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = ap;
  if ( (byte_4A5916C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5916C = 1;
  }
  BaseActionPoint = 0;
  if ( ap )
  {
    currentApLabel = this->fields.currentApLabel;
    p_BaseActionPoint = &v14;
    goto LABEL_14;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  v8 = *(System_String_o **)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (v8[12].fields._firstChar & 0x100) == 0 )
    v8 = (System_String_o *)sub_1BDA48C(v8);
  v9 = **(_QWORD **)&v8[7].fields;
  if ( !v9 || (v10 = *(WarBoardData_o **)(v9 + 440)) == 0LL )
LABEL_19:
    sub_1B8880C(v8, *(_QWORD *)&ap);
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v9 + 440), 0, 0, 0LL);
  if ( ActionPointEntity && !WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL) )
  {
    v8 = (System_String_o *)this->fields.currentApLabel;
    if ( v8 )
    {
      v12 = (System_String_o *)StringLiteral_1212/*"0"*/;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  currentApLabel = this->fields.currentApLabel;
  BaseActionPoint = WarBoardData__GetBaseActionPoint(v10, 0, 0, 0LL);
  p_BaseActionPoint = &BaseActionPoint;
LABEL_14:
  v8 = System_Int32__ToString((int32_t)p_BaseActionPoint, 0LL);
  if ( !currentApLabel )
    goto LABEL_19;
  v12 = v8;
  v8 = (System_String_o *)currentApLabel;
LABEL_16:
  UILabel__set_text((UILabel_o *)v8, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardConfigurationUIContoroller__ModifyAPFromSquareIndex(
        WarBoardConfigurationUIContoroller_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x0
  WarBoardData_o *Instance; // x0
  System_Collections_Generic_List_HoldReinforcementsData__c *klass; // x8
  WarBoardActionPointEntity_o *ActionPointEntity; // x20
  WarBoardPieceData_o *Piece_35359972; // x0
  WarBoardPieceData_o *v10; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v12; // x21
  const MethodInfo *v13; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v17; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5916D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A5916D = 1;
  }
  entity = 0LL;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  Instance = *(WarBoardData_o **)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (BYTE5(Instance[1].fields.squares) & 1) == 0 )
    Instance = (WarBoardData_o *)sub_1BDA48C(Instance);
  klass = Instance->fields.reinforcementsSaveList->klass;
  if ( !klass )
    goto LABEL_35;
  Instance = (WarBoardData_o *)klass->vtable._8_unknown.method;
  if ( !Instance )
    goto LABEL_35;
  ActionPointEntity = WarBoardData__GetActionPointEntity(Instance, 0, 0, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_35;
  Piece_35359972 = WarBoardData__GetPiece_35359972(Instance, squareIndex, 0LL);
  if ( ActionPointEntity )
  {
    v10 = Piece_35359972;
    HasCost = WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0LL);
    if ( v10 )
    {
      if ( !HasCost )
      {
        if ( v10->fields._UserServantId_k__BackingField < 1 )
        {
          if ( !WarBoardPieceData__get_IsNpc(v10, 0LL) || !v10->fields._battleServant_k__BackingField )
          {
            v17 = this;
            baseActionPoint = 0;
LABEL_33:
            WarBoardConfigurationUIContoroller__ModifyAP(v17, baseActionPoint, v13);
            return;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          battleServant_k__BackingField = v10->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            v12 = (WarBoardActionPointClassMaster_o *)Instance;
            Instance = (WarBoardData_o *)BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
            if ( v12 )
            {
LABEL_30:
              EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                              v12,
                                              ActionPointEntity,
                                              (int32_t)Instance,
                                              0LL);
              if ( !EntityFromActionPointEntity )
                return;
              baseActionPoint = EntityFromActionPointEntity->fields.baseActionPoint;
              v17 = this;
              goto LABEL_33;
            }
          }
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( Instance )
          {
            if ( !DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                    &entity,
                    v10->fields._UserServantId_k__BackingField,
                    (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
            if ( !entity )
              goto LABEL_35;
            v12 = (WarBoardActionPointClassMaster_o *)Instance;
            Instance = (WarBoardData_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0LL);
            if ( !v12 )
              goto LABEL_35;
            goto LABEL_30;
          }
        }
LABEL_35:
        sub_1B8880C(Instance, *(_QWORD *)&squareIndex);
      }
    }
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyCost(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  System_String_o *v4; // x0
  __int64 v5; // x8
  WarBoardData_o *v6; // x21
  bool IsPartyCostOver; // w20
  System_String_o *v8; // x0
  UILabel_o *maxCostLabel; // x22
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  UILabel_o *spritLabel; // x22
  System_String_o *v13; // x0
  UILabel_o *currentCostLabel; // x22
  System_String_o *v15; // x0
  const MethodInfo *v16; // x1
  int32_t FormationLimitCost; // [xsp+8h] [xbp-38h] BYREF
  int32_t CurrentPartyCost_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5916B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1B885B0(&StringLiteral_15423/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1B885B0(&StringLiteral_15421/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_1B885B0(&StringLiteral_15422/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_4A5916B = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(System_String_o **)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (v4[12].fields._firstChar & 0x100) == 0 )
    v4 = (System_String_o *)sub_1BDA48C(v4);
  v5 = **(_QWORD **)&v4[7].fields;
  if ( !v5 )
    goto LABEL_19;
  v6 = *(WarBoardData_o **)(v5 + 440);
  if ( !v6 )
    goto LABEL_19;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(*(WarBoardData_o **)(v5 + 440), 0LL);
  CurrentPartyCost_k__BackingField = v6->fields._CurrentPartyCost_k__BackingField;
  FormationLimitCost = WarBoardData__get_FormationLimitCost(v6, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15421/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
  maxCostLabel = this->fields.maxCostLabel;
  v10 = v8;
  v11 = System_Int32__ToString((int32_t)&FormationLimitCost, 0LL);
  v4 = System_String__Concat_61707032(v10, v11, 0LL);
  if ( !maxCostLabel )
    goto LABEL_19;
  UILabel__set_text(maxCostLabel, v4, 0LL);
  spritLabel = this->fields.spritLabel;
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15423/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  v4 = System_String__Concat_61707032(v10, v13, 0LL);
  if ( !spritLabel )
    goto LABEL_19;
  UILabel__set_text(spritLabel, v4, 0LL);
  currentCostLabel = this->fields.currentCostLabel;
  if ( IsPartyCostOver )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15422/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
  }
  v15 = System_Int32__ToString((int32_t)&CurrentPartyCost_k__BackingField, 0LL);
  v4 = System_String__Concat_61707032(v10, v15, 0LL);
  if ( !currentCostLabel )
LABEL_19:
    sub_1B8880C(v4, method);
  UILabel__set_text(currentCostLabel, v4, 0LL);
  WarBoardConfigurationUIContoroller__ModifyStartButton(this, v16);
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *startButton; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x0
  struct UICommonButton_o *v8; // x0
  __int64 v9; // x8
  __int64 v10; // x8
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A59169 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4A59169 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0LL, 0LL) )
  {
    v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    v8 = *(struct UICommonButton_o **)(*(_QWORD *)(v7 + 192) + 16LL);
    if ( (BYTE1(v8[2].fields.specifyPressedColor.fields.g) & 1) == 0 )
      v8 = (struct UICommonButton_o *)sub_1BDA48C(v8);
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
        sub_1B88554(
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
      sub_1B8880C(v8, v4);
    }
    if ( !v8 )
      goto LABEL_19;
    UICommonButton__SetButtonEnable(v8, 0, 1, 0LL);
    v8 = this->fields.startButton;
    if ( !v8 )
      goto LABEL_19;
    v8->fields.tweenTargets = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.tweenTargets, 0, v12, v13);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__ModifyUserEquip(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  Il2CppObject *Entity; // x0
  int32_t genderImageId; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-30h] BYREF
  __int64 maxLv; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5916E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5916E = 1;
  }
  equipName = 0LL;
  maxLv = 0LL;
  detail = 0LL;
  genderImageId = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  Instance = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(Instance + 309) & 1) == 0 )
    Instance = sub_1BDA48C(Instance);
  v7 = **(_QWORD **)(Instance + 184);
  if ( !v7 )
    goto LABEL_15;
  Instance = *(_QWORD *)(v7 + 440);
  if ( !Instance )
    goto LABEL_15;
  Instance = WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
    sub_1B8880C(Instance, v4);
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

  if ( (byte_4A59175 & 1) == 0 )
  {
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A59175 = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_1B88554(
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
      sub_1B8880C(openType, v6);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  CommonUI_o *v9; // x20
  System_Action_o *v10; // x21

  if ( (byte_4A59171 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__);
    byte_4A59171 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  v9 = **(CommonUI_o ***)(v8 + 184);
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0LL);
  if ( !v9 )
LABEL_13:
    sub_1B8880C(Instance, v6);
  CommonUI__OpenClassCompatibilityMenu(v9, v10, 0LL);
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

  if ( (byte_4A59174 & 1) == 0 )
  {
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
    byte_4A59174 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickHintButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickHintButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endCallbackNoticeHint, 0, v8, v9);
    WarBoardConfigurationUIContoroller__OpenHintDialog(this, v10);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  CommonUI_o *v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  System_String_o *v13; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_4A5917D & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__);
    sub_1B885B0(&StringLiteral_15430/*"WARBOARD_RETURN_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_15429/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_15432/*"WARBOARD_RETURN_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_15431/*"WARBOARD_RETURN_CONFIRM_TITLE"*/);
    byte_4A5917D = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  v9 = **(CommonUI_o ***)(v8 + 184);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15431/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15429/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15432/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15430/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0LL);
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0LL);
  if ( !v9 )
LABEL_15:
    sub_1B8880C(Instance, v6);
  CommonUI__OpenConfirmDialog_30493952(v9, v10, v11, v12, v13, 0, v14, 0, 28, 180.0, 43.0, 0, 0, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickReturnConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5917E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5917E = 1;
  }
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5644B )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5644B = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_15:
      sub_1B8880C(Instance, v6);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4A59179 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__);
    byte_4A59179 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__, 0LL);
  WarBoardUIUtility__ShowRuleDialog(v3, v4);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickStartButton(
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
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v15; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  bool IsEnabledPutOnFreeSquare; // w22
  Il2CppObject *v20; // x20
  System_String_o *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  System_String_o *v24; // x24
  CommonConfirmDialog_ClickDelegate_o *v25; // x25
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  System_String_o *v28; // x24
  CommonConfirmDialog_ClickDelegate_o *v29; // x25
  System_Nullable_float__o v30; // [xsp+60h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+68h] [xbp-48h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v33; // 0:x0.8

  if ( (byte_4A5917B & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__);
    sub_1B885B0(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__);
    sub_1B885B0(&StringLiteral_15419/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_15438/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/);
    sub_1B885B0(&StringLiteral_15435/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_15420/*"WARBOARD_PARTY_COST_OVER_TITLE"*/);
    sub_1B885B0(&StringLiteral_15437/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/);
    sub_1B885B0(&StringLiteral_15436/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/);
    sub_1B885B0(&StringLiteral_15439/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/);
    byte_4A5917B = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickStartButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickStartButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__HideSimplePopup(Instance, 0LL, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_29;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(Instance->fields._warBoardData_k__BackingField, 0LL);
  if ( IsPartyCostOver )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15420/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0LL);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15419/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0LL);
      v13 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v13 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      _9__41_0 = v13->static_fields->__9__41_0;
      if ( !_9__41_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = WarBoardConfigurationUIContoroller___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v15,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0LL);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        static_fields->__9__41_0 = _9__41_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v17, v18);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0LL;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
      v33 = (System_Nullable_float__o)&v30;
      v30 = 0LL;
      System_Nullable_float____ctor(v33, 15.0, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
      if ( v10 )
      {
        CommonUI__OpenNotificationDialog_30496496(
          (CommonUI_o *)v10,
          v11,
          v12,
          _9__41_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v30,
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
    sub_1B8880C(Instance, v6);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)IsPartyCostOver,
                               warBoardData_k__BackingField,
                               v9);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
  v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15438/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0LL);
  if ( IsEnabledPutOnFreeSquare )
  {
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15436/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0LL);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_15439/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15437/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v25 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v25,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v20 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_30493952((CommonUI_o *)v20, v21, v22, v23, v24, 1, v25, 0, 28, 180.0, 40.0, 0, 0, 0LL);
  }
  else
  {
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15435/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0LL);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15439/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0LL);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15437/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0LL);
    v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v29,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0LL);
    if ( !v20 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_30493952((CommonUI_o *)v20, v21, v26, v27, v28, 1, v29, 0, 28, 180.0, 43.0, 0, 0, 0LL);
  }
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5917C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A5917C = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(Instance, v5);
  }
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4A5916F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
    byte_4A5916F = 1;
  }
  v2 = Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  Instance = **(Il2CppObject ***)(v6 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x0

  if ( (byte_4A59172 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A59172 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  Instance = **(Il2CppObject ***)(v5 + 184);
  if ( !Instance )
LABEL_10:
    sub_1B8880C(Instance, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OnEnable(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A59180 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_14534/*"TopBase/BackButton"*/);
    byte_4A59180 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_14534/*"TopBase/BackButton"*/, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__OpenHintDialog(
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

  if ( (byte_4A59176 & 1) == 0 )
  {
    sub_1B885B0(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59176 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0LL);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = (ScrollMessageDialog_ClickDelegate_o *)sub_1B887FC(ScrollMessageDialog_ClickDelegate_TypeInfo);
        ScrollMessageDialog_ClickDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0LL);
        if ( v9 )
        {
          CommonUI__OpenScrollMessageDialog((CommonUI_o *)v9, title, message, leftIndent, v10, 0, 1, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(0LL, isActive);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UISprite_o *newRuleBg; // x20
  __int64 v4; // x1
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_4A59178 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_20159/*"icon_noticebg_01"*/);
    byte_4A59178 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0LL);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_20159/*"icon_noticebg_01"*/, 0LL),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0LL
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0LL), !newRuleObject) )
  {
    sub_1B8880C(Instance, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A59181 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_4A59181 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  if ( (byte_4A59182 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59182 = 1;
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
    sub_1B8880C(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


void __fastcall WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__41_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A59183 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A59183 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
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
  if ( (byte_4A59184 & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A59184 = 1;
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
                (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_1B8880C(this, svt);
  }
  return 0;
}