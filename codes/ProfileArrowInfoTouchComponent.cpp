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
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o up; // kr00_8
  struct UnityEngine_Vector2_o vec; // x8
  float v7; // s8
  float sqrMagnitude; // s9
  float v9; // s0
  float v10; // s8
  float v11; // s0
  float v12; // s0
  __int64 v13; // x1
  ConnectMark_o *connectMark; // x0
  struct UnityEngine_Vector2_o v15; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector2_o v16; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4

  if ( (byte_4351F0F & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351F0F = 1;
  }
  up = UnityEngine_Vector2__get_up(0LL);
  y = up.fields.y;
  x = up.fields.x;
  vec = this->fields.vec;
  v16 = up;
  v15 = vec;
  if ( !byte_4350A3B )
  {
    sub_B70694(&System_Math_TypeInfo);
    byte_4350A3B = 1;
  }
  v17.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&x, (const MethodInfo *)&v16);
  v7 = v17.fields.x;
  sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v17, (const MethodInfo *)&v15);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = sqrtf(v7 * sqrMagnitude);
  if ( v9 >= 1.0e-15 )
  {
    v10 = UnityEngine_Mathf__Clamp(
            (float)((float)(v16.fields.x * v15.fields.x) + (float)(v16.fields.y * v15.fields.y)) / v9,
            -1.0,
            1.0,
            0LL);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v11 = acos(v10);
    v12 = v11 * 57.296;
    if ( v12 > 45.0 && v12 <= 135.0 )
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
        sub_B7076C(connectMark, v13);
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