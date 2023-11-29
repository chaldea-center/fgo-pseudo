void __fastcall DataEntityBase_string____ctor(DataEntityBase_string__o *this, const MethodInfo_266F2D4 *method)
{
  if ( !this )
    sub_B170D4();
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase_string___get_PrimaryKey(
        DataEntityBase_string__o *this,
        const MethodInfo_266F2A4 *method)
{
  __int64 v2; // x0

  if ( !this
    || (v2 = ((__int64 (__fastcall *)(DataEntityBase_string__o *, const char *))this->klass[1]._1.gc_desc)(
               this,
               this->klass[1]._1.name)) == 0 )
  {
    sub_B170D4();
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 360LL))(
                              v2,
                              *(_QWORD *)(*(_QWORD *)v2 + 368LL));
}