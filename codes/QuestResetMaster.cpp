void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B4903 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
    byte_42B4903 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    161,
    (const MethodInfo_23E223C *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}