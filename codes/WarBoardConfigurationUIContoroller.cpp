void WarBoardConfigurationUIContoroller___ctor(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  this->fields.hintXPartyBuffExist = 92;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardConfigurationUIContoroller__Active(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardConfigurationUIContoroller__CloseHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C356DC & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C356DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
}


void WarBoardConfigurationUIContoroller__CloseRuleDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  struct WarBoardData_o *warBoardData_k__BackingField; // x8
  int32_t winCondId; // w19
  WarBoardManager_c *v5; // x0

  if ( (byte_4C356DF & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardManager_TypeInfo);
    byte_4C356DF = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_10;
  winCondId = warBoardData_k__BackingField->fields.winCondId;
  v5 = WarBoardManager_TypeInfo;
  if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v5 = WarBoardManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, winCondId, 0);
  UnityEngine_PlayerPrefs__Save(0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__UpdateRuleButton(Instance, 0),
        (Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_1C32E7C(Instance);
  }
  WarBoardManager__SetMapTouchEnable(Instance, 1, 0, 0);
}


void WarBoardConfigurationUIContoroller__Deactive(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
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
    sub_1C32BC4(p_endCallbackNoticeHint, 0, v2, v3);
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

  if ( (byte_4C356D5 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&StringLiteral_17663/*"buttontxt_formation_20"*/);
    byte_4C356D5 = 1;
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
  if ( CondType__IsQuestClear_40225464(ClassBoardReleaseQuestId, -1, 0, 0) )
  {
    classCompatibilitySprite = this->fields.classCompatibilitySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(classCompatibilitySprite, (System_String_o *)StringLiteral_17663/*"buttontxt_formation_20"*/, 0);
  }
}


void WarBoardConfigurationUIContoroller__InitCost(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  Il2CppType *v3; // x20
  System_RuntimeTypeHandle_o v4; // x0
  System_Type_o *TypeFromHandle; // x0
  UnityEngine_Object_o *_71184048; // x0
  UnityEngine_Object_o *v7; // x20
  UIFont_o *Component_object; // x0
  const MethodInfo *v9; // x1
  UIFont_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4C356CF & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C32C20(&UnityEngine_GameObject_var);
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&StringLiteral_6804/*"Fonts/FGO-NumberFont-02"*/);
    byte_4C356CF = 1;
  }
  v3 = UnityEngine_GameObject_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  _71184048 = UnityEngine_Resources__Load_71184048((System_String_o *)StringLiteral_6804/*"Fonts/FGO-NumberFont-02"*/, TypeFromHandle, 0);
  if ( _71184048 )
  {
    if ( (UnityEngine_GameObject_c *)_71184048->klass == UnityEngine_GameObject_TypeInfo )
      v7 = _71184048;
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
                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
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
      sub_1C32E7C(Component_object);
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

  if ( (byte_4C356D8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C356D8 = 1;
  }
  hintButtonObj = (QuestPhaseEntity_o *)this->fields.hintButtonObj;
  if ( !hintButtonObj )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintButtonObj, 1, 0);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  hintButtonObj = *(QuestPhaseEntity_o **)&hintButtonObj[5].fields.friendshipExp;
  if ( !hintButtonObj )
    goto LABEL_30;
  if ( WarBoardData__GetPartySkillId((WarBoardData_o *)hintButtonObj, 0) )
    GameObjectExtensions__AddLocalPositionX(this->fields.hintButtonObj, (float)this->fields.hintXPartyBuffExist, 0);
  hintButtonObj = (QuestPhaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !hintButtonObj )
    goto LABEL_30;
  v4 = *(_QWORD *)&hintButtonObj[5].fields.friendshipExp;
  if ( !v4 )
    goto LABEL_30;
  v5 = *(_QWORD *)(v4 + 104);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestHintMaster___);
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
  hintButtonObj = (QuestPhaseEntity_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_1C32E7C(hintButtonObj);
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
  struct UICommonButton_o *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x20
  WarBoardConfigurationUIContoroller___c_c *v6; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v8; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  WarBoardConfigurationUIContoroller___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__object__o *_9__5_1; // x21
  Il2CppObject *v16; // x22
  struct WarBoardConfigurationUIContoroller___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct UnityEngine_GameObject_array *v21; // x0
  struct UnityEngine_GameObject_array **p_startButtonTweenTargetCache; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UnityEngine_GameObject_array *v27; // x1
  const MethodInfo *v28; // x1

  if ( (byte_4C356CD & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_UIWidget___);
    sub_1C32C20(&System_Func_UIWidget__GameObject__TypeInfo);
    sub_1C32C20(&System_Func_UIWidget__bool__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__);
    sub_1C32C20(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_4C356CD = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0, 0) )
  {
    v4 = this->fields.startButton;
    if ( !v4 )
      goto LABEL_21;
    ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                         (UnityEngine_Component_o *)v4,
                                                                                         1,
                                                                                         (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    v6 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v6 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v6->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UIWidget__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__5_0,
        v8,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_0__,
        0);
      static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_UIWidget__bool__o *)_9__5_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            ComponentsInChildren_object,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_UIWidget___);
    v13 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    v14 = v12;
    if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
      v13 = WarBoardConfigurationUIContoroller___c_TypeInfo;
    }
    _9__5_1 = (System_Func_object__object__o *)v13->static_fields->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__5_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_UIWidget__GameObject__TypeInfo);
      System_Func_object__object____ctor(
        _9__5_1,
        v16,
        Method_WarBoardConfigurationUIContoroller___c__InitStartButton_b__5_1__,
        0);
      v17 = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
      v17->__9__5_1 = (struct System_Func_UIWidget__GameObject__o *)_9__5_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&v17->__9__5_1, (int32_t)_9__5_1, v18, v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v14,
                                                                 (System_Func_TSource__TResult__o *)_9__5_1,
                                                                 (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_UIWidget__GameObject___);
    v21 = (struct UnityEngine_GameObject_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v20,
                                                   (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_GameObject___);
    this->fields.startButtonTweenTargetCache = v21;
    p_startButtonTweenTargetCache = &this->fields.startButtonTweenTargetCache;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.startButtonTweenTargetCache, (int32_t)v21, v23, v24);
    v4 = this->fields.startButton;
    if ( !v4 )
LABEL_21:
      sub_1C32E7C(v4);
    v27 = *p_startButtonTweenTargetCache;
    v4->fields.tweenTargets = *p_startButtonTweenTargetCache;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.tweenTargets, (int32_t)v27, v25, v26);
    WarBoardConfigurationUIContoroller__ModifyStartButton(this, v28);
  }
}


bool WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
        WarBoardConfigurationUIContoroller_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x24
  void *Instance; // x0
  DataManager_o *v6; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  WarBoardPieceData_array *EditableServantPieces; // x22
  System_Collections_Generic_List_int__o *v9; // x25
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CGThumbnailListItem_o *p_monitor; // x24
  int max_length; // w8
  unsigned int v14; // w29
  WarBoardPieceData_o *v15; // x8
  int64_t UserServantId_k__BackingField; // x1
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
  const MethodInfo *v42; // x3
  Il2CppObject *v44; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4C356E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_UserServantEntity___);
    sub_1C32C20(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
    sub_1C32C20(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller___c__DisplayClass48_0__IsEnabledPutOnFreeSquare_b__0__);
    sub_1C32C20(&WarBoardConfigurationUIContoroller___c__DisplayClass48_0_TypeInfo);
    sub_1C32C20(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4C356E4 = 1;
  }
  entity = 0;
  v4 = (Il2CppObject *)sub_1C32E6C(WarBoardConfigurationUIContoroller___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor(v4, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v6 = (DataManager_o *)Instance;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !warBoardData )
    goto LABEL_66;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  EditableServantPieces = WarBoardData__GetEditableServantPieces(warBoardData, 0);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_66;
  v44 = v4;
  v4[1].monitor = v9;
  p_monitor = (CGThumbnailListItem_o *)&v4[1].monitor;
  sub_1C32BC4(p_monitor, (int32_t)v9, v10, v11);
  if ( !EditableServantPieces )
    goto LABEL_66;
  max_length = EditableServantPieces->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
LABEL_67:
        sub_1C32E84(Instance);
      v15 = EditableServantPieces->m_Items[v14];
      if ( !v15 )
        break;
      UserServantId_k__BackingField = v15->fields._UserServantId_k__BackingField;
      if ( UserServantId_k__BackingField )
      {
        if ( !v7 )
          break;
        Instance = DataMasterBase_object__object__long___GetEntity(
                     v7,
                     UserServantId_k__BackingField,
                     (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          break;
        klass = (System_Collections_Generic_List_int__o *)p_monitor->klass;
        v19 = *((_QWORD *)Instance + 10);
        v18 = *((_QWORD *)Instance + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v19;
        *(_QWORD *)&v46.fields.fakeValue = v18;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v46, 0);
        if ( !klass )
          break;
        items = klass->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++klass->fields._version;
        if ( !items )
          break;
        size = klass->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            klass,
            (int32_t)Instance,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          klass->fields._size = size + 1;
          items->m_Items[size] = (int)Instance;
        }
      }
      max_length = EditableServantPieces->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_22;
    }
LABEL_66:
    sub_1C32E7C(Instance);
  }
LABEL_22:
  Instance = (void *)WarBoardData__get_FormationLimitCost(warBoardData, 0);
  LODWORD(v44[1].klass) = (_DWORD)Instance - warBoardData->fields._CurrentPartyCost_k__BackingField;
  v23 = EditableServantPieces->max_length;
  if ( v23 < 1 )
    return 0;
  v24 = 0;
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
      Instance = (void *)WarBoardPieceData__get_IsNpc(EditableServantPieces->m_Items[v24], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = DataManager__GetMasterData_object_(
                     v6,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_RestrictionMaster___);
        if ( !Instance )
          goto LABEL_66;
        Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v26->fields._restrictionId_k__BackingField,
                             (const MethodInfo_3396884 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = DataManager__GetMasterData_object_(
                       v6,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarBoardIndividualityClassMaster___);
          if ( !entity || !Instance )
            goto LABEL_66;
          Instance = WarBoardIndividualityClassMaster__GetServantClassEntities(
                       (WarBoardIndividualityClassMaster_o *)Instance,
                       (System_Int32_array *)entity[2].monitor,
                       0);
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
            if ( !v7 )
              goto LABEL_66;
            ServantList = UserServantMaster__getServantList((UserServantMaster_o *)v7, 0);
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
                           v6,
                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
              if ( !Instance )
                goto LABEL_66;
              Instance = ServantClassMaster__getExtraClassIdList((ServantClassMaster_o *)Instance, 0);
              if ( !v7 )
                goto LABEL_66;
              v33 = (System_Collections_Generic_List_int__o *)Instance;
              v34 = (UserServantMaster_o *)v7;
            }
            else
            {
              v35 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v35,
                (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v35 )
                goto LABEL_66;
              v36 = v35->fields._items;
              v37 = Method_System_Collections_Generic_List_int__Add__;
              ++v35->fields._version;
              if ( !v36 )
                goto LABEL_66;
              v38 = v35->fields._size;
              if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v35,
                  v30,
                  *(const MethodInfo_377B798 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v35->fields._size = v38 + 1;
                v36->m_Items[v38] = v30;
              }
              if ( !v7 )
                goto LABEL_66;
              v34 = (UserServantMaster_o *)v7;
              v33 = v35;
            }
            ServantList = UserServantMaster__getServantListByClassIdList(v34, v33, 0);
          }
          v39 = *v25;
          v40 = (System_Collections_Generic_List_T__o *)ServantList;
          if ( !*v25 )
          {
            v39 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v39,
              v44,
              Method_WarBoardConfigurationUIContoroller___c__DisplayClass48_0__IsEnabledPutOnFreeSquare_b__0__,
              0);
            v44[2].klass = (Il2CppClass *)v39;
            sub_1C32BC4((CGThumbnailListItem_o *)&v44[2], (int32_t)v39, v41, v42);
          }
          Instance = (void *)BasicHelper__Any_object_(
                               v40,
                               (System_Func_T__bool__o *)v39,
                               (const MethodInfo_30C6790 *)Method_BasicHelper_Any_UserServantEntity___);
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
  if ( (byte_4C356D1 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C356D1 = 1;
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
    v8 = sub_1C83334(v3);
  v9 = *(System_String_o **)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (v9[12].fields._firstChar & 0x100) == 0 )
    v9 = (System_String_o *)sub_1C83334(v3);
  v10 = **(_QWORD **)&v9[7].fields;
  if ( !v10 || (v11 = *(WarBoardData_o **)(v10 + 440)) == 0 )
LABEL_19:
    sub_1C32E7C(v9);
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
  WarBoardPieceData_o *Piece_37788996; // x0
  WarBoardPieceData_o *v11; // x21
  bool HasCost; // w0
  WarBoardActionPointClassMaster_o *v13; // x21
  const MethodInfo *v14; // x2
  BattleServantData_o *battleServant_k__BackingField; // x8
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  int32_t baseActionPoint; // w1
  WarBoardConfigurationUIContoroller_o *v18; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C356D2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C356D2 = 1;
  }
  entity = 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C83334(v3);
  methodPtr = *(WarBoardData_o **)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (BYTE5(methodPtr[1].fields.squares) & 1) == 0 )
    methodPtr = (WarBoardData_o *)sub_1C83334(v3);
  klass = methodPtr->fields.reinforcementsSaveList->klass;
  if ( !klass )
    goto LABEL_35;
  methodPtr = (WarBoardData_o *)klass->vtable._8_unknown.methodPtr;
  if ( !methodPtr )
    goto LABEL_35;
  ActionPointEntity = WarBoardData__GetActionPointEntity(methodPtr, 0, 0, 0);
  methodPtr = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !methodPtr )
    goto LABEL_35;
  methodPtr = (WarBoardData_o *)methodPtr[1].fields.playedStageReinforcementsList;
  if ( !methodPtr )
    goto LABEL_35;
  Piece_37788996 = WarBoardData__GetPiece_37788996(methodPtr, squareIndex, 0);
  if ( ActionPointEntity )
  {
    v11 = Piece_37788996;
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
          methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
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
          methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( methodPtr )
          {
            if ( !DataMasterBase_object__object__long___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)methodPtr,
                    &entity,
                    v11->fields._UserServantId_k__BackingField,
                    (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
              return;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            methodPtr = (WarBoardData_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
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
        sub_1C32E7C(methodPtr);
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

  if ( (byte_4C356D0 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C32C20(&StringLiteral_15409/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C32C20(&StringLiteral_15407/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_1C32C20(&StringLiteral_15408/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    byte_4C356D0 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(v2);
  v5 = *(System_String_o **)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (v5[12].fields._firstChar & 0x100) == 0 )
    v5 = (System_String_o *)sub_1C83334(v2);
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
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_15407/*"WARBOARD_PARTY_ORGANIZATION_COST_COLOR"*/, 0);
  maxCostLabel = this->fields.maxCostLabel;
  v11 = v9;
  v12 = System_Int32__ToString((int32_t)&FormationLimitCost, 0);
  v5 = System_String__Concat_63518544(v11, v12, 0);
  if ( !maxCostLabel )
    goto LABEL_19;
  UILabel__set_text(maxCostLabel, v5, 0);
  spritLabel = this->fields.spritLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15409/*"WARBOARD_PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  v5 = System_String__Concat_63518544(v11, v14, 0);
  if ( !spritLabel )
    goto LABEL_19;
  UILabel__set_text(spritLabel, v5, 0);
  currentCostLabel = this->fields.currentCostLabel;
  if ( IsPartyCostOver )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15408/*"WARBOARD_PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
  }
  v16 = System_Int32__ToString((int32_t)&CurrentPartyCost_k__BackingField, 0);
  v5 = System_String__Concat_63518544(v11, v16, 0);
  if ( !currentCostLabel )
LABEL_19:
    sub_1C32E7C(v5);
  UILabel__set_text(currentCostLabel, v5, 0);
  WarBoardConfigurationUIContoroller__ModifyStartButton(this, v17);
}


void WarBoardConfigurationUIContoroller__ModifyStartButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *startButton; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  long double v6; // q0
  __int64 v7; // x0
  struct UICommonButton_o *v8; // x0
  __int64 v9; // x8
  __int64 v10; // x8
  struct UnityEngine_GameObject_array *startButtonTweenTargetCache; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C356CE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4C356CE = 1;
  }
  startButton = (UnityEngine_Object_o *)this->fields.startButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startButton, 0, 0) )
  {
    v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C83334(v6);
    v8 = *(struct UICommonButton_o **)(*(_QWORD *)(v7 + 192) + 16LL);
    if ( (BYTE1(v8[2].fields.specifyPressedColor.fields.g) & 1) == 0 )
      v8 = (struct UICommonButton_o *)sub_1C83334(v6);
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
        sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.tweenTargets, (int32_t)startButtonTweenTargetCache, v4, v5);
        v8 = this->fields.startButton;
        if ( v8 )
        {
          UICommonButton__SetButtonEnable(v8, 1, 1, 0);
          return;
        }
      }
LABEL_19:
      sub_1C32E7C(v8);
    }
    if ( !v8 )
      goto LABEL_19;
    UICommonButton__SetButtonEnable(v8, 0, 1, 0);
    v8 = this->fields.startButton;
    if ( !v8 )
      goto LABEL_19;
    v8->fields.tweenTargets = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields.tweenTargets, 0, v12, v13);
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
  int v14; // w1
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

  if ( (byte_4C356D3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C32C20(&StringLiteral_10256/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/);
    byte_4C356D3 = 1;
  }
  *(_QWORD *)maxLv = 0;
  fixedEquipEntity = 0;
  detail = 0;
  equipName = 0;
  genderImageId = 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C83334(v2);
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
      SelfUserGame = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10256/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/, 0);
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
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v27, 0);
    genderImageId = v14;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEquipMaster___);
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C83334(v16);
    SelfUserGame = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
    if ( (*(_BYTE *)(SelfUserGame + 309) & 1) == 0 )
      SelfUserGame = sub_1C83334(v16);
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
               (const MethodInfo_3398D94 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( Entity )
      UserEquipEntity__getEquipInfo(
        (UserEquipEntity_o *)Entity,
        &maxLv[1],
        maxLv,
        &equipName,
        &detail,
        &genderImageId,
        0);
    v14 = genderImageId;
  }
  if ( v14 >= 1 )
  {
    SelfUserGame = (__int64)this->fields.userEquipIcon;
    if ( !SelfUserGame )
      goto LABEL_50;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)SelfUserGame, v14, 0);
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
    sub_1C32E7C(SelfUserGame);
  }
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

  if ( (byte_4C356DA & 1) == 0 )
  {
    sub_1C32C20(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C356DA = 1;
  }
  this->fields.endCallbackNoticeHint = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endCallbackNoticeHint, (int32_t)callback, (int32_t)method, v3);
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
      sub_1C32E7C(openType);
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
  long double v6; // q0
  __int64 v7; // x0
  __int64 v8; // x0
  CommonUI_o *v9; // x20
  System_Action_o *v10; // x21

  if ( (byte_4C356D6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__);
    byte_4C356D6 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_WarBoardConfigurationUIContoroller_OnClickClassCompatibilityButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C83334(v6);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C83334(v6);
  v9 = **(CommonUI_o ***)(v8 + 184);
  v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnCloseClassCompatibility__,
    0);
  if ( !v9 )
LABEL_13:
    sub_1C32E7C(Instance);
  CommonUI__OpenClassCompatibilityMenu(v9, v10, 0);
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

  if ( (byte_4C356D9 & 1) == 0 )
  {
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
    byte_4C356D9 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickHintButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickHintButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_WarBoardConfigurationUIContoroller_OnClickHintButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endCallbackNoticeHint, 0, v8, v9);
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
  long double v6; // q0
  __int64 v7; // x0
  __int64 v8; // x0
  CommonUI_o *v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  System_String_o *v13; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_4C356E2 & 1) == 0 )
  {
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__);
    sub_1C32C20(&StringLiteral_15416/*"WARBOARD_RETURN_CONFIRM_NO"*/);
    sub_1C32C20(&StringLiteral_15415/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_15418/*"WARBOARD_RETURN_CONFIRM_YES"*/);
    sub_1C32C20(&StringLiteral_15417/*"WARBOARD_RETURN_CONFIRM_TITLE"*/);
    byte_4C356E2 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_WarBoardConfigurationUIContoroller_OnClickReturnButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C83334(v6);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C83334(v6);
  v9 = **(CommonUI_o ***)(v8 + 184);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15417/*"WARBOARD_RETURN_CONFIRM_TITLE"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15415/*"WARBOARD_RETURN_CONFIRM_MESSAGE"*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15418/*"WARBOARD_RETURN_CONFIRM_YES"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15416/*"WARBOARD_RETURN_CONFIRM_NO"*/, 0);
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_WarBoardConfigurationUIContoroller_OnClickReturnConfirmDialog__,
    0);
  if ( !v9 )
LABEL_15:
    sub_1C32E7C(Instance);
  CommonUI__OpenConfirmDialog_31190452(v9, v10, v11, v12, v13, 0, v14, 0, 28, 180.0, 43.0, 0, 0, 0);
}


void WarBoardConfigurationUIContoroller__OnClickReturnConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C356E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C356E3 = 1;
  }
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3219C )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C3219C = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
LABEL_15:
      sub_1C32E7C(Instance);
    WarBoardManager__Exit((WarBoardManager_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void WarBoardConfigurationUIContoroller__OnClickRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C356DE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller_CloseRuleDialog__);
    byte_4C356DE = 1;
  }
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
  WarBoardData_o *warBoardData_k__BackingField; // x20
  _BOOL8 IsPartyCostOver; // x0
  const MethodInfo *v8; // x2
  Il2CppObject *v9; // x19
  System_String_o *v10; // x20
  System_String_o *v11; // x21
  WarBoardConfigurationUIContoroller___c_c *v12; // x8
  NotificationDialog_ClickDelegate_o *_9__44_0; // x22
  Il2CppObject *v14; // x23
  struct WarBoardConfigurationUIContoroller___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Nullable_float__o p_titlePosY; // x0
  System_Nullable_float__o v19; // x0
  bool IsEnabledPutOnFreeSquare; // w22
  Il2CppObject *v21; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  CommonConfirmDialog_ClickDelegate_o *v26; // x25
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  System_String_o *v29; // x24
  CommonConfirmDialog_ClickDelegate_o *v30; // x25
  System_Nullable_float__o v31; // [xsp+60h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_4C356E0 & 1) == 0 )
  {
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_float___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__44_0__);
    sub_1C32C20(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__);
    sub_1C32C20(&StringLiteral_15405/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_15424/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/);
    sub_1C32C20(&StringLiteral_15421/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_15406/*"WARBOARD_PARTY_COST_OVER_TITLE"*/);
    sub_1C32C20(&StringLiteral_15423/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/);
    sub_1C32C20(&StringLiteral_15422/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/);
    sub_1C32C20(&StringLiteral_15425/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/);
    byte_4C356E0 = 1;
  }
  v3 = Method_WarBoardConfigurationUIContoroller_OnClickStartButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickStartButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_WarBoardConfigurationUIContoroller_OnClickStartButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__HideSimplePopup(Instance, 0, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  warBoardData_k__BackingField = Instance->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_29;
  IsPartyCostOver = WarBoardData__get_IsPartyCostOver(Instance->fields._warBoardData_k__BackingField, 0);
  if ( IsPartyCostOver )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15406/*"WARBOARD_PARTY_COST_OVER_TITLE"*/, 0);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15405/*"WARBOARD_PARTY_COST_OVER_MESSAGE"*/, 0);
      v12 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      if ( !WarBoardConfigurationUIContoroller___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardConfigurationUIContoroller___c_TypeInfo);
        v12 = WarBoardConfigurationUIContoroller___c_TypeInfo;
      }
      _9__44_0 = v12->static_fields->__9__44_0;
      if ( !_9__44_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = WarBoardConfigurationUIContoroller___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__44_0 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
        NotificationDialog_ClickDelegate___ctor(
          _9__44_0,
          v14,
          Method_WarBoardConfigurationUIContoroller___c__OnClickStartButton_b__44_0__,
          0);
        static_fields = WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields;
        static_fields->__9__44_0 = _9__44_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v16, v17);
      }
      p_titlePosY = (System_Nullable_float__o)&titlePosY;
      titlePosY = 0;
      System_Nullable_float____ctor(
        p_titlePosY,
        90.0,
        (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
      v19 = (System_Nullable_float__o)&v31;
      v31 = 0;
      System_Nullable_float____ctor(v19, 15.0, (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
      if ( v9 )
      {
        CommonUI__OpenNotificationDialog_31193120(
          (CommonUI_o *)v9,
          v10,
          v11,
          _9__44_0,
          -1,
          0,
          0,
          0,
          0,
          1,
          titlePosY,
          v31,
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
    sub_1C32E7C(Instance);
  }
  IsEnabledPutOnFreeSquare = WarBoardConfigurationUIContoroller__IsEnabledPutOnFreeSquare(
                               (WarBoardConfigurationUIContoroller_o *)IsPartyCostOver,
                               warBoardData_k__BackingField,
                               v8);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15424/*"WARBOARD_SORTIE_CONFIRMATION_TITLE"*/, 0);
  if ( IsEnabledPutOnFreeSquare )
  {
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_15422/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE_FREE_SQUARE"*/, 0);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15425/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15423/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0);
    v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v26,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0);
    if ( !v21 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_31190452((CommonUI_o *)v21, v22, v23, v24, v25, 1, v26, 0, 28, 180.0, 40.0, 0, 0, 0);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15421/*"WARBOARD_SORTIE_CONFIRMATION_MESSAGE"*/, 0);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_15425/*"WARBOARD_SORTIE_CONFIRMATION_YES"*/, 0);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_15423/*"WARBOARD_SORTIE_CONFIRMATION_NO"*/, 0);
    v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v30,
      (Il2CppObject *)this,
      Method_WarBoardConfigurationUIContoroller_OnClickStartConfirmDialog__,
      0);
    if ( !v21 )
      goto LABEL_29;
    CommonUI__OpenConfirmDialog_31190452((CommonUI_o *)v21, v22, v27, v28, v29, 1, v30, 0, 28, 180.0, 43.0, 0, 0, 0);
  }
}


void WarBoardConfigurationUIContoroller__OnClickStartConfirmDialog(
        WarBoardConfigurationUIContoroller_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C356E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C356E1 = 1;
  }
  if ( isDecide )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    WarBoardManager__TransitionPlayFromConfigurationMode((WarBoardManager_o *)Instance, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_9:
    sub_1C32E7C(Instance);
  }
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void WarBoardConfigurationUIContoroller__OnClickUserEquipButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C356D4 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
    byte_4C356D4 = 1;
  }
  v2 = Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__;
  if ( (*((_BYTE *)Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_WarBoardConfigurationUIContoroller_OnClickUserEquipButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C83334(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C83334(v4);
  Instance = **(Il2CppObject ***)(v6 + 184);
  if ( !Instance
    || (WarBoardManager__OpenUserEquipScene((WarBoardManager_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
}


void WarBoardConfigurationUIContoroller__OnCloseClassCompatibility(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  long double v3; // q0
  __int64 v4; // x0
  __int64 v5; // x0

  if ( (byte_4C356D7 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C356D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(v3);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C83334(v3);
  Instance = **(Il2CppObject ***)(v5 + 184);
  if ( !Instance )
LABEL_10:
    sub_1C32E7C(Instance);
  CommonUI__CloseClassCompatibilityMenu((CommonUI_o *)Instance, 0, 0);
}


void WarBoardConfigurationUIContoroller__OnEnable(WarBoardConfigurationUIContoroller_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C356E5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_14556/*"TopBase/BackButton"*/);
    byte_4C356E5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_14556/*"TopBase/BackButton"*/, 0);
}


void WarBoardConfigurationUIContoroller__OpenHintDialog(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  struct QuestHintEntity_o *questHintEntity; // x8
  System_String_o *title; // x20
  System_String_o *message; // x21
  int32_t leftIndent; // w22
  Il2CppObject *v8; // x23
  ScrollMessageDialog_ClickDelegate_o *v9; // x24

  if ( (byte_4C356DB & 1) == 0 )
  {
    sub_1C32C20(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__36_0__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C356DB = 1;
  }
  if ( this->fields.questHintEntity || this->fields.questPhaseEntity )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__SetMapTouchEnable(Instance, 0, 0, 0);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v9 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C32E6C(ScrollMessageDialog_ClickDelegate_TypeInfo);
        ScrollMessageDialog_ClickDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_WarBoardConfigurationUIContoroller__OpenHintDialog_b__36_0__,
          0);
        if ( v8 )
        {
          CommonUI__OpenScrollMessageDialog((CommonUI_o *)v8, title, message, leftIndent, v9, 0, 1, 0, 1, 0);
          return;
        }
      }
    }
LABEL_16:
    sub_1C32E7C(Instance);
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
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(costBaseObj, isActive, 0);
}


void WarBoardConfigurationUIContoroller__UpdateRuleButton(
        WarBoardConfigurationUIContoroller_o *this,
        const MethodInfo *method)
{
  UISprite_o *newRuleBg; // x20
  UISprite_o *Instance; // x0
  UnityEngine_GameObject_o *newRuleObject; // x19

  if ( (byte_4C356DD & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&StringLiteral_20207/*"icon_noticebg_01"*/);
    byte_4C356DD = 1;
  }
  newRuleBg = this->fields.newRuleBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(newRuleBg, 0);
  Instance = this->fields.newRuleBg;
  if ( !Instance
    || (UISprite__set_spriteName(Instance, (System_String_o *)StringLiteral_20207/*"icon_noticebg_01"*/, 0),
        newRuleObject = this->fields.newRuleObject,
        (Instance = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (Instance = *(UISprite_o **)&Instance->fields.mOuterUV.fields.m_Height) == 0
    || (Instance = (UISprite_o *)WarBoardData__HasNewWinCond((WarBoardData_o *)Instance, 0), !newRuleObject) )
  {
    sub_1C32E7C(Instance);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C356E6 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardConfigurationUIContoroller___c_TypeInfo);
    byte_4C356E6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(WarBoardConfigurationUIContoroller___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardConfigurationUIContoroller___c_TypeInfo->static_fields->__9 = (struct WarBoardConfigurationUIContoroller___c_o *)v1;
  sub_1C32BC4(
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
  if ( (byte_4C356E7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C356E7 = 1;
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
    sub_1C32E7C(this);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
}


void WarBoardConfigurationUIContoroller___c___OnClickStartButton_b__44_0(
        WarBoardConfigurationUIContoroller___c_o *this,
        bool ok,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C356E8 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C356E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
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
  if ( (byte_4C356E9 & 1) == 0 )
  {
    this = (WarBoardConfigurationUIContoroller___c__DisplayClass48_0_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C356E9 = 1;
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
                (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
LABEL_10:
    sub_1C32E7C(this);
  }
  return 0;
}