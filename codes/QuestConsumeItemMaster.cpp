void __fastcall QuestConsumeItemMaster___ctor(QuestConsumeItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B6702A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int___ctor__, method);
    byte_4B6702A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    79,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int___ctor__);
}