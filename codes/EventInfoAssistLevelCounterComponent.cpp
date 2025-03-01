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
  sub_1C2E0D0(
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
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UISprite_o *v21; // x22
  System_String_o *skillSpriteNameFormat; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x23
  UnityEngine_Object_o *skillIconSprite; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v26; // x8
  UISprite_o *v27; // x22
  int32_t skillId; // w23
  UnityEngine_Object_o *levelLabel; // x22
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v30; // x8
  UILabel_o *v31; // x22
  System_String_o *v32; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  UnityEngine_Object_o *maxLevelLabel; // x21
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v38; // x8
  struct EventInfoAssistLevelCounterComponent_AssistData_o *v39; // x8
  AssistEntity_o *MaxLevelEntity; // x0
  int v41; // w21
  UILabel_o *v42; // x19
  System_String_o *v43; // x20
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  int v48; // [xsp+Ch] [xbp-44h] BYREF
  int32_t lv; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BFDF0D & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_AssistMaster___, v3);
    sub_1C2E12C(&int_TypeInfo, v4);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C2E12C(&StringLiteral_5658/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, v8);
    sub_1C2E12C(&StringLiteral_5657/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, v9);
    byte_4BFDF0D = 1;
  }
  if ( this->fields.assistData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_AssistMaster___);
    assistData = this->fields.assistData;
    if ( !assistData )
      goto LABEL_46;
    v13 = (AssistMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_46;
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
      goto LABEL_46;
    GameObjectExtensions__SetLocalPosition_34857684(
      (UnityEngine_GameObject_o *)Instance,
      v16->fields.objectPosition,
      0LL);
    skillSprite = (UnityEngine_Object_o *)this->fields.skillSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0LL, 0LL) )
    {
      v21 = this->fields.skillSprite;
      skillSpriteNameFormat = this->fields.skillSpriteNameFormat;
      imageId = v15->fields.imageId;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v18, v19, v20);
      v24 = System_String__Format(skillSpriteNameFormat, v23, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(v21, v24, 0LL);
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
      v26 = this->fields.assistData;
      if ( !v26 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_34857684(
        (UnityEngine_GameObject_o *)Instance,
        v26->fields.iconPosition,
        0LL);
      v27 = this->fields.skillIconSprite;
      skillId = v15->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v27, skillId, 0LL);
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
      v30 = this->fields.assistData;
      if ( !v30 )
        goto LABEL_46;
      GameObjectExtensions__SetLocalPosition_34857684(
        (UnityEngine_GameObject_o *)Instance,
        v30->fields.levelPosition,
        0LL);
      v31 = this->fields.levelLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5657/*"EVENT_ASSIST_SKILL_LEVEL_FORMAT"*/, 0LL);
      lv = v15->fields.lv;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v33, v34, v35);
      Instance = (DataManager_o *)System_String__Format(v32, v36, 0LL);
      if ( !v31 )
        goto LABEL_46;
      UILabel__set_text(v31, (System_String_o *)Instance, 0LL);
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
        v38 = this->fields.assistData;
        if ( v38 )
        {
          GameObjectExtensions__SetLocalPosition_34857684(
            (UnityEngine_GameObject_o *)Instance,
            v38->fields.maxLevelPosition,
            0LL);
          v39 = this->fields.assistData;
          if ( v39 )
          {
            MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v13, v39->fields.assistId, 0LL);
            v41 = MaxLevelEntity ? MaxLevelEntity->fields.lv : 0;
            v42 = this->fields.maxLevelLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5658/*"EVENT_ASSIST_SKILL_MAX_LEVEL_FORMAT"*/, 0LL);
            v48 = v41;
            v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v44, v45, v46);
            Instance = (DataManager_o *)System_String__Format(v43, v47, 0LL);
            if ( v42 )
            {
              UILabel__set_text(v42, (System_String_o *)Instance, 0LL);
              return;
            }
          }
        }
      }
LABEL_46:
      sub_1C2E388(Instance, v11);
    }
  }
}


void __fastcall EventInfoAssistLevelCounterComponent_AssistData___ctor(
        EventInfoAssistLevelCounterComponent_AssistData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}