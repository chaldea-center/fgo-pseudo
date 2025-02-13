void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC96A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
    byte_4BDC96A = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_325C000 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  Il2CppObject *Master_object; // x0
  Il2CppObject *v13; // x1
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  bool v16; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  int v18; // w24
  NpcFollowerEntity_o *v19; // x8
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDC96B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    byte_4BDC96B = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_1C21DDC(
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_1C22094(Master_object, v13);
  }
  max_length = EntityArray->max_length;
  v16 = max_length > 0;
  if ( max_length >= 1 )
  {
    v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)max_length )
        sub_1C2209C(Master_object, v13);
      v19 = EntityArray->m_Items[v18];
      if ( !v19 || !v17 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v17,
                                        &entity,
                                        v19->fields.leaderSvtId,
                                        (const MethodInfo_325E370 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v13 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) == svtId )
          break;
      }
      max_length = EntityArray->max_length;
      v16 = ++v18 < max_length;
      if ( v18 >= max_length )
        return v16;
    }
    *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
    sub_1C21DDC((PartyOrganizationUtility_o *)npcServantFollowerEntity, (int64_t)v13, v20, v21, v22, v23, v24, v25);
  }
  return v16;
}