void __fastcall DataEntityBase_object____ctor(DataEntityBase_PKType__o *this, const MethodInfo_31FD63C *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase_object___get_PrimaryKey(
        DataEntityBase_PKType__o *this,
        const MethodInfo_31FD614 *method)
{
  __int64 v2; // x0
  __int64 v3; // x1

  v2 = ((__int64 (__fastcall *)(DataEntityBase_PKType__o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  if ( !v2 )
    sub_1BE4D28(0LL, v3);
  return (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 360LL))(
                              v2,
                              *(_QWORD *)(*(_QWORD *)v2 + 368LL));
}