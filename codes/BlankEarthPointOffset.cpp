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
  __int64 v5; // x1
  UnityEngine_Transform_o *targetTransform; // x0
  float y; // s11
  float x; // s12
  float z; // s13
  float v10; // s8
  float v11; // s9
  float v12; // s10
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s1
  float v17; // s11
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s0
  float v25; // s8
  float v26; // s9
  float v27; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187637 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187637 = 1;
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
      v10 = position.fields.x;
      v11 = position.fields.y;
      v12 = position.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_lossyScale(targetTransform, 0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_19;
      v16 = y * v14;
      v17 = v12 + (float)(z * v15);
      v29.fields.x = v10 + (float)(x * v13);
      v29.fields.y = v11 + v16;
      v29.fields.z = v17;
      *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__WorldToScreenPoint_40630716(
                                         (UnityEngine_Camera_o *)targetTransform,
                                         v29,
                                         0LL);
      targetTransform = this->fields.earthTransform;
      if ( !targetTransform )
        goto LABEL_19;
      v21 = v18;
      v22 = v19;
      v23 = v20;
      v30 = UnityEngine_Transform__get_position(targetTransform, 0LL);
      v24 = UnityEngine_Mathf__Clamp(
              vabds_f32(v17, v30.fields.z) / this->fields.distance,
              this->fields.minDistanceRate,
              1.0,
              0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_19;
      v31.fields.z = v23 * v24;
      v31.fields.x = v21;
      v31.fields.y = v22;
      v32 = UnityEngine_Camera__ScreenToWorldPoint_40630740((UnityEngine_Camera_o *)targetTransform, v31, 0LL);
      v25 = v32.fields.x;
      v26 = v32.fields.y;
      v27 = v32.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
LABEL_19:
        sub_B2C434(targetTransform, v5);
      v33.fields.x = v25;
      v33.fields.y = v26;
      v33.fields.z = v27;
      UnityEngine_Transform__set_position(targetTransform, v33, 0LL);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentCamera,
    (System_Int32_array **)targetCamera,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}