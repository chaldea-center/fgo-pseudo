void __fastcall ViewQuestInfoMaster___ctor(ViewQuestInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF9FB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__, method);
    byte_49FF9FB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    77,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__);
}