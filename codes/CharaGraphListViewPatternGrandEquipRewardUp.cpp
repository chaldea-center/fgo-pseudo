void CharaGraphListViewPatternGrandEquipRewardUp___ctor(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        System_Int64_array *otherEquipUserId,
        GrandServantListSlotData_o *grandSvtSlotData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  ConstantStrMaster_o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  struct System_Collections_Generic_HashSet_int__o *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0
  struct System_Collections_Generic_HashSet_int__o *v12; // x0

  if ( (byte_4C3DD6E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToHashSet_int___);
    byte_4C3DD6E = 1;
  }
  CharaGraphListViewPatternGrandEquipNormal___ctor(
    (CharaGraphListViewPatternGrandEquipNormal_o *)this,
    otherEquipUserId,
    grandSvtSlotData,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  v8 = (ConstantStrMaster_o *)Master_object;
  RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                (ConstantStrMaster_o *)Master_object,
                                                                                0);
  v10 = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                              RewardUpFuncCategory,
                                                              (const MethodInfo_312BB20 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  this->fields.rewardUpCategoryList = v10;
  sub_1C36FFC(&this->fields.rewardUpCategoryList, v10);
  RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                               v8,
                                                                               0);
  v12 = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                              RewardUpIgnoreSvtId,
                                                              (const MethodInfo_312BB20 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  this->fields.rewardUpIgnoreSvtIdList = v12;
  sub_1C36FFC(&this->fields.rewardUpIgnoreSvtIdList, v12);
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
  if ( (byte_4C3DD6F & 1) == 0 )
  {
    sub_1C37058(&Method_CharaGraphListViewPatternGrandEquipRewardUp__Filter_b__3_0__);
    sub_1C37058(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_All_int___);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3DD6F = 1;
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
  this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                            v17,
                                                            0);
  if ( !klass )
    goto LABEL_16;
  if ( System_Collections_Generic_HashSet_int___Contains(
         klass,
         (int32_t)this,
         (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v10 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.fakeValue;
  v11 = (ServantSkillMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                            v18,
                                                            0);
  if ( !v11 )
LABEL_16:
    sub_1C372B4(this);
  ServantSkillList = ServantSkillMaster__getServantSkillList(v11, (int32_t)this, 0);
  EquipAllCategoryIdList = UserServantEntity__GetEquipAllCategoryIdList(userEquipEntity, ServantSkillList, 0);
  if ( EquipAllCategoryIdList )
  {
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipAllCategoryIdList;
    v15 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v15, v4, Method_CharaGraphListViewPatternGrandEquipRewardUp__Filter_b__3_0__, 0);
    return System_Linq_Enumerable__All_int_(
             v14,
             (System_Func_TSource__bool__o *)v15,
             (const MethodInfo_30F1AB0 *)Method_System_Linq_Enumerable_All_int___);
  }
  return 0;
}


bool CharaGraphListViewPatternGrandEquipRewardUp___Filter_b__3_0(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_4C3DD70 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C3DD70 = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_1C372B4(0);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}