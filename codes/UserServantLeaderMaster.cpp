void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE663 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EE663 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    145,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *__fastcall UserServantLeaderMaster__GetEntity(
        UserServantLeaderMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EE661 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__,
      userId,
      classId,
      *(_QWORD *)&supportDeckId);
    byte_42EE661 = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantLeaderMaster__TryGetEntity(
        UserServantLeaderMaster_o *this,
        UserServantLeaderEntity_o **entity,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EE662 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&classId);
    byte_42EE662 = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v21; // w22
  int v22; // w21

  if ( (byte_42EE665 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v14, v15, v16);
    byte_42EE665 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  }
  v21 = *((_DWORD *)SupportDeck[11].monitor + 38);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)UserServantLeaderMaster__getSupportDeck(
                                                                     this,
                                                                     ++v22,
                                                                     v19);
      if ( !v17 )
        break;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
        SupportDeck,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v22 >= v21 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_13:
    sub_B5D69C(SupportDeck, v18);
  }
  if ( !v17 )
    goto LABEL_13;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getSupportDeck(
        UserServantLeaderMaster_o *this,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  __int64 Instance; // x0
  EquipTargetInfo_o *v33; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v34; // x21
  int32_t Count; // w22
  BalanceConfig_c *v36; // x8
  UserServantLeaderEntity_array *v37; // x23
  __int64 v38; // x28
  unsigned __int64 v39; // x24
  UserServantLeaderEntity_o **m_Items; // x20
  UserServantLeaderEntity_o *v41; // x25
  const MethodInfo *v42; // x3
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  BalanceConfig_c *v49; // x0
  int32_t v50; // w24
  __int64 v51; // x25
  __int64 v52; // x9
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x4
  __int64 v55; // x2
  __int64 v56; // x8
  __int128 v57; // q0
  __int64 v58; // x8
  __int128 v59; // q0
  System_Int64_array *v60; // x26
  __int64 v61; // x8
  UserServantLeaderEntity_o *v62; // x8
  __int64 v64; // x0
  __int64 v65; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-80h]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42EE664 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, supportDeckId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&long___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&UserServantLeaderEntity___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UserServantLeaderEntity_TypeInfo, v29, v30, v31);
    byte_42EE664 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_56:
    sub_B5D69C(Instance, v33);
  }
  v34 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v36 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  v37 = (UserServantLeaderEntity_array *)sub_B5D5DC(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v36->static_fields->SupportDeckMemberMax);
  v38 = 0LL;
  v39 = 0LL;
  m_Items = v37->m_Items;
  while ( 1 )
  {
    v49 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v39 >= v49->static_fields->SupportDeckMemberMax )
      break;
    v41 = (UserServantLeaderEntity_o *)sub_B5D694(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_35201652(v41, v39, supportDeckId, v42);
    if ( !v37 )
      goto LABEL_56;
    if ( v41 )
    {
      Instance = sub_B5D684(v41, v37->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_59;
    }
    if ( v39 >= v37->max_length )
    {
LABEL_57:
      v64 = sub_B5D6C8(Instance);
      sub_B5D668(v64, 0LL);
    }
    m_Items[v39] = v41;
    sub_B5D560((BattleServantConfConponent_o *)&m_Items[v38], (System_Int32_array **)v41, v43, v44, v45, v46, v47, v48);
    ++v39;
    ++v38;
  }
  if ( Count >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        goto LABEL_56;
      Instance = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v50,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_56;
      v33 = (EquipTargetInfo_o *)UserServantLeaderEntity_TypeInfo;
      v51 = Instance;
      v52 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v52
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v52 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v53 = *(const MethodInfo **)(Instance + 56);
        if ( v53 )
        {
          if ( !v34 )
            goto LABEL_56;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       v34,
                       &entity,
                       (int64_t)v53,
                       (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v37 )
              goto LABEL_56;
            v55 = *(int *)(v51 + 52);
            if ( (unsigned int)v55 >= v37->max_length )
              goto LABEL_57;
            Instance = (__int64)v37->m_Items[v55];
            if ( !Instance )
              goto LABEL_56;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              entity,
              v55,
              supportDeckId,
              v54);
          }
        }
        v56 = *(_QWORD *)(v51 + 32);
        if ( v56 )
        {
          v57 = *(_OWORD *)(v56 + 40);
          *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v56 + 24);
          *(_OWORD *)&v69.fields.fakeValue = v57;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v68 = v69;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
          if ( Instance )
          {
            Instance = sub_B5D5DC(long___TypeInfo, 1LL);
            v58 = *(_QWORD *)(v51 + 32);
            if ( !v58 )
              goto LABEL_56;
            v59 = *(_OWORD *)(v58 + 40);
            v60 = (System_Int64_array *)Instance;
            *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v58 + 24);
            *(_OWORD *)&v69.fields.fakeValue = v59;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v67 = v69;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
            if ( !v60 )
              goto LABEL_56;
            if ( !v60->max_length )
              goto LABEL_57;
            v60->m_Items[0] = Instance;
            if ( !v34 )
              goto LABEL_56;
            Instance = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v34, v60, 0LL);
          }
          if ( !v37 )
            goto LABEL_56;
        }
        else
        {
          Instance = 0LL;
          if ( !v37 )
            goto LABEL_56;
        }
        v61 = *(int *)(v51 + 52);
        if ( (unsigned int)v61 >= v37->max_length )
          goto LABEL_57;
        v62 = v37->m_Items[v61];
        if ( (Instance & 1) != 0 )
        {
          v33 = *(EquipTargetInfo_o **)(v51 + 32);
          if ( !v62 )
            goto LABEL_56;
        }
        else
        {
          v33 = 0LL;
          if ( !v62 )
            goto LABEL_56;
        }
        UserServantLeaderEntity__setEquipTargetInfo(v62, v33, v53);
      }
      if ( ++v50 >= Count )
        return v37;
    }
    sub_B5D990(Instance);
LABEL_59:
    v65 = sub_B5D6BC(Instance);
    sub_B5D668(v65, 0LL);
  }
  return v37;
}