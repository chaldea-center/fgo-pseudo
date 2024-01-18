void __fastcall DataEntityBase_int____ctor(DataEntityBase_int__o *this, const MethodInfo_24E3F7C *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase_int___get_PrimaryKey(
        DataEntityBase_int__o *this,
        const MethodInfo_24E3F3C *method)
{
  int v3; // [xsp+Ch] [xbp-4h] BYREF

  v3 = 0;
  if ( !this )
    sub_B2C434(0LL, method);
  v3 = ((__int64 (__fastcall *)(DataEntityBase_int__o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  return System_Int32__ToString((int32_t)&v3, 0LL);
}