void __fastcall ServantTreasureDeviceAddEntity___ctor(ServantTreasureDeviceAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67514 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67514 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantTreasureDeviceAddEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B67513 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4B67513 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2F577C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantTreasureDeviceAddEntity__CreatePrimaryKey(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantTreasureDeviceAddEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


int32_t __fastcall ServantTreasureDeviceAddEntity__GetCondIgnoreSealedLimitCount(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67512 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18436/*"condIgnoreSealedLimitCount"*/, method);
    byte_4B67512 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18436/*"condIgnoreSealedLimitCount"*/, 0, 0LL);
}


System_Int32_array *__fastcall ServantTreasureDeviceAddEntity__GetDispMaskTreasureDevices(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67510 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18890/*"dispMaskTreasureDevices"*/, method);
    byte_4B67510 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18890/*"dispMaskTreasureDevices"*/, 0LL, 0LL);
}


System_Int32_array *__fastcall ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67511 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_19713/*"fixedCardLimitCounts"*/, method);
    byte_4B67511 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_19713/*"fixedCardLimitCounts"*/, 0LL, 0LL);
}


bool __fastcall ServantTreasureDeviceAddEntity__IsEnable(
        ServantTreasureDeviceAddEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B6750F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B6750F = 1;
  }
  if ( !this->fields.commonReleaseId )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL);
}