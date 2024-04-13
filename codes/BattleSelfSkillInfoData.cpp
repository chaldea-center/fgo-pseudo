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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array *result; // x0
  __int64 v16; // x1
  __int64 v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E57BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, svtId, baseSkillId, method);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E57BC = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)result,
         &entity,
         svtId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_B5D69C(result, v16);
  }
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
  {
    v17 = sub_B5D6C8(result);
    sub_B5D668(v17, 0LL);
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
  __int64 v3; // x3
  BattleSelfSkillInfoData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x22
  BattleSelfSkillInfoData_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  BattleSelfSkillInfoData_o *v20; // x21
  unsigned __int64 v21; // x25
  int32_t v22; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *rankUpList; // x22
  BattleSkillInfoData_o *v24; // x24
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v5 = this;
  if ( (byte_42E57BB & 1) == 0 )
  {
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, (_DWORD)svtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v9, v10, v11);
    this = (BattleSelfSkillInfoData_o *)sub_B5D5C4(
                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                          v12,
                                          v13,
                                          v14);
    byte_42E57BB = 1;
  }
  if ( !svtData )
    goto LABEL_16;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_16;
  v5->fields.rankChangeData = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.commandAssistId;
  sub_B5D560(&v5->fields.rankChangeData);
  this = (BattleSelfSkillInfoData_o *)v5->fields.rankUpList;
  if ( !this )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
  v16 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v16;
  *(_QWORD *)&v26.fields.fakeValue = v15;
  v17 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v17,
                                        (int32_t)v17,
                                        v5->fields._skillId,
                                        v18);
  if ( !this )
    goto LABEL_16;
  v19 = *(_QWORD *)&this->fields.svtUniqueId;
  v20 = this;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
      {
        v25 = sub_B5D6C8(this);
        sub_B5D668(v25, 0LL);
      }
      v22 = *(&v20->fields._skillId + v21);
      rankUpList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.rankUpList;
      v24 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v24, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            v24,
                                            v5->fields.type,
                                            v5->fields.index,
                                            v22,
                                            v5->fields.skilllv,
                                            v5->fields.userCommandCodeId,
                                            v5->fields.commandAssistId,
                                            0LL);
      if ( !rankUpList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        rankUpList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
      LODWORD(v19) = v20->fields.svtUniqueId;
      if ( (__int64)++v21 >= (int)v19 )
        return;
    }
LABEL_16:
    sub_B5D69C(this, svtData);
  }
}