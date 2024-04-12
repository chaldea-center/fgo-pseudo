void __fastcall WarBoardEffectData___ctor(
        WarBoardEffectData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42AC7C7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardEffectMaster___);
    sub_B52984(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AC7C7 = 1;
  }
  this->fields.effectId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !layout
    || (this->fields._squareIndex_k__BackingField = layout->fields.squareIndex,
        this->fields.effectId = layout->fields.effectId,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardEffectMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  this->fields.effectEntity = (struct WarBoardEffectEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                                                 this->fields.effectId,
                                                                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int__GetEntity__);
  sub_B52920(&this->fields.effectEntity);
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
  this->fields.component = component;
  sub_B52920(&this->fields.component);
}


void __fastcall WarBoardEffectData__SetEffectEnable(WarBoardEffectData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardEffectComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B52A5C(0LL, enable);
  WarBoardEffectComponent__SetColliderEnable(component, enable, method);
}


void __fastcall WarBoardEffectData__SetTouchEnable(WarBoardEffectData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardEffectComponent_o *component; // x0

  component = this->fields.component;
  if ( !component )
    sub_B52A5C(0LL, enable);
  WarBoardEffectComponent__SetTouchEnable(component, enable, method);
}


WarBoardEffectComponent_o *__fastcall WarBoardEffectData__get_Component(
        WarBoardEffectData_o *this,
        const MethodInfo *method)
{
  return this->fields.component;
}


System_String_o *__fastcall WarBoardEffectData__get_description(WarBoardEffectData_o *this, const MethodInfo *method)
{
  struct WarBoardEffectEntity_o *effectEntity; // x8
  struct System_String_StaticFields *p_effectName; // x8

  if ( (byte_42AC7C9 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    byte_42AC7C9 = 1;
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
  struct WarBoardEffectEntity_o *effectEntity; // x8
  struct System_String_StaticFields *p_name; // x8

  if ( (byte_42AC7C8 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    byte_42AC7C8 = 1;
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