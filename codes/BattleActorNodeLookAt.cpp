void BattleActorNodeLookAt___ctor(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  this->fields.speed = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleActorNodeLookAt__Awake(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.selfTransform = transform;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selfTransform,
    (int32_t)transform,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorNodeLookAt__LateUpdate(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  UnityEngine_Transform_o *v4; // x20
  unsigned __int64 v5; // d0 OVERLAPPED
  float v6; // s2
  int v7; // s1
  UnityEngine_Transform_o *selfTransform; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *lookTargetObj; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v14; // x1
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float w; // s11
  float deltaTime; // s0
  float v26; // s0
  float v27; // s1
  float v28; // s12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_5973114 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973114 = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
  {
    lookTargetObj = (UnityEngine_Object_o *)this->fields.lookTargetObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(lookTargetObj, 0, 0) )
    {
      selfTransform = this->fields.lookTargetObj;
      if ( !selfTransform )
        goto LABEL_25;
      position = UnityEngine_Transform__get_position(selfTransform, 0);
      selfTransform = this->fields.selfTransform;
      if ( !selfTransform )
        goto LABEL_25;
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v30 = UnityEngine_Transform__get_position(selfTransform, 0);
      v15 = v30.fields.x;
      v16 = v30.fields.y;
      v17 = v30.fields.z;
      if ( !byte_5969AE2 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE2 = 1;
      }
      v18 = x - v15;
      v19 = y - v16;
      v20 = z - v17;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v14);
      if ( sqrtf((float)(v20 * v20) + (float)((float)(v18 * v18) + (float)(v19 * v19))) > 0.001 )
      {
        v31.fields.x = v18;
        v31.fields.y = v19;
        v31.fields.z = v20;
        v33 = UnityEngine_Quaternion__LookRotation_83371248(v31, 0);
        v21 = v33.fields.x;
        v22 = v33.fields.y;
        v23 = v33.fields.z;
        w = v33.fields.w;
        deltaTime = UnityEngine_Time__get_deltaTime(0);
        v4 = this->fields.selfTransform;
        if ( v4 )
        {
          v26 = deltaTime * this->fields.speed;
          v27 = 1.0;
          if ( v26 <= 1.0 )
            v27 = v26;
          if ( v26 >= 0.0 )
            v28 = v27;
          else
            v28 = 0.0;
          rotation = UnityEngine_Transform__get_rotation(this->fields.selfTransform, 0);
          v35.fields.x = v21;
          v35.fields.y = v22;
          v35.fields.z = v23;
          v35.fields.w = w;
          v32 = UnityEngine_Quaternion__Slerp(rotation, v35, v28, 0);
          goto LABEL_6;
        }
LABEL_25:
        sub_2213CDC(selfTransform, v9);
      }
    }
  }
  else if ( !type )
  {
    v4 = this->fields.selfTransform;
    v5 = vmul_f32(*(float32x2_t *)&this->fields.lookWorldVec.fields.x, vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
    v6 = this->fields.lookWorldVec.fields.z * 0.017453;
    v7 = HIDWORD(v5);
    v32 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v5, 0);
    if ( v4 )
    {
LABEL_6:
      UnityEngine_Transform__set_rotation(v4, v32, 0);
      return;
    }
    goto LABEL_25;
  }
}