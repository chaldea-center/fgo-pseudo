void __fastcall EventInfoAreaImprovementDrawComponent___ctor(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  this->fields.areaNameWidth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementDrawComponent__UpdateAreaName(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  UILabel_o *areaName; // x0
  UILabel_o *v6; // x0
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB6DA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FB6DA = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !EventCooltimeRewardMaster__TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields._EventId_k__BackingField,
          this->fields._SpotId_k__BackingField,
          this->fields._Level_k__BackingField,
          0LL) )
    return;
  if ( !entity
    || (areaName = this->fields.areaName) == 0LL
    || (UILabel__set_text(areaName, entity->fields.name, 0LL), (v6 = this->fields.areaName) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  UILabel__SetCondensedScale(v6, this->fields.areaNameWidth, 0LL);
}


void __fastcall EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *levelLabel; // x20
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t Level_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB6D9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8348/*"LEVEL_INFO"*/, v3);
    byte_40FB6D9 = 1;
  }
  Level_k__BackingField = 0;
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8348/*"LEVEL_INFO"*/, 0LL);
  Level_k__BackingField = this->fields._Level_k__BackingField;
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&Level_k__BackingField, 0LL);
  v7 = System_String__Format(v5, v6, 0LL);
  if ( !levelLabel )
    sub_B170D4();
  UILabel__set_text(levelLabel, v7, 0LL);
}


UILabel_o *__fastcall EventInfoAreaImprovementDrawComponent__get_AreaName(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.areaName;
}


UISprite_o *__fastcall EventInfoAreaImprovementDrawComponent__get_BgSprite(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bgSprite;
}


System_String_o *__fastcall EventInfoAreaImprovementDrawComponent__get_BgSpriteName(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bgSpriteName;
}


int32_t __fastcall EventInfoAreaImprovementDrawComponent__get_EventId(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


int32_t __fastcall EventInfoAreaImprovementDrawComponent__get_Level(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Level_k__BackingField;
}


UILabel_o *__fastcall EventInfoAreaImprovementDrawComponent__get_LevelLabel(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.levelLabel;
}


int32_t __fastcall EventInfoAreaImprovementDrawComponent__get_SpotId(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


void __fastcall EventInfoAreaImprovementDrawComponent__set_EventId(
        EventInfoAreaImprovementDrawComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}


void __fastcall EventInfoAreaImprovementDrawComponent__set_Level(
        EventInfoAreaImprovementDrawComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Level_k__BackingField = value;
}


void __fastcall EventInfoAreaImprovementDrawComponent__set_SpotId(
        EventInfoAreaImprovementDrawComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}