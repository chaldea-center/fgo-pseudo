void WarBoardEffectData___ctor(
        WarBoardEffectData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t effectId; // w10
  const MethodInfo_476E8C0 *v8; // x0
  Il2CppObject *Entity; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5936145 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardEffectMaster___);
    sub_21FFC50(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936145 = 1;
  }
  this->fields.effectId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !layout
    || (effectId = layout->fields.effectId,
        v8 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__,
        this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.effectId = effectId,
        (Instance = SingletonMonoBehaviour_object___get_Instance(v8)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardEffectMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.effectId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int__GetEntity__);
  this->fields.effectEntity = (struct WarBoardEffectEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectEntity,
    (int32_t)Entity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.component = component;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.component,
    (int32_t)component,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardEffectData__SetEffectEnable(WarBoardEffectData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardEffectComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_21FFECC(0, enable);
  WarBoardEffectComponent__SetColliderEnable(component, enable, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardEffectData__SetTouchEnable(WarBoardEffectData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardEffectComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_21FFECC(0, enable);
  WarBoardEffectComponent__SetTouchEnable(component, enable, 0);
}


WarBoardEffectComponent_o *WarBoardEffectData__get_Component(WarBoardEffectData_o *this, const MethodInfo *method)
{
  return this->fields.component;
}


System_String_o *WarBoardEffectData__get_description(WarBoardEffectData_o *this, const MethodInfo *method)
{
  struct WarBoardEffectEntity_o *effectEntity; // x8
  System_String_o **p_effectName; // x8

  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    p_effectName = &effectEntity->fields.effectName;
  else
    p_effectName = *(System_String_o ***)(qword_594C0B8 + 184);
  return *p_effectName;
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
  System_String_o **p_name; // x8

  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    p_name = &effectEntity->fields.name;
  else
    p_name = *(System_String_o ***)(qword_594C0B8 + 184);
  return *p_name;
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