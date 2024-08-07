void __fastcall EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF6C5 & 1) == 0 )
  {
    sub_1B64A00(&EventInfoDetectiveRankControl_TypeInfo, v1);
    byte_49FF6C5 = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void __fastcall EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_49FF6C4 & 1) == 0 )
  {
    sub_1B64A00(&EventInfoUIProgressControl_TypeInfo, method);
    byte_49FF6C4 = 1;
  }
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
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

  if ( (byte_49FF6C3 & 1) == 0 )
  {
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, method);
    byte_49FF6C3 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F9DCD )
  {
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, method);
    byte_49F9DCD = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    sub_1B64C5C(0LL, method);
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
  UnityEngine_Object_o *Object_37460152; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct UnityEngine_GameObject_o *v17; // x8
  UnityEngine_GameObject_c *v18; // x1
  struct UnityEngine_GameObject_o **p_effectBasePrefab; // x0
  System_String_o *titleBgSpriteName; // x20
  UISprite_o *titleBgSprite; // x21
  System_String_o *condtionBgSpriteName; // x20
  UISprite_o *condtionBgSprite; // x21
  System_String_o *missionCountBgSpriteName; // x20
  UISprite_o *missionCountBgSprite; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  System_String_o *missionStartedCountBgSpriteName; // x20
  UISprite_o *v28; // x21
  UnityEngine_Component_o *v29; // x8
  char v30; // w19

  if ( (byte_49FF6BD & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, entity);
    sub_1B64A00(&UnityEngine_GameObject_TypeInfo, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_11094/*"RankUpEffect"*/, v8);
    byte_49FF6BD = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F9DCD )
  {
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v9);
    byte_49F9DCD = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v11 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v11 )
    goto LABEL_41;
  v12 = *(_QWORD *)(v11 + 264);
  if ( !v12 )
    goto LABEL_41;
  v13 = *(AssetData_o **)(v12 + 240);
  if ( !v13 )
    goto LABEL_18;
  Object_37460152 = AssetData__GetObject_37460152(v13, (System_String_o *)StringLiteral_11094/*"RankUpEffect"*/, 0LL);
  v17 = (struct UnityEngine_GameObject_o *)Object_37460152;
  if ( Object_37460152 )
  {
    v18 = UnityEngine_GameObject_TypeInfo;
    if ( (UnityEngine_GameObject_c *)Object_37460152->klass == UnityEngine_GameObject_TypeInfo )
    {
      this->fields.effectBasePrefab = (struct UnityEngine_GameObject_o *)Object_37460152;
      p_effectBasePrefab = &this->fields.effectBasePrefab;
      if ( v17->klass == v18 )
        goto LABEL_17;
    }
    sub_1B64F1C(v17);
  }
  this->fields.effectBasePrefab = v17;
  p_effectBasePrefab = &this->fields.effectBasePrefab;
LABEL_17:
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_effectBasePrefab, (int32_t)v17, v15, v16);
LABEL_18:
  if ( !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0LL) )
  {
    titleBgSprite = this->fields.titleBgSprite;
    titleBgSpriteName = this->fields.titleBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(titleBgSprite, titleBgSpriteName, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleBgSprite;
    if ( !gameObject )
      goto LABEL_41;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
      gameObject,
      gameObject->klass[2]._1.interopData);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.condtionBgSpriteName, 0LL) )
  {
    condtionBgSprite = this->fields.condtionBgSprite;
    condtionBgSpriteName = this->fields.condtionBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(condtionBgSprite, condtionBgSpriteName, 0LL);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.missionCountBgSpriteName, 0LL) )
  {
    missionCountBgSprite = this->fields.missionCountBgSprite;
    missionCountBgSpriteName = this->fields.missionCountBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(missionCountBgSprite, missionCountBgSpriteName, 0LL);
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(missionStartedCountBgSprite, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.missionStartedCountBgSpriteName, 0LL) )
  {
    v28 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v28, missionStartedCountBgSpriteName, 0LL);
    v29 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v29 )
    {
      v30 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(v29, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v30 & 1, 0LL);
        return;
      }
    }
LABEL_41:
    sub_1B64C5C(gameObject, v9);
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
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  Il2CppObject *v23; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  System_Action_o *v28; // x21
  System_Action_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_49FF6C2 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__, v10);
    sub_1B64A00(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__, v11);
    sub_1B64A00(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo, v12);
    byte_49FF6C2 = 1;
  }
  v13 = sub_1B64C4C(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_18;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 32) = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)callback, v18, v19);
  if ( type == 1 && this->fields.currentEventProgressValueEntity )
  {
    effectBasePrefab = (UnityEngine_Object_o *)this->fields.effectBasePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = (Il2CppObject *)UnityEngine_Object__op_Equality(effectBasePrefab, 0LL, 0LL);
    if ( ((unsigned __int8)v14 & 1) == 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_18;
      progressValue = currentEventProgressValueEntity->fields.progressValue;
      *(_DWORD *)(v13 + 24) = progressValue;
      if ( this->fields.userRank < progressValue )
      {
        v23 = (Il2CppObject *)this->fields.effectBasePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v14 = UnityEngine_Object__Instantiate_object_(
                v23,
                (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v25 = (UnityEngine_GameObject_o *)v14;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL);
          GameObjectExtensions__SafeSetParent_33382640(v25, gameObject, 0LL);
          if ( v25 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 v25,
                                 (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v28 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
            System_Action___ctor(
              v28,
              (Il2CppObject *)v13,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0LL);
            if ( Component_object )
            {
              CommonEffectActionComponent__SetEventAction(
                (CommonEffectActionComponent_o *)Component_object,
                0,
                v28,
                0LL);
              v29 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
              System_Action___ctor(
                v29,
                (Il2CppObject *)v13,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0LL);
              Component_object[2].monitor = v29;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v29, v30, v31);
              return;
            }
          }
        }
LABEL_18:
        sub_1B64C5C(v14, v15);
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
  EventInfoDetectiveRankControl_o *condMessage; // x1

  v3 = this;
  if ( (byte_49FF6BF & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, *(_QWORD *)&userRank);
    this = (EventInfoDetectiveRankControl_o *)sub_1B64A00(&StringLiteral_5639/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, v4);
    byte_49FF6BF = 1;
  }
  nextEventProgressValueEntity = v3->fields.nextEventProgressValueEntity;
  conditionTextLabel = v3->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = (EventInfoDetectiveRankControl_o *)nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_9:
    sub_1B64C5C(this, condMessage);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0LL);
  condMessage = this;
  if ( !conditionTextLabel )
    goto LABEL_9;
LABEL_5:
  UILabel__set_text(conditionTextLabel, (System_String_o *)condMessage, 0LL);
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
  UserEventRandomMissionMaster_o *Master_object; // x0
  __int64 v10; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  EventInfoDetectiveRankControl_c *v17; // x8
  System_String_o *v18; // x21
  int MISSION_CLEAR_DISP_COUNT_MAX; // w8
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  bool v22; // cc
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF6C0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&EventInfoDetectiveRankControl_TypeInfo, v4);
    sub_1B64A00(&int_TypeInfo, v5);
    sub_1B64A00(&LocalizationManager_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_5619/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    sub_1B64A00(&StringLiteral_3747/*"COMMON_COUNT_OPERATOR_PLUS"*/, v8);
    byte_49FF6C0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Master_object )
    goto LABEL_19;
  UserEventRandomMissionTotalClearCount = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                            Master_object,
                                            eventUiEntity->fields.eventId,
                                            0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v17 = EventInfoDetectiveRankControl_TypeInfo;
  v18 = v13;
  if ( !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo);
    v17 = EventInfoDetectiveRankControl_TypeInfo;
  }
  MISSION_CLEAR_DISP_COUNT_MAX = v17->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  if ( UserEventRandomMissionTotalClearCount < MISSION_CLEAR_DISP_COUNT_MAX )
    MISSION_CLEAR_DISP_COUNT_MAX = UserEventRandomMissionTotalClearCount;
  v25 = MISSION_CLEAR_DISP_COUNT_MAX;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v14, v15, v16);
  v21 = System_String__Format(v18, v20, 0LL);
  v22 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v23 = v21;
  if ( !v22 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3747/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
    v23 = System_String__Concat_61385136(v23, v24, 0LL);
  }
  Master_object = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_object )
LABEL_19:
    sub_1B64C5C(Master_object, v10);
  UILabel__set_text((UILabel_o *)Master_object, v23, 0LL);
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
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_String_o *v24; // x21
  Il2CppObject *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  int v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t size; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF6C1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v3);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_1B64A00(&int_TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__, v7);
    sub_1B64A00(&LocalizationManager_TypeInfo, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&StringLiteral_12325/*"SUM_INFO"*/, v10);
    byte_49FF6C1 = 1;
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(missionStartedCountBgSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      missionStartedCountTextLabel = (UnityEngine_Object_o *)this->fields.missionStartedCountTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(missionStartedCountTextLabel, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0LL);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventDetailMaster___);
            v17 = this->fields.eventUiEntity;
            if ( v17 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                          v17->fields.eventId,
                                                          (const MethodInfo_30D6798 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum(
                                          (EventDetailEntity_o *)gameObject,
                                          0LL);
                  v19 = this->fields.missionStartedCountTextLabel;
                  v20 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12325/*"SUM_INFO"*/,
                                                            0LL);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v24 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size, v21, v22, v23);
                    v30 = v20;
                    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v26, v27, v28);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_61399508(v24, v25, v29, 0LL);
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
LABEL_28:
        sub_1B64C5C(gameObject, v12);
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
  __int64 v9; // x21
  struct UISprite_o *titleBgSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__o *viewDataList; // x20
  System_Predicate_object__o *v13; // x22
  Il2CppObject *v14; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *monitor; // x21

  if ( (byte_49FF6BE & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, *(_QWORD *)&userRank);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v5);
    sub_1B64A00(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v6);
    sub_1B64A00(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__, v7);
    sub_1B64A00(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo, v8);
    byte_49FF6BE = 1;
  }
  v9 = sub_1B64C4C(EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_DWORD *)(v9 + 16) = userRank;
  viewDataList = this->fields.viewDataList;
  v13 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    0LL);
  if ( !viewDataList )
    goto LABEL_11;
  v14 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)viewDataList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v14 )
  {
    rankSprite = this->fields.rankSprite;
    monitor = (System_String_o *)v14[1].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(rankSprite, monitor, 0LL);
    titleBgSprite = this->fields.titleBgSprite;
    if ( titleBgSprite )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))titleBgSprite->klass->vtable._33_MakePixelPerfect.method)(
        titleBgSprite,
        titleBgSprite->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_11:
    sub_1B64C5C(titleBgSprite, v11);
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
    sub_1B64C5C(this, 0LL);
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
  const MethodInfo *v2; // x2
  EventInfoDetectiveRankControl_o *_4__this; // x0
  const MethodInfo *v5; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoDetectiveRankControl__SetupTitleBg(_4__this, this->fields.afterRank, v2),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventInfoDetectiveRankControl__SetupCondtionText(_4__this, (int32_t)method, v5),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B64C5C(_4__this, method);
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(_4__this, method);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct EventInfoDetectiveRankControl_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDataList; // x20
  System_Predicate_object__o *_9__2; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct EventInfoDetectiveRankControl_o *v17; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_object__o *v19; // x20
  System_Predicate_object__o *_9__3; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x23
  Il2CppObject *Instance; // x20
  System_String_o *v25; // x22
  System_String_o *v26; // x0
  System_Action_o *_9__4; // x23
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3

  v2 = this;
  if ( (byte_49FF6C6 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v3);
    sub_1B64A00(&LocalizationManager_TypeInfo, v4);
    sub_1B64A00(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64A00(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__, v7);
    sub_1B64A00(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__, v8);
    sub_1B64A00(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, v9);
    sub_1B64A00(&StringLiteral_5640/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, v10);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_1B64A00(&StringLiteral_5641/*"EVENT_PROGRESS_RANKUP_TITLE"*/, v11);
    byte_49FF6C6 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  viewDataList = (System_Collections_Generic_List_object__o *)_4__this->fields.viewDataList;
  _9__2 = (System_Predicate_object__o *)v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    v2->fields.__9__2 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__2;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v15, v16);
  }
  if ( !viewDataList )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    viewDataList,
                                                                    (System_Predicate_T__o *)_9__2,
                                                                    (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_19;
  callback = (Il2CppObject *)this->fields.callback;
  v19 = (System_Collections_Generic_List_object__o *)v17->fields.viewDataList;
  _9__3 = (System_Predicate_object__o *)v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      0LL);
    v2->fields.__9__3 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__3;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v21, v22);
  }
  if ( !v19 )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    v19,
                                                                    (System_Predicate_T__o *)_9__3,
                                                                    (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v23 = (Il2CppObject *)this->fields.callback;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5641/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5640/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0LL);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_61399508(
                                                                    v26,
                                                                    callback,
                                                                    v23,
                                                                    0LL);
  _9__4 = v2->fields.__9__4;
  v28 = this;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__,
      0LL);
    v2->fields.__9__4 = _9__4;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v29, v30);
  }
  if ( !Instance )
LABEL_19:
    sub_1B64C5C(this, method);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v25,
    (System_String_o *)v28,
    _9__4,
    -1,
    0,
    30,
    0,
    0,
    28,
    1,
    0,
    0LL,
    0.0,
    0LL);
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0LL )
    sub_1B64C5C(this, n);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64C5C(this, 0LL);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *_4__this; // x0
  int32_t afterRank; // w1

  if ( (byte_49FF6C7 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FF6C7 = 1;
  }
  _4__this = (EventInfoUIProgressControl_o *)this->fields.__4__this;
  if ( !_4__this
    || (afterRank = this->fields.afterRank,
        LODWORD(_4__this[2].monitor) = afterRank,
        EventInfoUIProgressControl__SaveEventProgressValueSaveData(_4__this, afterRank, 0LL),
        (_4__this = (EventInfoUIProgressControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64C5C(_4__this, method);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}