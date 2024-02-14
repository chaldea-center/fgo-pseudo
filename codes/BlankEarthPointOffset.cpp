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
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s1
  float v16; // s11
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s8
  float v21; // s9
  float v22; // s10
  float v23; // s0
  float v24; // s8
  float v25; // s9
  float v26; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42140FA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42140FA = 1;
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
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_lossyScale(targetTransform, 0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_19;
      v15 = y * v13;
      v16 = v11 + (float)(z * v14);
      v28.fields.x = v9 + (float)(x * v12);
      v28.fields.y = v10 + v15;
      v28.fields.z = v16;
      *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Camera__WorldToScreenPoint_40755056(
                                         (UnityEngine_Camera_o *)targetTransform,
                                         v28,
                                         0LL);
      targetTransform = this->fields.earthTransform;
      if ( !targetTransform )
        goto LABEL_19;
      v20 = v17;
      v21 = v18;
      v22 = v19;
      v29 = UnityEngine_Transform__get_position(targetTransform, 0LL);
      v23 = UnityEngine_Mathf__Clamp(
              vabds_f32(v16, v29.fields.z) / this->fields.distance,
              this->fields.minDistanceRate,
              1.0,
              0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_19;
      v30.fields.z = v22 * v23;
      v30.fields.x = v20;
      v30.fields.y = v21;
      v31 = UnityEngine_Camera__ScreenToWorldPoint_40755080((UnityEngine_Camera_o *)targetTransform, v30, 0LL);
      v24 = v31.fields.x;
      v25 = v31.fields.y;
      v26 = v31.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
LABEL_19:
        sub_B0D97C(targetTransform);
      v32.fields.x = v24;
      v32.fields.y = v25;
      v32.fields.z = v26;
      UnityEngine_Transform__set_position(targetTransform, v32, 0LL);
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
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentCamera,
    (System_Int32_array **)targetCamera,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}