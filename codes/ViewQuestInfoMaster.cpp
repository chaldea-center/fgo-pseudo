void __fastcall ViewQuestInfoMaster___ctor(ViewQuestInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6C5E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__, method);
    byte_4AB6C5E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    77,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int___ctor__);
}