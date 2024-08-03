void __fastcall FadeOutScript___ctor(FadeOutScript_o *this, const MethodInfo *method)
{
  this->fields.alpha = (struct UnityEngine_Color_o)xmmword_BA24B0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FadeOutScript__Start(FadeOutScript_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FadeOutScript__Update(FadeOutScript_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *Component_object; // x0
  UnityEngine_Material_o *v4; // x20
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB212 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_49FB212 = 1;
  }
  Component_object = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_object )
    goto LABEL_9;
  Component_object = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_9;
  color = UnityEngine_Material__get_color((UnityEngine_Material_o *)Component_object, 0LL);
  if ( color.fields.a < 0.0 )
    return;
  Component_object = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_object
    || (Component_object = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Component_object, 0LL)) == 0LL )
  {
LABEL_9:
    sub_1B64324(Component_object);
  }
  v4 = (UnityEngine_Material_o *)Component_object;
  v6 = UnityEngine_Material__get_color((UnityEngine_Material_o *)Component_object, 0LL);
  v6.fields.r = v6.fields.r - this->fields.alpha.fields.r;
  v6.fields.g = v6.fields.g - this->fields.alpha.fields.g;
  v6.fields.b = v6.fields.b - this->fields.alpha.fields.b;
  v6.fields.a = v6.fields.a - this->fields.alpha.fields.a;
  UnityEngine_Material__set_color(v4, v6, 0LL);
}