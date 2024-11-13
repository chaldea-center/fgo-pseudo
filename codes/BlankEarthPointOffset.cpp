void __fastcall BlankEarthPointOffset___ctor(BlankEarthPointOffset_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v5; // d0
  float z; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minDistanceRate = 0x3F6666663F59999ALL;
  *(_QWORD *)&this->fields.offset.fields.x = v5;
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
  __int64 v2; // x2
  UnityEngine_Object_o *currentCamera; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *earthTransform; // x20
  __int64 v7; // x1
  UnityEngine_Transform_o *targetTransform; // x0
  float x; // s11
  float y; // s12
  float z; // s13
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s10
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s8
  float v23; // s9
  float v24; // s11
  float v25; // s2
  float v26; // s0
  float v27; // s1
  float v28; // s0
  float v29; // s8
  float v30; // s9
  float v31; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12CB2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12CB2 = 1;
  }
  currentCamera = (UnityEngine_Object_o *)this->fields.currentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(currentCamera, 0LL, 0LL) )
  {
    earthTransform = (UnityEngine_Object_o *)this->fields.earthTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Equality(earthTransform, 0LL, 0LL) )
    {
      targetTransform = this->fields.targetTransform;
      if ( !targetTransform )
        goto LABEL_20;
      position = UnityEngine_Transform__get_position(targetTransform, 0LL);
      x = this->fields.offset.fields.x;
      y = this->fields.offset.fields.y;
      z = this->fields.offset.fields.z;
      v12 = position.fields.x;
      v13 = position.fields.y;
      v14 = position.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
        goto LABEL_20;
      *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_lossyScale(targetTransform, 0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v18 = v14 + (float)(z * v17);
      v33.fields.y = v13 + (float)(y * v16);
      v33.fields.x = v12 + (float)(x * v15);
      v33.fields.z = v18;
      *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Camera__WorldToScreenPoint_69960448(
                                         (UnityEngine_Camera_o *)targetTransform,
                                         v33,
                                         0LL);
      targetTransform = this->fields.earthTransform;
      if ( !targetTransform )
        goto LABEL_20;
      v22 = v19;
      v23 = v20;
      v24 = v21;
      *(UnityEngine_Vector3_o *)(&v25 - 2) = UnityEngine_Transform__get_position(targetTransform, 0LL);
      targetTransform = (UnityEngine_Transform_o *)this->fields.currentCamera;
      if ( !targetTransform )
        goto LABEL_20;
      v26 = vabds_f32(v18, v25) / this->fields.distance;
      v27 = fminf(v26, 1.0);
      v28 = v26 < this->fields.minDistanceRate ? this->fields.minDistanceRate : v27;
      v34.fields.z = v24 * v28;
      v34.fields.x = v22;
      v34.fields.y = v23;
      v35 = UnityEngine_Camera__ScreenToWorldPoint_69960472((UnityEngine_Camera_o *)targetTransform, v34, 0LL);
      v29 = v35.fields.x;
      v30 = v35.fields.y;
      v31 = v35.fields.z;
      targetTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !targetTransform )
LABEL_20:
        sub_1BCAA3C(targetTransform, v7);
      v36.fields.x = v29;
      v36.fields.y = v30;
      v36.fields.z = v31;
      UnityEngine_Transform__set_position(targetTransform, v36, 0LL);
    }
  }
}


void __fastcall BlankEarthPointOffset__SetEarthObject(
        BlankEarthPointOffset_o *this,
        UnityEngine_Transform_o *earthObject,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.earthTransform = earthObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.earthTransform,
    (int64_t)earthObject,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.currentCamera = targetCamera;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentCamera,
    (int64_t)targetCamera,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}