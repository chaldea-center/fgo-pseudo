void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43566BD & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
    byte_43566BD = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    161,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}