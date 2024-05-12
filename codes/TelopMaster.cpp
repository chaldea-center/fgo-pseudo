void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438833B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
    byte_438833B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    62,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}