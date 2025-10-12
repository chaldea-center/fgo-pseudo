void DataEntityBase_object____ctor(DataEntityBase_PKType__o *this, const MethodInfo_33943CC *method)
{
  DataEntityBase___ctor((DataEntityBase_o *)this, 0);
}


System_String_o *DataEntityBase_object___get_PrimaryKey(
        DataEntityBase_PKType__o *this,
        const MethodInfo_33943A4 *method)
{
  __int64 v2; // x0

  v2 = ((__int64 (__fastcall *)(DataEntityBase_PKType__o *, void *))this->klass[1]._1.image)(
         this,
         this->klass[1]._1.gc_desc);
  if ( !v2 )
    sub_1C32E7C(0);
  return (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 360LL))(
                              v2,
                              *(_QWORD *)(*(_QWORD *)v2 + 368LL));
}