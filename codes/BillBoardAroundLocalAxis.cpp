void BillBoardAroundLocalAxis___ctor(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BillBoardAroundLocalAxis__SetTargetTransform(
        BillBoardAroundLocalAxis_o *this,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.targetTrans = trans;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetTrans,
    (int32_t)trans,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BillBoardAroundLocalAxis__Update(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetTrans; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4D2FD82 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FD82 = 1;
  }
  targetTrans = (UnityEngine_Object_o *)this->fields.targetTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(targetTrans, 0) )
    BillBoardAroundLocalAxis__UpdateAngles(this, v4);
}


void BillBoardAroundLocalAxis__UpdateAngles(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *targetTrans; // x0
  float v4; // s10
  float v5; // s8
  float z; // s2
  float v7; // s1
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v9; // 0:kr14_12.12
  UnityEngine_Vector3_o v10; // 0:kr50_12.12
  UnityEngine_Vector3_o v11; // 0:kr64_12.12
  UnityEngine_Vector3_o v12; // 0:kr84_12.12
  UnityEngine_Vector3_o v13; // 0:krA4_12.12
  UnityEngine_Quaternion_o localRotation; // 0:kr20_16.16
  UnityEngine_Quaternion_o v15; // 0:kr40_16.16
  UnityEngine_Quaternion_o v16; // 0:krC0_16.16
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s3.4,4:s4.4,8:s5.4

  targetTrans = this->fields.targetTrans;
  if ( !targetTrans )
    goto LABEL_11;
  position = UnityEngine_Transform__get_position(targetTrans, 0);
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  v9 = UnityEngine_Transform__get_position(targetTrans, 0);
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  localRotation = UnityEngine_Transform__get_localRotation(targetTrans, 0);
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  forward = UnityEngine_Transform__get_forward(targetTrans, 0);
  v17.fields.x = position.fields.x - v9.fields.x;
  v17.fields.y = position.fields.y - v9.fields.y;
  v17.fields.z = position.fields.z - v9.fields.z;
  v15 = UnityEngine_Quaternion__LookRotation(v17, forward, 0);
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  v10 = UnityEngine_Transform__get_forward(targetTrans, 0);
  v11 = UnityEngine_Quaternion__Internal_ToEulerRad(v15, 0);
  v18.fields.x = v11.fields.x * 57.296;
  v18.fields.y = v11.fields.y * 57.296;
  v18.fields.z = v11.fields.z * 57.296;
  z = UnityEngine_Quaternion__Internal_MakePositive(v18, 0).fields.z;
  v4 = (float)((float)((float)(position.fields.z - v9.fields.z) * v10.fields.z)
             + (float)((float)((float)(position.fields.x - v9.fields.x) * v10.fields.x)
                     + (float)((float)(position.fields.y - v9.fields.y) * v10.fields.y))) <= 0.0
     ? -z
     : z;
  v12 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0);
  v19.fields.x = v12.fields.x * 57.296;
  v19.fields.y = v12.fields.y * 57.296;
  v19.fields.z = v12.fields.z * 57.296;
  v5 = COERCE_FLOAT(UnityEngine_Quaternion__Internal_MakePositive(v19, 0));
  v13 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0);
  v20.fields.x = v13.fields.x * 57.296;
  v20.fields.y = v13.fields.y * 57.296;
  v20.fields.z = v13.fields.z * 57.296;
  v7 = COERCE_FLOAT(LODWORD(UnityEngine_Quaternion__Internal_MakePositive(v20, 0).fields.y));
  v21.fields.x = v5 * 0.017453;
  v21.fields.y = v7 * 0.017453;
  v21.fields.z = v4 * 0.017453;
  v16 = UnityEngine_Quaternion__Internal_FromEulerRad(v21, 0);
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
LABEL_11:
    sub_1C93D2C(targetTrans, method);
  UnityEngine_Transform__set_localRotation(targetTrans, v16, 0);
}