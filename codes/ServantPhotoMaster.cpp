void __fastcall ServantPhotoMaster___ctor(ServantPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43538CE & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__);
    byte_43538CE = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    481,
    (const MethodInfo_21C05CC *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__);
}