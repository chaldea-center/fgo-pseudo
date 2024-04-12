void __fastcall AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADFA9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
    byte_42ADFA9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    105,
    (const MethodInfo_23E223C *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}