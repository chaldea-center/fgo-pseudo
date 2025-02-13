void __fastcall RestrictionMaster___ctor(RestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCB94 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
    byte_4BDCB94 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    179,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
}