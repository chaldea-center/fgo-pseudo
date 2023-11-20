void __fastcall BattleSelfSkillInfoData___ctor(BattleSelfSkillInfoData_o *this, const MethodInfo *method)
{
  BattleRankUpSkillInfoData___ctor((BattleRankUpSkillInfoData_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleSelfSkillInfoData__GetRankUpSkillIds(
        BattleSelfSkillInfoData_o *this,
        int32_t svtId,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x2
  System_Int32_array *result; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7551 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F7551 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_11;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         svtId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_B170D4();
  }
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v11);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
  {
    sub_B17100(result, v13, v14);
    sub_B170A0();
  }
  result->m_Items[1] = baseSkillId;
  return result;
}


BaseMotionSkip_o *__fastcall BattleSelfSkillInfoData__MakeSkillSkip(
        BattleSelfSkillInfoData_o *this,
        const MethodInfo *method)
{
  return (BaseMotionSkip_o *)((__int64 (__fastcall *)(BattleSelfSkillInfoData_o *, void *))this->klass->vtable._15_CommonMakeSkillSkip.method)(
                               this,
                               this->klass[1]._1.image);
}


void __fastcall BattleSelfSkillInfoData__PreAddProcess(
        BattleSelfSkillInfoData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleBuffData_o *BuffData; // x0
  struct BattleBuffData_SkillRankChangeData_o *skillChangeData; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  BattleSelfSkillInfoData_o *v13; // x0
  const MethodInfo *v14; // x3
  System_Int32_array *RankUpSkillIds; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x8
  System_Int32_array *v21; // x21
  unsigned __int64 v22; // x25
  int32_t v23; // w23
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v24; // x22
  BattleSkillInfoData_o *v25; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40F7550 & 1) == 0 )
  {
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, svtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40F7550 = 1;
  }
  if ( !svtData )
    goto LABEL_16;
  BuffData = BattleServantData__get_BuffData(svtData, 0LL);
  if ( !BuffData )
    goto LABEL_16;
  skillChangeData = BuffData->fields.skillChangeData;
  this->fields.rankChangeData = skillChangeData;
  sub_B16F98(&this->fields.rankChangeData, skillChangeData);
  rankUpList = this->fields.rankUpList;
  if ( !rankUpList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rankUpList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
  v12 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v12;
  *(_QWORD *)&v27.fields.fakeValue = v11;
  v13 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
  RankUpSkillIds = BattleSelfSkillInfoData__GetRankUpSkillIds(v13, (int32_t)v13, this->fields._skillId, v14);
  if ( !RankUpSkillIds )
    goto LABEL_16;
  v20 = *(_QWORD *)&RankUpSkillIds->max_length;
  v21 = RankUpSkillIds;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
      {
        sub_B17100(RankUpSkillIds, v16, v17);
        sub_B170A0();
      }
      v23 = v21->m_Items[v22 + 1];
      v24 = this->fields.rankUpList;
      v25 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v16, v17, v18, v19);
      BattleSkillInfoData___ctor(v25, 0LL);
      v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleServantData__SetSkillInfo(
                                                                     svtData,
                                                                     v25,
                                                                     this->fields.type,
                                                                     this->fields.index,
                                                                     v23,
                                                                     this->fields.skilllv,
                                                                     this->fields.userCommandCodeId,
                                                                     this->fields.commandAssistId,
                                                                     0LL);
      if ( !v24 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24,
        v26,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
      LODWORD(v20) = v21->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        return;
    }
LABEL_16:
    sub_B170D4();
  }
}