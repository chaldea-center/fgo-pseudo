void __fastcall WarBoardAIMaster___ctor(WarBoardAIMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E68DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E68DF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    328,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
}