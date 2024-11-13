void __fastcall AutoDestroyObjectComponent___ctor(AutoDestroyObjectComponent_o *this, const MethodInfo *method)
{
  this->fields.lostTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoDestroyObjectComponent__Start(AutoDestroyObjectComponent_o *this, const MethodInfo *method)
{
  this->fields.elapsedTime = 0.0;
}


void __fastcall AutoDestroyObjectComponent__Update(AutoDestroyObjectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float elapsedTime; // s8
  float deltaTime; // s0
  float lostTime; // s1
  float v7; // s0
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B183F1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B183F1 = 1;
  }
  elapsedTime = this->fields.elapsedTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  lostTime = this->fields.lostTime;
  v7 = elapsedTime + deltaTime;
  this->fields.elapsedTime = v7;
  if ( lostTime < v7 )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
}