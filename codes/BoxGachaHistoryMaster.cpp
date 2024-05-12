void __fastcall BoxGachaHistoryMaster___ctor(BoxGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D74B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__);
    byte_438D74B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    127,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__);
}