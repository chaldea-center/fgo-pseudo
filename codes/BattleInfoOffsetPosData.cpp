void BattleInfoOffsetPosData___ctor(
        BattleInfoOffsetPosData_o *this,
        UnityEngine_GameObject_o *obj,
        UnityEngine_Vector3_o offset,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v10; // s1
  BattleInfoOffsetPosData_Fields *p_fields; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.offsetZero.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.offsetZero.fields.z = v10;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.obj = obj;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)p_fields, (int32_t)obj, v12, v13);
  p_fields->offset.fields.x = x;
  p_fields->offset.fields.y = y;
  p_fields->offset.fields.z = z;
}


bool BattleInfoOffsetPosData__get_IsActive(BattleInfoOffsetPosData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *obj; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C3A227 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A227 = 1;
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(obj, 0, 0) )
    return 0;
  v4 = this->fields.obj;
  if ( !v4 )
    sub_1C32E7C(0);
  return UnityEngine_GameObject__get_activeInHierarchy(v4, 0);
}


UnityEngine_Vector3_o BattleInfoOffsetPosData__get_Offset(BattleInfoOffsetPosData_o *this, const MethodInfo *method)
{
  bool IsActive; // w0
  __int64 v4; // x8
  __int64 v5; // x10
  __int64 v6; // x9
  float v7; // s2
  float v8; // s1
  float v9; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  IsActive = BattleInfoOffsetPosData__get_IsActive(this, method);
  v4 = 36;
  v5 = 40;
  if ( IsActive )
    v4 = 24;
  v6 = 44;
  if ( IsActive )
  {
    v5 = 28;
    v6 = 32;
  }
  v7 = *(float *)((char *)&this->klass + v6);
  v8 = *(float *)((char *)&this->klass + v5);
  v9 = *(float *)((char *)&this->klass + v4);
  result.fields.z = v7;
  result.fields.y = v8;
  result.fields.x = v9;
  return result;
}