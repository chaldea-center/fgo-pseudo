void DataEntityBase_int____ctor(DataEntityBase_int__o *this, const MethodInfo_339EBBC *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0);
}


System_String_o *DataEntityBase_int___get_PrimaryKey(DataEntityBase_int__o *this, const MethodInfo_339EB7C *method)
{
  int v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = ((__int64 (__fastcall *)(DataEntityBase_int__o *, void *))this->klass[1]._1.image)(
         this,
         this->klass[1]._1.gc_desc);
  return System_Int32__ToString(
           (int32_t)&v4,
           (const MethodInfo *)method->klass->rgctx_data[1]._0_DataEntityBase_PKType_);
}