void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDB77 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__, method);
    byte_4BFDB77 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_327B3B8 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  const MethodInfo *v17; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  bool v20; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x22
  int v22; // w24
  NpcFollowerEntity_o *v23; // x8
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BFDB78 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_NpcFollowerMaster___, npcServantFollowerEntity);
    sub_1C2E12C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v12);
    sub_1C2E12C(&DataManager_TypeInfo, v13);
    sub_1C2E12C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v14);
    byte_4BFDB78 = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_1C2E0D0(
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, v17),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_1C2E388(Master_object, v16);
  }
  max_length = EntityArray->max_length;
  v20 = max_length > 0;
  if ( max_length >= 1 )
  {
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)max_length )
        sub_1C2E390(Master_object, v16);
      v23 = EntityArray->m_Items[v22];
      if ( !v23 || !v21 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v21,
                                        &entity,
                                        v23->fields.leaderSvtId,
                                        (const MethodInfo_327D728 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v16 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) == svtId )
          break;
      }
      max_length = EntityArray->max_length;
      v20 = ++v22 < max_length;
      if ( v22 >= max_length )
        return v20;
    }
    *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
    sub_1C2E0D0((PartyOrganizationUtility_o *)npcServantFollowerEntity, (int64_t)v16, v24, v25, v26, v27, v28, v29);
  }
  return v20;
}