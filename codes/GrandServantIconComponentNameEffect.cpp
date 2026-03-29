void GrandServantIconComponentNameEffect___ctor(GrandServantIconComponentNameEffect_o *this, const MethodInfo *method)
{
  this->fields.toColor = (struct UnityEngine_Color_o)xmmword_D01BB0;
  this->fields.fromColor = (struct UnityEngine_Color_o)xmmword_D01D10;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float GrandServantIconComponentNameEffect__EaseInExpo(
        GrandServantIconComponentNameEffect_o *this,
        float x,
        const MethodInfo *method)
{
  float v3; // s1

  if ( x < 0.0 )
    return 0.0;
  v3 = 1.0;
  if ( x <= 1.0 && (v3 = x, x == 0.0) )
    return 0.0;
  else
    return exp2f((float)(v3 * 10.0) + -10.0);
}


float GrandServantIconComponentNameEffect__EaseOutCirc(
        GrandServantIconComponentNameEffect_o *this,
        float x,
        const MethodInfo *method)
{
  float v3; // s3
  float v4; // s0

  v3 = fminf(x, 1.0) + -1.0;
  if ( x < 0.0 )
    v4 = -1.0;
  else
    v4 = v3;
  return sqrtf(1.0 - (float)(v4 * v4));
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
  float v7; // s2
  UIWidget_o *texture; // x19
  float v9; // s4
  float v10; // s2
  float v11; // s0
  float v12; // s1
  float a; // s1
  float v14; // s3
  unsigned __int64 v15; // d0
  float v16; // s2
  float v17; // s4
  float v18; // s2
  bool v19; // nf
  float v20; // s2
  UnityEngine_Color_o v21; // 0:kr00_16.16

  t = this->fields.t;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  v7 = -deltaTime;
  texture = (UIWidget_o *)this->fields.texture;
  v9 = vabds_f32(2.0, t);
  if ( (float)(2.0 - t) >= 0.0 )
    v7 = deltaTime;
  v10 = t + v7;
  if ( v9 <= deltaTime )
    v10 = 2.0;
  this->fields.t = v10;
  if ( !texture )
    sub_1C93D2C(v4, v5);
  if ( v10 >= 1.0 )
  {
    v18 = 1.0 - (float)(v10 + -1.0);
    v19 = v18 < 0.0;
    v20 = fminf(v18, 1.0) + -1.0;
    a = this->fields.fromColor.fields.a;
    if ( v19 )
      v20 = -1.0;
    v14 = fminf(sqrtf(1.0 - (float)(v20 * v20)), 1.0);
    v15 = vadd_f32(
            *(float32x2_t *)&this->fields.fromColor.fields.r,
            vmul_n_f32(
              vsub_f32(*(float32x2_t *)&this->fields.toColor.fields.r, *(float32x2_t *)&this->fields.fromColor.fields.r),
              v14)).n64_u64[0];
    v16 = this->fields.fromColor.fields.b
        + (float)(v14 * (float)(this->fields.toColor.fields.b - this->fields.fromColor.fields.b));
    v17 = this->fields.toColor.fields.a - a;
  }
  else
  {
    v11 = 0.0;
    if ( v10 >= 0.0 )
    {
      v12 = 1.0;
      if ( v10 > 1.0 || (v12 = v10, v10 != 0.0) )
        v11 = exp2f((float)(v12 * 10.0) + -10.0);
    }
    a = this->fields.fromColor.fields.a;
    v14 = fminf(v11, 1.0);
    v15 = vadd_f32(
            *(float32x2_t *)&this->fields.fromColor.fields.r,
            vmul_n_f32(
              vsub_f32(*(float32x2_t *)&this->fields.toColor.fields.r, *(float32x2_t *)&this->fields.fromColor.fields.r),
              v14)).n64_u64[0];
    v16 = this->fields.fromColor.fields.b
        + (float)(v14 * (float)(this->fields.toColor.fields.b - this->fields.fromColor.fields.b));
    v17 = this->fields.toColor.fields.a - a;
  }
  *(_QWORD *)&v21.fields.r = v15;
  v21.fields.b = v16;
  v21.fields.a = a + (float)(v14 * v17);
  UIWidget__set_color(texture, v21, 0);
}