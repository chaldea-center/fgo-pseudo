void BattleActorNodeLookAt___ctor(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  this->fields.speed = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleActorNodeLookAt__Awake(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.selfTransform = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selfTransform, (int32_t)transform, v4, v5, v6, v7, v8, v9);
}


void BattleActorNodeLookAt__LateUpdate(BattleActorNodeLookAt_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  float x; // s0
  float y; // s1
  float z; // s3
  struct UnityEngine_Transform_o *v7; // x19
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Object_o *lookTargetObj; // x20
  float deltaTime; // s0
  struct UnityEngine_Transform_o *v11; // x20
  float v12; // s0
  float v13; // s1
  float v14; // s12
  UnityEngine_Transform_o *selfTransform; // x0
  __int64 v16; // x1
  UnityEngine_Vector3_o position; // 0:kr10_12.12
  UnityEngine_Vector3_o v18; // 0:kr24_12.12
  UnityEngine_Quaternion_o v19; // 0:kr30_16.16
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D33004 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33004 = 1;
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
      v18 = UnityEngine_Transform__get_position(selfTransform, 0);
      if ( !byte_4D2A13B )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13B = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( sqrtf(
             (float)((float)(position.fields.z - v18.fields.z) * (float)(position.fields.z - v18.fields.z))
           + (float)((float)((float)(position.fields.x - v18.fields.x) * (float)(position.fields.x - v18.fields.x))
                   + (float)((float)(position.fields.y - v18.fields.y) * (float)(position.fields.y - v18.fields.y)))) > 0.001 )
      {
        v21.fields.x = position.fields.x - v18.fields.x;
        v21.fields.y = position.fields.y - v18.fields.y;
        v21.fields.z = position.fields.z - v18.fields.z;
        v19 = UnityEngine_Quaternion__LookRotation_72058188(v21, 0);
        deltaTime = UnityEngine_Time__get_deltaTime(0);
        v11 = this->fields.selfTransform;
        if ( v11 )
        {
          v12 = deltaTime * this->fields.speed;
          v13 = fminf(v12, 1.0);
          if ( v12 < 0.0 )
            v14 = 0.0;
          else
            v14 = v13;
          rotation = UnityEngine_Transform__get_rotation(this->fields.selfTransform, 0);
          v22 = UnityEngine_Quaternion__Slerp(rotation, v19, v14, 0);
          v8 = v11;
          goto LABEL_7;
        }
LABEL_24:
        sub_1C93D2C(selfTransform, v16);
      }
    }
  }
  else if ( !type )
  {
    x = this->fields.lookWorldVec.fields.x;
    y = this->fields.lookWorldVec.fields.y;
    z = this->fields.lookWorldVec.fields.z;
    v7 = this->fields.selfTransform;
    v20.fields.x = x * 0.017453;
    v20.fields.y = y * 0.017453;
    v20.fields.z = z * 0.017453;
    v22 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0);
    if ( v7 )
    {
      v8 = v7;
LABEL_7:
      UnityEngine_Transform__set_rotation(v8, v22, 0);
      return;
    }
    goto LABEL_24;
  }
}