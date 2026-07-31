void NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938C70 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
    byte_5938C70 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    100,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  bool v17; // w23
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  int v19; // w25
  NpcFollowerEntity_o *v20; // x8
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5938C71 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    byte_5938C71 = 1;
  }
  entity = 0;
  *npcServantFollowerEntity = 0;
  sub_21FFBF4(
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_object
    || (EntityArray = NpcFollowerMaster__GetEntityArray((NpcFollowerMaster_o *)Master_object, questId, questPhase, 0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_19:
    sub_21FFECC(Master_object, v14);
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
        sub_21FFED4(Master_object);
      v20 = EntityArray->m_Items[v19];
      if ( !v20 || !v18 )
        goto LABEL_19;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        v18,
                                        &entity,
                                        v20->fields.leaderSvtId,
                                        (const MethodInfo_3EDFA34 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v14 = entity;
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)npcServantFollowerEntity,
      (int32_t)v14,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  return v17;
}