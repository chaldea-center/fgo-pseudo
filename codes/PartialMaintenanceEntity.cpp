void __fastcall PartialMaintenanceEntity___ctor(PartialMaintenanceEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16614 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16614 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4B16613 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&mainteType, method);
    byte_4B16613 = 1;
  }
  if ( this->fields.type != mainteType )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&mainteType);
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