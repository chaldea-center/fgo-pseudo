void EventInfoAssistLevelCounterComponent___ctor(
        EventInfoAssistLevelCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoAssistLevelCounterComponent__Setup(
        EventInfoAssistLevelCounterComponent_o *this,
        EventInfoAssistLevelCounterComponent_AssistData_o *assistData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields.assistData = assistData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assistData,
    (int32_t)assistData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventInfoAssistLevelCounterComponent__UpdateDisp(this, v9);
}


void EventInfoAssistLevelCounterComponent__UpdateDisp(
        EventInfoAssistLevelCounterComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventInfoAssistLevelCounterComponent_AssistData_o *assistData; // x8
  AssistMaster_o *v6; // x20
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v8; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v9; // x8
  __int64 v10; // x1
  UnityEngine_Object_o *skillSprite; // x22
  __int64 v12; // x1
  UISprite_o *v13; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v19; // x8
  __int64 v20; // x1
  UISprite_o *v21; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v24; // x8
  __int64 v25; // x1
  UILabel_o *v26; // x22
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v30; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v31; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  __int64 v33; // x1
  int32_t v34; // w21
  UILabel_o *v35; // x19
  System_String_o *v36; // x20
  Il2CppObject *v37; // x0
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF
  int32_t lv; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_5938700 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_5715/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/);
    sub_21FFC50(&StringLiteral_5714/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/);
    byte_5938700 = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_AssistMaster___);
    assistData = this->fields.assistData;
    if ( !assistData )
      goto LABEL_46;
    v6 = (AssistMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_46;
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, assistData->fields.assistId, 0);
    if ( !CurrentLevelEntity )
      return;
    v8 = CurrentLevelEntity;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v9 = this->fields.assistData;
    if ( !v9 )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPosition_42876016((UnityEngine_GameObject_o *)Instance, v9->fields.objectPosition, 0);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0, 0) )
    {
      v13 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v8->fields.imageId;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &imageId);
      v17 = System_String__Format(skillSpriteNameFormat, v15, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
      AtlasManager__SetEventUI(v13, v17, 0);
    }
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.skillIconSprite;
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      v19 = this->fields.assistData;
      if ( !v19 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_42876016((UnityEngine_GameObject_o *)Instance, v19->fields.iconPosition, 0);
      v21 = this->fields.skillIconSprite;
      skillId = v8->fields.skillId;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
      AtlasManager__SetSkillIcon(v21, skillId, 0);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.levelLabel;
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      v24 = this->fields.assistData;
      if ( !v24 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_42876016(
        (UnityEngine_GameObject_o *)Instance,
        v24->fields.levelPosition,
        0);
      v26 = this->fields.levelLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5714/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0);
      lv = v8->fields.lv;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
      Instance = (DataManager_o *)System_String__Format(v27, v28, 0);
      if ( !v26 )
        goto LABEL_46;
      UILabel__set_text(v26, (System_String_o *)Instance, 0);
    }
    maxLevelLabel = (UnityEngine_Object_o *)this->fields.maxLevelLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(maxLevelLabel, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.maxLevelLabel;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        v30 = this->fields.assistData;
        if ( v30 )
        {
          GameObjectExtensions__SetLocalPosition_42876016(
            (UnityEngine_GameObject_o *)Instance,
            v30->fields.maxLevelPosition,
            0);
          v31 = this->fields.assistData;
          if ( v31 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v6, v31->fields.assistId, 0);
            v34 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v35 = this->fields.maxLevelLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
            v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5715/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0);
            v38 = v34;
            v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v38);
            Instance = (DataManager_o *)System_String__Format(v36, v37, 0);
            if ( v35 )
            {
              UILabel__set_text(v35, (System_String_o *)Instance, 0);
              return;
            }
          }
        }
      }
LABEL_46:
      sub_21FFECC(Instance, v4);
    }
  }
}


void EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}