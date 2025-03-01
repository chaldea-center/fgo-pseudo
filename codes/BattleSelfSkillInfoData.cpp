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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C00116 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1C2E12C(&int___TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C00116 = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
         &entity,
         svtId,
         (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_1C2E388(result, v10);
  }
  result = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
    sub_1C2E390(result, v10);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8
  int32_t size; // w2
  int v17; // w9
  __int64 v18; // x21
  __int64 v19; // x22
  BattleSelfSkillInfoData_o *v20; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  BattleSelfSkillInfoData_o *v23; // x21
  unsigned __int64 v24; // x25
  int32_t v25; // w23
  System_Collections_Generic_List_object__o *v26; // x22
  __int64 v27; // x24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  BattleSelfSkillInfoData_o *v37; // x1
  Il2CppClass **v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v4 = this;
  if ( (byte_4C00115 & 1) == 0 )
  {
    sub_1C2E12C(&BattleSkillInfoData_TypeInfo, svtData);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v6);
    this = (BattleSelfSkillInfoData_o *)sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4C00115 = 1;
  }
  if ( !svtData )
    goto LABEL_21;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_21;
  v14 = *(_QWORD *)&this->fields.commandAssistId;
  v4->fields.rankChangeData = (struct BattleBuffData_SkillRankChangeData_o *)v14;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.rankChangeData, v14, v8, v9, v10, v11, v12, v13);
  rankUpList = v4->fields.rankUpList;
  if ( !rankUpList )
    goto LABEL_21;
  size = rankUpList->fields._size;
  v17 = rankUpList->fields._version + 1;
  rankUpList->fields._size = 0;
  rankUpList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)rankUpList->fields._items, 0, size, 0LL);
  v19 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v19;
  *(_QWORD *)&v39.fields.fakeValue = v18;
  v20 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v39, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v20,
                                        (int32_t)v20,
                                        v4->fields._skillId,
                                        v21);
  if ( !this )
    goto LABEL_21;
  v22 = *(_QWORD *)&this->fields.svtUniqueId;
  v23 = this;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v22 )
        sub_1C2E390(this, svtData);
      v25 = *(&v23->fields._skillId + v24);
      v26 = (System_Collections_Generic_List_object__o *)v4->fields.rankUpList;
      v27 = sub_1C2E378(BattleSkillInfoData_TypeInfo);
      *(_DWORD *)(v27 + 64) = -1;
      *(_QWORD *)(v27 + 88) = -1LL;
      *(_QWORD *)(v27 + 96) = -1LL;
      *(_DWORD *)(v27 + 104) = -1;
      System_Object___ctor((Il2CppObject *)v27, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            (BattleSkillInfoData_o *)v27,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v25,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0LL);
      if ( !v26 )
        break;
      items = v26->fields._items;
      v35 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
      ++v26->fields._version;
      if ( !items )
        break;
      v36 = v26->fields._size;
      v37 = this;
      if ( (unsigned int)v36 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)this,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + v36;
        v26->fields._size = v36 + 1;
        v38[4] = (Il2CppClass *)v37;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v37, v28, v29, v30, v31, v32, v33);
      }
      LODWORD(v22) = v23->fields.svtUniqueId;
      if ( (__int64)++v24 >= (int)v22 )
        return;
    }
LABEL_21:
    sub_1C2E388(this, svtData);
  }
}