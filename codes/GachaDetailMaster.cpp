void __fastcall GachaDetailMaster___ctor(GachaDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438F14D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
    byte_438F14D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    187,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaDetailEntity_o *__fastcall GachaDetailMaster__GetGachaDetailEntity(
        GachaDetailMaster_o *this,
        int32_t gachaID,
        const MethodInfo *method)
{
  GachaDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_438F14E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&GachaDetailEntity_TypeInfo);
    byte_438F14E = 1;
  }
  result = (GachaDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      result = (GachaDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (GachaDetailEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                        v8,
                                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v9 = *(&GachaDetailEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (GachaDetailEntity_c *)result->klass->_2.typeHierarchy[v9 - 1] != GachaDetailEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.gachaId == gachaID )
        return result;
      if ( ++v8 >= v7 )
        return 0LL;
    }
LABEL_14:
    sub_B7769C(result, *(_QWORD *)&gachaID);
  }
  return 0LL;
}