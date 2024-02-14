void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4217C82 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__, method);
    byte_4217C82 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    160,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}