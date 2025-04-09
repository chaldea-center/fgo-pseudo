void __fastcall PartialMaintenanceEntity___ctor(PartialMaintenanceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB2D7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BB2D7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall PartialMaintenanceEntity__CreatePrimaryKey(
        PartialMaintenanceEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.type;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartialMaintenanceEntity__isMaintenanceNow(
        PartialMaintenanceEntity_o *this,
        int32_t mainteType,
        const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_49BB2D6 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, *(_QWORD *)&mainteType);
    byte_49BB2D6 = 1;
  }
  if ( this->fields.type != mainteType )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return Time >= this->fields.startedAt && Time <= this->fields.endedAt;
}


bool __fastcall PartialMaintenanceEntity__isPartialMaintenanceType(
        PartialMaintenanceEntity_o *this,
        int32_t mainteType,
        const MethodInfo *method)
{
  return this->fields.type == mainteType;
}