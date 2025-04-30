void __fastcall DataEntityBase_long____ctor(DataEntityBase_long__o *this, const MethodInfo_3211DE4 *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase_long___get_PrimaryKey(
        DataEntityBase_long__o *this,
        const MethodInfo_3211DA4 *method)
{
  __int64 v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = ((__int64 (__fastcall *)(DataEntityBase_long__o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  return System_Int64__ToString(
           (int64_t)&v4,
           (const MethodInfo *)method->klass->rgctx_data[1]._0_DataEntityBase_PKType_);
}