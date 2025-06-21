void __fastcall QuestResetMaster___ctor(QuestResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CC44 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__, method);
    byte_4B1CC44 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    166,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int___ctor__);
}