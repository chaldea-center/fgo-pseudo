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
  sub_B16F98(
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

  if ( (byte_40F907F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F907F = 1;
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
  UnityEngine_Transform_o *transform; // x0
  float v8; // s11
  float v9; // s12
  float v10; // s13
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0
  float v13; // s11
  float v14; // s9
  float v15; // s8
  UnityEngine_Transform_o *v16; // x0
  float v17; // s8
  int v18; // s1
  float v19; // s2
  float v21; // s0
  float v22; // s8
  float v23; // s9
  UnityEngine_Transform_o *v24; // x0
  UnityEngine_Quaternion_o v25; // [xsp+0h] [xbp-60h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v31; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  *(_QWORD *)&v25.fields.x = 0LL;
  *(_QWORD *)&v25.fields.z = 0LL;
  targetTrans = this->fields.targetTrans;
  if ( !targetTrans )
    goto LABEL_11;
  position = UnityEngine_Transform__get_position(targetTrans, 0LL);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_11;
  v28 = UnityEngine_Transform__get_position(transform, 0LL);
  v8 = v28.fields.x;
  v9 = v28.fields.y;
  v10 = v28.fields.z;
  v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v11 )
    goto LABEL_11;
  localRotation = UnityEngine_Transform__get_localRotation(v11, 0LL);
  methoda.methodPointer = *(Il2CppMethodPointer *)&localRotation.fields.x;
  methoda.invoker_method = *(void **)&localRotation.fields.z;
  v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    goto LABEL_11;
  v13 = x - v8;
  v14 = y - v9;
  v15 = z - v10;
  forward = UnityEngine_Transform__get_forward(v12, 0LL);
  v29.fields.x = v13;
  v29.fields.y = v14;
  v29.fields.z = z - v10;
  v25 = UnityEngine_Quaternion__LookRotation(v29, forward, 0LL);
  v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v33.fields.x = UnityEngine_Transform__get_forward(v16, 0LL);
  v33.fields.x = (float)(v13 * v33.fields.x) + (float)(v14 * v33.fields.y);
  v33.fields.y = v15 * v33.fields.z;
  v17 = (float)(v15 * v33.fields.z) + v33.fields.x;
  *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Quaternion__get_eulerAngles(v33, (const MethodInfo *)&v25);
  v22 = v17 <= 0.0 ? -v19 : v19;
  v21 = -v19;
  *(UnityEngine_Vector3_o *)&v34.fields.x = UnityEngine_Quaternion__get_eulerAngles(
                                              *(UnityEngine_Quaternion_o *)(&v18 - 1),
                                              &methoda);
  v23 = v34.fields.x;
  *(UnityEngine_Vector3_o *)&v35.fields.x = UnityEngine_Quaternion__get_eulerAngles(v34, &methoda);
  v35.fields.x = v23;
  v35.fields.z = v22;
  UnityEngine_Quaternion__set_eulerAngles(v35, v31, (const MethodInfo *)&v25);
  v24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v24 )
LABEL_11:
    sub_B170D4();
  UnityEngine_Transform__set_localRotation(v24, v25, 0LL);
}