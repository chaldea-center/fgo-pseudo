void RandomLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933979 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_5933979 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v1,
    (const MethodInfo_3FBFF60 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RandomLimitCountManager_TypeInfo->static_fields,
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
  __int64 v18; // x2
  const MethodInfo *v19; // x4
  int32_t GroupIndex; // w0
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  Il2CppObject *Key; // x20
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  RandomLimitCountManager_c *v26; // x0
  int32_t Item; // w21
  NetworkManager_c *v29; // x0
  int64_t userIdNumber; // x24
  System_Collections_Generic_IEnumerable_TSource__o *LimitCountStageList_50097308; // x21
  System_Func_int__bool__o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  _DWORD *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x2
  int v37; // w8
  RandomLimitCountManager_c *v38; // x0

  if ( (byte_5933978 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&Method_RandomLimitCountManager___c__DisplayClass8_0__ChoiceLimitCount_b__0__);
    sub_21FFC50(&RandomLimitCountManager___c__DisplayClass8_0_TypeInfo);
    byte_5933978 = 1;
  }
  v15 = sub_21FFEBC(RandomLimitCountManager___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_30;
  *(_DWORD *)(v15 + 16) = svtId;
  *(_DWORD *)(v15 + 20) = limitCount;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v17, v18);
  GroupIndex = RandomLimitCountManager__GetGroupIndex(svtId, limitCount, dispLimitCountStage, 0, v19);
  v21 = *(_DWORD *)(v15 + 16);
  *(_DWORD *)(v15 + 24) = GroupIndex;
  Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(userSvtId, v21, GroupIndex, v22);
  if ( !RandomLimitCountManager__IsChose((System_String_o *)Key, v24) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v25);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v29 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v25);
      v29 = NetworkManager_TypeInfo;
    }
    userIdNumber = v29->static_fields->userIdNumber;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v25);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( Master_object )
    {
      Master_object = UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)Master_object,
                        userIdNumber,
                        baseSvtId,
                        0);
      if ( Master_object )
      {
        LimitCountStageList_50097308 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantCollectionEntity__GetLimitCountStageList_50097308(
                                                                                              (UserServantCollectionEntity_o *)Master_object,
                                                                                              *(_DWORD *)(v15 + 16),
                                                                                              lv,
                                                                                              *(_DWORD *)(v15 + 20),
                                                                                              1,
                                                                                              0);
        v32 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v32,
          (Il2CppObject *)v15,
          Method_RandomLimitCountManager___c__DisplayClass8_0__ChoiceLimitCount_b__0__,
          0);
        v33 = System_Linq_Enumerable__Where_int_(
                LimitCountStageList_50097308,
                (System_Func_TSource__bool__o *)v32,
                (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
        Master_object = System_Linq_Enumerable__ToArray_int_(
                          v33,
                          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Master_object )
        {
          v34 = Master_object;
          v35 = UnityEngine_Random__Range_83187376(0, *((_DWORD *)Master_object + 6), 0);
          if ( (unsigned int)v35 >= v34[6] )
            sub_21FFED4(v35);
          v37 = v35;
          v38 = RandomLimitCountManager_TypeInfo;
          Item = v34[v37 + 8];
          if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v17, v36);
            v38 = RandomLimitCountManager_TypeInfo;
          }
          Master_object = v38->static_fields->choiceRandomLimitCountDic;
          if ( Master_object )
          {
            System_Collections_Generic_Dictionary_object__int___Add(
              (System_Collections_Generic_Dictionary_object__int__o *)Master_object,
              Key,
              Item,
              (const MethodInfo_3FC08F4 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
            if ( hasRewardStage )
              return Item;
            goto LABEL_11;
          }
        }
      }
    }
LABEL_30:
    sub_21FFECC(Master_object, v17);
  }
  v26 = RandomLimitCountManager_TypeInfo;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v17, v25);
    v26 = RandomLimitCountManager_TypeInfo;
  }
  Master_object = v26->static_fields->choiceRandomLimitCountDic;
  if ( !Master_object )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)Master_object,
           Key,
           (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( !hasRewardStage )
LABEL_11:
    Item -= LimitCountUtility__IsRewardStage(Item, 0);
  return Item;
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
  int32_t v11; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+4h] [xbp-3Ch] BYREF
  int64_t v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5933975 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26526/*"{0}:{1}:{2}"*/);
    byte_5933975 = 1;
  }
  v13 = userSvtId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v13);
  v12 = svtId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
  v11 = groupIndex;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v11);
  return System_String__Format_75484644((System_String_o *)StringLiteral_26526/*"{0}:{1}:{2}"*/, v7, v8, v9, 0);
}


int32_t RandomLimitCountManager__GetGroupIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  void *Master_object; // x0
  __int64 v12; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t v16; // w20
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5933977 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5933977 = 1;
  }
  entity = 0;
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
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
    sub_21FFECC(Master_object, v12);
  }
  v16 = LimitCountUtility__ConvertStageToLimitCount(limitCount, limitCountStage, hasRewardStage, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Master_object, &entity, svtId, v16, 0) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_16;
  return ServantLimitAddEntity__GetRandomGroupIndex(entity, 0);
}


bool RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  __int64 v2; // x2
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_5933976 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_5933976 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method, v2);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v4->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_21FFECC(0, method);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  RandomLimitCountManager_c *v3; // x0

  if ( (byte_5933974 & 1) == 0 )
  {
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_5933974 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v1, v2);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  return v3->static_fields->enableRandomLimitCount;
}


void RandomLimitCountManager__set_EnableRandomLimitCount(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v4; // w21
  RandomLimitCountManager_c *v5; // x0
  struct RandomLimitCountManager_StaticFields *static_fields; // x8

  v4 = value;
  if ( (byte_5933973 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_5933973 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method, v2);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->enableRandomLimitCount = v4;
  if ( !value )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method, v2);
      static_fields = RandomLimitCountManager_TypeInfo->static_fields;
    }
    if ( !static_fields->choiceRandomLimitCountDic )
      sub_21FFECC(0, method);
    System_Collections_Generic_Dictionary_object__int___Clear(
      (System_Collections_Generic_Dictionary_object__int__o *)static_fields->choiceRandomLimitCountDic,
      (const MethodInfo_3FC0A7C *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}


void RandomLimitCountManager___c__DisplayClass8_0___ctor(
        RandomLimitCountManager___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool RandomLimitCountManager___c__DisplayClass8_0___ChoiceLimitCount_b__0(
        RandomLimitCountManager___c__DisplayClass8_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t svtId; // w21
  int32_t limitCount; // w22

  if ( (byte_593397A & 1) == 0 )
  {
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_593397A = 1;
  }
  if ( e < 1 )
    return 0;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, *(_QWORD *)&e, method);
  return RandomLimitCountManager__GetGroupIndex(svtId, limitCount, e, 1, v3) == this->fields.groupIndex;
}