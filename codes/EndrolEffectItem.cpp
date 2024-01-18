void __fastcall EndrolEffectItem___ctor(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EndrolEffectItem__LateUpdate(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *particle; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_418BD7C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418BD7C = 1;
  }
  particle = this->fields.particle;
  if ( !particle )
    sub_B2C434(0LL, method);
  if ( !UnityEngine_ParticleSystem__IsAlive_50259800(particle, 0LL) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
}


void __fastcall EndrolEffectItem__Start(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct UnityEngine_ParticleSystem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418BD7B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, method);
    byte_418BD7B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  ComponentInChildren_Dropdown_DropdownItem = (struct UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                       gameObject,
                                                                                       (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  this->fields.particle = ComponentInChildren_Dropdown_DropdownItem;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.particle,
    (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}