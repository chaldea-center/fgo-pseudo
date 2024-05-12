void __fastcall SimpleSkillData___ctor(
        SimpleSkillData_o this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.id = skillId;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = skillLv;
}


bool __fastcall SimpleSkillData__Equals(SimpleSkillData_o this, Il2CppObject *obj, const MethodInfo *method)
{
  _QWORD *v5; // x0
  bool result; // w0

  if ( (byte_438C037 & 1) == 0 )
  {
    sub_B775C4(&SimpleSkillData_TypeInfo);
    byte_438C037 = 1;
  }
  result = obj
        && (SimpleSkillData_c *)obj->klass == SimpleSkillData_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(obj), *(_DWORD *)this.fields.id == (unsigned int)*v5)
        && *(_DWORD *)(*(_QWORD *)&this + 4LL) == HIDWORD(*v5);
  return result;
}


bool __fastcall SimpleSkillData__Equals_26817512(
        SimpleSkillData_o this,
        SimpleSkillData_o toCompare,
        const MethodInfo *method)
{
  return *(_DWORD *)this.fields.id == toCompare.fields.id && *(_DWORD *)(*(_QWORD *)&this + 4LL) == toCompare.fields.lv;
}


int32_t __fastcall SimpleSkillData__GetHashCode(SimpleSkillData_o this, const MethodInfo *method)
{
  System_Tuple_T1__T2__o *int__int; // x0
  __int64 v4; // x1

  if ( (byte_438C038 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Tuple_Create_int__int___);
    byte_438C038 = 1;
  }
  int__int = System_Tuple__Create_int__int_(
               *(_DWORD *)this.fields.id,
               *(_DWORD *)(*(_QWORD *)&this + 4LL),
               (const MethodInfo_1E04990 *)Method_System_Tuple_Create_int__int___);
  if ( !int__int )
    sub_B7769C(0LL, v4);
  return ((__int64 (__fastcall *)(System_Tuple_T1__T2__o *, Il2CppMethodPointer))int__int->klass->vtable._2_GetHashCode.method)(
           int__int,
           int__int->klass->vtable._3_ToString.methodPtr);
}