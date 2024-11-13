void __fastcall SimpleTreasureDeviceData___ctor(
        SimpleTreasureDeviceData_o this,
        int32_t treasureDeviceId,
        int32_t treasureDeviceLv,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.id = treasureDeviceId;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = treasureDeviceLv;
}


bool __fastcall SimpleTreasureDeviceData__Equals(
        SimpleTreasureDeviceData_o this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _QWORD *v6; // x0
  bool result; // w0

  if ( (byte_4B186DC & 1) == 0 )
  {
    sub_1BCA7E0(&SimpleTreasureDeviceData_TypeInfo, obj, method);
    byte_4B186DC = 1;
  }
  result = obj
        && (SimpleTreasureDeviceData_c *)obj->klass == SimpleTreasureDeviceData_TypeInfo
        && (v6 = (_QWORD *)j_il2cpp_object_unbox_0(obj, obj, method, v3), *(_DWORD *)this.fields.id == (unsigned int)*v6)
        && *(_DWORD *)(*(_QWORD *)&this + 4LL) == HIDWORD(*v6);
  return result;
}


bool __fastcall SimpleTreasureDeviceData__Equals_43414092(
        SimpleTreasureDeviceData_o this,
        SimpleTreasureDeviceData_o toCompare,
        const MethodInfo *method)
{
  return *(_DWORD *)this.fields.id == toCompare.fields.id && *(_DWORD *)(*(_QWORD *)&this + 4LL) == toCompare.fields.lv;
}


int32_t __fastcall SimpleTreasureDeviceData__GetHashCode(SimpleTreasureDeviceData_o this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Tuple_T1__T2__o *int__int; // x0
  __int64 v5; // x1

  if ( (byte_4B186DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Tuple_Create_int__int___, method, v2);
    byte_4B186DD = 1;
  }
  int__int = System_Tuple__Create_int__int_(
               *(_DWORD *)this.fields.id,
               *(_DWORD *)(*(_QWORD *)&this + 4LL),
               (const MethodInfo_2FC26CC *)Method_System_Tuple_Create_int__int___);
  if ( !int__int )
    sub_1BCAA3C(0LL, v5);
  return ((__int64 (__fastcall *)(System_Tuple_T1__T2__o *, Il2CppMethodPointer))int__int->klass->vtable._2_GetHashCode.method)(
           int__int,
           int__int->klass->vtable._3_ToString.methodPtr);
}