void __fastcall ServantPhotoMaster___ctor(ServantPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB7C2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__, method);
    byte_49BB7C2 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    488,
    (const MethodInfo_319DBD4 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__);
}