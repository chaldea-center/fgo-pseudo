void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43516FC & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
    byte_43516FC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    318,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}