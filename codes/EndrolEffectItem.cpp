void __fastcall EndrolEffectItem___ctor(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EndrolEffectItem__LateUpdate(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *particle; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BCB8DC & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCB8DC = 1;
  }
  particle = this->fields.particle;
  if ( !particle )
    sub_1C1AE30(0LL, method);
  if ( !UnityEngine_ParticleSystem__IsAlive_71075296(particle, 0LL) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
  }
}


void __fastcall EndrolEffectItem__Start(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BCB8DB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, method);
    byte_4BCB8DB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v4);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 gameObject,
                                 (const MethodInfo_2FEFE24 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  this->fields.particle = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.particle,
    (int64_t)ComponentInChildren_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}