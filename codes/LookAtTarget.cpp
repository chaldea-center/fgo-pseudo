void LookAtTarget___ctor(LookAtTarget_o *this, const MethodInfo *method)
{
  this->fields.speed = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void LookAtTarget__LateUpdate(LookAtTarget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_Transform_o *mTrans; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *v7; // x20
  float speed; // s8
  float v9; // s0
  float v10; // s1
  bool v11; // nf
  float v13; // s16
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v15; // 0:kr14_12.12
  UnityEngine_Quaternion_o v16; // 0:kr20_16.16
  UnityEngine_Quaternion_o rotation; // 0:kr30_16.16
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
    v15 = UnityEngine_Transform__get_position(mTrans, 0);
    if ( !byte_5969AE2 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE2 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    if ( sqrtf(
           (float)((float)(position.fields.z - v15.fields.z) * (float)(position.fields.z - v15.fields.z))
         + (float)((float)((float)(position.fields.x - v15.fields.x) * (float)(position.fields.x - v15.fields.x))
                 + (float)((float)(position.fields.y - v15.fields.y) * (float)(position.fields.y - v15.fields.y)))) > 0.001 )
    {
      v18.fields.x = position.fields.x - v15.fields.x;
      v18.fields.y = position.fields.y - v15.fields.y;
      v18.fields.z = position.fields.z - v15.fields.z;
      v16 = UnityEngine_Quaternion__LookRotation_83371248(v18, 0);
      v7 = this->fields.mTrans;
      if ( v7 )
      {
        rotation = UnityEngine_Transform__get_rotation(v7, 0);
        speed = this->fields.speed;
        v9 = speed * UnityEngine_Time__get_deltaTime(0);
        v10 = 1.0;
        v19.fields.w = rotation.fields.w;
        if ( v9 <= 1.0 )
          v10 = v9;
        v11 = v9 < 0.0;
        v19.fields.x = rotation.fields.x;
        if ( v11 )
          v13 = 0.0;
        else
          v13 = v10;
        v19.fields.y = rotation.fields.y;
        v19.fields.z = rotation.fields.z;
        v20 = UnityEngine_Quaternion__Slerp(v19, v16, v13, 0);
        UnityEngine_Transform__set_rotation(v7, v20, 0);
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