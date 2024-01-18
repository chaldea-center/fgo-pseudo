void __fastcall BoxGachaHistoryMaster___ctor(BoxGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41896B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__, method);
    byte_41896B2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    126,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int___ctor__);
}