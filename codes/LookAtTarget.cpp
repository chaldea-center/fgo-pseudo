void LookAtTarget___ctor(LookAtTarget_o *this, const MethodInfo *method)
{
  this->fields.speed = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void LookAtTarget__LateUpdate(LookAtTarget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  UnityEngine_Transform_o *mTrans; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v8; // s11
  float v9; // s12
  float v10; // s13
  float v11; // s11
  float v12; // s9
  UnityEngine_Transform_o *v13; // x20
  float v14; // s9
  float v15; // s10
  float w; // s11
  float speed; // s8
  float v18; // s12
  float v19; // s13
  float v20; // s14
  float v21; // s15
  float v22; // s0
  float v23; // s4 OVERLAPPED
  float v24; // s1
  bool v25; // nf
  float v26; // s0
  float v27; // s5
  float v28; // s6
  float v29; // s7
  float v30; // [xsp+0h] [xbp-70h]
  float b; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C39166 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39166 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    mTrans = this->fields.target;
    if ( !mTrans )
      goto LABEL_18;
    position = UnityEngine_Transform__get_position(mTrans, 0);
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_18;
    x = position.fields.x;
    y = position.fields.y;
    z = position.fields.z;
    v33 = UnityEngine_Transform__get_position(mTrans, 0);
    v8 = v33.fields.x;
    v9 = v33.fields.y;
    v10 = v33.fields.z;
    if ( !byte_4C313D3 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C313D3 = 1;
    }
    v11 = x - v8;
    v12 = y - v9;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)((float)(z - v10) * (float)(z - v10)) + (float)((float)(v11 * v11) + (float)(v12 * v12))) > 0.001 )
    {
      v34.fields.x = v11;
      v34.fields.y = v12;
      v34.fields.z = z - v10;
      v35 = UnityEngine_Quaternion__LookRotation_71162484(v34, 0);
      v13 = this->fields.mTrans;
      b = v35.fields.x;
      if ( v13 )
      {
        v14 = v35.fields.y;
        v15 = v35.fields.z;
        w = v35.fields.w;
        rotation = UnityEngine_Transform__get_rotation(v13, 0);
        speed = this->fields.speed;
        v18 = rotation.fields.x;
        v19 = rotation.fields.y;
        v20 = rotation.fields.z;
        v21 = rotation.fields.w;
        v22 = speed * UnityEngine_Time__get_deltaTime(0);
        v23 = b;
        v24 = fminf(v22, 1.0);
        v25 = v22 < 0.0;
        v26 = 0.0;
        if ( !v25 )
          v26 = v24;
        v30 = v26;
        v37.fields.x = v18;
        v37.fields.y = v19;
        v37.fields.z = v20;
        v37.fields.w = v21;
        v27 = v14;
        v28 = v15;
        v29 = w;
        v38 = UnityEngine_Quaternion__Slerp(v37, *(UnityEngine_Quaternion_o *)&v23, v30, 0);
        UnityEngine_Transform__set_rotation(v13, v38, 0);
        return;
      }
LABEL_18:
      sub_1C32E7C(mTrans);
    }
  }
}


void LookAtTarget__Start(LookAtTarget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
}