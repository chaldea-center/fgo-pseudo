void __fastcall BoxGachaHistoryMaster___ctor(BoxGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1789 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__);
    byte_42B1789 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    127,
    (const MethodInfo_23E223C *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__);
}