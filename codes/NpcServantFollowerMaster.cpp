void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7ECE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__, method);
    byte_4BC7ECE = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_32488B0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
        NpcServantFollowerMaster_o *this,
        NpcServantFollowerEntity_o **npcServantFollowerEntity,
        int32_t questId,
        int32_t questPhase,
        int32_t svtId,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *v16; // x1
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  bool v19; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  int v21; // w24
  NpcFollowerEntity_o *v22; // x8
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BC7ECF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_NpcFollowerMaster___, npcServantFollowerEntity);
    sub_1C1ABD4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v12);
    sub_1C1ABD4(&DataManager_TypeInfo, v13);
    sub_1C1ABD4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v14);
    byte_4BC7ECF = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)npcServantFollowerEntity,
    0LL,
    *(int64_t *)&questId,
    questPhase,
    *(System_String_o **)&svtId,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_1C1AE30(Master_object, v16);
  }
  max_length = EntityArray->max_length;
  v19 = max_length > 0;
  if ( max_length >= 1 )
  {
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        sub_1C1AE38(Master_object, v16);
      v22 = EntityArray->m_Items[v21];
      if ( !v22 || !v20 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v20,
                                        &entity,
                                        v22->fields.leaderSvtId,
                                        (const MethodInfo_324AC20 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v16 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) == svtId )
          break;
      }
      max_length = EntityArray->max_length;
      v19 = ++v21 < max_length;
      if ( v21 >= max_length )
        return v19;
    }
    *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
    sub_1C1AB78((PartyOrganizationUtility_o *)npcServantFollowerEntity, (int64_t)v16, v23, v24, v25, v26, v27, v28);
  }
  return v19;
}