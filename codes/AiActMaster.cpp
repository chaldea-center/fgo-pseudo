void __fastcall AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAA61 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__, method);
    byte_49BAA61 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    110,
    (const MethodInfo_319B678 *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}