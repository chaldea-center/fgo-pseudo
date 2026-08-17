void AdjustPopupPosInScreenArgument___ctor(AdjustPopupPosInScreenArgument_o *this, const MethodInfo *method)
{
  int v3; // w8
  UnityEngine_Vector3_c *v4; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v7; // x8
  float v8; // s1

  v3 = (unsigned __int8)byte_5969AE0;
  this->fields.IsExec = 1;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v4 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields._WorldPos_k__BackingField.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields._WorldPos_k__BackingField.fields.z = z;
  v7 = v4->static_fields;
  v8 = v7->zeroVector.fields.z;
  *(_QWORD *)&this->fields._AdjustAfterOffset_k__BackingField.fields.x = *(_QWORD *)&v7->zeroVector.fields.x;
  this->fields._AdjustAfterOffset_k__BackingField.fields.z = v8;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdjustPopupPosInScreenArgument___ctor_54476628(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Vector3_o adjustAfterOffset,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  int v6; // w8
  UnityEngine_Vector3_c *v8; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v10; // s1
  struct UnityEngine_Vector3_StaticFields *v11; // x8
  float v12; // s1

  z = adjustAfterOffset.fields.z;
  y = adjustAfterOffset.fields.y;
  x = adjustAfterOffset.fields.x;
  v6 = (unsigned __int8)byte_5969AE0;
  this->fields.IsExec = 1;
  if ( !v6 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v8 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields._WorldPos_k__BackingField.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields._WorldPos_k__BackingField.fields.z = v10;
  v11 = v8->static_fields;
  v12 = v11->zeroVector.fields.z;
  *(_QWORD *)&this->fields._AdjustAfterOffset_k__BackingField.fields.x = *(_QWORD *)&v11->zeroVector.fields.x;
  this->fields._AdjustAfterOffset_k__BackingField.fields.z = v12;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._AdjustAfterOffset_k__BackingField.fields.x = x;
  this->fields._AdjustAfterOffset_k__BackingField.fields.y = y;
  this->fields._AdjustAfterOffset_k__BackingField.fields.z = z;
}


AdjustPopupPosInScreenArgument_o *AdjustPopupPosInScreenArgument__Init(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Camera_o *camera,
        UnityEngine_Vector3_o worldPos,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float z; // s8
  float y; // s9
  float x; // s10
  AdjustPopupPosInScreenArgument_o *result; // x0

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  this->fields._Camera_k__BackingField = camera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Camera_k__BackingField,
    (int32_t)camera,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  this->fields._WorldPos_k__BackingField.fields.x = x;
  this->fields._WorldPos_k__BackingField.fields.y = y;
  result = this;
  this->fields._WorldPos_k__BackingField.fields.z = z;
  return result;
}


void AdjustPopupPosInScreenArgument__UpdateTargetWorldPos(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Vector3_o currentWorldPos,
        const MethodInfo *method)
{
  this->fields._WorldPos_k__BackingField = currentWorldPos;
}


UnityEngine_Vector3_o AdjustPopupPosInScreenArgument__get_AdjustAfterOffset(
        AdjustPopupPosInScreenArgument_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields._AdjustAfterOffset_k__BackingField.fields.x;
  y = this->fields._AdjustAfterOffset_k__BackingField.fields.y;
  z = this->fields._AdjustAfterOffset_k__BackingField.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Camera_o *AdjustPopupPosInScreenArgument__get_Camera(
        AdjustPopupPosInScreenArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._Camera_k__BackingField;
}


UnityEngine_Vector3_o AdjustPopupPosInScreenArgument__get_ViewPos(
        AdjustPopupPosInScreenArgument_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Camera_k__BackingField; // x20
  __int64 v4; // x1
  UnityEngine_Camera_o *v5; // x0

  if ( (byte_5973EDC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EDC = 1;
  }
  Camera_k__BackingField = (UnityEngine_Object_o *)this->fields._Camera_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(Camera_k__BackingField, 0, 0) )
  {
    v5 = this->fields._Camera_k__BackingField;
    if ( !v5 )
      sub_2213CDC(0, v4);
    return UnityEngine_Camera__WorldToViewportPoint_83198212(v5, this->fields._WorldPos_k__BackingField, 0);
  }
  else
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    return UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  }
}


UnityEngine_Vector3_o AdjustPopupPosInScreenArgument__get_WorldPos(
        AdjustPopupPosInScreenArgument_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields._WorldPos_k__BackingField.fields.x;
  y = this->fields._WorldPos_k__BackingField.fields.y;
  z = this->fields._WorldPos_k__BackingField.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void AdjustPopupPosInScreenArgument__set_Camera(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Camera_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Camera_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Camera_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AdjustPopupPosInScreenArgument__set_WorldPos(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._WorldPos_k__BackingField = value;
}