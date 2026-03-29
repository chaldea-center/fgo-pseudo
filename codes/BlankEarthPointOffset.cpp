void BlankEarthPointOffset___ctor(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
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
  float v10; // s0
  float v11; // s1
  float v12; // s0
  float v13; // s2
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o lossyScale; // 0:kr14_12.12
  UnityEngine_Vector3_o v16; // 0:kr20_12.12
  UnityEngine_Vector3_o v17; // 0:kr40_12.12
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D09C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D09C = 1;
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
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !targetTransform )
        goto LABEL_20;
      lossyScale = UnityEngine_Transform__get_lossyScale(targetTransform, 0);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v18.fields.y = position.fields.y + (float)(y * lossyScale.fields.y);
      v18.fields.x = position.fields.x + (float)(x * lossyScale.fields.x);
      v18.fields.z = position.fields.z + (float)(z * lossyScale.fields.z);
      v16 = UnityEngine_Camera__WorldToScreenPoint_71924480((UnityEngine_Camera_o *)targetTransform, v18, 0);
      targetTransform = this->fields.earthTransform;
      if ( !targetTransform )
        goto LABEL_20;
      v13 = UnityEngine_Transform__get_position(targetTransform, 0).fields.z;
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v10 = vabds_f32(position.fields.z + (float)(z * lossyScale.fields.z), v13) / this->fields.distance;
      v11 = fminf(v10, 1.0);
      v12 = v10 < this->fields.minDistanceRate ? this->fields.minDistanceRate : v11;
      v19.fields.z = v16.fields.z * v12;
      v19.fields.x = v16.fields.x;
      v19.fields.y = v16.fields.y;
      v17 = UnityEngine_Camera__ScreenToWorldPoint_71924504((UnityEngine_Camera_o *)targetTransform, v19, 0);
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !targetTransform )
LABEL_20:
        sub_1C93D2C(targetTransform, v5);
      UnityEngine_Transform__set_position(targetTransform, v17, 0);
    }
  }
}


void BlankEarthPointOffset__SetEarthObject(
        BlankEarthPointOffset_o *this,
        UnityEngine_Transform_o *earthObject,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.earthTransform = earthObject;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.earthTransform,
    (int32_t)earthObject,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BlankEarthPointOffset__SetTargetCamera(
        BlankEarthPointOffset_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.currentCamera = targetCamera;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentCamera,
    (int32_t)targetCamera,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}