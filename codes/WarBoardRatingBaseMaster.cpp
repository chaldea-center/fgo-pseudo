void __fastcall WarBoardRatingBaseMaster___ctor(WarBoardRatingBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189240 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int___ctor__, method);
    byte_4189240 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    328,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int___ctor__);
}