void CharaGraphListViewPatternGrandEquipRewardUp___ctor(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        System_Int64_array *otherEquipUserId,
        GrandServantListSlotData_o *grandSvtSlotData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  ConstantStrMaster_o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  struct System_Collections_Generic_HashSet_int__o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  struct System_Collections_Generic_HashSet_int__o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D27490 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToHashSet_int___);
    byte_4D27490 = 1;
  }
  CharaGraphListViewPatternGrandEquipNormal___ctor(
    (CharaGraphListViewPatternGrandEquipNormal_o *)this,
    otherEquipUserId,
    grandSvtSlotData,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v8);
  v9 = (ConstantStrMaster_o *)Master_object;
  RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                (ConstantStrMaster_o *)Master_object,
                                                                                0);
  v11 = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                              RewardUpFuncCategory,
                                                              (const MethodInfo_31E10D8 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  this->fields.rewardUpCategoryList = v11;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.rewardUpCategoryList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                               v9,
                                                                               0);
  v19 = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                              RewardUpIgnoreSvtId,
                                                              (const MethodInfo_31E10D8 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  this->fields.rewardUpIgnoreSvtIdList = v19;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.rewardUpIgnoreSvtIdList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


bool CharaGraphListViewPatternGrandEquipRewardUp__Filter(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        UserServantEntity_o *userEquipEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Collections_Generic_HashSet_int__o *klass; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  Il2CppObject *Master_object; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  ServantSkillMaster_o *v11; // x21
  ServantSkillEntity_array *ServantSkillList; // x0
  System_Int32_array *EquipAllCategoryIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_int__bool__o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = (Il2CppObject *)this;
  if ( (byte_4D27491 & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListViewPatternGrandEquipRewardUp__Filter_b__3_0__);
    sub_1C94098(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_All_int___);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D27491 = 1;
  }
  if ( !userEquipEntity )
    goto LABEL_16;
  klass = (System_Collections_Generic_HashSet_int__o *)v4[5].klass;
  v7 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v7;
  *(_QWORD *)&v17.fields.fakeValue = v6;
  this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                            v17,
                                                            0);
  if ( !klass )
    goto LABEL_16;
  if ( System_Collections_Generic_HashSet_int___Contains(
         klass,
         (int32_t)this,
         (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v10 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.fakeValue;
  v11 = (ServantSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                            v18,
                                                            0);
  if ( !v11 )
LABEL_16:
    sub_1C942F0(this, userEquipEntity);
  ServantSkillList = ServantSkillMaster__getServantSkillList(v11, (int32_t)this, 0);
  EquipAllCategoryIdList = UserServantEntity__GetEquipAllCategoryIdList(userEquipEntity, ServantSkillList, 0);
  if ( EquipAllCategoryIdList )
  {
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipAllCategoryIdList;
    v15 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v15, v4, Method_CharaGraphListViewPatternGrandEquipRewardUp__Filter_b__3_0__, 0);
    return System_Linq_Enumerable__All_int_(
             v14,
             (System_Func_TSource__bool__o *)v15,
             (const MethodInfo_31A5F8C *)Method_System_Linq_Enumerable_All_int___);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool CharaGraphListViewPatternGrandEquipRewardUp___Filter_b__3_0(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_4D27492 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D27492 = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_1C942F0(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}