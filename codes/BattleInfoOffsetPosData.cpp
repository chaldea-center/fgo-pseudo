// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInfoOffsetPosData___ctor(
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
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, obj);
    byte_49B5361 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.offsetZero.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.offsetZero.fields.z = v10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.obj = obj;
  p_fields = &this->fields;
  sub_1B4CF34((CGThumbnailListItem_o *)p_fields, (int32_t)obj, v12, v13);
  p_fields->offset.fields.x = x;
  p_fields->offset.fields.y = y;
  p_fields->offset.fields.z = z;
}


bool __fastcall BattleInfoOffsetPosData__get_IsActive(BattleInfoOffsetPosData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *obj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_49BD4C5 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BD4C5 = 1;
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(obj, 0LL, 0LL) )
    return 0;
  v5 = this->fields.obj;
  if ( !v5 )
    sub_1B4D1EC(0LL, v4);
  return UnityEngine_GameObject__get_activeInHierarchy(v5, 0LL);
}


UnityEngine_Vector3_o __fastcall BattleInfoOffsetPosData__get_Offset(
        BattleInfoOffsetPosData_o *this,
        const MethodInfo *method)
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
  v4 = 36LL;
  v5 = 40LL;
  if ( IsActive )
    v4 = 24LL;
  v6 = 44LL;
  if ( IsActive )
    v5 = 28LL;
  if ( IsActive )
    v6 = 32LL;
  v7 = *(float *)((char *)&this->klass + v6);
  v8 = *(float *)((char *)&this->klass + v5);
  v9 = *(float *)((char *)&this->klass + v4);
  result.fields.z = v7;
  result.fields.y = v8;
  result.fields.x = v9;
  return result;
}