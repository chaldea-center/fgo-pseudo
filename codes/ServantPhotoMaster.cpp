void __fastcall ServantPhotoMaster___ctor(ServantPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B20C3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__);
    byte_42B20C3 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    480,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__);
}