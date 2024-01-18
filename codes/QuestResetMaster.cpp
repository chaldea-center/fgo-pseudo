void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AF07 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__, method);
    byte_418AF07 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    160,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}