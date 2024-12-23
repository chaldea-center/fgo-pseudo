void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67173 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__, method);
    byte_4B67173 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    166,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}