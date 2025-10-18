void RandomLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3E28D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    byte_4C3E28D = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v1,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)RandomLimitCountManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


System_String_o *RandomLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v4; // x19
  System_String_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v20; // [xsp+10h] [xbp-30h] BYREF
  int64_t v21; // [xsp+18h] [xbp-28h] BYREF

  v20 = userSvtId;
  v21 = userId;
  v19 = groupIndex;
  if ( (byte_4C3E289 & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C3E289 = 1;
  }
  v4 = sub_1C37100(string___TypeInfo, 5);
  v5 = System_Int64__ToString((int64_t)&v21, 0);
  if ( !v4 )
    sub_1C372B4(v5);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v5, v6, v7);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v10 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1457/*":"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), v10, v8, v9);
  v5 = System_Int64__ToString((int64_t)&v20, 0);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 48), (int32_t)v5, v11, v12),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v15 = StringLiteral_1457/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1457/*":"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 56), v15, v13, v14),
        v5 = System_Int32__ToString((int32_t)&v19, 0),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C372BC(v5);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 64), (int32_t)v5, v16, v17);
  return System_String__Concat_63602172((System_String_array *)v4, 0);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  ServantCostumeMaster_o *v14; // x20
  int32_t v15; // w21
  ServantCostumeEntity_o *v16; // x0
  int32_t Item; // w19
  Il2CppObject *Master_object; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  ServantLimitAddMaster_o *v21; // x20
  int32_t v22; // w21
  __int128 v23; // q1
  int64_t v24; // x0
  __int128 v25; // q1
  int64_t v26; // x20
  const MethodInfo *v27; // x3
  int64_t v28; // x22
  Il2CppObject *Key; // x21
  const MethodInfo *v30; // x1
  RandomLimitCountManager_c *v31; // x0
  Il2CppObject *v32; // x0
  __int128 v33; // q0
  UserServantCollectionMaster_o *v34; // x22
  int64_t v35; // x0
  __int64 v36; // x24
  __int64 v37; // x25
  int64_t v38; // x23
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v40; // x22
  int32_t lv; // w23
  __int64 v42; // x24
  __int64 v43; // x25
  int32_t v44; // w0
  System_Int32_array *CostumeList_43140104; // x0
  System_Int32_array *RandomLimitCountList; // x23
  Il2CppObject *v47; // x24
  Il2CppObject *v48; // x25
  System_Collections_Generic_List_int__o *v49; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v51; // x20
  int32_t v52; // w26
  BalanceConfig_c *v53; // x0
  BalanceConfig_c **v54; // x21
  __int64 v55; // x27
  __int64 v56; // x28
  __int64 v57; // x27
  __int64 v58; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  __int64 v62; // x19
  __int64 v63; // x21
  int32_t v64; // w0
  RandomLimitCountManager_c *v65; // x0
  Il2CppObject *v67; // [xsp+10h] [xbp-100h]
  int32_t groupIndex; // [xsp+1Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+80h] [xbp-90h]
  ServantLimitAddEntity_o *v73; // [xsp+A0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4C3E28B & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3E28B = 1;
  }
  v73 = 0;
  entitya = 0;
  if ( entity )
  {
    v4 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v3 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v75.fields.currentCryptoKey = v4;
    *(_QWORD *)&v75.fields.fakeValue = v3;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v75, 0) )
    {
      v6 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v5 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v76.fields.currentCryptoKey = v6;
      *(_QWORD *)&v76.fields.fakeValue = v5;
      v7 = &BalanceConfig_TypeInfo;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v76, 0);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0;
        v20 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v21 = (ServantLimitAddMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v78.fields.currentCryptoKey = v20;
        *(_QWORD *)&v78.fields.fakeValue = v19;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v78, 0);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                      entity->fields.dispLimitCount,
                                      0);
        if ( !v21 )
          goto LABEL_89;
        if ( ServantLimitAddMaster__TryGetEntity(v21, &entitya, v22, (int32_t)Instance, 0) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_89;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v13 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v14 = (ServantCostumeMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v77.fields.currentCryptoKey = v13;
        *(_QWORD *)&v77.fields.fakeValue = v12;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v77, 0);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                      entity->fields.dispLimitCount,
                                      0);
        if ( !v14 )
          goto LABEL_89;
        v16 = ServantCostumeMaster__GetEntity(v14, v15, (int32_t)Instance, 0);
        if ( v16 )
        {
          groupIndex = v16->fields.groupIndex;
LABEL_28:
          v23 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v72.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v71 = v72;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v71, 0);
          v25 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
          v26 = v24;
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v70.fields.fakeValue = v25;
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v70, 0);
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(v26, v28, groupIndex, v27);
          if ( RandomLimitCountManager__IsChose((System_String_o *)Key, v30) )
          {
            v31 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v31 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v31->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
              return System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                       Key,
                       (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_89;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_89;
          v32 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          v33 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          v34 = (UserServantCollectionMaster_o *)v32;
          *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v72.fields.fakeValue = v33;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v69 = v72;
          v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v69, 0);
          v37 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v36 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          v38 = v35;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v79.fields.currentCryptoKey = v37;
          *(_QWORD *)&v79.fields.fakeValue = v36;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v79, 0);
          if ( !v34 )
            goto LABEL_89;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v38, (int32_t)Instance, 0);
          if ( EntityDefinitely )
          {
            v40 = EntityDefinitely;
            lv = entity->fields.lv;
            v43 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v42 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v80.fields.currentCryptoKey = v43;
            *(_QWORD *)&v80.fields.fakeValue = v42;
            v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v80, 0);
            CostumeList_43140104 = UserServantCollectionEntity__getCostumeList_43140104(v40, lv, v44, 0);
          }
          else
          {
            CostumeList_43140104 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
          }
          RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_43140104, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v67 = Key;
          v47 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          v48 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v49 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v49,
            (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !RandomLimitCountList )
            goto LABEL_89;
          max_length = RandomLimitCountList->max_length;
          if ( (int)max_length < 1 )
          {
LABEL_78:
            v63 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v62 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v83.fields.currentCryptoKey = v63;
            *(_QWORD *)&v83.fields.fakeValue = v62;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v83, 0);
            if ( (_DWORD)Instance )
            {
              if ( !v49 )
                goto LABEL_89;
              v64 = UnityEngine_Random__Range_71226972(0, v49->fields._size, 0);
              Item = System_Collections_Generic_List_int___get_Item(
                       v49,
                       v64,
                       (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
            }
            else
            {
              Item = 1;
            }
            v65 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v65 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v65->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
            {
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                v67,
                Item,
                (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              return Item;
            }
LABEL_89:
            sub_1C372B4(Instance);
          }
          v51 = 0;
          while ( 1 )
          {
            if ( v51 >= (unsigned int)max_length )
              sub_1C372BC(Instance);
            v52 = RandomLimitCountList->m_Items[v51];
            if ( v52 == -1 )
              goto LABEL_77;
            v53 = *v7;
            if ( !(*v7)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v53);
              v53 = *v7;
            }
            v54 = v7;
            if ( v52 <= v53->static_fields->ServantLimitMax )
            {
              v73 = 0;
              v58 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v57 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v82.fields.currentCryptoKey = v58;
              *(_QWORD *)&v82.fields.fakeValue = v57;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v82, 0);
              if ( !v48 )
                goto LABEL_89;
              v7 = v54;
              if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v48, &v73, (int32_t)Instance, v52, 0) )
              {
                Instance = (DataManager_o *)v73;
                if ( !v73 )
                  goto LABEL_89;
                Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v73, 0);
              }
              else
              {
                Instance = 0;
              }
              if ( (_DWORD)Instance == groupIndex )
              {
LABEL_72:
                if ( !v49 )
                  goto LABEL_89;
                items = v49->fields._items;
                v60 = Method_System_Collections_Generic_List_int__Add__;
                ++v49->fields._version;
                if ( !items )
                  goto LABEL_89;
                size = v49->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v49,
                    v52,
                    *(const MethodInfo_3786000 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                }
                else
                {
                  v49->fields._size = size + 1;
                  items->m_Items[size] = v52;
                }
              }
            }
            else
            {
              v56 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v55 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v81.fields.currentCryptoKey = v56;
              *(_QWORD *)&v81.fields.fakeValue = v55;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v81, 0);
              if ( !v47 )
                goto LABEL_89;
              Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                            (ServantCostumeMaster_o *)v47,
                                            (int32_t)Instance,
                                            v52,
                                            0);
              v7 = v54;
              if ( Instance && LODWORD(Instance->fields.m_CancellationTokenSource) == groupIndex )
                goto LABEL_72;
            }
LABEL_77:
            LODWORD(max_length) = RandomLimitCountList->max_length;
            if ( (__int64)++v51 >= (int)max_length )
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


int32_t RandomLimitCountManager__GetChoiceLimitCount_33407856(ServantLeaderInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Int32_array *randomLimitCountTargets; // x8
  int64_t userId; // x20
  int64_t userSvtId; // x21
  Il2CppObject *Key; // x20
  const MethodInfo *v8; // x1
  RandomLimitCountManager_c *v9; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0
  int32_t Item; // w19
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v14; // x21
  struct System_Int32_array *v15; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  int32_t v18; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  int32_t v22; // w0
  RandomLimitCountManager_c *v23; // x8

  if ( (byte_4C3E28C & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3E28C = 1;
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
    v9 = RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v9 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v9->static_fields->choiceRandomLimitCountDic;
    if ( choiceRandomLimitCountDic )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               choiceRandomLimitCountDic,
               Key,
               (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_49:
    sub_1C372B4(choiceRandomLimitCountDic);
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !choiceRandomLimitCountDic )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)choiceRandomLimitCountDic,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v14 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = info->fields.randomLimitCountTargets;
  if ( !v15 )
    goto LABEL_49;
  max_length = v15->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C372BC(choiceRandomLimitCountDic);
      v18 = v15->m_Items[i];
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
                                                                                              v18,
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
      if ( v18 == choiceRandomLimitCountDic[2].fields._entries->m_Items[0].fields.next )
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
      if ( v18 <= choiceRandomLimitCountDic[2].fields._entries->m_Items[0].fields.next )
        goto LABEL_53;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)OptionManager__GetFriendCostume(0);
      if ( ((unsigned __int8)choiceRandomLimitCountDic & 1) != 0 )
      {
LABEL_53:
        if ( !v14 )
          goto LABEL_49;
        items = v14->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_49;
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v14,
            v18,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v14->fields._size = size + 1;
          items->m_Items[size] = v18;
        }
      }
LABEL_43:
      LODWORD(max_length) = v15->max_length;
    }
  }
  if ( !v14 )
    goto LABEL_49;
  v22 = UnityEngine_Random__Range_71226972(0, v14->fields._size, 0);
  Item = System_Collections_Generic_List_int___get_Item(
           v14,
           v22,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
  v23 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v23 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v23->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_object__int___Add(
    choiceRandomLimitCountDic,
    Key,
    Item,
    (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return Item;
}


bool RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_4C3E28A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    byte_4C3E28A = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v3->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1C372B4(0);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_345AAF4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  RandomLimitCountManager_c *v1; // x0

  if ( (byte_4C3E288 & 1) == 0 )
  {
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    byte_4C3E288 = 1;
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
  if ( (byte_4C3E287 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    byte_4C3E287 = 1;
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
      sub_1C372B4(0);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_345AA88 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}