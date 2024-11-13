void __fastcall TextureUpdate___ctor(TextureUpdate_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TextureUpdate__Start(TextureUpdate_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall TextureUpdate__Update(TextureUpdate_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Behaviour_o *v6; // x19

  if ( (byte_4B17EDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, method, v2);
    byte_4B17EDA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !Component_object )
    sub_1BCAA3C(0LL, v5);
  v6 = (UnityEngine_Behaviour_o *)Component_object;
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[30].method)(
    Component_object,
    Component_object->klass->vtable[31].methodPtr);
  UnityEngine_Behaviour__set_enabled(v6, 0, 0LL);
  UnityEngine_Behaviour__set_enabled(v6, 1, 0LL);
}