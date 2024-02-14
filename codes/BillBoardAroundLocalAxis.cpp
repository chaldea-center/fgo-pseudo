void __fastcall BillBoardAroundLocalAxis___ctor(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BillBoardAroundLocalAxis__SetTargetTransform(
        BillBoardAroundLocalAxis_o *this,
        UnityEngine_Transform_o *trans,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.targetTrans = trans;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetTrans,
    (System_Int32_array **)trans,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BillBoardAroundLocalAxis__Update(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetTrans; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4214096 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214096 = 1;
  }
  targetTrans = (UnityEngine_Object_o *)this->fields.targetTrans;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(targetTrans, 0LL) )
    BillBoardAroundLocalAxis__UpdateAngles(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BillBoardAroundLocalAxis__UpdateAngles(BillBoardAroundLocalAxis_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *targetTrans; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v7; // s11
  float v8; // s12
  float v9; // s13
  float v10; // s11
  float v11; // s9
  float v12; // s8
  float v13; // s8
  int v14; // s1
  float v15; // s2
  float v17; // s0
  float v18; // s8
  float v19; // s9
  UnityEngine_Quaternion_o v20; // [xsp+0h] [xbp-60h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v26; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  *(_QWORD *)&v20.fields.x = 0LL;
  *(_QWORD *)&v20.fields.z = 0LL;
  targetTrans = this->fields.targetTrans;
  if ( !targetTrans )
    goto LABEL_11;
  position = UnityEngine_Transform__get_position(targetTrans, 0LL);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !targetTrans )
    goto LABEL_11;
  v23 = UnityEngine_Transform__get_position(targetTrans, 0LL);
  v7 = v23.fields.x;
  v8 = v23.fields.y;
  v9 = v23.fields.z;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !targetTrans )
    goto LABEL_11;
  localRotation = UnityEngine_Transform__get_localRotation(targetTrans, 0LL);
  methoda.methodPointer = *(Il2CppMethodPointer *)&localRotation.fields.x;
  methoda.invoker_method = *(void **)&localRotation.fields.z;
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !targetTrans )
    goto LABEL_11;
  v10 = x - v7;
  v11 = y - v8;
  v12 = z - v9;
  forward = UnityEngine_Transform__get_forward(targetTrans, 0LL);
  v24.fields.x = v10;
  v24.fields.y = v11;
  v24.fields.z = z - v9;
  v20 = UnityEngine_Quaternion__LookRotation(v24, forward, 0LL);
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !targetTrans )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v28.fields.x = UnityEngine_Transform__get_forward(targetTrans, 0LL);
  v28.fields.x = (float)(v10 * v28.fields.x) + (float)(v11 * v28.fields.y);
  v28.fields.y = v12 * v28.fields.z;
  v13 = (float)(v12 * v28.fields.z) + v28.fields.x;
  *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Quaternion__get_eulerAngles(v28, (const MethodInfo *)&v20);
  v18 = v13 <= 0.0 ? -v15 : v15;
  v17 = -v15;
  *(UnityEngine_Vector3_o *)&v29.fields.x = UnityEngine_Quaternion__get_eulerAngles(
                                              *(UnityEngine_Quaternion_o *)(&v14 - 1),
                                              &methoda);
  v19 = v29.fields.x;
  *(UnityEngine_Vector3_o *)&v30.fields.x = UnityEngine_Quaternion__get_eulerAngles(v29, &methoda);
  v30.fields.x = v19;
  v30.fields.z = v18;
  UnityEngine_Quaternion__set_eulerAngles(v30, v26, (const MethodInfo *)&v20);
  targetTrans = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !targetTrans )
LABEL_11:
    sub_B0D97C(targetTrans);
  UnityEngine_Transform__set_localRotation(targetTrans, v20, 0LL);
}