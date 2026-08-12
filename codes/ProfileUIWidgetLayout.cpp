void ProfileUIWidgetLayout___ctor(ProfileUIWidgetLayout_o *this, const MethodInfo *method)
{
  if ( (byte_596FD82 & 1) == 0 )
  {
    sub_2213A60(&Method_BaseProfileLayout_ProfileUIWidgetLayout_UIWidgetLayout___ctor__);
    byte_596FD82 = 1;
  }
  BaseProfileLayout_object____ctor(
    (BaseProfileLayout_TLayout__o *)this,
    (const MethodInfo_3E58DF4 *)Method_BaseProfileLayout_ProfileUIWidgetLayout_UIWidgetLayout___ctor__);
}


void ProfileUIWidgetLayout__ApplyLayout(
        ProfileUIWidgetLayout_o *this,
        ProfileUIWidgetLayout_UIWidgetLayout_o *layout,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  UIWidget_o *v7; // x20

  if ( (byte_596FD81 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_596FD81 = 1;
  }
  if ( layout )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( this->fields.shouldUseSize )
    {
      v7 = (UIWidget_o *)Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v6);
      UIWidget__set_width((UIWidget_o *)Component_object, layout->fields.size.fields.m_X, 0);
      UIWidget__set_height(v7, layout->fields.size.fields.m_Y, 0);
    }
  }
}


void ProfileUIWidgetLayout_UIWidgetLayout___ctor(
        ProfileUIWidgetLayout_UIWidgetLayout_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}