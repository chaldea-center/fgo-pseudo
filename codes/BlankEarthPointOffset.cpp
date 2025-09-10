void BlankEarthPointOffset___ctor(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minDistanceRate = 0x3F6666663F59999ALL;
  *(_QWORD *)&this->fields.offset.fields.x = v4;
  this->fields.offset.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlankEarthPointOffset__Awake(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  ;
}


void BlankEarthPointOffset__LateUpdate(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currentCamera; // x20
  UnityEngine_Object_o *earthTransform; // x20
  __int64 v5; // x1
  UnityEngine_Transform_o *targetTransform; // x0
  float x; // s11
  float y; // s12
  float z; // s13
  float v10; // s8
  float v11; // s9
  float v12; // s10
  float v13; // s10
  float v14; // s8
  float v15; // s9
  float v16; // s11
  float v17; // s0
  float v18; // s1
  float v19; // s0
  float v20; // s8
  float v21; // s9
  float v22; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23B50 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23B50 = 1;
  }
  currentCamera = (UnityEngine_Object_o *)this->fields.currentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(currentCamera, 0, 0) )
  {
    earthTransform = (UnityEngine_Object_o *)this->fields.earthTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(earthTransform, 0, 0) )
    {
      targetTransform = this->fields.targetTransform;
      if ( !targetTransform )
        goto LABEL_20;
      position = UnityEngine_Transform__get_position(targetTransform, 0);
      x = this->fields.offset.fields.x;
      y = this->fields.offset.fields.y;
      z = this->fields.offset.fields.z;
      v10 = position.fields.x;
      v11 = position.fields.y;
      v12 = position.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !targetTransform )
        goto LABEL_20;
      lossyScale = UnityEngine_Transform__get_lossyScale(targetTransform, 0);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v13 = v12 + (float)(z * lossyScale.fields.z);
      v25.fields.y = v11 + (float)(y * lossyScale.fields.y);
      v25.fields.x = v10 + (float)(x * lossyScale.fields.x);
      v25.fields.z = v13;
      v26 = UnityEngine_Camera__WorldToScreenPoint_70969972((UnityEngine_Camera_o *)targetTransform, v25, 0);
      targetTransform = this->fields.earthTransform;
      if ( !targetTransform )
        goto LABEL_20;
      v14 = v26.fields.x;
      v15 = v26.fields.y;
      v16 = v26.fields.z;
      v27 = UnityEngine_Transform__get_position(targetTransform, 0);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v17 = vabds_f32(v13, v27.fields.z) / this->fields.distance;
      v18 = fminf(v17, 1.0);
      v19 = v17 < this->fields.minDistanceRate ? this->fields.minDistanceRate : v18;
      v28.fields.z = v16 * v19;
      v28.fields.x = v14;
      v28.fields.y = v15;
      v29 = UnityEngine_Camera__ScreenToWorldPoint_70969996((UnityEngine_Camera_o *)targetTransform, v28, 0);
      v20 = v29.fields.x;
      v21 = v29.fields.y;
      v22 = v29.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !targetTransform )
LABEL_20:
        sub_1C2D6EC(targetTransform, v5);
      v30.fields.x = v20;
      v30.fields.y = v21;
      v30.fields.z = v22;
      UnityEngine_Transform__set_position(targetTransform, v30, 0);
    }
  }
}


void BlankEarthPointOffset__SetEarthObject(
        BlankEarthPointOffset_o *this,
        UnityEngine_Transform_o *earthObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.earthTransform = earthObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.earthTransform, (int32_t)earthObject, (int32_t)method, v3);
}


void BlankEarthPointOffset__SetTargetCamera(
        BlankEarthPointOffset_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.currentCamera = targetCamera;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentCamera, (int32_t)targetCamera, (int32_t)method, v3);
}