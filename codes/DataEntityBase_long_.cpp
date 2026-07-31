void DataEntityBase_long____ctor(DataEntityBase_long__o *this, const MethodInfo_3EDADB8 *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0);
}


System_String_o *DataEntityBase_long___get_PrimaryKey(DataEntityBase_long__o *this, const MethodInfo_3EDAD78 *method)
{
  DataEntityBase_long__c *klass; // x8
  __int64 v4; // x0
  DataEntityBase_PKType__c *v5; // x8
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  klass = this->klass;
  v7 = 0;
  v4 = ((__int64 (__fastcall *)(DataEntityBase_long__o *, void *))klass[1]._1.image)(this, klass[1]._1.gc_desc);
  v5 = method->klass;
  v7 = v4;
  return System_Int64__ToString((int64_t)&v7, (const MethodInfo *)v5->rgctx_data[1]._0_DataEntityBase_PKType_);
}