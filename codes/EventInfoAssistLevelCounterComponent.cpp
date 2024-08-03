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
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.assistData = assistData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assistData, (int32_t)assistData, (int32_t)method, v3);
  EventInfoAssistLevelCounterComponent__UpdateDisp(this, v5);
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
  struct EventInfoAssistLevelCounterComponent_AssistData_o *assistData; // x8
  AssistMaster_o *v12; // x20
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v14; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v15; // x8
  UnityEngine_Object_o *skillSprite; // x22
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
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v31; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v32; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  int v34; // w21
  UILabel_o *v35; // x19
  System_String_o *v36; // x20
  Il2CppObject *v37; // x0
  int v38; // [xsp+Ch] [xbp-44h] BYREF
  int32_t lv; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FCF1F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_AssistMaster___, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_5525/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, v8);
    sub_1B640C8(&StringLiteral_5524/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, v9);
    byte_49FCF1F = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_AssistMaster___);
    assistData = this->fields.assistData;
    if ( !assistData )
      goto LABEL_46;
    v12 = (AssistMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_46;
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(
                           (AssistMaster_o *)Instance,
                           assistData->fields.assistId,
                           0LL);
    if ( !CurrentLevelEntity )
      return;
    v14 = CurrentLevelEntity;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v15 = this->fields.assistData;
    if ( !v15 )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPosition_33375356(
      (UnityEngine_GameObject_o *)Instance,
      v15->fields.objectPosition,
      0LL);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0LL, 0LL) )
    {
      v17 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v14->fields.imageId;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
      v20 = System_String__Format(skillSpriteNameFormat, v19, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v17, v20, 0LL);
    }
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.skillIconSprite;
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v22 = this->fields.assistData;
      if ( !v22 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_33375356(
        (UnityEngine_GameObject_o *)Instance,
        v22->fields.iconPosition,
        0LL);
      v23 = this->fields.skillIconSprite;
      skillId = v14->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v23, skillId, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.levelLabel;
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v26 = this->fields.assistData;
      if ( !v26 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_33375356(
        (UnityEngine_GameObject_o *)Instance,
        v26->fields.levelPosition,
        0LL);
      v27 = this->fields.levelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5524/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0LL);
      lv = v14->fields.lv;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      Instance = (DataManager_o *)System_String__Format(v28, v29, 0LL);
      if ( !v27 )
        goto LABEL_46;
      UILabel__set_text(v27, (System_String_o *)Instance, 0LL);
    }
    maxLevelLabel = (UnityEngine_Object_o *)this->fields.maxLevelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(maxLevelLabel, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.maxLevelLabel;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        v31 = this->fields.assistData;
        if ( v31 )
        {
          GameObjectExtensions__SetLocalPosition_33375356(
            (UnityEngine_GameObject_o *)Instance,
            v31->fields.maxLevelPosition,
            0LL);
          v32 = this->fields.assistData;
          if ( v32 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v12, v32->fields.assistId, 0LL);
            v34 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v35 = this->fields.maxLevelLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5525/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0LL);
            v38 = v34;
            v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
            Instance = (DataManager_o *)System_String__Format(v36, v37, 0LL);
            if ( v35 )
            {
              UILabel__set_text(v35, (System_String_o *)Instance, 0LL);
              return;
            }
          }
        }
      }
LABEL_46:
      sub_1B64324(Instance);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}