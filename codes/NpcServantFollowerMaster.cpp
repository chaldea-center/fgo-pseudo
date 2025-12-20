void NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CDFB & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
    byte_4D2CDFB = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_345B6F8 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *Master_object; // x0
  Il2CppObject *v13; // x1
  const MethodInfo *v14; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  bool v17; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  int v19; // w24
  NpcFollowerEntity_o *v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2CDFC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    byte_4D2CDFC = 1;
  }
  entity = 0;
  *npcServantFollowerEntity = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)npcServantFollowerEntity,
    0,
    questId,
    questPhase,
    *(System_String_o **)&svtId,
    (int32_t)method,
    v6,
    v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, v14),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_1C942F0(Master_object, v13);
  }
  max_length = EntityArray->max_length;
  v17 = max_length > 0;
  if ( max_length >= 1 )
  {
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        sub_1C942F8(Master_object);
      v20 = EntityArray->m_Items[v19];
      if ( !v20 || !v18 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v18,
                                        &entity,
                                        v20->fields.leaderSvtId,
                                        (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v13 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) == svtId )
          break;
      }
      max_length = EntityArray->max_length;
      v17 = ++v19 < max_length;
      if ( v19 >= max_length )
        return v17;
    }
    *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)npcServantFollowerEntity, (int32_t)v13, v21, v22, v23, v24, v25, v26);
  }
  return v17;
}