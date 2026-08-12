void CharaGraphListViewPatternGrandEquipRewardUp___ctor(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        System_Int64_array *otherEquipUserId,
        GrandServantListSlotData_o *grandSvtSlotData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  ConstantStrMaster_o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  struct System_Collections_Generic_HashSet_int__o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  struct System_Collections_Generic_HashSet_int__o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_596B30F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToHashSet_int___);
    byte_596B30F = 1;
  }
  CharaGraphListViewPatternGrandEquipNormal___ctor(
    (CharaGraphListViewPatternGrandEquipNormal_o *)this,
    otherEquipUserId,
    grandSvtSlotData,
    method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v10);
  v11 = (ConstantStrMaster_o *)Master_object;
  RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                (ConstantStrMaster_o *)Master_object,
                                                                                0);
  v13 = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                              RewardUpFuncCategory,
                                                              (const MethodInfo_38A08E0 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  this->fields.rewardUpCategoryList = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rewardUpCategoryList,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                               v11,
                                                                               0);
  v21 = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                              RewardUpIgnoreSvtId,
                                                              (const MethodInfo_38A08E0 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  this->fields.rewardUpIgnoreSvtIdList = v21;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rewardUpIgnoreSvtIdList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


bool CharaGraphListViewPatternGrandEquipRewardUp__Filter(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        UserServantEntity_o *userEquipEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x22
  __int64 v6; // x23
  System_Collections_Generic_HashSet_int__o *klass; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x23
  ServantSkillMaster_o *v15; // x21
  ServantSkillEntity_array *ServantSkillList; // x0
  System_Int32_array *EquipAllCategoryIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_int__bool__o *v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v4 = (Il2CppObject *)this;
  if ( (byte_596B310 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListViewPatternGrandEquipRewardUp__Filter_b__3_0__);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596B310 = 1;
  }
  if ( !userEquipEntity )
    goto LABEL_16;
  v5 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.fakeValue;
  klass = (System_Collections_Generic_HashSet_int__o *)v4[5].klass;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userEquipEntity, method);
  *(_QWORD *)&v21.fields.currentCryptoKey = v5;
  *(_QWORD *)&v21.fields.fakeValue = v6;
  this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                            v21,
                                                            0);
  if ( !klass )
    goto LABEL_16;
  if ( System_Collections_Generic_HashSet_int___Contains(
         klass,
         (int32_t)this,
         (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v13 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.fakeValue;
  v15 = (ServantSkillMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                            v22,
                                                            0);
  if ( !v15 )
LABEL_16:
    sub_2213CDC(this, userEquipEntity);
  ServantSkillList = ServantSkillMaster__getServantSkillList(v15, (int32_t)this, 0);
  EquipAllCategoryIdList = UserServantEntity__GetEquipAllCategoryIdList(userEquipEntity, ServantSkillList, 0);
  if ( EquipAllCategoryIdList )
  {
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipAllCategoryIdList;
    v19 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v19, v4, Method_CharaGraphListViewPatternGrandEquipRewardUp__Filter_b__3_0__, 0);
    return System_Linq_Enumerable__All_int_(
             v18,
             (System_Func_TSource__bool__o *)v19,
             (const MethodInfo_38646E0 *)Method_System_Linq_Enumerable_All_int___);
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

  if ( (byte_596B311 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_596B311 = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_2213CDC(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}