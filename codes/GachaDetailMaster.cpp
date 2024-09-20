void __fastcall GachaDetailMaster___ctor(GachaDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3DF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
    byte_4A5B3DF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    188,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int___ctor__);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B3E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&GachaDetailEntity_TypeInfo);
    byte_4A5B3E0 = 1;
  }
  result = (GachaDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      result = (GachaDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (GachaDetailEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)result,
                                        v8,
                                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_14:
    sub_1B8880C(result, *(_QWORD *)&gachaID);
  }
  return 0LL;
}