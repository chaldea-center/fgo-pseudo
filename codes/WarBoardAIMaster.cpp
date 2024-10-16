void __fastcall WarBoardAIMaster___ctor(WarBoardAIMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6CCF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__, method);
    byte_4AB6CCF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    329,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
}