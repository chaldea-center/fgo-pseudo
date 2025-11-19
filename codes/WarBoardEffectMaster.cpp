void WarBoardEffectMaster___ctor(WarBoardEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB744C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
    byte_4CB744C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    363,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
}