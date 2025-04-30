void __fastcall QuestExtensionMaster___ctor(QuestExtensionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F6B8 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int___ctor__, method);
    byte_4A4F6B8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    547,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int___ctor__);
}