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

  if ( (byte_49FEBCA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FEBCA = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
         &entity,
         svtId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_1B64324(result);
  }
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
    sub_1B6432C(result, v10);
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  BattleSelfSkillInfoData_o *v21; // x21
  unsigned __int64 v22; // x25
  int32_t v23; // w23
  System_Collections_Generic_List_object__o *v24; // x22
  __int64 v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  BattleSelfSkillInfoData_o *v31; // x1
  Il2CppClass **v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  v4 = this;
  if ( (byte_49FEBC9 & 1) == 0 )
  {
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, svtData);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v6);
    this = (BattleSelfSkillInfoData_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FEBC9 = 1;
  }
  if ( !svtData )
    goto LABEL_21;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_21;
  v10 = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.commandAssistId;
  v4->fields.rankChangeData = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.rankChangeData, (int32_t)v10, v8, v9);
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
  *(_QWORD *)&v33.fields.currentCryptoKey = v15;
  *(_QWORD *)&v33.fields.fakeValue = v14;
  v16 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v33, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v16,
                                        (int32_t)v16,
                                        v4->fields._skillId,
                                        v17);
  if ( !this )
    goto LABEL_21;
  v20 = *(_QWORD *)&this->fields.svtUniqueId;
  v21 = this;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
        sub_1B6432C(this, v18);
      v23 = *(&v21->fields._skillId + v22);
      v24 = (System_Collections_Generic_List_object__o *)v4->fields.rankUpList;
      v25 = sub_1B64314(BattleSkillInfoData_TypeInfo, v18, v19);
      *(_DWORD *)(v25 + 64) = -1;
      *(_QWORD *)(v25 + 88) = -1LL;
      *(_QWORD *)(v25 + 96) = -1LL;
      *(_DWORD *)(v25 + 104) = -1;
      System_Object___ctor((Il2CppObject *)v25, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            (BattleSkillInfoData_o *)v25,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v23,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0LL);
      if ( !v24 )
        break;
      items = v24->fields._items;
      v29 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
      ++v24->fields._version;
      if ( !items )
        break;
      v30 = v24->fields._size;
      v31 = this;
      if ( (unsigned int)v30 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)this,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + v30;
        v24->fields._size = v30 + 1;
        v32[4] = (Il2CppClass *)v31;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
      }
      LODWORD(v20) = v21->fields.svtUniqueId;
      if ( (__int64)++v22 >= (int)v20 )
        return;
    }
LABEL_21:
    sub_1B64324(this);
  }
}