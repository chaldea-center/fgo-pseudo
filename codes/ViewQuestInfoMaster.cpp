void __fastcall ViewQuestInfoMaster___ctor(ViewQuestInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8A19 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__, method);
    byte_4BC8A19 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    81,
    (const MethodInfo_3246354 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__);
}