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
  __int64 v10; // x1
  __int64 v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4184E3B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&int___TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4184E3B = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)result,
         &entity,
         svtId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_B2C434(result, v10);
  }
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
  {
    v11 = sub_B2C460(result);
    sub_B2C400(v11, 0LL);
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
  __int64 v13; // x8
  BattleSelfSkillInfoData_o *v14; // x21
  unsigned __int64 v15; // x25
  int32_t v16; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *rankUpList; // x22
  BattleSkillInfoData_o *v18; // x24
  __int64 v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_4184E3A & 1) == 0 )
  {
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, svtData);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v6);
    this = (BattleSelfSkillInfoData_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4184E3A = 1;
  }
  if ( !svtData )
    goto LABEL_16;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_16;
  v8 = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.commandAssistId;
  v4->fields.rankChangeData = v8;
  sub_B2C2F8(&v4->fields.rankChangeData, v8);
  this = (BattleSelfSkillInfoData_o *)v4->fields.rankUpList;
  if ( !this )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
  v10 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v10;
  *(_QWORD *)&v20.fields.fakeValue = v9;
  v11 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v11,
                                        (int32_t)v11,
                                        v4->fields._skillId,
                                        v12);
  if ( !this )
    goto LABEL_16;
  v13 = *(_QWORD *)&this->fields.svtUniqueId;
  v14 = this;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
      {
        v19 = sub_B2C460(this);
        sub_B2C400(v19, 0LL);
      }
      v16 = *(&v14->fields._skillId + v15);
      rankUpList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.rankUpList;
      v18 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v18, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            v18,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v16,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0LL);
      if ( !rankUpList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        rankUpList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
      LODWORD(v13) = v14->fields.svtUniqueId;
      if ( (__int64)++v15 >= (int)v13 )
        return;
    }
LABEL_16:
    sub_B2C434(this, svtData);
  }
}