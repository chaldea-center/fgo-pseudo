void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD2A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
    byte_4BDD2A9 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    55,
    (const MethodInfo_325C000 *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}