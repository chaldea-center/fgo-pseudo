void BillBoardAroundLocalAxis___ctor(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BillBoardAroundLocalAxis__SetTargetTransform(
        BillBoardAroundLocalAxis_o *this,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetTrans = trans;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetTrans, (int32_t)trans, (int32_t)method, v3);
}


void BillBoardAroundLocalAxis__Update(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetTrans; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C36D56 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36D56 = 1;
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
  float x; // s12
  float y; // s14
  float z; // s15
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float w; // s11
  float v11; // s13
  float v12; // s14
  float v13; // s12
  float v14; // s15
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s12
  float v19; // s10
  float v20; // s8
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s11
  float rotation; // [xsp+4h] [xbp-5Ch]
  float v26; // [xsp+8h] [xbp-58h]
  float v27; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  targetTrans = this->fields.targetTrans;
  if ( !targetTrans )
    goto LABEL_11;
  position = UnityEngine_Transform__get_position(targetTrans, 0);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  v29 = UnityEngine_Transform__get_position(targetTrans, 0);
  v7 = v29.fields.x;
  v8 = v29.fields.y;
  v9 = v29.fields.z;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  localRotation = UnityEngine_Transform__get_localRotation(targetTrans, 0);
  v26 = localRotation.fields.y;
  v27 = localRotation.fields.x;
  rotation = localRotation.fields.z;
  w = localRotation.fields.w;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  v11 = x - v7;
  v12 = y - v8;
  v13 = z - v9;
  forward = UnityEngine_Transform__get_forward(targetTrans, 0);
  v30.fields.x = v11;
  v30.fields.y = v12;
  v30.fields.z = z - v9;
  v38 = UnityEngine_Quaternion__LookRotation(v30, forward, 0);
  v14 = v38.fields.x;
  v15 = v38.fields.y;
  v16 = v38.fields.z;
  v17 = v38.fields.w;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v39.fields.x = UnityEngine_Transform__get_forward(targetTrans, 0);
  v18 = (float)(v13 * v39.fields.z) + (float)((float)(v11 * v39.fields.x) + (float)(v12 * v39.fields.y));
  v39.fields.x = v14;
  v39.fields.y = v15;
  v39.fields.z = v16;
  v39.fields.w = v17;
  v31 = UnityEngine_Quaternion__Internal_ToEulerRad(v39, 0);
  v31.fields.x = v31.fields.x * 57.296;
  v31.fields.y = v31.fields.y * 57.296;
  v31.fields.z = v31.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v31, 0);
  v19 = v18 <= 0.0 ? -Positive.fields.z : Positive.fields.z;
  v40.fields.x = v27;
  v40.fields.y = v26;
  v40.fields.z = rotation;
  v40.fields.w = w;
  v33 = UnityEngine_Quaternion__Internal_ToEulerRad(v40, 0);
  v33.fields.x = v33.fields.x * 57.296;
  v33.fields.y = v33.fields.y * 57.296;
  v33.fields.z = v33.fields.z * 57.296;
  v20 = COERCE_FLOAT(UnityEngine_Quaternion__Internal_MakePositive(v33, 0));
  v41.fields.x = v27;
  v41.fields.y = v26;
  v41.fields.z = rotation;
  v41.fields.w = w;
  v34 = UnityEngine_Quaternion__Internal_ToEulerRad(v41, 0);
  v34.fields.x = v34.fields.x * 57.296;
  v34.fields.y = v34.fields.y * 57.296;
  v34.fields.z = v34.fields.z * 57.296;
  v35 = UnityEngine_Quaternion__Internal_MakePositive(v34, 0);
  v35.fields.x = v20 * 0.017453;
  v35.fields.y = v35.fields.y * 0.017453;
  v35.fields.z = v19 * 0.017453;
  v42 = UnityEngine_Quaternion__Internal_FromEulerRad(v35, 0);
  v21 = v42.fields.x;
  v22 = v42.fields.y;
  v23 = v42.fields.z;
  v24 = v42.fields.w;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
LABEL_11:
    sub_1C32E7C(targetTrans);
  v43.fields.x = v21;
  v43.fields.y = v22;
  v43.fields.z = v23;
  v43.fields.w = v24;
  UnityEngine_Transform__set_localRotation(targetTrans, v43, 0);
}