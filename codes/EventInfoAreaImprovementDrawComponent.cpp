void EventInfoAreaImprovementDrawComponent___ctor(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  this->fields.areaNameWidth = 100;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoAreaImprovementDrawComponent__UpdateAreaName(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  EventCooltimeRewardMaster_o *Master_object; // x0
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C43335 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C43335 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (EventCooltimeRewardMaster_o *)EventCooltimeRewardMaster__TryGetEntity(
                                                   Master_object,
                                                   &entity,
                                                   this->fields._EventId_k__BackingField,
                                                   this->fields._SpotId_k__BackingField,
                                                   this->fields._Level_k__BackingField,
                                                   0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity
    || (Master_object = (EventCooltimeRewardMaster_o *)this->fields.areaName) == 0
    || (UILabel__set_text((UILabel_o *)Master_object, entity->fields.name, 0),
        (Master_object = (EventCooltimeRewardMaster_o *)this->fields.areaName) == 0) )
  {
LABEL_12:
    sub_1C372B4(Master_object);
  }
  UILabel__SetCondensedScale((UILabel_o *)Master_object, this->fields.areaNameWidth, 0, 0);
}


void EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *levelLabel; // x20
  System_String_o *v4; // x21
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  int32_t Level_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C43334 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_8263/*"LEVEL_INFO"*/);
    byte_4C43334 = 1;
  }
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8263/*"LEVEL_INFO"*/, 0);
  Level_k__BackingField = this->fields._Level_k__BackingField;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&Level_k__BackingField, 0);
  v6 = System_String__Format(v4, v5, 0);
  if ( !levelLabel )
    sub_1C372B4(v6);
  UILabel__set_text(levelLabel, v6, 0);
}


UILabel_o *EventInfoAreaImprovementDrawComponent__get_AreaName(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.areaName;
}


UISprite_o *EventInfoAreaImprovementDrawComponent__get_BgSprite(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bgSprite;
}


System_String_o *EventInfoAreaImprovementDrawComponent__get_BgSpriteName(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bgSpriteName;
}


int32_t EventInfoAreaImprovementDrawComponent__get_EventId(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


int32_t EventInfoAreaImprovementDrawComponent__get_Level(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Level_k__BackingField;
}


UILabel_o *EventInfoAreaImprovementDrawComponent__get_LevelLabel(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.levelLabel;
}


int32_t EventInfoAreaImprovementDrawComponent__get_SpotId(
        EventInfoAreaImprovementDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


void EventInfoAreaImprovementDrawComponent__set_EventId(
        EventInfoAreaImprovementDrawComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}


void EventInfoAreaImprovementDrawComponent__set_Level(
        EventInfoAreaImprovementDrawComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Level_k__BackingField = value;
}


void EventInfoAreaImprovementDrawComponent__set_SpotId(
        EventInfoAreaImprovementDrawComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}