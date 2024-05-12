void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A249 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
    byte_438A249 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    95,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array **v13; // x1
  const MethodInfo *v14; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v17; // x22
  unsigned int v18; // w23
  NpcFollowerEntity_o *v19; // x8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v27; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438A24A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    byte_438A24A = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)npcServantFollowerEntity,
    0LL,
    *(System_String_array ***)&questId,
    *(System_String_array ***)&questPhase,
    *(System_Boolean_array ***)&svtId,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (EntityArray = NpcFollowerMaster__GetEntityArray(
                        (NpcFollowerMaster_o *)Master_WarQuestSelectionMaster,
                        questId,
                        questPhase,
                        v14),
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_20:
    sub_B7769C(Master_WarQuestSelectionMaster, v13);
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
      v27 = sub_B776C8(Master_WarQuestSelectionMaster);
      sub_B77668(v27, 0LL);
    }
    v19 = EntityArray->m_Items[v18];
    if ( !v19 || !v17 )
      goto LABEL_20;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                    v17,
                                                                    &entity,
                                                                    v19->fields.leaderSvtId,
                                                                    (const MethodInfo_21FBB18 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v13 = (System_Int32_array **)entity;
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
  sub_B77560((BattleServantConfConponent_o *)npcServantFollowerEntity, v13, v20, v21, v22, v23, v24, v25);
  return 1;
}