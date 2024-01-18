void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418511E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__, method);
    byte_418511E = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    94,
    (const MethodInfo_24E425C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_o *v14; // x1
  const MethodInfo *v15; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v18; // x22
  unsigned int v19; // w23
  NpcFollowerEntity_o *v20; // x8
  __int64 v22; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418511F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, npcServantFollowerEntity);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v12);
    byte_418511F = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_B2C2F8(npcServantFollowerEntity, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (EntityArray = NpcFollowerMaster__GetEntityArray(
                        (NpcFollowerMaster_o *)Master_WarQuestSelectionMaster,
                        questId,
                        questPhase,
                        v15),
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_20:
    sub_B2C434(Master_WarQuestSelectionMaster, v14);
  }
  max_length = EntityArray->max_length;
  if ( max_length < 1 )
    return 0;
  v18 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
  v19 = 0;
  while ( 1 )
  {
    if ( v19 >= max_length )
    {
      v22 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v22, 0LL);
    }
    v20 = EntityArray->m_Items[v19];
    if ( !v20 || !v18 )
      goto LABEL_20;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                    v18,
                                                                    &entity,
                                                                    v20->fields.leaderSvtId,
                                                                    (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v14 = entity;
      if ( !entity )
        goto LABEL_20;
      if ( LODWORD(entity->fields.id.fields.hiddenValue) == svtId )
        break;
    }
    max_length = EntityArray->max_length;
    if ( (int)++v19 >= max_length )
      return 0;
  }
  *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
  sub_B2C2F8(npcServantFollowerEntity, v14);
  return 1;
}