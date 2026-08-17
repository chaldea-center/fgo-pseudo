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
  _QWORD *v5; // x0
  bool result; // w0

  if ( (byte_597333B & 1) == 0 )
  {
    sub_2213A60(&SimpleTreasureDeviceData_TypeInfo);
    byte_597333B = 1;
  }
  result = obj
        && (SimpleTreasureDeviceData_c *)obj->klass == SimpleTreasureDeviceData_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(obj, obj, method), *(_DWORD *)this.fields.id == (unsigned int)*v5)
        && *(_DWORD *)(*(_QWORD *)&this + 4LL) == HIDWORD(*v5);
  return result;
}


bool SimpleTreasureDeviceData__Equals_53085860(
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

  if ( (byte_597333C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Tuple_Create_int__int___);
    byte_597333C = 1;
  }
  int__int = System_Tuple__Create_int__int_(
               *(_DWORD *)this.fields.id,
               *(_DWORD *)(*(_QWORD *)&this + 4LL),
               (const MethodInfo_39B4360 *)Method_System_Tuple_Create_int__int___);
  if ( !int__int )
    sub_2213CDC(0, v4);
  return ((__int64 (__fastcall *)(System_Tuple_T1__T2__o *, const MethodInfo *))int__int->klass->vtable._2_GetHashCode.methodPtr)(
           int__int,
           int__int->klass->vtable._2_GetHashCode.method);
}