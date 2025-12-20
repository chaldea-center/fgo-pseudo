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
  float v9; // s11
  float v10; // s12
  float v11; // s13
  float v12; // s11
  float v13; // s9
  UnityEngine_Transform_o *v14; // x20
  float v15; // s9
  float v16; // s10
  float w; // s11
  float speed; // s8
  float v19; // s12
  float v20; // s13
  float v21; // s14
  float v22; // s15
  float v23; // s0
  float v24; // s4 OVERLAPPED
  float v25; // s1
  bool v26; // nf
  float v27; // s0
  float v28; // s5
  float v29; // s6
  float v30; // s7
  float v31; // [xsp+0h] [xbp-70h]
  float b; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2E061 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E061 = 1;
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
    v34 = UnityEngine_Transform__get_position(mTrans, 0);
    v9 = v34.fields.x;
    v10 = v34.fields.y;
    v11 = v34.fields.z;
    if ( !byte_4D25F1B )
    {
      sub_1C94098(&System_Math_TypeInfo);
      byte_4D25F1B = 1;
    }
    v12 = x - v9;
    v13 = y - v10;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)((float)(z - v11) * (float)(z - v11)) + (float)((float)(v12 * v12) + (float)(v13 * v13))) > 0.001 )
    {
      v35.fields.x = v12;
      v35.fields.y = v13;
      v35.fields.z = z - v11;
      v36 = UnityEngine_Quaternion__LookRotation_72049252(v35, 0);
      v14 = this->fields.mTrans;
      b = v36.fields.x;
      if ( v14 )
      {
        v15 = v36.fields.y;
        v16 = v36.fields.z;
        w = v36.fields.w;
        rotation = UnityEngine_Transform__get_rotation(v14, 0);
        speed = this->fields.speed;
        v19 = rotation.fields.x;
        v20 = rotation.fields.y;
        v21 = rotation.fields.z;
        v22 = rotation.fields.w;
        v23 = speed * UnityEngine_Time__get_deltaTime(0);
        v24 = b;
        v25 = fminf(v23, 1.0);
        v26 = v23 < 0.0;
        v27 = 0.0;
        if ( !v26 )
          v27 = v25;
        v31 = v27;
        v38.fields.x = v19;
        v38.fields.y = v20;
        v38.fields.z = v21;
        v38.fields.w = v22;
        v28 = v15;
        v29 = v16;
        v30 = w;
        v39 = UnityEngine_Quaternion__Slerp(v38, *(UnityEngine_Quaternion_o *)&v24, v31, 0);
        UnityEngine_Transform__set_rotation(v14, v39, 0);
        return;
      }
LABEL_18:
      sub_1C942F0(mTrans, v4);
    }
  }
}


void LookAtTarget__Start(LookAtTarget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
}