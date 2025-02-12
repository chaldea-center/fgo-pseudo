void __fastcall AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC76A0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__, method);
    byte_4BC76A0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    110,
    (const MethodInfo_3246354 *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}