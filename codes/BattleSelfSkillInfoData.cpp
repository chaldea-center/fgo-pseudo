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
  System_Int32_array *result; // x0
  __int64 v10; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4211D6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&int___TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4211D6A = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)result,
         &entity,
         svtId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_B0D97C(result);
  }
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
  {
    v10 = sub_B0D9A8(result);
    sub_B0D948(v10, 0LL);
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
  BattleSelfSkillInfoData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleBuffData_SkillRankChangeData_o *v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  BattleSelfSkillInfoData_o *v11; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  BattleSelfSkillInfoData_o *v16; // x21
  unsigned __int64 v17; // x25
  int32_t v18; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *rankUpList; // x22
  BattleSkillInfoData_o *v20; // x24
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v4 = this;
  if ( (byte_4211D69 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, svtData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v6);
    this = (BattleSelfSkillInfoData_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4211D69 = 1;
  }
  if ( !svtData )
    goto LABEL_16;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_16;
  v8 = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.commandAssistId;
  v4->fields.rankChangeData = v8;
  sub_B0D840(&v4->fields.rankChangeData, v8);
  this = (BattleSelfSkillInfoData_o *)v4->fields.rankUpList;
  if ( !this )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
  v10 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v10;
  *(_QWORD *)&v22.fields.fakeValue = v9;
  v11 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v22, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v11,
                                        (int32_t)v11,
                                        v4->fields._skillId,
                                        v12);
  if ( !this )
    goto LABEL_16;
  v15 = *(_QWORD *)&this->fields.svtUniqueId;
  v16 = this;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
      {
        v21 = sub_B0D9A8(this);
        sub_B0D948(v21, 0LL);
      }
      v18 = *(&v16->fields._skillId + v17);
      rankUpList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.rankUpList;
      v20 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v13, v14);
      BattleSkillInfoData___ctor(v20, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            v20,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v18,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0LL);
      if ( !rankUpList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        rankUpList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
      LODWORD(v15) = v16->fields.svtUniqueId;
      if ( (__int64)++v17 >= (int)v15 )
        return;
    }
LABEL_16:
    sub_B0D97C(this);
  }
}