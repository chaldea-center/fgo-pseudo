void QuestRandomGroupEntity___ctor(QuestRandomGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C279F5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestRandomGroupEntity__CreatePK(
        int32_t questId,
        int32_t randomGroupId,
        int32_t probability,
        const MethodInfo *method)
{
  if ( (byte_4C279F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C279F3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           randomGroupId,
           probability,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *QuestRandomGroupEntity__CreatePrimaryKey(QuestRandomGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestRandomGroupEntity__CreatePK(
           this->fields.questId,
           this->fields.randomGroupId,
           this->fields.probability,
           v2);
}


QuestEntity_o *QuestRandomGroupEntity__GetQuestEntity(QuestRandomGroupEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C279F4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C279F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            this->fields.questId,
                            (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}