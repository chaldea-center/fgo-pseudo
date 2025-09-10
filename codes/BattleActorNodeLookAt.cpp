void BattleActorNodeLookAt___ctor(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  this->fields.speed = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleActorNodeLookAt__Awake(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.selfTransform = transform;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selfTransform, (int32_t)transform, v4, v5);
}


void BattleActorNodeLookAt__LateUpdate(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  float v4; // s0
  float v5; // s1
  float v6; // s3
  struct UnityEngine_Transform_o *v7; // x19
  UnityEngine_Transform_o *selfTransform; // x0
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Object_o *lookTargetObj; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s11
  float v19; // s9
  float v20; // s8
  float v21; // s9
  float v22; // s10
  float w; // s11
  float deltaTime; // s0
  struct UnityEngine_Transform_o *v25; // x20
  float v26; // s0
  float v27; // s1
  float v28; // s12
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v36; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C2988B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2988B = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
  {
    lookTargetObj = (UnityEngine_Object_o *)this->fields.lookTargetObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lookTargetObj, 0, 0) )
    {
      selfTransform = this->fields.lookTargetObj;
      if ( !selfTransform )
        goto LABEL_24;
      position = UnityEngine_Transform__get_position(selfTransform, 0);
      selfTransform = this->fields.selfTransform;
      if ( !selfTransform )
        goto LABEL_24;
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v31 = UnityEngine_Transform__get_position(selfTransform, 0);
      v15 = v31.fields.x;
      v16 = v31.fields.y;
      v17 = v31.fields.z;
      if ( !byte_4C20DA3 )
      {
        sub_1C2D490(&System_Math_TypeInfo);
        byte_4C20DA3 = 1;
      }
      v18 = x - v15;
      v19 = y - v16;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( sqrtf((float)((float)(z - v17) * (float)(z - v17)) + (float)((float)(v18 * v18) + (float)(v19 * v19))) > 0.001 )
      {
        v32.fields.x = v18;
        v32.fields.y = v19;
        v32.fields.z = z - v17;
        v34 = UnityEngine_Quaternion__LookRotation_71102548(v32, 0);
        v20 = v34.fields.x;
        v21 = v34.fields.y;
        v22 = v34.fields.z;
        w = v34.fields.w;
        deltaTime = UnityEngine_Time__get_deltaTime(0);
        v25 = this->fields.selfTransform;
        if ( v25 )
        {
          v26 = deltaTime * this->fields.speed;
          v27 = fminf(v26, 1.0);
          if ( v26 < 0.0 )
            v28 = 0.0;
          else
            v28 = v27;
          rotation = UnityEngine_Transform__get_rotation(this->fields.selfTransform, 0);
          v36.fields.x = v20;
          v36.fields.y = v21;
          v36.fields.z = v22;
          v36.fields.w = w;
          v33 = UnityEngine_Quaternion__Slerp(rotation, v36, v28, 0);
          v10 = v25;
          goto LABEL_7;
        }
LABEL_24:
        sub_1C2D6EC(selfTransform, v9);
      }
    }
  }
  else if ( !type )
  {
    v4 = this->fields.lookWorldVec.fields.x;
    v5 = this->fields.lookWorldVec.fields.y;
    v6 = this->fields.lookWorldVec.fields.z;
    v7 = this->fields.selfTransform;
    v29.fields.x = v4 * 0.017453;
    v29.fields.y = v5 * 0.017453;
    v29.fields.z = v6 * 0.017453;
    v33 = UnityEngine_Quaternion__Internal_FromEulerRad(v29, 0);
    if ( v7 )
    {
      v10 = v7;
LABEL_7:
      UnityEngine_Transform__set_rotation(v10, v33, 0);
      return;
    }
    goto LABEL_24;
  }
}