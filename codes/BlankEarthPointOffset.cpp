void __fastcall BlankEarthPointOffset___ctor(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
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
  UnityEngine_Transform_o *targetTransform; // x0
  float x; // s11
  float y; // s12
  float z; // s13
  float v9; // s8
  float v10; // s9
  float v11; // s10
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s10
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s8
  float v20; // s9
  float v21; // s11
  float v22; // s2
  float v23; // s0
  float v24; // s1
  float v25; // s0
  float v26; // s8
  float v27; // s9
  float v28; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8FCE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8FCE = 1;
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
      v9 = position.fields.x;
      v10 = position.fields.y;
      v11 = position.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
        goto LABEL_20;
      *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_lossyScale(targetTransform, 0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v15 = v11 + (float)(z * v14);
      v30.fields.y = v10 + (float)(y * v13);
      v30.fields.x = v9 + (float)(x * v12);
      v30.fields.z = v15;
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Camera__WorldToScreenPoint_68934028(
                                         (UnityEngine_Camera_o *)targetTransform,
                                         v30,
                                         0LL);
      targetTransform = this->fields.earthTransform;
      if ( !targetTransform )
        goto LABEL_20;
      v19 = v16;
      v20 = v17;
      v21 = v18;
      *(UnityEngine_Vector3_o *)(&v22 - 2) = UnityEngine_Transform__get_position(targetTransform, 0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v23 = vabds_f32(v15, v22) / this->fields.distance;
      v24 = fminf(v23, 1.0);
      v25 = v23 < this->fields.minDistanceRate ? this->fields.minDistanceRate : v24;
      v31.fields.z = v21 * v25;
      v31.fields.x = v19;
      v31.fields.y = v20;
      v32 = UnityEngine_Camera__ScreenToWorldPoint_68934052((UnityEngine_Camera_o *)targetTransform, v31, 0LL);
      v26 = v32.fields.x;
      v27 = v32.fields.y;
      v28 = v32.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
LABEL_20:
        sub_1B64324(targetTransform);
      v33.fields.x = v26;
      v33.fields.y = v27;
      v33.fields.z = v28;
      UnityEngine_Transform__set_position(targetTransform, v33, 0LL);
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
  sub_1B6406C(
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.currentCamera,
    (int32_t)targetCamera,
    (int32_t)method,
    v3);
}