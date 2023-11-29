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
  sub_B16F98(
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
  WebViewManager_o *Instance; // x0
  AssistMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventInfoAssistLevelCounterComponent_AssistData_o *assistData; // x8
  AssistMaster_o *v13; // x20
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v17; // x8
  UnityEngine_Object_o *skillSprite; // x22
  UISprite_o *v19; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v21; // x0
  System_String_o *v22; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v26; // x8
  UISprite_o *v27; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v32; // x8
  UILabel_o *v33; // x22
  System_String_o *v34; // x23
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v40; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v41; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  int v43; // w21
  UILabel_o *v44; // x19
  System_String_o *v45; // x20
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  int v48; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB6DF & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_AssistMaster___, v3);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_5544, v8);
    sub_B16FFC(&StringLiteral_5543, v9);
    byte_40FB6DF = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    MasterData_WarQuestSelectionMaster = (AssistMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AssistMaster___);
    assistData = this->fields.assistData;
    if ( !assistData )
      goto LABEL_54;
    v13 = MasterData_WarQuestSelectionMaster;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_54;
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(
                           MasterData_WarQuestSelectionMaster,
                           assistData->fields.assistId,
                           0LL);
    if ( !CurrentLevelEntity )
      return;
    v15 = CurrentLevelEntity;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v17 = this->fields.assistData;
    if ( !v17 )
      goto LABEL_54;
    GameObjectExtensions__SetLocalPosition_27419860(gameObject, v17->fields.objectPosition, 0LL);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0LL, 0LL) )
    {
      v19 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v15->fields.imageId;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
      v22 = System_String__Format(skillSpriteNameFormat, v21, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(v19, v22, 0LL);
    }
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
    {
      v24 = (UnityEngine_Component_o *)this->fields.skillIconSprite;
      if ( !v24 )
        goto LABEL_54;
      v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
      v26 = this->fields.assistData;
      if ( !v26 )
        goto LABEL_54;
      GameObjectExtensions__SetLocalPosition_27419860(v25, v26->fields.iconPosition, 0LL);
      v27 = this->fields.skillIconSprite;
      skillId = v15->fields.skillId;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetSkillIcon(v27, skillId, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      v30 = (UnityEngine_Component_o *)this->fields.levelLabel;
      if ( !v30 )
        goto LABEL_54;
      v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
      v32 = this->fields.assistData;
      if ( !v32 )
        goto LABEL_54;
      GameObjectExtensions__SetLocalPosition_27419860(v31, v32->fields.levelPosition, 0LL);
      v33 = this->fields.levelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5543, 0LL);
      lv = v15->fields.lv;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v36 = System_String__Format(v34, v35, 0LL);
      if ( !v33 )
        goto LABEL_54;
      UILabel__set_text(v33, v36, 0LL);
    }
    maxLevelLabel = (UnityEngine_Object_o *)this->fields.maxLevelLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(maxLevelLabel, 0LL, 0LL) )
    {
      v38 = (UnityEngine_Component_o *)this->fields.maxLevelLabel;
      if ( v38 )
      {
        v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
        v40 = this->fields.assistData;
        if ( v40 )
        {
          GameObjectExtensions__SetLocalPosition_27419860(v39, v40->fields.maxLevelPosition, 0LL);
          v41 = this->fields.assistData;
          if ( v41 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v13, v41->fields.assistId, 0LL);
            v43 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v44 = this->fields.maxLevelLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5544, 0LL);
            v48 = v43;
            v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
            v47 = System_String__Format(v45, v46, 0LL);
            if ( v44 )
            {
              UILabel__set_text(v44, v47, 0LL);
              return;
            }
          }
        }
      }
LABEL_54:
      sub_B170D4();
    }
  }
}


void __fastcall EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}