void __fastcall EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FA112 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoDetectiveRankControl_TypeInfo, v1);
    byte_40FA112 = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void __fastcall EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_40FA111 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoUIProgressControl_TypeInfo, method);
    byte_40FA111 = 1;
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

  if ( (byte_40FA110 & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40FA110 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
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
    sub_B170D4();
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
  TerminalSceneComponent_c *v10; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  AssetData_o *mapMultiAssetData; // x0
  struct UnityEngine_GameObject_o *Object_29932412; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *titleBgSpriteName; // x20
  UISprite_o *titleBgSprite; // x21
  struct UISprite_o *v23; // x0
  System_String_o *condtionBgSpriteName; // x20
  UISprite_o *condtionBgSprite; // x21
  System_String_o *missionCountBgSpriteName; // x20
  UISprite_o *missionCountBgSprite; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  System_String_o *missionStartedCountBgSpriteName; // x20
  UISprite_o *v30; // x21
  bool v31; // w0
  UnityEngine_Component_o *v32; // x8
  bool v33; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  EventInfoDetectiveRankControl_o *v35; // x0
  EventUiValueEntity_array *v36; // x1
  const MethodInfo *v37; // x2

  if ( (byte_40FA10A & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entity);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_11235/*"RankUpEffect"*/, v8);
    byte_40FA10A = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v9);
    byte_40F6042 = 1;
  }
  v10 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v10->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_45;
  mTerminalMap = mInstance->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_45;
  mapMultiAssetData = mTerminalMap->fields.mapMultiAssetData;
  if ( mapMultiAssetData )
  {
    Object_29932412 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_29932412(
                                                           mapMultiAssetData,
                                                           (System_String_o *)StringLiteral_11235/*"RankUpEffect"*/,
                                                           0LL);
    if ( Object_29932412 && Object_29932412->klass != UnityEngine_GameObject_TypeInfo )
    {
      v35 = (EventInfoDetectiveRankControl_o *)sub_B173C8(Object_29932412);
      EventInfoDetectiveRankControl__Setup(v35, v36, v37);
      return;
    }
    this->fields.effectBasePrefab = Object_29932412;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.effectBasePrefab,
      (System_Int32_array **)Object_29932412,
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
    v23 = this->fields.titleBgSprite;
    if ( !v23 )
      goto LABEL_45;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v23->klass->vtable._33_MakePixelPerfect.method)(
      v23,
      v23->klass->vtable._34_get_minWidth.methodPtr);
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
    v30 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v31 = AtlasManager__SetEventUI(v30, missionStartedCountBgSpriteName, 0LL);
    v32 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v32 )
    {
      v33 = v31;
      gameObject = UnityEngine_Component__get_gameObject(v32, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v33, 0LL);
        return;
      }
    }
LABEL_45:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoDetectiveRankControl__PlayAnim(
        EventInfoDetectiveRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
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
  UnityEngine_UI_Dropdown_DropdownItem_o *v31; // x0
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Action_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_40FA10F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__, v11);
    sub_B16FFC(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__, v12);
    sub_B16FFC(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo, v13);
    byte_40FA10F = 1;
  }
  v14 = sub_B170CC(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&type, callback, method, v4);
  EventInfoDetectiveRankControl___c__DisplayClass26_0___ctor(
    (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_20;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 32) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  if ( type == 1 && this->fields.currentEventProgressValueEntity )
  {
    effectBasePrefab = (UnityEngine_Object_o *)this->fields.effectBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(effectBasePrefab, 0LL, 0LL) )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_20;
      progressValue = currentEventProgressValueEntity->fields.progressValue;
      *(_DWORD *)(v14 + 24) = progressValue;
      if ( this->fields.userRank < progressValue )
      {
        v30 = this->fields.effectBasePrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v31 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)v30,
                (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v33 = (UnityEngine_GameObject_o *)v31;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL);
          GameObjectExtensions__SafeSetParent_27425996(v33, gameObject, 0LL);
          if ( v33 )
          {
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v33,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
            System_Action___ctor(
              v40,
              (Il2CppObject *)v14,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0LL);
            if ( Component_srcLineSprite )
            {
              CommonEffectActionComponent__SetEventAction(
                (CommonEffectActionComponent_o *)Component_srcLineSprite,
                0,
                v40,
                0LL);
              v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
              System_Action___ctor(
                v45,
                (Il2CppObject *)v14,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0LL);
              *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v45;
              sub_B16F98(
                (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
                (System_Int32_array **)v45,
                v46,
                v47,
                v48,
                v49,
                v50,
                v51);
              return;
            }
          }
        }
LABEL_20:
        sub_B170D4();
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v14 + 32), 0LL);
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
  __int64 v4; // x1
  struct EventProgressValueEntity_o *nextEventProgressValueEntity; // x8
  UILabel_o *conditionTextLabel; // x19
  System_String_o *condMessage; // x1

  if ( (byte_40FA10C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&userRank);
    sub_B16FFC(&StringLiteral_5655/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, v4);
    byte_40FA10C = 1;
  }
  nextEventProgressValueEntity = this->fields.nextEventProgressValueEntity;
  conditionTextLabel = this->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_10:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  condMessage = LocalizationManager__Get((System_String_o *)StringLiteral_5655/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0LL);
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
  UILabel_o *missionCountTextLabel; // x0
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA10D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&EventInfoDetectiveRankControl_TypeInfo, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_5635/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    sub_B16FFC(&StringLiteral_3264/*"COMMON_COUNT_OPERATOR_PLUS"*/, v8);
    byte_40FA10D = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5635/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v13 = EventInfoDetectiveRankControl_TypeInfo;
  if ( (BYTE3(EventInfoDetectiveRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo);
    v13 = EventInfoDetectiveRankControl_TypeInfo;
  }
  v20 = UnityEngine_Mathf__Min_40727532(
          UserEventRandomMissionTotalClearCount,
          v13->static_fields->MISSION_CLEAR_DISP_COUNT_MAX,
          0LL);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
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
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
    v17 = System_String__Concat_43743732(v17, v18, 0LL);
  }
  missionCountTextLabel = this->fields.missionCountTextLabel;
  if ( !missionCountTextLabel )
LABEL_21:
    sub_B170D4();
  UILabel__set_text(missionCountTextLabel, v17, 0LL);
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
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *missionStartedCountTextLabel; // x20
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  System_Collections_Generic_List_UserEventRandomMissionEntity__o *UserEventRandomMissionProgressList; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x0
  struct EventUiEntity_o *v19; // x8
  EventDetailEntity_o *Entity; // x0
  int32_t RandomMissionMaxNum; // w8
  UILabel_o *v22; // x19
  int v23; // w22
  System_String_o *v24; // x0
  System_String_o *v25; // x21
  Il2CppObject *v26; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int v29; // [xsp+8h] [xbp-28h] BYREF
  int32_t size; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA10E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_12413/*"SUM_INFO"*/, v10);
    byte_40FA10E = 1;
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(missionStartedCountBgSprite, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( !v12 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
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
        Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( Master_WarQuestSelectionMaster )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   Master_WarQuestSelectionMaster,
                                                   eventUiEntity->fields.eventId,
                                                   0LL);
            v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
            v19 = this->fields.eventUiEntity;
            if ( v19 )
            {
              if ( v18 )
              {
                Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  v18,
                                                  v19->fields.eventId,
                                                  (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( Entity )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum(Entity, 0LL);
                  v22 = this->fields.missionStartedCountTextLabel;
                  v23 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUM_INFO"*/, 0LL);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v25 = v24;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size);
                    v29 = v23;
                    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
                    v28 = System_String__Format_43739268(v25, v26, v27, 0LL);
                    if ( v22 )
                    {
                      UILabel__set_text(v22, v28, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_32:
        sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventInfoDetectiveRankControl___c__DisplayClass21_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *viewDataList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x22
  peRenderTexture_ChangeLayerObject_o *v19; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *renderer; // x21
  struct UISprite_o *titleBgSprite; // x0

  if ( (byte_40FA10B & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&userRank);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v7);
    sub_B16FFC(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__, v8);
    sub_B16FFC(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v9);
    sub_B16FFC(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__, v10);
    sub_B16FFC(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo, v11);
    byte_40FA10B = 1;
  }
  v12 = (EventInfoDetectiveRankControl___c__DisplayClass21_0_o *)sub_B170CC(
                                                                   EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo,
                                                                   *(_QWORD *)&userRank,
                                                                   method,
                                                                   v3,
                                                                   v4);
  EventInfoDetectiveRankControl___c__DisplayClass21_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_12;
  v12->fields.userRank = userRank;
  viewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.viewDataList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo,
                                                                   v13,
                                                                   v14,
                                                                   v15,
                                                                   v16);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
  if ( !viewDataList )
    goto LABEL_12;
  v19 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          viewDataList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v19 )
  {
    rankSprite = this->fields.rankSprite;
    renderer = (System_String_o *)v19->fields.renderer;
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
    sub_B170D4();
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
    sub_B170D4();
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
  EventInfoDetectiveRankControl_o *v4; // x0
  EventInfoDetectiveRankControl_o *v5; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoDetectiveRankControl__SetupTitleBg(_4__this, this->fields.afterRank, 0LL),
        (v4 = this->fields.__4__this) == 0LL)
    || (EventInfoDetectiveRankControl__SetupCondtionText(v4, this->fields.afterRank, 0LL),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(v5, 0LL);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  struct EventInfoDetectiveRankControl_o *_4__this; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *viewDataList; // x20
  struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *_9__2; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  peRenderTexture_ChangeLayerObject_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct EventInfoDetectiveRankControl_o *v30; // x8
  Il2CppObject *orgMaterial; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v32; // x20
  struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *_9__3; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  peRenderTexture_ChangeLayerObject_o *v40; // x0
  Il2CppObject *v41; // x23
  CommonUI_o *Instance; // x20
  System_String_o *v43; // x22
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *_9__4; // x23
  System_String_o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_40F6FCD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__, v8);
    sub_B16FFC(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__, v11);
    sub_B16FFC(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__, v12);
    sub_B16FFC(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, v13);
    sub_B16FFC(&StringLiteral_5656/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, v14);
    sub_B16FFC(&StringLiteral_5657/*"EVENT_PROGRESS_RANKUP_TITLE"*/, v15);
    byte_40F6FCD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  viewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)_4__this->fields.viewDataList;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)sub_B170CC(
                                                                                   System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo,
                                                                                   method,
                                                                                   v2,
                                                                                   v3,
                                                                                   v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__2,
      (Il2CppObject *)this,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !viewDataList )
    goto LABEL_20;
  v25 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          viewDataList,
          (System_Predicate_T__o *)_9__2,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !v25 )
    goto LABEL_20;
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_20;
  orgMaterial = (Il2CppObject *)v25->fields.orgMaterial;
  v32 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v30->fields.viewDataList;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)sub_B170CC(
                                                                                   System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo,
                                                                                   v26,
                                                                                   v27,
                                                                                   v28,
                                                                                   v29);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)_9__3,
      (Il2CppObject *)this,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v32 )
    goto LABEL_20;
  v40 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          v32,
          (System_Predicate_T__o *)_9__3,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !v40 )
    goto LABEL_20;
  v41 = (Il2CppObject *)v40->fields.orgMaterial;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5657/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0LL);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5656/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0LL);
  v45 = System_String__Format_43739268(v44, orgMaterial, v41, 0LL);
  _9__4 = this->fields.__9__4;
  v51 = v45;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__4,
      (System_Int32_array **)_9__4,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  if ( !Instance )
LABEL_20:
    sub_B170D4();
  CommonUI__OpenNotificationDialog(Instance, v43, v51, _9__4, -1, 0, 30, 0, 0, 28, 1, 0, 0LL, 0LL);
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0LL )
    sub_B170D4();
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoDetectiveRankControl_o *_4__this; // x8
  struct EventInfoDetectiveRankControl_o *v4; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40F6FCE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F6FCE = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.userRank = this->fields.afterRank, (v4 = this->fields.__4__this) == 0LL)
    || (EventInfoUIProgressControl__SaveEventProgressValueSaveData(
          (EventInfoUIProgressControl_o *)v4,
          v4->fields.userRank,
          0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}