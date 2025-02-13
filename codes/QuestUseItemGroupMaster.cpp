void __fastcall QuestUseItemGroupMaster___ctor(QuestUseItemGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCB68 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__);
    byte_4BDCB68 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    534,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__);
}