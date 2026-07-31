void QuestExtensionMaster___ctor(QuestExtensionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938D01 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int___ctor__);
    byte_5938D01 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    549,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int___ctor__);
}


bool QuestExtensionMaster__IsShowEventJobContainDialogQuest(
        QuestExtensionMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938D00 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    byte_5938D00 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         questId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_21FFECC(0, v5);
    return QuestExtensionEntity__ExistsExplanationDialog((QuestExtensionEntity_o *)entity, v5);
  }
  else
  {
    return 0;
  }
}