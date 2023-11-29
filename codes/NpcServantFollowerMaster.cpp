void __fastcall NpcServantFollowerMaster___ctor(NpcServantFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7F3B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__, method);
    byte_40F7F3B = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    94,
    (const MethodInfo_266F514 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long___ctor__);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v16; // x3
  NpcFollowerEntity_array *EntityArray; // x21
  WarQuestSelectionMaster_o *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v22; // x22
  unsigned int v23; // w23
  NpcFollowerEntity_o *v24; // x8
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7F3C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, npcServantFollowerEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v14);
    byte_40F7F3C = 1;
  }
  entity = 0LL;
  *npcServantFollowerEntity = 0LL;
  sub_B16F98(
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
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (EntityArray = NpcFollowerMaster__GetEntityArray(Master_WarQuestSelectionMaster, questId, questPhase, v16),
        v18 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___),
        !EntityArray) )
  {
LABEL_20:
    sub_B170D4();
  }
  max_length = EntityArray->max_length;
  if ( max_length < 1 )
    return 0;
  v22 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v18;
  v23 = 0;
  while ( 1 )
  {
    if ( v23 >= max_length )
    {
      sub_B17100(v18, v19, v20);
      sub_B170A0();
    }
    v24 = EntityArray->m_Items[v23];
    if ( !v24 || !v22 )
      goto LABEL_20;
    v18 = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                         v22,
                                         &entity,
                                         v24->fields.leaderSvtId,
                                         (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      v19 = (System_Int32_array **)entity;
      if ( !entity )
        goto LABEL_20;
      if ( LODWORD(entity->fields.id.fields.hiddenValue) == svtId )
        break;
    }
    max_length = EntityArray->max_length;
    if ( (int)++v23 >= max_length )
      return 0;
  }
  *npcServantFollowerEntity = (NpcServantFollowerEntity_o *)entity;
  sub_B16F98((BattleServantConfConponent_o *)npcServantFollowerEntity, v19, v20, v25, v26, v27, v28, v29);
  return 1;
}