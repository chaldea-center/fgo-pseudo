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
  EventCooltimeRewardMaster_o *Master_object; // x0
  __int64 v5; // x1
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFDEFB & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    byte_4BFDEFB = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (EventCooltimeRewardMaster_o *)EventCooltimeRewardMaster__TryGetEntity(
                                                   Master_object,
                                                   &entity,
                                                   this->fields._EventId_k__BackingField,
                                                   this->fields._SpotId_k__BackingField,
                                                   this->fields._Level_k__BackingField,
                                                   0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity
    || (Master_object = (EventCooltimeRewardMaster_o *)this->fields.areaName) == 0LL
    || (UILabel__set_text((UILabel_o *)Master_object, entity->fields.name, 0LL),
        (Master_object = (EventCooltimeRewardMaster_o *)this->fields.areaName) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(Master_object, v5);
  }
  UILabel__SetCondensedScale((UILabel_o *)Master_object, this->fields.areaNameWidth, 0, 0LL);
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
  __int64 v8; // x1
  int32_t Level_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFDEFA & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_8406/*"LEVEL_INFO"*/, v3);
    byte_4BFDEFA = 1;
  }
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8406/*"LEVEL_INFO"*/, 0LL);
  Level_k__BackingField = this->fields._Level_k__BackingField;
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&Level_k__BackingField, 0LL);
  v7 = System_String__Format(v5, v6, 0LL);
  if ( !levelLabel )
    sub_1C2E388(v7, v8);
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