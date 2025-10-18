void GrandServantIconComponentNameEffect___ctor(GrandServantIconComponentNameEffect_o *this, const MethodInfo *method)
{
  this->fields.toColor = (struct UnityEngine_Color_o)xmmword_C0FB00;
  this->fields.fromColor = (struct UnityEngine_Color_o)xmmword_C0FC60;
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


// local variable allocation has failed, the output may be wrong!
void GrandServantIconComponentNameEffect__Update(GrandServantIconComponentNameEffect_o *this, const MethodInfo *method)
{
  float t; // s8
  __int64 v4; // x0
  float deltaTime; // s0
  float v6; // s2
  UIWidget_o *texture; // x19
  float v8; // s4
  float v9; // s2
  float v10; // s0
  float v11; // s1
  float a; // s1
  float v13; // s3
  unsigned __int64 v14; // d0 OVERLAPPED
  float v15; // s2
  float v16; // s4
  float v17; // s2
  bool v18; // nf
  float v19; // s2
  float v20; // s3
  int v21; // s1

  t = this->fields.t;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  v6 = -deltaTime;
  texture = (UIWidget_o *)this->fields.texture;
  v8 = vabds_f32(2.0, t);
  if ( (float)(2.0 - t) >= 0.0 )
    v6 = deltaTime;
  v9 = t + v6;
  if ( v8 <= deltaTime )
    v9 = 2.0;
  this->fields.t = v9;
  if ( !texture )
    sub_1C372B4(v4);
  if ( v9 >= 1.0 )
  {
    v17 = 1.0 - (float)(v9 + -1.0);
    v18 = v17 < 0.0;
    v19 = fminf(v17, 1.0) + -1.0;
    a = this->fields.fromColor.fields.a;
    if ( v18 )
      v19 = -1.0;
    v13 = fminf(sqrtf(1.0 - (float)(v19 * v19)), 1.0);
    v14 = vadd_f32(
            *(float32x2_t *)&this->fields.fromColor.fields.r,
            vmul_n_f32(
              vsub_f32(*(float32x2_t *)&this->fields.toColor.fields.r, *(float32x2_t *)&this->fields.fromColor.fields.r),
              v13)).n64_u64[0];
    v15 = this->fields.fromColor.fields.b
        + (float)(v13 * (float)(this->fields.toColor.fields.b - this->fields.fromColor.fields.b));
    v16 = this->fields.toColor.fields.a - a;
  }
  else
  {
    v10 = 0.0;
    if ( v9 >= 0.0 )
    {
      v11 = 1.0;
      if ( v9 > 1.0 || (v11 = v9, v9 != 0.0) )
        v10 = exp2f((float)(v11 * 10.0) + -10.0);
    }
    a = this->fields.fromColor.fields.a;
    v13 = fminf(v10, 1.0);
    v14 = vadd_f32(
            *(float32x2_t *)&this->fields.fromColor.fields.r,
            vmul_n_f32(
              vsub_f32(*(float32x2_t *)&this->fields.toColor.fields.r, *(float32x2_t *)&this->fields.fromColor.fields.r),
              v13)).n64_u64[0];
    v15 = this->fields.fromColor.fields.b
        + (float)(v13 * (float)(this->fields.toColor.fields.b - this->fields.fromColor.fields.b));
    v16 = this->fields.toColor.fields.a - a;
  }
  v20 = a + (float)(v13 * v16);
  v21 = HIDWORD(v14);
  UIWidget__set_color(texture, *(UnityEngine_Color_o *)&v14, 0);
}