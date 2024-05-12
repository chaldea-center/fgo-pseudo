void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438FD3B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
    byte_438FD3B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    161,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}