void __fastcall WarBoardEffectData___ctor(
        WarBoardEffectData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B13F6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardEffectMaster___, layout, method);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B13F6F = 1;
  }
  this->fields.effectId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.effectId = layout->fields.effectId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardEffectMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.effectId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int__GetEntity__);
  this->fields.effectEntity = (struct WarBoardEffectEntity_o *)Entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectEntity, (int64_t)Entity, v12, v13, v14, v15, v16, v17);
}


WarBoardEffectEntity_o *__fastcall WarBoardEffectData__GetEffectEntity(
        WarBoardEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields.effectEntity;
}


void __fastcall WarBoardEffectData__SetComponent(
        WarBoardEffectData_o *this,
        WarBoardEffectComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.component = component;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.component,
    (int64_t)component,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectData__SetEffectEnable(WarBoardEffectData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardEffectComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1BCAA3C(0LL, enable);
  WarBoardEffectComponent__SetColliderEnable(component, enable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectData__SetTouchEnable(WarBoardEffectData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardEffectComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_1BCAA3C(0LL, enable);
  WarBoardEffectComponent__SetTouchEnable(component, enable, 0LL);
}


WarBoardEffectComponent_o *__fastcall WarBoardEffectData__get_Component(
        WarBoardEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields.component;
}


System_String_o *__fastcall WarBoardEffectData__get_description(WarBoardEffectData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardEffectEntity_o *effectEntity; // x8
  struct System_String_StaticFields *p_effectName; // x8

  if ( (byte_4B13F71 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B13F71 = 1;
  }
  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    p_effectName = (struct System_String_StaticFields *)&effectEntity->fields.effectName;
  else
    p_effectName = string_TypeInfo->static_fields;
  return p_effectName->Empty;
}


int32_t __fastcall WarBoardEffectData__get_effectEntityId(WarBoardEffectData_o *this, const MethodInfo *method)
{
  struct WarBoardEffectEntity_o *effectEntity; // x8

  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    return effectEntity->fields.id;
  else
    return 0;
}


int32_t __fastcall WarBoardEffectData__get_effectIconId(WarBoardEffectData_o *this, const MethodInfo *method)
{
  struct WarBoardEffectEntity_o *effectEntity; // x8

  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    return effectEntity->fields.iconId;
  else
    return 0;
}


bool __fastcall WarBoardEffectData__get_isUse(WarBoardEffectData_o *this, const MethodInfo *method)
{
  return this->fields._isUse_k__BackingField;
}


System_String_o *__fastcall WarBoardEffectData__get_name(WarBoardEffectData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardEffectEntity_o *effectEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_4B13F70 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B13F70 = 1;
  }
  effectEntity = this->fields.effectEntity;
  if ( effectEntity )
    p_name = (struct System_String_StaticFields *)&effectEntity->fields.name;
  else
    p_name = string_TypeInfo->static_fields;
  return p_name->Empty;
}


int32_t __fastcall WarBoardEffectData__get_squareIndex(WarBoardEffectData_o *this, const MethodInfo *method)
{
  return this->fields._squareIndex_k__BackingField;
}


void __fastcall WarBoardEffectData__set_isUse(WarBoardEffectData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isUse_k__BackingField = value;
}


void __fastcall WarBoardEffectData__set_squareIndex(
        WarBoardEffectData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._squareIndex_k__BackingField = value;
}