void UIDragDropListViewSurface___ctor(UIDragDropListViewSurface_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropListViewSurface__DragEnd(UIDragDropListViewSurface_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0

  if ( (byte_4C391E8 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C391E8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C32E7C(0);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0);
}


void UIDragDropListViewSurface__DragStart(UIDragDropListViewSurface_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0

  if ( (byte_4C391E7 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C391E7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C32E7C(0);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0);
}