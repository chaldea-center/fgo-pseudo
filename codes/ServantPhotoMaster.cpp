void __fastcall ServantPhotoMaster___ctor(ServantPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22896 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__, method);
    byte_4C22896 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    488,
    (const MethodInfo_329B080 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__);
}