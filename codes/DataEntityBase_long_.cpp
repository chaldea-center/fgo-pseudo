void __fastcall DataEntityBase_long____ctor(DataEntityBase_long__o *this, const MethodInfo_24E3FD4 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase_long___get_PrimaryKey(
        DataEntityBase_long__o *this,
        const MethodInfo_24E3F94 *method)
{
  __int64 v3; // [xsp+8h] [xbp-8h] BYREF

  v3 = 0LL;
  if ( !this )
    sub_B2C434(0LL, method);
  v3 = ((__int64 (__fastcall *)(DataEntityBase_long__o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  return System_Int64__ToString((int64_t)&v3, 0LL);
}