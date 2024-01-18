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
  UnityEngine_Vector2_o v3; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o up; // kr00_8
  struct UnityEngine_Vector2_o vec; // x8
  float v8; // s8
  float sqrMagnitude; // s9
  float v10; // s0
  float v11; // s8
  float v12; // s0
  float v13; // s0
  __int64 v14; // x1
  ConnectMark_o *connectMark; // x0
  struct UnityEngine_Vector2_o v16; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector2_o v17; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4

  if ( (byte_4187A55 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187A55 = 1;
  }
  up = UnityEngine_Vector2__get_up(0LL);
  y = up.fields.y;
  x = up.fields.x;
  vec = this->fields.vec;
  v17 = up;
  v16 = vec;
  if ( !byte_4186C20 )
  {
    sub_B2C35C(&System_Math_TypeInfo, v3);
    byte_4186C20 = 1;
  }
  v18.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&x, (const MethodInfo *)&v17);
  v8 = v18.fields.x;
  sqrMagnitude = UnityEngine_Vector2__get_sqrMagnitude(v18, (const MethodInfo *)&v16);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = sqrtf(v8 * sqrMagnitude);
  if ( v10 >= 1.0e-15 )
  {
    v11 = UnityEngine_Mathf__Clamp(
            (float)((float)(v17.fields.x * v16.fields.x) + (float)(v17.fields.y * v16.fields.y)) / v10,
            -1.0,
            1.0,
            0LL);
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v12 = acos(v11);
    v13 = v12 * 57.296;
    if ( v13 > 45.0 && v13 <= 135.0 )
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
        sub_B2C434(connectMark, v14);
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