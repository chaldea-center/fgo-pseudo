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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *currentCamera; // x20
  UnityEngine_Object_o *earthTransform; // x20
  __int64 v7; // x1
  UnityEngine_Transform_o *targetTransform; // x0
  float y; // s11
  float x; // s12
  float z; // s13
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s1
  float v19; // s11
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s0
  float v27; // s8
  float v28; // s9
  float v29; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E85EA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E85EA = 1;
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
      v12 = position.fields.x;
      v13 = position.fields.y;
      v14 = position.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
        goto LABEL_19;
      *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_lossyScale(targetTransform, 0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_19;
      v18 = y * v16;
      v19 = v14 + (float)(z * v17);
      v31.fields.x = v12 + (float)(x * v15);
      v31.fields.y = v13 + v18;
      v31.fields.z = v19;
      *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Camera__WorldToScreenPoint_41565348(
                                         (UnityEngine_Camera_o *)targetTransform,
                                         v31,
                                         0LL);
      targetTransform = this->fields.earthTransform;
      if ( !targetTransform )
        goto LABEL_19;
      v23 = v20;
      v24 = v21;
      v25 = v22;
      v32 = UnityEngine_Transform__get_position(targetTransform, 0LL);
      v26 = UnityEngine_Mathf__Clamp(
              vabds_f32(v19, v32.fields.z) / this->fields.distance,
              this->fields.minDistanceRate,
              1.0,
              0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_19;
      v33.fields.z = v25 * v26;
      v33.fields.x = v23;
      v33.fields.y = v24;
      v34 = UnityEngine_Camera__ScreenToWorldPoint_41565372((UnityEngine_Camera_o *)targetTransform, v33, 0LL);
      v27 = v34.fields.x;
      v28 = v34.fields.y;
      v29 = v34.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
LABEL_19:
        sub_B5D69C(targetTransform, v7);
      v35.fields.x = v27;
      v35.fields.y = v28;
      v35.fields.z = v29;
      UnityEngine_Transform__set_position(targetTransform, v35, 0LL);
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
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentCamera,
    (System_Int32_array **)targetCamera,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}