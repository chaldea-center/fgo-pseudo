void __fastcall EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  if ( (byte_43529FE & 1) == 0 )
  {
    sub_B70694(&EventInfoDetectiveRankControl_TypeInfo);
    byte_43529FE = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void __fastcall EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_43529FD & 1) == 0 )
  {
    sub_B70694(&EventInfoUIProgressControl_TypeInfo);
    byte_43529FD = 1;
  }
  if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  }
  EventInfoUIProgressControl___ctor((EventInfoUIProgressControl_o *)this, 0LL);
}


int32_t __fastcall EventInfoDetectiveRankControl__GetCurrentDetectiveRank(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  TerminalSceneComponent_o *mInstance; // x0
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w20
  bool v7; // w0
  struct EventProgressValueEntity_o *v8; // x8

  if ( (byte_43529FC & 1) == 0 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_43529FC = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    sub_B7076C(0LL, method);
  if ( !TerminalSceneComponent__IsMapActive(mInstance, 0LL) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
  v7 = EventInfoUIProgressControl__CheckEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0LL);
  v8 = this->fields.currentEventProgressValueEntity;
  if ( v7 )
  {
    if ( v8 )
      return EventInfoUIProgressControl__GetEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0, 0LL);
    return 0;
  }
  else
  {
    if ( v8 )
      progressValue = v8->fields.progressValue;
    else
      progressValue = 0;
    EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, progressValue, 0LL);
  }
  return progressValue;
}


void __fastcall EventInfoDetectiveRankControl__Initialization(
        EventInfoDetectiveRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x8
  __int64 v8; // x8
  AssetData_o *v9; // x0
  struct UnityEngine_GameObject_o *Object_31182080; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_o *titleBgSpriteName; // x20
  UISprite_o *titleBgSprite; // x21
  System_String_o *condtionBgSpriteName; // x20
  UISprite_o *condtionBgSprite; // x21
  System_String_o *missionCountBgSpriteName; // x20
  UISprite_o *missionCountBgSprite; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  System_String_o *missionStartedCountBgSpriteName; // x20
  UISprite_o *v25; // x21
  UnityEngine_Component_o *v26; // x8
  char v27; // w19
  EventInfoDetectiveRankControl_o *v28; // x0
  EventUiValueEntity_array *v29; // x1
  const MethodInfo *v30; // x2

  if ( (byte_43529F6 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&StringLiteral_11425/*"RankUpEffect"*/);
    byte_43529F6 = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v7 )
    goto LABEL_45;
  v8 = *(_QWORD *)(v7 + 256);
  if ( !v8 )
    goto LABEL_45;
  v9 = *(AssetData_o **)(v8 + 232);
  if ( v9 )
  {
    Object_31182080 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_31182080(
                                                           v9,
                                                           (System_String_o *)StringLiteral_11425/*"RankUpEffect"*/,
                                                           0LL);
    if ( Object_31182080 && Object_31182080->klass != UnityEngine_GameObject_TypeInfo )
    {
      v28 = (EventInfoDetectiveRankControl_o *)sub_B70A60(Object_31182080);
      EventInfoDetectiveRankControl__Setup(v28, v29, v30);
      return;
    }
    this->fields.effectBasePrefab = Object_31182080;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.effectBasePrefab,
      (System_Int32_array **)Object_31182080,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0LL) )
  {
    titleBgSprite = this->fields.titleBgSprite;
    titleBgSpriteName = this->fields.titleBgSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(titleBgSprite, titleBgSpriteName, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleBgSprite;
    if ( !gameObject )
      goto LABEL_45;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
      gameObject,
      gameObject->klass[2]._1.interopData);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.condtionBgSpriteName, 0LL) )
  {
    condtionBgSprite = this->fields.condtionBgSprite;
    condtionBgSpriteName = this->fields.condtionBgSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(condtionBgSprite, condtionBgSpriteName, 0LL);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.missionCountBgSpriteName, 0LL) )
  {
    missionCountBgSprite = this->fields.missionCountBgSprite;
    missionCountBgSpriteName = this->fields.missionCountBgSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(missionCountBgSprite, missionCountBgSpriteName, 0LL);
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(missionStartedCountBgSprite, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.missionStartedCountBgSpriteName, 0LL) )
  {
    v25 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v25, missionStartedCountBgSpriteName, 0LL);
    v26 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v26 )
    {
      v27 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v27 & 1, 0LL);
        return;
      }
    }
LABEL_45:
    sub_B7076C(gameObject, v5);
  }
}


void __fastcall EventInfoDetectiveRankControl__PlayAnim(
        EventInfoDetectiveRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  UnityEngine_UI_Dropdown_DropdownItem_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  struct UnityEngine_GameObject_o *v25; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Action_o *v30; // x21
  System_Action_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_43529FB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_B70694(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__);
    sub_B70694(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
    byte_43529FB = 1;
  }
  v7 = sub_B70764(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
  EventInfoDetectiveRankControl___c__DisplayClass26_0___ctor(
    (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  if ( type == 1 && this->fields.currentEventProgressValueEntity )
  {
    effectBasePrefab = (UnityEngine_Object_o *)this->fields.effectBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(effectBasePrefab, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_20;
      progressValue = currentEventProgressValueEntity->fields.progressValue;
      *(_DWORD *)(v7 + 24) = progressValue;
      if ( this->fields.userRank < progressValue )
      {
        v25 = this->fields.effectBasePrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v8 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
               (UnityEngine_UI_Dropdown_DropdownItem_o *)v25,
               (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v27 = (UnityEngine_GameObject_o *)v8;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL);
          GameObjectExtensions__SafeSetParent_32503456(v27, gameObject, 0LL);
          if ( v27 )
          {
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v27,
                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v30 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v30,
              (Il2CppObject *)v7,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0LL);
            if ( Component_srcLineSprite )
            {
              CommonEffectActionComponent__SetEventAction(
                (CommonEffectActionComponent_o *)Component_srcLineSprite,
                0,
                v30,
                0LL);
              v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
              System_Action___ctor(
                v31,
                (Il2CppObject *)v7,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0LL);
              *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v31;
              sub_B70630(
                (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
                (System_Int32_array **)v31,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
              return;
            }
          }
        }
LABEL_20:
        sub_B7076C(v8, v9);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
}


void __fastcall EventInfoDetectiveRankControl__Redisplay(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t CurrentDetectiveRank; // w0
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  EventInfoUIProgressControl__Redisplay((EventInfoUIProgressControl_o *)this, 0LL);
  CurrentDetectiveRank = EventInfoDetectiveRankControl__GetCurrentDetectiveRank(this, v3);
  this->fields.userRank = CurrentDetectiveRank;
  EventInfoDetectiveRankControl__SetupTitleBg(this, CurrentDetectiveRank, v5);
  EventInfoDetectiveRankControl__SetupCondtionText(this, v6, v7);
  EventInfoDetectiveRankControl__SetupMissionClearCount(this, v8);
  EventInfoDetectiveRankControl__SetupMissionStartedCount(this, v9);
}


void __fastcall EventInfoDetectiveRankControl__Setup(
        EventInfoDetectiveRankControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  int32_t CurrentDetectiveRank; // w0
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  EventInfoUIProgressControl__Setup((EventInfoUIProgressControl_o *)this, entitys, 0LL);
  CurrentDetectiveRank = EventInfoDetectiveRankControl__GetCurrentDetectiveRank(this, v4);
  this->fields.userRank = CurrentDetectiveRank;
  EventInfoDetectiveRankControl__SetupTitleBg(this, CurrentDetectiveRank, v6);
  EventInfoDetectiveRankControl__SetupCondtionText(this, v7, v8);
  EventInfoDetectiveRankControl__SetupMissionClearCount(this, v9);
  EventInfoDetectiveRankControl__SetupMissionStartedCount(this, v10);
}


void __fastcall EventInfoDetectiveRankControl__SetupCondtionText(
        EventInfoDetectiveRankControl_o *this,
        int32_t userRank,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl_o *v3; // x19
  struct EventProgressValueEntity_o *nextEventProgressValueEntity; // x8
  UILabel_o *conditionTextLabel; // x19
  System_String_o *condMessage; // x1

  v3 = this;
  if ( (byte_43529F8 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    this = (EventInfoDetectiveRankControl_o *)sub_B70694(&StringLiteral_5760/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/);
    byte_43529F8 = 1;
  }
  nextEventProgressValueEntity = v3->fields.nextEventProgressValueEntity;
  conditionTextLabel = v3->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_10:
    sub_B7076C(this, condMessage);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5760/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0LL);
  condMessage = (System_String_o *)this;
  if ( !conditionTextLabel )
    goto LABEL_10;
LABEL_5:
  UILabel__set_text(conditionTextLabel, condMessage, 0LL);
}


void __fastcall EventInfoDetectiveRankControl__SetupMissionClearCount(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v7; // x21
  EventInfoDetectiveRankControl_c *v8; // x8
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  bool v12; // cc
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43529F9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&EventInfoDetectiveRankControl_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_B70694(&StringLiteral_3348/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_43529F9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  UserEventRandomMissionTotalClearCount = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                            Master_WarQuestSelectionMaster,
                                            eventUiEntity->fields.eventId,
                                            0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v8 = EventInfoDetectiveRankControl_TypeInfo;
  if ( (BYTE3(EventInfoDetectiveRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo);
    v8 = EventInfoDetectiveRankControl_TypeInfo;
  }
  v15 = UnityEngine_Mathf__Min_41127788(
          UserEventRandomMissionTotalClearCount,
          v8->static_fields->MISSION_CLEAR_DISP_COUNT_MAX,
          0LL);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9);
  v11 = System_String__Format(v7, v10, 0LL);
  v12 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v13 = v11;
  if ( !v12 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3348/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
    v13 = System_String__Concat_44758168(v13, v14, 0LL);
  }
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v13, 0LL);
}


void __fastcall EventInfoDetectiveRankControl__SetupMissionStartedCount(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *missionStartedCountTextLabel; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  System_Collections_Generic_List_UserEventRandomMissionEntity__o *UserEventRandomMissionProgressList; // x20
  struct EventUiEntity_o *v9; // x8
  int32_t RandomMissionMaxNum; // w8
  UILabel_o *v11; // x19
  int v12; // w22
  __int64 v13; // x2
  System_String_o *v14; // x21
  Il2CppObject *v15; // x20
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  int v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t size; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43529FA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_12638/*"SUM_INFO"*/);
    byte_43529FA = 1;
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(missionStartedCountBgSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( !gameObject )
      goto LABEL_32;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      missionStartedCountTextLabel = (UnityEngine_Object_o *)this->fields.missionStartedCountTextLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(missionStartedCountTextLabel, 0LL, 0LL) )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0LL);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventDetailMaster___);
            v9 = this->fields.eventUiEntity;
            if ( v9 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                          v9->fields.eventId,
                                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum(
                                          (EventDetailEntity_o *)gameObject,
                                          0LL);
                  v11 = this->fields.missionStartedCountTextLabel;
                  v12 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12638/*"SUM_INFO"*/,
                                                            0LL);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v14 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size, v13);
                    v18 = v12;
                    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v16);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_44753704(v14, v15, v17, 0LL);
                    if ( v11 )
                    {
                      UILabel__set_text(v11, (System_String_o *)gameObject, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_32:
        sub_B7076C(gameObject, v4);
      }
    }
  }
}


void __fastcall EventInfoDetectiveRankControl__SetupTitleBg(
        EventInfoDetectiveRankControl_o *this,
        int32_t userRank,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl___c__DisplayClass21_0_o *v5; // x21
  struct UISprite_o *titleBgSprite; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *viewDataList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x22
  peRenderTexture_ChangeLayerObject_o *v10; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *renderer; // x21

  if ( (byte_43529F7 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_B70694(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    sub_B70694(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_B70694(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__);
    sub_B70694(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
    byte_43529F7 = 1;
  }
  v5 = (EventInfoDetectiveRankControl___c__DisplayClass21_0_o *)sub_B70764(EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
  EventInfoDetectiveRankControl___c__DisplayClass21_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  v5->fields.userRank = userRank;
  viewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.viewDataList;
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
  if ( !viewDataList )
    goto LABEL_12;
  v10 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          viewDataList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v10 )
  {
    rankSprite = this->fields.rankSprite;
    renderer = (System_String_o *)v10->fields.renderer;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(rankSprite, renderer, 0LL);
    titleBgSprite = this->fields.titleBgSprite;
    if ( titleBgSprite )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))titleBgSprite->klass->vtable._33_MakePixelPerfect.method)(
        titleBgSprite,
        titleBgSprite->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_12:
    sub_B7076C(titleBgSprite, v7);
  }
}


void __fastcall EventInfoDetectiveRankControl_ViewData___ctor(
        EventInfoDetectiveRankControl_ViewData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass21_0___ctor(
        EventInfoDetectiveRankControl___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass21_0___SetupTitleBg_b__0(
        EventInfoDetectiveRankControl___c__DisplayClass21_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.DetectiveRank == this->fields.userRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___ctor(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__0(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoDetectiveRankControl__SetupTitleBg(_4__this, this->fields.afterRank, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventInfoDetectiveRankControl__SetupCondtionText(_4__this, this->fields.afterRank, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B7076C(_4__this, method);
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(_4__this, 0LL);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *fields; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *monitor; // x22
  Il2CppClass *v6; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v8; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x23
  Il2CppObject *v10; // x23
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x22
  System_String_o *v13; // x0
  System_Action_o *v14; // x23
  System_String_o *v15; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_434F07F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    sub_B70694(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__);
    sub_B70694(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__);
    sub_B70694(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__);
    sub_B70694(&StringLiteral_5761/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_B70694(&StringLiteral_5762/*"EVENT_PROGRESS_RANKUP_TITLE"*/);
    byte_434F07F = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_20;
  fields = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)klass->_1.fields;
  monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v2[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      monitor,
      v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    v2[2].monitor = monitor;
    sub_B70630(&v2[2].monitor);
  }
  if ( !fields )
    goto LABEL_20;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                    fields,
                                                                    (System_Predicate_T__o *)monitor,
                                                                    (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_20;
  v6 = v2[1].klass;
  if ( !v6 )
    goto LABEL_20;
  callback = (Il2CppObject *)this->fields.callback;
  v8 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v6->_1.fields;
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v2[3].klass;
  if ( !v9 )
  {
    v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v9,
      v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    v2[3].klass = (Il2CppClass *)v9;
    sub_B70630(&v2[3]);
  }
  if ( !v8 )
    goto LABEL_20;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                    v8,
                                                                    (System_Predicate_T__o *)v9,
                                                                    (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_20;
  v10 = (Il2CppObject *)this->fields.callback;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5762/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5761/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0LL);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_44753704(
                                                                    v13,
                                                                    callback,
                                                                    v10,
                                                                    0LL);
  v14 = (System_Action_o *)v2[3].monitor;
  v15 = (System_String_o *)this;
  if ( !v14 )
  {
    v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v14, v2, Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, 0LL);
    v2[3].monitor = v14;
    sub_B70630(&v2[3].monitor);
  }
  if ( !Instance )
LABEL_20:
    sub_B7076C(this, method);
  CommonUI__OpenNotificationDialog(Instance, v12, v15, v14, -1, 0, 30, 0, 0, 28, 1, 0, 0LL, 0LL);
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0LL )
    sub_B7076C(this, n);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_434F080 & 1) == 0 )
  {
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434F080 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.userRank = v2->fields.afterRank,
        (this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)v2->fields.__4__this) == 0LL)
    || (EventInfoUIProgressControl__SaveEventProgressValueSaveData(
          (EventInfoUIProgressControl_o *)this,
          (int32_t)this[3].fields.callback,
          0LL),
        (this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(this, method);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}