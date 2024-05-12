void __fastcall WarBoardRatingBaseMaster___ctor(WarBoardRatingBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D202 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int___ctor__);
    byte_438D202 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    329,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int___ctor__);
}