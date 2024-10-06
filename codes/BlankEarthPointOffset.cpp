void __fastcall BlankEarthPointOffset___ctor(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A6A9C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minDistanceRate = 0x3F6666663F59999ALL;
  *(_QWORD *)&this->fields.offset.fields.x = v4;
  this->fields.offset.fields.z = z;
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
  float x; // s11
  float y; // s12
  float z; // s13
  float v10; // s8
  float v11; // s9
  float v12; // s10
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s10
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s8
  float v21; // s9
  float v22; // s11
  float v23; // s2
  float v24; // s0
  float v25; // s1
  float v26; // s0
  float v27; // s8
  float v28; // s9
  float v29; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A6C9A9 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6C9A9 = 1;
  }
  currentCamera = (UnityEngine_Object_o *)this->fields.currentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(currentCamera, 0LL, 0LL) )
  {
    earthTransform = (UnityEngine_Object_o *)this->fields.earthTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(earthTransform, 0LL, 0LL) )
    {
      targetTransform = this->fields.targetTransform;
      if ( !targetTransform )
        goto LABEL_20;
      position = UnityEngine_Transform__get_position(targetTransform, 0LL);
      x = this->fields.offset.fields.x;
      y = this->fields.offset.fields.y;
      z = this->fields.offset.fields.z;
      v10 = position.fields.x;
      v11 = position.fields.y;
      v12 = position.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
        goto LABEL_20;
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_lossyScale(targetTransform, 0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v16 = v12 + (float)(z * v15);
      v31.fields.y = v11 + (float)(y * v14);
      v31.fields.x = v10 + (float)(x * v13);
      v31.fields.z = v16;
      *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Camera__WorldToScreenPoint_69345732(
                                         (UnityEngine_Camera_o *)targetTransform,
                                         v31,
                                         0LL);
      targetTransform = this->fields.earthTransform;
      if ( !targetTransform )
        goto LABEL_20;
      v20 = v17;
      v21 = v18;
      v22 = v19;
      *(UnityEngine_Vector3_o *)(&v23 - 2) = UnityEngine_Transform__get_position(targetTransform, 0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v24 = vabds_f32(v16, v23) / this->fields.distance;
      v25 = fminf(v24, 1.0);
      v26 = v24 < this->fields.minDistanceRate ? this->fields.minDistanceRate : v25;
      v32.fields.z = v22 * v26;
      v32.fields.x = v20;
      v32.fields.y = v21;
      v33 = UnityEngine_Camera__ScreenToWorldPoint_69345756((UnityEngine_Camera_o *)targetTransform, v32, 0LL);
      v27 = v33.fields.x;
      v28 = v33.fields.y;
      v29 = v33.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
LABEL_20:
        sub_1B9026C(targetTransform, v5);
      v34.fields.x = v27;
      v34.fields.y = v28;
      v34.fields.z = v29;
      UnityEngine_Transform__set_position(targetTransform, v34, 0LL);
    }
  }
}


void __fastcall BlankEarthPointOffset__SetEarthObject(
        BlankEarthPointOffset_o *this,
        UnityEngine_Transform_o *earthObject,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.earthTransform = earthObject;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.earthTransform,
    (int32_t)earthObject,
    (int32_t)method,
    v3);
}


void __fastcall BlankEarthPointOffset__SetTargetCamera(
        BlankEarthPointOffset_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.currentCamera = targetCamera;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.currentCamera,
    (int32_t)targetCamera,
    (int32_t)method,
    v3);
}