void FadeOutScript___ctor(FadeOutScript_o *this, const MethodInfo *method)
{
  this->fields.alpha = (struct UnityEngine_Color_o)xmmword_C08C30;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FadeOutScript__Start(FadeOutScript_o *this, const MethodInfo *method)
{
  ;
}


void FadeOutScript__Update(FadeOutScript_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *Component_object; // x0
  __int64 v4; // x1
  UnityEngine_Material_o *v5; // x20
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2606A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    byte_4C2606A = 1;
  }
  Component_object = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_object )
    goto LABEL_9;
  Component_object = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Component_object, 0);
  if ( !Component_object )
    goto LABEL_9;
  color = UnityEngine_Material__get_color((UnityEngine_Material_o *)Component_object, 0);
  if ( color.fields.a < 0.0 )
    return;
  Component_object = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_object
    || (Component_object = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Component_object, 0)) == 0 )
  {
LABEL_9:
    sub_1C2D6EC(Component_object, v4);
  }
  v5 = (UnityEngine_Material_o *)Component_object;
  v7 = UnityEngine_Material__get_color((UnityEngine_Material_o *)Component_object, 0);
  v7.fields.r = v7.fields.r - this->fields.alpha.fields.r;
  v7.fields.g = v7.fields.g - this->fields.alpha.fields.g;
  v7.fields.b = v7.fields.b - this->fields.alpha.fields.b;
  v7.fields.a = v7.fields.a - this->fields.alpha.fields.a;
  UnityEngine_Material__set_color(v5, v7, 0);
}