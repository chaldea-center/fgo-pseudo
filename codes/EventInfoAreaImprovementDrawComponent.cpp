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
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438CC29 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438CC29 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_13;
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)EventCooltimeRewardMaster__TryGetEntity(
                                                                    Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    this->fields._EventId_k__BackingField,
                                                                    this->fields._SpotId_k__BackingField,
                                                                    this->fields._Level_k__BackingField,
                                                                    0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return;
  if ( !entity
    || (Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)this->fields.areaName) == 0LL
    || (UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, entity->fields.name, 0LL),
        (Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)this->fields.areaName) == 0LL) )
  {
LABEL_13:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  }
  UILabel__SetCondensedScale((UILabel_o *)Master_WarQuestSelectionMaster, this->fields.areaNameWidth, 0LL);
}


void __fastcall EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *levelLabel; // x20
  System_String_o *v4; // x21
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t Level_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438CC28 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8532/*"LEVEL_INFO"*/);
    byte_438CC28 = 1;
  }
  Level_k__BackingField = 0;
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8532/*"LEVEL_INFO"*/, 0LL);
  Level_k__BackingField = this->fields._Level_k__BackingField;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&Level_k__BackingField, 0LL);
  v6 = System_String__Format(v4, v5, 0LL);
  if ( !levelLabel )
    sub_B7769C(v6, v7);
  UILabel__set_text(levelLabel, v6, 0LL);
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