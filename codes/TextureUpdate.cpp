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
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x19

  if ( (byte_4BDE2CE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4BDE2CE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !Component_object )
    sub_1C22094(0LL, v4);
  v5 = (UnityEngine_Behaviour_o *)Component_object;
  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[30].method)(
    Component_object,
    Component_object->klass->vtable[31].methodPtr);
  UnityEngine_Behaviour__set_enabled(v5, 0, 0LL);
  UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
}