void SimpleSkillData___ctor(SimpleSkillData_o this, int32_t skillId, int32_t skillLv, const MethodInfo *method)
{
  *(_DWORD *)this.fields.id = skillId;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = skillLv;
}


bool SimpleSkillData__Equals(SimpleSkillData_o this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v3; // x3
  _QWORD *v6; // x0
  bool result; // w0

  if ( (byte_4C29B0A & 1) == 0 )
  {
    sub_1C2D490(&SimpleSkillData_TypeInfo);
    byte_4C29B0A = 1;
  }
  result = obj
        && (SimpleSkillData_c *)obj->klass == SimpleSkillData_TypeInfo
        && (v6 = (_QWORD *)j_il2cpp_object_unbox_0(obj, obj, method, v3), *(_DWORD *)this.fields.id == (unsigned int)*v6)
        && *(_DWORD *)(*(_QWORD *)&this + 4LL) == HIDWORD(*v6);
  return result;
}


bool SimpleSkillData__Equals_45611624(SimpleSkillData_o this, SimpleSkillData_o toCompare, const MethodInfo *method)
{
  return *(_DWORD *)this.fields.id == toCompare.fields.id && *(_DWORD *)(*(_QWORD *)&this + 4LL) == toCompare.fields.lv;
}


int32_t SimpleSkillData__GetHashCode(SimpleSkillData_o this, const MethodInfo *method)
{
  System_Tuple_T1__T2__o *int__int; // x0
  __int64 v4; // x1

  if ( (byte_4C29B0B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Tuple_Create_int__int___);
    byte_4C29B0B = 1;
  }
  int__int = System_Tuple__Create_int__int_(
               *(_DWORD *)this.fields.id,
               *(_DWORD *)(*(_QWORD *)&this + 4LL),
               (const MethodInfo_31861F8 *)Method_System_Tuple_Create_int__int___);
  if ( !int__int )
    sub_1C2D6EC(0, v4);
  return ((__int64 (__fastcall *)(System_Tuple_T1__T2__o *, const MethodInfo *))int__int->klass->vtable._2_GetHashCode.methodPtr)(
           int__int,
           int__int->klass->vtable._2_GetHashCode.method);
}