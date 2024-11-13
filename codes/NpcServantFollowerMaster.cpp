void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__, method, v2);
    byte_4B165F2 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    96,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *v20; // x1
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  bool v23; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x22
  int v25; // w24
  NpcFollowerEntity_o *v26; // x8
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B165F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, npcServantFollowerEntity, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v16,
      v17);
    byte_4B165F3 = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)npcServantFollowerEntity,
    0LL,
    *(int64_t *)&questId,
    questPhase,
    *(System_String_o **)&svtId,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_1BCAA3C(Master_object, v20);
  }
  max_length = EntityArray->max_length;
  v23 = max_length > 0;
  if ( max_length >= 1 )
  {
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)max_length )
        sub_1BCAA44(Master_object, v20);
      v26 = EntityArray->m_Items[v25];
      if ( !v26 || !v24 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v24,
                                        &entity,
                                        v26->fields.leaderSvtId,
                                        (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v20 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) == svtId )
          break;
      }
      max_length = EntityArray->max_length;
      v23 = ++v25 < max_length;
      if ( v25 >= max_length )
        return v23;
    }
    *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
    sub_1BCA784((PartyOrganizationUtility_o *)npcServantFollowerEntity, (int64_t)v20, v27, v28, v29, v30, v31, v32);
  }
  return v23;
}