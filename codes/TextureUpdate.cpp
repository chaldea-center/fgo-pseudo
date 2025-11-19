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
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x19

  if ( (byte_4CB8373 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4CB8373 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !Component_object )
    sub_1C6BC60(0, v4);
  v5 = (UnityEngine_Behaviour_o *)Component_object;
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[30].methodPtr)(
    Component_object,
    Component_object->klass->vtable[30].method);
  UnityEngine_Behaviour__set_enabled(v5, 0, 0);
  UnityEngine_Behaviour__set_enabled(v5, 1, 0);
}