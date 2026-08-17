void BillBoardAroundLocalAxis___ctor(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BillBoardAroundLocalAxis__SetTargetTransform(
        BillBoardAroundLocalAxis_o *this,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.targetTrans = trans;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetTrans,
    (int32_t)trans,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BillBoardAroundLocalAxis__Update(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetTrans; // x20
  const MethodInfo *v5; // x1

  if ( (byte_596FB45 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB45 = 1;
  }
  targetTrans = (UnityEngine_Object_o *)this->fields.targetTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Implicit(targetTrans, 0) )
    BillBoardAroundLocalAxis__UpdateAngles(this, v5);
}


// local variable allocation has failed, the output may be wrong!
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
  float v19; // s3 OVERLAPPED
  float v20; // s10
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s8
  float v25; // s8
  float v26; // s9
  float v27; // s10
  float v28; // s11
  float v29; // [xsp+4h] [xbp-5Ch]
  float v30; // [xsp+8h] [xbp-58h]
  float v31; // [xsp+Ch] [xbp-54h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
  v33 = UnityEngine_Transform__get_position(targetTrans, 0);
  v7 = v33.fields.x;
  v8 = v33.fields.y;
  v9 = v33.fields.z;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  localRotation = UnityEngine_Transform__get_localRotation(targetTrans, 0);
  v30 = localRotation.fields.y;
  v31 = localRotation.fields.x;
  v29 = localRotation.fields.z;
  w = localRotation.fields.w;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  v11 = x - v7;
  v12 = y - v8;
  v13 = z - v9;
  forward = UnityEngine_Transform__get_forward(targetTrans, 0);
  v34.fields.x = v11;
  v34.fields.y = v12;
  v34.fields.z = z - v9;
  v42 = UnityEngine_Quaternion__LookRotation(v34, forward, 0);
  v14 = v42.fields.x;
  v15 = v42.fields.y;
  v16 = v42.fields.z;
  v17 = v42.fields.w;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v43.fields.x = UnityEngine_Transform__get_forward(targetTrans, 0);
  v43.fields.w = v17;
  v43.fields.x = (float)(v11 * v43.fields.x) + (float)(v12 * v43.fields.y);
  v43.fields.y = v13 * v43.fields.z;
  v43.fields.z = v16;
  v18 = v43.fields.y + v43.fields.x;
  v43.fields.x = v14;
  v43.fields.y = v15;
  v35 = UnityEngine_Quaternion__Internal_ToEulerRad(v43, 0);
  v35.fields.x = v35.fields.x * 57.296;
  v35.fields.y = v35.fields.y * 57.296;
  v35.fields.z = v35.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v35, 0);
  v19 = w;
  v20 = v18 <= 0.0 ? -Positive.fields.z : Positive.fields.z;
  v21 = v31;
  v22 = v30;
  v23 = v29;
  v37 = UnityEngine_Quaternion__Internal_ToEulerRad(*(UnityEngine_Quaternion_o *)(&v19 - 3), 0);
  v37.fields.x = v37.fields.x * 57.296;
  v37.fields.y = v37.fields.y * 57.296;
  v37.fields.z = v37.fields.z * 57.296;
  v24 = COERCE_FLOAT(UnityEngine_Quaternion__Internal_MakePositive(v37, 0));
  v44.fields.x = v31;
  v44.fields.y = v30;
  v44.fields.z = v29;
  v44.fields.w = w;
  v38 = UnityEngine_Quaternion__Internal_ToEulerRad(v44, 0);
  v38.fields.x = v38.fields.x * 57.296;
  v38.fields.y = v38.fields.y * 57.296;
  v38.fields.z = v38.fields.z * 57.296;
  v39 = UnityEngine_Quaternion__Internal_MakePositive(v38, 0);
  v39.fields.x = v24 * 0.017453;
  v39.fields.y = v39.fields.y * 0.017453;
  v39.fields.z = v20 * 0.017453;
  v45 = UnityEngine_Quaternion__Internal_FromEulerRad(v39, 0);
  v25 = v45.fields.x;
  v26 = v45.fields.y;
  v27 = v45.fields.z;
  v28 = v45.fields.w;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !targetTrans )
LABEL_11:
    sub_2213CDC(targetTrans, method);
  v46.fields.x = v25;
  v46.fields.y = v26;
  v46.fields.z = v27;
  v46.fields.w = v28;
  UnityEngine_Transform__set_localRotation(targetTrans, v46, 0);
}