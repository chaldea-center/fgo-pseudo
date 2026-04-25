void RandomLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E001AE & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1CE6700(&RandomLimitCountManager_TypeInfo);
    byte_4E001AE = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1CE694C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v1,
    (const MethodInfo_35AB1DC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)RandomLimitCountManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t RandomLimitCountManager__ChoiceLimitCount(
        int64_t userSvtId,
        int32_t baseSvtId,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t dispLimitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  __int64 v15; // x23
  void *Master_object; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  int32_t GroupIndex; // w0
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  Il2CppObject *Key; // x21
  const MethodInfo *v23; // x1
  RandomLimitCountManager_c *v24; // x0
  int32_t Item; // w20
  NetworkManager_c *v27; // x0
  int64_t userIdNumber; // x24
  System_Collections_Generic_IEnumerable_TSource__o *LimitCountStageList_44279164; // x20
  System_Func_int__bool__o *v30; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  _DWORD *v32; // x20
  __int64 v33; // x0
  int v34; // w8
  RandomLimitCountManager_c *v35; // x0

  if ( (byte_4E001AD & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_int___);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&RandomLimitCountManager_TypeInfo);
    sub_1CE6700(&Method_RandomLimitCountManager___c__DisplayClass8_0__ChoiceLimitCount_b__0__);
    sub_1CE6700(&RandomLimitCountManager___c__DisplayClass8_0_TypeInfo);
    byte_4E001AD = 1;
  }
  v15 = sub_1CE694C(RandomLimitCountManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_29;
  *(_DWORD *)(v15 + 16) = svtId;
  *(_DWORD *)(v15 + 20) = limitCount;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  GroupIndex = RandomLimitCountManager__GetGroupIndex(svtId, limitCount, dispLimitCountStage, 0, v18);
  v20 = *(_DWORD *)(v15 + 16);
  *(_DWORD *)(v15 + 24) = GroupIndex;
  Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(userSvtId, v20, GroupIndex, v21);
  if ( !RandomLimitCountManager__IsChose((System_String_o *)Key, v23) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4DFE4CA )
    {
      sub_1CE6700(&NetworkManager_TypeInfo);
      byte_4DFE4CA = 1;
    }
    v27 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v27 = NetworkManager_TypeInfo;
    }
    userIdNumber = v27->static_fields->userIdNumber;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( Master_object )
    {
      Master_object = UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)Master_object,
                        userIdNumber,
                        baseSvtId,
                        0);
      if ( Master_object )
      {
        LimitCountStageList_44279164 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantCollectionEntity__GetLimitCountStageList_44279164(
                                                                                              (UserServantCollectionEntity_o *)Master_object,
                                                                                              *(_DWORD *)(v15 + 16),
                                                                                              lv,
                                                                                              *(_DWORD *)(v15 + 20),
                                                                                              1,
                                                                                              0);
        v30 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v30,
          (Il2CppObject *)v15,
          Method_RandomLimitCountManager___c__DisplayClass8_0__ChoiceLimitCount_b__0__,
          0);
        v31 = System_Linq_Enumerable__Where_int_(
                LimitCountStageList_44279164,
                (System_Func_TSource__bool__o *)v30,
                (const MethodInfo_324AC6C *)Method_System_Linq_Enumerable_Where_int___);
        Master_object = System_Linq_Enumerable__ToArray_int_(
                          v31,
                          (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Master_object )
        {
          v32 = Master_object;
          v33 = UnityEngine_Random__Range_72878252(0, *((_DWORD *)Master_object + 6), 0);
          if ( (unsigned int)v33 >= v32[6] )
            sub_1CE6960(v33);
          v34 = v33;
          v35 = RandomLimitCountManager_TypeInfo;
          Item = v32[v34 + 8];
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
            v35 = RandomLimitCountManager_TypeInfo;
          }
          Master_object = v35->static_fields->choiceRandomLimitCountDic;
          if ( Master_object )
          {
            System_Collections_Generic_Dictionary_object__int___Add(
              (System_Collections_Generic_Dictionary_object__int__o *)Master_object,
              Key,
              Item,
              (const MethodInfo_35ABB90 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
            if ( hasRewardStage )
              return Item;
            return Item - LimitCountUtility__IsRewardStage(Item, 0);
          }
        }
      }
    }
LABEL_29:
    sub_1CE6958(Master_object, v17);
  }
  v24 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v24 = RandomLimitCountManager_TypeInfo;
  }
  Master_object = v24->static_fields->choiceRandomLimitCountDic;
  if ( !Master_object )
    goto LABEL_29;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)Master_object,
           Key,
           (const MethodInfo_35ABB10 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( hasRewardStage )
    return Item;
  return Item - LimitCountUtility__IsRewardStage(Item, 0);
}


System_String_o *RandomLimitCountManager__GenerateKey(
        int64_t userSvtId,
        int32_t svtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+0h] [xbp-50h] BYREF
  int32_t v12; // [xsp+4h] [xbp-4Ch] BYREF
  int64_t v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E001AA & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&long_TypeInfo);
    sub_1CE6700(&StringLiteral_25594/*"{0}:{1}:{2}"*/);
    byte_4E001AA = 1;
  }
  v13 = userSvtId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
  v12 = svtId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v11 = groupIndex;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format_65164204((System_String_o *)StringLiteral_25594/*"{0}:{1}:{2}"*/, v7, v8, v9, 0);
}


int32_t RandomLimitCountManager__GetGroupIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v10; // x1
  int32_t v12; // w20
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E001AC & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    byte_4E001AC = 1;
  }
  entity = 0;
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
    if ( Master_object )
    {
      Master_object = ServantCostumeMaster__GetEntity(
                        (ServantCostumeMaster_o *)Master_object,
                        svtId,
                        limitCountStage,
                        0);
      if ( Master_object )
        return *((_DWORD *)Master_object + 6);
    }
LABEL_16:
    sub_1CE6958(Master_object, v10);
  }
  v12 = LimitCountUtility__ConvertStageToLimitCount(limitCount, limitCountStage, hasRewardStage, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Master_object, &entity, svtId, v12, 0) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_16;
  return ServantLimitAddEntity__GetRandomGroupIndex(entity, 0);
}


bool RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_4E001AB & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1CE6700(&RandomLimitCountManager_TypeInfo);
    byte_4E001AB = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v3->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1CE6958(0, method);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_35ABD84 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  RandomLimitCountManager_c *v1; // x0

  if ( (byte_4E001A9 & 1) == 0 )
  {
    sub_1CE6700(&RandomLimitCountManager_TypeInfo);
    byte_4E001A9 = 1;
  }
  v1 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v1 = RandomLimitCountManager_TypeInfo;
  }
  return v1->static_fields->enableRandomLimitCount;
}


void RandomLimitCountManager__set_EnableRandomLimitCount(bool value, const MethodInfo *method)
{
  bool v3; // w21
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  v3 = value;
  if ( (byte_4E001A8 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1CE6700(&RandomLimitCountManager_TypeInfo);
    byte_4E001A8 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  v4->static_fields->enableRandomLimitCount = v3;
  if ( !value )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v4->static_fields->choiceRandomLimitCountDic;
    if ( !choiceRandomLimitCountDic )
      sub_1CE6958(0, method);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_35ABD18 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}


void RandomLimitCountManager___c__DisplayClass8_0___ctor(
        RandomLimitCountManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RandomLimitCountManager___c__DisplayClass8_0___ChoiceLimitCount_b__0(
        RandomLimitCountManager___c__DisplayClass8_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t limitCount; // w21
  int32_t svtId; // w22

  if ( (byte_4E001AF & 1) == 0 )
  {
    sub_1CE6700(&RandomLimitCountManager_TypeInfo);
    byte_4E001AF = 1;
  }
  if ( e < 1 )
    return 0;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  return RandomLimitCountManager__GetGroupIndex(svtId, limitCount, e, 1, v3) == this->fields.groupIndex;
}