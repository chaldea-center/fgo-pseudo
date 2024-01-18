void __fastcall EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4188641 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoDetectiveRankControl_TypeInfo, v1);
    byte_4188641 = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void __fastcall EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_4188640 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoUIProgressControl_TypeInfo, method);
    byte_4188640 = 1;
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

  if ( (byte_418863F & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_418863F = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
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
    sub_B2C434(0LL, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x8
  __int64 v12; // x8
  AssetData_o *v13; // x0
  struct UnityEngine_GameObject_o *Object_30137720; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *titleBgSpriteName; // x20
  UISprite_o *titleBgSprite; // x21
  System_String_o *condtionBgSpriteName; // x20
  UISprite_o *condtionBgSprite; // x21
  System_String_o *missionCountBgSpriteName; // x20
  UISprite_o *missionCountBgSprite; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  System_String_o *missionStartedCountBgSpriteName; // x20
  UISprite_o *v29; // x21
  UnityEngine_Component_o *v30; // x8
  char v31; // w19
  EventInfoDetectiveRankControl_o *v32; // x0
  EventUiValueEntity_array *v33; // x1
  const MethodInfo *v34; // x2

  if ( (byte_4188639 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, entity);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_11271/*"RankUpEffect"*/, v8);
    byte_4188639 = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
    byte_4183C65 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v11 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v11 )
    goto LABEL_45;
  v12 = *(_QWORD *)(v11 + 256);
  if ( !v12 )
    goto LABEL_45;
  v13 = *(AssetData_o **)(v12 + 232);
  if ( v13 )
  {
    Object_30137720 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_30137720(
                                                           v13,
                                                           (System_String_o *)StringLiteral_11271/*"RankUpEffect"*/,
                                                           0LL);
    if ( Object_30137720 && Object_30137720->klass != UnityEngine_GameObject_TypeInfo )
    {
      v32 = (EventInfoDetectiveRankControl_o *)sub_B2C728(Object_30137720);
      EventInfoDetectiveRankControl__Setup(v32, v33, v34);
      return;
    }
    this->fields.effectBasePrefab = Object_30137720;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.effectBasePrefab,
      (System_Int32_array **)Object_30137720,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
    v29 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v29, missionStartedCountBgSpriteName, 0LL);
    v30 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v30 )
    {
      v31 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(v30, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v31 & 1, 0LL);
        return;
      }
    }
LABEL_45:
    sub_B2C434(gameObject, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoDetectiveRankControl__PlayAnim(
        EventInfoDetectiveRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  UnityEngine_UI_Dropdown_DropdownItem_o *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  struct UnityEngine_GameObject_o *v31; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Action_o *v36; // x21
  System_Action_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_418863E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__, v10);
    sub_B2C35C(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__, v11);
    sub_B2C35C(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo, v12);
    byte_418863E = 1;
  }
  v13 = sub_B2C42C(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
  EventInfoDetectiveRankControl___c__DisplayClass26_0___ctor(
    (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  if ( type == 1 && this->fields.currentEventProgressValueEntity )
  {
    effectBasePrefab = (UnityEngine_Object_o *)this->fields.effectBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(effectBasePrefab, 0LL, 0LL);
    if ( ((unsigned __int8)v14 & 1) == 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_20;
      progressValue = currentEventProgressValueEntity->fields.progressValue;
      *(_DWORD *)(v13 + 24) = progressValue;
      if ( this->fields.userRank < progressValue )
      {
        v31 = this->fields.effectBasePrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v14 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)v31,
                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v33 = (UnityEngine_GameObject_o *)v14;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL);
          GameObjectExtensions__SafeSetParent_31331952(v33, gameObject, 0LL);
          if ( v33 )
          {
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v33,
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v36,
              (Il2CppObject *)v13,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0LL);
            if ( Component_srcLineSprite )
            {
              CommonEffectActionComponent__SetEventAction(
                (CommonEffectActionComponent_o *)Component_srcLineSprite,
                0,
                v36,
                0LL);
              v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(
                v37,
                (Il2CppObject *)v13,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0LL);
              *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v37;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
                (System_Int32_array **)v37,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              return;
            }
          }
        }
LABEL_20:
        sub_B2C434(v14, v15);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v13 + 32), 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoDetectiveRankControl__SetupCondtionText(
        EventInfoDetectiveRankControl_o *this,
        int32_t userRank,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl_o *v3; // x19
  __int64 v4; // x1
  struct EventProgressValueEntity_o *nextEventProgressValueEntity; // x8
  UILabel_o *conditionTextLabel; // x19
  System_String_o *condMessage; // x1

  v3 = this;
  if ( (byte_418863B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&userRank);
    this = (EventInfoDetectiveRankControl_o *)sub_B2C35C(&StringLiteral_5671/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, v4);
    byte_418863B = 1;
  }
  nextEventProgressValueEntity = v3->fields.nextEventProgressValueEntity;
  conditionTextLabel = v3->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_10:
    sub_B2C434(this, condMessage);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5671/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v13; // x21
  EventInfoDetectiveRankControl_c *v14; // x8
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  bool v17; // cc
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418863C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&EventInfoDetectiveRankControl_TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    sub_B2C35C(&StringLiteral_3273/*"COMMON_COUNT_OPERATOR_PLUS"*/, v8);
    byte_418863C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
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
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v14 = EventInfoDetectiveRankControl_TypeInfo;
  if ( (BYTE3(EventInfoDetectiveRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo);
    v14 = EventInfoDetectiveRankControl_TypeInfo;
  }
  v20 = UnityEngine_Mathf__Min_40694704(
          UserEventRandomMissionTotalClearCount,
          v14->static_fields->MISSION_CLEAR_DISP_COUNT_MAX,
          0LL);
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v16 = System_String__Format(v13, v15, 0LL);
  v17 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v18 = v16;
  if ( !v17 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
    v18 = System_String__Concat_44305532(v18, v19, 0LL);
  }
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B2C434(Master_WarQuestSelectionMaster, v10);
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v18, 0LL);
}


void __fastcall EventInfoDetectiveRankControl__SetupMissionStartedCount(
        EventInfoDetectiveRankControl_o *this,
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
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *missionStartedCountTextLabel; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  System_Collections_Generic_List_UserEventRandomMissionEntity__o *UserEventRandomMissionProgressList; // x20
  struct EventUiEntity_o *v17; // x8
  int32_t RandomMissionMaxNum; // w8
  UILabel_o *v19; // x19
  int v20; // w22
  System_String_o *v21; // x21
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x0
  int v24; // [xsp+8h] [xbp-28h] BYREF
  int32_t size; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418863D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v10);
    byte_418863D = 1;
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
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0LL);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
            v17 = this->fields.eventUiEntity;
            if ( v17 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                          v17->fields.eventId,
                                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum(
                                          (EventDetailEntity_o *)gameObject,
                                          0LL);
                  v19 = this->fields.missionStartedCountTextLabel;
                  v20 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12469/*"SUM_INFO"*/,
                                                            0LL);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v21 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size);
                    v24 = v20;
                    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_44301068(v21, v22, v23, 0LL);
                    if ( v19 )
                    {
                      UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_32:
        sub_B2C434(gameObject, v12);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoDetectiveRankControl__SetupTitleBg(
        EventInfoDetectiveRankControl_o *this,
        int32_t userRank,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventInfoDetectiveRankControl___c__DisplayClass21_0_o *v10; // x21
  struct UISprite_o *titleBgSprite; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *viewDataList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x22
  peRenderTexture_ChangeLayerObject_o *v15; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *renderer; // x21

  if ( (byte_418863A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&userRank);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v5);
    sub_B2C35C(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__, v6);
    sub_B2C35C(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v7);
    sub_B2C35C(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__, v8);
    sub_B2C35C(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo, v9);
    byte_418863A = 1;
  }
  v10 = (EventInfoDetectiveRankControl___c__DisplayClass21_0_o *)sub_B2C42C(EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
  EventInfoDetectiveRankControl___c__DisplayClass21_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  v10->fields.userRank = userRank;
  viewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.viewDataList;
  v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
  if ( !viewDataList )
    goto LABEL_12;
  v15 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          viewDataList,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v15 )
  {
    rankSprite = this->fields.rankSprite;
    renderer = (System_String_o *)v15->fields.renderer;
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
    sub_B2C434(titleBgSprite, v12);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(_4__this, method);
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(_4__this, 0LL);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
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
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v14; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *monitor; // x22
  Il2CppClass *v16; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v18; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x23
  Il2CppObject *v20; // x23
  CommonUI_o *Instance; // x20
  System_String_o *v22; // x22
  System_String_o *v23; // x0
  System_Action_o *v24; // x23
  System_String_o *v25; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4184B00 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__, v5);
    sub_B2C35C(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__, v8);
    sub_B2C35C(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__, v9);
    sub_B2C35C(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, v10);
    sub_B2C35C(&StringLiteral_5672/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, v11);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_B2C35C(&StringLiteral_5673/*"EVENT_PROGRESS_RANKUP_TITLE"*/, v12);
    byte_4184B00 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_20;
  v14 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)klass->_1.klass;
  monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v2[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      monitor,
      v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    v2[2].monitor = monitor;
    sub_B2C2F8(&v2[2].monitor, monitor);
  }
  if ( !v14 )
    goto LABEL_20;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                    v14,
                                                                    (System_Predicate_T__o *)monitor,
                                                                    (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_20;
  v16 = v2[1].klass;
  if ( !v16 )
    goto LABEL_20;
  callback = (Il2CppObject *)this->fields.callback;
  v18 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v16->_1.klass;
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v2[3].klass;
  if ( !v19 )
  {
    v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v19,
      v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    v2[3].klass = (Il2CppClass *)v19;
    sub_B2C2F8(&v2[3], v19);
  }
  if ( !v18 )
    goto LABEL_20;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                    v18,
                                                                    (System_Predicate_T__o *)v19,
                                                                    (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_20;
  v20 = (Il2CppObject *)this->fields.callback;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5673/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5672/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0LL);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_44301068(
                                                                    v23,
                                                                    callback,
                                                                    v20,
                                                                    0LL);
  v24 = (System_Action_o *)v2[3].monitor;
  v25 = (System_String_o *)this;
  if ( !v24 )
  {
    v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v24, v2, Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, 0LL);
    v2[3].monitor = v24;
    sub_B2C2F8(&v2[3].monitor, v24);
  }
  if ( !Instance )
LABEL_20:
    sub_B2C434(this, method);
  CommonUI__OpenNotificationDialog(Instance, v22, v25, v24, -1, 0, 30, 0, 0, 28, 1, 0, 0LL, 0LL);
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0LL )
    sub_B2C434(this, n);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4184B01 & 1) == 0 )
  {
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_B2C35C(
                                                                      &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                      method);
    byte_4184B01 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.userRank = v2->fields.afterRank,
        (this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)v2->fields.__4__this) == 0LL)
    || (EventInfoUIProgressControl__SaveEventProgressValueSaveData(
          (EventInfoUIProgressControl_o *)this,
          this[3].fields.afterRank,
          0LL),
        (this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}