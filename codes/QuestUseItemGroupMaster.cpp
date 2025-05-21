void __fastcall QuestUseItemGroupMaster___ctor(QuestUseItemGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B451E3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__, method);
    byte_4B451E3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    537,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int___ctor__);
}