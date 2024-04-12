void __fastcall QuestConsumeItemMaster___ctor(QuestConsumeItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B019F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int___ctor__);
    byte_42B019F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    74,
    (const MethodInfo_23E223C *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int___ctor__);
}