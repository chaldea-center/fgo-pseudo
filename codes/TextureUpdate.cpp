void TextureUpdate___ctor(TextureUpdate_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TextureUpdate__Start(TextureUpdate_o *this, const MethodInfo *method)
{
  ;
}


void TextureUpdate__Update(TextureUpdate_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  UnityEngine_Behaviour_o *v4; // x19

  if ( (byte_4C45027 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4C45027 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !Component_object )
    sub_1C372B4(0);
  v4 = (UnityEngine_Behaviour_o *)Component_object;
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[30].methodPtr)(
    Component_object,
    Component_object->klass->vtable[30].method);
  UnityEngine_Behaviour__set_enabled(v4, 0, 0);
  UnityEngine_Behaviour__set_enabled(v4, 1, 0);
}