void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF097 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__, method);
    byte_49FF097 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    162,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}