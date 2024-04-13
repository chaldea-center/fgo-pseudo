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


// local variable allocation has failed, the output may be wrong!
void __fastcall ProfileArrowInfoTouchComponent__OnDragEnd(
        ProfileArrowInfoTouchComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  UnityEngine_Vector2_o v7; // x3
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o up; // kr00_8
  struct UnityEngine_Vector2_o vec; // x8
  float v12; // s8
  float sqrMagnitude; // s9
  float v14; // s0
  float v15; // s8
  float v16; // s0
  float v17; // s0
  __int64 v18; // x1
  ConnectMark_o *connectMark; // x0
  struct UnityEngine_Vector2_o v20; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector2_o v21; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4

  if ( (byte_42E87D5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87D5 = 1;
  }
  up = UnityEngine_Vector2__get_up(0LL);
  y = up.fields.y;
  x = up.fields.x;
  vec = this->fields.vec;
  v21 = up;
  v20 = vec;
  if ( !byte_42E7592 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, v5, v6, v7);
    byte_42E7592 = 1;
  }
  v22.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&x, (const MethodInfo *)&v21);
  v12 = v22.fields.x;
  sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v22, (const MethodInfo *)&v20);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = sqrtf(v12 * sqrMagnitude);
  if ( v14 >= 1.0e-15 )
  {
    v15 = UnityEngine_Mathf__Clamp(
            (float)((float)(v21.fields.x * v20.fields.x) + (float)(v21.fields.y * v20.fields.y)) / v14,
            -1.0,
            1.0,
            0LL);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = acos(v15);
    v17 = v16 * 57.296;
    if ( v17 > 45.0 && v17 <= 135.0 )
    {
      if ( this->fields.vec.fields.x < 0.0 )
      {
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(7, 0LL);
        connectMark = this->fields.connectMark;
        if ( connectMark )
        {
          ConnectMark__BeforeServantoProfile(connectMark, 0LL);
          return;
        }
LABEL_26:
        sub_B5D69C(connectMark, v18);
      }
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      connectMark = this->fields.connectMark;
      if ( !connectMark )
        goto LABEL_26;
      ConnectMark__NextServantProfile(connectMark, 0LL);
    }
  }
}


void __fastcall ProfileArrowInfoTouchComponent__OnDragStart(
        ProfileArrowInfoTouchComponent_o *this,
        const MethodInfo *method)
{
  this->fields.vec = UnityEngine_Vector2__get_zero(0LL);
}