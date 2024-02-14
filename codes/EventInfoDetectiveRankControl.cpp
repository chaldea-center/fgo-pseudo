void __fastcall EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42155A7 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoDetectiveRankControl_TypeInfo, v1);
    byte_42155A7 = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void __fastcall EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_42155A6 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoUIProgressControl_TypeInfo, method);
    byte_42155A6 = 1;
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

  if ( (byte_42155A5 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_42155A5 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
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
    sub_B0D97C(0LL);
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
  struct UnityEngine_GameObject_o *Object_29501436; // x0
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

  if ( (byte_421559F & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, entity);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_11298/*"RankUpEffect"*/, v8);
    byte_421559F = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v9);
    byte_421083D = 1;
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
    Object_29501436 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_29501436(
                                                           v13,
                                                           (System_String_o *)StringLiteral_11298/*"RankUpEffect"*/,
                                                           0LL);
    if ( Object_29501436 && Object_29501436->klass != UnityEngine_GameObject_TypeInfo )
    {
      v32 = (EventInfoDetectiveRankControl_o *)sub_B0DC70(Object_29501436);
      EventInfoDetectiveRankControl__Setup(v32, v33, v34);
      return;
    }
    this->fields.effectBasePrefab = Object_29501436;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.effectBasePrefab,
      (System_Int32_array **)Object_29501436,
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
    sub_B0D97C(gameObject);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  struct UnityEngine_GameObject_o *v30; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42155A4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__, v10);
    sub_B0D8A4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__, v11);
    sub_B0D8A4(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo, v12);
    byte_42155A4 = 1;
  }
  v13 = sub_B0D974(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&type, callback);
  EventInfoDetectiveRankControl___c__DisplayClass26_0___ctor(
    (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v13 + 32) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
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
        v30 = this->fields.effectBasePrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v14 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)v30,
                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v32 = (UnityEngine_GameObject_o *)v14;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL);
          GameObjectExtensions__SafeSetParent_31184716(v32, gameObject, 0LL);
          if ( v32 )
          {
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v32,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
            System_Action___ctor(
              v37,
              (Il2CppObject *)v13,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0LL);
            if ( Component_srcLineSprite )
            {
              CommonEffectActionComponent__SetEventAction(
                (CommonEffectActionComponent_o *)Component_srcLineSprite,
                0,
                v37,
                0LL);
              v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
              System_Action___ctor(
                v40,
                (Il2CppObject *)v13,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0LL);
              *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v40;
              sub_B0D840(
                (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
                (System_Int32_array **)v40,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46);
              return;
            }
          }
        }
LABEL_20:
        sub_B0D97C(v14);
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
  if ( (byte_42155A1 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&userRank);
    this = (EventInfoDetectiveRankControl_o *)sub_B0D8A4(&StringLiteral_5687/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, v4);
    byte_42155A1 = 1;
  }
  nextEventProgressValueEntity = v3->fields.nextEventProgressValueEntity;
  conditionTextLabel = v3->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_10:
    sub_B0D97C(this);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0LL);
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
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v12; // x21
  EventInfoDetectiveRankControl_c *v13; // x8
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  bool v16; // cc
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42155A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&EventInfoDetectiveRankControl_TypeInfo, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    sub_B0D8A4(&StringLiteral_3286/*"COMMON_COUNT_OPERATOR_PLUS"*/, v8);
    byte_42155A2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v13 = EventInfoDetectiveRankControl_TypeInfo;
  if ( (BYTE3(EventInfoDetectiveRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo);
    v13 = EventInfoDetectiveRankControl_TypeInfo;
  }
  v19 = UnityEngine_Mathf__Min_40819044(
          UserEventRandomMissionTotalClearCount,
          v13->static_fields->MISSION_CLEAR_DISP_COUNT_MAX,
          0LL);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v15 = System_String__Format(v12, v14, 0LL);
  v16 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v17 = v15;
  if ( !v16 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3286/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
    v17 = System_String__Concat_43849904(v17, v18, 0LL);
  }
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v17, 0LL);
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *missionStartedCountTextLabel; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  System_Collections_Generic_List_UserEventRandomMissionEntity__o *UserEventRandomMissionProgressList; // x20
  struct EventUiEntity_o *v16; // x8
  int32_t RandomMissionMaxNum; // w8
  UILabel_o *v18; // x19
  int v19; // w22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x20
  Il2CppObject *v22; // x0
  int v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t size; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42155A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v10);
    byte_42155A3 = 1;
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
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0LL);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
            v16 = this->fields.eventUiEntity;
            if ( v16 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                          v16->fields.eventId,
                                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum(
                                          (EventDetailEntity_o *)gameObject,
                                          0LL);
                  v18 = this->fields.missionStartedCountTextLabel;
                  v19 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12507/*"SUM_INFO"*/,
                                                            0LL);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v20 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size);
                    v23 = v19;
                    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_43845440(v20, v21, v22, 0LL);
                    if ( v18 )
                    {
                      UILabel__set_text(v18, (System_String_o *)gameObject, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_32:
        sub_B0D97C(gameObject);
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
  __int64 v13; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *viewDataList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x22
  peRenderTexture_ChangeLayerObject_o *v16; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *renderer; // x21

  if ( (byte_42155A0 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&userRank);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v5);
    sub_B0D8A4(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__, v6);
    sub_B0D8A4(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v7);
    sub_B0D8A4(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__, v8);
    sub_B0D8A4(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo, v9);
    byte_42155A0 = 1;
  }
  v10 = (EventInfoDetectiveRankControl___c__DisplayClass21_0_o *)sub_B0D974(
                                                                   EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo,
                                                                   *(_QWORD *)&userRank,
                                                                   method);
  EventInfoDetectiveRankControl___c__DisplayClass21_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  v10->fields.userRank = userRank;
  viewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.viewDataList;
  v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo,
                                                                   v12,
                                                                   v13);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
  if ( !viewDataList )
    goto LABEL_12;
  v16 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          viewDataList,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v16 )
  {
    rankSprite = this->fields.rankSprite;
    renderer = (System_String_o *)v16->fields.renderer;
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
    sub_B0D97C(titleBgSprite);
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
    sub_B0D97C(this);
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
    sub_B0D97C(_4__this);
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(_4__this, 0LL);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
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
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *fields; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *monitor; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppClass *v19; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v21; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x23
  Il2CppObject *v23; // x23
  CommonUI_o *Instance; // x20
  System_String_o *v25; // x22
  System_String_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x23
  System_String_o *v30; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4211B5F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__, v6);
    sub_B0D8A4(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__, v9);
    sub_B0D8A4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__, v10);
    sub_B0D8A4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, v11);
    sub_B0D8A4(&StringLiteral_5688/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, v12);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_B0D8A4(&StringLiteral_5689/*"EVENT_PROGRESS_RANKUP_TITLE"*/, v13);
    byte_4211B5F = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_20;
  fields = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)klass->_1.fields;
  monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v3[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo,
                                                                         method,
                                                                         v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      monitor,
      v3,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    v3[2].monitor = monitor;
    sub_B0D840(&v3[2].monitor, monitor);
  }
  if ( !fields )
    goto LABEL_20;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                    fields,
                                                                    (System_Predicate_T__o *)monitor,
                                                                    (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_20;
  v19 = v3[1].klass;
  if ( !v19 )
    goto LABEL_20;
  callback = (Il2CppObject *)this->fields.callback;
  v21 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v19->_1.fields;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v3[3].klass;
  if ( !v22 )
  {
    v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo,
                                                                     v17,
                                                                     v18);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v22,
      v3,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    v3[3].klass = (Il2CppClass *)v22;
    sub_B0D840(&v3[3], v22);
  }
  if ( !v21 )
    goto LABEL_20;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                    v21,
                                                                    (System_Predicate_T__o *)v22,
                                                                    (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_20;
  v23 = (Il2CppObject *)this->fields.callback;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0LL);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_43845440(
                                                                    v26,
                                                                    callback,
                                                                    v23,
                                                                    0LL);
  v29 = (System_Action_o *)v3[3].monitor;
  v30 = (System_String_o *)this;
  if ( !v29 )
  {
    v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
    System_Action___ctor(v29, v3, Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, 0LL);
    v3[3].monitor = v29;
    sub_B0D840(&v3[3].monitor, v29);
  }
  if ( !Instance )
LABEL_20:
    sub_B0D97C(this);
  CommonUI__OpenNotificationDialog(Instance, v25, v30, v29, -1, 0, 30, 0, 0, 28, 1, 0, 0LL, 0LL);
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0LL )
    sub_B0D97C(this);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B0D97C(this);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4211B60 & 1) == 0 )
  {
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_B0D8A4(
                                                                      &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                      method);
    byte_4211B60 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.userRank = v2->fields.afterRank,
        (this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)v2->fields.__4__this) == 0LL)
    || (EventInfoUIProgressControl__SaveEventProgressValueSaveData(
          (EventInfoUIProgressControl_o *)this,
          (int32_t)this[3].fields.callback,
          0LL),
        (this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(this);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}