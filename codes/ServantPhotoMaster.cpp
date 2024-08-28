void __fastcall ServantPhotoMaster___ctor(ServantPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A20291 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__, method);
    byte_4A20291 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    482,
    (const MethodInfo_30F88CC *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__);
}