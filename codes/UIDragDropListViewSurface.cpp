void UIDragDropListViewSurface___ctor(UIDragDropListViewSurface_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropListViewSurface__DragEnd(UIDragDropListViewSurface_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1

  if ( (byte_4CC8C4D & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4CC8C4D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C71608(0, v4);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0);
}


void UIDragDropListViewSurface__DragStart(UIDragDropListViewSurface_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1

  if ( (byte_4CC8C4C & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4CC8C4C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C71608(0, v4);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0);
}