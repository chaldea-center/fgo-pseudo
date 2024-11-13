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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.assistData = assistData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.assistData,
    (int64_t)assistData,
    (int64_t)method,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  struct EventInfoAssistLevelCounterComponent_AssistData_o *assistData; // x8
  AssistMaster_o *v21; // x20
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v23; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v24; // x8
  __int64 v25; // x1
  UnityEngine_Object_o *skillSprite; // x22
  __int64 v27; // x1
  UISprite_o *v28; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v34; // x8
  __int64 v35; // x1
  UISprite_o *v36; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v39; // x8
  __int64 v40; // x1
  UILabel_o *v41; // x22
  System_String_o *v42; // x23
  Il2CppObject *v43; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v45; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v46; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  __int64 v48; // x1
  int v49; // w21
  UILabel_o *v50; // x19
  System_String_o *v51; // x20
  Il2CppObject *v52; // x0
  int v53; // [xsp+Ch] [xbp-44h] BYREF
  int32_t lv; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B169B5 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_AssistMaster___, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_5628/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5627/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, v16, v17);
    byte_4B169B5 = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_AssistMaster___);
    assistData = this->fields.assistData;
    if ( !assistData )
      goto LABEL_46;
    v21 = (AssistMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_46;
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(
                           (AssistMaster_o *)Instance,
                           assistData->fields.assistId,
                           0LL);
    if ( !CurrentLevelEntity )
      return;
    v23 = CurrentLevelEntity;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v24 = this->fields.assistData;
    if ( !v24 )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPosition_34330940(
      (UnityEngine_GameObject_o *)Instance,
      v24->fields.objectPosition,
      0LL);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0LL, 0LL) )
    {
      v28 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v23->fields.imageId;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
      v32 = System_String__Format(skillSpriteNameFormat, v30, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
      AtlasManager__SetEventUI(v28, v32, 0LL);
    }
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.skillIconSprite;
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v34 = this->fields.assistData;
      if ( !v34 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_34330940(
        (UnityEngine_GameObject_o *)Instance,
        v34->fields.iconPosition,
        0LL);
      v36 = this->fields.skillIconSprite;
      skillId = v23->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35);
      AtlasManager__SetSkillIcon(v36, skillId, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.levelLabel;
      if ( !Instance )
        goto LABEL_46;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v39 = this->fields.assistData;
      if ( !v39 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_34330940(
        (UnityEngine_GameObject_o *)Instance,
        v39->fields.levelPosition,
        0LL);
      v41 = this->fields.levelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_5627/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0LL);
      lv = v23->fields.lv;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      Instance = (DataManager_o *)System_String__Format(v42, v43, 0LL);
      if ( !v41 )
        goto LABEL_46;
      UILabel__set_text(v41, (System_String_o *)Instance, 0LL);
    }
    maxLevelLabel = (UnityEngine_Object_o *)this->fields.maxLevelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(maxLevelLabel, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.maxLevelLabel;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        v45 = this->fields.assistData;
        if ( v45 )
        {
          GameObjectExtensions__SetLocalPosition_34330940(
            (UnityEngine_GameObject_o *)Instance,
            v45->fields.maxLevelPosition,
            0LL);
          v46 = this->fields.assistData;
          if ( v46 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v21, v46->fields.assistId, 0LL);
            v49 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v50 = this->fields.maxLevelLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5628/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0LL);
            v53 = v49;
            v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
            Instance = (DataManager_o *)System_String__Format(v51, v52, 0LL);
            if ( v50 )
            {
              UILabel__set_text(v50, (System_String_o *)Instance, 0LL);
              return;
            }
          }
        }
      }
LABEL_46:
      sub_1BCAA3C(Instance, v19);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}