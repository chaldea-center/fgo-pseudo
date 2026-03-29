void SimpleTreasureDeviceData___ctor(
        SimpleTreasureDeviceData_o this,
        int32_t treasureDeviceId,
        int32_t treasureDeviceLv,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.id = treasureDeviceId;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = treasureDeviceLv;
}


bool SimpleTreasureDeviceData__Equals(SimpleTreasureDeviceData_o this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v3; // x3
  _QWORD *v6; // x0
  bool result; // w0

  if ( (byte_4D333A7 & 1) == 0 )
  {
    sub_1C93AD4(&SimpleTreasureDeviceData_TypeInfo);
    byte_4D333A7 = 1;
  }
  result = obj
        && (SimpleTreasureDeviceData_c *)obj->klass == SimpleTreasureDeviceData_TypeInfo
        && (v6 = (_QWORD *)j_il2cpp_object_unbox_0(obj, obj, method, v3), *(_DWORD *)this.fields.id == (unsigned int)*v6)
        && *(_DWORD *)(*(_QWORD *)&this + 4LL) == HIDWORD(*v6);
  return result;
}


bool SimpleTreasureDeviceData__Equals_46710580(
        SimpleTreasureDeviceData_o this,
        SimpleTreasureDeviceData_o toCompare,
        const MethodInfo *method)
{
  return *(_DWORD *)this.fields.id == toCompare.fields.id && *(_DWORD *)(*(_QWORD *)&this + 4LL) == toCompare.fields.lv;
}


int32_t SimpleTreasureDeviceData__GetHashCode(SimpleTreasureDeviceData_o this, const MethodInfo *method)
{
  System_Tuple_T1__T2__o *int__int; // x0
  __int64 v4; // x1

  if ( (byte_4D333A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Tuple_Create_int__int___);
    byte_4D333A8 = 1;
  }
  int__int = System_Tuple__Create_int__int_(
               *(_DWORD *)this.fields.id,
               *(_DWORD *)(*(_QWORD *)&this + 4LL),
               (const MethodInfo_327633C *)Method_System_Tuple_Create_int__int___);
  if ( !int__int )
    sub_1C93D2C(0, v4);
  return ((int32_t (__fastcall *)(System_Tuple_T1__T2__o *, const MethodInfo *))int__int->klass->vtable._2_GetHashCode.methodPtr)(
           int__int,
           int__int->klass->vtable._2_GetHashCode.method);
}