void __fastcall GachaDetailMaster___ctor(GachaDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A700EA & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__, method);
    byte_4A700EA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    188,
    (const MethodInfo_312C568 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A700EB & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaID);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&GachaDetailEntity_TypeInfo, v6);
    byte_4A700EB = 1;
  }
  result = (GachaDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (GachaDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (GachaDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)result,
                                        v10,
                                        (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(GachaDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (GachaDetailEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaDetailEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.gachaId == gachaID )
        return result;
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_14:
    sub_1B9026C(result, *(_QWORD *)&gachaID);
  }
  return 0LL;
}