void __fastcall ProfileArrowInfoTouchComponent___ctor(ProfileArrowInfoTouchComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ProfileArrowInfoTouchComponent__OnClick(
        ProfileArrowInfoTouchComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProfileArrowInfoTouchComponent__OnDrag(
        ProfileArrowInfoTouchComponent_o *this,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  float y; // v0.s[1]

  y = delta.fields.y;
  this->fields.vec = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)delta, (float32x2_t)this->fields.vec).n64_u64[0];
}


void __fastcall ProfileArrowInfoTouchComponent__OnDragEnd(
        ProfileArrowInfoTouchComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float y; // s10
  float x; // s11
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v7; // s8
  float v8; // s9
  float v9; // s0
  float v10; // s0
  float v11; // s1
  float v12; // s8
  float v13; // s0
  float v14; // s0
  float v15; // s8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  ConnectMark_o *connectMark; // x0

  if ( (byte_4B19D1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ProfileArrowInfoTouchComponent_OnDragEnd__, method, v2);
    byte_4B19D1D = 1;
  }
  if ( !byte_4B19D3F )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, method, v2);
    byte_4B19D3F = 1;
  }
  x = this->fields.vec.fields.x;
  y = this->fields.vec.fields.y;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v8 = static_fields->upVector.fields.x;
  v7 = static_fields->upVector.fields.y;
  if ( !byte_4B137F1 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B137F1 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v9 = sqrtf((float)((float)(v8 * v8) + (float)(v7 * v7)) * (float)((float)(x * x) + (float)(y * y)));
  if ( v9 >= 1.0e-15 )
  {
    v10 = (float)((float)(v8 * x) + (float)(v7 * y)) / v9;
    v11 = fminf(v10, 1.0);
    if ( v10 < -1.0 )
      v12 = -1.0;
    else
      v12 = v11;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    v13 = acos(v12);
    v14 = v13 * 57.296;
    if ( v14 > 45.0 && v14 <= 135.0 )
    {
      v15 = this->fields.vec.fields.x;
      v16 = Method_ProfileArrowInfoTouchComponent_OnDragEnd__;
      if ( (*((_BYTE *)Method_ProfileArrowInfoTouchComponent_OnDragEnd__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1BCA7F8(Method_ProfileArrowInfoTouchComponent_OnDragEnd__);
      v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 7, 0LL);
      connectMark = this->fields.connectMark;
      if ( !connectMark )
        sub_1BCAA3C(0LL, v18);
      if ( v15 >= 0.0 )
        ConnectMark__NextServantProfile(connectMark, 0LL);
      else
        ConnectMark__BeforeServantoProfile(connectMark, 0LL);
    }
  }
}


void __fastcall ProfileArrowInfoTouchComponent__OnDragStart(
        ProfileArrowInfoTouchComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, method, v2);
    byte_4B108BA = 1;
  }
  this->fields.vec = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
}