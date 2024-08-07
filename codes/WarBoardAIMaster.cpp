void __fastcall WarBoardAIMaster___ctor(WarBoardAIMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFA6D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__, method);
    byte_49FFA6D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    329,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
}