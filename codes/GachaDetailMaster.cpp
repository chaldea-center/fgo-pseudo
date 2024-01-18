void __fastcall GachaDetailMaster___ctor(GachaDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AFDC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__, method);
    byte_418AFDC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    186,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaDetailEntity_o *__fastcall GachaDetailMaster__GetGachaDetailEntity(
        GachaDetailMaster_o *this,
        int32_t gachaID,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  GachaDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  __int64 v11; // x10

  if ( (byte_418AFDD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&GachaDetailEntity_TypeInfo, v6);
    byte_418AFDD = 1;
  }
  result = (GachaDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (GachaDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (GachaDetailEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                        v10,
                                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v11 = *(&GachaDetailEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (GachaDetailEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] != GachaDetailEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.gachaId == gachaID )
        return result;
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_14:
    sub_B2C434(result, *(_QWORD *)&gachaID);
  }
  return 0LL;
}