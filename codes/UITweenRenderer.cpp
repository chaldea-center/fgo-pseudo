void UITweenRenderer___ctor(UITweenRenderer_o *this, const MethodInfo *method)
{
  UIWidget___ctor((UIWidget_o *)this, 0);
}


int32_t UITweenRenderer__GetRenderingCompareFunction(
        UITweenRenderer_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( maskInteraction == 2 )
    v3 = 5;
  else
    v3 = 0;
  if ( maskInteraction == 1 )
    return 4;
  else
    return v3;
}


UnityEngine_Color_o UITweenRenderer__GetTweenColor(UITweenRenderer_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.mColor.fields.r;
  g = this->fields.mColor.fields.g;
  b = this->fields.mColor.fields.b;
  a = this->fields.mColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


float UITweenRenderer__GetTweenVolume(UITweenRenderer_o *this, const MethodInfo *method)
{
  return this->fields.volume;
}


void UITweenRenderer__SetTweenColor(UITweenRenderer_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  UIWidget__set_color((UIWidget_o *)this, c, 0);
}


void UITweenRenderer__SetTweenVolume(UITweenRenderer_o *this, float v, const MethodInfo *method)
{
  this->fields.volume = v;
}