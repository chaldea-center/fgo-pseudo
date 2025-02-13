void __fastcall WarBoardAIMaster___ctor(WarBoardAIMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD531 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
    byte_4BDD531 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    333,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
}