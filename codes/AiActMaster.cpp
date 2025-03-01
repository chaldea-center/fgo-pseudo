void __fastcall AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD33F & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__, method);
    byte_4BFD33F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    110,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}