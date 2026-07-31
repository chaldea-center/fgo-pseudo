void PartialMaintenanceEntity___ctor(PartialMaintenanceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C97 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938C97 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t PartialMaintenanceEntity__CreatePrimaryKey(PartialMaintenanceEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


// local variable allocation has failed, the output may be wrong!
bool PartialMaintenanceEntity__isMaintenanceNow(
        PartialMaintenanceEntity_o *this,
        int32_t mainteType,
        const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_5938C96 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938C96 = 1;
  }
  if ( this->fields.type != mainteType )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&mainteType);
  Time = NetworkManager__getTime(0);
  return Time >= this->fields.startedAt && Time <= this->fields.endedAt;
}