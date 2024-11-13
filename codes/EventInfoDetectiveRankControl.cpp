void __fastcall EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16A4A & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoDetectiveRankControl_TypeInfo, v1, v2);
    byte_4B16A4A = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void __fastcall EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16A49 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoUIProgressControl_TypeInfo, method, v2);
    byte_4B16A49 = 1;
  }
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo, method);
  EventInfoUIProgressControl___ctor((EventInfoUIProgressControl_o *)this, 0LL);
}


int32_t __fastcall EventInfoDetectiveRankControl__GetCurrentDetectiveRank(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v4; // x0
  TerminalSceneComponent_o *mInstance; // x0
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w20
  bool v8; // w0
  struct EventProgressValueEntity_o *v9; // x8

  if ( (byte_4B16A48 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B16A48 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( !mInstance )
    sub_1BCAA3C(0LL, method);
  if ( !TerminalSceneComponent__IsMapActive(mInstance, 0LL) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
  v8 = EventInfoUIProgressControl__CheckEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0LL);
  v9 = this->fields.currentEventProgressValueEntity;
  if ( v8 )
  {
    if ( v9 )
      return EventInfoUIProgressControl__GetEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0, 0LL);
    return 0;
  }
  else
  {
    if ( v9 )
      progressValue = v9->fields.progressValue;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x8
  __int64 v17; // x8
  AssetData_o *v18; // x0
  UnityEngine_Object_o *Object_38483832; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UnityEngine_GameObject_o *v26; // x8
  UnityEngine_GameObject_c *v27; // x1
  struct UnityEngine_GameObject_o **p_effectBasePrefab; // x0
  __int64 v29; // x1
  System_String_o *titleBgSpriteName; // x20
  UISprite_o *titleBgSprite; // x21
  __int64 v32; // x1
  System_String_o *condtionBgSpriteName; // x20
  UISprite_o *condtionBgSprite; // x21
  __int64 v35; // x1
  System_String_o *missionCountBgSpriteName; // x20
  UISprite_o *missionCountBgSprite; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  __int64 v39; // x1
  System_String_o *missionStartedCountBgSpriteName; // x20
  UISprite_o *v41; // x21
  UnityEngine_Component_o *v42; // x8
  char v43; // w19

  if ( (byte_4B16A42 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, entity, method);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_11280/*"RankUpEffect"*/, v11, v12);
    byte_4B16A42 = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v14);
    byte_4B10F83 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
    gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v16 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v16 )
    goto LABEL_41;
  v17 = *(_QWORD *)(v16 + 264);
  if ( !v17 )
    goto LABEL_41;
  v18 = *(AssetData_o **)(v17 + 248);
  if ( !v18 )
    goto LABEL_18;
  Object_38483832 = AssetData__GetObject_38483832(v18, (System_String_o *)StringLiteral_11280/*"RankUpEffect"*/, 0LL);
  v26 = (struct UnityEngine_GameObject_o *)Object_38483832;
  if ( Object_38483832 )
  {
    v27 = UnityEngine_GameObject_TypeInfo;
    if ( (UnityEngine_GameObject_c *)Object_38483832->klass == UnityEngine_GameObject_TypeInfo )
    {
      this->fields.effectBasePrefab = (struct UnityEngine_GameObject_o *)Object_38483832;
      p_effectBasePrefab = &this->fields.effectBasePrefab;
      if ( v26->klass == v27 )
        goto LABEL_17;
    }
    sub_1BCACFC(v26);
  }
  this->fields.effectBasePrefab = v26;
  p_effectBasePrefab = &this->fields.effectBasePrefab;
LABEL_17:
  sub_1BCA784((PartyOrganizationUtility_o *)p_effectBasePrefab, (int64_t)v26, v20, v21, v22, v23, v24, v25);
LABEL_18:
  if ( !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0LL) )
  {
    titleBgSprite = this->fields.titleBgSprite;
    titleBgSpriteName = this->fields.titleBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
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
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
    AtlasManager__SetEventUI(condtionBgSprite, condtionBgSpriteName, 0LL);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.missionCountBgSpriteName, 0LL) )
  {
    missionCountBgSprite = this->fields.missionCountBgSprite;
    missionCountBgSpriteName = this->fields.missionCountBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35);
    AtlasManager__SetEventUI(missionCountBgSprite, missionCountBgSpriteName, 0LL);
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Inequality(missionStartedCountBgSprite, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.missionStartedCountBgSpriteName, 0LL) )
  {
    v41 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v39);
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v41, missionStartedCountBgSpriteName, 0LL);
    v42 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v42 )
    {
      v43 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(v42, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v43 & 1, 0LL);
        return;
      }
    }
LABEL_41:
    sub_1BCAA3C(gameObject, v13);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  Il2CppObject *v38; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v40; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7

  if ( (byte_4B16A47 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&type, callback);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__, v13, v14);
    sub_1BCA7E0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__, v15, v16);
    sub_1BCA7E0(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo, v17, v18);
    byte_4B16A47 = 1;
  }
  v19 = sub_1BCAA2C(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&type, callback, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_18;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 32) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)callback, v28, v29, v30, v31, v32, v33);
  if ( type == 1 && this->fields.currentEventProgressValueEntity )
  {
    effectBasePrefab = (UnityEngine_Object_o *)this->fields.effectBasePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    v20 = (Il2CppObject *)UnityEngine_Object__op_Equality(effectBasePrefab, 0LL, 0LL);
    if ( ((unsigned __int8)v20 & 1) == 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_18;
      progressValue = currentEventProgressValueEntity->fields.progressValue;
      *(_DWORD *)(v19 + 24) = progressValue;
      if ( this->fields.userRank < progressValue )
      {
        v38 = (Il2CppObject *)this->fields.effectBasePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        v20 = UnityEngine_Object__Instantiate_object_(
                v38,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v40 = (UnityEngine_GameObject_o *)v20;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL);
          GameObjectExtensions__SafeSetParent_34336992(v40, gameObject, 0LL);
          if ( v40 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 v40,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
            System_Action___ctor(
              v46,
              (Il2CppObject *)v19,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0LL);
            if ( Component_object )
            {
              CommonEffectActionComponent__SetEventAction(
                (CommonEffectActionComponent_o *)Component_object,
                0,
                v46,
                0LL);
              v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
              System_Action___ctor(
                v50,
                (Il2CppObject *)v19,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0LL);
              Component_object[2].monitor = v50;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&Component_object[2].monitor,
                (int64_t)v50,
                v51,
                v52,
                v53,
                v54,
                v55,
                v56);
              return;
            }
          }
        }
LABEL_18:
        sub_1BCAA3C(v20, v21);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v19 + 32), 0LL);
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
  __int64 v5; // x2
  struct EventProgressValueEntity_o *nextEventProgressValueEntity; // x8
  UILabel_o *conditionTextLabel; // x19
  EventInfoDetectiveRankControl_o *condMessage; // x1

  v3 = this;
  if ( (byte_4B16A44 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&userRank, method);
    this = (EventInfoDetectiveRankControl_o *)sub_1BCA7E0(&StringLiteral_5748/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, v4, v5);
    byte_4B16A44 = 1;
  }
  nextEventProgressValueEntity = v3->fields.nextEventProgressValueEntity;
  conditionTextLabel = v3->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = (EventInfoDetectiveRankControl_o *)nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_9:
    sub_1BCAA3C(this, condMessage);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&userRank);
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5748/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UserEventRandomMissionMaster_o *Master_object; // x0
  __int64 v17; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v19; // x1
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v21; // x0
  __int64 v22; // x1
  EventInfoDetectiveRankControl_c *v23; // x8
  System_String_o *v24; // x21
  int MISSION_CLEAR_DISP_COUNT_MAX; // w8
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  bool v28; // cc
  System_String_o *v29; // x20
  System_String_o *v30; // x0
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16A45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&EventInfoDetectiveRankControl_TypeInfo, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3801/*"COMMON_COUNT_OPERATOR_PLUS"*/, v14, v15);
    byte_4B16A45 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Master_object )
    goto LABEL_19;
  UserEventRandomMissionTotalClearCount = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                            Master_object,
                                            eventUiEntity->fields.eventId,
                                            0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v23 = EventInfoDetectiveRankControl_TypeInfo;
  v24 = v21;
  if ( !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo, v22);
    v23 = EventInfoDetectiveRankControl_TypeInfo;
  }
  MISSION_CLEAR_DISP_COUNT_MAX = v23->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  if ( UserEventRandomMissionTotalClearCount < MISSION_CLEAR_DISP_COUNT_MAX )
    MISSION_CLEAR_DISP_COUNT_MAX = UserEventRandomMissionTotalClearCount;
  v31 = MISSION_CLEAR_DISP_COUNT_MAX;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v27 = System_String__Format(v24, v26, 0LL);
  v28 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v29 = v27;
  if ( !v28 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
    v29 = System_String__Concat_62401220(v29, v30, 0LL);
  }
  Master_object = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_object )
LABEL_19:
    sub_1BCAA3C(Master_object, v17);
  UILabel__set_text((UILabel_o *)Master_object, v29, 0LL);
}


void __fastcall EventInfoDetectiveRankControl__SetupMissionStartedCount(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  __int64 v21; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *missionStartedCountTextLabel; // x20
  __int64 v25; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  System_Collections_Generic_List_UserEventRandomMissionEntity__o *UserEventRandomMissionProgressList; // x20
  struct EventUiEntity_o *v28; // x8
  __int64 v29; // x1
  int32_t RandomMissionMaxNum; // w8
  UILabel_o *v31; // x19
  int v32; // w22
  System_String_o *v33; // x21
  Il2CppObject *v34; // x20
  Il2CppObject *v35; // x0
  int v36; // [xsp+8h] [xbp-38h] BYREF
  int32_t size; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16A46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v18, v19);
    byte_4B16A46 = 1;
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      if ( !UnityEngine_Object__op_Equality(missionStartedCountTextLabel, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0LL);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
            v28 = this->fields.eventUiEntity;
            if ( v28 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                          v28->fields.eventId,
                                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum(
                                          (EventDetailEntity_o *)gameObject,
                                          0LL);
                  v31 = this->fields.missionStartedCountTextLabel;
                  v32 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12532/*"SUM_INFO"*/,
                                                            0LL);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v33 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size);
                    v36 = v32;
                    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_62415592(v33, v34, v35, 0LL);
                    if ( v31 )
                    {
                      UILabel__set_text(v31, (System_String_o *)gameObject, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_28:
        sub_1BCAA3C(gameObject, v21);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  struct UISprite_o *titleBgSprite; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__o *viewDataList; // x20
  System_Predicate_object__o *v20; // x22
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  UISprite_o *rankSprite; // x20
  System_String_o *monitor; // x21

  if ( (byte_4B16A43 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&userRank, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v6, v7);
    sub_1BCA7E0(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__, v10, v11);
    sub_1BCA7E0(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo, v12, v13);
    byte_4B16A43 = 1;
  }
  v14 = sub_1BCAA2C(EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&userRank, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  *(_DWORD *)(v14 + 16) = userRank;
  viewDataList = this->fields.viewDataList;
  v20 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo,
                                        v16,
                                        v17,
                                        v18);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    0LL);
  if ( !viewDataList )
    goto LABEL_11;
  v21 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)viewDataList,
          (System_Predicate_T__o *)v20,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v21 )
  {
    rankSprite = this->fields.rankSprite;
    monitor = (System_String_o *)v21[1].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
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
    sub_1BCAA3C(titleBgSprite, v16);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(_4__this, method);
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(_4__this, method);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct EventInfoDetectiveRankControl_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDataList; // x20
  System_Predicate_object__o *_9__2; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  __int64 v33; // x3
  struct EventInfoDetectiveRankControl_o *v34; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_object__o *v36; // x20
  System_Predicate_object__o *_9__3; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *v44; // x23
  __int64 v45; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v47; // x22
  System_String_o *v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *_9__4; // x23
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  v4 = this;
  if ( (byte_4B16A4B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__, v13, v14);
    sub_1BCA7E0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__, v15, v16);
    sub_1BCA7E0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, v17, v18);
    sub_1BCA7E0(&StringLiteral_5749/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, v19, v20);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_1BCA7E0(&StringLiteral_5750/*"EVENT_PROGRESS_RANKUP_TITLE"*/, v21, v22);
    byte_4B16A4B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  viewDataList = (System_Collections_Generic_List_object__o *)_4__this->fields.viewDataList;
  _9__2 = (System_Predicate_object__o *)v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_object__o *)sub_1BCAA2C(
                                            System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo,
                                            method,
                                            v2,
                                            v3);
    System_Predicate_object____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    v4->fields.__9__2 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__2, (int64_t)_9__2, v26, v27, v28, v29, v30, v31);
  }
  if ( !viewDataList )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    viewDataList,
                                                                    (System_Predicate_T__o *)_9__2,
                                                                    (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v34 = v4->fields.__4__this;
  if ( !v34 )
    goto LABEL_19;
  callback = (Il2CppObject *)this->fields.callback;
  v36 = (System_Collections_Generic_List_object__o *)v34->fields.viewDataList;
  _9__3 = (System_Predicate_object__o *)v4->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Predicate_object__o *)sub_1BCAA2C(
                                            System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo,
                                            method,
                                            v32,
                                            v33);
    System_Predicate_object____ctor(
      _9__3,
      (Il2CppObject *)v4,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      0LL);
    v4->fields.__9__3 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__3, (int64_t)_9__3, v38, v39, v40, v41, v42, v43);
  }
  if ( !v36 )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    v36,
                                                                    (System_Predicate_T__o *)_9__3,
                                                                    (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v44 = (Il2CppObject *)this->fields.callback;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_5750/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0LL);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0LL);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_62415592(
                                                                    v48,
                                                                    callback,
                                                                    v44,
                                                                    0LL);
  _9__4 = v4->fields.__9__4;
  v52 = this;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v49, v50);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__,
      0LL);
    v4->fields.__9__4 = _9__4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__4, (int64_t)_9__4, v53, v54, v55, v56, v57, v58);
  }
  if ( !Instance )
LABEL_19:
    sub_1BCAA3C(this, method);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v47,
    (System_String_o *)v52,
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
    sub_1BCAA3C(this, n);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoUIProgressControl_o *_4__this; // x0
  int32_t afterRank; // w1

  if ( (byte_4B16A4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B16A4C = 1;
  }
  _4__this = (EventInfoUIProgressControl_o *)this->fields.__4__this;
  if ( !_4__this
    || (afterRank = this->fields.afterRank,
        LODWORD(_4__this[2].monitor) = afterRank,
        EventInfoUIProgressControl__SaveEventProgressValueSaveData(_4__this, afterRank, 0LL),
        (_4__this = (EventInfoUIProgressControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}