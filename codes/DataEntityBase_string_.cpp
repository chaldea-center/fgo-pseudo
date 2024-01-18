void __fastcall DataEntityBase_string____ctor(DataEntityBase_string__o *this, const MethodInfo_24E401C *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase_string___get_PrimaryKey(
        DataEntityBase_string__o *this,
        const MethodInfo_24E3FEC *method)
{
  if ( !this
    || (this = (DataEntityBase_string__o *)((__int64 (__fastcall *)(DataEntityBase_string__o *, const char *))this->klass[1]._1.gc_desc)(
                                             this,
                                             this->klass[1]._1.name)) == 0LL )
  {
    sub_B2C434(this, method);
  }
  return (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_string__o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                              this,
                              this->klass->vtable._4_get_PrimaryKey.methodPtr);
}