void __fastcall DataEntityBase_int____ctor(DataEntityBase_int__o *this, const MethodInfo_32598E4 *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase_int___get_PrimaryKey(
        DataEntityBase_int__o *this,
        const MethodInfo_32598A4 *method)
{
  int v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = ((__int64 (__fastcall *)(DataEntityBase_int__o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  return System_Int32__ToString(
           (int32_t)&v4,
           (const MethodInfo *)method->klass->rgctx_data[1]._0_DataEntityBase_PKType_);
}