void __fastcall ServantPhotoMaster___ctor(ServantPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D104 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__);
    byte_438D104 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    481,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long___ctor__);
}