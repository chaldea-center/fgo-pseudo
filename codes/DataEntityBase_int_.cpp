void __fastcall DataEntityBase_int____ctor(DataEntityBase_int__o *this, const MethodInfo_2669A80 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase_int___get_PrimaryKey(
        DataEntityBase_int__o *this,
        const MethodInfo_2669A40 *method)
{
  int v3; // [xsp+Ch] [xbp-4h] BYREF

  v3 = 0;
  if ( !this )
    sub_B0D97C(0LL);
  v3 = ((__int64 (__fastcall *)(DataEntityBase_int__o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  return System_Int32__ToString((int32_t)&v3, 0LL);
}