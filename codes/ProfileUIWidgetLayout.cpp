void ProfileUIWidgetLayout___ctor(ProfileUIWidgetLayout_o *this, const MethodInfo *method)
{
  if ( (byte_5937C1F & 1) == 0 )
  {
    sub_21FFC50(&Method_BaseProfileLayout_ProfileUIWidgetLayout_UIWidgetLayout___ctor__);
    byte_5937C1F = 1;
  }
  BaseProfileLayout_object____ctor(
    (BaseProfileLayout_TLayout__o *)this,
    (const MethodInfo_3E2564C *)Method_BaseProfileLayout_ProfileUIWidgetLayout_UIWidgetLayout___ctor__);
}


void ProfileUIWidgetLayout__ApplyLayout(
        ProfileUIWidgetLayout_o *this,
        ProfileUIWidgetLayout_UIWidgetLayout_o *layout,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  UIWidget_o *v7; // x20

  if ( (byte_5937C1E & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_5937C1E = 1;
  }
  if ( layout )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( this->fields.shouldUseSize )
    {
      v7 = (UIWidget_o *)Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v6);
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