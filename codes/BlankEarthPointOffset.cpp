void __fastcall BlankEarthPointOffset___ctor(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  this->fields.offset = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&this->fields.minDistanceRate = 0x3F6666663F59999ALL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthPointOffset__Awake(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPointOffset__LateUpdate(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currentCamera; // x20
  UnityEngine_Object_o *earthTransform; // x20
  UnityEngine_Transform_o *targetTransform; // x0
  float y; // s11
  float x; // s12
  float z; // s13
  float v9; // s8
  float v10; // s9
  float v11; // s10
  UnityEngine_Transform_o *transform; // x0
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Camera_o *v16; // x0
  float v17; // s1
  float v18; // s11
  float v19; // s0
  float v20; // s1
  float v21; // s2
  UnityEngine_Transform_o *v22; // x0
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s0
  UnityEngine_Camera_o *v27; // x0
  float v28; // s8
  float v29; // s9
  float v30; // s10
  UnityEngine_Transform_o *v31; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F90E3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F90E3 = 1;
  }
  currentCamera = (UnityEngine_Object_o *)this->fields.currentCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(currentCamera, 0LL, 0LL) )
  {
    earthTransform = (UnityEngine_Object_o *)this->fields.earthTransform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(earthTransform, 0LL, 0LL) )
    {
      targetTransform = this->fields.targetTransform;
      if ( !targetTransform )
        goto LABEL_19;
      position = UnityEngine_Transform__get_position(targetTransform, 0LL);
      x = this->fields.offset.fields.x;
      y = this->fields.offset.fields.y;
      z = this->fields.offset.fields.z;
      v9 = position.fields.x;
      v10 = position.fields.y;
      v11 = position.fields.z;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
      v16 = this->fields.currentCamera;
      if ( !v16 )
        goto LABEL_19;
      v17 = y * v14;
      v18 = v11 + (float)(z * v15);
      v33.fields.x = v9 + (float)(x * v13);
      v33.fields.y = v10 + v17;
      v33.fields.z = v18;
      *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Camera__WorldToScreenPoint_40663544(v16, v33, 0LL);
      v22 = this->fields.earthTransform;
      if ( !v22 )
        goto LABEL_19;
      v23 = v19;
      v24 = v20;
      v25 = v21;
      v34 = UnityEngine_Transform__get_position(v22, 0LL);
      v26 = UnityEngine_Mathf__Clamp(
              vabds_f32(v18, v34.fields.z) / this->fields.distance,
              this->fields.minDistanceRate,
              1.0,
              0LL);
      v27 = this->fields.currentCamera;
      if ( !v27 )
        goto LABEL_19;
      v35.fields.z = v25 * v26;
      v35.fields.x = v23;
      v35.fields.y = v24;
      v36 = UnityEngine_Camera__ScreenToWorldPoint_40663568(v27, v35, 0LL);
      v28 = v36.fields.x;
      v29 = v36.fields.y;
      v30 = v36.fields.z;
      v31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v31 )
LABEL_19:
        sub_B170D4();
      v37.fields.x = v28;
      v37.fields.y = v29;
      v37.fields.z = v30;
      UnityEngine_Transform__set_position(v31, v37, 0LL);
    }
  }
}


void __fastcall BlankEarthPointOffset__SetEarthObject(
        BlankEarthPointOffset_o *this,
        UnityEngine_Transform_o *earthObject,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.earthTransform = earthObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.earthTransform,
    (System_Int32_array **)earthObject,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BlankEarthPointOffset__SetTargetCamera(
        BlankEarthPointOffset_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.currentCamera = targetCamera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentCamera,
    (System_Int32_array **)targetCamera,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}