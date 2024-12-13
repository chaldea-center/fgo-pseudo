void __fastcall RestrictionMaster___ctor(RestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B377C5 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__, method);
    byte_4B377C5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    175,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
}