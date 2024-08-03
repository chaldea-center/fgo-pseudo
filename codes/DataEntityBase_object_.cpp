void __fastcall DataEntityBase_object____ctor(DataEntityBase_PKType__o *this, const MethodInfo_30D3D1C *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase_object___get_PrimaryKey(
        DataEntityBase_PKType__o *this,
        const MethodInfo_30D3CF4 *method)
{
  __int64 v2; // x0

  v2 = ((__int64 (__fastcall *)(DataEntityBase_PKType__o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  if ( !v2 )
    sub_1B64324(0LL);
  return (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 360LL))(
                              v2,
                              *(_QWORD *)(*(_QWORD *)v2 + 368LL));
}