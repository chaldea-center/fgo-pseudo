void __fastcall EventInfoAssistLevelCounterComponent___ctor(
        EventInfoAssistLevelCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoAssistLevelCounterComponent__Setup(
        EventInfoAssistLevelCounterComponent_o *this,
        EventInfoAssistLevelCounterComponent_AssistData_o *assistData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.assistData = assistData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assistData,
    (System_Int32_array **)assistData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventInfoAssistLevelCounterComponent__UpdateDisp(this, v9);
}


void __fastcall EventInfoAssistLevelCounterComponent__UpdateDisp(
        EventInfoAssistLevelCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct EventInfoAssistLevelCounterComponent_AssistData_o *assistData; // x8
  AssistMaster_o *v13; // x20
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v15; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v16; // x8
  UnityEngine_Object_o *skillSprite; // x22
  UISprite_o *v18; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v23; // x8
  UISprite_o *v24; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v27; // x8
  UILabel_o *v28; // x22
  System_String_o *v29; // x23
  Il2CppObject *v30; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v32; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v33; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  int v35; // w21
  UILabel_o *v36; // x19
  System_String_o *v37; // x20
  Il2CppObject *v38; // x0
  int v39; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418911B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_AssistMaster___, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_5559/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, v8);
    sub_B2C35C(&StringLiteral_5558/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, v9);
    byte_418911B = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AssistMaster___);
    assistData = this->fields.assistData;
    if ( !assistData )
      goto LABEL_54;
    v13 = (AssistMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_54;
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(
                           (AssistMaster_o *)Instance,
                           assistData->fields.assistId,
                           0LL);
    if ( !CurrentLevelEntity )
      return;
    v15 = CurrentLevelEntity;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16 = this->fields.assistData;
    if ( !v16 )
      goto LABEL_54;
    GameObjectExtensions__SetLocalPosition_31325816(
      (UnityEngine_GameObject_o *)Instance,
      v16->fields.objectPosition,
      0LL);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0LL, 0LL) )
    {
      v18 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v15->fields.imageId;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
      v21 = System_String__Format(skillSpriteNameFormat, v20, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v18, v21, 0LL);
    }
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.skillIconSprite;
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v23 = this->fields.assistData;
      if ( !v23 )
        goto LABEL_54;
      GameObjectExtensions__SetLocalPosition_31325816(
        (UnityEngine_GameObject_o *)Instance,
        v23->fields.iconPosition,
        0LL);
      v24 = this->fields.skillIconSprite;
      skillId = v15->fields.skillId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetSkillIcon(v24, skillId, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.levelLabel;
      if ( !Instance )
        goto LABEL_54;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v27 = this->fields.assistData;
      if ( !v27 )
        goto LABEL_54;
      GameObjectExtensions__SetLocalPosition_31325816(
        (UnityEngine_GameObject_o *)Instance,
        v27->fields.levelPosition,
        0LL);
      v28 = this->fields.levelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5558/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0LL);
      lv = v15->fields.lv;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      Instance = (DataManager_o *)System_String__Format(v29, v30, 0LL);
      if ( !v28 )
        goto LABEL_54;
      UILabel__set_text(v28, (System_String_o *)Instance, 0LL);
    }
    maxLevelLabel = (UnityEngine_Object_o *)this->fields.maxLevelLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(maxLevelLabel, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.maxLevelLabel;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        v32 = this->fields.assistData;
        if ( v32 )
        {
          GameObjectExtensions__SetLocalPosition_31325816(
            (UnityEngine_GameObject_o *)Instance,
            v32->fields.maxLevelPosition,
            0LL);
          v33 = this->fields.assistData;
          if ( v33 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v13, v33->fields.assistId, 0LL);
            v35 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v36 = this->fields.maxLevelLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5559/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0LL);
            v39 = v35;
            v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
            Instance = (DataManager_o *)System_String__Format(v37, v38, 0LL);
            if ( v36 )
            {
              UILabel__set_text(v36, (System_String_o *)Instance, 0LL);
              return;
            }
          }
        }
      }
LABEL_54:
      sub_B2C434(Instance, v11);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}