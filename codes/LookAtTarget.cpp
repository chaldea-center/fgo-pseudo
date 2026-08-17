void LookAtTarget___ctor(LookAtTarget_o *this, const MethodInfo *method)
{
  this->fields.speed = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void LookAtTarget__LateUpdate(LookAtTarget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_Transform_o *mTrans; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v9; // x1
  float v10; // s11
  float v11; // s12
  float v12; // s13
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Transform_o *v16; // x20
  float v17; // s9
  float v18; // s10
  float w; // s11
  float speed; // s8
  float v21; // s12
  float v22; // s13
  float v23; // s14
  float v24; // s15
  float v25; // s0
  float v26; // s1
  float v27; // s3 OVERLAPPED
  float v28; // s5
  float v29; // s4 OVERLAPPED
  float v30; // s6
  float v31; // s7
  bool v32; // nf
  float v33; // s0
  float v34; // s16
  float v35; // s1
  float v36; // s2
  float b; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597206C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597206C = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    mTrans = this->fields.target;
    if ( !mTrans )
      goto LABEL_21;
    position = UnityEngine_Transform__get_position(mTrans, 0);
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_21;
    x = position.fields.x;
    y = position.fields.y;
    z = position.fields.z;
    v39 = UnityEngine_Transform__get_position(mTrans, 0);
    v10 = v39.fields.x;
    v11 = v39.fields.y;
    v12 = v39.fields.z;
    if ( !byte_5969AE2 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE2 = 1;
    }
    v13 = x - v10;
    v14 = y - v11;
    v15 = z - v12;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    if ( sqrtf((float)(v15 * v15) + (float)((float)(v13 * v13) + (float)(v14 * v14))) > 0.001 )
    {
      v40.fields.x = v13;
      v40.fields.y = v14;
      v40.fields.z = v15;
      v41 = UnityEngine_Quaternion__LookRotation_83371248(v40, 0);
      v16 = this->fields.mTrans;
      b = v41.fields.x;
      if ( v16 )
      {
        v17 = v41.fields.y;
        v18 = v41.fields.z;
        w = v41.fields.w;
        rotation = UnityEngine_Transform__get_rotation(v16, 0);
        speed = this->fields.speed;
        v21 = rotation.fields.x;
        v22 = rotation.fields.y;
        v23 = rotation.fields.z;
        v24 = rotation.fields.w;
        v25 = speed * UnityEngine_Time__get_deltaTime(0);
        v26 = 1.0;
        v27 = v24;
        v28 = v17;
        v29 = b;
        v30 = v18;
        v31 = w;
        if ( v25 <= 1.0 )
          v26 = v25;
        v32 = v25 < 0.0;
        v33 = v21;
        if ( v32 )
          v34 = 0.0;
        else
          v34 = v26;
        v35 = v22;
        v36 = v23;
        v43 = UnityEngine_Quaternion__Slerp(
                *(UnityEngine_Quaternion_o *)(&v27 - 3),
                *(UnityEngine_Quaternion_o *)&v29,
                v34,
                0);
        UnityEngine_Transform__set_rotation(v16, v43, 0);
        return;
      }
LABEL_21:
      sub_2213CDC(mTrans, v4);
    }
  }
}


void LookAtTarget__Start(LookAtTarget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
}