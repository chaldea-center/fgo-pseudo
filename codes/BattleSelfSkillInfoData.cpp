System_Int32_array *BattleSelfSkillInfoData__GetRankUpSkillIds(
        BattleSelfSkillInfoData_o *this,
        int32_t svtId,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C29FFB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C29FFB = 1;
  }
  entity = 0;
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
         &entity,
         svtId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0);
LABEL_11:
    sub_1C2D6EC(result, v7);
  }
  result = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 1);
  if ( !result )
    goto LABEL_11;
  if ( !LODWORD(result->max_length) )
    sub_1C2D6F4(result, v7, v8);
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
  const MethodInfo *v6; // x3
  struct BattleBuffData_SkillRankChangeData_o *v7; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8
  int32_t size; // w2
  int v10; // w9
  __int64 v11; // x21
  __int64 v12; // x22
  BattleSelfSkillInfoData_o *v13; // x0
  const MethodInfo *v14; // x3
  __int64 v15; // x2
  __int64 v16; // x8
  BattleSelfSkillInfoData_o *v17; // x21
  unsigned __int64 v18; // x25
  int32_t v19; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  __int64 v21; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  BattleSelfSkillInfoData_o *v27; // x1
  Il2CppClass **v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  v4 = this;
  if ( (byte_4C29FFA & 1) == 0 )
  {
    sub_1C2D490(&BattleSkillInfoData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
    this = (BattleSelfSkillInfoData_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C29FFA = 1;
  }
  if ( !svtData )
    goto LABEL_21;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0);
  if ( !this )
    goto LABEL_21;
  v7 = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.cutInId;
  v4->fields.rankChangeData = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.rankChangeData, (int32_t)v7, v5, v6);
  rankUpList = v4->fields.rankUpList;
  if ( !rankUpList )
    goto LABEL_21;
  size = rankUpList->fields._size;
  v10 = rankUpList->fields._version + 1;
  rankUpList->fields._size = 0;
  rankUpList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)rankUpList->fields._items, 0, size, 0);
  v12 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v12;
  *(_QWORD *)&v29.fields.fakeValue = v11;
  v13 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v29, 0);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v13,
                                        (int32_t)v13,
                                        v4->fields._skillId,
                                        v14);
  if ( !this )
    goto LABEL_21;
  v16 = *(_QWORD *)&this->fields.svtUniqueId;
  v17 = this;
  if ( (int)v16 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        sub_1C2D6F4(this, svtData, v15);
      v19 = *(&v17->fields._skillId + v18);
      v20 = (System_Collections_Generic_List_object__o *)v4->fields.rankUpList;
      v21 = sub_1C2D6DC(BattleSkillInfoData_TypeInfo);
      *(_DWORD *)(v21 + 64) = -1;
      *(_QWORD *)(v21 + 88) = -1;
      *(_QWORD *)(v21 + 96) = -1;
      *(_DWORD *)(v21 + 104) = -1;
      *(_BYTE *)(v21 + 152) = 1;
      System_Object___ctor((Il2CppObject *)v21, 0);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            (BattleSkillInfoData_o *)v21,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v19,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0);
      if ( !v20 )
        break;
      items = v20->fields._items;
      v25 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
      ++v20->fields._version;
      if ( !items )
        break;
      v26 = v20->fields._size;
      v27 = this;
      if ( (unsigned int)v26 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)this,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + v26;
        v20->fields._size = v26 + 1;
        v28[4] = (Il2CppClass *)v27;
        sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
      }
      LODWORD(v16) = v17->fields.svtUniqueId;
      if ( (__int64)++v18 >= (int)v16 )
        return;
    }
LABEL_21:
    sub_1C2D6EC(this, svtData);
  }
}