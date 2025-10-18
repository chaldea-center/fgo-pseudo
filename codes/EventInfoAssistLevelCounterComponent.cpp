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
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.assistData = assistData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assistData, (int32_t)assistData, (int32_t)method, v3);
  EventInfoAssistLevelCounterComponent__UpdateDisp(this, v5);
}


void EventInfoAssistLevelCounterComponent__UpdateDisp(
        EventInfoAssistLevelCounterComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct EventInfoAssistLevelCounterComponent_AssistData_o *assistData; // x8
  AssistMaster_o *v5; // x20
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v7; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v8; // x8
  UnityEngine_Object_o *skillSprite; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  UISprite_o *v16; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v18; // x0
  System_String_o *v19; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v21; // x8
  UISprite_o *v22; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v25; // x8
  UILabel_o *v26; // x22
  System_String_o *v27; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v36; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v37; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  int32_t v39; // w21
  UILabel_o *v40; // x19
  System_String_o *v41; // x20
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  Il2CppObject *v48; // x0
  int32_t v49; // [xsp+Ch] [xbp-44h] BYREF
  int32_t lv; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C4334A & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_5527/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/);
    sub_1C37058(&StringLiteral_5526/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/);
    byte_4C4334A = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_AssistMaster___);
    assistData = this->fields.assistData;
    if ( !assistData )
      goto LABEL_46;
    v5 = (AssistMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_46;
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, assistData->fields.assistId, 0);
    if ( !CurrentLevelEntity )
      return;
    v7 = CurrentLevelEntity;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v8 = this->fields.assistData;
    if ( !v8 )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPosition_36132288((UnityEngine_GameObject_o *)Instance, v8->fields.objectPosition, 0);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0, 0) )
    {
      v16 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v7->fields.imageId;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v10, v11, v12, v13, v14, v15);
      v19 = System_String__Format(skillSpriteNameFormat, v18, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v16, v19, 0);
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
      v21 = this->fields.assistData;
      if ( !v21 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_36132288((UnityEngine_GameObject_o *)Instance, v21->fields.iconPosition, 0);
      v22 = this->fields.skillIconSprite;
      skillId = v7->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v22, skillId, 0);
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
      v25 = this->fields.assistData;
      if ( !v25 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_36132288(
        (UnityEngine_GameObject_o *)Instance,
        v25->fields.levelPosition,
        0);
      v26 = this->fields.levelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5526/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0);
      lv = v7->fields.lv;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v28, v29, v30, v31, v32, v33);
      Instance = (DataManager_o *)System_String__Format(v27, v34, 0);
      if ( !v26 )
        goto LABEL_46;
      UILabel__set_text(v26, (System_String_o *)Instance, 0);
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
        v36 = this->fields.assistData;
        if ( v36 )
        {
          GameObjectExtensions__SetLocalPosition_36132288(
            (UnityEngine_GameObject_o *)Instance,
            v36->fields.maxLevelPosition,
            0);
          v37 = this->fields.assistData;
          if ( v37 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v5, v37->fields.assistId, 0);
            v39 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v40 = this->fields.maxLevelLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5527/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0);
            v49 = v39;
            v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v42, v43, v44, v45, v46, v47);
            Instance = (DataManager_o *)System_String__Format(v41, v48, 0);
            if ( v40 )
            {
              UILabel__set_text(v40, (System_String_o *)Instance, 0);
              return;
            }
          }
        }
      }
LABEL_46:
      sub_1C372B4(Instance);
    }
  }
}


void EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}