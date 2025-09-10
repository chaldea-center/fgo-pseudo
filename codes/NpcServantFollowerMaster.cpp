void NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27841 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
    byte_4C27841 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_3387FD0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  Il2CppObject *v11; // x1
  const MethodInfo *v12; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  __int64 v14; // x2
  int max_length; // w8
  bool v16; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  int v18; // w24
  NpcFollowerEntity_o *v19; // x8
  const MethodInfo *v20; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C27842 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    byte_4C27842 = 1;
  }
  entity = 0;
  *npcServantFollowerEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)npcServantFollowerEntity, 0, questId, *(const MethodInfo **)&questPhase);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, v12),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_1C2D6EC(Master_object, v11);
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
        sub_1C2D6F4(Master_object, v11, v14);
      v19 = EntityArray->m_Items[v18];
      if ( !v19 || !v17 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v17,
                                        &entity,
                                        v19->fields.leaderSvtId,
                                        (const MethodInfo_338A340 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v11 = entity;
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
    sub_1C2D434((CGThumbnailListItem_o *)npcServantFollowerEntity, (int32_t)v11, v14, v20);
  }
  return v16;
}