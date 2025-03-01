void __fastcall QuestUseItemGroupMaster___ctor(QuestUseItemGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDD8E & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__, method);
    byte_4BFDD8E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    534,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__);
}