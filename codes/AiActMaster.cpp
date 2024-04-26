void __fastcall AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434FBDE & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
    byte_434FBDE = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    105,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}