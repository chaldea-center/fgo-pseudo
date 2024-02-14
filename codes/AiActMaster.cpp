void __fastcall AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4212947 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__, method);
    byte_4212947 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    104,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}