void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E62A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E62A5 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    95,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_o *v20; // x1
  const MethodInfo *v21; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v24; // x22
  unsigned int v25; // w23
  NpcFollowerEntity_o *v26; // x8
  __int64 v28; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E62A6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_NpcFollowerMaster___,
      (_DWORD)npcServantFollowerEntity,
      questId,
      *(_QWORD *)&questPhase);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v16,
      v17,
      v18);
    byte_42E62A6 = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_B5D560(npcServantFollowerEntity);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (EntityArray = NpcFollowerMaster__GetEntityArray(
                        (NpcFollowerMaster_o *)Master_WarQuestSelectionMaster,
                        questId,
                        questPhase,
                        v21),
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_20:
    sub_B5D69C(Master_WarQuestSelectionMaster, v20);
  }
  max_length = EntityArray->max_length;
  if ( max_length < 1 )
    return 0;
  v24 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster;
  v25 = 0;
  while ( 1 )
  {
    if ( v25 >= max_length )
    {
      v28 = sub_B5D6C8(Master_WarQuestSelectionMaster);
      sub_B5D668(v28, 0LL);
    }
    v26 = EntityArray->m_Items[v25];
    if ( !v26 || !v24 )
      goto LABEL_20;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                    v24,
                                                                    &entity,
                                                                    v26->fields.leaderSvtId,
                                                                    (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v20 = entity;
      if ( !entity )
        goto LABEL_20;
      if ( LODWORD(entity->fields.id.fields.hiddenValue) == svtId )
        break;
    }
    max_length = EntityArray->max_length;
    if ( (int)++v25 >= max_length )
      return 0;
  }
  *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
  sub_B5D560(npcServantFollowerEntity);
  return 1;
}