void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02490 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__, method);
    byte_4B02490 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_32AF2A8 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *v14; // x1
  const MethodInfo *v15; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  __int64 v17; // x2
  int max_length; // w8
  bool v19; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  int v21; // w24
  NpcFollowerEntity_o *v22; // x8
  const MethodInfo *v23; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B02491 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_NpcFollowerMaster___, npcServantFollowerEntity);
    sub_1BC3008(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v12);
    byte_4B02491 = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)npcServantFollowerEntity, 0, questId, *(const MethodInfo **)&questPhase);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, v15),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_1BC3264(Master_object, v14);
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
        sub_1BC326C(Master_object, v14, v17);
      v22 = EntityArray->m_Items[v21];
      if ( !v22 || !v20 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v20,
                                        &entity,
                                        v22->fields.leaderSvtId,
                                        (const MethodInfo_32B1618 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v14 = entity;
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
    sub_1BC2FAC((CGThumbnailListItem_o *)npcServantFollowerEntity, (int32_t)v14, v17, v23);
  }
  return v19;
}