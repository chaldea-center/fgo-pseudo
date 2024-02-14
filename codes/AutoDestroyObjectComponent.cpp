void __fastcall AutoDestroyObjectComponent___ctor(AutoDestroyObjectComponent_o *this, const MethodInfo *method)
{
  this->fields.elapsedTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoDestroyObjectComponent__Start(AutoDestroyObjectComponent_o *this, const MethodInfo *method)
{
  *((_DWORD *)&this->fields + 3) = 0;
}


void __fastcall AutoDestroyObjectComponent__Update(AutoDestroyObjectComponent_o *this, const MethodInfo *method)
{
  float v3; // s8
  float deltaTime; // s0
  float elapsedTime; // s1
  float v6; // s0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_421676C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421676C = 1;
  }
  v3 = *((float *)&this->fields + 3);
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  elapsedTime = this->fields.elapsedTime;
  v6 = v3 + deltaTime;
  *((float *)&this->fields + 3) = v6;
  if ( elapsedTime < v6 )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
}