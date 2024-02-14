void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4212008 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__, method);
    byte_4212008 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    94,
    (const MethodInfo_2669D60 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  const MethodInfo *v14; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x22
  unsigned int v18; // w23
  NpcFollowerEntity_o *v19; // x8
  UserServantEntity_o *v20; // x1
  __int64 v22; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212009 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, npcServantFollowerEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v12);
    byte_4212009 = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_B0D840(npcServantFollowerEntity, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (EntityArray = NpcFollowerMaster__GetEntityArray(
                        (NpcFollowerMaster_o *)Master_WarQuestSelectionMaster,
                        questId,
                        questPhase,
                        v14),
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_20:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  max_length = EntityArray->max_length;
  if ( max_length < 1 )
    return 0;
  v17 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= max_length )
    {
      v22 = sub_B0D9A8(Master_WarQuestSelectionMaster);
      sub_B0D948(v22, 0LL);
    }
    v19 = EntityArray->m_Items[v18];
    if ( !v19 || !v17 )
      goto LABEL_20;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                    v17,
                                                                    &entity,
                                                                    v19->fields.leaderSvtId,
                                                                    (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v20 = entity;
      if ( !entity )
        goto LABEL_20;
      if ( LODWORD(entity->fields.id.fields.hiddenValue) == svtId )
        break;
    }
    max_length = EntityArray->max_length;
    if ( (int)++v18 >= max_length )
      return 0;
  }
  *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
  sub_B0D840(npcServantFollowerEntity, v20);
  return 1;
}