// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleSelfSkillInfoData__GetRankUpSkillIds(
        BattleSelfSkillInfoData_o *this,
        int32_t svtId,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Int32_array *result; // x0
  __int64 v13; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A7D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId, *(_QWORD *)&baseSkillId);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B18A7D = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
         &entity,
         svtId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_1BCAA3C(result, v13);
  }
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
    sub_1BCAA44(result, v13);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8
  int32_t size; // w2
  int v20; // w9
  __int64 v21; // x21
  __int64 v22; // x22
  BattleSelfSkillInfoData_o *v23; // x0
  const MethodInfo *v24; // x3
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x8
  BattleSelfSkillInfoData_o *v28; // x21
  unsigned __int64 v29; // x25
  int32_t v30; // w23
  System_Collections_Generic_List_object__o *v31; // x22
  __int64 v32; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  BattleSelfSkillInfoData_o *v42; // x1
  Il2CppClass **v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v4 = this;
  if ( (byte_4B18A7C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, svtData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v7, v8);
    this = (BattleSelfSkillInfoData_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B18A7C = 1;
  }
  if ( !svtData )
    goto LABEL_21;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_21;
  v17 = *(_QWORD *)&this->fields.commandAssistId;
  v4->fields.rankChangeData = (struct BattleBuffData_SkillRankChangeData_o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.rankChangeData, v17, v11, v12, v13, v14, v15, v16);
  rankUpList = v4->fields.rankUpList;
  if ( !rankUpList )
    goto LABEL_21;
  size = rankUpList->fields._size;
  v20 = rankUpList->fields._version + 1;
  rankUpList->fields._size = 0;
  rankUpList->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)rankUpList->fields._items, 0, size, 0LL);
  v22 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svtData);
  *(_QWORD *)&v44.fields.currentCryptoKey = v22;
  *(_QWORD *)&v44.fields.fakeValue = v21;
  v23 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v44, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v23,
                                        (int32_t)v23,
                                        v4->fields._skillId,
                                        v24);
  if ( !this )
    goto LABEL_21;
  v27 = *(_QWORD *)&this->fields.svtUniqueId;
  v28 = this;
  if ( (int)v27 >= 1 )
  {
    v29 = 0LL;
    while ( 1 )
    {
      if ( v29 >= (unsigned int)v27 )
        sub_1BCAA44(this, svtData);
      v30 = *(&v28->fields._skillId + v29);
      v31 = (System_Collections_Generic_List_object__o *)v4->fields.rankUpList;
      v32 = sub_1BCAA2C(BattleSkillInfoData_TypeInfo, svtData, v25, v26);
      *(_DWORD *)(v32 + 64) = -1;
      *(_QWORD *)(v32 + 88) = -1LL;
      *(_QWORD *)(v32 + 96) = -1LL;
      *(_DWORD *)(v32 + 104) = -1;
      System_Object___ctor((Il2CppObject *)v32, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            (BattleSkillInfoData_o *)v32,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v30,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0LL);
      if ( !v31 )
        break;
      items = v31->fields._items;
      v40 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
      ++v31->fields._version;
      if ( !items )
        break;
      v41 = v31->fields._size;
      v42 = this;
      if ( (unsigned int)v41 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)this,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + v41;
        v31->fields._size = v41 + 1;
        v43[4] = (Il2CppClass *)v42;
        sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v42, v33, v34, v35, v36, v37, v38);
      }
      LODWORD(v27) = v28->fields.svtUniqueId;
      if ( (__int64)++v29 >= (int)v27 )
        return;
    }
LABEL_21:
    sub_1BCAA3C(this, svtData);
  }
}