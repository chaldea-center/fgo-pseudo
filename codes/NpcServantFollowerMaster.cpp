void NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970E2F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
    byte_5970E2F = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_3F10D40 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *v14; // x1
  const MethodInfo *v15; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  bool v18; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  int v20; // w25
  NpcFollowerEntity_o *v21; // x8
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5970E30 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    byte_5970E30 = 1;
  }
  entity = 0;
  *npcServantFollowerEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)npcServantFollowerEntity,
    0,
    *(System_String_o **)&questId,
    *(System_String_o **)&questPhase,
    svtId,
    (int32_t)method,
    v6,
    v7);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, v15),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_2213CDC(Master_object, v14);
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
        sub_2213CE4(Master_object);
      v21 = EntityArray->m_Items[v20];
      if ( !v21 || !v19 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v19,
                                        &entity,
                                        v21->fields.leaderSvtId,
                                        (const MethodInfo_3F131DC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)npcServantFollowerEntity,
      (int32_t)v14,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  return v18;
}