void __fastcall EndrolEffectItem___ctor(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EndrolEffectItem__LateUpdate(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *particle; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49BEDB2 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BEDB2 = 1;
  }
  particle = this->fields.particle;
  if ( !particle )
    sub_1B4D1EC(0LL, method);
  if ( !UnityEngine_ParticleSystem__IsAlive_69085400(particle, 0LL) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
  }
}


void __fastcall EndrolEffectItem__Start(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BEDB1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, method);
    byte_49BEDB1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v4);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 gameObject,
                                 (const MethodInfo_2F536A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  this->fields.particle = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.particle, (int32_t)ComponentInChildren_object, v6, v7);
}