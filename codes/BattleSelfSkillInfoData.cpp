void __fastcall BattleSelfSkillInfoData___ctor(BattleSelfSkillInfoData_o *this, const MethodInfo *method)
{
  BattleRankUpSkillInfoData___ctor((BattleRankUpSkillInfoData_o *)this, 0LL);
}


System_Int32_array *__fastcall BattleSelfSkillInfoData__GetRankUpSkillIds(
        BattleSelfSkillInfoData_o *this,
        int32_t svtId,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434ECAC & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434ECAC = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)result,
         &entity,
         svtId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_B7076C(result, v7);
  }
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
  {
    v8 = sub_B70798(result);
    sub_B70738(v8, 0LL);
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
  __int64 v5; // x21
  __int64 v6; // x22
  BattleSelfSkillInfoData_o *v7; // x0
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  BattleSelfSkillInfoData_o *v10; // x21
  unsigned __int64 v11; // x25
  int32_t v12; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *rankUpList; // x22
  BattleSkillInfoData_o *v14; // x24
  __int64 v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_434ECAB & 1) == 0 )
  {
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
    this = (BattleSelfSkillInfoData_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434ECAB = 1;
  }
  if ( !svtData )
    goto LABEL_16;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_16;
  v4->fields.rankChangeData = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.commandAssistId;
  sub_B70630(&v4->fields.rankChangeData);
  this = (BattleSelfSkillInfoData_o *)v4->fields.rankUpList;
  if ( !this )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
  v6 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v7,
                                        (int32_t)v7,
                                        v4->fields._skillId,
                                        v8);
  if ( !this )
    goto LABEL_16;
  v9 = *(_QWORD *)&this->fields.svtUniqueId;
  v10 = this;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
      {
        v15 = sub_B70798(this);
        sub_B70738(v15, 0LL);
      }
      v12 = *(&v10->fields._skillId + v11);
      rankUpList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.rankUpList;
      v14 = (BattleSkillInfoData_o *)sub_B70764(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v14, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            v14,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v12,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0LL);
      if ( !rankUpList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        rankUpList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
      LODWORD(v9) = v10->fields.svtUniqueId;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
LABEL_16:
    sub_B7076C(this, svtData);
  }
}