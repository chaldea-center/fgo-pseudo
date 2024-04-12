void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADB0E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
    byte_42ADB0E = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    95,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
}


bool __fastcall NpcServantFollowerMaster__TryGetEntityByQuestIdAndSvtId(
        NpcServantFollowerMaster_o *this,
        NpcServantFollowerEntity_o **npcServantFollowerEntity,
        int32_t questId,
        int32_t questPhase,
        int32_t svtId,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_o *v11; // x1
  const MethodInfo *v12; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v15; // x22
  unsigned int v16; // w23
  NpcFollowerEntity_o *v17; // x8
  __int64 v19; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ADB0F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    byte_42ADB0F = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_B52920(npcServantFollowerEntity);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (EntityArray = NpcFollowerMaster__GetEntityArray(
                        (NpcFollowerMaster_o *)Master_WarQuestSelectionMaster,
                        questId,
                        questPhase,
                        v12),
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_20:
    sub_B52A5C(Master_WarQuestSelectionMaster, v11);
  }
  max_length = EntityArray->max_length;
  if ( max_length < 1 )
    return 0;
  v15 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
    {
      v19 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v19, 0LL);
    }
    v17 = EntityArray->m_Items[v16];
    if ( !v17 || !v15 )
      goto LABEL_20;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                    v15,
                                                                    &entity,
                                                                    v17->fields.leaderSvtId,
                                                                    (const MethodInfo_23E255C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v11 = entity;
      if ( !entity )
        goto LABEL_20;
      if ( LODWORD(entity->fields.id.fields.hiddenValue) == svtId )
        break;
    }
    max_length = EntityArray->max_length;
    if ( (int)++v16 >= max_length )
      return 0;
  }
  *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
  sub_B52920(npcServantFollowerEntity);
  return 1;
}