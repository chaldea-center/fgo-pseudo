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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selfTransform, (int32_t)transform, v4, v5);
}


void BattleActorNodeLookAt__LateUpdate(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  float v4; // s0
  float v5; // s1
  float v6; // s3
  struct UnityEngine_Transform_o *v7; // x19
  UnityEngine_Transform_o *selfTransform; // x0
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Object_o *lookTargetObj; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v14; // s11
  float v15; // s12
  float v16; // s13
  float v17; // s11
  float v18; // s9
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float w; // s11
  float deltaTime; // s0
  struct UnityEngine_Transform_o *v24; // x20
  float v25; // s0
  float v26; // s1
  float v27; // s12
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C45662 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45662 = 1;
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
      v30 = UnityEngine_Transform__get_position(selfTransform, 0);
      v14 = v30.fields.x;
      v15 = v30.fields.y;
      v16 = v30.fields.z;
      if ( !byte_4C3C923 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3C923 = 1;
      }
      v17 = x - v14;
      v18 = y - v15;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( sqrtf((float)((float)(z - v16) * (float)(z - v16)) + (float)((float)(v17 * v17) + (float)(v18 * v18))) > 0.001 )
      {
        v31.fields.x = v17;
        v31.fields.y = v18;
        v31.fields.z = z - v16;
        v33 = UnityEngine_Quaternion__LookRotation_71205596(v31, 0);
        v19 = v33.fields.x;
        v20 = v33.fields.y;
        v21 = v33.fields.z;
        w = v33.fields.w;
        deltaTime = UnityEngine_Time__get_deltaTime(0);
        v24 = this->fields.selfTransform;
        if ( v24 )
        {
          v25 = deltaTime * this->fields.speed;
          v26 = fminf(v25, 1.0);
          if ( v25 < 0.0 )
            v27 = 0.0;
          else
            v27 = v26;
          rotation = UnityEngine_Transform__get_rotation(this->fields.selfTransform, 0);
          v35.fields.x = v19;
          v35.fields.y = v20;
          v35.fields.z = v21;
          v35.fields.w = w;
          v32 = UnityEngine_Quaternion__Slerp(rotation, v35, v27, 0);
          v9 = v24;
          goto LABEL_7;
        }
LABEL_24:
        sub_1C372B4(selfTransform);
      }
    }
  }
  else if ( !type )
  {
    v4 = this->fields.lookWorldVec.fields.x;
    v5 = this->fields.lookWorldVec.fields.y;
    v6 = this->fields.lookWorldVec.fields.z;
    v7 = this->fields.selfTransform;
    v28.fields.x = v4 * 0.017453;
    v28.fields.y = v5 * 0.017453;
    v28.fields.z = v6 * 0.017453;
    v32 = UnityEngine_Quaternion__Internal_FromEulerRad(v28, 0);
    if ( v7 )
    {
      v9 = v7;
LABEL_7:
      UnityEngine_Transform__set_rotation(v9, v32, 0);
      return;
    }
    goto LABEL_24;
  }
}