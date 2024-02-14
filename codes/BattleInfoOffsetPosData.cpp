// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInfoOffsetPosData___ctor(
        BattleInfoOffsetPosData_o *this,
        UnityEngine_GameObject_o *obj,
        UnityEngine_Vector3_o offset,
        const MethodInfo *method)
{
  BattleInfoOffsetPosData_o *v4; // x20
  float z; // s8
  float y; // s9
  float x; // s10

  v4 = this;
  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  this->fields.offsetZero = UnityEngine_Vector3__get_zero(0LL);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  v4->fields.obj = obj;
  v4 = (BattleInfoOffsetPosData_o *)((char *)v4 + 16);
  sub_B0D840(v4, obj);
  *(float *)&v4->monitor = x;
  *((float *)&v4->monitor + 1) = y;
  *(float *)&v4->fields.obj = z;
}


bool __fastcall BattleInfoOffsetPosData__get_IsActive(BattleInfoOffsetPosData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *obj; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4211807 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211807 = 1;
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(obj, 0LL, 0LL) )
    return 0;
  v4 = this->fields.obj;
  if ( !v4 )
    sub_B0D97C(0LL);
  return UnityEngine_GameObject__get_activeInHierarchy(v4, 0LL);
}


UnityEngine_Vector3_o __fastcall BattleInfoOffsetPosData__get_Offset(
        BattleInfoOffsetPosData_o *this,
        const MethodInfo *method)
{
  bool IsActive; // w0
  __int64 v4; // x8
  __int64 v5; // x10
  __int64 v6; // x9
  float v7; // s1
  float v8; // s0
  float v9; // s2
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
  v7 = *(float *)((char *)&this->klass + v5);
  v8 = *(float *)((char *)&this->klass + v4);
  v9 = *(float *)((char *)&this->klass + v6);
  result.fields.z = v9;
  result.fields.y = v7;
  result.fields.x = v8;
  return result;
}