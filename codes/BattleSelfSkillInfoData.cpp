System_Int32_array *__fastcall BattleSelfSkillInfoData__GetRankUpSkillIds(
        BattleSelfSkillInfoData_o *this,
        int32_t svtId,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D97D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D97D = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
         &entity,
         svtId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_1B8880C(result, v7);
  }
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
    sub_1B88814(result, v7);
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
  int32_t v5; // w2
  int32_t v6; // w3
  struct BattleBuffData_SkillRankChangeData_o *v7; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8
  int32_t size; // w2
  int v10; // w9
  __int64 v11; // x21
  __int64 v12; // x22
  BattleSelfSkillInfoData_o *v13; // x0
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  BattleSelfSkillInfoData_o *v16; // x21
  unsigned __int64 v17; // x25
  int32_t v18; // w23
  System_Collections_Generic_List_object__o *v19; // x22
  __int64 v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  BattleSelfSkillInfoData_o *v26; // x1
  Il2CppClass **v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v4 = this;
  if ( (byte_4A5D97C & 1) == 0 )
  {
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
    this = (BattleSelfSkillInfoData_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D97C = 1;
  }
  if ( !svtData )
    goto LABEL_21;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_21;
  v7 = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.commandAssistId;
  v4->fields.rankChangeData = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.rankChangeData, (int32_t)v7, v5, v6);
  rankUpList = v4->fields.rankUpList;
  if ( !rankUpList )
    goto LABEL_21;
  size = rankUpList->fields._size;
  v10 = rankUpList->fields._version + 1;
  rankUpList->fields._size = 0;
  rankUpList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)rankUpList->fields._items, 0, size, 0LL);
  v12 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v12;
  *(_QWORD *)&v28.fields.fakeValue = v11;
  v13 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v13,
                                        (int32_t)v13,
                                        v4->fields._skillId,
                                        v14);
  if ( !this )
    goto LABEL_21;
  v15 = *(_QWORD *)&this->fields.svtUniqueId;
  v16 = this;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1B88814(this, svtData);
      v18 = *(&v16->fields._skillId + v17);
      v19 = (System_Collections_Generic_List_object__o *)v4->fields.rankUpList;
      v20 = sub_1B887FC(BattleSkillInfoData_TypeInfo);
      *(_DWORD *)(v20 + 64) = -1;
      *(_QWORD *)(v20 + 88) = -1LL;
      *(_QWORD *)(v20 + 96) = -1LL;
      *(_DWORD *)(v20 + 104) = -1;
      System_Object___ctor((Il2CppObject *)v20, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            (BattleSkillInfoData_o *)v20,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v18,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0LL);
      if ( !v19 )
        break;
      items = v19->fields._items;
      v24 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
      ++v19->fields._version;
      if ( !items )
        break;
      v25 = v19->fields._size;
      v26 = this;
      if ( (unsigned int)v25 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)this,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + v25;
        v19->fields._size = v25 + 1;
        v27[4] = (Il2CppClass *)v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
      }
      LODWORD(v15) = v16->fields.svtUniqueId;
      if ( (__int64)++v17 >= (int)v15 )
        return;
    }
LABEL_21:
    sub_1B8880C(this, svtData);
  }
}