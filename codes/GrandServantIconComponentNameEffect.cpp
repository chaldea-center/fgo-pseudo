void GrandServantIconComponentNameEffect___ctor(GrandServantIconComponentNameEffect_o *this, const MethodInfo *method)
{
  this->fields.toColor = (struct UnityEngine_Color_o)xmmword_E9C330;
  this->fields.fromColor = (struct UnityEngine_Color_o)xmmword_E9C600;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float GrandServantIconComponentNameEffect__EaseInExpo(
        GrandServantIconComponentNameEffect_o *this,
        float x,
        const MethodInfo *method)
{
  float v3; // s1
  float v4; // s0

  v3 = 1.0;
  if ( x <= 1.0 )
    v3 = x;
  if ( x >= 0.0 )
    v4 = v3;
  else
    v4 = 0.0;
  if ( v4 == 0.0 )
    return 0.0;
  else
    return exp2f((float)(v4 * 10.0) + -10.0);
}


float GrandServantIconComponentNameEffect__EaseOutCirc(
        GrandServantIconComponentNameEffect_o *this,
        float x,
        const MethodInfo *method)
{
  float v3; // s2
  float v4; // s2
  float v5; // s0

  if ( x <= 1.0 )
    v3 = x;
  else
    v3 = 1.0;
  v4 = v3 + -1.0;
  if ( x >= 0.0 )
    v5 = v4;
  else
    v5 = -1.0;
  return sqrtf(1.0 - (float)(v5 * v5));
}


void GrandServantIconComponentNameEffect__OnEnable(
        GrandServantIconComponentNameEffect_o *this,
        const MethodInfo *method)
{
  this->fields.t = 0.0;
}


void GrandServantIconComponentNameEffect__Update(GrandServantIconComponentNameEffect_o *this, const MethodInfo *method)
{
  float t; // s8
  __int64 v4; // x0
  __int64 v5; // x1
  float deltaTime; // s0
  float v7; // s1
  UIWidget_o *texture; // x20
  float v9; // s2
  float v10; // s2
  float v11; // s2
  float v12; // s0
  float v13; // s1
  float v14; // s1
  float v15; // s3
  float v16; // s3
  float v17; // s1
  struct UnityEngine_Color_o fromColor; // q2
  float32x4_t v19; // q3

  t = this->fields.t;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  v7 = 2.0;
  texture = (UIWidget_o *)this->fields.texture;
  if ( (float)(2.0 - t) >= 0.0 )
    v9 = deltaTime;
  else
    v9 = -deltaTime;
  v10 = t + v9;
  if ( vabds_f32(2.0, t) > deltaTime )
    v7 = v10;
  this->fields.t = v7;
  if ( !texture )
    sub_2213CDC(v4, v5);
  if ( v7 >= 1.0 )
  {
    v14 = 1.0 - (float)(v7 + -1.0);
    if ( v14 <= 1.0 )
      v15 = v14;
    else
      v15 = 1.0;
    v16 = v15 + -1.0;
    if ( v14 >= 0.0 )
      v17 = v16;
    else
      v17 = -1.0;
    v12 = sqrtf(1.0 - (float)(v17 * v17));
  }
  else
  {
    if ( v7 <= 1.0 )
      v11 = v7;
    else
      v11 = 1.0;
    v12 = 0.0;
    if ( v7 >= 0.0 )
      v13 = v11;
    else
      v13 = 0.0;
    if ( v13 != 0.0 )
      v12 = exp2f((float)(v13 * 10.0) + -10.0);
  }
  fromColor = this->fields.fromColor;
  v19 = vsubq_f32((float32x4_t)this->fields.toColor, (float32x4_t)fromColor);
  if ( v12 > 1.0 )
    v12 = 1.0;
  UIWidget__set_color(texture, (UnityEngine_Color_o)vaddq_f32((float32x4_t)fromColor, vmulq_n_f32(v19, v12)), 0);
}