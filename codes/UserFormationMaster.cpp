void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A207B4 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__, method);
    byte_4A207B4 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    51,
    (const MethodInfo_30F88CC *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}