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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assistData, (int32_t)assistData, (int32_t)method, v3);
  EventInfoAssistLevelCounterComponent__UpdateDisp(this, v5);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  UISprite_o *v17; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v22; // x8
  UISprite_o *v23; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v26; // x8
  UILabel_o *v27; // x22
  System_String_o *v28; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v37; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v38; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  int32_t v40; // w21
  UILabel_o *v41; // x19
  System_String_o *v42; // x20
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  Il2CppObject *v49; // x0
  int32_t v50; // [xsp+Ch] [xbp-44h] BYREF
  int32_t lv; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C570FF & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_5527/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/);
    sub_1C3E564(&StringLiteral_5526/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/);
    byte_4C570FF = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_AssistMaster___);
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
    GameObjectExtensions__SetLocalPosition_36176188((UnityEngine_GameObject_o *)Instance, v9->fields.objectPosition, 0);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0, 0) )
    {
      v17 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v8->fields.imageId;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v11, v12, v13, v14, v15, v16);
      v20 = System_String__Format(skillSpriteNameFormat, v19, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v17, v20, 0);
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
      v22 = this->fields.assistData;
      if ( !v22 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_36176188((UnityEngine_GameObject_o *)Instance, v22->fields.iconPosition, 0);
      v23 = this->fields.skillIconSprite;
      skillId = v8->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v23, skillId, 0);
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
      v26 = this->fields.assistData;
      if ( !v26 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_36176188(
        (UnityEngine_GameObject_o *)Instance,
        v26->fields.levelPosition,
        0);
      v27 = this->fields.levelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5526/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0);
      lv = v8->fields.lv;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v29, v30, v31, v32, v33, v34);
      Instance = (DataManager_o *)System_String__Format(v28, v35, 0);
      if ( !v27 )
        goto LABEL_46;
      UILabel__set_text(v27, (System_String_o *)Instance, 0);
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
        v37 = this->fields.assistData;
        if ( v37 )
        {
          GameObjectExtensions__SetLocalPosition_36176188(
            (UnityEngine_GameObject_o *)Instance,
            v37->fields.maxLevelPosition,
            0);
          v38 = this->fields.assistData;
          if ( v38 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v6, v38->fields.assistId, 0);
            v40 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v41 = this->fields.maxLevelLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v42 = LocalizationManager__Get((System_String_o *)StringLiteral_5527/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0);
            v50 = v40;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v43, v44, v45, v46, v47, v48);
            Instance = (DataManager_o *)System_String__Format(v42, v49, 0);
            if ( v41 )
            {
              UILabel__set_text(v41, (System_String_o *)Instance, 0);
              return;
            }
          }
        }
      }
LABEL_46:
      sub_1C3E7C0(Instance, v4);
    }
  }
}


void EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}