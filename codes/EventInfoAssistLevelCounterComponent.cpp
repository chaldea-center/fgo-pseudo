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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.assistData, (int32_t)assistData, (int32_t)method, v3);
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
  UISprite_o *v14; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v16; // x0
  System_String_o *v17; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v19; // x8
  UISprite_o *v20; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v23; // x8
  UILabel_o *v24; // x22
  System_String_o *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v31; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v32; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  int32_t v34; // w21
  UILabel_o *v35; // x19
  System_String_o *v36; // x20
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  int32_t v41; // [xsp+Ch] [xbp-44h] BYREF
  int32_t lv; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C276C7 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_5518/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/);
    sub_1C2D490(&StringLiteral_5517/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/);
    byte_4C276C7 = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_AssistMaster___);
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
    GameObjectExtensions__SetLocalPosition_35918392((UnityEngine_GameObject_o *)Instance, v9->fields.objectPosition, 0);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0, 0) )
    {
      v14 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v8->fields.imageId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v11, v12, v13);
      v17 = System_String__Format(skillSpriteNameFormat, v16, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v14, v17, 0);
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
      v19 = this->fields.assistData;
      if ( !v19 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_35918392((UnityEngine_GameObject_o *)Instance, v19->fields.iconPosition, 0);
      v20 = this->fields.skillIconSprite;
      skillId = v8->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v20, skillId, 0);
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
      v23 = this->fields.assistData;
      if ( !v23 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_35918392(
        (UnityEngine_GameObject_o *)Instance,
        v23->fields.levelPosition,
        0);
      v24 = this->fields.levelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5517/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0);
      lv = v8->fields.lv;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v26, v27, v28);
      Instance = (DataManager_o *)System_String__Format(v25, v29, 0);
      if ( !v24 )
        goto LABEL_46;
      UILabel__set_text(v24, (System_String_o *)Instance, 0);
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
        v31 = this->fields.assistData;
        if ( v31 )
        {
          GameObjectExtensions__SetLocalPosition_35918392(
            (UnityEngine_GameObject_o *)Instance,
            v31->fields.maxLevelPosition,
            0);
          v32 = this->fields.assistData;
          if ( v32 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v6, v32->fields.assistId, 0);
            v34 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v35 = this->fields.maxLevelLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5518/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0);
            v41 = v34;
            v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v37, v38, v39);
            Instance = (DataManager_o *)System_String__Format(v36, v40, 0);
            if ( v35 )
            {
              UILabel__set_text(v35, (System_String_o *)Instance, 0);
              return;
            }
          }
        }
      }
LABEL_46:
      sub_1C2D6EC(Instance, v4);
    }
  }
}


void EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}