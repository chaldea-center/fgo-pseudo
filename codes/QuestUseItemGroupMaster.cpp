void __fastcall QuestUseItemGroupMaster___ctor(QuestUseItemGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CCA0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__, method);
    byte_4B1CCA0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    537,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__);
}