void RandomLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA7C7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA7C7 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v1,
    (const MethodInfo_34E8DA8 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v1;
  sub_1C7BA8C(
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
        UserServantEntity_o *userServantEntity,
        int32_t dispLimitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  __int64 v7; // x20
  int64_t GroupIndex; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v16; // x22
  const MethodInfo *v17; // x3
  UserServantEntity_o *v18; // x23
  __int64 v19; // x8
  __int128 v20; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v21; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // q0
  int64_t v23; // x21
  int64_t v24; // x0
  const MethodInfo *v25; // x3
  Il2CppObject *Key; // x21
  const MethodInfo *v27; // x1
  RandomLimitCountManager_c *v28; // x0
  int32_t Item; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // q0
  UserServantCollectionMaster_o *v33; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x8
  int64_t v35; // x24
  __int64 v36; // x25
  __int64 v37; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  UserServantCollectionEntity_o *v39; // x22
  int32_t currentCryptoKey; // w23
  System_Collections_Generic_IEnumerable_TSource__o *LimitCountStageList_43682576; // x22
  System_Func_int__bool__o *v42; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  int64_t v44; // x20
  __int64 v45; // x0
  int v46; // w8
  RandomLimitCountManager_c *v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4CEA7C5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    sub_1C7BAE8(&Method_RandomLimitCountManager___c__DisplayClass10_0__ChoiceLimitCount_b__0__);
    sub_1C7BAE8(&RandomLimitCountManager___c__DisplayClass10_0_TypeInfo);
    byte_4CEA7C5 = 1;
  }
  v7 = sub_1C7BD34(RandomLimitCountManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_35;
  *(_QWORD *)(v7 + 16) = userServantEntity;
  v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v7 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)userServantEntity, v10, v11, v12, v13, v14, v15);
  v18 = *(UserServantEntity_o **)(v7 + 16);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  GroupIndex = RandomLimitCountManager__GetGroupIndex(v18, dispLimitCountStage, 0, v17);
  v19 = *(_QWORD *)(v7 + 16);
  *(_DWORD *)(v7 + 24) = GroupIndex;
  if ( !v19 )
    goto LABEL_35;
  v20 = *(_OWORD *)(v19 + 64);
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(v19 + 48);
  *(_OWORD *)&v51.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v50 = v51;
  GroupIndex = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v50, 0);
  v21 = *v16;
  if ( !*v16 )
    goto LABEL_35;
  v22 = v21[2];
  v23 = GroupIndex;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v49.fields.currentCryptoKey = v21[1];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v49.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v49, 0);
  Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(v23, v24, *(_DWORD *)(v7 + 24), v25);
  if ( !RandomLimitCountManager__IsChose((System_String_o *)Key, v27) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    GroupIndex = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    v31 = *v16;
    if ( *v16 )
    {
      v32 = v31[4];
      v33 = (UserServantCollectionMaster_o *)GroupIndex;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v51.fields.currentCryptoKey = v31[3];
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v51.fields.fakeValue = v32;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v48 = v51;
      GroupIndex = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v48, 0);
      v34 = *v16;
      if ( *v16 )
      {
        v35 = GroupIndex;
        v37 = *(_QWORD *)&v34[5].fields.currentCryptoKey;
        v36 = *(_QWORD *)&v34[5].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v37;
        *(_QWORD *)&v52.fields.fakeValue = v36;
        GroupIndex = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v52, 0);
        if ( v33 )
        {
          GroupIndex = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v33, v35, GroupIndex, 0);
          v38 = *v16;
          if ( *v16 )
          {
            v39 = (UserServantCollectionEntity_o *)GroupIndex;
            currentCryptoKey = v38[16].fields.currentCryptoKey;
            GroupIndex = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v38[6], 0);
            if ( v39 )
            {
              LimitCountStageList_43682576 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantCollectionEntity__GetLimitCountStageList_43682576(
                                                                                                    v39,
                                                                                                    currentCryptoKey,
                                                                                                    GroupIndex,
                                                                                                    1,
                                                                                                    0);
              v42 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
              System_Func_int__bool____ctor(
                v42,
                (Il2CppObject *)v7,
                Method_RandomLimitCountManager___c__DisplayClass10_0__ChoiceLimitCount_b__0__,
                0);
              v43 = System_Linq_Enumerable__Where_int_(
                      LimitCountStageList_43682576,
                      (System_Func_TSource__bool__o *)v42,
                      (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
              GroupIndex = (int64_t)System_Linq_Enumerable__ToArray_int_(
                                      v43,
                                      (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( GroupIndex )
              {
                v44 = GroupIndex;
                v45 = UnityEngine_Random__Range_71829860(0, *(_DWORD *)(GroupIndex + 24), 0);
                if ( (unsigned int)v45 >= *(_DWORD *)(v44 + 24) )
                  sub_1C7BD48(v45);
                v46 = v45;
                v47 = RandomLimitCountManager_TypeInfo;
                Item = *(_DWORD *)(v44 + 4LL * v46 + 32);
                if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
                  v47 = RandomLimitCountManager_TypeInfo;
                }
                GroupIndex = (int64_t)v47->static_fields->choiceRandomLimitCountDic;
                if ( GroupIndex )
                {
                  System_Collections_Generic_Dictionary_object__int___Add(
                    (System_Collections_Generic_Dictionary_object__int__o *)GroupIndex,
                    Key,
                    Item,
                    (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
                  if ( hasRewardStage )
                    return Item;
                  return Item - LimitCountUtility__IsRewardStage(Item, 0);
                }
              }
            }
          }
        }
      }
    }
LABEL_35:
    sub_1C7BD40(GroupIndex, v9);
  }
  v28 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v28 = RandomLimitCountManager_TypeInfo;
  }
  GroupIndex = (int64_t)v28->static_fields->choiceRandomLimitCountDic;
  if ( !GroupIndex )
    goto LABEL_35;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)GroupIndex,
           Key,
           (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( hasRewardStage )
    return Item;
  return Item - LimitCountUtility__IsRewardStage(Item, 0);
}


System_String_o *RandomLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v40; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v41; // [xsp+10h] [xbp-30h] BYREF
  int64_t v42; // [xsp+18h] [xbp-28h] BYREF

  v41 = userSvtId;
  v42 = userId;
  v40 = groupIndex;
  if ( (byte_4CEA7C0 & 1) == 0 )
  {
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_1451/*":"*/);
    byte_4CEA7C0 = 1;
  }
  v4 = sub_1C7BB90(string___TypeInfo, 5);
  v5 = System_Int64__ToString((int64_t)&v42, 0);
  if ( !v4 )
    sub_1C7BD40(v5, v6);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)v5, v7, v8, v9, v10, v11, v12);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v19 = StringLiteral_1451/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1451/*":"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 40), v19, v13, v14, v15, v16, v17, v18);
  v5 = System_Int64__ToString((int64_t)&v41, 0);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 48), (int32_t)v5, v20, v21, v22, v23, v24, v25),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v32 = StringLiteral_1451/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1451/*":"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 56), v32, v26, v27, v28, v29, v30, v31),
        v5 = System_Int32__ToString((int32_t)&v40, 0),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C7BD48(v5);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 64), (int32_t)v5, v33, v34, v35, v36, v37, v38);
  return System_String__Concat_64217444((System_String_array *)v4, 0);
}


int32_t RandomLimitCountManager__GetChoiceLimitCount(UserServantEntity_o *entity, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x20
  __int64 v6; // x21
  BalanceConfig_c **v7; // x27
  int32_t v8; // w20
  BalanceConfig_c *v9; // x8
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  ServantCostumeMaster_o *v15; // x20
  int32_t v16; // w21
  ServantCostumeEntity_o *v17; // x0
  int32_t Item; // w19
  Il2CppObject *Master_object; // x0
  __int64 v20; // x21
  __int64 v21; // x22
  ServantLimitAddMaster_o *v22; // x20
  int32_t v23; // w21
  __int128 v24; // q1
  int64_t v25; // x0
  __int128 v26; // q1
  int64_t v27; // x20
  const MethodInfo *v28; // x3
  int64_t v29; // x22
  Il2CppObject *Key; // x21
  const MethodInfo *v31; // x1
  RandomLimitCountManager_c *v32; // x0
  Il2CppObject *v33; // x0
  __int128 v34; // q0
  UserServantCollectionMaster_o *v35; // x22
  int64_t v36; // x0
  __int64 v37; // x24
  __int64 v38; // x25
  int64_t v39; // x23
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v41; // x22
  int32_t lv; // w23
  __int64 v43; // x24
  __int64 v44; // x25
  int32_t v45; // w0
  System_Int32_array *CostumeList_43677212; // x0
  System_Int32_array *RandomLimitCountList; // x23
  Il2CppObject *v48; // x24
  Il2CppObject *v49; // x25
  System_Collections_Generic_List_int__o *v50; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v52; // x20
  int32_t v53; // w26
  BalanceConfig_c *v54; // x0
  BalanceConfig_c **v55; // x21
  __int64 v56; // x27
  __int64 v57; // x28
  __int64 v58; // x27
  __int64 v59; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  __int64 v63; // x19
  __int64 v64; // x21
  int32_t v65; // w0
  RandomLimitCountManager_c *v66; // x0
  Il2CppObject *v68; // [xsp+10h] [xbp-100h]
  int32_t groupIndex; // [xsp+1Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+80h] [xbp-90h]
  ServantLimitAddEntity_o *v74; // [xsp+A0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4CEA7C2 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA7C2 = 1;
  }
  v74 = 0;
  entitya = 0;
  if ( entity )
  {
    v4 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v3 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v76.fields.currentCryptoKey = v4;
    *(_QWORD *)&v76.fields.fakeValue = v3;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v76, 0) )
    {
      v6 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v5 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v77.fields.currentCryptoKey = v6;
      *(_QWORD *)&v77.fields.fakeValue = v5;
      v7 = &BalanceConfig_TypeInfo;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v77, 0);
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( v8 <= v9->static_fields->ServantLimitMax )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0;
        v21 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v22 = (ServantLimitAddMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v79.fields.currentCryptoKey = v21;
        *(_QWORD *)&v79.fields.fakeValue = v20;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v79, 0);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                      entity->fields.dispLimitCount,
                                      0);
        if ( !v22 )
          goto LABEL_89;
        if ( ServantLimitAddMaster__TryGetEntity(v22, &entitya, v23, (int32_t)Instance, 0) )
        {
          Instance = (DataManager_o *)entitya;
          if ( !entitya )
            goto LABEL_89;
          groupIndex = ServantLimitAddEntity__GetRandomGroupIndex(entitya, 0);
          goto LABEL_28;
        }
      }
      else
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_89;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v14 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v15 = (ServantCostumeMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v78.fields.currentCryptoKey = v14;
        *(_QWORD *)&v78.fields.fakeValue = v13;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v78, 0);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                      entity->fields.dispLimitCount,
                                      0);
        if ( !v15 )
          goto LABEL_89;
        v17 = ServantCostumeMaster__GetEntity(v15, v16, (int32_t)Instance, 0);
        if ( v17 )
        {
          groupIndex = v17->fields.groupIndex;
LABEL_28:
          v24 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v73.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v72 = v73;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v72, 0);
          v26 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
          v27 = v25;
          *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v71.fields.fakeValue = v26;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v71, 0);
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(v27, v29, groupIndex, v28);
          if ( RandomLimitCountManager__IsChose((System_String_o *)Key, v31) )
          {
            v32 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v32 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v32->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
              return System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                       Key,
                       (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_89;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_89;
          v33 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          v34 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          v35 = (UserServantCollectionMaster_o *)v33;
          *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v73.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v70 = v73;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v70, 0);
          v38 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v37 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          v39 = v36;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v80.fields.currentCryptoKey = v38;
          *(_QWORD *)&v80.fields.fakeValue = v37;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v80, 0);
          if ( !v35 )
            goto LABEL_89;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v35, v39, (int32_t)Instance, 0);
          if ( EntityDefinitely )
          {
            v41 = EntityDefinitely;
            lv = entity->fields.lv;
            v44 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v43 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v81.fields.currentCryptoKey = v44;
            *(_QWORD *)&v81.fields.fakeValue = v43;
            v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v81, 0);
            CostumeList_43677212 = UserServantCollectionEntity__getCostumeList_43677212(v41, lv, v45, 0);
          }
          else
          {
            CostumeList_43677212 = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
          }
          RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_43677212, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v68 = Key;
          v48 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          v49 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v50 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v50,
            (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !RandomLimitCountList )
            goto LABEL_89;
          max_length = RandomLimitCountList->max_length;
          if ( (int)max_length < 1 )
          {
LABEL_78:
            v64 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v63 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v84.fields.currentCryptoKey = v64;
            *(_QWORD *)&v84.fields.fakeValue = v63;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v84, 0);
            if ( (_DWORD)Instance )
            {
              if ( !v50 )
                goto LABEL_89;
              v65 = UnityEngine_Random__Range_71829860(0, v50->fields._size, 0);
              Item = System_Collections_Generic_List_int___get_Item(
                       v50,
                       v65,
                       (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
            }
            else
            {
              Item = 1;
            }
            v66 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v66 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v66->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
            {
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                v68,
                Item,
                (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              return Item;
            }
LABEL_89:
            sub_1C7BD40(Instance, v11);
          }
          v52 = 0;
          while ( 1 )
          {
            if ( v52 >= (unsigned int)max_length )
              sub_1C7BD48(Instance);
            v53 = RandomLimitCountList->m_Items[v52];
            if ( v53 == -1 )
              goto LABEL_77;
            v54 = *v7;
            if ( !(*v7)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v54);
              v54 = *v7;
            }
            v55 = v7;
            if ( v53 <= v54->static_fields->ServantLimitMax )
            {
              v74 = 0;
              v59 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v58 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v83.fields.currentCryptoKey = v59;
              *(_QWORD *)&v83.fields.fakeValue = v58;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v83, 0);
              if ( !v49 )
                goto LABEL_89;
              v7 = v55;
              if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v49, &v74, (int32_t)Instance, v53, 0) )
              {
                Instance = (DataManager_o *)v74;
                if ( !v74 )
                  goto LABEL_89;
                Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v74, 0);
              }
              else
              {
                Instance = 0;
              }
              if ( (_DWORD)Instance == groupIndex )
              {
LABEL_72:
                if ( !v50 )
                  goto LABEL_89;
                items = v50->fields._items;
                v61 = Method_System_Collections_Generic_List_int__Add__;
                ++v50->fields._version;
                if ( !items )
                  goto LABEL_89;
                size = v50->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v50,
                    v53,
                    *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                }
                else
                {
                  v50->fields._size = size + 1;
                  items->m_Items[size] = v53;
                }
              }
            }
            else
            {
              v57 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v56 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v82.fields.currentCryptoKey = v57;
              *(_QWORD *)&v82.fields.fakeValue = v56;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v82, 0);
              if ( !v48 )
                goto LABEL_89;
              Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                            (ServantCostumeMaster_o *)v48,
                                            (int32_t)Instance,
                                            v53,
                                            0);
              v7 = v55;
              if ( Instance && LODWORD(Instance->fields.m_CancellationTokenSource) == groupIndex )
                goto LABEL_72;
            }
LABEL_77:
            LODWORD(max_length) = RandomLimitCountList->max_length;
            if ( (__int64)++v52 >= (int)max_length )
              goto LABEL_78;
          }
        }
      }
      groupIndex = 0;
      goto LABEL_28;
    }
  }
  return -1;
}


int32_t RandomLimitCountManager__GetChoiceLimitCount_35651252(ServantLeaderInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Int32_array *randomLimitCountTargets; // x8
  int64_t userId; // x20
  int64_t userSvtId; // x21
  Il2CppObject *Key; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  RandomLimitCountManager_c *v10; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0
  int32_t Item; // w19
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v15; // x21
  struct System_Int32_array *v16; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  int32_t v19; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int32_t v23; // w0
  RandomLimitCountManager_c *v24; // x8

  if ( (byte_4CEA7C3 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&OptionManager_TypeInfo);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA7C3 = 1;
  }
  if ( !info )
    return -1;
  randomLimitCountTargets = info->fields.randomLimitCountTargets;
  if ( !randomLimitCountTargets || !randomLimitCountTargets->max_length )
    return -1;
  userId = info->fields.userId;
  userSvtId = info->fields.userSvtId;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(userId, userSvtId, 0, v2);
  if ( RandomLimitCountManager__IsChose((System_String_o *)Key, v8) )
  {
    v10 = RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v10 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v10->static_fields->choiceRandomLimitCountDic;
    if ( choiceRandomLimitCountDic )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               choiceRandomLimitCountDic,
               Key,
               (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_49:
    sub_1C7BD40(choiceRandomLimitCountDic, v9);
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !choiceRandomLimitCountDic )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)choiceRandomLimitCountDic,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = info->fields.randomLimitCountTargets;
  if ( !v16 )
    goto LABEL_49;
  max_length = v16->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C7BD48(choiceRandomLimitCountDic);
      v19 = v16->m_Items[i];
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)OptionManager__GetSpoilerSetting(0);
      if ( ((unsigned __int8)choiceRandomLimitCountDic & 1) == 0 )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                                                                              (ServantLimitSpoilerProtectionMaster_o *)MasterData_object,
                                                                                              info->fields.svtId,
                                                                                              v19,
                                                                                              0);
        if ( ((unsigned __int8)choiceRandomLimitCountDic & 1) == 0 )
          goto LABEL_43;
      }
      choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)BalanceConfig_TypeInfo;
      }
      if ( v19 == choiceRandomLimitCountDic[2].fields._entries->m_Items[0].fields.next )
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)OptionManager__GetFriendImageLimitCount(0);
        if ( ((unsigned __int8)choiceRandomLimitCountDic & 1) == 0 )
          goto LABEL_43;
        choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)BalanceConfig_TypeInfo;
      }
      if ( !LODWORD(choiceRandomLimitCountDic[2].fields._values) )
      {
        j_il2cpp_runtime_class_init_0(choiceRandomLimitCountDic);
        choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)BalanceConfig_TypeInfo;
      }
      if ( v19 <= choiceRandomLimitCountDic[2].fields._entries->m_Items[0].fields.next )
        goto LABEL_53;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)OptionManager__GetFriendCostume(0);
      if ( ((unsigned __int8)choiceRandomLimitCountDic & 1) != 0 )
      {
LABEL_53:
        if ( !v15 )
          goto LABEL_49;
        items = v15->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_49;
        size = v15->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            v19,
            *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v15->fields._size = size + 1;
          items->m_Items[size] = v19;
        }
      }
LABEL_43:
      LODWORD(max_length) = v16->max_length;
    }
  }
  if ( !v15 )
    goto LABEL_49;
  v23 = UnityEngine_Random__Range_71829860(0, v15->fields._size, 0);
  Item = System_Collections_Generic_List_int___get_Item(
           v15,
           v23,
           (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
  v24 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v24 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v24->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_object__int___Add(
    choiceRandomLimitCountDic,
    Key,
    Item,
    (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return Item;
}


int32_t RandomLimitCountManager__GetGroupIndex(
        UserServantEntity_o *userServantEntity,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  void *IsCostume; // x0
  __int64 v8; // x1
  ServantCostumeMaster_o *v9; // x21
  __int64 v10; // x20
  __int64 v11; // x22
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w0
  int32_t v16; // w19
  Il2CppObject *Master_object; // x0
  __int64 v18; // x8
  ServantLimitAddMaster_o *v19; // x20
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4CEA7C4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA7C4 = 1;
  }
  entity = 0;
  IsCostume = (void *)LimitCountUtility__IsCostume(limitCountStage, 0);
  if ( ((unsigned __int8)IsCostume & 1) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsCostume = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
    if ( userServantEntity )
    {
      v9 = (ServantCostumeMaster_o *)IsCostume;
      v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v21.fields.currentCryptoKey = v11;
      *(_QWORD *)&v21.fields.fakeValue = v10;
      IsCostume = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v21, 0);
      if ( v9 )
      {
        IsCostume = ServantCostumeMaster__GetEntity(v9, (int32_t)IsCostume, limitCountStage, 0);
        if ( IsCostume )
          return *((_DWORD *)IsCostume + 6);
      }
    }
LABEL_22:
    sub_1C7BD40(IsCostume, v8);
  }
  if ( !userServantEntity )
    goto LABEL_22;
  v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v22, 0);
  v16 = LimitCountUtility__ConvertStageToLimitCount(v15, limitCountStage, hasRewardStage, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitAddMaster_o *)Master_object;
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  IsCostume = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v23, 0);
  if ( !v19 )
    goto LABEL_22;
  if ( !ServantLimitAddMaster__TryGetEntity(v19, &entity, (int32_t)IsCostume, v16, 0) )
    return 0;
  IsCostume = entity;
  if ( !entity )
    goto LABEL_22;
  return ServantLimitAddEntity__GetRandomGroupIndex(entity, 0);
}


bool RandomLimitCountManager__HasRandomGroup(UserServantEntity_o *userServantEntity, const MethodInfo *method)
{
  __int64 v3; // x19
  int64_t Master_object; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v13; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // q1
  UserServantCollectionMaster_o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v16; // x8
  int64_t v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  UserServantCollectionEntity_o *v21; // x20
  int32_t currentCryptoKey; // w21
  System_Int32_array *LimitCountStageList_43682576; // x20
  System_Func_int__bool__o *v24; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4CEA7C6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_int____78794392);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_RandomLimitCountManager___c__DisplayClass11_0__HasRandomGroup_b__0__);
    sub_1C7BAE8(&RandomLimitCountManager___c__DisplayClass11_0_TypeInfo);
    byte_4CEA7C6 = 1;
  }
  v3 = sub_1C7BD34(RandomLimitCountManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = userServantEntity;
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v3 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)userServantEntity, v6, v7, v8, v9, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v13 = *v12;
  if ( !*v12 )
    goto LABEL_16;
  v14 = v13[4];
  v15 = (UserServantCollectionMaster_o *)Master_object;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v27.fields.currentCryptoKey = v13[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v27.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v26 = v27;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v26, 0);
  v16 = *v12;
  if ( !*v12 )
    goto LABEL_16;
  v17 = Master_object;
  v19 = *(_QWORD *)&v16[5].fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v19;
  *(_QWORD *)&v28.fields.fakeValue = v18;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v28, 0);
  if ( !v15
    || (Master_object = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v15, v17, Master_object, 0),
        (v20 = *v12) == 0)
    || (v21 = (UserServantCollectionEntity_o *)Master_object,
        currentCryptoKey = v20[16].fields.currentCryptoKey,
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v20[6], 0),
        !v21) )
  {
LABEL_16:
    sub_1C7BD40(Master_object, v5);
  }
  LimitCountStageList_43682576 = UserServantCollectionEntity__GetLimitCountStageList_43682576(
                                   v21,
                                   currentCryptoKey,
                                   Master_object,
                                   1,
                                   0);
  v24 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v24,
    (Il2CppObject *)v3,
    Method_RandomLimitCountManager___c__DisplayClass11_0__HasRandomGroup_b__0__,
    0);
  return BasicHelper__Any_int__51745960(
           LimitCountStageList_43682576,
           (System_Func_T__bool__o *)v24,
           (const MethodInfo_31594A8 *)Method_BasicHelper_Any_int____78794392);
}


bool RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_4CEA7C1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA7C1 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v3->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1C7BD40(0, method);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_34E9950 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  RandomLimitCountManager_c *v1; // x0

  if ( (byte_4CEA7BF & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA7BF = 1;
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
  if ( (byte_4CEA7BE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA7BE = 1;
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
      sub_1C7BD40(0, method);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_34E98E4 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}


void RandomLimitCountManager___c__DisplayClass10_0___ctor(
        RandomLimitCountManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RandomLimitCountManager___c__DisplayClass10_0___ChoiceLimitCount_b__0(
        RandomLimitCountManager___c__DisplayClass10_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UserServantEntity_o *userServantEntity; // x21

  if ( (byte_4CEA7C8 & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA7C8 = 1;
  }
  if ( e < 1 )
    return 0;
  userServantEntity = this->fields.userServantEntity;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  return RandomLimitCountManager__GetGroupIndex(userServantEntity, e, 1, v3) == this->fields.groupIndex;
}


void RandomLimitCountManager___c__DisplayClass11_0___ctor(
        RandomLimitCountManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RandomLimitCountManager___c__DisplayClass11_0___HasRandomGroup_b__0(
        RandomLimitCountManager___c__DisplayClass11_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UserServantEntity_o *userServantEntity; // x20

  if ( (byte_4CEA7C9 & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA7C9 = 1;
  }
  if ( e < 1 )
    return 0;
  userServantEntity = this->fields.userServantEntity;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  return RandomLimitCountManager__GetGroupIndex(userServantEntity, e, 1, v3) != 0;
}