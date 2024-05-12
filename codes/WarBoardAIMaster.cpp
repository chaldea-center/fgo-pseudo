void __fastcall WarBoardAIMaster___ctor(WarBoardAIMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4388FE0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
    byte_4388FE0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    328,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
}