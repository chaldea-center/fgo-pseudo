void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD30B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
    byte_4BDD30B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    27,
    (const MethodInfo_325C000 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}