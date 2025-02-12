void __fastcall QuestRandomGroupEntity___ctor(QuestRandomGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC804A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC804A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRandomGroupEntity__CreatePK(
        int32_t questId,
        int32_t randomGroupId,
        int32_t probability,
        const MethodInfo *method)
{
  if ( (byte_4BC8048 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&randomGroupId);
    byte_4BC8048 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           randomGroupId,
           probability,
           (const MethodInfo_2F9DB44 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestRandomGroupEntity__CreatePrimaryKey(
        QuestRandomGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestRandomGroupEntity__CreatePK(
           this->fields.questId,
           this->fields.randomGroupId,
           this->fields.probability,
           v2);
}


QuestEntity_o *__fastcall QuestRandomGroupEntity__GetQuestEntity(
        QuestRandomGroupEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BC8049 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC8049 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v6);
  }
  return (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                            this->fields.questId,
                            (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
}