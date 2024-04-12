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
  sub_B52920(
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
  int v28; // w21
  UILabel_o *v29; // x19
  System_String_o *v30; // x20
  Il2CppObject *v31; // x0
  int v32; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B1E28 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_5601/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/);
    sub_B52984(&StringLiteral_5600/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/);
    byte_42B1E28 = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_AssistMaster___);
    assistData = this->fields.assistData;
    if ( !assistData )
      goto LABEL_54;
    v6 = (AssistMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_54;
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(
                           (AssistMaster_o *)Instance,
                           assistData->fields.assistId,
                           0LL);
    if ( !CurrentLevelEntity )
      return;
    v8 = CurrentLevelEntity;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v9 = this->fields.assistData;
    if ( !v9 )
      goto LABEL_54;
    GameObjectExtensions__SetLocalPosition_32084952(
      (UnityEngine_GameObject_o *)Instance,
      v9->fields.objectPosition,
      0LL);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0LL, 0LL) )
    {
      v11 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v8->fields.imageId;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
      v14 = System_String__Format(skillSpriteNameFormat, v13, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v11, v14, 0LL);
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
      v16 = this->fields.assistData;
      if ( !v16 )
        goto LABEL_54;
      GameObjectExtensions__SetLocalPosition_32084952(
        (UnityEngine_GameObject_o *)Instance,
        v16->fields.iconPosition,
        0LL);
      v17 = this->fields.skillIconSprite;
      skillId = v8->fields.skillId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetSkillIcon(v17, skillId, 0LL);
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
      v20 = this->fields.assistData;
      if ( !v20 )
        goto LABEL_54;
      GameObjectExtensions__SetLocalPosition_32084952(
        (UnityEngine_GameObject_o *)Instance,
        v20->fields.levelPosition,
        0LL);
      v21 = this->fields.levelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5600/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0LL);
      lv = v8->fields.lv;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      Instance = (DataManager_o *)System_String__Format(v22, v23, 0LL);
      if ( !v21 )
        goto LABEL_54;
      UILabel__set_text(v21, (System_String_o *)Instance, 0LL);
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
        v25 = this->fields.assistData;
        if ( v25 )
        {
          GameObjectExtensions__SetLocalPosition_32084952(
            (UnityEngine_GameObject_o *)Instance,
            v25->fields.maxLevelPosition,
            0LL);
          v26 = this->fields.assistData;
          if ( v26 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v6, v26->fields.assistId, 0LL);
            v28 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v29 = this->fields.maxLevelLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5601/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0LL);
            v32 = v28;
            v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
            Instance = (DataManager_o *)System_String__Format(v30, v31, 0LL);
            if ( v29 )
            {
              UILabel__set_text(v29, (System_String_o *)Instance, 0LL);
              return;
            }
          }
        }
      }
LABEL_54:
      sub_B52A5C(Instance, v4);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}