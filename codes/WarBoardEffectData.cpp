void WarBoardEffectData___ctor(
        WarBoardEffectData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2E490 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardEffectMaster___);
    sub_1C93AD4(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2E490 = 1;
  }
  this->fields.effectId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.effectId = layout->fields.effectId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardEffectMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.effectId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int__GetEntity__);
  this->fields.effectEntity = (struct WarBoardEffectEntity_o *)Entity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.effectEntity, (int32_t)Entity, v8, v9, v10, v11, v12, v13);
}


WarBoardEffectEntity_o *WarBoardEffectData__GetEffectEntity(WarBoardEffectData_o *this, const MethodInfo *method)
{
  return this->fields.effectEntity;
}


void WarBoardEffectData__SetComponent(
        WarBoardEffectData_o *this,
        WarBoardEffectComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.component = component;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.component,
    (int32_t)component,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardEffectData__SetEffectEnable(WarBoardEffectData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardEffectComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C93D2C(0, enable);
  WarBoardEffectComponent__SetColliderEnable(component, enable, 0);
}


void WarBoardEffectData__SetTouchEnable(WarBoardEffectData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardEffectComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1C93D2C(0, enable);
  WarBoardEffectComponent__SetTouchEnable(component, enable, 0);
}


WarBoardEffectComponent_o *WarBoardEffectData__get_Component(WarBoardEffectData_o *this, const MethodInfo *method)
{
  return this->fields.component;
}


System_String_o *WarBoardEffectData__get_description(WarBoardEffectData_o *this, const MethodInfo *method)
{
  struct WarBoardEffectEntity_o *effectEntity; // x8
  struct System_String_StaticFields *p_effectName; // x8

  if ( (byte_4D2E492 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    byte_4D2E492 = 1;
  }
  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    p_effectName = (struct System_String_StaticFields *)&effectEntity->fields.effectName;
  else
    p_effectName = string_TypeInfo->static_fields;
  return p_effectName->Empty;
}


int32_t WarBoardEffectData__get_effectEntityId(WarBoardEffectData_o *this, const MethodInfo *method)
{
  struct WarBoardEffectEntity_o *effectEntity; // x8

  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    return effectEntity->fields.id;
  else
    return 0;
}


int32_t WarBoardEffectData__get_effectIconId(WarBoardEffectData_o *this, const MethodInfo *method)
{
  struct WarBoardEffectEntity_o *effectEntity; // x8

  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    return effectEntity->fields.iconId;
  else
    return 0;
}


bool WarBoardEffectData__get_isUse(WarBoardEffectData_o *this, const MethodInfo *method)
{
  return this->fields._isUse_k__BackingField;
}


System_String_o *WarBoardEffectData__get_name(WarBoardEffectData_o *this, const MethodInfo *method)
{
  struct WarBoardEffectEntity_o *effectEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_4D2E491 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    byte_4D2E491 = 1;
  }
  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    p_name = (struct System_String_StaticFields *)&effectEntity->fields.name;
  else
    p_name = string_TypeInfo->static_fields;
  return p_name->Empty;
}


int32_t WarBoardEffectData__get_squareIndex(WarBoardEffectData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


void WarBoardEffectData__set_isUse(WarBoardEffectData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isUse_k__BackingField = value;
}


void WarBoardEffectData__set_squareIndex(WarBoardEffectData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}