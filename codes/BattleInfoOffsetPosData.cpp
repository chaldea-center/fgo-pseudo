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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.offsetZero.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.offsetZero.fields.z = v10;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.obj = obj;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_fields, (int32_t)obj, v12, v13, v14, v15, v16, v17);
  p_fields->offset.fields.x = x;
  p_fields->offset.fields.y = y;
  p_fields->offset.fields.z = z;
}


bool BattleInfoOffsetPosData__get_IsActive(BattleInfoOffsetPosData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *obj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CF0FF2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0FF2 = 1;
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(obj, 0, 0) )
    return 0;
  v5 = this->fields.obj;
  if ( !v5 )
    sub_1C7BD40(0, v4);
  return UnityEngine_GameObject__get_activeInHierarchy(v5, 0);
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