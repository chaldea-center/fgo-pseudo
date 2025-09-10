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
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C25007 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25007 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
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

  if ( (byte_4C2500A & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardManager_TypeInfo);
    byte_4C2500A = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_1C2D6EC(Instance, v3);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0);
}


void WarBoardConfigurationUIContoroller__Deactive(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardConfigurationUIContoroller__EndNoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endCallbackNoticeHint; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *endCallbackNoticeHint; // t1

  endCallbackNoticeHint = this->fields.endCallbackNoticeHint;
  p_endCallbackNoticeHint = (CGThumbnailListItem_o *)&this->fields.endCallbackNoticeHint;
  v5 = endCallbackNoticeHint;
  if ( endCallbackNoticeHint )
  {
    p_endCallbackNoticeHint->klass = 0;
    sub_1C2D434(p_endCallbackNoticeHint, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
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

  if ( (byte_4C25000 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&StringLiteral_17659/*"buttontxt_formation_20"*/);
    byte_4C25000 = 1;
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
  if ( CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17659/*"buttontxt_formation_20"*/, 0);
  }
}


void WarBoardConfigurationUIContoroller__InitCost(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  Il2CppType *v3; // x20
  System_RuntimeTypeHandle_o v4; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_71124112; // x0
  UnityEngine_Object_o *v7; // x20
  UIFont_o *Component_object; // x0
  const MethodInfo *v9; // x1
  UIFont_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4C24FFA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C2D490(&UnityEngine_GameObject_var);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Type_TypeInfo);
    sub_1C2D490(&StringLiteral_6799/*"Fonts/FGO-NumberFont-02"*/);
    byte_4C24FFA = 1;
  }
  v3 = UnityEngine_GameObject_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  _71124112 = UnityEngine_Resources__Load_71124112((System_String_o *)StringLiteral_6799/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0);
  if ( _71124112 )
  {
    if ( (UnityEngine_GameObject_c *)_71124112->klass == UnityEngine_GameObject_TypeInfo )
      v7 = _71124112;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIFont_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_20;
    Component_object = (UIFont_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)v7,
                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
    if ( !this->fields.currentCostLabel
      || (v10 = Component_object,
          UILabel__set_bitmapFont(this->fields.currentCostLabel, Component_object, 0),
          (Component_object = (UIFont_o *)this->fields.maxCostLabel) == 0)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v10, 0),
          (Component_object = (UIFont_o *)this->fields.spritLabel) == 0)
      || (UILabel__set_bitmapFont((UILabel_o *)Component_object, v10, 0),
          (Component_object = (UIFont_o *)this->fields.currentApLabel) == 0) )
    {
LABEL_20:
      sub_1C2D6EC(Component_object, v9);
    }
    UILabel__set_bitmapFont((UILabel_o *)Component_object, v10, 0);
  }
  WarBoardConfigurationUIContoroller__ModifyCost(this, v9);
  WarBoardConfigurationUIContoroller__ModifyAP(this, 0, v11);
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

  if ( (byte_4C25003 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25003 = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  hintButtonObj = *(QuestPhaseEntity_o **)&hintButtonObj[5].fields.friendshipExp;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( WarBoardData__GetPartySkillId((WarBoardData_o *)hintButtonObj, 0) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  v4 = *(_QWORD *)&hintButtonObj[5].fields.friendshipExp;
  if ( !v4 )
    goto LABEL_30;
  v5 = *(_QWORD *)(v4 + 104);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestHintMaster___);
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
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_1C2D6EC(hintButtonObj, method);
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  WarBoardConfigurationUIContoroller___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__object__o *_9__5_1; // x21
  Il2CppObject *v17; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  struct UnityEngine_GameObject_array *v22; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UnityEngine_GameObject_array *v28; // x1
  const MethodInfo *v29; // x1

  if ( (byte_4C24FF8 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_UIWidget___);
    sub_1C2D490(&System_Func_UIWidget__GameObject__TypeInfo);
    sub_1C2D490(&System_Func_UIWidget__bool__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__);
    sub_1C2D490(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_4C24FF8 = 1;
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
                                                                                         (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
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
      _9__5_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UIWidget__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v9,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        0);
      static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v11, v12);
    }
    v13 = System_Linq_Enumerable__Where_object_(
            ComponentsInChildren_object,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_UIWidget___);
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
      _9__5_1 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_object__object____ctor(
        _9__5_1,
        v17,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        0);
      v18 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v18->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_1C2D434((CGThumbnailListItem_o *)&v18->__9__5_1, (int32_t)_9__5_1, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v15,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v22 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v21,
                                                   (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v22;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.startButtonTweenTargetCache, (int32_t)v22, v24, v25);
    v5 = this->fields.startButton;
    if ( !v5 )
LABEL_21:
      sub_1C2D6EC(v5, v4);
    v28 = *p_startButtonTweenTargetCache;
    v5->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.tweenTargets, (int32_t)v28, v26, v27);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v29);
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
  const MethodInfo *v12; // x3
  CGThumbnailListItem_o *p_monitor; // x24
  __int64 v14; // x2
  int max_length; // w8
  unsigned int v16; // w29
  WarBoardPieceData_o *v17; // x8
  System_Collections_Generic_List_int__o *klass; // x25
  __int64 v19; // x26
  __int64 v20; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int v24; // w8
  __int64 v25; // x26
  System_Func_object__bool__o **v26; // x23
  WarBoardPieceData_o *v27; // x24
  __int64 v28; // x8
  __int64 v29; // x8
  int32_t *v30; // x8
  int32_t v31; // w24
  struct WarBoardIndividualityClassMaster_StaticFields *static_fields; // x8
  System_Collections_Generic_List_UserServantEntity__o *ServantList; // x0
  System_Collections_Generic_List_int__o *v34; // x1
  UserServantMaster_o *v35; // x0
  System_Collections_Generic_List_int__o *v36; // x25
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  System_Func_object__bool__o *v40; // x25
  System_Collections_Generic_List_T__o *v41; // x24
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v45; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4C2500F & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_UserServantEntity___);
    sub_1C2D490(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_1C2D490(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__);
    sub_1C2D490(&WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
    sub_1C2D490(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4C2500F = 1;
  }
  entity = 0;
  v4 = (Il2CppObject *)sub_1C2D6DC(WarBoardConfigurationUIContoroller___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor(v4, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v7 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_66;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, 0);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_66;
  v45 = v4;
  v4[1].monitor = v10;
  p_monitor = (CGThumbnailListItem_o *)&v4[1].monitor;
  sub_1C2D434(p_monitor, (int32_t)v10, v11, v12);
  if ( !EditableServantPieces )
    goto LABEL_66;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
LABEL_67:
        sub_1C2D6F4(Instance, UserServantId_k__BackingField, v14);
      v17 = EditableServantPieces->m_Items[v16];
      if ( !v17 )
        break;
      UserServantId_k__BackingField = v17->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v8 )
          break;
        Instance = DataMasterBase_object__object__long___GetEntity(
                     v8,
                     UserServantId_k__BackingField,
                     (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_monitor->klass;
        v20 = *((_QWORD *)Instance + 10);
        v19 = *((_QWORD *)Instance + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v47.fields.currentCryptoKey = v20;
        *(_QWORD *)&v47.fields.fakeValue = v19;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v47, 0);
        if ( !klass )
          break;
        items = klass->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
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
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          klass->fields._size = size + 1;
          items->m_Items[size] = (int)Instance;
        }
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_22;
    }
LABEL_66:
    sub_1C2D6EC(Instance, UserServantId_k__BackingField);
  }
LABEL_22:
  Instance = (void *)WarBoardData__get_FormationLimitCost(warBoardData, 0);
  LODWORD(v45[1].klass) = (_DWORD)Instance - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v24 = EditableServantPieces->max_length;
  if ( v24 < 1 )
    return 0;
  v25 = 0;
  v26 = (System_Func_object__bool__o **)&v45[2];
  while ( 1 )
  {
    if ( (unsigned int)v25 >= v24 )
      goto LABEL_67;
    v27 = EditableServantPieces->m_Items[v25];
    if ( !v27 )
      goto LABEL_66;
    if ( v27->fields._UserServantId_k__BackingField <= 0 )
    {
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v25], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_object_(
                     v7,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_66;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v27->fields._restrictionId_k__BackingField,
                             (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_object_(
                       v7,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_66;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity[2].monitor,
                       0);
          if ( Instance && (v28 = *((_QWORD *)Instance + 3)) != 0 )
          {
            if ( !(_DWORD)v28 )
              goto LABEL_67;
            v29 = *((_QWORD *)Instance + 4);
            if ( !v29 )
              goto LABEL_66;
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            v30 = (int32_t *)(v29 + 16);
          }
          else
          {
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
            if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
              Instance = WarBoardIndividualityClassMaster_TypeInfo;
            }
            v30 = (int32_t *)*((_QWORD *)Instance + 23);
          }
          v31 = *v30;
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = WarBoardIndividualityClassMaster_TypeInfo;
          }
          static_fields = (struct WarBoardIndividualityClassMaster_StaticFields *)*((_QWORD *)Instance + 23);
          if ( v31 == static_fields->ALL_CLASS_ID )
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
            if ( v31 == static_fields->EXTRA_CLASS_ID )
            {
              Instance = DataManager__GetMasterData_object_(
                           v7,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_66;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0);
              if ( !v8 )
                goto LABEL_66;
              v34 = (System_Collections_Generic_List_int__o *)Instance;
              v35 = (UserServantMaster_o *)v8;
            }
            else
            {
              v36 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v36,
                (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v36 )
                goto LABEL_66;
              v37 = v36->fields._items;
              v38 = Method_System_Collections_Generic_List_int__Add__;
              ++v36->fields._version;
              if ( !v37 )
                goto LABEL_66;
              v39 = v36->fields._size;
              if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v36,
                  v31,
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v36->fields._size = v39 + 1;
                v37->m_Items[v39] = v31;
              }
              if ( !v8 )
                goto LABEL_66;
              v35 = (UserServantMaster_o *)v8;
              v34 = v36;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v35, v34, 0);
          }
          v40 = *v26;
          v41 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*v26 )
          {
            v40 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v40,
              v45,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass45_0__IsEnabledPutOnFreeSquare_b__0__,
              0);
            v45[2].klass = (Il2CppClass *)v40;
            sub_1C2D434((CGThumbnailListItem_o *)&v45[2], (int32_t)v40, v42, v43);
          }
          Instance = (void *)BasicHelper__Any_object_(
                               v41,
                               (System_Func_T__bool__o *)v40,
                               (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_UserServantEntity___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return 1;
        }
      }
    }
    v24 = EditableServantPieces->max_length;
    if ( (int)++v25 >= v24 )
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
  if ( (byte_4C24FFC & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    byte_4C24FFC = 1;
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
    v8 = sub_1C7DBA4(v3);
  v9 = *(System_String_o **)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (v9[12].fields._firstChar & 0x100) == 0 )
    v9 = (System_String_o *)sub_1C7DBA4(v3);
  v10 = **(_QWORD **)&v9[7].fields;
  if ( !v10 || (v11 = *(WarBoardData_o **)(v10 + 440)) == 0 )
LABEL_19:
    sub_1C2D6EC(v9, *(_QWORD *)&ap);
  ActionPointEntity = WarBoardData__GetActionPointEntity(*(WarBoardData_o **)(v10 + 440), 0, 0, 0);
  if ( ActionPointEntity && !WarBoardActionPointEntity__get_HasCost(ActionPointEntity, 0) )
  {
    v9 = (System_String_o *)this->fields.currentApLabel;
    if ( v9 )
    {
      v13 = (System_String_o *)StringLiteral_1122/*"0"*/;
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
  WarBoardPieceData_o *Piece_37670316; // x0
  WarBoardPieceData_o *v11; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v13; // x21
  const MethodInfo *v14; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v18; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C24FFD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24FFD = 1;
  }
  entity = 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C7DBA4(v3);
  methodPtr = *(WarBoardData_o **)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (BYTE5(methodPtr[1].fields.squares) & 1) == 0 )
    methodPtr = (WarBoardData_o *)sub_1C7DBA4(v3);
  klass = methodPtr->fields.reinforcementsSaveList->klass;
  if ( !klass )
    goto LABEL_35;
  methodPtr = (WarBoardData_o *)klass->vtable._8_unknown.methodPtr;
  if ( !methodPtr )
    goto LABEL_35;
  ActionPointEntity = WarBoardData__GetActionPointEntity(methodPtr, 0, 0, 0);
  methodPtr = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !methodPtr )
    goto LABEL_35;
  methodPtr = (WarBoardData_o *)methodPtr[1].fields.playedStageReinforcementsList;
  if ( !methodPtr )
    goto LABEL_35;
  Piece_37670316 = WarBoardData__GetPiece_37670316(methodPtr, squareIndex, 0);
  if ( ActionPointEntity )
  {
    v11 = Piece_37670316;
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
          methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
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
          methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( methodPtr )
          {
            if ( !DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)methodPtr,
                    &entity,
                    v11->fields._UserServantId_k__BackingField,
                    (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
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
        sub_1C2D6EC(methodPtr, *(_QWORD *)&squareIndex);
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

  if ( (byte_4C24FFB & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C2D490(&StringLiteral_15408/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C2D490(&StringLiteral_15406/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_1C2D490(&StringLiteral_15407/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_4C24FFB = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C7DBA4(v2);
  v5 = *(System_String_o **)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (v5[12].fields._firstChar & 0x100) == 0 )
    v5 = (System_String_o *)sub_1C7DBA4(v2);
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
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15406/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0);
  maxCostLabel = this->fields.maxCostLabel;
  v11 = v9;
  v12 = System_Int32__ToString((int32_t)&FormationLimitCost, 0);
  v5 = System_String__Concat_63457864(v11, v12, 0);
  if ( !maxCostLabel )
    goto LABEL_19;
  UILabel__set_text(maxCostLabel, v5, 0);
  spritLabel = this->fields.spritLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15408/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  v5 = System_String__Concat_63457864(v11, v14, 0);
  if ( !spritLabel )
    goto LABEL_19;
  UILabel__set_text(spritLabel, v5, 0);
  currentCostLabel = this->fields.currentCostLabel;
  if ( IsPartyCostOver )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15407/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
  }
  v16 = System_Int32__ToString((int32_t)&CurrentPartyCost_k__BackingField, 0);
  v5 = System_String__Concat_63457864(v11, v16, 0);
  if ( !currentCostLabel )
LABEL_19:
    sub_1C2D6EC(v5, method);
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
  const MethodInfo *v6; // x3
  long double v7; // q0
  __int64 v8; // x0
  struct UICommonButton_o *v9; // x0
  __int64 v10; // x8
  __int64 v11; // x8
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C24FF9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4C24FF9 = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0, 0) )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C7DBA4(v7);
    v9 = *(struct UICommonButton_o **)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (BYTE1(v9[2].fields.specifyPressedColor.fields.g) & 1) == 0 )
      v9 = (struct UICommonButton_o *)sub_1C7DBA4(v7);
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
        sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.tweenTargets, (int32_t)startButtonTweenTargetCache, v5, v6);
        v9 = this->fields.startButton;
        if ( v9 )
        {
          UICommonButton__SetButtonEnable(v9, 1, 1, 0);
          return;
        }
      }
LABEL_19:
      sub_1C2D6EC(v9, v4);
    }
    if ( !v9 )
      goto LABEL_19;
    UICommonButton__SetButtonEnable(v9, 0, 1, 0);
    v9 = this->fields.startButton;
    if ( !v9 )
      goto LABEL_19;
    v9->fields.tweenTargets = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.tweenTargets, 0, v13, v14);
  }
}


void WarBoardConfigurationUIContoroller__ModifyUserEquip(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  long double v6; // q0
  __int64 v7; // x8
  __int64 v8; // x8
  Il2CppObject *Entity; // x0
  int32_t genderImageId; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-30h] BYREF
  int32_t maxLv[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C24FFE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C24FFE = 1;
  }
  equipName = 0;
  *(_QWORD *)maxLv = 0;
  detail = 0;
  genderImageId = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4(v6);
  Instance = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(Instance + 309) & 1) == 0 )
    Instance = sub_1C7DBA4(v6);
  v8 = **(_QWORD **)(Instance + 184);
  if ( !v8 )
    goto LABEL_15;
  Instance = *(_QWORD *)(v8 + 440);
  if ( !Instance )
    goto LABEL_15;
  Instance = WarBoardData__get_PlayerMasterUserEquipId((WarBoardData_o *)Instance, 0);
  if ( !MasterData_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !Entity )
    return;
  UserEquipEntity__getEquipInfo((UserEquipEntity_o *)Entity, &maxLv[1], maxLv, &equipName, &detail, &genderImageId, 0);
  Instance = (__int64)this->fields.userEquipIcon;
  if ( !Instance )
LABEL_15:
    sub_1C2D6EC(Instance, v4);
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, genderImageId, 0);
}


void WarBoardConfigurationUIContoroller__NoticeHint(
        WarBoardConfigurationUIContoroller_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *message; // x0
  QuestPhaseEntity_o *questPhaseEntity; // x0
  struct QuestHintEntity_o *v10; // x8
  QuestPhaseEntity_o *openType; // x0
  _DWORD *v12; // x9
  int32_t v13; // w20
  int32_t v14; // w21

  if ( (byte_4C25005 & 1) == 0 )
  {
    sub_1C2D490(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C25005 = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallbackNoticeHint, (int32_t)callback, (int32_t)method, v3);
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
    message = QuestPhaseEntity__getHintMessage(questPhaseEntity, 0);
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
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
    openType = (QuestPhaseEntity_o *)QuestPhaseEntity__getHintOpenType(openType, 0);
  }
  if ( (_DWORD)openType != 1 )
    goto LABEL_22;
  v12 = this->fields.questHintEntity;
  if ( !v12 )
  {
    v12 = this->fields.questPhaseEntity;
    if ( !v12 )
LABEL_23:
      sub_1C2D6EC(openType, v6);
  }
  v13 = v12[4];
  v14 = v12[5];
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  if ( QuestHintDialogOpenManager__IsQuestHintOpen(v13, v14, 0) )
    goto LABEL_8;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__SetQuestInfo(v13, v14, 0);
  QuestHintDialogOpenManager__WriteData(0);
LABEL_22:
  WarBoardConfigurationUIContoroller__OpenHintDialog(this, v6);
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

  if ( (byte_4C25001 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__);
    byte_4C25001 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(v7);
  v10 = **(CommonUI_o ***)(v9 + 184);
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0);
  if ( !v10 )
LABEL_13:
    sub_1C2D6EC(Instance, v6);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  if ( (byte_4C25004 & 1) == 0 )
  {
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
    byte_4C25004 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickHintButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickHintButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallbackNoticeHint, 0, v8, v9);
    WarBoardConfigurationUIContoroller__OpenHintDialog(this, v10);
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

  if ( (byte_4C2500D & 1) == 0 )
  {
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__);
    sub_1C2D490(&StringLiteral_15415/*"WARBOARD_RETURN_CONFIRM_NO"*/);
    sub_1C2D490(&StringLiteral_15414/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15417/*"WARBOARD_RETURN_CONFIRM_YES"*/);
    sub_1C2D490(&StringLiteral_15416/*"WARBOARD_RETURN_CONFIRM_TITLE"*/);
    byte_4C2500D = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(v7);
  v10 = **(CommonUI_o ***)(v9 + 184);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15416/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15414/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15417/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15415/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0);
  if ( !v10 )
LABEL_15:
    sub_1C2D6EC(Instance, v6);
  CommonUI__OpenConfirmDialog_31167344(v10, v11, v12, v13, v14, 0, v15, 0, 28, 180.0, 43.0, 0, 0, 0);
}


void WarBoardConfigurationUIContoroller__OnClickReturnConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C2500E & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2500E = 1;
  }
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21ACD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21ACD = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_15:
      sub_1C2D6EC(Instance, v6);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C25009 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__);
    byte_4C25009 = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  NotificationDialog_ClickDelegate_o *_9__41_0; // x22
  Il2CppObject *v15; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Nullable_float__o p_titlePosY; // x0
  System_Nullable_float__o v20; // x0
  bool IsEnabledPutOnFreeSquare; // w22
  Il2CppObject *v22; // x20
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  System_String_o *v26; // x24
  CommonConfirmDialog_ClickDelegate_o *v27; // x25
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  CommonConfirmDialog_ClickDelegate_o *v31; // x25
  System_Nullable_float__o v32; // [xsp+60h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_4C2500B & 1) == 0 )
  {
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__);
    sub_1C2D490(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__);
    sub_1C2D490(&StringLiteral_15404/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15423/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/);
    sub_1C2D490(&StringLiteral_15420/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15405/*"WARBOARD_PARTY_COST_OVER_TITLE"*/);
    sub_1C2D490(&StringLiteral_15422/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/);
    sub_1C2D490(&StringLiteral_15421/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/);
    sub_1C2D490(&StringLiteral_15424/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/);
    byte_4C2500B = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickStartButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickStartButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__HideSimplePopup(Instance, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_29;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(Instance->fields._warBoardData_k__BackingField, 0);
  if ( IsPartyCostOver )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
      v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15405/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15404/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0);
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
        _9__41_0 = (NotificationDialog_ClickDelegate_o *)sub_1C2D6DC(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__41_0,
          v15,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__41_0__,
          0);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        static_fields->__9__41_0 = _9__41_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v17, v18);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
      v20 = (System_Nullable_float__o)&v32;
      v32 = 0;
      System_Nullable_float____ctor(v20, 15.0, (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
      if ( v10 )
      {
        CommonUI__OpenNotificationDialog_31170012(
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
          v32,
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
    sub_1C2D6EC(Instance, v6);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)IsPartyCostOver,
                               warBoardData_k__BackingField,
                               v9);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
  v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_15423/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0);
  if ( IsEnabledPutOnFreeSquare )
  {
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15421/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15424/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15422/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0);
    v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v27,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0);
    if ( !v22 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_31167344((CommonUI_o *)v22, v23, v24, v25, v26, 1, v27, 0, 28, 180.0, 40.0, 0, 0, 0);
  }
  else
  {
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15420/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_15424/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15422/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0);
    v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v31,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0);
    if ( !v22 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_31167344((CommonUI_o *)v22, v23, v28, v29, v30, 1, v31, 0, 28, 180.0, 43.0, 0, 0, 0);
  }
}


void WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C2500C & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C2500C = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(Instance, v5);
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

  if ( (byte_4C24FFF & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
    byte_4C24FFF = 1;
  }
  v2 = Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C2D4A8(Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C2D474(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C7DBA4(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4(v5);
  Instance = **(Il2CppObject ***)(v7 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C25002 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25002 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C7DBA4(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C7DBA4(v4);
  Instance = **(Il2CppObject ***)(v6 + 184);
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(Instance, v3);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0, 0);
}


void WarBoardConfigurationUIContoroller__OnEnable(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C25010 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_14553/*"TopBase/BackButton"*/);
    byte_4C25010 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44721736(transform, (System_String_o *)StringLiteral_14553/*"TopBase/BackButton"*/, 0);
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

  if ( (byte_4C25006 & 1) == 0 )
  {
    sub_1C2D490(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C25006 = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C2D6DC(ScrollMessageDialog_ClickDelegate_TypeInfo);
        ScrollMessageDialog_ClickDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__33_0__,
          0);
        if ( v9 )
        {
          CommonUI__OpenScrollMessageDialog((CommonUI_o *)v9, title, message, leftIndent, v10, 0, 1, 0);
          return;
        }
      }
    }
LABEL_16:
    sub_1C2D6EC(Instance, v4);
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
    sub_1C2D6EC(0, isActive);
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

  if ( (byte_4C25008 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&StringLiteral_20195/*"icon_noticebg_01"*/);
    byte_4C25008 = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_20195/*"icon_noticebg_01"*/, 0),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0), !newRuleObject) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  UnityEngine_GameObject__SetActive(newRuleObject, (unsigned __int8)Instance & 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardConfigurationUIContoroller___OpenHintDialog_b__33_0(
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
  const MethodInfo *v3; // x3

  if ( (byte_4C25011 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_4C25011 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  if ( (byte_4C25012 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25012 = 1;
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
    sub_1C2D6EC(this, 0);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
}


void WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__41_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25013 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25013 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void WarBoardConfigurationUIContoroller___c__DisplayClass45_0___ctor(
        WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardConfigurationUIContoroller___c__DisplayClass45_0___IsEnabledPutOnFreeSquare_b__0(
        WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *this,
        UserServantEntity_o *svt,
        const MethodInfo *method)
{
  WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *v4; // x20
  System_Collections_Generic_List_int__o *pieceSvtIdList; // x20

  v4 = this;
  if ( (byte_4C25014 & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C25014 = 1;
  }
  if ( !svt )
    goto LABEL_10;
  if ( !UserServantEntity__IsLeave(svt, 0) && UserServantEntity__getCost(svt, 0) <= v4->fields.freeCost )
  {
    pieceSvtIdList = v4->fields.pieceSvtIdList;
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass45_0_o *)UserServantEntity__getSvtId(svt, 0);
    if ( pieceSvtIdList )
      return !System_Collections_Generic_List_int___Contains(
                pieceSvtIdList,
                (int32_t)this,
                (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_1C2D6EC(this, svt);
  }
  return 0;
}