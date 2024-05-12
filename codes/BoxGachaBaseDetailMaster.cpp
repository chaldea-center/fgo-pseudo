void __fastcall BoxGachaBaseDetailMaster___ctor(BoxGachaBaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D73B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BoxGachaBaseDetailMaster__BoxGachaBaseDetailEntity__int___ctor__);
    byte_438D73B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    143,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_BoxGachaBaseDetailMaster__BoxGachaBaseDetailEntity__int___ctor__);
}