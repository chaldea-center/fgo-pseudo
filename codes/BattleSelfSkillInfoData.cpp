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
  __int64 v11; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B04C40 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1BC3008(&int___TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B04C40 = 1;
  }
  entity = 0LL;
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_11;
  result = (System_Int32_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !result )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)result,
         &entity,
         svtId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    result = (System_Int32_array *)entity;
    if ( entity )
      return ServantEntity__GetRankUpSkillIds((ServantEntity_o *)entity, baseSkillId, 0LL);
LABEL_11:
    sub_1BC3264(result, v10);
  }
  result = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 1LL);
  if ( !result )
    goto LABEL_11;
  if ( !result->max_length )
    sub_1BC326C(result, v10, v11);
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
  const MethodInfo *v9; // x3
  struct BattleBuffData_SkillRankChangeData_o *v10; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *rankUpList; // x8
  int32_t size; // w2
  int v13; // w9
  __int64 v14; // x21
  __int64 v15; // x22
  BattleSelfSkillInfoData_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 v18; // x2
  __int64 v19; // x8
  BattleSelfSkillInfoData_o *v20; // x21
  unsigned __int64 v21; // x25
  int32_t v22; // w23
  System_Collections_Generic_List_object__o *v23; // x22
  __int64 v24; // x24
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  BattleSelfSkillInfoData_o *v30; // x1
  Il2CppClass **v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v4 = this;
  if ( (byte_4B04C3F & 1) == 0 )
  {
    sub_1BC3008(&BattleSkillInfoData_TypeInfo, svtData);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v6);
    this = (BattleSelfSkillInfoData_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B04C3F = 1;
  }
  if ( !svtData )
    goto LABEL_21;
  this = (BattleSelfSkillInfoData_o *)BattleServantData__get_BuffData(svtData, 0LL);
  if ( !this )
    goto LABEL_21;
  v10 = *(struct BattleBuffData_SkillRankChangeData_o **)&this->fields.commandAssistId;
  v4->fields.rankChangeData = v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.rankChangeData, (int32_t)v10, v8, v9);
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
  *(_QWORD *)&v32.fields.currentCryptoKey = v15;
  *(_QWORD *)&v32.fields.fakeValue = v14;
  v16 = (BattleSelfSkillInfoData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v32, 0LL);
  this = (BattleSelfSkillInfoData_o *)BattleSelfSkillInfoData__GetRankUpSkillIds(
                                        v16,
                                        (int32_t)v16,
                                        v4->fields._skillId,
                                        v17);
  if ( !this )
    goto LABEL_21;
  v19 = *(_QWORD *)&this->fields.svtUniqueId;
  v20 = this;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
        sub_1BC326C(this, svtData, v18);
      v22 = *(&v20->fields._skillId + v21);
      v23 = (System_Collections_Generic_List_object__o *)v4->fields.rankUpList;
      v24 = sub_1BC3254(BattleSkillInfoData_TypeInfo);
      *(_DWORD *)(v24 + 64) = -1;
      *(_QWORD *)(v24 + 88) = -1LL;
      *(_QWORD *)(v24 + 96) = -1LL;
      *(_DWORD *)(v24 + 104) = -1;
      *(_BYTE *)(v24 + 152) = 1;
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      this = (BattleSelfSkillInfoData_o *)BattleServantData__SetSkillInfo(
                                            svtData,
                                            (BattleSkillInfoData_o *)v24,
                                            v4->fields.type,
                                            v4->fields.index,
                                            v22,
                                            v4->fields.skilllv,
                                            v4->fields.userCommandCodeId,
                                            v4->fields.commandAssistId,
                                            0LL);
      if ( !v23 )
        break;
      items = v23->fields._items;
      v28 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
      ++v23->fields._version;
      if ( !items )
        break;
      v29 = v23->fields._size;
      v30 = this;
      if ( (unsigned int)v29 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)this,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + v29;
        v23->fields._size = v29 + 1;
        v31[4] = (Il2CppClass *)v30;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v30, v25, v26);
      }
      LODWORD(v19) = v20->fields.svtUniqueId;
      if ( (__int64)++v21 >= (int)v19 )
        return;
    }
LABEL_21:
    sub_1BC3264(this, svtData);
  }
}