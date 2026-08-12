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


void BattleActorNodeLookAt__LateUpdate(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Object_o *lookTargetObj; // x20
  __int64 v6; // x1
  float deltaTime; // s0
  float v8; // s0
  float v9; // s1
  float v10; // s12
  UnityEngine_Transform_o *selfTransform; // x0
  __int64 v12; // x1
  UnityEngine_Vector3_o position; // 0:kr10_12.12
  UnityEngine_Vector3_o v14; // 0:kr24_12.12
  UnityEngine_Vector3_o v15; // 0:kr60_12.12
  UnityEngine_Quaternion_o v16; // 0:kr30_16.16
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
      v14 = UnityEngine_Transform__get_position(selfTransform, 0);
      if ( !byte_5969AE2 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE2 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
      if ( sqrtf(
             (float)((float)(position.fields.z - v14.fields.z) * (float)(position.fields.z - v14.fields.z))
           + (float)((float)((float)(position.fields.x - v14.fields.x) * (float)(position.fields.x - v14.fields.x))
                   + (float)((float)(position.fields.y - v14.fields.y) * (float)(position.fields.y - v14.fields.y)))) > 0.001 )
      {
        v17.fields.x = position.fields.x - v14.fields.x;
        v17.fields.y = position.fields.y - v14.fields.y;
        v17.fields.z = position.fields.z - v14.fields.z;
        v16 = UnityEngine_Quaternion__LookRotation_83371248(v17, 0);
        deltaTime = UnityEngine_Time__get_deltaTime(0);
        v4 = this->fields.selfTransform;
        if ( v4 )
        {
          v8 = deltaTime * this->fields.speed;
          v9 = 1.0;
          if ( v8 <= 1.0 )
            v9 = v8;
          if ( v8 >= 0.0 )
            v10 = v9;
          else
            v10 = 0.0;
          rotation = UnityEngine_Transform__get_rotation(this->fields.selfTransform, 0);
          v18 = UnityEngine_Quaternion__Slerp(rotation, v16, v10, 0);
          goto LABEL_6;
        }
LABEL_25:
        sub_2213CDC(selfTransform, v12);
      }
    }
  }
  else if ( !type )
  {
    v4 = this->fields.selfTransform;
    *(float32x2_t *)&v15.fields.x = vmul_f32(
                                      *(float32x2_t *)&this->fields.lookWorldVec.fields.x,
                                      vdup_n_s32(0x3C8EFA35u));
    v15.fields.z = this->fields.lookWorldVec.fields.z * 0.017453;
    v18 = UnityEngine_Quaternion__Internal_FromEulerRad(v15, 0);
    if ( v4 )
    {
LABEL_6:
      UnityEngine_Transform__set_rotation(v4, v18, 0);
      return;
    }
    goto LABEL_25;
  }
}