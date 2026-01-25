void BattleSelfSkillInfoData___ctor(BattleSelfSkillInfoData_o *this, const MethodInfo *method)
{
  BattleRankUpSkillInfoData___ctor((BattleRankUpSkillInfoData_o *)this, 0);
}


System_Int32_array *BattleSelfSkillInfoData__GetRankUpSkillIds(
        BattleSelfSkillInfoData_o *this,
        int32_t svtId,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CF1426 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1426 = 1;
  }
  entity = 0;
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
         &entity,
         svtId,
         (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0);
LABEL_11:
    sub_1C7BD40(result, v7);
  }
  result = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 1);
  if ( !result )
    goto LABEL_11;
  if ( !LODWORD(result->max_length) )
    sub_1C7BD48(result);
  result->m_Items[0] = baseSkillId;
  return result;
}


BaseMotionSkip_o *BattleSelfSkillInfoData__MakeSkillSkip(BattleSelfSkillInfoData_o *this, const MethodInfo *method)
{
  return (BaseMotionSkip_o *)((__int64 (__fastcall *)(BattleSelfSkillInfoData_o *, const MethodInfo *))this->klass->vtable._17_CommonMakeSkillSkip.methodPtr)(
                               this,
                               this->klass->vtable._17_CommonMakeSkillSkip.method);
}


void BattleSelfSkillInfoData__PreAddProcess(
        BattleSelfSkillInfoData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleSelfSkillInfoData_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct BattleBuffData_SkillRankChangeData_o *v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8
  int32_t size; // w2
  int v14; // w9
  __int64 v15; // x21
  __int64 v16; // x22
  BattleSelfSkillInfoData_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  BattleSelfSkillInfoData_o *v20; // x21
  unsigned __int64 v21; // x25
  int32_t v22; // w23
  System_Collections_Generic_List_object__o *v23; // x22
  BattleSkillInfoData_o *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  BattleSelfSkillInfoData_o *v34; // x1
  Il2CppClass **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v4 = this;
  if ( (byte_4CF1425 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleSkillInfoData_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
    this = (BattleSelfSkillInfoData_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CF1425 = 1;
  }
  if ( !svtData )
    goto LABEL_21;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0);
  if ( !this )
    goto LABEL_21;
  v11 = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.cutInId;
  v4->fields.rankChangeData = v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.rankChangeData, (int32_t)v11, v5, v6, v7, v8, v9, v10);
  rankUpList = v4->fields.rankUpList;
  if ( !rankUpList )
    goto LABEL_21;
  size = rankUpList->fields._size;
  v14 = rankUpList->fields._version + 1;
  rankUpList->fields._size = 0;
  rankUpList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)rankUpList->fields._items, 0, size, 0);
  v16 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v16;
  *(_QWORD *)&v36.fields.fakeValue = v15;
  v17 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v36, 0);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v17,
                                        (int32_t)v17,
                                        v4->fields._skillId,
                                        v18);
  if ( !this )
    goto LABEL_21;
  v19 = *(_QWORD *)&this->fields.svtUniqueId;
  v20 = this;
  if ( (int)v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
        sub_1C7BD48(this);
      v22 = *(&v20->fields._skillId + v21);
      v23 = (System_Collections_Generic_List_object__o *)v4->fields.rankUpList;
      v24 = (BattleSkillInfoData_o *)sub_1C7BD34(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v24, 0);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            v24,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v22,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0);
      if ( !v23 )
        break;
      items = v23->fields._items;
      v32 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
      ++v23->fields._version;
      if ( !items )
        break;
      v33 = v23->fields._size;
      v34 = this;
      if ( (unsigned int)v33 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)this,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + v33;
        v23->fields._size = v33 + 1;
        v35[4] = (Il2CppClass *)v34;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v34, v25, v26, v27, v28, v29, v30);
      }
      LODWORD(v19) = v20->fields.svtUniqueId;
      if ( (__int64)++v21 >= (int)v19 )
        return;
    }
LABEL_21:
    sub_1C7BD40(this, svtData);
  }
}