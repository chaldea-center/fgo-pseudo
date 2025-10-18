void DataEntityBase_long____ctor(DataEntityBase_long__o *this, const MethodInfo_339EC04 *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0);
}


System_String_o *DataEntityBase_long___get_PrimaryKey(DataEntityBase_long__o *this, const MethodInfo_339EBC4 *method)
{
  __int64 v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = ((__int64 (__fastcall *)(DataEntityBase_long__o *, void *))this->klass[1]._1.image)(
         this,
         this->klass[1]._1.gc_desc);
  return System_Int64__ToString(
           (int64_t)&v4,
           (const MethodInfo *)method->klass->rgctx_data[1]._0_DataEntityBase_PKType_);
}