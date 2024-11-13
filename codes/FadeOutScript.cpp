void __fastcall FadeOutScript___ctor(FadeOutScript_o *this, const MethodInfo *method)
{
  this->fields.alpha = (struct UnityEngine_Color_o)xmmword_BD1E70;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FadeOutScript__Start(FadeOutScript_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FadeOutScript__Update(FadeOutScript_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Renderer_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Material_o *v6; // x20
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B15077 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, method, v2);
    byte_4B15077 = 1;
  }
  Component_object = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !Component_object
    || (Component_object = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Component_object, 0LL)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(Component_object, v5);
  }
  v6 = (UnityEngine_Material_o *)Component_object;
  v8 = UnityEngine_Material__get_color((UnityEngine_Material_o *)Component_object, 0LL);
  v8.fields.r = v8.fields.r - this->fields.alpha.fields.r;
  v8.fields.g = v8.fields.g - this->fields.alpha.fields.g;
  v8.fields.b = v8.fields.b - this->fields.alpha.fields.b;
  v8.fields.a = v8.fields.a - this->fields.alpha.fields.a;
  UnityEngine_Material__set_color(v6, v8, 0LL);
}