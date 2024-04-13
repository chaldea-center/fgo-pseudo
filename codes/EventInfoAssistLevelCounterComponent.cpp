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
  sub_B5D560(
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
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  struct EventInfoAssistLevelCounterComponent_AssistData_o *assistData; // x8
  AssistMaster_o *v29; // x20
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v31; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v32; // x8
  UnityEngine_Object_o *skillSprite; // x22
  UISprite_o *v34; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v36; // x0
  System_String_o *v37; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v39; // x8
  UISprite_o *v40; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v43; // x8
  UILabel_o *v44; // x22
  System_String_o *v45; // x23
  Il2CppObject *v46; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v48; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v49; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  int v51; // w21
  UILabel_o *v52; // x19
  System_String_o *v53; // x20
  Il2CppObject *v54; // x0
  int v55; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9FB4 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_AssistMaster___, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5636/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5635/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, v23, v24, v25);
    byte_42E9FB4 = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AssistMaster___);
    assistData = this->fields.assistData;
    if ( !assistData )
      goto LABEL_54;
    v29 = (AssistMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_54;
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(
                           (AssistMaster_o *)Instance,
                           assistData->fields.assistId,
                           0LL);
    if ( !CurrentLevelEntity )
      return;
    v31 = CurrentLevelEntity;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v32 = this->fields.assistData;
    if ( !v32 )
      goto LABEL_54;
    GameObjectExtensions__SetLocalPosition_32430388(
      (UnityEngine_GameObject_o *)Instance,
      v32->fields.objectPosition,
      0LL);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0LL, 0LL) )
    {
      v34 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v31->fields.imageId;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
      v37 = System_String__Format(skillSpriteNameFormat, v36, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v34, v37, 0LL);
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
      v39 = this->fields.assistData;
      if ( !v39 )
        goto LABEL_54;
      GameObjectExtensions__SetLocalPosition_32430388(
        (UnityEngine_GameObject_o *)Instance,
        v39->fields.iconPosition,
        0LL);
      v40 = this->fields.skillIconSprite;
      skillId = v31->fields.skillId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetSkillIcon(v40, skillId, 0LL);
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
      v43 = this->fields.assistData;
      if ( !v43 )
        goto LABEL_54;
      GameObjectExtensions__SetLocalPosition_32430388(
        (UnityEngine_GameObject_o *)Instance,
        v43->fields.levelPosition,
        0LL);
      v44 = this->fields.levelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5635/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0LL);
      lv = v31->fields.lv;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      Instance = (DataManager_o *)System_String__Format(v45, v46, 0LL);
      if ( !v44 )
        goto LABEL_54;
      UILabel__set_text(v44, (System_String_o *)Instance, 0LL);
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
        v48 = this->fields.assistData;
        if ( v48 )
        {
          GameObjectExtensions__SetLocalPosition_32430388(
            (UnityEngine_GameObject_o *)Instance,
            v48->fields.maxLevelPosition,
            0LL);
          v49 = this->fields.assistData;
          if ( v49 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v29, v49->fields.assistId, 0LL);
            v51 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v52 = this->fields.maxLevelLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_5636/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0LL);
            v55 = v51;
            v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
            Instance = (DataManager_o *)System_String__Format(v53, v54, 0LL);
            if ( v52 )
            {
              UILabel__set_text(v52, (System_String_o *)Instance, 0LL);
              return;
            }
          }
        }
      }
LABEL_54:
      sub_B5D69C(Instance, v27);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}