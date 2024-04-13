void __fastcall EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E94C3 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoDetectiveRankControl_TypeInfo, v1, v2, v3);
    byte_42E94C3 = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void __fastcall EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E94C2 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUIProgressControl_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E94C2 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w20
  bool v9; // w0
  struct EventProgressValueEntity_o *v10; // x8

  if ( (byte_42E94C1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E94C1 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance )
    sub_B5D69C(0LL, method);
  if ( !TerminalSceneComponent__IsMapActive(mInstance, 0LL) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
  v9 = EventInfoUIProgressControl__CheckEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0LL);
  v10 = this->fields.currentEventProgressValueEntity;
  if ( v9 )
  {
    if ( v10 )
      return EventInfoUIProgressControl__GetEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0, 0LL);
    return 0;
  }
  else
  {
    if ( v10 )
      progressValue = v10->fields.progressValue;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x8
  __int64 v23; // x8
  AssetData_o *v24; // x0
  struct UnityEngine_GameObject_o *Object_30642600; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *titleBgSpriteName; // x20
  UISprite_o *titleBgSprite; // x21
  System_String_o *condtionBgSpriteName; // x20
  UISprite_o *condtionBgSprite; // x21
  System_String_o *missionCountBgSpriteName; // x20
  UISprite_o *missionCountBgSprite; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  System_String_o *missionStartedCountBgSpriteName; // x20
  UISprite_o *v40; // x21
  UnityEngine_Component_o *v41; // x8
  char v42; // w19
  EventInfoDetectiveRankControl_o *v43; // x0
  EventUiValueEntity_array *v44; // x1
  const MethodInfo *v45; // x2

  if ( (byte_42E94BB & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11404/*"RankUpEffect"*/, v15, v16, v17);
    byte_42E94BB = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v18, v19, v20);
    byte_42E4B1E = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v22 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v22 )
    goto LABEL_45;
  v23 = *(_QWORD *)(v22 + 256);
  if ( !v23 )
    goto LABEL_45;
  v24 = *(AssetData_o **)(v23 + 232);
  if ( v24 )
  {
    Object_30642600 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_30642600(
                                                           v24,
                                                           (System_String_o *)StringLiteral_11404/*"RankUpEffect"*/,
                                                           0LL);
    if ( Object_30642600 && Object_30642600->klass != UnityEngine_GameObject_TypeInfo )
    {
      v43 = (EventInfoDetectiveRankControl_o *)sub_B5D990(Object_30642600);
      EventInfoDetectiveRankControl__Setup(v43, v44, v45);
      return;
    }
    this->fields.effectBasePrefab = Object_30642600;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.effectBasePrefab,
      (System_Int32_array **)Object_30642600,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
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
    v40 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v40, missionStartedCountBgSpriteName, 0LL);
    v41 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v41 )
    {
      v42 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(v41, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v42 & 1, 0LL);
        return;
      }
    }
LABEL_45:
    sub_B5D69C(gameObject, v18);
  }
}


void __fastcall EventInfoDetectiveRankControl__PlayAnim(
        EventInfoDetectiveRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x19
  UnityEngine_UI_Dropdown_DropdownItem_o *v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  struct UnityEngine_GameObject_o *v43; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v45; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Action_o *v48; // x21
  System_Action_o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42E94C0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, type, (_DWORD)callback, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__, v16, v17, v18);
    sub_B5D5C4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__, v19, v20, v21);
    sub_B5D5C4(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo, v22, v23, v24);
    byte_42E94C0 = 1;
  }
  v25 = sub_B5D694(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
  EventInfoDetectiveRankControl___c__DisplayClass26_0___ctor(
    (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_20;
  *(_QWORD *)(v25 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 32) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
  if ( type == 1 && this->fields.currentEventProgressValueEntity )
  {
    effectBasePrefab = (UnityEngine_Object_o *)this->fields.effectBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v26 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(effectBasePrefab, 0LL, 0LL);
    if ( ((unsigned __int8)v26 & 1) == 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_20;
      progressValue = currentEventProgressValueEntity->fields.progressValue;
      *(_DWORD *)(v25 + 24) = progressValue;
      if ( this->fields.userRank < progressValue )
      {
        v43 = this->fields.effectBasePrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v26 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)v43,
                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v45 = (UnityEngine_GameObject_o *)v26;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL);
          GameObjectExtensions__SafeSetParent_32436524(v45, gameObject, 0LL);
          if ( v45 )
          {
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v45,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v48,
              (Il2CppObject *)v25,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0LL);
            if ( Component_srcLineSprite )
            {
              CommonEffectActionComponent__SetEventAction(
                (CommonEffectActionComponent_o *)Component_srcLineSprite,
                0,
                v48,
                0LL);
              v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                v49,
                (Il2CppObject *)v25,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0LL);
              *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v49;
              sub_B5D560(
                (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
                (System_Int32_array **)v49,
                v50,
                v51,
                v52,
                v53,
                v54,
                v55);
              return;
            }
          }
        }
LABEL_20:
        sub_B5D69C(v26, v27);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v25 + 32), 0LL);
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
  __int64 v3; // x3
  EventInfoDetectiveRankControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventProgressValueEntity_o *nextEventProgressValueEntity; // x8
  UILabel_o *conditionTextLabel; // x19
  System_String_o *condMessage; // x1

  v4 = this;
  if ( (byte_42E94BD & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, userRank, (_DWORD)method, v3);
    this = (EventInfoDetectiveRankControl_o *)sub_B5D5C4(&StringLiteral_5748/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, v5, v6, v7);
    byte_42E94BD = 1;
  }
  nextEventProgressValueEntity = v4->fields.nextEventProgressValueEntity;
  conditionTextLabel = v4->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_10:
    sub_B5D69C(this, condMessage);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5748/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v27; // x21
  EventInfoDetectiveRankControl_c *v28; // x8
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  bool v31; // cc
  System_String_o *v32; // x20
  System_String_o *v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E94BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&EventInfoDetectiveRankControl_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_3339/*"COMMON_COUNT_OPERATOR_PLUS"*/, v20, v21, v22);
    byte_42E94BE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
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
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v28 = EventInfoDetectiveRankControl_TypeInfo;
  if ( (BYTE3(EventInfoDetectiveRankControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo);
    v28 = EventInfoDetectiveRankControl_TypeInfo;
  }
  v34 = UnityEngine_Mathf__Min_41629336(
          UserEventRandomMissionTotalClearCount,
          v28->static_fields->MISSION_CLEAR_DISP_COUNT_MAX,
          0LL);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v30 = System_String__Format(v27, v29, 0LL);
  v31 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v32 = v30;
  if ( !v31 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3339/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
    v32 = System_String__Concat_44577788(v32, v33, 0LL);
  }
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B5D69C(Master_WarQuestSelectionMaster, v24);
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v32, 0LL);
}


void __fastcall EventInfoDetectiveRankControl__SetupMissionStartedCount(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  __int64 v30; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *missionStartedCountTextLabel; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  System_Collections_Generic_List_UserEventRandomMissionEntity__o *UserEventRandomMissionProgressList; // x20
  struct EventUiEntity_o *v35; // x8
  int32_t RandomMissionMaxNum; // w8
  UILabel_o *v37; // x19
  int v38; // w22
  System_String_o *v39; // x21
  Il2CppObject *v40; // x20
  Il2CppObject *v41; // x0
  int v42; // [xsp+8h] [xbp-28h] BYREF
  int32_t size; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E94BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v26, v27, v28);
    byte_42E94BF = 1;
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
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0LL);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
            v35 = this->fields.eventUiEntity;
            if ( v35 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                                          v35->fields.eventId,
                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum(
                                          (EventDetailEntity_o *)gameObject,
                                          0LL);
                  v37 = this->fields.missionStartedCountTextLabel;
                  v38 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12617/*"SUM_INFO"*/,
                                                            0LL);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v39 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size);
                    v42 = v38;
                    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_44573324(v39, v40, v41, 0LL);
                    if ( v37 )
                    {
                      UILabel__set_text(v37, (System_String_o *)gameObject, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_32:
        sub_B5D69C(gameObject, v30);
      }
    }
  }
}


void __fastcall EventInfoDetectiveRankControl__SetupTitleBg(
        EventInfoDetectiveRankControl_o *this,
        int32_t userRank,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  EventInfoDetectiveRankControl___c__DisplayClass21_0_o *v21; // x21
  struct UISprite_o *titleBgSprite; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *viewDataList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x22
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *renderer; // x21

  if ( (byte_42E94BC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, userRank, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__, v15, v16, v17);
    sub_B5D5C4(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo, v18, v19, v20);
    byte_42E94BC = 1;
  }
  v21 = (EventInfoDetectiveRankControl___c__DisplayClass21_0_o *)sub_B5D694(EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
  EventInfoDetectiveRankControl___c__DisplayClass21_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_12;
  v21->fields.userRank = userRank;
  viewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.viewDataList;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
  if ( !viewDataList )
    goto LABEL_12;
  v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          viewDataList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v26 )
  {
    rankSprite = this->fields.rankSprite;
    renderer = (System_String_o *)v26->fields.renderer;
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
    sub_B5D69C(titleBgSprite, v23);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(_4__this, method);
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(_4__this, 0LL);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *fields; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *monitor; // x22
  Il2CppClass *v38; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v40; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v41; // x23
  Il2CppObject *v42; // x23
  CommonUI_o *Instance; // x20
  System_String_o *v44; // x22
  System_String_o *v45; // x0
  System_Action_o *v46; // x23
  System_String_o *v47; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E6533 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__, v20, v21, v22);
    sub_B5D5C4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__, v23, v24, v25);
    sub_B5D5C4(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_5749/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, v29, v30, v31);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_B5D5C4(&StringLiteral_5750/*"EVENT_PROGRESS_RANKUP_TITLE"*/, v32, v33, v34);
    byte_42E6533 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_20;
  fields = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)klass->_1.fields;
  monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v4[2].monitor;
  if ( !monitor )
  {
    monitor = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      monitor,
      v4,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    v4[2].monitor = monitor;
    sub_B5D560(&v4[2].monitor);
  }
  if ( !fields )
    goto LABEL_20;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                    fields,
                                                                    (System_Predicate_T__o *)monitor,
                                                                    (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_20;
  v38 = v4[1].klass;
  if ( !v38 )
    goto LABEL_20;
  callback = (Il2CppObject *)this->fields.callback;
  v40 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v38->_1.fields;
  v41 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v4[3].klass;
  if ( !v41 )
  {
    v41 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v41,
      v4,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventInfoDetectiveRankControl_ViewData___ctor__);
    v4[3].klass = (Il2CppClass *)v41;
    sub_B5D560(&v4[3]);
  }
  if ( !v40 )
    goto LABEL_20;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                    v40,
                                                                    (System_Predicate_T__o *)v41,
                                                                    (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_20;
  v42 = (Il2CppObject *)this->fields.callback;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5750/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0LL);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5749/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0LL);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_44573324(
                                                                    v45,
                                                                    callback,
                                                                    v42,
                                                                    0LL);
  v46 = (System_Action_o *)v4[3].monitor;
  v47 = (System_String_o *)this;
  if ( !v46 )
  {
    v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v46, v4, Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__, 0LL);
    v4[3].monitor = v46;
    sub_B5D560(&v4[3].monitor);
  }
  if ( !Instance )
LABEL_20:
    sub_B5D69C(this, method);
  CommonUI__OpenNotificationDialog(Instance, v44, v47, v46, -1, 0, 30, 0, 0, 28, 1, 0, 0LL, 0LL);
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0LL )
    sub_B5D69C(this, n);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B5D69C(this, 0LL);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v4; // x19
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  v4 = this;
  if ( (byte_42E6534 & 1) == 0 )
  {
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_B5D5C4(
                                                                      &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                      (_DWORD)method,
                                                                      v2,
                                                                      v3);
    byte_42E6534 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.userRank = v4->fields.afterRank,
        (this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)v4->fields.__4__this) == 0LL)
    || (EventInfoUIProgressControl__SaveEventProgressValueSaveData(
          (EventInfoUIProgressControl_o *)this,
          (int32_t)this[3].fields.callback,
          0LL),
        (this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}