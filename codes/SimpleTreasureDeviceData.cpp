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
  _QWORD *v5; // x0
  bool result; // w0

  if ( (byte_4186D4F & 1) == 0 )
  {
    sub_B2C35C(&SimpleTreasureDeviceData_TypeInfo, obj);
    byte_4186D4F = 1;
  }
  result = obj
        && (SimpleTreasureDeviceData_c *)obj->klass == SimpleTreasureDeviceData_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(obj), *(_DWORD *)this.fields.id == (unsigned int)*v5)
        && *(_DWORD *)(*(_QWORD *)&this + 4LL) == HIDWORD(*v5);
  return result;
}


bool __fastcall SimpleTreasureDeviceData__Equals_23762672(
        SimpleTreasureDeviceData_o this,
        SimpleTreasureDeviceData_o toCompare,
        const MethodInfo *method)
{
  return *(_DWORD *)this.fields.id == toCompare.fields.id && *(_DWORD *)(*(_QWORD *)&this + 4LL) == toCompare.fields.lv;
}


int32_t __fastcall SimpleTreasureDeviceData__GetHashCode(SimpleTreasureDeviceData_o this, const MethodInfo *method)
{
  System_Tuple_T1__T2__o *int__int; // x0
  __int64 v4; // x1

  if ( (byte_4186D50 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Tuple_Create_int__int___, method);
    byte_4186D50 = 1;
  }
  int__int = System_Tuple__Create_int__int_(
               *(_DWORD *)this.fields.id,
               *(_DWORD *)(*(_QWORD *)&this + 4LL),
               (const MethodInfo_20A0D80 *)Method_System_Tuple_Create_int__int___);
  if ( !int__int )
    sub_B2C434(0LL, v4);
  return ((__int64 (__fastcall *)(System_Tuple_T1__T2__o *, Il2CppMethodPointer))int__int->klass->vtable._2_GetHashCode.method)(
           int__int,
           int__int->klass->vtable._3_ToString.methodPtr);
}