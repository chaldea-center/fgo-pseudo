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
  UnityEngine_Transform_o *v6; // x20
  float speed; // s8
  float v8; // s0
  float v9; // s1
  bool v10; // nf
  float v11; // s0
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v13; // 0:kr14_12.12
  UnityEngine_Quaternion_o v14; // 0:kr20_16.16
  UnityEngine_Quaternion_o rotation; // 0:kr30_16.16
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v18; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4D32152 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32152 = 1;
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
    v13 = UnityEngine_Transform__get_position(mTrans, 0);
    if ( !byte_4D2A13B )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13B = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf(
           (float)((float)(position.fields.z - v13.fields.z) * (float)(position.fields.z - v13.fields.z))
         + (float)((float)((float)(position.fields.x - v13.fields.x) * (float)(position.fields.x - v13.fields.x))
                 + (float)((float)(position.fields.y - v13.fields.y) * (float)(position.fields.y - v13.fields.y)))) > 0.001 )
    {
      v16.fields.x = position.fields.x - v13.fields.x;
      v16.fields.y = position.fields.y - v13.fields.y;
      v16.fields.z = position.fields.z - v13.fields.z;
      v14 = UnityEngine_Quaternion__LookRotation_72058188(v16, 0);
      v6 = this->fields.mTrans;
      if ( v6 )
      {
        rotation = UnityEngine_Transform__get_rotation(v6, 0);
        speed = this->fields.speed;
        v8 = speed * UnityEngine_Time__get_deltaTime(0);
        v18.fields.x = v14.fields.x;
        v9 = fminf(v8, 1.0);
        v10 = v8 < 0.0;
        v11 = 0.0;
        if ( !v10 )
          v11 = v9;
        v18.fields.y = v14.fields.y;
        v18.fields.z = v14.fields.z;
        v18.fields.w = v14.fields.w;
        v17 = UnityEngine_Quaternion__Slerp(rotation, v18, v11, 0);
        UnityEngine_Transform__set_rotation(v6, v17, 0);
        return;
      }
LABEL_18:
      sub_1C93D2C(mTrans, v4);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
}