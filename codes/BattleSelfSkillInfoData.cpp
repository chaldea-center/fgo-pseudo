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

  if ( (byte_4A00CCC & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B64870(&int___TypeInfo, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A00CCC = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
         &entity,
         svtId,
         (const MethodInfo_30D61D4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_1B64ACC(result, v10);
  }
  result = (System_Int32_array *)sub_1B64918(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
    sub_1B64AD4(result, v10);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleBuffData_SkillRankChangeData_o *v10; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8
  int32_t size; // w2
  int v13; // w9
  __int64 v14; // x21
  __int64 v15; // x22
  BattleSelfSkillInfoData_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  BattleSelfSkillInfoData_o *v19; // x21
  unsigned __int64 v20; // x25
  int32_t v21; // w23
  System_Collections_Generic_List_object__o *v22; // x22
  __int64 v23; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  BattleSelfSkillInfoData_o *v29; // x1
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v4 = this;
  if ( (byte_4A00CCB & 1) == 0 )
  {
    sub_1B64870(&BattleSkillInfoData_TypeInfo, svtData);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v6);
    this = (BattleSelfSkillInfoData_o *)sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A00CCB = 1;
  }
  if ( !svtData )
    goto LABEL_21;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_21;
  v10 = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.commandAssistId;
  v4->fields.rankChangeData = v10;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.rankChangeData, (int32_t)v10, v8, v9);
  rankUpList = v4->fields.rankUpList;
  if ( !rankUpList )
    goto LABEL_21;
  size = rankUpList->fields._size;
  v13 = rankUpList->fields._version + 1;
  rankUpList->fields._size = 0;
  rankUpList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)rankUpList->fields._items, 0, size, 0LL);
  v15 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v15;
  *(_QWORD *)&v31.fields.fakeValue = v14;
  v16 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v31, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v16,
                                        (int32_t)v16,
                                        v4->fields._skillId,
                                        v17);
  if ( !this )
    goto LABEL_21;
  v18 = *(_QWORD *)&this->fields.svtUniqueId;
  v19 = this;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
        sub_1B64AD4(this, svtData);
      v21 = *(&v19->fields._skillId + v20);
      v22 = (System_Collections_Generic_List_object__o *)v4->fields.rankUpList;
      v23 = sub_1B64ABC(BattleSkillInfoData_TypeInfo);
      *(_DWORD *)(v23 + 64) = -1;
      *(_QWORD *)(v23 + 88) = -1LL;
      *(_QWORD *)(v23 + 96) = -1LL;
      *(_DWORD *)(v23 + 104) = -1;
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            (BattleSkillInfoData_o *)v23,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v21,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0LL);
      if ( !v22 )
        break;
      items = v22->fields._items;
      v27 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
      ++v22->fields._version;
      if ( !items )
        break;
      v28 = v22->fields._size;
      v29 = this;
      if ( (unsigned int)v28 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)this,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + v28;
        v22->fields._size = v28 + 1;
        v30[4] = (Il2CppClass *)v29;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v29, v24, v25);
      }
      LODWORD(v18) = v19->fields.svtUniqueId;
      if ( (__int64)++v20 >= (int)v18 )
        return;
    }
LABEL_21:
    sub_1B64ACC(this, svtData);
  }
}