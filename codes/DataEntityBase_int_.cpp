void DataEntityBase_int____ctor(DataEntityBase_int__o *this, const MethodInfo_3F0E518 *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0);
}


System_String_o *DataEntityBase_int___get_PrimaryKey(DataEntityBase_int__o *this, const MethodInfo_3F0E4D8 *method)
{
  DataEntityBase_int__c *klass; // x8
  int v4; // w0
  DataEntityBase_PKType__c *v5; // x8
  int v7; // [xsp+Ch] [xbp-14h] BYREF

  klass = this->klass;
  v7 = 0;
  v4 = ((__int64 (__fastcall *)(DataEntityBase_int__o *, void *))klass[1]._1.image)(this, klass[1]._1.gc_desc);
  v5 = method->klass;
  v7 = v4;
  return System_Int32__ToString((int32_t)&v7, (const MethodInfo *)v5->rgctx_data[1]._0_DataEntityBase_PKType_);
}