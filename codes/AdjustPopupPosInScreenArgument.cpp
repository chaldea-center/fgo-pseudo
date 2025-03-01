void __fastcall AdjustPopupPosInScreenArgument___ctor(AdjustPopupPosInScreenArgument_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  float v7; // s1

  this->fields.IsExec = 1;
  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields._WorldPos_k__BackingField.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields._WorldPos_k__BackingField.fields.z = z;
  v6 = v3->static_fields;
  v7 = v6->zeroVector.fields.z;
  *(_QWORD *)&this->fields._AdjustAfterOffset_k__BackingField.fields.x = *(_QWORD *)&v6->zeroVector.fields.x;
  this->fields._AdjustAfterOffset_k__BackingField.fields.z = v7;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdjustPopupPosInScreenArgument___ctor_45268592(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Vector3_o adjustAfterOffset,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Vector3_c *v7; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float v9; // s1
  struct UnityEngine_Vector3_StaticFields *v10; // x8
  float v11; // s1

  this->fields.IsExec = 1;
  z = adjustAfterOffset.fields.z;
  y = adjustAfterOffset.fields.y;
  x = adjustAfterOffset.fields.x;
  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
  }
  v7 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v9 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields._WorldPos_k__BackingField.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields._WorldPos_k__BackingField.fields.z = v9;
  v10 = v7->static_fields;
  v11 = v10->zeroVector.fields.z;
  *(_QWORD *)&this->fields._AdjustAfterOffset_k__BackingField.fields.x = *(_QWORD *)&v10->zeroVector.fields.x;
  this->fields._AdjustAfterOffset_k__BackingField.fields.z = v11;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._AdjustAfterOffset_k__BackingField.fields.x = x;
  this->fields._AdjustAfterOffset_k__BackingField.fields.y = y;
  this->fields._AdjustAfterOffset_k__BackingField.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
AdjustPopupPosInScreenArgument_o *__fastcall AdjustPopupPosInScreenArgument__Init(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Camera_o *camera,
        UnityEngine_Vector3_o worldPos,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10

  this->fields._Camera_k__BackingField = camera;
  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._Camera_k__BackingField,
    (int64_t)camera,
    (int64_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  this->fields._WorldPos_k__BackingField.fields.x = x;
  this->fields._WorldPos_k__BackingField.fields.y = y;
  this->fields._WorldPos_k__BackingField.fields.z = z;
  return this;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdjustPopupPosInScreenArgument__UpdateTargetWorldPos(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Vector3_o currentWorldPos,
        const MethodInfo *method)
{
  this->fields._WorldPos_k__BackingField = currentWorldPos;
}


UnityEngine_Vector3_o __fastcall AdjustPopupPosInScreenArgument__get_AdjustAfterOffset(
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


UnityEngine_Camera_o *__fastcall AdjustPopupPosInScreenArgument__get_Camera(
        AdjustPopupPosInScreenArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._Camera_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall AdjustPopupPosInScreenArgument__get_ViewPos(
        AdjustPopupPosInScreenArgument_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Camera_k__BackingField; // x20
  __int64 v4; // x1
  UnityEngine_Camera_o *v5; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C00733 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00733 = 1;
  }
  Camera_k__BackingField = (UnityEngine_Object_o *)this->fields._Camera_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Camera_k__BackingField, 0LL, 0LL) )
  {
    v5 = this->fields._Camera_k__BackingField;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    *(UnityEngine_Vector3_o *)&x = UnityEngine_Camera__WorldToViewportPoint_70795700(
                                     v5,
                                     this->fields._WorldPos_k__BackingField,
                                     0LL);
  }
  else
  {
    if ( !byte_4BF7D91 )
    {
      sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v4);
      byte_4BF7D91 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o __fastcall AdjustPopupPosInScreenArgument__get_WorldPos(
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


void __fastcall AdjustPopupPosInScreenArgument__set_Camera(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Camera_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Camera_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._Camera_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdjustPopupPosInScreenArgument__set_WorldPos(
        AdjustPopupPosInScreenArgument_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._WorldPos_k__BackingField = value;
}