void ProfileArrowInfoTouchComponent___ctor(ProfileArrowInfoTouchComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ProfileArrowInfoTouchComponent__OnClick(ProfileArrowInfoTouchComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void ProfileArrowInfoTouchComponent__OnDrag(
        ProfileArrowInfoTouchComponent_o *this,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  float y; // v0.s[1]

  y = delta.fields.y;
  this->fields.vec = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)delta, (float32x2_t)this->fields.vec).n64_u64[0];
}


void ProfileArrowInfoTouchComponent__OnDragEnd(ProfileArrowInfoTouchComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float x; // s10
  float y; // s11
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v7; // s8
  float v8; // s9
  float v9; // s0
  float v10; // s0
  float v11; // s1
  float v12; // s8
  float v13; // s0
  float v14; // s0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  ConnectMark_o *connectMark; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_5932677 & 1) == 0 )
  {
    sub_21FFC50(&Method_ProfileArrowInfoTouchComponent_OnDragEnd__);
    byte_5932677 = 1;
  }
  if ( !byte_593271E )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_593271E = 1;
  }
  x = this->fields.vec.fields.x;
  y = this->fields.vec.fields.y;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v7 = static_fields->upVector.fields.x;
  v8 = static_fields->upVector.fields.y;
  if ( !byte_593271F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593271F = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v9 = sqrtf((float)((float)(v7 * v7) + (float)(v8 * v8)) * (float)((float)(x * x) + (float)(y * y)));
  if ( v9 >= 1.0e-15 )
  {
    v10 = (float)((float)(v7 * x) + (float)(v8 * y)) / v9;
    v11 = 1.0;
    if ( v10 <= 1.0 )
      v11 = v10;
    if ( v10 >= -1.0 )
      v12 = v11;
    else
      v12 = -1.0;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
    v13 = acos(v12);
    v14 = v13 * 57.296;
    if ( v14 > 45.0 && v14 <= 135.0 )
    {
      v16 = Method_ProfileArrowInfoTouchComponent_OnDragEnd__;
      if ( this->fields.vec.fields.x < 0.0 )
      {
        if ( (*((_BYTE *)Method_ProfileArrowInfoTouchComponent_OnDragEnd__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_21FFC68(Method_ProfileArrowInfoTouchComponent_OnDragEnd__);
        v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 7, 0, 0);
        connectMark = this->fields.connectMark;
        if ( connectMark )
        {
          ConnectMark__BeforeServantoProfile(connectMark, 0);
          return;
        }
LABEL_32:
        sub_21FFECC(connectMark, v18);
      }
      if ( (*((_BYTE *)Method_ProfileArrowInfoTouchComponent_OnDragEnd__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_21FFC68(Method_ProfileArrowInfoTouchComponent_OnDragEnd__);
      v20 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 7, 0, 0);
      connectMark = this->fields.connectMark;
      if ( !connectMark )
        goto LABEL_32;
      ConnectMark__NextServantProfile(connectMark, 0);
    }
  }
}


void ProfileArrowInfoTouchComponent__OnDragStart(ProfileArrowInfoTouchComponent_o *this, const MethodInfo *method)
{
  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
  }
  this->fields.vec = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
}