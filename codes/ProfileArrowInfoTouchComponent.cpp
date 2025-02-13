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
  float y; // s10
  float x; // s11
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v6; // s8
  float v7; // s9
  float v8; // s0
  float v9; // s0
  float v10; // s1
  float v11; // s8
  float v12; // s0
  float v13; // s0
  float v14; // s8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  ConnectMark_o *connectMark; // x0

  if ( (byte_4BD71AD & 1) == 0 )
  {
    sub_1C21E38(&Method_ProfileArrowInfoTouchComponent_OnDragEnd__);
    byte_4BD71AD = 1;
  }
  if ( !byte_4BD7261 )
  {
    sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
    byte_4BD7261 = 1;
  }
  x = this->fields.vec.fields.x;
  y = this->fields.vec.fields.y;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v7 = static_fields->upVector.fields.x;
  v6 = static_fields->upVector.fields.y;
  if ( !byte_4BD7262 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7262 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = sqrtf((float)((float)(v7 * v7) + (float)(v6 * v6)) * (float)((float)(x * x) + (float)(y * y)));
  if ( v8 >= 1.0e-15 )
  {
    v9 = (float)((float)(v7 * x) + (float)(v6 * y)) / v8;
    v10 = fminf(v9, 1.0);
    if ( v9 < -1.0 )
      v11 = -1.0;
    else
      v11 = v10;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = acos(v11);
    v13 = v12 * 57.296;
    if ( v13 > 45.0 && v13 <= 135.0 )
    {
      v14 = this->fields.vec.fields.x;
      v15 = Method_ProfileArrowInfoTouchComponent_OnDragEnd__;
      if ( (*((_BYTE *)Method_ProfileArrowInfoTouchComponent_OnDragEnd__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C21E50();
      v16 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 7, 0, 0LL);
      connectMark = this->fields.connectMark;
      if ( !connectMark )
        sub_1C22094(0LL, v17);
      if ( v14 >= 0.0 )
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
  if ( !byte_4BD6AAA )
  {
    sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
    byte_4BD6AAA = 1;
  }
  this->fields.vec = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
}