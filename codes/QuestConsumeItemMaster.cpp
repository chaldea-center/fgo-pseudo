void __fastcall QuestConsumeItemMaster___ctor(QuestConsumeItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186E4C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int___ctor__, method);
    byte_4186E4C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    73,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_QuestConsumeItemMaster__QuestConsumeItemEntity__int___ctor__);
}