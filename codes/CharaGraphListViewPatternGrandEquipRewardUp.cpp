void __fastcall CharaGraphListViewPatternGrandEquipRewardUp___ctor(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        System_Int64_array *otherEquipUserId,
        int64_t selectedEquipUserSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  ConstantStrMaster_o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpIgnoreSvtId; // x0

  if ( (byte_4B3F963 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ConstantStrMaster___, otherEquipUserId);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToHashSet_int___, v8);
    byte_4B3F963 = 1;
  }
  CharaGraphListViewPatternServantEquip___ctor((CharaGraphListViewPatternServantEquip_o *)this, 0LL);
  this->fields.otherUsedEquipUserSvtId = otherEquipUserId;
  sub_1BDB81C(&this->fields.otherUsedEquipUserSvtId);
  this->fields.selectedEquipUserSvtId = selectedEquipUserSvtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_1BDBAD4(0LL, v10);
  v11 = (ConstantStrMaster_o *)Master_object;
  RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                (ConstantStrMaster_o *)Master_object,
                                                                                0LL);
  this->fields.rewardUpCategoryList = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                                                            RewardUpFuncCategory,
                                                                                            (const MethodInfo_3074BCC *)Method_System_Linq_Enumerable_ToHashSet_int___);
  sub_1BDB81C(&this->fields.rewardUpCategoryList);
  RewardUpIgnoreSvtId = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpIgnoreSvtId(
                                                                               v11,
                                                                               0LL);
  this->fields.rewardUpIgnoreSvtIdList = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                                                               RewardUpIgnoreSvtId,
                                                                                               (const MethodInfo_3074BCC *)Method_System_Linq_Enumerable_ToHashSet_int___);
  sub_1BDB81C(&this->fields.rewardUpIgnoreSvtIdList);
}


bool __fastcall CharaGraphListViewPatternGrandEquipRewardUp__Filter(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        UserServantEntity_o *userEquipEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_HashSet_int__o *klass; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  System_Int32_array *EquipCategoryIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_int__bool__o *v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = (Il2CppObject *)this;
  if ( (byte_4B3F964 & 1) == 0 )
  {
    sub_1BDB878(&Method_CharaGraphListViewPatternGrandEquipRewardUp__Filter_b__3_0__, userEquipEntity);
    sub_1BDB878(&Method_System_Linq_Enumerable_All_int___, v5);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Contains__, v7);
    this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)sub_1BDB878(
                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                              v8);
    byte_4B3F964 = 1;
  }
  if ( !userEquipEntity )
    goto LABEL_11;
  klass = (System_Collections_Generic_HashSet_int__o *)v4[5].klass;
  v11 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  this = (CharaGraphListViewPatternGrandEquipRewardUp_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                            v16,
                                                            0LL);
  if ( !klass )
LABEL_11:
    sub_1BDBAD4(this, userEquipEntity);
  if ( System_Collections_Generic_HashSet_int___Contains(
         klass,
         (int32_t)this,
         (const MethodInfo_358C094 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return 0;
  }
  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(userEquipEntity, 1, 0LL);
  if ( !EquipCategoryIdList )
    return 0;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipCategoryIdList;
  v14 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v14, v4, Method_CharaGraphListViewPatternGrandEquipRewardUp__Filter_b__3_0__, 0LL);
  return System_Linq_Enumerable__All_int_(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_303D8D0 *)Method_System_Linq_Enumerable_All_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CharaGraphListViewPatternGrandEquipRewardUp___Filter_b__3_0(
        CharaGraphListViewPatternGrandEquipRewardUp_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *rewardUpCategoryList; // x0

  if ( (byte_4B3F965 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x);
    byte_4B3F965 = 1;
  }
  rewardUpCategoryList = this->fields.rewardUpCategoryList;
  if ( !rewardUpCategoryList )
    sub_1BDBAD4(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           rewardUpCategoryList,
           x,
           (const MethodInfo_358C094 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}