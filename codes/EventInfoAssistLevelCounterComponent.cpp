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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.assistData = assistData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.assistData,
    (int32_t)assistData,
    (int32_t)method,
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
  UnityEngine_Object_o *skillSprite; // x22
  UISprite_o *v11; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v16; // x8
  UISprite_o *v17; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v20; // x8
  UILabel_o *v21; // x22
  System_String_o *v22; // x23
  Il2CppObject *v23; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v25; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v26; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  int32_t v28; // w21
  UILabel_o *v29; // x19
  System_String_o *v30; // x20
  Il2CppObject *v31; // x0
  int32_t v32; // [xsp+Ch] [xbp-44h] BYREF
  int32_t lv; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CC7790 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_5520/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/);
    sub_1C713B0(&StringLiteral_5519/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/);
    byte_4CC7790 = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_AssistMaster___);
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
    GameObjectExtensions__SetLocalPosition_36389872((UnityEngine_GameObject_o *)Instance, v9->fields.objectPosition, 0);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0, 0) )
    {
      v11 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v8->fields.imageId;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
      v14 = System_String__Format(skillSpriteNameFormat, v13, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v11, v14, 0);
    }
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.skillIconSprite;
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      v16 = this->fields.assistData;
      if ( !v16 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_36389872((UnityEngine_GameObject_o *)Instance, v16->fields.iconPosition, 0);
      v17 = this->fields.skillIconSprite;
      skillId = v8->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v17, skillId, 0);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.levelLabel;
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      v20 = this->fields.assistData;
      if ( !v20 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_36389872(
        (UnityEngine_GameObject_o *)Instance,
        v20->fields.levelPosition,
        0);
      v21 = this->fields.levelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5519/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0);
      lv = v8->fields.lv;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      Instance = (DataManager_o *)System_String__Format(v22, v23, 0);
      if ( !v21 )
        goto LABEL_46;
      UILabel__set_text(v21, (System_String_o *)Instance, 0);
    }
    maxLevelLabel = (UnityEngine_Object_o *)this->fields.maxLevelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(maxLevelLabel, 0, 0) )
    {
      Instance = (DataManager_o *)this->fields.maxLevelLabel;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        v25 = this->fields.assistData;
        if ( v25 )
        {
          GameObjectExtensions__SetLocalPosition_36389872(
            (UnityEngine_GameObject_o *)Instance,
            v25->fields.maxLevelPosition,
            0);
          v26 = this->fields.assistData;
          if ( v26 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v6, v26->fields.assistId, 0);
            v28 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v29 = this->fields.maxLevelLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5520/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0);
            v32 = v28;
            v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
            Instance = (DataManager_o *)System_String__Format(v30, v31, 0);
            if ( v29 )
            {
              UILabel__set_text(v29, (System_String_o *)Instance, 0);
              return;
            }
          }
        }
      }
LABEL_46:
      sub_1C71608(Instance, v4);
    }
  }
}


void EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}