void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E327 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__, method);
    byte_4A2E327 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    96,
    (const MethodInfo_30FF8EC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
}


bool __fastcall NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
        NpcServantFollowerMaster_o *this,
        NpcServantFollowerEntity_o **npcServantFollowerEntity,
        int32_t questId,
        int32_t questPhase,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *v14; // x1
  const MethodInfo *v15; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  bool v18; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  int v20; // w24
  NpcFollowerEntity_o *v21; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A2E328 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_NpcFollowerMaster___, npcServantFollowerEntity);
    sub_1B761C0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10);
    sub_1B761C0(&DataManager_TypeInfo, v11);
    sub_1B761C0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v12);
    byte_4A2E328 = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)npcServantFollowerEntity, 0, questId, questPhase);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, v15),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_1B7641C(Master_object, v14);
  }
  max_length = EntityArray->max_length;
  v18 = max_length > 0;
  if ( max_length >= 1 )
  {
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
        sub_1B76424(Master_object, v14);
      v21 = EntityArray->m_Items[v20];
      if ( !v21 || !v19 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v19,
                                        &entity,
                                        v21->fields.leaderSvtId,
                                        (const MethodInfo_30FF980 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v14 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) == svtId )
          break;
      }
      max_length = EntityArray->max_length;
      v18 = ++v20 < max_length;
      if ( v20 >= max_length )
        return v18;
    }
    *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
    sub_1B76164((ServantStatusBattleListViewItem_o *)npcServantFollowerEntity, (int32_t)v14, v22, v23);
  }
  return v18;
}