void RandomLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C227D6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C227D6 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v1,
    (const MethodInfo_3440C44 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)RandomLimitCountManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v17; // [xsp+10h] [xbp-30h] BYREF
  int64_t v18; // [xsp+18h] [xbp-28h] BYREF

  v17 = userSvtId;
  v18 = userId;
  v16 = groupIndex;
  if ( (byte_4C227D2 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C227D2 = 1;
  }
  v4 = sub_1C2D538(string___TypeInfo, 5);
  v5 = System_Int64__ToString((int64_t)&v18, 0);
  if ( !v4 )
    sub_1C2D6EC(v5, v6);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v5, v7, v8);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v10 = StringLiteral_1456/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1456/*":"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 40), v10, v7, v9);
  v5 = System_Int64__ToString((int64_t)&v17, 0);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_1C2D434((CGThumbnailListItem_o *)(v4 + 48), (int32_t)v5, v7, v11),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v13 = StringLiteral_1456/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1456/*":"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v4 + 56), v13, v7, v12),
        v5 = System_Int32__ToString((int32_t)&v16, 0),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C2D6F4(v5, v6, v7);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 64), (int32_t)v5, v7, v14);
  return System_String__Concat_63498380((System_String_array *)v4, 0);
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
  System_Int32_array *CostumeList_42905040; // x0
  System_Int32_array *RandomLimitCountList; // x23
  Il2CppObject *v48; // x24
  Il2CppObject *v49; // x25
  System_Collections_Generic_List_int__o *v50; // x22
  __int64 v51; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v53; // x20
  int32_t v54; // w26
  BalanceConfig_c *v55; // x0
  BalanceConfig_c **v56; // x21
  __int64 v57; // x27
  __int64 v58; // x28
  __int64 v59; // x27
  __int64 v60; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  __int64 v64; // x19
  __int64 v65; // x21
  int32_t v66; // w0
  RandomLimitCountManager_c *v67; // x0
  Il2CppObject *v69; // [xsp+10h] [xbp-100h]
  int32_t groupIndex; // [xsp+1Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+80h] [xbp-90h]
  ServantLimitAddEntity_o *v75; // [xsp+A0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_4C227D4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C227D4 = 1;
  }
  v75 = 0;
  entitya = 0;
  if ( entity )
  {
    v4 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v3 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v77.fields.currentCryptoKey = v4;
    *(_QWORD *)&v77.fields.fakeValue = v3;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v77, 0) )
    {
      v6 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v5 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v78.fields.currentCryptoKey = v6;
      *(_QWORD *)&v78.fields.fakeValue = v5;
      v7 = &BalanceConfig_TypeInfo;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v78, 0);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0;
        v21 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v22 = (ServantLimitAddMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v80.fields.currentCryptoKey = v21;
        *(_QWORD *)&v80.fields.fakeValue = v20;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v80, 0);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_89;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v14 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v15 = (ServantCostumeMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v79.fields.currentCryptoKey = v14;
        *(_QWORD *)&v79.fields.fakeValue = v13;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v79, 0);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
          *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v74.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v73 = v74;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v73, 0);
          v26 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
          v27 = v25;
          *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v72.fields.fakeValue = v26;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v72, 0);
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
                       (const MethodInfo_3441578 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_89;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_89;
          v33 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          v34 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          v35 = (UserServantCollectionMaster_o *)v33;
          *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v74.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v71 = v74;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v71, 0);
          v38 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v37 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          v39 = v36;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v81.fields.currentCryptoKey = v38;
          *(_QWORD *)&v81.fields.fakeValue = v37;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v81, 0);
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
            *(_QWORD *)&v82.fields.currentCryptoKey = v44;
            *(_QWORD *)&v82.fields.fakeValue = v43;
            v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v82, 0);
            CostumeList_42905040 = UserServantCollectionEntity__getCostumeList_42905040(v41, lv, v45, 0);
          }
          else
          {
            CostumeList_42905040 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
          }
          RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_42905040, 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v69 = Key;
          v48 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          v49 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v50 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v50,
            (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !RandomLimitCountList )
            goto LABEL_89;
          max_length = RandomLimitCountList->max_length;
          if ( (int)max_length < 1 )
          {
LABEL_78:
            v65 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v64 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v85.fields.currentCryptoKey = v65;
            *(_QWORD *)&v85.fields.fakeValue = v64;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v85, 0);
            if ( (_DWORD)Instance )
            {
              if ( !v50 )
                goto LABEL_89;
              v66 = UnityEngine_Random__Range_71123924(0, v50->fields._size, 0);
              Item = System_Collections_Generic_List_int___get_Item(
                       v50,
                       v66,
                       (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
            }
            else
            {
              Item = 1;
            }
            v67 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v67 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v67->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
            {
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                v69,
                Item,
                (const MethodInfo_34415F8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              return Item;
            }
LABEL_89:
            sub_1C2D6EC(Instance, v11);
          }
          v53 = 0;
          while ( 1 )
          {
            if ( v53 >= (unsigned int)max_length )
              sub_1C2D6F4(Instance, v11, v51);
            v54 = RandomLimitCountList->m_Items[v53];
            if ( v54 == -1 )
              goto LABEL_77;
            v55 = *v7;
            if ( !(*v7)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v55);
              v55 = *v7;
            }
            v56 = v7;
            if ( v54 <= v55->static_fields->ServantLimitMax )
            {
              v75 = 0;
              v60 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v59 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v84.fields.currentCryptoKey = v60;
              *(_QWORD *)&v84.fields.fakeValue = v59;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v84, 0);
              if ( !v49 )
                goto LABEL_89;
              v7 = v56;
              if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v49, &v75, (int32_t)Instance, v54, 0) )
              {
                Instance = (DataManager_o *)v75;
                if ( !v75 )
                  goto LABEL_89;
                Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v75, 0);
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
                v62 = Method_System_Collections_Generic_List_int__Add__;
                ++v50->fields._version;
                if ( !items )
                  goto LABEL_89;
                size = v50->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v50,
                    v54,
                    *(const MethodInfo_376CB60 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
                }
                else
                {
                  v50->fields._size = size + 1;
                  items->m_Items[size] = v54;
                }
              }
            }
            else
            {
              v58 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v57 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v83.fields.currentCryptoKey = v58;
              *(_QWORD *)&v83.fields.fakeValue = v57;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v83, 0);
              if ( !v48 )
                goto LABEL_89;
              Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                            (ServantCostumeMaster_o *)v48,
                                            (int32_t)Instance,
                                            v54,
                                            0);
              v7 = v56;
              if ( Instance && LODWORD(Instance->fields.m_CancellationTokenSource) == groupIndex )
                goto LABEL_72;
            }
LABEL_77:
            LODWORD(max_length) = RandomLimitCountList->max_length;
            if ( (__int64)++v53 >= (int)max_length )
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


int32_t RandomLimitCountManager__GetChoiceLimitCount_33442732(ServantLeaderInfo_o *info, const MethodInfo *method)
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
  __int64 v16; // x2
  struct System_Int32_array *v17; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  int32_t v20; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int32_t v24; // w0
  RandomLimitCountManager_c *v25; // x8

  if ( (byte_4C227D5 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C227D5 = 1;
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
               (const MethodInfo_3441578 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_49:
    sub_1C2D6EC(choiceRandomLimitCountDic, v9);
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !choiceRandomLimitCountDic )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)choiceRandomLimitCountDic,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = info->fields.randomLimitCountTargets;
  if ( !v17 )
    goto LABEL_49;
  max_length = v17->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C2D6F4(choiceRandomLimitCountDic, v9, v16);
      v20 = v17->m_Items[i];
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
                                                                                              v20,
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
      if ( v20 == choiceRandomLimitCountDic[2].fields._entries->m_Items[0].fields.next )
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
      if ( v20 <= choiceRandomLimitCountDic[2].fields._entries->m_Items[0].fields.next )
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
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_49;
        size = v15->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            v20,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v15->fields._size = size + 1;
          items->m_Items[size] = v20;
        }
      }
LABEL_43:
      LODWORD(max_length) = v17->max_length;
    }
  }
  if ( !v15 )
    goto LABEL_49;
  v24 = UnityEngine_Random__Range_71123924(0, v15->fields._size, 0);
  Item = System_Collections_Generic_List_int___get_Item(
           v15,
           v24,
           (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
  v25 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v25 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v25->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_object__int___Add(
    choiceRandomLimitCountDic,
    Key,
    Item,
    (const MethodInfo_34415F8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return Item;
}


bool RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_4C227D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C227D3 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v3->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1C2D6EC(0, method);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_34417EC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  RandomLimitCountManager_c *v1; // x0

  if ( (byte_4C227D1 & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C227D1 = 1;
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
  if ( (byte_4C227D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C227D0 = 1;
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
      sub_1C2D6EC(0, method);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_3441780 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}