void QuestUseItemGroupMaster___ctor(QuestUseItemGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6A92 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__);
    byte_4CB6A92 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    537,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__);
}