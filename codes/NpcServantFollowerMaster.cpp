void NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F43 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
    byte_4C37F43 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_3396A70 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
        NpcServantFollowerMaster_o *this,
        NpcServantFollowerEntity_o **npcServantFollowerEntity,
        int32_t questId,
        int32_t questPhase,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v11; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  bool v14; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  int v16; // w24
  NpcFollowerEntity_o *v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C37F44 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    byte_4C37F44 = 1;
  }
  entity = 0;
  *npcServantFollowerEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)npcServantFollowerEntity, 0, questId, *(const MethodInfo **)&questPhase);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, v11),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_1C32E7C(Master_object);
  }
  max_length = EntityArray->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C32E84(Master_object);
      v17 = EntityArray->m_Items[v16];
      if ( !v17 || !v15 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v15,
                                        &entity,
                                        v17->fields.leaderSvtId,
                                        (const MethodInfo_3398DE0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v20 = (int)entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) == svtId )
          break;
      }
      max_length = EntityArray->max_length;
      v14 = ++v16 < max_length;
      if ( v16 >= max_length )
        return v14;
    }
    *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
    sub_1C32BC4((CGThumbnailListItem_o *)npcServantFollowerEntity, v20, v18, v19);
  }
  return v14;
}