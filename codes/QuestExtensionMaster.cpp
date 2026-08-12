void QuestExtensionMaster___ctor(QuestExtensionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970EC0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int___ctor__);
    byte_5970EC0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    549,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int___ctor__);
}


bool QuestExtensionMaster__IsShowEventJobContainDialogQuest(
        QuestExtensionMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970EBF & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    byte_5970EBF = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_2213CDC(0, v5);
    return QuestExtensionEntity__ExistsExplanationDialog((QuestExtensionEntity_o *)entity, v5);
  }
  else
  {
    return 0;
  }
}